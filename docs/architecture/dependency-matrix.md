# Component Dependency Matrix

> **Sources:** `.aee/link-graph.json`, `.aee/security-chains.json`

Cell values represent the count of cross-component symbol references between each pair of **tool-assigned components** (`seam_index component_of()` label), as recorded in `.aee/link-graph.json` (`crossComponentSeams`). Diagonal cells are shown as `—`. **Bold** cells indicate seams crossed by at least one confirmed or partial taint chain.

---

## Matrix

| From ↓ / To → | `payload_plaintext` | `tools` | `src` |
|---|---|---|---|
| **`payload_plaintext`** | — | 0 | 0 |
| **`tools`** | 0 | — | 0 |
| **`src`** | 0 | 0 | — |

All inter-component cells are 0. There are no directed edges between the three distinct component labels (`payload_plaintext`, `tools`, `src`) in `.aee/link-graph.json`.

**Important — intra-component cross-service seam:** The `crossComponentSeams` array in `.aee/link-graph.json` contains one entry, but both endpoints belong to the `payload_plaintext` label. The seam connects the **aurora-compute** sub-service (producer, `services/telemetry/publish.go:9`) and the **aurora-portal** sub-service (consumer, `aurora_portal/telemetry_consumer.py:8`) via the `aurora.telemetry.tenant` bus topic. Because `seam_index component_of()` assigns both to `payload_plaintext`, this seam is intra-component at the matrix level and would appear on the `payload_plaintext` diagonal if self-referential cells were tracked. Chain-002 (confirmed, critical, CWE-502) crosses this seam.

**No cells are bolded:** all confirmed and partial chains (chain-001 through chain-007) have sinks within the same component-label node. The cross-service seam in chain-002 is intra-`payload_plaintext`. The unresolved cgo seam in chain-006 targets aurora-network, which has no component-label assignment in the current delivery.

Source: `.aee/link-graph.json` (`crossComponentSeams`, `resolved` all `crossComponent: false` or intra-label); `.aee/security-chains.json`.

---

## Notes

- Delivery is partial: only 3 of the expected 6 components are represented. The outstanding components (aurora-network C/C++, aurora-cli binary, database-driver/identity service) will each add new component-label columns and rows when delivered, and the `aurora.telemetry.tenant` seam may gain a distinct label split if those components are placed outside `src/payload_plaintext/`. Source: `docs/components/index.md` (Delivery Status).
- 8 open ends in `.aee/link-graph.json` (`openEnds`) remain one-sided; they will become matrix entries when partner components arrive.
