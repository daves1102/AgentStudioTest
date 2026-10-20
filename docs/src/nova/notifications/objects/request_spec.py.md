# src/nova/notifications/objects/request_spec.py

## Overview

This file implements the `request_spec` module, defining 9 classs, 2 classmethods, 18 constants, 9 fields, 11 methods, 6 imports, 18 side effects.

Lines: total 350, code 273, comment 29, blank 48

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `RequestSpecPayload` | class | — | exported | not declared | — | `src/nova/notifications/objects/request_spec.py:L24–L115` |
| `RequestSpecPayload.VERSION` | constant | — | public | not declared | — | `src/nova/notifications/objects/request_spec.py:L29–L29` |
| `RequestSpecPayload.SCHEMA` | constant | — | public | not declared | — | `src/nova/notifications/objects/request_spec.py:L31–L39` |
| `RequestSpecPayload.fields` | field | — | public | not declared | — | `src/nova/notifications/objects/request_spec.py:L41–L64` |
| `RequestSpecPayload.__init__` | method | (self, request_spec) | public | not declared | 18/50 | `src/nova/notifications/objects/request_spec.py:L66–L115` |
| `InstanceNUMATopologyPayload` | class | — | exported | not declared | — | `src/nova/notifications/objects/request_spec.py:L119–L140` |
| `InstanceNUMATopologyPayload.VERSION` | constant | — | public | not declared | — | `src/nova/notifications/objects/request_spec.py:L121–L121` |
| `InstanceNUMATopologyPayload.SCHEMA` | constant | — | public | not declared | — | `src/nova/notifications/objects/request_spec.py:L123–L127` |
| `InstanceNUMATopologyPayload.fields` | field | — | public | not declared | — | `src/nova/notifications/objects/request_spec.py:L129–L134` |
| `InstanceNUMATopologyPayload.__init__` | method | (self, numa_topology) | public | not declared | 1/5 | `src/nova/notifications/objects/request_spec.py:L136–L140` |
| `InstanceNUMACellPayload` | class | — | exported | not declared | — | `src/nova/notifications/objects/request_spec.py:L144–L194` |
| `InstanceNUMACellPayload.VERSION` | constant | — | public | not declared | — | `src/nova/notifications/objects/request_spec.py:L148–L148` |
| `InstanceNUMACellPayload.SCHEMA` | constant | — | public | not declared | — | `src/nova/notifications/objects/request_spec.py:L150–L160` |
| `InstanceNUMACellPayload.fields` | field | — | public | not declared | — | `src/nova/notifications/objects/request_spec.py:L162–L175` |
| `InstanceNUMACellPayload.__init__` | method | (self, numa_cell) | public | not declared | 3/8 | `src/nova/notifications/objects/request_spec.py:L177–L184` |
| `InstanceNUMACellPayload.from_numa_cell_list_obj` | method | (cls, numa_cell_list) | public | `payloads` (src/nova/notifications/objects/request_spec.py:L194) | 2/5 | `src/nova/notifications/objects/request_spec.py:L187–L194` |
| `VirtCPUTopologyPayload` | class | — | exported | not declared | — | `src/nova/notifications/objects/request_spec.py:L198–L216` |
| `VirtCPUTopologyPayload.VERSION` | constant | — | public | not declared | — | `src/nova/notifications/objects/request_spec.py:L200–L200` |
| `VirtCPUTopologyPayload.SCHEMA` | constant | — | public | not declared | — | `src/nova/notifications/objects/request_spec.py:L202–L206` |
| `VirtCPUTopologyPayload.fields` | field | — | public | not declared | — | `src/nova/notifications/objects/request_spec.py:L208–L212` |
| `VirtCPUTopologyPayload.__init__` | method | (self, virt_cpu_topology) | public | not declared | 1/3 | `src/nova/notifications/objects/request_spec.py:L214–L216` |
| `InstancePCIRequestsPayload` | class | — | exported | not declared | — | `src/nova/notifications/objects/request_spec.py:L220–L237` |
| `InstancePCIRequestsPayload.VERSION` | constant | — | public | not declared | — | `src/nova/notifications/objects/request_spec.py:L222–L222` |
| `InstancePCIRequestsPayload.SCHEMA` | constant | — | public | not declared | — | `src/nova/notifications/objects/request_spec.py:L224–L226` |
| `InstancePCIRequestsPayload.fields` | field | — | public | not declared | — | `src/nova/notifications/objects/request_spec.py:L228–L231` |
| `InstancePCIRequestsPayload.__init__` | method | (self, pci_requests) | public | not declared | 1/5 | `src/nova/notifications/objects/request_spec.py:L233–L237` |
| `InstancePCIRequestPayload` | class | — | exported | not declared | — | `src/nova/notifications/objects/request_spec.py:L241–L274` |
| `InstancePCIRequestPayload.VERSION` | constant | — | public | not declared | — | `src/nova/notifications/objects/request_spec.py:L244–L244` |
| `InstancePCIRequestPayload.SCHEMA` | constant | — | public | not declared | — | `src/nova/notifications/objects/request_spec.py:L246–L252` |
| `InstancePCIRequestPayload.fields` | field | — | public | not declared | — | `src/nova/notifications/objects/request_spec.py:L254–L260` |
| `InstancePCIRequestPayload.__init__` | method | (self, pci_request) | public | not declared | 1/3 | `src/nova/notifications/objects/request_spec.py:L262–L264` |
| `InstancePCIRequestPayload.from_pci_request_list_obj` | method | (cls, pci_request_list) | public | `payloads` (src/nova/notifications/objects/request_spec.py:L274) | 2/5 | `src/nova/notifications/objects/request_spec.py:L267–L274` |
| `DestinationPayload` | class | — | exported | not declared | — | `src/nova/notifications/objects/request_spec.py:L278–L305` |
| `DestinationPayload.VERSION` | constant | — | public | not declared | — | `src/nova/notifications/objects/request_spec.py:L280–L280` |
| `DestinationPayload.SCHEMA` | constant | — | public | not declared | — | `src/nova/notifications/objects/request_spec.py:L282–L284` |
| `DestinationPayload.fields` | field | — | public | not declared | — | `src/nova/notifications/objects/request_spec.py:L286–L292` |
| `DestinationPayload.__init__` | method | (self, destination) | public | not declared | 7/12 | `src/nova/notifications/objects/request_spec.py:L294–L305` |
| `SchedulerRetriesPayload` | class | — | exported | not declared | — | `src/nova/notifications/objects/request_spec.py:L309–L327` |
| `SchedulerRetriesPayload.VERSION` | constant | — | public | not declared | — | `src/nova/notifications/objects/request_spec.py:L311–L311` |
| `SchedulerRetriesPayload.SCHEMA` | constant | — | public | not declared | — | `src/nova/notifications/objects/request_spec.py:L313–L315` |
| `SchedulerRetriesPayload.fields` | field | — | public | not declared | — | `src/nova/notifications/objects/request_spec.py:L317–L320` |
| `SchedulerRetriesPayload.__init__` | method | (self, retry) | public | not declared | 2/6 | `src/nova/notifications/objects/request_spec.py:L322–L327` |
| `CellMappingPayload` | class | — | exported | not declared | — | `src/nova/notifications/objects/request_spec.py:L331–L350` |
| `CellMappingPayload.VERSION` | constant | — | public | not declared | — | `src/nova/notifications/objects/request_spec.py:L334–L334` |
| `CellMappingPayload.SCHEMA` | constant | — | public | not declared | — | `src/nova/notifications/objects/request_spec.py:L336–L340` |
| `CellMappingPayload.fields` | field | — | public | not declared | — | `src/nova/notifications/objects/request_spec.py:L342–L346` |
| `CellMappingPayload.__init__` | method | (self, cell) | public | not declared | 1/3 | `src/nova/notifications/objects/request_spec.py:L348–L350` |
| `InstanceNUMACellPayload.from_numa_cell_list_obj` | classmethod | — | public | not declared | — | `src/nova/notifications/objects/request_spec.py:L186–L194` |
| `InstancePCIRequestPayload.from_pci_request_list_obj` | classmethod | — | public | not declared | — | `src/nova/notifications/objects/request_spec.py:L266–L274` |

