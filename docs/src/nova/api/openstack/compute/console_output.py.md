# src/nova/api/openstack/compute/console_output.py

## Overview

This file implements the `console_output` module, defining 1 class, 2 methods, 9 imports, 1 side effect.

Lines: total 73, code 39, comment 24, blank 10

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ConsoleOutputController` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/console_output.py:L31–L73` |
| `ConsoleOutputController.__init__` | method | (self) | public | not declared | 1/3 | `src/nova/api/openstack/compute/console_output.py:L32–L34` |
| `ConsoleOutputController.get_console_output` | method | (self, req, id, body) | public | `{'output': output}` (src/nova/api/openstack/compute/console_output.py:L73) | 4/20 | `src/nova/api/openstack/compute/console_output.py:L40–L73` |

## Dependencies

- `import re` (src/nova/api/openstack/compute/console_output.py:L17)
- `import webob` (src/nova/api/openstack/compute/console_output.py:L19)
- `nova.api.openstack`: imports `common` (src/nova/api/openstack/compute/console_output.py:L21)
- `nova.api.openstack.compute.schemas`: imports `console_output as schema` (src/nova/api/openstack/compute/console_output.py:L22)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/openstack/compute/console_output.py:L23)
- `nova.api`: imports `validation` (src/nova/api/openstack/compute/console_output.py:L24)
- `nova.compute`: imports `api as compute` (src/nova/api/openstack/compute/console_output.py:L25)
- `nova`: imports `exception` (src/nova/api/openstack/compute/console_output.py:L26)
- `nova.policies`: imports `console_output as co_policies` (src/nova/api/openstack/compute/console_output.py:L27)

## Side Effects

- **network**: from nova.api.openstack.compute.schemas import console_output as schema (src/nova/api/openstack/compute/console_output.py:L22)

