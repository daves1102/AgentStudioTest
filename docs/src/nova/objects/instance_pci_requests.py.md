# src/nova/objects/instance_pci_requests.py

## Overview

This file implements the `instance_pci_requests` module, defining 2 classs, 4 constants, 2 fields, 10 methods, 1 property, 1 variable, 5 imports, 4 side effects.

Lines: total 177, code 125, comment 32, blank 20

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `__all__` | variable | — | unexported | not declared | — | `src/nova/objects/instance_pci_requests.py:L20–L23` |
| `InstancePCIRequest` | class | — | exported | not declared | — | `src/nova/objects/instance_pci_requests.py:L27–L82` |
| `InstancePCIRequest.VERSION` | constant | — | public | not declared | — | `src/nova/objects/instance_pci_requests.py:L33–L33` |
| `InstancePCIRequest.FLAVOR_ALIAS` | constant | — | public | not declared | — | `src/nova/objects/instance_pci_requests.py:L38–L38` |
| `InstancePCIRequest.NEUTRON_PORT` | constant | — | public | not declared | — | `src/nova/objects/instance_pci_requests.py:L39–L39` |
| `InstancePCIRequest.fields` | field | — | public | not declared | — | `src/nova/objects/instance_pci_requests.py:L41–L51` |
| `InstancePCIRequest.source` | method | (self) | public | `(InstancePCIRequest.NEUTRON_PORT if self.alias_name is None else InstancePCIRequest.FLAVOR_ALIAS)` (src/nova/objects/instance_pci_requests.py:L58) | 2/3 | `src/nova/objects/instance_pci_requests.py:L54–L59` |
| `InstancePCIRequest.obj_load_attr` | method | (self, attr) | public | not declared | 1/2 | `src/nova/objects/instance_pci_requests.py:L61–L62` |
| `InstancePCIRequest.obj_make_compatible` | method | (self, primitive, target_version) | public | not declared | 7/10 | `src/nova/objects/instance_pci_requests.py:L64–L73` |
| `InstancePCIRequest.is_live_migratable` | method | (self) | public | `( "spec" in self and self.spec is not None and all( spec.get("live_migratable") == "true" for spec in self.spec ) )` (src/nova/objects/instance_pci_requests.py:L76) | 4/8 | `src/nova/objects/instance_pci_requests.py:L75–L82` |
| `InstancePCIRequests` | class | — | exported | not declared | — | `src/nova/objects/instance_pci_requests.py:L86–L177` |
| `InstancePCIRequests.VERSION` | constant | — | public | not declared | — | `src/nova/objects/instance_pci_requests.py:L89–L89` |
| `InstancePCIRequests.fields` | field | — | public | not declared | — | `src/nova/objects/instance_pci_requests.py:L91–L94` |
| `InstancePCIRequests.obj_from_db` | method | (cls, context, instance_uuid, db_requests) | public | `self` (src/nova/objects/instance_pci_requests.py:L117) | 3/19 | `src/nova/objects/instance_pci_requests.py:L97–L117` |
| `InstancePCIRequests.get_by_instance_uuid` | method | (cls, context, instance_uuid) | public | `cls.obj_from_db(context, instance_uuid, db_pci_requests)` (src/nova/objects/instance_pci_requests.py:L126) | 2/6 | `src/nova/objects/instance_pci_requests.py:L121–L126` |
| `InstancePCIRequests._load_legacy_requests` | method | (sysmeta_value, is_new=False) | private | `[]` (src/nova/objects/instance_pci_requests.py:L131); `requests` (src/nova/objects/instance_pci_requests.py:L140) | 3/12 | `src/nova/objects/instance_pci_requests.py:L129–L140` |
| `InstancePCIRequests.get_by_instance` | method | (cls, context, instance) | public | `requests` (src/nova/objects/instance_pci_requests.py:L156); `cls.get_by_instance_uuid(context, instance['uuid'])` (src/nova/objects/instance_pci_requests.py:L158) | 2/12 | `src/nova/objects/instance_pci_requests.py:L143–L158` |
| `InstancePCIRequests.to_json` | method | (self) | public | `jsonutils.dumps(blob)` (src/nova/objects/instance_pci_requests.py:L168) | 2/9 | `src/nova/objects/instance_pci_requests.py:L160–L168` |
| `InstancePCIRequests.neutron_requests` | method | (self) | public | `all( [ req for req in self.requests if req.source == InstancePCIRequest.NEUTRON_PORT ] )` (src/nova/objects/instance_pci_requests.py:L171) | 3/8 | `src/nova/objects/instance_pci_requests.py:L170–L177` |
| `InstancePCIRequest.source` | property | — | public | not declared | — | `src/nova/objects/instance_pci_requests.py:L53–L59` |

## Dependencies

- `oslo_serialization`: imports `jsonutils` (src/nova/objects/instance_pci_requests.py:L13)
- `oslo_utils`: imports `versionutils` (src/nova/objects/instance_pci_requests.py:L14)
- `nova.db.main`: imports `api as db` (src/nova/objects/instance_pci_requests.py:L16)
- `nova.objects`: imports `base` (src/nova/objects/instance_pci_requests.py:L17)
- `nova.objects`: imports `fields` (src/nova/objects/instance_pci_requests.py:L18)

## Side Effects

- **global-mutation**: VERSION = '1.4' (src/nova/objects/instance_pci_requests.py:L33)
- **global-mutation**: FLAVOR_ALIAS = 0 (src/nova/objects/instance_pci_requests.py:L38)
- **global-mutation**: NEUTRON_PORT = 1 (src/nova/objects/instance_pci_requests.py:L39)
- **global-mutation**: VERSION = '1.1' (src/nova/objects/instance_pci_requests.py:L89)

