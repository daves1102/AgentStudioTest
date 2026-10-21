# src/nova/tests/unit/objects/test_compute_node.py

## Overview

This file implements the `test_compute_node` module, defining 3 classs, 2 constants, 47 methods, 14 variables, 19 imports, 2 side effects.

Lines: total 755, code 634, comment 39, blank 82

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `NOW` | constant | — | exported | not declared | — | `src/nova/tests/unit/objects/test_compute_node.py:L38–L38` |
| `fake_stats` | variable | — | exported | not declared | — | `src/nova/tests/unit/objects/test_compute_node.py:L39–L39` |
| `fake_stats_db_format` | variable | — | exported | not declared | — | `src/nova/tests/unit/objects/test_compute_node.py:L40–L40` |
| `fake_host_ip` | variable | — | exported | not declared | — | `src/nova/tests/unit/objects/test_compute_node.py:L43–L43` |
| `fake_numa_topology` | variable | — | exported | not declared | — | `src/nova/tests/unit/objects/test_compute_node.py:L44–L64` |
| `fake_numa_topology_db_format` | variable | — | exported | not declared | — | `src/nova/tests/unit/objects/test_compute_node.py:L65–L65` |
| `fake_supported_instances` | variable | — | exported | not declared | — | `src/nova/tests/unit/objects/test_compute_node.py:L66–L66` |
| `fake_hv_spec` | variable | — | exported | not declared | — | `src/nova/tests/unit/objects/test_compute_node.py:L67–L69` |
| `fake_supported_hv_specs` | variable | — | exported | not declared | — | `src/nova/tests/unit/objects/test_compute_node.py:L70–L70` |
| `fake_supported_hv_specs_db_format` | variable | — | exported | not declared | — | `src/nova/tests/unit/objects/test_compute_node.py:L73–L73` |
| `fake_pci` | variable | — | exported | not declared | — | `src/nova/tests/unit/objects/test_compute_node.py:L74–L74` |
| `fake_compute_node` | variable | — | exported | not declared | — | `src/nova/tests/unit/objects/test_compute_node.py:L75–L109` |
| `fake_old_compute_node` | variable | — | exported | not declared | — | `src/nova/tests/unit/objects/test_compute_node.py:L112–L112` |
| `fake_resources` | variable | — | exported | not declared | — | `src/nova/tests/unit/objects/test_compute_node.py:L115–L130` |
| `fake_compute_with_resources` | variable | — | exported | not declared | — | `src/nova/tests/unit/objects/test_compute_node.py:L131–L146` |
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/unit/objects/test_compute_node.py:L148–L148` |
| `_TestComputeNodeObject` | class | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_compute_node.py:L151–L745` |
| `_TestComputeNodeObject.supported_hv_specs_comparator` | method | (self, expected, obj_val) | public | not declared | 2/3 | `src/nova/tests/unit/objects/test_compute_node.py:L152–L154` |
| `_TestComputeNodeObject.pci_device_pools_comparator` | method | (self, expected, obj_val) | public | not declared | 2/6 | `src/nova/tests/unit/objects/test_compute_node.py:L156–L161` |
| `_TestComputeNodeObject.comparators` | method | (self) | public | `{'stats': self.assertJsonEqual, 'host_ip': self.str_comparator, 'supported_hv_specs': self.supported_hv_specs_comparator, 'pci_device_pools': self.pci_device_pools_comparator, }` (src/nova/tests/unit/objects/test_compute_node.py:L164) | 1/6 | `src/nova/tests/unit/objects/test_compute_node.py:L163–L168` |
| `_TestComputeNodeObject.subs` | method | (self) | public | `{'supported_hv_specs': 'supported_instances', 'pci_device_pools': 'pci_stats'}` (src/nova/tests/unit/objects/test_compute_node.py:L171) | 1/3 | `src/nova/tests/unit/objects/test_compute_node.py:L170–L172` |
| `_TestComputeNodeObject.test_get_by_id` | method | (self, get_mock) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_compute_node.py:L175–L182` |
| `_TestComputeNodeObject.test_get_by_uuid` | method | (self, get_all_by_uuids) | public | not declared | 1/10 | `src/nova/tests/unit/objects/test_compute_node.py:L185–L194` |
| `_TestComputeNodeObject.test_get_by_uuid_not_found` | method | (self, get_all_by_uuids) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_compute_node.py:L197–L203` |
| `_TestComputeNodeObject.test_get_without_mapped` | method | (self, get_mock) | public | not declared | 1/10 | `src/nova/tests/unit/objects/test_compute_node.py:L206–L215` |
| `_TestComputeNodeObject.test_get_by_id_with_host_field_not_in_db` | method | (self, mock_cn_get, mock_obj_svc_get) | public | not declared | 1/14 | `src/nova/tests/unit/objects/test_compute_node.py:L219–L234` |
| `_TestComputeNodeObject.test_get_by_service_id` | method | (self, get_mock) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_compute_node.py:L237–L243` |
| `_TestComputeNodeObject.test_get_by_host_and_nodename` | method | (self, cn_get_by_h_and_n) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_compute_node.py:L246–L253` |
| `_TestComputeNodeObject.test_get_by_nodename` | method | (self, cn_get_by_n) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_compute_node.py:L256–L263` |
| `_TestComputeNodeObject.test_get_first_node_by_host_for_old_compat` | method | (self, cn_get_all_by_host) | public | not declared | 1/12 | `src/nova/tests/unit/objects/test_compute_node.py:L266–L278` |
| `_TestComputeNodeObject.test_get_first_node_by_host_for_old_compat_not_found` | method | (self, cn_get_all_by_host) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_compute_node.py:L281–L289` |
| `_TestComputeNodeObject.test_create` | method | (self, mock_get, mock_create) | public | not declared | 1/22 | `src/nova/tests/unit/objects/test_compute_node.py:L294–L316` |
| `_TestComputeNodeObject.test_create_allocates_uuid` | method | (self, mock_get, mock_gu, mock_create) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_compute_node.py:L322–L329` |
| `_TestComputeNodeObject.test_recreate_fails` | method | (self, mock_get, mock_create) | public | not declared | 1/10 | `src/nova/tests/unit/objects/test_compute_node.py:L334–L343` |
| `_TestComputeNodeObject.test_create_duplicate` | method | (self, mock_create) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_compute_node.py:L346–L351` |
| `_TestComputeNodeObject.test_save` | method | (self, mock_get, mock_update) | public | not declared | 1/21 | `src/nova/tests/unit/objects/test_compute_node.py:L356–L377` |
| `_TestComputeNodeObject.test_save_pci_device_pools_empty` | method | (self, mock_update) | public | not declared | 1/15 | `src/nova/tests/unit/objects/test_compute_node.py:L380–L396` |
| `_TestComputeNodeObject.test_save_pci_device_pools_null` | method | (self, mock_update) | public | not declared | 1/13 | `src/nova/tests/unit/objects/test_compute_node.py:L399–L413` |
| `_TestComputeNodeObject.test_set_id_failure` | method | (self, mock_get, db_mock) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_compute_node.py:L419–L424` |
| `_TestComputeNodeObject.test_destroy` | method | (self, mock_delete) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_compute_node.py:L427–L431` |
| `_TestComputeNodeObject.test_destroy_host_constraint` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_compute_node.py:L433–L441` |
| `_TestComputeNodeObject.test_get_all` | method | (self, mock_get_all) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_compute_node.py:L444–L451` |
| `_TestComputeNodeObject.test_get_by_hypervisor` | method | (self, mock_search) | public | not declared | 1/9 | `src/nova/tests/unit/objects/test_compute_node.py:L454–L462` |
| `_TestComputeNodeObject.test_get_by_pagination` | method | (self, fake_get_by_pagination) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_compute_node.py:L466–L472` |
| `_TestComputeNodeObject.test__get_by_service` | method | (self, cn_get_by_svc_id) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_compute_node.py:L475–L482` |
| `_TestComputeNodeObject.test_get_all_by_host` | method | (self, cn_get_all_by_host) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_compute_node.py:L485–L492` |
| `_TestComputeNodeObject.test_compat_numa_topology` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/objects/test_compute_node.py:L494–L503` |
| `_TestComputeNodeObject.test_compat_supported_hv_specs` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/objects/test_compute_node.py:L505–L515` |
| `_TestComputeNodeObject.test_compat_host` | method | (self, mock_get_compute) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_compute_node.py:L518–L524` |
| `_TestComputeNodeObject.test_compat_pci_device_pools` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/objects/test_compute_node.py:L526–L536` |
| `_TestComputeNodeObject.test_compat_service_id` | method | (self, mock_get) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_compute_node.py:L539–L543` |
| `_TestComputeNodeObject.test_compat_service_id_compute_host_not_found` | method | (self, mock_get) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_compute_node.py:L546–L550` |
| `_TestComputeNodeObject.test_update_from_virt_driver` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_compute_node.py:L552–L561` |
| `_TestComputeNodeObject.test_update_from_virt_driver_uuid_already_set` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_compute_node.py:L563–L573` |
| `_TestComputeNodeObject.test_update_from_virt_driver_missing_field` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_compute_node.py:L575–L585` |
| `_TestComputeNodeObject.test_update_from_virt_driver_extra_field` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_compute_node.py:L587–L594` |
| `_TestComputeNodeObject.test_update_from_virt_driver_bad_value` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_compute_node.py:L596–L602` |
| `_TestComputeNodeObject.test_compat_allocation_ratios` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/objects/test_compute_node.py:L604–L613` |
| `_TestComputeNodeObject.test_compat_disk_allocation_ratio` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_compute_node.py:L615–L622` |
| `_TestComputeNodeObject.test_compat_allocation_ratios_old_compute` | method | (self, mock_update) | public | not declared | 1/16 | `src/nova/tests/unit/objects/test_compute_node.py:L625–L648` |
| `_TestComputeNodeObject.test_compat_allocation_ratios_zero_conf` | method | (self, mock_update) | public | not declared | 1/19 | `src/nova/tests/unit/objects/test_compute_node.py:L651–L678` |
| `_TestComputeNodeObject.test_compat_allocation_ratios_None_conf_zero_values` | method | (self, mock_update) | public | not declared | 1/17 | `src/nova/tests/unit/objects/test_compute_node.py:L681–L706` |
| `_TestComputeNodeObject.test_compat_allocation_ratios_None_conf_None_values` | method | (self, mock_update) | public | not declared | 1/17 | `src/nova/tests/unit/objects/test_compute_node.py:L709–L734` |
| `_TestComputeNodeObject.test_get_all_by_not_mapped` | method | (self) | public | not declared | 3/10 | `src/nova/tests/unit/objects/test_compute_node.py:L736–L745` |
| `TestComputeNodeObject` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_compute_node.py:L748–L750` |
| `TestRemoteComputeNodeObject` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_compute_node.py:L753–L755` |

