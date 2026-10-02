#!/usr/bin/env python3
"""Cross language seam index.

Finds the points where one component hands work to another, by extracting the
literals that both sides must agree on and reporting the ones that appear in
more than one component. Deterministic, no model involved. The output is the
candidate link list that the assisted review then explains.

Usage: seam_index.py <source root> [--json]
"""
import json
import os
import re
import sys
from collections import defaultdict

# Join keys, meaning literals that two components must spell identically.
PATTERNS = [
    ("http endpoint", re.compile(r"""['"`](/v[0-9]+/[A-Za-z0-9_/.-]+)['"`]""")),
    ("bus topic", re.compile(r"""['"`]([a-z][a-z0-9]*(?:\.[a-z0-9_]+){2,})['"`]""")),
    ("database table", re.compile(r"""\b(?:FROM|INTO|UPDATE|JOIN)\s+([a-z_][a-z0-9_]{4,})""", re.I)),
    ("database table", re.compile(r"""TABLE\s*=\s*['"]([a-z_][a-z0-9_]{4,})['"]""")),
    ("environment variable", re.compile(r"""\b(AURORA_[A-Z0-9_]+)\b""")),
    ("json field", re.compile(r"""json:"([a-z_][a-z0-9_]*)\"""")),
    ("executable", re.compile(r"""['"`](aurora-[a-z]+)['"`]""")),
    ("subcommand", re.compile(r"""['"`](profile-[a-z]+|report|scan)['"`]""")),
    ("native symbol", re.compile(r"""\b(aurora_[a-z0-9_]+)\s*\(""")),
]

EXTENSIONS = {".c": "C", ".h": "C", ".cpp": "C++", ".go": "Go", ".java": "Java",
              ".py": "Python", ".js": "JavaScript", ".yaml": "YAML", ".yml": "YAML",
              ".json": "JSON", ".tf": "HCL", ".xml": "XML", ".txt": "text"}

NOISE = {"aurora_portal", "aurora_profile_count"}


def component_of(rel):
    return rel.split("/", 1)[0]


def scan(root):
    hits = defaultdict(list)          # (kind, literal) -> [(component, language, path, line)]
    for base, dirs, names in os.walk(root):
        dirs[:] = [d for d in dirs if d not in {".git", "node_modules", "build", "target"}]
        for name in names:
            path = os.path.join(base, name)
            ext = os.path.splitext(name)[1]
            if ext not in EXTENSIONS:
                continue
            rel = os.path.relpath(path, root).replace(os.sep, "/")
            try:
                lines = open(path, encoding="utf-8", errors="ignore").read().splitlines()
            except OSError:
                continue
            for number, line in enumerate(lines, 1):
                for kind, pattern in PATTERNS:
                    for value in pattern.findall(line):
                        if value in NOISE:
                            continue
                        hits[(kind, value)].append(
                            (component_of(rel), EXTENSIONS[ext], rel, number))
    return hits


def cross_component(hits):
    seams = []
    for (kind, value), sites in sorted(hits.items()):
        components = {s[0] for s in sites}
        languages = {s[1] for s in sites}
        if len(components) < 2:
            continue
        seams.append({
            "kind": kind,
            "join_key": value,
            "components": sorted(components),
            "languages": sorted(languages),
            "sites": [{"component": c, "language": l, "file": f, "line": n}
                      for c, l, f, n in sorted(sites)],
        })
    seams.sort(key=lambda s: (-len(s["languages"]), s["kind"], s["join_key"]))
    return seams


def main():
    if len(sys.argv) < 2:
        print(__doc__)
        return 2
    root = sys.argv[1]
    seams = cross_component(scan(root))
    if "--json" in sys.argv:
        json.dump(seams, sys.stdout, indent=2)
        return 0
    print("Cross language seams found: %d\n" % len(seams))
    for seam in seams:
        print("%-22s %s" % (seam["kind"], seam["join_key"]))
        print("  languages: %s" % ", ".join(seam["languages"]))
        for site in seam["sites"]:
            print("    %-11s %s:%d" % (site["language"], site["file"], site["line"]))
        print()
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
