# src/nova/tests/unit/console/test_serial.py

## Overview

This file implements the `test_serial` module, defining 1 class, 1 function, 10 methods, 5 imports.

Lines: total 123, code 83, comment 13, blank 27

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `SerialTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/console/test_serial.py:L25–L123` |
| `SerialTestCase.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/console/test_serial.py:L26–L28` |
| `SerialTestCase.test_get_port_range` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/console/test_serial.py:L30–L33` |
| `SerialTestCase.test_get_port_range_customized` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/console/test_serial.py:L35–L39` |
| `SerialTestCase.test_get_port_range_bad_range` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/console/test_serial.py:L41–L45` |
| `SerialTestCase.test_verify_port` | method | (self, fake_socket) | public | not declared | 1/5 | `src/nova/tests/unit/console/test_serial.py:L48–L54` |
| `SerialTestCase.test_verify_port_in_use` | method | (self, fake_socket) | public | not declared | 1/8 | `src/nova/tests/unit/console/test_serial.py:L57–L66` |
| `SerialTestCase.test_acquire_port` | method | (self) | public | not declared | 3/10 | `src/nova/tests/unit/console/test_serial.py:L69–L81` |
| `SerialTestCase.test_acquire_port_in_use` | method | (self, fake_verify_port) | public | not declared | 1/8 | `src/nova/tests/unit/console/test_serial.py:L84–L98` |
| `SerialTestCase.test_acquire_port_in_use.port_10000_already_used` | function | (host, port) | public | not declared | — | `src/nova/tests/unit/console/test_serial.py:L85–L90` |
| `SerialTestCase.test_acquire_port_not_ble_to_bind_at_any_port` | method | (self, fake_verify_port) | public | not declared | 1/10 | `src/nova/tests/unit/console/test_serial.py:L101–L112` |
| `SerialTestCase.test_release_port` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/console/test_serial.py:L114–L123` |

## Dependencies

- `import socket` (src/nova/tests/unit/console/test_serial.py:L17)
- `unittest`: imports `mock` (src/nova/tests/unit/console/test_serial.py:L18)
- `nova.console`: imports `serial` (src/nova/tests/unit/console/test_serial.py:L20)
- `nova`: imports `exception` (src/nova/tests/unit/console/test_serial.py:L21)
- `nova`: imports `test` (src/nova/tests/unit/console/test_serial.py:L22)

