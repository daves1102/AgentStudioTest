# Security Chains Summary

## Confirmed Chains by Severity

_No confirmed multi-hop chains found._

No security findings with confidence `confirmed` or `probable` exist in the analysed source set (`src/nova/accelerator/cyborg.py`, `src/nova/accelerator/__init__.py`). Without a confirmed or probable taint source there are no chains that could be fully confirmed.

## Partial Chains (1)

| Chain ID | Stopped-At File | Stopped-At Lines | Reason |
|---|---|---|---|
| chain-001 | `src/nova/accelerator/cyborg.py` | 337–337 | `no-static-edge` — callers of `get_arq_by_uuid` are in unresolved `nova.*` modules outside the source set |

## Terminated Chains

_None._

## Confirmed Chains Detail

_None._

## Partial Chain Detail

### chain-001 — arq_uuid URL-path injection (partial)

| Field | Value |
|---|---|
| **Status** | partial |
| **OWASP** | A03 Injection |
| **CWE** | CWE-74 |
| **Severity** | medium |
| **Confidence** | needs_cross_file |
| **Severity Upgrade** | none (no cross-component hop reached) |

**Source (KB entry-point):** `src/nova/accelerator/cyborg.py:337`
Parameter `arq_uuid` is accepted from the caller by `_CyborgClient.get_arq_by_uuid`.

**Sink:** `src/nova/accelerator/cyborg.py:358–359`
`arq_uuid` is concatenated directly into the Cyborg REST API URL path via `"/".join([self.ARQ_URL, arq_uuid])` with no UUID-format or path-character filtering visible in the file.

**Why partial:** The Link Graph contains zero resolved edges and zero file edges. All six imports (`nova`, `nova.i18n`, `nova.scheduler`, `nova.service_auth`, `nova.utils`) are marked `module-not-found`. No file within the source set calls `get_arq_by_uuid`, so the origin and validation state of `arq_uuid` cannot be determined statically.

**Sanitisation gap:** No UUID format check or path-character filtering appears between the method entry (line 337) and the HTTP call (lines 358–359). Path-traversal characters (e.g. `../other-endpoint`) or query-string metacharacters in `arq_uuid` could redirect the request to an unintended Cyborg API endpoint.

**Human review required:** Locate all callers of `_CyborgClient.get_arq_by_uuid` (reachable via the public `get_client(context)` factory at line 56–57) and confirm whether `arq_uuid` is validated as a well-formed UUID before the call. If callers do not validate, this chain should be promoted to `confirmed`.
