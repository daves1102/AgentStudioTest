# src/nova/tests/functional/db/test_instance.py

## Overview

This file implements the `test_instance` module, defining 1 class, 8 methods, 8 imports, 1 security surface entry.

Lines: total 206, code 149, comment 32, blank 25

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `InstanceObjectTestCase` | class | — | exported | not declared | — | `src/nova/tests/functional/db/test_instance.py:L24–L206` |
| `InstanceObjectTestCase.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/db/test_instance.py:L25–L27` |
| `InstanceObjectTestCase._create_instance` | method | (self, **values) | private | `inst` (src/nova/tests/functional/db/test_instance.py:L35) | 1/7 | `src/nova/tests/functional/db/test_instance.py:L29–L35` |
| `InstanceObjectTestCase.test_get_count_by_vm_state` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/db/test_instance.py:L37–L47` |
| `InstanceObjectTestCase.test_embedded_instance_flavor_description_is_not_persisted` | method | (self) | public | not declared | 1/15 | `src/nova/tests/functional/db/test_instance.py:L49–L78` |
| `InstanceObjectTestCase.test_populate_instance_compute_id` | method | (self) | public | not declared | 3/40 | `src/nova/tests/functional/db/test_instance.py:L80–L135` |
| `InstanceObjectTestCase.test_get_count_by_hosts` | method | (self) | public | not declared | 1/13 | `src/nova/tests/functional/db/test_instance.py:L137–L149` |
| `InstanceObjectTestCase.test_hidden_instance_not_counted` | method | (self) | public | not declared | 1/14 | `src/nova/tests/functional/db/test_instance.py:L151–L167` |
| `InstanceObjectTestCase.test_numa_topology_online_migration` | method | (self) | public | not declared | 1/32 | `src/nova/tests/functional/db/test_instance.py:L169–L206` |

## Dependencies

- `oslo_serialization`: imports `jsonutils` (src/nova/tests/functional/db/test_instance.py:L13)
- `oslo_utils`: imports `uuidutils` (src/nova/tests/functional/db/test_instance.py:L14)
- `nova.compute`: imports `vm_states` (src/nova/tests/functional/db/test_instance.py:L16)
- `nova`: imports `context` (src/nova/tests/functional/db/test_instance.py:L17)
- `nova.db.main`: imports `api as db` (src/nova/tests/functional/db/test_instance.py:L18)
- `nova`: imports `objects` (src/nova/tests/functional/db/test_instance.py:L19)
- `nova`: imports `test` (src/nova/tests/functional/db/test_instance.py:L20)
- `nova`: imports `utils` (src/nova/tests/functional/db/test_instance.py:L21)

## Security Surface

- **sink** (`db-write`): inst.update(values) (src/nova/tests/functional/db/test_instance.py:L33)

