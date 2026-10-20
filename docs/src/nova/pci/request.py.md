# src/nova/pci/request.py

## Overview

This file implements the `request` module, defining 7 constants, 7 functions, 2 variables, 14 imports, 7 side effects.

Lines: total 379, code 294, comment 27, blank 58

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `Alias` | variable | — | exported | not declared | — | `src/nova/pci/request.py:L58–L58` |
| `PCI_NET_TAG` | constant | — | exported | not declared | — | `src/nova/pci/request.py:L60–L60` |
| `PCI_TRUSTED_TAG` | constant | — | exported | not declared | — | `src/nova/pci/request.py:L61–L61` |
| `PCI_DEVICE_TYPE_TAG` | constant | — | exported | not declared | — | `src/nova/pci/request.py:L62–L62` |
| `PCI_REMOTE_MANAGED_TAG` | constant | — | exported | not declared | — | `src/nova/pci/request.py:L63–L63` |
| `DEVICE_TYPE_FOR_VNIC_TYPE` | constant | — | exported | not declared | — | `src/nova/pci/request.py:L65–L68` |
| `CONF` | constant | — | exported | not declared | — | `src/nova/pci/request.py:L70–L70` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/pci/request.py:L71–L71` |
| `_ALIAS_SCHEMA` | variable | — | unexported | not declared | — | `src/nova/pci/request.py:L73–L121` |
| `_validate_multispec` | function | (aliases) | unexported | not declared | 5/12 | `src/nova/pci/request.py:L124–L135` |
| `_validate_required_ids` | function | (aliases) | unexported | not declared | 13/26 | `src/nova/pci/request.py:L138–L165` |
| `_validate_aliases` | function | (aliases) | unexported | not declared | 1/3 | `src/nova/pci/request.py:L168–L173` |
| `get_alias_from_config` | function | — | exported | `aliases` (src/nova/pci/request.py:L234) | 12/40 | `src/nova/pci/request.py:L177–L234` |
| `_translate_alias_to_requests` | function | (alias_spec, affinity_policy=None) | unexported | `pci_requests` (src/nova/pci/request.py:L263) | 5/19 | `src/nova/pci/request.py:L237–L263` |
| `get_instance_pci_request_from_vif` | function | (context, instance, vif) | exported | `None` (src/nova/pci/request.py:L292); `None` (src/nova/pci/request.py:L303); `None` (src/nova/pci/request.py:L313); `pci_req` (src/nova/pci/request.py:L317) | 10/33 | `src/nova/pci/request.py:L266–L321` |
| `get_pci_requests_from_flavor` | function | (flavor, affinity_policy=None) | exported | `objects.InstancePCIRequests(requests=pci_requests)` (src/nova/pci/request.py:L379) | 3/10 | `src/nova/pci/request.py:L324–L379` |

## Dependencies

- `import functools` (src/nova/pci/request.py:L41)
- `import jsonschema` (src/nova/pci/request.py:L43)
- `oslo_log`: imports `log as logging` (src/nova/pci/request.py:L44)
- `oslo_serialization`: imports `jsonutils` (src/nova/pci/request.py:L45)
- `oslo_utils`: imports `uuidutils` (src/nova/pci/request.py:L46)
- `import nova.conf` (src/nova/pci/request.py:L48)
- `nova`: imports `context as ctx` (src/nova/pci/request.py:L49)
- `nova`: imports `exception` (src/nova/pci/request.py:L50)
- `nova.i18n`: imports `_` (src/nova/pci/request.py:L51)
- `nova.network`: imports `model as network_model` (src/nova/pci/request.py:L52)
- `nova`: imports `objects` (src/nova/pci/request.py:L53)
- `nova.objects`: imports `fields as obj_fields` (src/nova/pci/request.py:L54)
- `nova.pci`: imports `utils` (src/nova/pci/request.py:L55)
- `oslo_utils`: imports `strutils` (src/nova/pci/request.py:L56)

## Side Effects

- **global-mutation**: PCI_NET_TAG = 'physical_network' (src/nova/pci/request.py:L60)
- **global-mutation**: PCI_TRUSTED_TAG = 'trusted' (src/nova/pci/request.py:L61)
- **global-mutation**: PCI_DEVICE_TYPE_TAG = 'dev_type' (src/nova/pci/request.py:L62)
- **global-mutation**: PCI_REMOTE_MANAGED_TAG = 'remote_managed' (src/nova/pci/request.py:L63)
- **global-mutation**: DEVICE_TYPE_FOR_VNIC_TYPE = { (src/nova/pci/request.py:L65)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/pci/request.py:L70)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/pci/request.py:L71)

