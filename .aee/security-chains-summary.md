# Security Chains Summary

**Generated:** 2026-10-04

## Counts

| Status | Count |
|---|---|
| Confirmed chains | 2 |
| Partial chains | 3 |

### Confirmed chains by severity

| Severity | Count |
|---|---|
| Critical | 0 |
| High | 1 |
| Medium | 1 |

### Partial chains by severity

| Severity | Count |
|---|---|
| Critical | 2 |
| High | 1 |

**Severity upgrade note:** No chains were upgraded. The Link Graph contains no `crossComponent: true` hops and no resolved cross-component seams. The bus topic (`aurora.telemetry.tenant`) is an open end — the producer component has not yet been delivered — and does not qualify as a resolved cross-component seam under the upgrade rule.

---

## Confirmed Chains

| Chain ID | Source File | Source Kind | Sink File | Sink Kind | OWASP | CWE | Severity | Confidence |
|---|---|---|---|---|---|---|---|---|
| chain-001 | src/tools/seam_index.py (L88) | cli-argument | src/tools/seam_index.py (L52) | file-read | A01 Broken Access Control | CWE-22 | medium | confirmed |
| chain-002 | src/payload_plaintext/aurora-portal/aurora_portal/telemetry_consumer.py (L8–12) | message-bus | src/payload_plaintext/aurora-portal/aurora_portal/telemetry_consumer.py (L17) | unsafe-deserialization | A08 Software and Data Integrity Failures | CWE-502 | high | confirmed |

### chain-001 — CLI path argument → arbitrary file read (CWE-22)

**Source:** `sys.argv[1]` → `root` at `seam_index.py:88` — unsanitised CLI argument.

**Hops:**
1. `seam_index.py:89` — `root` passed to `scan(root)`
2. `seam_index.py:43` — `root` used as argument to `os.walk(root)`
3. `seam_index.py:46` — `path` constructed via `os.path.join(base, name)` from walk output

**Sink:** `open(path, ...)` at `seam_index.py:52` — reads arbitrary files reachable from the attacker-controlled root.

**Sanitisation gaps:** No `os.path.realpath`/prefix check at L88; directory blocklist at L44 filters only named subdirs, not the root itself.

---

### chain-002 — External bus message → unsafe YAML deserialisation (CWE-502)

**Source:** `aurora.telemetry.tenant` bus topic — external/network input from tenant systems outside the service trust boundary. Messages arrive via `bus.subscribe(TENANT_TOPIC)` at `telemetry_consumer.py:12`.

**Hops:**
1. `telemetry_consumer.py:12–13` — `consume()` iterates over bus messages and yields each to `handle()`
2. `telemetry_consumer.py:16` — `handle(message)` receives the full message object

**Sink:** `yaml.load(message.body)` at `telemetry_consumer.py:17` — PyYAML default Loader allows `!!python/object/apply` tags; a malicious publisher on the bus topic can achieve arbitrary Python code execution in the consumer process.

**Sanitisation gaps:** No SafeLoader at L17; no schema validation or size limit on `message.body` at L12–13.

---

## Partial Chains

| Chain ID | Source File | Stopped At | Sink File | Sink Kind | OWASP | CWE | Severity | Stop Reason |
|---|---|---|---|---|---|---|---|---|
| chain-003 | src/payload_plaintext/aurora-portal/aurora_portal/api.py (L29) | L29 — no callers in source | api.py (L31) | shell-execution | A03 Injection | CWE-78 | critical | Caller origin of project_id/destination unknown |
| chain-004 | src/payload_plaintext/aurora-portal/aurora_portal/region_lookup.py (L9) | L9 — no callers in source | region_lookup.py (L10–12) | sql-execution | A03 Injection | CWE-89 | critical | Caller origin of project parameter unknown |
| chain-005 | src/payload_plaintext/aurora-portal/aurora_portal/api.py (L15) | L15 — no callers in source | api.py (L17) | unsafe-deserialization | A08 Software and Data Integrity Failures | CWE-502 | high | Caller origin of path parameter unknown |

### chain-003 — Unsanitised shell command construction in export_report() (CWE-78, partial)

**Stopped at:** `api.py:29` — no callers of `export_report(project_id, destination)` found in delivered source. Upstream origin of `project_id` and `destination` unknown.

**Traceable portion:** `project_id` and `destination` are interpolated without escaping into a shell command string at `api.py:30`, then executed via `os.system()` at `api.py:31`. Shell metacharacters in either parameter enable arbitrary command execution.

**Gap for human review:** Identify all call sites of `export_report()`. If either parameter derives from an HTTP request, form field, or other external input without sanitisation, this partial chain becomes a confirmed critical injection chain.

---

### chain-004 — SQL injection in region_for() via string interpolation (CWE-89, partial)

**Stopped at:** `region_lookup.py:9` — no callers of `region_for(cursor, project)` found in delivered source. Upstream origin of `project` unknown.

**Traceable portion:** `project` is interpolated directly into a raw SQL string at `region_lookup.py:11` and passed to `cursor.execute()` at `region_lookup.py:10`. No parameterisation, quoting, or allowlist check is applied.

**Gap for human review:** Identify all call sites of `region_for()`. If `project` derives from an HTTP request parameter or other external input, this is a confirmed critical SQL injection chain.

---

### chain-005 — Caller-supplied path → unsafe YAML deserialisation in load_quota_profile() (CWE-502, partial)

**Stopped at:** `api.py:15` — no callers of `load_quota_profile(path)` found in delivered source. Upstream origin of `path` unknown.

**Traceable portion:** `path` is passed directly to `open()` at `api.py:16` and the file contents to `yaml.load()` at `api.py:17` without a SafeLoader. If `path` is attacker-controlled, both a path-traversal read and a deserialization code-execution attack are possible.

**Gap for human review:** Identify all call sites of `load_quota_profile()`. If `path` derives from external input, this partial chain confirms both CWE-22 and CWE-502 simultaneously.

---

## Additional Confirmed Findings (Not Taint Chains)

These confirmed findings do not form taint chains but are recorded here for completeness:

| File | Line | CWE | Title | Severity |
|---|---|---|---|---|
| api.py | 10 | CWE-798 | Hardcoded production DATABASE_PASSWORD in source | critical |
| api.py | 20–26 | CWE-295 | TLS certificate verification disabled (verify=False) | high |
| session.py | 9–11 | CWE-338 | Weak PRNG (random.choice) for session ID generation | high |
| session.py | 14–15 | CWE-916 | SHA-1 used for password hashing | high |
