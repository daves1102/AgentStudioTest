# Component Dependency Matrix

_Batch: `733c737267c89a04a0ad54b304c4e167bd16c887` — 2026-10-19_

## N×N Dependency Matrix

Rows are the referencing component; columns are the providing component. Cell value = sum of `count` over Link Graph `fileEdges` with that `(fromComponent, toComponent)` pair (each `count` is the number of `resolved` entries behind the edge). Bold cells indicate a confirmed taint chain hop crossing that component pair.

| | **nova** |
|---|---|
| **nova** | 854 |

**Derivation:** The Link Graph (`.aee/link-graph.json`) records 212 file edges, all with `crossComponent: false` (`summary.crossComponentEdges: 0`; Link Summary `.aee/link-summary.md`). All 212 edges are therefore in the `nova → nova` cell. The sum of their `count` fields equals the total resolved entries: 854 (`summary.resolved: 854`, Link Summary `.aee/link-summary.md`).

No confirmed taint chains exist (`security-chains.json`, `summary.confirmedChains: 0`); no cells are bolded.

The Link Graph is incomplete by construction (static imports and shared literals only). The absence of an edge does not imply two components are independent; it means no edge was found.

---

## Cross-Component Seams

| Component A | Component B | Kind | Literal |
|-------------|-------------|------|---------|
| — | — | — | — |

No cross-component seams were found. (`.aee/link-graph.json`, `crossComponentSeams: []`, `summary.seams: 0`; Link Summary `.aee/link-summary.md`). Seams have no direction and are not counted in the matrix above.
