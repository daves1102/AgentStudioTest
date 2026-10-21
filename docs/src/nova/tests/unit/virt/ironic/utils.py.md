# src/nova/tests/unit/virt/ironic/utils.py

## Overview

This file implements the `utils` module, defining 11 constants, 10 functions, 9 imports, 16 side effects, 1 security surface entry.

Lines: total 256, code 198, comment 22, blank 36

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `TEST_IMAGE_UUID` | constant | — | exported | not declared | — | `src/nova/tests/unit/virt/ironic/utils.py:L30–L30` |
| `TEST_IMAGE_NAME` | constant | — | exported | not declared | — | `src/nova/tests/unit/virt/ironic/utils.py:L31–L31` |
| `TEST_FLAVOR_ID` | constant | — | exported | not declared | — | `src/nova/tests/unit/virt/ironic/utils.py:L32–L32` |
| `TEST_FLAVOR_NAME` | constant | — | exported | not declared | — | `src/nova/tests/unit/virt/ironic/utils.py:L33–L33` |
| `TEST_FLAVOR_FLAVORID` | constant | — | exported | not declared | — | `src/nova/tests/unit/virt/ironic/utils.py:L34–L34` |
| `TEST_FLAVOR_EXTRA_SPECS` | constant | — | exported | not declared | — | `src/nova/tests/unit/virt/ironic/utils.py:L35–L37` |
| `TEST_FLAVOR_SWAP` | constant | — | exported | not declared | — | `src/nova/tests/unit/virt/ironic/utils.py:L38–L38` |
| `TEST_FLAVOR_ROOTGB` | constant | — | exported | not declared | — | `src/nova/tests/unit/virt/ironic/utils.py:L39–L39` |
| `TEST_FLAVOR_MEMORYMB` | constant | — | exported | not declared | — | `src/nova/tests/unit/virt/ironic/utils.py:L40–L40` |
| `TEST_FLAVOR_VCPUS` | constant | — | exported | not declared | — | `src/nova/tests/unit/virt/ironic/utils.py:L41–L41` |
| `TEST_FLAVOR_EPHEMERALGB` | constant | — | exported | not declared | — | `src/nova/tests/unit/virt/ironic/utils.py:L42–L42` |
| `get_test_validation` | function | (**kw) | exported | `result` (src/nova/tests/unit/virt/ironic/utils.py:L54) | 1/10 | `src/nova/tests/unit/virt/ironic/utils.py:L45–L54` |
| `get_test_node` | function | (fields=None, **kw) | exported | `_node.Node(**node)` (src/nova/tests/unit/virt/ironic/utils.py:L91) | 7/31 | `src/nova/tests/unit/virt/ironic/utils.py:L57–L91` |
| `get_test_port` | function | (**kw) | exported | `_port.Port(**port)` (src/nova/tests/unit/virt/ironic/utils.py:L110) | 4/14 | `src/nova/tests/unit/virt/ironic/utils.py:L94–L110` |
| `get_test_portgroup` | function | (**kw) | exported | `_port_group.PortGroup(**port_group)` (src/nova/tests/unit/virt/ironic/utils.py:L134) | 3/19 | `src/nova/tests/unit/virt/ironic/utils.py:L113–L134` |
| `get_test_vif` | function | (**kw) | exported | `{ 'profile': kw.get('profile', {}), 'ovs_interfaceid': kw.get('ovs_interfaceid'), 'preserve_on_delete': kw.get('preserve_on_delete', False), 'network': kw.get('network', {}), 'devname': kw.get('devnam` (src/nova/tests/unit/virt/ironic/utils.py:L138) | 1/17 | `src/nova/tests/unit/virt/ironic/utils.py:L137–L153` |
| `get_test_volume_connector` | function | (**kw) | exported | `_volume_connector.VolumeConnector(**volume_connector)` (src/nova/tests/unit/virt/ironic/utils.py:L171) | 3/13 | `src/nova/tests/unit/virt/ironic/utils.py:L156–L171` |
| `get_test_volume_target` | function | (**kw) | exported | `_volume_target.VolumeTarget(**volume_target)` (src/nova/tests/unit/virt/ironic/utils.py:L193) | 3/17 | `src/nova/tests/unit/virt/ironic/utils.py:L174–L193` |
| `get_test_flavor` | function | (**kw) | exported | `objects.Flavor(**flavor)` (src/nova/tests/unit/virt/ironic/utils.py:L208) | 1/12 | `src/nova/tests/unit/virt/ironic/utils.py:L196–L208` |
| `get_test_image_meta` | function | (**kw) | exported | `objects.ImageMeta.from_dict( {'id': kw.get('id', TEST_IMAGE_UUID)}, )` (src/nova/tests/unit/virt/ironic/utils.py:L212) | 1/4 | `src/nova/tests/unit/virt/ironic/utils.py:L211–L214` |
| `get_test_instance_driver_metadata` | function | (**kw) | exported | `driver.InstanceDriverMetadata( root_type=kw.get('root_type', 'roottype'), root_id=kw.get('root_id', 'rootid'), instance_meta=kw.get('instance_meta', default_instance_meta), owner=kw.get('owner_meta', ` (src/nova/tests/unit/virt/ironic/utils.py:L248) | 1/39 | `src/nova/tests/unit/virt/ironic/utils.py:L217–L256` |

