# Component Dependency Matrix

_Batch: `caa20451a7b7df151b4ddbaab06f92e6857e74a6` — 2026-10-20_

## N×N Dependency Matrix

Rows are the referencing component; columns are the providing component. Cell value = sum of `count` over Link Graph `fileEdges` with that `(fromComponent, toComponent)` pair (each `count` is the number of `resolved` entries behind the edge). Bold cells indicate a confirmed taint chain hop crossing that component pair.

| | **nova** |
|---|---|
| **nova** | 3066 |

**Derivation:** The Link Graph (`.aee/link-graph.json`, commit `667e0d4`) records 1,060 file edges, all with `crossComponent: false` (`summary.crossComponentEdges: 0`; Link Summary `.aee/link-summary.md`). All 1,060 edges are in the `nova → nova` cell. The sum of their `count` fields equals the total resolved entries: 3,066 (`summary.resolved: 3066`, Link Summary `.aee/link-summary.md`).

No confirmed taint chains exist (`.aee/security-chains.json`, `summary.confirmedChains: 0`); no cells are bolded.

The Link Graph is incomplete by construction (static imports and shared literals only). The absence of an edge does not imply two components are independent; it means no edge was found. Notably, scheduler filters are loaded dynamically by name from configuration — a known link-graph blind spot for dynamic dispatch (`.aee/security-chains.json`, `evaluatedFindings`, json_filter.py entry).

---

## Cross-Component Seams

| Component A | Component B | Kind | Literal |
|-------------|-------------|------|---------|
| — | — | — | — |

No cross-component seams were found. (`.aee/link-graph.json`, `crossComponentSeams: []`, `summary.seams: 0`; Link Summary `.aee/link-summary.md`). Seams have no direction and are not counted in the matrix above.
