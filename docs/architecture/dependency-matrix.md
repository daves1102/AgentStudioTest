# Component Dependency Matrix

_Batch: `868bfe40c13e07d11a2aa58ddb0c8900f9d9744d` — 2026-10-20_

## N×N Dependency Matrix

Rows are the referencing component; columns are the providing component. Cell value = sum of `count` over Link Graph `fileEdges` with that `(fromComponent, toComponent)` pair (each `count` is the number of `resolved` entries behind the edge). Bold cells indicate a confirmed taint chain hop crossing that component pair.

| | **nova** |
|---|---|
| **nova** | 1470 |

**Derivation:** The Link Graph (`.aee/link-graph.json`, commit `6bd3ba5`) records 382 file edges, all with `crossComponent: false` (`summary.crossComponentEdges: 0`; Link Summary `.aee/link-summary.md`). All 382 edges are in the `nova → nova` cell. The sum of their `count` fields equals the total resolved entries: 1470 (`summary.resolved: 1470`, Link Summary `.aee/link-summary.md`).

No confirmed taint chains exist (`.aee/security-chains.json`, `summary.confirmedChains: 0`); no cells are bolded.

The Link Graph is incomplete by construction (static imports and shared literals only). The absence of an edge does not imply two components are independent; it means no edge was found.

---

## Cross-Component Seams

| Component A | Component B | Kind | Literal |
|-------------|-------------|------|---------|
| — | — | — | — |

No cross-component seams were found. (`.aee/link-graph.json`, `crossComponentSeams: []`, `summary.seams: 0`; Link Summary `.aee/link-summary.md`). Seams have no direction and are not counted in the matrix above.
