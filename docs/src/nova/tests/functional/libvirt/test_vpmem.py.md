# src/nova/tests/functional/libvirt/test_vpmem.py

## Overview

This file implements the `test_vpmem` module, defining 3 classs, 2 constants, 14 methods, 9 imports, 4 side effects, 2 security surface entries.

Lines: total 284, code 215, comment 27, blank 42

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_vpmem.py:L27–L27` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_vpmem.py:L28–L28` |
| `VPMEMTestBase` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_vpmem.py:L31–L141` |
| `VPMEMTestBase.setUp` | method | (self) | public | not declared | 1/50 | `src/nova/tests/functional/libvirt/test_vpmem.py:L33–L84` |
| `VPMEMTestBase._get_connection` | method | (self, host_info, hostname=None) | private | `fake_connection` (src/nova/tests/functional/libvirt/test_vpmem.py:L91) | 1/6 | `src/nova/tests/functional/libvirt/test_vpmem.py:L86–L91` |
| `VPMEMTestBase._start_compute_service` | method | (self, hostname) | private | `compute` (src/nova/tests/functional/libvirt/test_vpmem.py:L124) | 1/26 | `src/nova/tests/functional/libvirt/test_vpmem.py:L93–L124` |
| `VPMEMTestBase._create_server` | method | (self, flavor_id, hostname, expected_state) | private | `super(VPMEMTestBase, self)._create_server( image_uuid='155d900f-4e14-4e4c-a73d-069cbf4541e6', flavor_id=flavor_id, networks='none', az='nova:%s' % hostname, expected_state=expected_state)` (src/nova/tests/functional/libvirt/test_vpmem.py:L127) | 1/7 | `src/nova/tests/functional/libvirt/test_vpmem.py:L126–L132` |
| `VPMEMTestBase._delete_server` | method | (self, server) | private | not declared | 1/2 | `src/nova/tests/functional/libvirt/test_vpmem.py:L134–L135` |
| `VPMEMTestBase._check_vpmem_allocations` | method | (self, vpmem_allocs, server_id, cn_uuid) | private | not declared | 2/5 | `src/nova/tests/functional/libvirt/test_vpmem.py:L137–L141` |
| `VPMEMTests` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_vpmem.py:L144–L177` |
| `VPMEMTests.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/libvirt/test_vpmem.py:L146–L149` |
| `VPMEMTests.test_create_servers_with_vpmem` | method | (self) | public | not declared | 1/19 | `src/nova/tests/functional/libvirt/test_vpmem.py:L151–L177` |
| `VPMEMResizeTests` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_vpmem.py:L180–L284` |
| `VPMEMResizeTests.setUp` | method | (self) | public | not declared | 1/10 | `src/nova/tests/functional/libvirt/test_vpmem.py:L182–L193` |
| `VPMEMResizeTests._resize_server` | method | (self, server, flavor) | private | not declared | 1/8 | `src/nova/tests/functional/libvirt/test_vpmem.py:L195–L202` |
| `VPMEMResizeTests._confirm_resize` | method | (self, server) | private | not declared | 1/4 | `src/nova/tests/functional/libvirt/test_vpmem.py:L204–L207` |
| `VPMEMResizeTests._revert_resize` | method | (self, server) | private | not declared | 1/4 | `src/nova/tests/functional/libvirt/test_vpmem.py:L209–L212` |
| `VPMEMResizeTests.test_resize` | method | (self) | public | not declared | 1/29 | `src/nova/tests/functional/libvirt/test_vpmem.py:L214–L249` |
| `VPMEMResizeTests.test_resize_same_host` | method | (self) | public | not declared | 1/27 | `src/nova/tests/functional/libvirt/test_vpmem.py:L251–L284` |

## Dependencies

- `import fixtures` (src/nova/tests/functional/libvirt/test_vpmem.py:L14)
- `unittest`: imports `mock` (src/nova/tests/functional/libvirt/test_vpmem.py:L15)
- `oslo_config`: imports `cfg` (src/nova/tests/functional/libvirt/test_vpmem.py:L17)
- `oslo_log`: imports `log as logging` (src/nova/tests/functional/libvirt/test_vpmem.py:L18)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/functional/libvirt/test_vpmem.py:L19)
- `nova`: imports `objects` (src/nova/tests/functional/libvirt/test_vpmem.py:L21)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/functional/libvirt/test_vpmem.py:L22)
- `nova.tests.fixtures`: imports `libvirt as fakelibvirt` (src/nova/tests/functional/libvirt/test_vpmem.py:L23)
- `nova.tests.functional.libvirt`: imports `integrated_helpers` (src/nova/tests/functional/libvirt/test_vpmem.py:L24)

## Side Effects

- **process-spawn**: 'nova.privsep.libvirt.cleanup_vpmem')) (src/nova/tests/functional/libvirt/test_vpmem.py:L72)
- **process-spawn**: 'nova.privsep.libvirt.get_pmem_namespaces', (src/nova/tests/functional/libvirt/test_vpmem.py:L74)
- **global-mutation**: CONF = cfg.CONF (src/nova/tests/functional/libvirt/test_vpmem.py:L27)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/tests/functional/libvirt/test_vpmem.py:L28)

## Security Surface

- **privilege** (`privsep-entrypoint`): 'nova.privsep.libvirt.cleanup_vpmem')) (src/nova/tests/functional/libvirt/test_vpmem.py:L72)
- **privilege** (`privsep-entrypoint`): 'nova.privsep.libvirt.get_pmem_namespaces', (src/nova/tests/functional/libvirt/test_vpmem.py:L74)

