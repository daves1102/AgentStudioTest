# src/nova/tests/unit/virt/vmwareapi/test_ds_util_datastore_selection.py

## Overview

This file implements the `test_ds_util_datastore_selection` module, defining 1 class, 9 methods, 1 property, 4 variables, 6 imports.

Lines: total 164, code 120, comment 17, blank 27

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ResultSet` | variable | — | exported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/test_ds_util_datastore_selection.py:L23–L23` |
| `ObjectContent` | variable | — | exported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/test_ds_util_datastore_selection.py:L24–L24` |
| `DynamicProperty` | variable | — | exported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/test_ds_util_datastore_selection.py:L25–L25` |
| `MoRef` | variable | — | exported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/test_ds_util_datastore_selection.py:L26–L26` |
| `VMwareDSUtilDatastoreSelectionTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/test_ds_util_datastore_selection.py:L29–L164` |
| `VMwareDSUtilDatastoreSelectionTestCase.setUp` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/vmwareapi/test_ds_util_datastore_selection.py:L31–L39` |
| `VMwareDSUtilDatastoreSelectionTestCase.create_result_iterator` | method | (self, mock_data, name_list=None) | public | not declared | 4/11 | `src/nova/tests/unit/virt/vmwareapi/test_ds_util_datastore_selection.py:L41–L54` |
| `VMwareDSUtilDatastoreSelectionTestCase.propset_name_list` | method | (self) | public | `['summary.type', 'summary.name', 'summary.accessible', 'summary.maintenanceMode', 'summary.capacity', 'summary.freeSpace']` (src/nova/tests/unit/virt/vmwareapi/test_ds_util_datastore_selection.py:L58) | 1/4 | `src/nova/tests/unit/virt/vmwareapi/test_ds_util_datastore_selection.py:L57–L60` |
| `VMwareDSUtilDatastoreSelectionTestCase.test_filter_datastores_simple` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/vmwareapi/test_ds_util_datastore_selection.py:L62–L72` |
| `VMwareDSUtilDatastoreSelectionTestCase.test_filter_datastores_empty` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/vmwareapi/test_ds_util_datastore_selection.py:L74–L82` |
| `VMwareDSUtilDatastoreSelectionTestCase.test_filter_datastores_no_match` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/vmwareapi/test_ds_util_datastore_selection.py:L84–L94` |
| `VMwareDSUtilDatastoreSelectionTestCase.test_filter_datastores_specific_match` | method | (self) | public | not declared | 1/28 | `src/nova/tests/unit/virt/vmwareapi/test_ds_util_datastore_selection.py:L96–L127` |
| `VMwareDSUtilDatastoreSelectionTestCase.test_filter_datastores_missing_props` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/vmwareapi/test_ds_util_datastore_selection.py:L129–L142` |
| `VMwareDSUtilDatastoreSelectionTestCase.test_filter_datastores_best_match` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/virt/vmwareapi/test_ds_util_datastore_selection.py:L144–L164` |
| `VMwareDSUtilDatastoreSelectionTestCase.propset_name_list` | property | — | public | not declared | — | `src/nova/tests/unit/virt/vmwareapi/test_ds_util_datastore_selection.py:L56–L60` |

## Dependencies

- `import collections` (src/nova/tests/unit/virt/vmwareapi/test_ds_util_datastore_selection.py:L14)
- `import re` (src/nova/tests/unit/virt/vmwareapi/test_ds_util_datastore_selection.py:L15)
- `oslo_utils`: imports `units` (src/nova/tests/unit/virt/vmwareapi/test_ds_util_datastore_selection.py:L17)
- `oslo_vmware.objects`: imports `datastore as ds_obj` (src/nova/tests/unit/virt/vmwareapi/test_ds_util_datastore_selection.py:L18)
- `nova`: imports `test` (src/nova/tests/unit/virt/vmwareapi/test_ds_util_datastore_selection.py:L20)
- `nova.virt.vmwareapi`: imports `ds_util` (src/nova/tests/unit/virt/vmwareapi/test_ds_util_datastore_selection.py:L21)

