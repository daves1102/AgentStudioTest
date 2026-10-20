# Component Dependency Matrix

_Batch: `f56908d5e0741524fb4cb768d9b52ccb0f3a585b` — 2026-10-20_

## N×N Dependency Matrix

Rows are the referencing component; columns are the providing component. Cell value = sum of `count` over Link Graph `fileEdges` with that `(fromComponent, toComponent)` pair (each `count` is the number of `resolved` entries behind the edge). Bold cells indicate a confirmed taint chain hop crossing that component pair.

| | **nova** |
|---|---|
| **nova** | 4451 |

**Derivation:** The Link Graph (`.aee/link-summary.md`, batch `f56908d5`) records 1,536 file edges, all with `crossComponent: false` (`summary.crossComponentEdges: 0`; "All 1536 file edges are intra-component (within the `nova` component)"). All 1,536 edges are in the `nova → nova` cell. The sum of their `count` fields equals the total resolved entries: 4,451 (`summary.resolved: 4451`, Link Summary `.aee/link-summary.md`).

No confirmed taint chains exist (`.aee/security-chains.json`, `summary.confirmedChains: 0`); no cells are bolded.

The Link Graph is incomplete by construction (static imports and shared literals only). The absence of an edge does not imply two components are independent; it means no edge was found. Notably, scheduler filters are loaded dynamically by name from configuration — a known link-graph blind spot for dynamic dispatch (`.aee/security-chains.json`, `evaluatedFindings`, json_filter.py entry).

---

## Cross-Component Seams

| Component A | Component B | Kind | Literal |
|-------------|-------------|------|---------|
| — | — | — | — |

No cross-component seams were found. (`.aee/link-summary.md`, `summary.seams: 0`). Seams have no direction and are not counted in the matrix above.
