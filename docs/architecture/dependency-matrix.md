# Component Dependency Matrix

> **Sources:** `.aee/link-graph.json`, `.aee/security-chains.json`

Cell values represent the count of cross-component symbol references between each pair of components, as recorded in `.aee/link-graph.json` (`crossComponentSeams`). Diagonal cells (self-reference) are shown as `—`. **Bold** cells indicate seams crossed by at least one confirmed or partial taint chain (`.aee/security-chains.json`).

---

## Matrix

| From ↓ / To → | `payload_plaintext` | `tools` | `src` |
|---|---|---|---|
| **`payload_plaintext`** | — | 0 | 0 |
| **`tools`** | 0 | — | 0 |
| **`src`** | 0 | 0 | — |

All cells are 0. The `crossComponentSeams` array in `.aee/link-graph.json` is empty — no cross-component symbol references exist in the current delivery. No cells are bolded because no confirmed or partial taint chain contains a hop with `crossComponent: true` (`.aee/security-chains.json`: all hops across chain-001 through chain-005 have `crossComponent: false` or the chain stopped at function-entry before any cross-component hop was reached).

Source: `.aee/link-graph.json` (`crossComponentSeams: []`; `resolved` entries all have `crossComponent: false`); `.aee/security-chains.json`.

---

## Notes

- Delivery is still partial: 3 components represented here (2 operational, 1 stub). The originally expected 6 components (C, C++, Java, Go, JavaScript plus the delivered Python set) are not yet fully received. Source: `docs/components/index.md` (Delivery Status).
- Five open-end interfaces in `payload_plaintext` will become directed matrix edges when partner components arrive: bus topic `aurora.telemetry.tenant` (consumer side), executable `aurora-cli` (3 caller sites), and database table `tenant_region_assignment` (reader side). Source: `.aee/link-graph.json` (`openEnds`).
