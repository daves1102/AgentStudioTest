# src/nova/tests/functional/libvirt/test_reshape.py

## Overview

This file implements the `test_reshape` module, defining 2 classs, 2 constants, 5 methods, 12 imports, 2 side effects.

Lines: total 448, code 317, comment 78, blank 53

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_reshape.py:L30–L30` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_reshape.py:L31–L31` |
| `VGPUReshapeTests` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_reshape.py:L34–L241` |
| `VGPUReshapeTests.test_create_servers_with_vgpu` | method | (self) | public | not declared | 8/140 | `src/nova/tests/functional/libvirt/test_reshape.py:L36–L241` |
| `SevResphapeTests` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_reshape.py:L244–L448` |
| `SevResphapeTests.setUp` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/libvirt/test_reshape.py:L246–L254` |
| `SevResphapeTests._delete_server` | method | (self, server) | private | not declared | 1/4 | `src/nova/tests/functional/libvirt/test_reshape.py:L256–L259` |
| `SevResphapeTests.test_create_servers_with_amd_sev` | method | (self, mock_configure_me) | public | not declared | 1/50 | `src/nova/tests/functional/libvirt/test_reshape.py:L267–L345` |
| `SevResphapeTests.test_create_servers_with_amd_sev_mixed` | method | (self, mock_configure_me) | public | not declared | 3/66 | `src/nova/tests/functional/libvirt/test_reshape.py:L353–L448` |

## Dependencies

- `import copy` (src/nova/tests/functional/libvirt/test_reshape.py:L14)
- `import io` (src/nova/tests/functional/libvirt/test_reshape.py:L15)
- `unittest`: imports `mock` (src/nova/tests/functional/libvirt/test_reshape.py:L16)
- `import os_traits` (src/nova/tests/functional/libvirt/test_reshape.py:L18)
- `oslo_config`: imports `cfg` (src/nova/tests/functional/libvirt/test_reshape.py:L19)
- `oslo_log`: imports `log as logging` (src/nova/tests/functional/libvirt/test_reshape.py:L20)
- `oslo_utils.fixture`: imports `uuidsentinel` (src/nova/tests/functional/libvirt/test_reshape.py:L21)
- `nova`: imports `context` (src/nova/tests/functional/libvirt/test_reshape.py:L23)
- `nova`: imports `objects` (src/nova/tests/functional/libvirt/test_reshape.py:L24)
- `nova.tests.fixtures`: imports `libvirt as fakelibvirt` (src/nova/tests/functional/libvirt/test_reshape.py:L25)
- `nova.tests.functional.libvirt`: imports `base` (src/nova/tests/functional/libvirt/test_reshape.py:L26)
- `nova.virt.libvirt`: imports `utils` (src/nova/tests/functional/libvirt/test_reshape.py:L27)

## Side Effects

- **global-mutation**: CONF = cfg.CONF (src/nova/tests/functional/libvirt/test_reshape.py:L30)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/tests/functional/libvirt/test_reshape.py:L31)

