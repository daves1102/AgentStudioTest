# src/nova/tests/unit/virt/vmwareapi/test_ds_util.py

## Overview

This file implements the `test_ds_util` module, defining 1 class, 12 functions, 31 methods, 10 imports, 1 side effect.

Lines: total 485, code 384, comment 32, blank 69

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `DsUtilTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/test_ds_util.py:L29–L485` |
| `DsUtilTestCase.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/vmwareapi/test_ds_util.py:L30–L34` |
| `DsUtilTestCase.tearDown` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/vmwareapi/test_ds_util.py:L36–L38` |
| `DsUtilTestCase.test_get_datacenter_ref` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/vmwareapi/test_ds_util.py:L40–L47` |
| `DsUtilTestCase.test_file_delete` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/vmwareapi/test_ds_util.py:L49–L67` |
| `DsUtilTestCase.test_file_delete.fake_call_method` | function | (module, method, *args, **kwargs) | public | `'fake_delete_task'` (src/nova/tests/unit/virt/vmwareapi/test_ds_util.py:L56) | — | `src/nova/tests/unit/virt/vmwareapi/test_ds_util.py:L50–L56` |
| `DsUtilTestCase.test_file_copy` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/virt/vmwareapi/test_ds_util.py:L69–L93` |
| `DsUtilTestCase.test_file_copy.fake_call_method` | function | (module, method, *args, **kwargs) | public | `'fake_copy_task'` (src/nova/tests/unit/virt/vmwareapi/test_ds_util.py:L80) | — | `src/nova/tests/unit/virt/vmwareapi/test_ds_util.py:L70–L80` |
| `DsUtilTestCase.test_file_move` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/virt/vmwareapi/test_ds_util.py:L95–L118` |
| `DsUtilTestCase.test_file_move.fake_call_method` | function | (module, method, *args, **kwargs) | public | `'fake_move_task'` (src/nova/tests/unit/virt/vmwareapi/test_ds_util.py:L106) | — | `src/nova/tests/unit/virt/vmwareapi/test_ds_util.py:L96–L106` |
| `DsUtilTestCase.test_disk_move` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/virt/vmwareapi/test_ds_util.py:L120–L141` |
| `DsUtilTestCase.test_disk_move.fake_call_method` | function | (module, method, *args, **kwargs) | public | `'fake_move_task'` (src/nova/tests/unit/virt/vmwareapi/test_ds_util.py:L131) | — | `src/nova/tests/unit/virt/vmwareapi/test_ds_util.py:L121–L131` |
| `DsUtilTestCase.test_disk_copy` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/virt/vmwareapi/test_ds_util.py:L143–L157` |
| `DsUtilTestCase.test_disk_delete` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/vmwareapi/test_ds_util.py:L159–L170` |
| `DsUtilTestCase.test_mkdir` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/vmwareapi/test_ds_util.py:L172–L185` |
| `DsUtilTestCase.test_mkdir.fake_call_method` | function | (module, method, *args, **kwargs) | public | not declared | — | `src/nova/tests/unit/virt/vmwareapi/test_ds_util.py:L173–L180` |
| `DsUtilTestCase.test_file_exists` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/vmwareapi/test_ds_util.py:L187–L224` |
| `DsUtilTestCase.test_file_exists.fake_call_method` | function | (module, method, *args, **kwargs) | public | `'fake_exists_task'` (src/nova/tests/unit/virt/vmwareapi/test_ds_util.py:L194) | — | `src/nova/tests/unit/virt/vmwareapi/test_ds_util.py:L188–L197` |
| `DsUtilTestCase.test_file_exists.fake_wait_for_task` | function | (task_ref) | public | `task_info` (src/nova/tests/unit/virt/vmwareapi/test_ds_util.py:L211) | — | `src/nova/tests/unit/virt/vmwareapi/test_ds_util.py:L199–L214` |
| `DsUtilTestCase.test_file_exists_fails` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/vmwareapi/test_ds_util.py:L226–L249` |
| `DsUtilTestCase.test_file_exists_fails.fake_call_method` | function | (module, method, *args, **kwargs) | public | `'fake_exists_task'` (src/nova/tests/unit/virt/vmwareapi/test_ds_util.py:L229) | — | `src/nova/tests/unit/virt/vmwareapi/test_ds_util.py:L227–L232` |
| `DsUtilTestCase.test_file_exists_fails.fake_wait_for_task` | function | (task_ref) | public | not declared | — | `src/nova/tests/unit/virt/vmwareapi/test_ds_util.py:L234–L239` |
| `DsUtilTestCase._mock_get_datastore_calls` | method | (self, *datastores) | private | not declared | 1/11 | `src/nova/tests/unit/virt/vmwareapi/test_ds_util.py:L252–L296` |
| `DsUtilTestCase._mock_get_datastore_calls.fake_call_method` | function | (module, method, *args, **kwargs) | public | `fake_ds_mor` (src/nova/tests/unit/virt/vmwareapi/test_ds_util.py:L270); `next(datastores_i[0])` (src/nova/tests/unit/virt/vmwareapi/test_ds_util.py:L280) | — | `src/nova/tests/unit/virt/vmwareapi/test_ds_util.py:L263–L283` |
| `DsUtilTestCase._mock_get_datastore_calls.next_datastore` | function | (*args, **kwargs) | public | `next(datastores_i[0])` (src/nova/tests/unit/virt/vmwareapi/test_ds_util.py:L287); `None` (src/nova/tests/unit/virt/vmwareapi/test_ds_util.py:L289) | — | `src/nova/tests/unit/virt/vmwareapi/test_ds_util.py:L285–L289` |
| `DsUtilTestCase.test_get_datastore` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/vmwareapi/test_ds_util.py:L298–L310` |
| `DsUtilTestCase.test_get_datastore_with_regex` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/vmwareapi/test_ds_util.py:L312–L323` |
| `DsUtilTestCase.test_get_datastore_with_token` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/virt/vmwareapi/test_ds_util.py:L325–L337` |
| `DsUtilTestCase.test_get_datastore_with_list` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/virt/vmwareapi/test_ds_util.py:L339–L350` |
| `DsUtilTestCase.test_get_datastore_with_regex_error` | method | (self) | public | not declared | 2/16 | `src/nova/tests/unit/virt/vmwareapi/test_ds_util.py:L352–L371` |
| `DsUtilTestCase.test_get_datastore_without_datastore` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/vmwareapi/test_ds_util.py:L373–L376` |
| `DsUtilTestCase.test_get_datastore_inaccessible_ds` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/vmwareapi/test_ds_util.py:L378–L388` |
| `DsUtilTestCase.test_get_datastore_ds_in_maintenance` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/vmwareapi/test_ds_util.py:L390–L400` |
| `DsUtilTestCase.test_get_datastore_no_host_in_cluster` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/vmwareapi/test_ds_util.py:L402–L410` |
| `DsUtilTestCase.test_get_datastore_no_host_in_cluster.fake_call_method` | function | (module, method, *args, **kwargs) | public | `''` (src/nova/tests/unit/virt/vmwareapi/test_ds_util.py:L404) | — | `src/nova/tests/unit/virt/vmwareapi/test_ds_util.py:L403–L404` |
| `DsUtilTestCase._test_is_datastore_valid` | method | (self, accessible=True, maintenance_mode="normal", type="VMFS", datastore_regex=None, ds_types=ds_util.ALL_SUPPORTED_DS_TYPES) | private | `ds_util._is_datastore_valid(propdict, datastore_regex, ds_types)` (src/nova/tests/unit/virt/vmwareapi/test_ds_util.py:L423) | 1/11 | `src/nova/tests/unit/virt/vmwareapi/test_ds_util.py:L412–L423` |
| `DsUtilTestCase.test_is_datastore_valid` | method | (self) | public | not declared | 2/5 | `src/nova/tests/unit/virt/vmwareapi/test_ds_util.py:L425–L429` |
| `DsUtilTestCase.test_is_datastore_valid_inaccessible_ds` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/vmwareapi/test_ds_util.py:L431–L434` |
| `DsUtilTestCase.test_is_datastore_valid_ds_in_maintenance` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/vmwareapi/test_ds_util.py:L436–L439` |
| `DsUtilTestCase.test_is_datastore_valid_ds_type_invalid` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/vmwareapi/test_ds_util.py:L441–L444` |
| `DsUtilTestCase.test_is_datastore_valid_not_matching_regex` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/vmwareapi/test_ds_util.py:L446–L451` |
| `DsUtilTestCase.test_is_datastore_valid_matching_regex` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/vmwareapi/test_ds_util.py:L453–L458` |
| `DsUtilTestCase.test_get_connected_hosts_none` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/vmwareapi/test_ds_util.py:L460–L468` |
| `DsUtilTestCase.test_get_connected_hosts` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/virt/vmwareapi/test_ds_util.py:L470–L485` |

