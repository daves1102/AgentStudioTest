# src/nova/tests/functional/notification_sample_tests/test_libvirt.py

## Overview

This file implements the `test_libvirt` module, defining 1 class, 1 constant, 2 methods, 8 imports, 1 side effect.

Lines: total 57, code 33, comment 14, blank 10

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/functional/notification_sample_tests/test_libvirt.py:L28–L28` |
| `TestLibvirtErrorNotificationSample` | class | — | exported | not declared | — | `src/nova/tests/functional/notification_sample_tests/test_libvirt.py:L31–L57` |
| `TestLibvirtErrorNotificationSample.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/notification_sample_tests/test_libvirt.py:L34–L38` |
| `TestLibvirtErrorNotificationSample.test_libvirt_connect_error` | method | (self, mock_get_conn) | public | not declared | 1/15 | `src/nova/tests/functional/notification_sample_tests/test_libvirt.py:L41–L57` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/functional/notification_sample_tests/test_libvirt.py:L15)
- `import fixtures` (src/nova/tests/functional/notification_sample_tests/test_libvirt.py:L17)
- `import nova.conf` (src/nova/tests/functional/notification_sample_tests/test_libvirt.py:L19)
- `nova`: imports `exception` (src/nova/tests/functional/notification_sample_tests/test_libvirt.py:L20)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/functional/notification_sample_tests/test_libvirt.py:L21)
- `nova.tests.fixtures`: imports `libvirt as fakelibvirt` (src/nova/tests/functional/notification_sample_tests/test_libvirt.py:L22)
- `nova.tests.functional.notification_sample_tests`: imports `notification_sample_base` (src/nova/tests/functional/notification_sample_tests/test_libvirt.py:L23–L24)
- `nova.virt.libvirt`: imports `host` (src/nova/tests/functional/notification_sample_tests/test_libvirt.py:L25)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/tests/functional/notification_sample_tests/test_libvirt.py:L28)

