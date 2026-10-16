# Component Dependency Matrix

## N×N Dependency Matrix

Rows are the referencing component; columns are the providing component. Cell value = sum of `count` over Link Graph `fileEdges` with that `(fromComponent, toComponent)` pair. Bold cells indicate a confirmed taint chain hop crossing that component pair.

| | **nova** |
|---|---|
| **nova** | 0 |

The Link Graph (`.aee/link-graph.json`) records zero file edges (`fileEdges: []`, `summary.fileEdges: 0`) and zero cross-component edges (`summary.crossComponentEdges: 0`). The cell value of 0 for `nova → nova` reflects that no resolved file edges exist within or between components in this source set.

No confirmed taint chains exist (`security-chains.json`, `summary.confirmedChains: 0`); no cells are bolded.

The Link Graph is incomplete by construction (static imports and shared literals only). The absence of an edge does not imply two components are independent; it means no edge was found.

---

## Cross-Component Seams

| Component A | Component B | Kind | Literal |
|-------------|-------------|------|---------|
| — | — | — | — |

No cross-component seams were found. (`.aee/link-graph.json`, `crossComponentSeams: []`, `summary.seams: 0`). Seams have no direction and are not counted in the matrix above.
