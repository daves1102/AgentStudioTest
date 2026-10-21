# src/nova/virt/vmwareapi/ds_util.py

## Overview

This file implements the `ds_util` module, defining 2 constants, 23 functions, 2 variables, 11 imports, 2 side effects.

Lines: total 513, code 403, comment 27, blank 83

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/virt/vmwareapi/ds_util.py:L32–L32` |
| `ALL_SUPPORTED_DS_TYPES` | constant | — | exported | not declared | — | `src/nova/virt/vmwareapi/ds_util.py:L33–L36` |
| `DcInfo` | variable | — | exported | not declared | — | `src/nova/virt/vmwareapi/ds_util.py:L39–L40` |
| `_DS_DC_MAPPING` | variable | — | unexported | not declared | — | `src/nova/virt/vmwareapi/ds_util.py:L44–L44` |
| `_select_datastore` | function | (session, datastores, best_match, datastore_regex=None, storage_policy=None, allowed_ds_types=ALL_SUPPORTED_DS_TYPES) | unexported | `best_match` (src/nova/virt/vmwareapi/ds_util.py:L65); `best_match` (src/nova/virt/vmwareapi/ds_util.py:L87) | 8/24 | `src/nova/virt/vmwareapi/ds_util.py:L47–L87` |
| `_is_datastore_valid` | function | (propdict, datastore_regex, ds_types) | unexported | `(propdict.get('summary.accessible') and (propdict.get('summary.maintenanceMode') is None or propdict.get('summary.maintenanceMode') == 'normal') and propdict['summary.type'] in ds_types and (datastore` (src/nova/virt/vmwareapi/ds_util.py:L105) | 6/7 | `src/nova/virt/vmwareapi/ds_util.py:L90–L110` |
| `get_datastore` | function | (session, cluster, datastore_regex=None, storage_policy=None, allowed_ds_types=ALL_SUPPORTED_DS_TYPES) | exported | `best_match` (src/nova/virt/vmwareapi/ds_util.py:L145) | 5/37 | `src/nova/virt/vmwareapi/ds_util.py:L113–L156` |
| `_get_allowed_datastores` | function | (datastores, datastore_regex) | unexported | not declared | 4/12 | `src/nova/virt/vmwareapi/ds_util.py:L159–L172` |
| `get_available_datastores` | function | (session, cluster=None, datastore_regex=None) | exported | `[]` (src/nova/virt/vmwareapi/ds_util.py:L182); `list(_get_allowed_datastores(datastores, datastore_regex))` (src/nova/virt/vmwareapi/ds_util.py:L193) | 2/16 | `src/nova/virt/vmwareapi/ds_util.py:L175–L193` |
| `get_allowed_datastore_types` | function | (disk_type) | exported | `ALL_SUPPORTED_DS_TYPES` (src/nova/virt/vmwareapi/ds_util.py:L198); `ALL_SUPPORTED_DS_TYPES - frozenset([constants.DATASTORE_TYPE_VSAN])` (src/nova/virt/vmwareapi/ds_util.py:L199) | 2/4 | `src/nova/virt/vmwareapi/ds_util.py:L196–L199` |
| `get_datacenter_ref` | function | (session, dc_path) | exported | `session._call_method( session.vim, "FindByInventoryPath", session.vim.service_content.searchIndex, inventoryPath=dc_path)` (src/nova/virt/vmwareapi/ds_util.py:L203) | 1/6 | `src/nova/virt/vmwareapi/ds_util.py:L202–L207` |
| `file_delete` | function | (session, ds_path, dc_ref) | exported | not declared | 1/11 | `src/nova/virt/vmwareapi/ds_util.py:L210–L220` |
| `file_copy` | function | (session, src_file, src_dc_ref, dst_file, dst_dc_ref) | exported | not declared | 1/14 | `src/nova/virt/vmwareapi/ds_util.py:L223–L236` |
| `disk_move` | function | (session, dc_ref, src_file, dst_file) | exported | not declared | 1/15 | `src/nova/virt/vmwareapi/ds_util.py:L239–L276` |
| `disk_copy` | function | (session, dc_ref, src_file, dst_file) | exported | not declared | 1/15 | `src/nova/virt/vmwareapi/ds_util.py:L279–L294` |
| `disk_delete` | function | (session, dc_ref, file_path) | exported | not declared | 1/10 | `src/nova/virt/vmwareapi/ds_util.py:L297–L307` |
| `file_move` | function | (session, dc_ref, src_file, dst_file) | exported | not declared | 1/14 | `src/nova/virt/vmwareapi/ds_util.py:L310–L346` |
| `search_datastore_spec` | function | (client_factory, file_name) | exported | `search_spec` (src/nova/virt/vmwareapi/ds_util.py:L358) | 1/9 | `src/nova/virt/vmwareapi/ds_util.py:L349–L358` |
| `file_exists` | function | (session, ds_browser, ds_path, file_name) | exported | `False` (src/nova/virt/vmwareapi/ds_util.py:L373); `file_exists` (src/nova/virt/vmwareapi/ds_util.py:L377) | 3/15 | `src/nova/virt/vmwareapi/ds_util.py:L361–L377` |
| `file_size` | function | (session, ds_browser, ds_path, file_name) | exported | `task_info.result.file[0].fileSize` (src/nova/virt/vmwareapi/ds_util.py:L391) | 3/11 | `src/nova/virt/vmwareapi/ds_util.py:L380–L391` |
| `mkdir` | function | (session, ds_path, dc_ref) | exported | not declared | 1/7 | `src/nova/virt/vmwareapi/ds_util.py:L394–L404` |
| `get_sub_folders` | function | (session, ds_browser, ds_path) | exported | `set()` (src/nova/virt/vmwareapi/ds_util.py:L420); `set([file.path for file in task_info.result.file])` (src/nova/virt/vmwareapi/ds_util.py:L423); `set()` (src/nova/virt/vmwareapi/ds_util.py:L424) | 4/13 | `src/nova/virt/vmwareapi/ds_util.py:L407–L424` |
| `_filter_datastores_matching_storage_policy` | function | (session, datastores, storage_policy) | unexported | `` (src/nova/virt/vmwareapi/ds_util.py:L439) | 4/18 | `src/nova/virt/vmwareapi/ds_util.py:L427–L456` |
| `_update_datacenter_cache_from_objects` | function | (session, dcs) | unexported | not declared | 5/19 | `src/nova/virt/vmwareapi/ds_util.py:L459–L478` |
| `get_dc_info` | function | (session, ds_ref) | exported | `dc_info` (src/nova/virt/vmwareapi/ds_util.py:L489) | 2/8 | `src/nova/virt/vmwareapi/ds_util.py:L481–L489` |
| `dc_cache_reset` | function | — | exported | not declared | 1/3 | `src/nova/virt/vmwareapi/ds_util.py:L492–L494` |
| `get_connected_hosts` | function | (session, datastore) | exported | `[]` (src/nova/virt/vmwareapi/ds_util.py:L507); `connected_hosts` (src/nova/virt/vmwareapi/ds_util.py:L513) | 3/9 | `src/nova/virt/vmwareapi/ds_util.py:L497–L513` |

## Dependencies

- `import collections` (src/nova/virt/vmwareapi/ds_util.py:L18)
- `oslo_log`: imports `log as logging` (src/nova/virt/vmwareapi/ds_util.py:L20)
- `oslo_vmware`: imports `exceptions as vexc` (src/nova/virt/vmwareapi/ds_util.py:L21)
- `oslo_vmware.objects`: imports `datastore as ds_obj` (src/nova/virt/vmwareapi/ds_util.py:L22)
- `oslo_vmware`: imports `pbm` (src/nova/virt/vmwareapi/ds_util.py:L23)
- `oslo_vmware`: imports `vim_util as vutil` (src/nova/virt/vmwareapi/ds_util.py:L24)
- `nova`: imports `exception` (src/nova/virt/vmwareapi/ds_util.py:L26)
- `nova.i18n`: imports `_` (src/nova/virt/vmwareapi/ds_util.py:L27)
- `nova.virt.vmwareapi`: imports `constants` (src/nova/virt/vmwareapi/ds_util.py:L28)
- `nova.virt.vmwareapi`: imports `vim_util` (src/nova/virt/vmwareapi/ds_util.py:L29)
- `nova.virt.vmwareapi`: imports `vm_util` (src/nova/virt/vmwareapi/ds_util.py:L30)

## Side Effects

- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/virt/vmwareapi/ds_util.py:L32)
- **global-mutation**: ALL_SUPPORTED_DS_TYPES = frozenset([constants.DATASTORE_TYPE_VMFS, (src/nova/virt/vmwareapi/ds_util.py:L33)

