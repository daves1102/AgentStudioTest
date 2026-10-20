# Security Chains Summary

_Updated 2026-10-20. Source set expanded from 55 → **122 files**. Link Graph: 382 file edges, 1470 resolved edges. All imports from cyborg.py now resolved._

## Confirmed Chains by Severity

_No confirmed multi-hop chains found._

All security findings across the 122-file source set were evaluated. Only one `confirmed` finding exists (`utils.py` SHA-224, CWE-327); it has no `securitySurface entry-point` overlap and is excluded as a taint source. The two `needs_cross_file` findings in `cyborg.py` and `json_filter.py` cannot be promoted without a confirmed/probable source in the source set.

## Partial Chains (1)

| Chain ID | Stopped-At File | Stopped-At Lines | Reason |
|---|---|---|---|
| chain-001 | `src/nova/accelerator/cyborg.py` | 337–337 | `no-static-edge` — no file in the 122-file source set has an inbound edge to `cyborg.py`; callers likely in `nova.compute` or `nova.conductor` (not yet extracted) |

## Terminated Chains

_None._

## Evaluated But Excluded Findings

| File | Lines | Confidence | CWE | Reason Excluded |
|---|---|---|---|---|
| `src/nova/utils.py` | 869 | confirmed | CWE-327 | No entry-point securitySurface overlap; standalone cryptographic weakness |
| `src/nova/scheduler/filters/json_filter.py` | 104–112 | needs_cross_file | CWE-470 | Empty securitySurface; no confirmed/probable source available to trace into this sink |

## Confirmed Chains Detail

_None._

## Partial Chain Detail

### chain-001 — arq_uuid URL-path injection (partial, persistent)

| Field | Value |
|---|---|
| **Status** | partial |
| **OWASP** | A03 Injection |
| **CWE** | CWE-74 |
| **Severity** | medium |
| **Confidence** | needs_cross_file |
| **Severity Upgrade** | none (no cross-component hop reached) |

**Source (KB entry-point):** `src/nova/accelerator/cyborg.py:337`
Parameter `arq_uuid` accepted from caller by `_CyborgClient.get_arq_by_uuid`.

**Sink:** `src/nova/accelerator/cyborg.py:358–359`
`arq_uuid` concatenated into the Cyborg REST API URL via `"/".join([self.ARQ_URL, arq_uuid])` — no UUID-format or path-character filtering.

**Why still partial (2026-10-20):** The 122-file source set — now including all of `nova.scheduler`, `nova.db`, and the scheduler filters — has zero inbound edges to `cyborg.py`. All six of `cyborg.py`'s own imports are now fully resolved: `nova.scheduler` resolved to `src/nova/scheduler/utils.py` (import at line 49; cyborg calls `schedutils.ResourceRequest.XS_KEYPAT.match` at line 103 for requester-ID pattern matching — this path does not carry `arq_uuid`). Callers of `_CyborgClient.get_arq_by_uuid` are expected in `nova.compute` or `nova.conductor`, neither of which has been extracted yet.

**Sanitisation gap:** No UUID format check or path-character filtering between method entry (line 337) and HTTP call (lines 358–359).

**Human review required:** When `nova.compute` or `nova.conductor` is added to the source set, confirm whether callers of `get_client(context).get_arq_by_uuid(arq_uuid)` validate `arq_uuid` as a well-formed UUID before the call. If not, promote this chain to `confirmed`.

---

## Newly Evaluated Finding: json_filter.py Reflection Risk

**`src/nova/scheduler/filters/json_filter.py:104–112`** (CWE-470, A01 Broken Access Control, medium, needs_cross_file)

The `JsonFilter._parse_string` method passes user-controlled scheduler hint values to `getattr(host_state, path[0], None)`, allowing API callers to probe arbitrary Python attributes of `HostState`. The finding is not yet chainable: `json_filter.py` has no KB entry-point and there are no confirmed/probable sources in the source set. This should be re-evaluated when `nova.api` is extracted — at that point the taint path from the HTTP scheduler-hints API parameter through `RequestSpec.get_scheduler_hint('query')` to the reflection call may be traceable as a confirmed chain.
