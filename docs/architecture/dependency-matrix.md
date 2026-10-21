# Component Dependency Matrix

_Batch: `c7e94e29eea2e3abd5797fc0759b0d98232c7830` — 2026-10-21_

## N×N Dependency Matrix

Rows are the referencing component; columns are the providing component. Cell value = sum of `count` over Link Graph `fileEdges` with that `(fromComponent, toComponent)` pair (each `count` is the number of `resolved` entries behind the edge). Bold cells indicate a confirmed taint chain hop crossing that component pair.

| | **nova** |
|---|---|
| **nova** | 18,812 |

**Derivation:** The Link Graph (`.aee/link-summary.md`, batch `c7e94e29`) records 6,902 file edges, all with `crossComponent: false` (`summary.crossComponentEdges: 0`; "All 6902 file edges are intra-component (within the `nova` component)"). All 6,902 edges are in the `nova → nova` cell. The sum of their `count` fields equals the total resolved entries: 18,812 (`summary.resolved: 18812`, Link Summary `.aee/link-summary.md`).

Note: batch 10 added 25 top-level utility modules (`context.py`, `quota.py`, `rpc.py`, `service.py`, etc.); the increase in resolved count (16,347 → 18,812) reflects these widely-imported modules now appearing as resolved targets for intra-component edges. All edges remain within the `nova` component.

No confirmed taint chains exist (`.aee/security-chains.json`, `summary.confirmedChains: 0`); no cells are bolded.

The Link Graph is incomplete by construction (static imports and shared literals only). The absence of an edge does not imply two components are independent; it means no edge was found. Three known blind spots: (1) scheduler filters loaded dynamically from config; (2) `privsep/` functions called via oslo.privsep IPC dispatch; (3) local-variable dispatch patterns (e.g. storing a client in a variable then calling a method) are invisible to static analysis — confirmed by chain-001 investigation: `get_arq_by_uuid` is not found via grep but may be called via this pattern.

---

## Cross-Component Seams

| Component A | Component B | Kind | Literal |
|-------------|-------------|------|---------|
| — | — | — | — |

No cross-component seams were found. (`.aee/link-summary.md`, `summary.seams: 0`). Seams have no direction and are not counted in the matrix above.
