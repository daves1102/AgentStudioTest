# src/nova/tests/functional/libvirt/test_rescue_deleted_base.py

## Overview

This file implements the `test_rescue_deleted_base` module, defining 1 class, 2 constants, 1 field, 1 function, 4 methods, 8 imports, 2 side effects.

Lines: total 180, code 118, comment 38, blank 24

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_rescue_deleted_base.py:L26–L26` |
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_rescue_deleted_base.py:L27–L27` |
| `RescueServerTestWithDeletedBaseImage` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_rescue_deleted_base.py:L30–L180` |
| `RescueServerTestWithDeletedBaseImage.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_rescue_deleted_base.py:L31–L31` |
| `RescueServerTestWithDeletedBaseImage.setUp` | method | (self) | public | not declared | 1/10 | `src/nova/tests/functional/libvirt/test_rescue_deleted_base.py:L36–L53` |
| `RescueServerTestWithDeletedBaseImage.setUp.fake_path` | function | (_self, *args, **kwargs) | public | `CONF.instances_path` (src/nova/tests/functional/libvirt/test_rescue_deleted_base.py:L50) | — | `src/nova/tests/functional/libvirt/test_rescue_deleted_base.py:L49–L50` |
| `RescueServerTestWithDeletedBaseImage._create_test_images` | method | (self) | private | `base_image, rescue_stable_image` (src/nova/tests/functional/libvirt/test_rescue_deleted_base.py:L102) | 1/48 | `src/nova/tests/functional/libvirt/test_rescue_deleted_base.py:L55–L102` |
| `RescueServerTestWithDeletedBaseImage.test_stable_rescue_server_local_disk` | method | (self) | public | not declared | 1/16 | `src/nova/tests/functional/libvirt/test_rescue_deleted_base.py:L104–L137` |
| `RescueServerTestWithDeletedBaseImage.test_stable_rescue_server_bfv` | method | (self) | public | not declared | 4/31 | `src/nova/tests/functional/libvirt/test_rescue_deleted_base.py:L139–L180` |

## Dependencies

- `import datetime` (src/nova/tests/functional/libvirt/test_rescue_deleted_base.py:L15)
- `import fixtures` (src/nova/tests/functional/libvirt/test_rescue_deleted_base.py:L17)
- `oslo_log`: imports `log as logging` (src/nova/tests/functional/libvirt/test_rescue_deleted_base.py:L18)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/functional/libvirt/test_rescue_deleted_base.py:L19)
- `nova`: imports `conf` (src/nova/tests/functional/libvirt/test_rescue_deleted_base.py:L21)
- `nova`: imports `context as nova_context` (src/nova/tests/functional/libvirt/test_rescue_deleted_base.py:L22)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/functional/libvirt/test_rescue_deleted_base.py:L23)
- `nova.tests.functional.libvirt`: imports `base` (src/nova/tests/functional/libvirt/test_rescue_deleted_base.py:L24)

## Side Effects

- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/tests/functional/libvirt/test_rescue_deleted_base.py:L26)
- **global-mutation**: CONF = conf.CONF (src/nova/tests/functional/libvirt/test_rescue_deleted_base.py:L27)

