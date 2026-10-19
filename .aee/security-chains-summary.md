# Security Chains Summary

_Updated 2026-10-19. Source set expanded from 2 to 55 files. Link Graph now has 212 resolved file edges._

## Confirmed Chains by Severity

_No confirmed multi-hop chains found._

The source set now includes `src/nova/utils.py`, which has one `confirmed` security finding (SHA-224, CWE-327, A02). However, `utils.py` has no `securitySurface` entry of `kind: entry-point` overlapping the affected function (`generate_hostid`, lines 857–871). This finding is therefore excluded as a taint source under the protocol and represents a standalone cryptographic weakness, not a cross-file chain.

## Partial Chains (1)

| Chain ID | Stopped-At File | Stopped-At Lines | Reason |
|---|---|---|---|
| chain-001 | `src/nova/accelerator/cyborg.py` | 337–337 | `no-static-edge` — no file in the 55-file source set has an edge pointing TO `cyborg.py`; callers remain outside the source set |

## Terminated Chains

_None._

## Evaluated But Excluded Findings

| File | Lines | Confidence | Reason Excluded |
|---|---|---|---|
| `src/nova/utils.py` | 869 | confirmed | No entry-point securitySurface overlap; standalone cryptographic weakness (SHA-224 in `generate_hostid`) |

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
`arq_uuid` concatenated into the Cyborg REST API URL via `"/".join([self.ARQ_URL, arq_uuid])` with no UUID-format or path-character filtering.

**Why partial:** The expanded 55-file Link Graph has 212 file edges, but **none point TO `cyborg.py`**. The `cyborg.py → utils.py` edge (line 51) is an outbound dependency for building the HTTP adapter (`utils.get_sdk_adapter`, called at line 132); it does not carry `arq_uuid` and does not affect this chain. The only remaining unresolved import from `cyborg.py` is `nova.scheduler`. Callers of `_CyborgClient.get_arq_by_uuid` are still outside the analysed source set.

**Sanitisation gap:** No UUID format check or path-character filtering appears between the method entry (line 337) and the HTTP call (lines 358–359).

**Human review required:** Locate all callers of `_CyborgClient.get_arq_by_uuid` (via the public `get_client(context)` factory at lines 56–57) and confirm whether `arq_uuid` is validated as a well-formed UUID before the call. The `nova.scheduler` module (still unresolved) may contain such callers. If callers do not validate, this chain should be promoted to `confirmed`.