## Dependencies

- `import copy` (src/nova/tests/unit/objects/test_compute_node.py:L15)
- `unittest`: imports `mock` (src/nova/tests/unit/objects/test_compute_node.py:L16)
- `import netaddr` (src/nova/tests/unit/objects/test_compute_node.py:L18)
- `oslo_db`: imports `exception as db_exc` (src/nova/tests/unit/objects/test_compute_node.py:L19)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/objects/test_compute_node.py:L20)
- `oslo_utils.fixture`: imports `uuidsentinel` (src/nova/tests/unit/objects/test_compute_node.py:L21)
- `oslo_utils`: imports `timeutils` (src/nova/tests/unit/objects/test_compute_node.py:L22)
- `oslo_versionedobjects`: imports `base as ovo_base` (src/nova/tests/unit/objects/test_compute_node.py:L23)
- `oslo_versionedobjects`: imports `exception as ovo_exc` (src/nova/tests/unit/objects/test_compute_node.py:L24)
- `nova`: imports `conf` (src/nova/tests/unit/objects/test_compute_node.py:L26)
- `nova.db.main`: imports `api as db` (src/nova/tests/unit/objects/test_compute_node.py:L27)
- `nova`: imports `exception` (src/nova/tests/unit/objects/test_compute_node.py:L28)
- `nova`: imports `objects` (src/nova/tests/unit/objects/test_compute_node.py:L29)
- `nova.objects`: imports `base` (src/nova/tests/unit/objects/test_compute_node.py:L30)
- `nova.objects`: imports `compute_node` (src/nova/tests/unit/objects/test_compute_node.py:L31)
- `nova.objects`: imports `hv_spec` (src/nova/tests/unit/objects/test_compute_node.py:L32)
- `nova.objects`: imports `service` (src/nova/tests/unit/objects/test_compute_node.py:L33)
- `nova.tests.unit`: imports `fake_pci_device_pools` (src/nova/tests/unit/objects/test_compute_node.py:L34)
- `nova.tests.unit.objects`: imports `test_objects` (src/nova/tests/unit/objects/test_compute_node.py:L35)

## Side Effects

- **global-mutation**: NOW = timeutils.utcnow().replace(microsecond=0) (src/nova/tests/unit/objects/test_compute_node.py:L38)
- **global-mutation**: CONF = conf.CONF (src/nova/tests/unit/objects/test_compute_node.py:L148)

