# src/nova/tests/functional/test_json_filter.py

## Overview

This file implements the `test_json_filter` module, defining 1 class, 1 constant, 2 fields, 2 methods, 4 imports, 1 side effect.

Lines: total 69, code 36, comment 22, blank 11

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/functional/test_json_filter.py:L19–L19` |
| `JsonFilterTestCase` | class | — | exported | not declared | — | `src/nova/tests/functional/test_json_filter.py:L22–L69` |
| `JsonFilterTestCase.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/test_json_filter.py:L25–L25` |
| `JsonFilterTestCase.compute_driver` | field | — | public | not declared | — | `src/nova/tests/functional/test_json_filter.py:L26–L26` |
| `JsonFilterTestCase.setUp` | method | (self) | public | not declared | 2/10 | `src/nova/tests/functional/test_json_filter.py:L28–L46` |
| `JsonFilterTestCase.test_filter_on_hypervisor_hostname` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/test_json_filter.py:L48–L69` |

## Dependencies

- `oslo_serialization`: imports `jsonutils` (src/nova/tests/functional/test_json_filter.py:L13)
- `nova`: imports `conf` (src/nova/tests/functional/test_json_filter.py:L15)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/functional/test_json_filter.py:L16)
- `nova.tests.functional`: imports `integrated_helpers` (src/nova/tests/functional/test_json_filter.py:L17)

## Side Effects

- **global-mutation**: CONF = conf.CONF (src/nova/tests/functional/test_json_filter.py:L19)