## Dependencies

- `openstack.baremetal.v1`: imports `node as _node` (src/nova/tests/unit/virt/ironic/utils.py:L16)
- `openstack.baremetal.v1`: imports `port as _port` (src/nova/tests/unit/virt/ironic/utils.py:L17)
- `openstack.baremetal.v1`: imports `port_group as _port_group` (src/nova/tests/unit/virt/ironic/utils.py:L18)
- `openstack.baremetal.v1`: imports `volume_connector as _volume_connector` (src/nova/tests/unit/virt/ironic/utils.py:L19)
- `openstack.baremetal.v1`: imports `volume_target as _volume_target` (src/nova/tests/unit/virt/ironic/utils.py:L20)
- `nova.network`: imports `model as network_model` (src/nova/tests/unit/virt/ironic/utils.py:L22)
- `nova`: imports `objects` (src/nova/tests/unit/virt/ironic/utils.py:L23)
- `nova.virt`: imports `driver` (src/nova/tests/unit/virt/ironic/utils.py:L24)
- `nova.virt.ironic`: imports `ironic_states` (src/nova/tests/unit/virt/ironic/utils.py:L25)

## Side Effects

- **network**: from openstack.baremetal.v1 import node as _node (src/nova/tests/unit/virt/ironic/utils.py:L16)
- **network**: from openstack.baremetal.v1 import port as _port (src/nova/tests/unit/virt/ironic/utils.py:L17)
- **network**: from openstack.baremetal.v1 import port_group as _port_group (src/nova/tests/unit/virt/ironic/utils.py:L18)
- **network**: from openstack.baremetal.v1 import volume_connector as _volume_connector (src/nova/tests/unit/virt/ironic/utils.py:L19)
- **network**: from openstack.baremetal.v1 import volume_target as _volume_target (src/nova/tests/unit/virt/ironic/utils.py:L20)
- **global-mutation**: TEST_IMAGE_UUID = "cccccccc-cccc-cccc-cccc-cccccccccccc" (src/nova/tests/unit/virt/ironic/utils.py:L30)
- **global-mutation**: TEST_IMAGE_NAME = "test-image" (src/nova/tests/unit/virt/ironic/utils.py:L31)
- **global-mutation**: TEST_FLAVOR_ID = 1 (src/nova/tests/unit/virt/ironic/utils.py:L32)
- **global-mutation**: TEST_FLAVOR_NAME = "fake.flavor" (src/nova/tests/unit/virt/ironic/utils.py:L33)
- **global-mutation**: TEST_FLAVOR_FLAVORID = "iiiiiiii-iiii-iiii-iiii-iiiiiiiiiiii" (src/nova/tests/unit/virt/ironic/utils.py:L34)
- **global-mutation**: TEST_FLAVOR_EXTRA_SPECS = { (src/nova/tests/unit/virt/ironic/utils.py:L35)
- **global-mutation**: TEST_FLAVOR_SWAP = 1 (src/nova/tests/unit/virt/ironic/utils.py:L38)
- **global-mutation**: TEST_FLAVOR_ROOTGB = 1 (src/nova/tests/unit/virt/ironic/utils.py:L39)
- **global-mutation**: TEST_FLAVOR_MEMORYMB = 1 (src/nova/tests/unit/virt/ironic/utils.py:L40)
- **global-mutation**: TEST_FLAVOR_VCPUS = 1 (src/nova/tests/unit/virt/ironic/utils.py:L41)
- **global-mutation**: TEST_FLAVOR_EPHEMERALGB = 0 (src/nova/tests/unit/virt/ironic/utils.py:L42)

## Security Surface

- **sink** (`db-write`): result.update(kw) (src/nova/tests/unit/virt/ironic/utils.py:L53)

