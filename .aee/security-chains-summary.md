# Security Chains Summary

**Generated:** 2026-10-08

## Counts

| Status | Count |
|---|---|
| Confirmed chains | 2 |
| Partial chains | 5 |

### Confirmed chains by severity

| Severity | Count |
|---|---|
| Critical | 1 |
| Medium | 1 |

### Partial chains by severity

| Severity | Count |
|---|---|
| Critical | 2 |
| High | 2 |

---

## Severity Upgrade Applied This Run

**chain-002 upgraded high → critical** — aurora-compute source delivered in this run resolved the `aurora.telemetry.tenant` bus seam. The link graph now records a confirmed `crossComponent: true` hop from `publish.go:29` (aurora-compute, Go) to `telemetry_consumer.py:8` (aurora-portal, Python). The cross-component upgrade rule applies; severity raised from `high` to `critical`.

---

## Confirmed Chains

| Chain ID | Source File | Source Kind | Sink File | Sink Kind | OWASP | CWE | Severity | Upgraded |
|---|---|---|---|---|---|---|---|---|
| chain-001 | src/tools/seam_index.py (L88) | cli-argument | src/tools/seam_index.py (L52) | file-read | A01 Broken Access Control | CWE-22 | medium | no |
| chain-002 | src/payload_plaintext/aurora-compute/services/telemetry/publish.go (L24–29) | bus-publish | src/payload_plaintext/aurora-portal/aurora_portal/telemetry_consumer.py (L17) | unsafe-deserialization | A08 Software and Data Integrity Failures | CWE-502 | **critical** | **yes (was high)** |

### chain-001 — CLI path argument → arbitrary file read (CWE-22, medium)

**Source:** `sys.argv[1]` → `root` at `seam_index.py:88`.

**Hops:**
1. `seam_index.py:89` — `root` passed to `scan(root)`
2. `seam_index.py:43` — `root` used in `os.walk(root)`
3. `seam_index.py:46` — `path` = `os.path.join(base, name)`

**Sink:** `open(path, ...)` at `seam_index.py:52` — arbitrary file read.

**Sanitisation gaps:** No prefix check at L88; directory blocklist at L44 does not constrain root.

---

### chain-002 — Go telemetry bus publish → Python unsafe YAML deserialisation (CWE-502, critical) ⬆ UPGRADED

**Cross-component seam:** `aurora.telemetry.tenant` bus topic, confirmed `crossComponent: true` in link graph (this run). Go producer (aurora-compute) → Python consumer (aurora-portal).

**Source:** `publish.go:24–29` — `Publish()` marshals a Sample struct to YAML and sends it via `bus.Send(TenantTopic, body)`. The Go producer itself is safe (typed struct → yaml.Marshal cannot produce object-instantiation payloads). However, the bus topic is an open network channel; any bus client that can publish to `aurora.telemetry.tenant` sends bytes directly to the consumer.

**Hops:**
1. `publish.go:29` — `bus.Send(TenantTopic, body)` — **crossComponent: true** — transmits across the aurora-compute / aurora-portal boundary
2. `telemetry_consumer.py:11–13` — `consume()` subscribes and yields each message to `handle()` with no validation
3. `telemetry_consumer.py:16` — `handle(message)` receives the raw message with no sanitisation

**Sink:** `yaml.load(message.body)` at `telemetry_consumer.py:17` — PyYAML default Loader; a malicious bus publisher achieves arbitrary Python code execution in the aurora-portal process.

**Sanitisation gaps:** `yaml.load()` must become `yaml.safe_load()` at L17; no schema validation or size limit on `message.body` at L11–13.

---

## Partial Chains

| Chain ID | Source File | Stopped At | Sink File | Sink Kind | OWASP | CWE | Severity | Stop Reason |
|---|---|---|---|---|---|---|---|---|
| chain-003 | aurora-portal api.py (L29) | L29 — no callers | api.py (L31) | shell-execution | A03 Injection | CWE-78 | critical | Caller origin of project_id/destination unknown |
| chain-004 | aurora-portal region_lookup.py (L9) | L9 — no callers | region_lookup.py (L10–12) | sql-execution | A03 Injection | CWE-89 | critical | Caller origin of project unknown |
| chain-005 | aurora-portal api.py (L15) | L15 — no callers | api.py (L17) | unsafe-deserialization | A08 Software and Data Integrity Failures | CWE-502 | high | Caller origin of path unknown |
| chain-006 | aurora-compute api/routes.go (L13) | profile.go:32 — C fn def missing | profile.go (L32) | cgo-native-call | A04 Insecure Design | CWE-20 | high | aurora_profile_label C definition not in delivery |
| chain-007 | aurora-compute api/server.go (L23) | L23 — no callers | server.go (L24) | shell-execution | A03 Injection | CWE-78 | critical | No callers of Console() in delivered source |

