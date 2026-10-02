# src/tools/seam_index.py

## Overview

`seam_index.py` is a Python CLI tool that scans a source tree to identify cross-component "seams" — shared literals (HTTP endpoints, message-bus topics, database table names, environment variables, JSON field names, executable names, subcommands, and native symbols) that must be spelled identically in two or more separate components. It walks the directory tree, applies a fixed set of compiled regex patterns to each recognised source file, collects all matches, and reports only those literals that appear in at least two distinct components, either as plain text or as a JSON array. The tool is deterministic and invokes no external model or service.

## Defined Symbols

| Name | Kind | Signature | Visibility | Lines |
|---|---|---|---|---|
| `PATTERNS` | module-level constant | `list[tuple[str, re.Pattern]]` | module | `seam_index.py:L18–L28` |
| `EXTENSIONS` | module-level constant | `dict[str, str]` | module | `seam_index.py:L30–L32` |
| `NOISE` | module-level constant | `set[str]` | module | `seam_index.py:L34` |
| `component_of` | function | `(rel: str) -> str` | module | `seam_index.py:L37–L38` |
| `scan` | function | `(root: str) -> defaultdict` | module | `seam_index.py:L41–L62` |
| `cross_component` | function | `(hits: dict) -> list` | module | `seam_index.py:L65–L81` |
| `main` | function | `() -> int` | module | `seam_index.py:L84–L100` |

## Dependencies

- `json` — stdlib JSON serialisation (`seam_index.py:L11`)
- `os` — directory traversal and path utilities (`seam_index.py:L12`)
- `re` — compiled regular expressions for pattern matching (`seam_index.py:L13`)
- `sys` — CLI argument access and exit-code propagation (`seam_index.py:L14`)
- `collections.defaultdict` — accumulator for per-literal hit lists (`seam_index.py:L15`)

## Side Effects

- **Directory traversal:** walks the entire `<root>` argument tree via `os.walk`, skipping `.git`, `node_modules`, `build`, and `target` directories (`seam_index.py:L43–L61`)
- **File-system read:** opens every file under `<root>` whose extension appears in `EXTENSIONS`, reading full contents into memory (`seam_index.py:L52`)
- **stdout write (JSON):** when `--json` flag is present, dumps the seams array via `json.dump` to `sys.stdout` (`seam_index.py:L91`)
- **stdout write (plain text):** in default mode, prints a formatted seam report to `sys.stdout` (`seam_index.py:L93–L99`)

## Security Surface

- **CLI argument — path parameter:** `sys.argv[1]` supplies the source root directory and is passed directly to `os.walk()` and `open()` without sanitisation; path traversal is possible if the caller is untrusted (`seam_index.py:L88`)
- **CLI argument — flag:** `sys.argv` is checked for the literal string `'--json'` to select the output format (`seam_index.py:L90`)
- **File read — arbitrary paths:** opens every file under `<root>` via `open(path, encoding='utf-8', errors='ignore')`, reading full file contents (`seam_index.py:L52`)
- **stdout sink:** string literals extracted from scanned source files are written verbatim to stdout (JSON or plain text), with no filtering beyond the `NOISE` set (`seam_index.py:L91–L99`)

## Notes

No `UNKNOWN` language or component flags and no ambiguous items were recorded in the KB record for this file.
