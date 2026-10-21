# src/nova/tests/fixtures/os_brick.py

## Overview

This file implements the `os_brick` module, defining 2 classs, 1 function, 3 methods, 3 imports.

Lines: total 77, code 51, comment 11, blank 15

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `get_connector_properties` | function | (root_helper, my_ip, multipath, enforce_multipath, host=None, execute=None) | exported | `props` (src/nova/tests/fixtures/os_brick.py:L35) | 1/14 | `src/nova/tests/fixtures/os_brick.py:L20–L35` |
| `ISCSIConnector` | class | — | exported | not declared | — | `src/nova/tests/fixtures/os_brick.py:L38–L49` |
| `ISCSIConnector.__init__` | method | (self, root_helper, driver=None, execute=None, use_multipath=False, device_scan_attempts=3, *args, **kwargs) | public | not declared | 1/6 | `src/nova/tests/fixtures/os_brick.py:L41–L46` |
| `ISCSIConnector.get_initiator` | method | (self) | public | `"fake_iscsi.iqn"` (src/nova/tests/fixtures/os_brick.py:L49) | 1/2 | `src/nova/tests/fixtures/os_brick.py:L48–L49` |
| `OSBrickFixture` | class | — | exported | not declared | — | `src/nova/tests/fixtures/os_brick.py:L52–L77` |
| `OSBrickFixture.setUp` | method | (self) | public | not declared | 2/22 | `src/nova/tests/fixtures/os_brick.py:L54–L77` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/fixtures/os_brick.py:L13)
- `import fixtures` (src/nova/tests/fixtures/os_brick.py:L15)
- `os_brick.initiator`: imports `connector as brick_connector` (src/nova/tests/fixtures/os_brick.py:L17)

