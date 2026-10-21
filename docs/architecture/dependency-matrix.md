# Component Dependency Matrix

_Batch: `624338e5475ffbce89d00d3abf4134e98314eb03` — 2026-10-21_

## N×N Dependency Matrix

Rows are the referencing component; columns are the providing component. Cell value = sum of `count` over Link Graph `fileEdges` with that `(fromComponent, toComponent)` pair (each `count` is the number of `resolved` entries behind the edge). Bold cells indicate a confirmed taint chain hop crossing that component pair.

| | **nova** |
|---|---|
| **nova** | 16,347 |

**Derivation:** The Link Graph (`.aee/link-summary.md`, batch `624338e5`) records 5,884 file edges, all with `crossComponent: false` (`summary.crossComponentEdges: 0`; "All 5884 file edges are intra-component (within the `nova` component)"). All 5,884 edges are in the `nova → nova` cell. The sum of their `count` fields equals the total resolved entries: 16,347 (`summary.resolved: 16347`, Link Summary `.aee/link-summary.md`).

Note: batch 9 added `virt/` (92 files), `volume/` (2 files), and `wsgi/` (3 files); the increase in resolved count (13,877 → 16,347) reflects newly extracted virt/volume/wsgi files importing production modules. All edges remain within the `nova` component.

No confirmed taint chains exist (`.aee/security-chains.json`, `summary.confirmedChains: 0`); no cells are bolded.

The Link Graph is incomplete by construction (static imports and shared literals only). The absence of an edge does not imply two components are independent; it means no edge was found. Three known blind spots: (1) scheduler filters loaded dynamically from config; (2) `privsep/` functions called via oslo.privsep IPC dispatch; (3) test `mock.patch` call sites do not produce static edges — `CyborgFixture` confirms `get_arq_by_uuid` is called in production but its caller is not visible in the link graph.

---

## Cross-Component Seams

| Component A | Component B | Kind | Literal |
|-------------|-------------|------|---------|
| — | — | — | — |

No cross-component seams were found. (`.aee/link-summary.md`, `summary.seams: 0`). Seams have no direction and are not counted in the matrix above.
