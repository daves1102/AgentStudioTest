# src/nova/tests/functional/test_external_networks.py

## Overview

This file implements the `test_external_networks` module, defining 1 class, 3 methods, 1 staticmethod, 6 imports.

Lines: total 76, code 49, comment 19, blank 8

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `TestNeutronExternalNetworks` | class | — | exported | not declared | — | `src/nova/tests/functional/test_external_networks.py:L23–L76` |
| `TestNeutronExternalNetworks.setUp` | method | (self) | public | not declared | 1/13 | `src/nova/tests/functional/test_external_networks.py:L29–L43` |
| `TestNeutronExternalNetworks._setup_external_network` | method | (neutron) | private | not declared | 1/6 | `src/nova/tests/functional/test_external_networks.py:L46–L55` |
| `TestNeutronExternalNetworks.test_non_admin_create_server_on_external_network` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/test_external_networks.py:L57–L76` |
| `TestNeutronExternalNetworks._setup_external_network` | staticmethod | — | private | not declared | — | `src/nova/tests/functional/test_external_networks.py:L45–L55` |

## Dependencies

- `import copy` (src/nova/tests/functional/test_external_networks.py:L13)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/functional/test_external_networks.py:L15)
- `nova`: imports `test` (src/nova/tests/functional/test_external_networks.py:L17)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/functional/test_external_networks.py:L18)
- `nova.tests.functional`: imports `fixtures as func_fixtures` (src/nova/tests/functional/test_external_networks.py:L19)
- `nova.tests.functional`: imports `integrated_helpers` (src/nova/tests/functional/test_external_networks.py:L20)

