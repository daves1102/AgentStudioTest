# src/nova/tests/unit/api/openstack/compute/test_server_password.py

## Overview

This file implements the `test_server_password` module, defining 1 class, 2 fields, 1 function, 3 methods, 5 imports, 1 side effect.

Lines: total 61, code 37, comment 14, blank 10

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ServerPasswordTestV21` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_password.py:L25–L61` |
| `ServerPasswordTestV21.content_type` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_password.py:L26–L26` |
| `ServerPasswordTestV21.server_password` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_password.py:L27–L27` |
| `ServerPasswordTestV21.setUp` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/api/openstack/compute/test_server_password.py:L29–L49` |
| `ServerPasswordTestV21.setUp.fake_convert_password` | function | (context, password) | public | `{}` (src/nova/tests/unit/api/openstack/compute/test_server_password.py:L44) | — | `src/nova/tests/unit/api/openstack/compute/test_server_password.py:L42–L44` |
| `ServerPasswordTestV21.test_get_password` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_server_password.py:L51–L53` |
| `ServerPasswordTestV21.test_reset_password` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_server_password.py:L55–L61` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/api/openstack/compute/test_server_password.py:L16)
- `nova.api.openstack.compute`: imports `server_password as server_password_v21` (src/nova/tests/unit/api/openstack/compute/test_server_password.py:L18–L19)
- `nova`: imports `test` (src/nova/tests/unit/api/openstack/compute/test_server_password.py:L20)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/api/openstack/compute/test_server_password.py:L21)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/api/openstack/compute/test_server_password.py:L22)

## Side Effects

- **network**: from nova.api.openstack.compute import server_password \ (src/nova/tests/unit/api/openstack/compute/test_server_password.py:L18)

