# Component Dependency Matrix

_Batch: `10997c0ea56f02ffec4fd9f8c917d68241ae9ea9` — 2026-10-20_

## N×N Dependency Matrix

Rows are the referencing component; columns are the providing component. Cell value = sum of `count` over Link Graph `fileEdges` with that `(fromComponent, toComponent)` pair (each `count` is the number of `resolved` entries behind the edge). Bold cells indicate a confirmed taint chain hop crossing that component pair.

| | **nova** |
|---|---|
| **nova** | 5164 |

**Derivation:** The Link Graph (`.aee/link-summary.md`, batch `10997c0e`) records 1,882 file edges, all with `crossComponent: false` (`summary.crossComponentEdges: 0`; "All 1882 file edges are intra-component (within the `nova` component)"). All 1,882 edges are in the `nova → nova` cell. The sum of their `count` fields equals the total resolved entries: 5,164 (`summary.resolved: 5164`, Link Summary `.aee/link-summary.md`).

No confirmed taint chains exist (`.aee/security-chains.json`, `summary.confirmedChains: 0`); no cells are bolded.

The Link Graph is incomplete by construction (static imports and shared literals only). The absence of an edge does not imply two components are independent; it means no edge was found. Two known blind spots: (1) scheduler filters are loaded dynamically by name from configuration; (2) `privsep/` functions are called via oslo.privsep IPC dispatch and produce no static import edges (`.aee/security-chains.json`, `evaluatedFindings`, privsep/libvirt.py entry).

---

## Cross-Component Seams

| Component A | Component B | Kind | Literal |
|-------------|-------------|------|---------|
| — | — | — | — |

No cross-component seams were found. (`.aee/link-summary.md`, `summary.seams: 0`). Seams have no direction and are not counted in the matrix above.