### chain-003 — os.system() shell injection in export_report() (CWE-78, critical, partial)

**Stopped at:** `api.py:29` — no callers of `export_report(project_id, destination)` in source. Both parameters are interpolated raw into a shell command at L30, executed via `os.system()` at L31.

**Gap:** Identify call sites of `export_report()`. If either parameter derives from HTTP request data, this becomes a confirmed critical injection chain.

---

### chain-004 — SQL injection in region_for() (CWE-89, critical, partial)

**Stopped at:** `region_lookup.py:9` — no callers of `region_for(cursor, project)` in source. `project` is interpolated into raw SQL at L11, passed to `cursor.execute()` at L10.

**Gap:** Identify call sites of `region_for()`. If `project` derives from an HTTP parameter or form field, this is a confirmed critical SQL injection chain.

---

### chain-005 — Caller-supplied path → yaml.load deserialization in load_quota_profile() (CWE-502, high, partial)

**Stopped at:** `api.py:15` — no callers of `load_quota_profile(path)` in source. `path` opens a file at L16 and passes contents to `yaml.load()` at L17 without SafeLoader.

**Gap:** Identify call sites of `load_quota_profile()`. If `path` is externally supplied, both CWE-22 and CWE-502 apply simultaneously.

---

### chain-006 — HTTP request body → cgo boundary in ApplyProfile() (CWE-20, high, partial)

**Source:** `POST /v1/profile/apply` registered at `routes.go:13` behind a token check (`requireToken`). Any authenticated HTTP client can supply arbitrary JSON body content.

**Hops:**
1. `routes.go:18–25` — `requireToken()` validates `X-Aurora-Token` header but does **not** inspect or sanitise the request body
2. `profile.go:23–28` — `ApplyProfile()` decodes JSON body into `req.Label` with no length limit, null-byte rejection, or character allowlist
3. `profile.go:30` — `C.CString(req.Label)` converts the unvalidated string to a C char* with no bounds check

**Stopped at:** `profile.go:32` — `C.aurora_profile_label(clabel)` calls into the aurora-network C library (definition at `aurora-network/src/profile_label.h`, not in delivery). Cannot verify whether the C function is bounds-safe.

**Gap:** Obtain `aurora-network/src/profile_label.h` and the accompanying C implementation. If `aurora_profile_label` copies to a fixed-size buffer without bounds checking, this confirms a heap/stack buffer overflow exploitable via an authenticated HTTP POST.

---

### chain-007 — Console() unsanitised instance → exec.Command shell injection (CWE-78, critical, partial)

**Stopped at:** `server.go:23` — `Console(instance string)` has no callers in delivered source and is not wired to any HTTP route in `routes.go`. However, the sink is confirmed: `exec.Command("sh", "-c", fmt.Sprintf("virsh console %s", instance))` at L24 executes `instance` via the system shell.

**Gap:** Identify callers of `Console()`. If it is ever wired to an HTTP route or called with externally-influenced input, this is a confirmed critical command injection on the hypervisor host.

---

## Additional Confirmed Findings (Not Taint Chains)

| Service | File | Line | CWE | Title | Severity |
|---|---|---|---|---|---|
| aurora-portal | api.py | 10 | CWE-798 | Hardcoded production DATABASE_PASSWORD | critical |
| aurora-portal | api.py | 20–26 | CWE-295 | TLS verify=False in requests.get() | high |
| aurora-portal | session.py | 9–11 | CWE-338 | Weak PRNG (random.choice) for session IDs | high |
| aurora-portal | session.py | 14–15 | CWE-916 | SHA-1 for password hashing | high |
| aurora-compute | server.go | 13 | CWE-798 | Hardcoded AWS-format key (metricsToken) | critical |
| aurora-compute | server.go | 15–20 | CWE-295 | InsecureSkipVerify: true in HTTP client | high |
| aurora-compute | server.go | 17 | CWE-326 | TLS MinVersion not set (informational) | informational |