## Dependencies

- `nova.notifications.objects`: imports `base` (src/nova/notifications/objects/request_spec.py:L15)
- `nova.notifications.objects`: imports `flavor as flavor_payload` (src/nova/notifications/objects/request_spec.py:L16)
- `nova.notifications.objects`: imports `image as image_payload` (src/nova/notifications/objects/request_spec.py:L17)
- `nova.notifications.objects`: imports `server_group as server_group_payload` (src/nova/notifications/objects/request_spec.py:L18)
- `nova.objects`: imports `base as nova_base` (src/nova/notifications/objects/request_spec.py:L19)
- `nova.objects`: imports `fields` (src/nova/notifications/objects/request_spec.py:L20)

## Side Effects

- **global-mutation**: VERSION = '1.1' (src/nova/notifications/objects/request_spec.py:L29)
- **global-mutation**: SCHEMA = { (src/nova/notifications/objects/request_spec.py:L31)
- **global-mutation**: VERSION = '1.0' (src/nova/notifications/objects/request_spec.py:L121)
- **global-mutation**: SCHEMA = { (src/nova/notifications/objects/request_spec.py:L123)
- **global-mutation**: VERSION = '1.2' (src/nova/notifications/objects/request_spec.py:L148)
- **global-mutation**: SCHEMA = { (src/nova/notifications/objects/request_spec.py:L150)
- **global-mutation**: VERSION = '1.0' (src/nova/notifications/objects/request_spec.py:L200)
- **global-mutation**: SCHEMA = { (src/nova/notifications/objects/request_spec.py:L202)
- **global-mutation**: VERSION = '1.0' (src/nova/notifications/objects/request_spec.py:L222)
- **global-mutation**: SCHEMA = { (src/nova/notifications/objects/request_spec.py:L224)
- **global-mutation**: VERSION = '1.1' (src/nova/notifications/objects/request_spec.py:L244)
- **global-mutation**: SCHEMA = { (src/nova/notifications/objects/request_spec.py:L246)
- **global-mutation**: VERSION = '1.0' (src/nova/notifications/objects/request_spec.py:L280)
- **global-mutation**: SCHEMA = { (src/nova/notifications/objects/request_spec.py:L282)
- **global-mutation**: VERSION = '1.0' (src/nova/notifications/objects/request_spec.py:L311)
- **global-mutation**: SCHEMA = { (src/nova/notifications/objects/request_spec.py:L313)
- **global-mutation**: VERSION = '2.0' (src/nova/notifications/objects/request_spec.py:L334)
- **global-mutation**: SCHEMA = { (src/nova/notifications/objects/request_spec.py:L336)

