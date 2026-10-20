# Security Chains Summary

_Updated 2026-10-20 (second pass). Source set expanded from 122 → **327 files**. Link Graph: 1060 file edges, 3066 resolved edges. nova.api and nova.openstack.compute now included._

## Confirmed Chains by Severity

_No confirmed multi-hop chains found._

327 files analysed; 4 security findings total across all files. Only 2 are `confirmed` and neither qualifies as a taint source: `utils.py` SHA-224 has no entry-point overlap; `handler.py` HMAC bypass finding (lines 276-280) does not overlap the file's sole entry-point (line 97). Both `needs_cross_file` findings in `cyborg.py` and `json_filter.py` remain un-promoted.

## Partial Chains (1)

| Chain ID | Stopped-At File | Stopped-At Lines | Reason |
|---|---|---|---|
| chain-001 | `src/nova/accelerator/cyborg.py` | 337–337 | `no-static-edge` — `get_arq_by_uuid` is not statically named as a call target in any of the 327 files; callers use a local `_CyborgClient` variable (link-graph blind spot) |

## Terminated Chains

_None._

## Evaluated But Excluded Findings

| File | Lines | Confidence | CWE | Reason Excluded |
|---|---|---|---|---|
| `src/nova/utils.py` | 869 | confirmed | CWE-327 | No entry-point overlap; standalone crypto weakness |
| `src/nova/scheduler/filters/json_filter.py` | 104–112 | needs_cross_file | CWE-470 | Empty securitySurface; scheduler filters loaded by dynamic dispatch (no inbound edges) |
| `src/nova/api/metadata/handler.py` | 276–280 | confirmed | CWE-306 | Finding at auth-check (276-280) does not overlap entry-point (97); auth-bypass is standalone — not a taint-injection chain |

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
| **Severity Upgrade** | none (no cross-component hop traced) |

**Source (KB entry-point):** `src/nova/accelerator/cyborg.py:337`
Parameter `arq_uuid` accepted from caller by `_CyborgClient.get_arq_by_uuid`.

**Sink:** `src/nova/accelerator/cyborg.py:358–359`
`arq_uuid` concatenated into the Cyborg REST API URL via `"/".join([self.ARQ_URL, arq_uuid])` — no UUID-format or path-character filtering.

**Why still partial (2026-10-20, 327 files):** The expanded graph includes nova.api and the full nova.openstack.compute API layer. One inbound caller to cyborg.py is now resolved: `src/nova/network/neutron.py` at lines 673, 1715, and 2369 — calling `get_client`, `get_arq_pci_device_profile`, and `get_device_amount_of_dp_groups` respectively. None of these calls propagates `arq_uuid`. No resolved edge anywhere in the 327-file graph names `get_arq_by_uuid` as a call target — calls are made on a local `_CyborgClient` object returned by `get_client()`, which is a known link-graph blind spot for calls on local variables. Callers of `get_arq_by_uuid` are expected in `nova.compute` or `nova.conductor` (not yet extracted).

**Sanitisation gap:** No UUID format check or path-character filtering between method entry (line 337) and HTTP call (lines 358–359).

---

## Newly Evaluated Finding: handler.py HMAC Bypass (CWE-306)

**`src/nova/api/metadata/handler.py:276–280`** (confirmed, medium, A07 Authentication Failures, CWE-306)

When `CONF.neutron.metadata_proxy_shared_secret` is not configured, the HMAC validation block (lines 278-280) is skipped. The API then accepts arbitrary `X-Metadata-Provider` and `X-Forwarded-For` headers as authenticated. The unauthenticated `provider_id` value subsequently reaches `neutron.list_subnets(advanced_service_providers=[provider_id])` at line 209-212 (inside `_get_instance_id_from_lb`), enabling an attacker to enumerate subnets associated with arbitrary metadata providers and retrieve instance metadata beyond their authorization boundary.

**Why not chained (current state):** The confirmed finding (276-280) does not overlap the KB entry-point (line 97). The vulnerability is an auth-bypass/information-disclosure pattern rather than an injection chain. To promote this to a chain, the KB would need an entry-point entry at `_handle_instance_id_request_from_lb` (line 265) or at the header-read lines (266-270), OR the entry-point at line 97 would need to be adjusted to cover the full HTTP dispatch path. **This is a high-priority standalone security issue that warrants developer attention independently of chain status.**
