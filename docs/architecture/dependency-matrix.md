# Component Dependency Matrix

> **Sources:** `.aee/link-graph.json`, `.aee/security-chains.json`

Cell values represent the number of cross-component symbol references between each pair of components, as recorded in `.aee/link-graph.json` (`crossComponentSeams`). Diagonal cells are self-referential and shown as `—`. **Bold** cells indicate seams crossed by a confirmed taint chain (`.aee/security-chains.json`).

---

## Matrix

| From ↓ / To → | `tools` | `src` |
|---|---|---|
| **`tools`** | — | 0 |
| **`src`** | 0 | — |

All cells are 0 because the `crossComponentSeams` array in `.aee/link-graph.json` is empty — no cross-component symbol references were detected in the current delivery. No cells are bolded because no confirmed taint chain crosses a component boundary (all hops in `chain-001` have `crossComponent: false`; source: `.aee/security-chains.json`).

---

## Notes

Delivery is partial (1 of 6 expected components received). The five undelivered components (C, C++, Java, Go, JavaScript) are not represented as rows or columns. The matrix will expand in a subsequent run when the remaining source files arrive. Source: `docs/components/index.md` (Delivery Status).
