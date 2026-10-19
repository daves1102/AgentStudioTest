# src/nova/objects/network_request.py

## Overview

This file implements the `network_request` module, defining 2 classs, 4 constants, 2 fields, 11 methods, 5 propertys, 1 variable, 3 imports, 4 side effects.

Lines: total 123, code 77, comment 25, blank 21

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `NETWORK_ID_NONE` | constant | — | exported | not declared | — | `src/nova/objects/network_request.py:L25–L25` |
| `NETWORK_ID_AUTO` | constant | — | exported | not declared | — | `src/nova/objects/network_request.py:L26–L26` |
| `__all__` | variable | — | unexported | not declared | — | `src/nova/objects/network_request.py:L28–L31` |
| `NetworkRequest` | class | — | exported | not declared | — | `src/nova/objects/network_request.py:L35–L86` |
| `NetworkRequest.VERSION` | constant | — | public | not declared | — | `src/nova/objects/network_request.py:L40–L40` |
| `NetworkRequest.fields` | field | — | public | not declared | — | `src/nova/objects/network_request.py:L41–L52` |
| `NetworkRequest.obj_make_compatible` | method | (self, primitive, target_version) | public | not declared | 7/8 | `src/nova/objects/network_request.py:L54–L61` |
| `NetworkRequest.obj_load_attr` | method | (self, attr) | public | not declared | 1/2 | `src/nova/objects/network_request.py:L63–L64` |
| `NetworkRequest.to_tuple` | method | (self) | public | `(self.network_id, address, self.port_id, self.pci_request_id, self.arq_uuid, self.device_profile)` (src/nova/objects/network_request.py:L68) | 2/4 | `src/nova/objects/network_request.py:L66–L69` |
| `NetworkRequest.from_tuple` | method | (cls, net_tuple) | public | `cls(network_id=network_id, address=address, port_id=port_id, pci_request_id=pci_request_id, arq_uuid=arq_uuid, device_profile=device_profile)` (src/nova/objects/network_request.py:L75) | 1/7 | `src/nova/objects/network_request.py:L72–L78` |
| `NetworkRequest.auto_allocate` | method | (self) | public | `self.network_id == NETWORK_ID_AUTO` (src/nova/objects/network_request.py:L82) | 1/2 | `src/nova/objects/network_request.py:L81–L82` |
| `NetworkRequest.no_allocate` | method | (self) | public | `self.network_id == NETWORK_ID_NONE` (src/nova/objects/network_request.py:L86) | 1/2 | `src/nova/objects/network_request.py:L85–L86` |
| `NetworkRequestList` | class | — | exported | not declared | — | `src/nova/objects/network_request.py:L90–L123` |
| `NetworkRequestList.fields` | field | — | public | not declared | — | `src/nova/objects/network_request.py:L91–L93` |
| `NetworkRequestList.VERSION` | constant | — | public | not declared | — | `src/nova/objects/network_request.py:L95–L95` |
| `NetworkRequestList.as_tuples` | method | (self) | public | `[x.to_tuple() for x in self.objects]` (src/nova/objects/network_request.py:L98) | 2/2 | `src/nova/objects/network_request.py:L97–L98` |
| `NetworkRequestList.from_tuples` | method | (cls, net_tuples) | public | `requested_networks` (src/nova/objects/network_request.py:L110) | 2/4 | `src/nova/objects/network_request.py:L101–L110` |
| `NetworkRequestList.is_single_unspecified` | method | (self) | public | `((len(self.objects) == 1) and (self.objects[0].to_tuple() == NetworkRequest().to_tuple()))` (src/nova/objects/network_request.py:L114) | 2/3 | `src/nova/objects/network_request.py:L113–L115` |
| `NetworkRequestList.auto_allocate` | method | (self) | public | `len(self.objects) == 1 and self.objects[0].auto_allocate` (src/nova/objects/network_request.py:L119) | 2/2 | `src/nova/objects/network_request.py:L118–L119` |
| `NetworkRequestList.no_allocate` | method | (self) | public | `len(self.objects) == 1 and self.objects[0].no_allocate` (src/nova/objects/network_request.py:L123) | 2/2 | `src/nova/objects/network_request.py:L122–L123` |
| `NetworkRequest.auto_allocate` | property | — | public | not declared | — | `src/nova/objects/network_request.py:L80–L82` |
| `NetworkRequest.no_allocate` | property | — | public | not declared | — | `src/nova/objects/network_request.py:L84–L86` |
| `NetworkRequestList.is_single_unspecified` | property | — | public | not declared | — | `src/nova/objects/network_request.py:L112–L115` |
| `NetworkRequestList.auto_allocate` | property | — | public | not declared | — | `src/nova/objects/network_request.py:L117–L119` |
| `NetworkRequestList.no_allocate` | property | — | public | not declared | — | `src/nova/objects/network_request.py:L121–L123` |

## Dependencies

- `oslo_utils`: imports `versionutils` (src/nova/objects/network_request.py:L15)
- `nova.objects`: imports `base as obj_base` (src/nova/objects/network_request.py:L17)
- `nova.objects`: imports `fields` (src/nova/objects/network_request.py:L18)

## Side Effects

- **global-mutation**: NETWORK_ID_NONE = 'none' (src/nova/objects/network_request.py:L25)
- **global-mutation**: NETWORK_ID_AUTO = 'auto' (src/nova/objects/network_request.py:L26)
- **global-mutation**: VERSION = '1.3' (src/nova/objects/network_request.py:L40)
- **global-mutation**: VERSION = '1.1' (src/nova/objects/network_request.py:L95)

