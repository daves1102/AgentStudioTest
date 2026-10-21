# src/nova/tests/functional/libvirt/base.py

## Overview

This file implements the `base` module, defining 3 classs, 2 constants, 18 fields, 1 function, 10 methods, 9 imports, 3 side effects, 9 security surface entries.

Lines: total 552, code 437, comment 57, blank 58

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/functional/libvirt/base.py:L29–L29` |
| `ServersTestBase` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/base.py:L32–L261` |
| `ServersTestBase.ADDITIONAL_FILTERS` | constant | — | public | not declared | — | `src/nova/tests/functional/libvirt/base.py:L35–L35` |
| `ServersTestBase.setUp` | method | (self) | public | not declared | 1/30 | `src/nova/tests/functional/libvirt/base.py:L37–L73` |
| `ServersTestBase._setup_compute_service` | method | (self) | private | not declared | 1/2 | `src/nova/tests/functional/libvirt/base.py:L75–L79` |
| `ServersTestBase._setup_scheduler_service` | method | (self) | private | `self.start_service('scheduler')` (src/nova/tests/functional/libvirt/base.py:L87) | 1/5 | `src/nova/tests/functional/libvirt/base.py:L81–L87` |
| `ServersTestBase._get_connection` | method | (self, host_info=None, pci_info=None, mdev_info=None, vdpa_info=None, libvirt_version=None, qemu_version=None, hostname=None) | private | `fake_connection` (src/nova/tests/functional/libvirt/base.py:L114) | 4/22 | `src/nova/tests/functional/libvirt/base.py:L89–L114` |
| `ServersTestBase.start_compute` | method | (self, hostname='compute1', host_info=None, pci_info=None, mdev_info=None, vdpa_info=None, libvirt_version=None, qemu_version=None, cell_name=None, connection=None) | public | `hostname` (src/nova/tests/functional/libvirt/base.py:L193) | 8/28 | `src/nova/tests/functional/libvirt/base.py:L116–L193` |
| `ServersTestBase.start_compute._start_compute` | function | (hostname, host_info) | private | `compute` (src/nova/tests/functional/libvirt/base.py:L176) | — | `src/nova/tests/functional/libvirt/base.py:L149–L176` |
| `ServersTestBase.restart_compute_service` | method | (self, hostname, host_info=None, pci_info=None, mdev_info=None, vdpa_info=None, libvirt_version=None, qemu_version=None, keep_hypervisor_state=True) | public | `self.computes[hostname]` (src/nova/tests/functional/libvirt/base.py:L261) | 9/34 | `src/nova/tests/functional/libvirt/base.py:L195–L261` |
| `LibvirtMigrationMixin` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/base.py:L264–L287` |
| `LibvirtMigrationMixin.setUp` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/libvirt/base.py:L273–L278` |
| `LibvirtMigrationMixin._migrate_stub` | method | (self, domain, destination, params, flags) | private | not declared | 1/8 | `src/nova/tests/functional/libvirt/base.py:L280–L287` |
| `LibvirtNeutronFixture` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/base.py:L290–L552` |
| `LibvirtNeutronFixture.network_1` | field | — | public | not declared | — | `src/nova/tests/functional/libvirt/base.py:L296–L306` |
| `LibvirtNeutronFixture.network_2` | field | — | public | not declared | — | `src/nova/tests/functional/libvirt/base.py:L307–L307` |
| `LibvirtNeutronFixture.network_3` | field | — | public | not declared | — | `src/nova/tests/functional/libvirt/base.py:L315–L315` |
| `LibvirtNeutronFixture.network_4` | field | — | public | not declared | — | `src/nova/tests/functional/libvirt/base.py:L323–L323` |
| `LibvirtNeutronFixture.subnet_1` | field | — | public | not declared | — | `src/nova/tests/functional/libvirt/base.py:L333–L333` |
| `LibvirtNeutronFixture.subnet_2` | field | — | public | not declared | — | `src/nova/tests/functional/libvirt/base.py:L337–L337` |
| `LibvirtNeutronFixture.subnet_3` | field | — | public | not declared | — | `src/nova/tests/functional/libvirt/base.py:L343–L343` |
| `LibvirtNeutronFixture.subnet_4` | field | — | public | not declared | — | `src/nova/tests/functional/libvirt/base.py:L349–L349` |
| `LibvirtNeutronFixture.network_1_port_2` | field | — | public | not declared | — | `src/nova/tests/functional/libvirt/base.py:L360–L374` |
| `LibvirtNeutronFixture.network_1_port_3` | field | — | public | not declared | — | `src/nova/tests/functional/libvirt/base.py:L375–L389` |
| `LibvirtNeutronFixture.network_2_port_1` | field | — | public | not declared | — | `src/nova/tests/functional/libvirt/base.py:L390–L404` |
| `LibvirtNeutronFixture.network_3_port_1` | field | — | public | not declared | — | `src/nova/tests/functional/libvirt/base.py:L405–L419` |
| `LibvirtNeutronFixture.network_3_port_2` | field | — | public | not declared | — | `src/nova/tests/functional/libvirt/base.py:L420–L434` |
| `LibvirtNeutronFixture.network_4_port_1` | field | — | public | not declared | — | `src/nova/tests/functional/libvirt/base.py:L435–L449` |
| `LibvirtNeutronFixture.network_4_port_2` | field | — | public | not declared | — | `src/nova/tests/functional/libvirt/base.py:L450–L464` |
| `LibvirtNeutronFixture.network_4_port_3` | field | — | public | not declared | — | `src/nova/tests/functional/libvirt/base.py:L465–L479` |
| `LibvirtNeutronFixture.network_4_port_4` | field | — | public | not declared | — | `src/nova/tests/functional/libvirt/base.py:L480–L494` |
| `LibvirtNeutronFixture.network_4_port_pf` | field | — | public | not declared | — | `src/nova/tests/functional/libvirt/base.py:L496–L510` |
| `LibvirtNeutronFixture.__init__` | method | (self, test) | public | not declared | 1/9 | `src/nova/tests/functional/libvirt/base.py:L512–L520` |
| `LibvirtNeutronFixture.create_port` | method | (self, body=None) | public | `{'port': copy.deepcopy(port)}` (src/nova/tests/functional/libvirt/base.py:L552) | 6/19 | `src/nova/tests/functional/libvirt/base.py:L522–L552` |

## Dependencies

- `import copy` (src/nova/tests/functional/libvirt/base.py:L16)
- `import io` (src/nova/tests/functional/libvirt/base.py:L17)
- `unittest`: imports `mock` (src/nova/tests/functional/libvirt/base.py:L18)
- `import fixtures` (src/nova/tests/functional/libvirt/base.py:L20)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/functional/libvirt/base.py:L21)
- `nova`: imports `conf` (src/nova/tests/functional/libvirt/base.py:L23)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/functional/libvirt/base.py:L24)
- `nova.tests.fixtures`: imports `libvirt as fakelibvirt` (src/nova/tests/functional/libvirt/base.py:L25)
- `nova.tests.functional`: imports `integrated_helpers` (src/nova/tests/functional/libvirt/base.py:L26)

## Side Effects

- **process-spawn**: 'nova.privsep.utils.supports_direct_io', (src/nova/tests/functional/libvirt/base.py:L63)
- **global-mutation**: CONF = conf.CONF (src/nova/tests/functional/libvirt/base.py:L29)
- **global-mutation**: ADDITIONAL_FILTERS = [] (src/nova/tests/functional/libvirt/base.py:L35)

## Security Surface

- **privilege** (`privsep-entrypoint`): 'nova.privsep.utils.supports_direct_io', (src/nova/tests/functional/libvirt/base.py:L63)
- **sink** (`db-write`): network_2.update({ (src/nova/tests/functional/libvirt/base.py:L308)
- **sink** (`db-write`): network_3.update({ (src/nova/tests/functional/libvirt/base.py:L316)
- **sink** (`db-write`): network_4.update({ (src/nova/tests/functional/libvirt/base.py:L324)
- **sink** (`db-write`): subnet_1.update({ (src/nova/tests/functional/libvirt/base.py:L334)
- **sink** (`db-write`): subnet_2.update({ (src/nova/tests/functional/libvirt/base.py:L338)
- **sink** (`db-write`): subnet_3.update({ (src/nova/tests/functional/libvirt/base.py:L344)
- **sink** (`db-write`): subnet_4.update({ (src/nova/tests/functional/libvirt/base.py:L350)
- **sink** (`db-write`): port.update(body['port']) (src/nova/tests/functional/libvirt/base.py:L539)

