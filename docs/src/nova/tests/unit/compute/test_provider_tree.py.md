# src/nova/tests/unit/compute/test_provider_tree.py

## Overview

This file implements the `test_provider_tree` module, defining 1 class, 1 function, 28 methods, 5 imports.

Lines: total 816, code 616, comment 106, blank 94

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `TestProviderTree` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_provider_tree.py:L21–L816` |
| `TestProviderTree.setUp` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/compute/test_provider_tree.py:L23–L35` |
| `TestProviderTree._pt_with_cns` | method | (self) | private | `pt` (src/nova/tests/unit/compute/test_provider_tree.py:L41) | 2/5 | `src/nova/tests/unit/compute/test_provider_tree.py:L37–L41` |
| `TestProviderTree.test_tree_ops` | method | (self) | public | not declared | 2/91 | `src/nova/tests/unit/compute/test_provider_tree.py:L43–L165` |
| `TestProviderTree.test_populate_from_iterable_empty` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_provider_tree.py:L167–L171` |
| `TestProviderTree.test_populate_from_iterable_error_orphan_cycle` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/compute/test_provider_tree.py:L173–L197` |
| `TestProviderTree.test_populate_from_iterable_complex` | method | (self) | public | not declared | 4/91 | `src/nova/tests/unit/compute/test_provider_tree.py:L199–L355` |
| `TestProviderTree.test_populate_from_iterable_complex.validate_root` | function | (expected_uuids) | public | not declared | — | `src/nova/tests/unit/compute/test_provider_tree.py:L259–L299` |
| `TestProviderTree.test_populate_from_iterable_with_root_update` | method | (self) | public | not declared | 1/28 | `src/nova/tests/unit/compute/test_provider_tree.py:L357–L398` |
| `TestProviderTree.test_populate_from_iterable_disown_grandchild` | method | (self) | public | not declared | 1/29 | `src/nova/tests/unit/compute/test_provider_tree.py:L400–L433` |
| `TestProviderTree.test_has_inventory_changed_no_existing_rp` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_provider_tree.py:L435–L442` |
| `TestProviderTree.test_update_inventory_no_existing_rp` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_provider_tree.py:L444–L451` |
| `TestProviderTree.test_has_inventory_changed` | method | (self) | public | not declared | 1/57 | `src/nova/tests/unit/compute/test_provider_tree.py:L453–L525` |
| `TestProviderTree.test_have_traits_changed_no_existing_rp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_provider_tree.py:L527–L530` |
| `TestProviderTree.test_update_traits_no_existing_rp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_provider_tree.py:L532–L535` |
| `TestProviderTree.test_have_traits_changed` | method | (self) | public | not declared | 1/32 | `src/nova/tests/unit/compute/test_provider_tree.py:L537–L577` |
| `TestProviderTree.test_add_remove_traits` | method | (self) | public | not declared | 1/32 | `src/nova/tests/unit/compute/test_provider_tree.py:L579–L619` |
| `TestProviderTree.test_have_aggregates_changed_no_existing_rp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_provider_tree.py:L621–L624` |
| `TestProviderTree.test_update_aggregates_no_existing_rp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_provider_tree.py:L626–L629` |
| `TestProviderTree.test_have_aggregates_changed` | method | (self) | public | not declared | 1/34 | `src/nova/tests/unit/compute/test_provider_tree.py:L631–L674` |
| `TestProviderTree.test_add_remove_aggregates` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/compute/test_provider_tree.py:L676–L700` |
| `TestProviderTree.test_update_resources_no_existing_rp` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_provider_tree.py:L702–L709` |
| `TestProviderTree.test_update_resources` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/compute/test_provider_tree.py:L711–L730` |
| `TestProviderTree.test_deep_copy` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/compute/test_provider_tree.py:L732–L744` |
| `TestProviderTree.test_subtree_returns_root_only` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/compute/test_provider_tree.py:L746–L758` |
| `TestProviderTree.test_subtree_includes_children` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/compute/test_provider_tree.py:L760–L773` |
| `TestProviderTree.test_subtree_excludes_other_roots` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/compute/test_provider_tree.py:L775–L787` |
| `TestProviderTree.test_subtree_is_deep_copy` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/compute/test_provider_tree.py:L789–L801` |
| `TestProviderTree.test_subtree_raises_for_non_root` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/compute/test_provider_tree.py:L803–L811` |
| `TestProviderTree.test_subtree_raises_for_missing_provider` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_provider_tree.py:L813–L816` |

## Dependencies

- `import copy` (src/nova/tests/unit/compute/test_provider_tree.py:L12)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/compute/test_provider_tree.py:L14)
- `nova.compute`: imports `provider_tree` (src/nova/tests/unit/compute/test_provider_tree.py:L16)
- `nova`: imports `objects` (src/nova/tests/unit/compute/test_provider_tree.py:L17)
- `nova`: imports `test` (src/nova/tests/unit/compute/test_provider_tree.py:L18)

