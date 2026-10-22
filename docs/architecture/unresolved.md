# Unresolved Items Index

_Regenerated from batch: `c7e94e29eea2e3abd5797fc0759b0d98232c7830` — 2026-10-22 (component synthesis updated)_

Verification Summary (`.aee/verification-summary.md`) reports 0 errors — this document is not an escalation.

---

## Unresolved and Ambiguous References (Link Graph)

Source: `.aee/link-summary.md` (Unresolved Imports table).

### Unresolved References (10 total)

10 unresolved imports — all bare `nova` package (1 distinct symbol root). Per the Link Summary, these 10 references are in test files and map to `src/nova/__init__.py`, which does not exist in the repository. They will resolve if `src/nova/__init__.py` is added and extracted.

**Summary by unresolved module root** (1 distinct root):

| Symbol root | Refs | Notes |
|-------------|------|-------|
| `nova` | 10 | bare `import nova` or `nova.<attr>` in test files; targets `src/nova/__init__.py` which does not exist |
| **Total** | **10** | |

**All 10 unresolved entries:**

| File | Line | Symbol | Reason |
|------|------|--------|--------|
| `src/nova/tests/fixtures/manila.py` | 14 | `nova` | module-not-found |
| `src/nova/tests/functional/libvirt/test_numa_servers.py` | 22 | `nova` | module-not-found |
| `src/nova/tests/functional/libvirt/test_pci_sriov_servers.py` | 31 | `nova` | module-not-found |
| `src/nova/tests/functional/libvirt/test_vif_model.py` | 20 | `nova` | module-not-found |
| `src/nova/tests/functional/regressions/test_bug_1845291.py` | 14 | `nova` | module-not-found |
| `src/nova/tests/functional/regressions/test_bug_1849165.py` | 14 | `nova` | module-not-found |
| `src/nova/tests/functional/regressions/test_bug_2143972.py` | 13 | `nova` | module-not-found |
| `src/nova/tests/unit/compute/test_compute.py` | 47 | `nova` | module-not-found |
| `src/nova/tests/unit/compute/test_compute_mgr.py` | 37 | `nova` | module-not-found |
| `src/nova/tests/unit/scheduler/test_host_manager.py` | 28 | `nova` | module-not-found |

### Ambiguous References

None. (`.aee/link-summary.md`, `summary.ambiguous: 0`)

---

## Partial Taint Chains (Security Chains)

Source: `.aee/security-chains.json` (`chains` array, `status: "partial"`).

| Chain ID | Component | Source File | Source Lines | Sink File | Sink Lines | Stopped-At File | Stopped-At Lines | Reason |
|----------|-----------|------------|-------------|----------|-----------|----------------|-----------------|--------|
| chain-001 | `accelerator` | `src/nova/accelerator/cyborg.py` | 337–337 | `src/nova/accelerator/cyborg.py` | 358–359 | `src/nova/accelerator/cyborg.py` | 337–337 | `no-static-edge` — no production call site found in near-complete 1,509-file source set; method may be dead code or called via local-variable dispatch invisible to static analysis |

No terminated chains. (`.aee/security-chains.json`, `summary.terminatedChains: 0`)

Note: `privsep/libvirt.py:L150–161` (readpty, CWE-73, component `privsep`) was evaluated as a potential sink but no partial chain is formable — privsep IPC dispatch produces no static inbound edges (the 96 `virt→privsep` static import edges in the new link graph are module-import edges, not IPC dispatch paths).

---

## UNKNOWN-Language Files (Intake Summary)

No UNKNOWN files. (`.aee/intake-summary.md`, batch `c7e94e29`: "UNKNOWN Files — Flagged for Human Review: None.")

---

## Verification Errors (Verification Report)

No errors. All issues in the Verification Report (`.aee/verification-report.json`) are at `severity: "info"`.

| Severity | Count |
|----------|-------|
| error    | 0     |
| warning  | 0     |
| info     | 1     |

The one info item: `docs/src/nova/accelerator/__init__.py.md` — file has 0 lines, no citation possible; informational only (Verification Report `.aee/verification-report.json`, item 1).
