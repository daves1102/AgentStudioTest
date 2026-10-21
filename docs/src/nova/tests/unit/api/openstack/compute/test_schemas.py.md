# src/nova/tests/unit/api/openstack/compute/test_schemas.py

## Overview

This file implements the `test_schemas` module, defining 1 class, 1 constant, 2 functions, 2 methods, 5 imports, 1 side effect.

Lines: total 147, code 105, comment 20, blank 22

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_schemas.py:L20–L20` |
| `SchemaTest` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_schemas.py:L23–L147` |
| `SchemaTest.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_schemas.py:L25–L28` |
| `SchemaTest.test_schemas` | method | (self) | public | not declared | 16/69 | `src/nova/tests/unit/api/openstack/compute/test_schemas.py:L30–L147` |
| `SchemaTest.test_schemas._validate_schema` | function | (func, schema) | private | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_schemas.py:L36–L44` |
| `SchemaTest.test_schemas._validate_func` | function | (func, method) | private | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_schemas.py:L46–L67` |

## Dependencies

- `import jsonschema.exceptions` (src/nova/tests/unit/api/openstack/compute/test_schemas.py:L13)
- `oslo_log`: imports `log as logging` (src/nova/tests/unit/api/openstack/compute/test_schemas.py:L14)
- `nova.api.openstack`: imports `compute` (src/nova/tests/unit/api/openstack/compute/test_schemas.py:L16)
- `nova.api.validation`: imports `validators` (src/nova/tests/unit/api/openstack/compute/test_schemas.py:L17)
- `nova`: imports `test` (src/nova/tests/unit/api/openstack/compute/test_schemas.py:L18)

## Side Effects

- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/tests/unit/api/openstack/compute/test_schemas.py:L20)