## Dependencies

- `contextlib`: imports `contextmanager` (src/nova/tests/unit/virt/vmwareapi/test_ds_util.py:L15)
- `import re` (src/nova/tests/unit/virt/vmwareapi/test_ds_util.py:L16)
- `unittest`: imports `mock` (src/nova/tests/unit/virt/vmwareapi/test_ds_util.py:L17)
- `oslo_utils`: imports `units` (src/nova/tests/unit/virt/vmwareapi/test_ds_util.py:L19)
- `oslo_vmware`: imports `exceptions as vexc` (src/nova/tests/unit/virt/vmwareapi/test_ds_util.py:L20)
- `oslo_vmware.objects`: imports `datastore as ds_obj` (src/nova/tests/unit/virt/vmwareapi/test_ds_util.py:L21)
- `nova`: imports `exception` (src/nova/tests/unit/virt/vmwareapi/test_ds_util.py:L23)
- `nova`: imports `test` (src/nova/tests/unit/virt/vmwareapi/test_ds_util.py:L24)
- `nova.tests.unit.virt.vmwareapi`: imports `fake` (src/nova/tests/unit/virt/vmwareapi/test_ds_util.py:L25)
- `nova.virt.vmwareapi`: imports `ds_util` (src/nova/tests/unit/virt/vmwareapi/test_ds_util.py:L26)

## Side Effects

- **network**: datastore_valid_regex = re.compile(r"^openstack.*\d$") (src/nova/tests/unit/virt/vmwareapi/test_ds_util.py:L314)

