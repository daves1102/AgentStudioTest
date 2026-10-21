# src/nova/tests/unit/fake_request_spec.py

## Overview

This file implements the `fake_request_spec` module, defining 3 constants, 2 functions, 6 imports, 3 side effects.

Lines: total 98, code 74, comment 13, blank 11

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `INSTANCE_NUMA_TOPOLOGY` | constant | — | exported | not declared | — | `src/nova/tests/unit/fake_request_spec.py:L22–L26` |
| `IMAGE_META` | constant | — | exported | not declared | — | `src/nova/tests/unit/fake_request_spec.py:L29–L51` |
| `PCI_REQUESTS` | constant | — | exported | not declared | — | `src/nova/tests/unit/fake_request_spec.py:L54–L56` |
| `fake_db_spec` | function | (spec_obj=None) | exported | `db_request_spec` (src/nova/tests/unit/fake_request_spec.py:L71) | 2/10 | `src/nova/tests/unit/fake_request_spec.py:L60–L71` |
| `fake_spec_obj` | function | (remove_id=False) | exported | `req_obj` (src/nova/tests/unit/fake_request_spec.py:L98) | 2/24 | `src/nova/tests/unit/fake_request_spec.py:L74–L98` |

## Dependencies

- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/fake_request_spec.py:L13)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/fake_request_spec.py:L14)
- `oslo_utils`: imports `uuidutils` (src/nova/tests/unit/fake_request_spec.py:L15)
- `nova`: imports `context` (src/nova/tests/unit/fake_request_spec.py:L17)
- `nova`: imports `objects` (src/nova/tests/unit/fake_request_spec.py:L18)
- `nova.tests.unit`: imports `fake_flavor` (src/nova/tests/unit/fake_request_spec.py:L19)

## Side Effects

- **global-mutation**: INSTANCE_NUMA_TOPOLOGY = objects.InstanceNUMATopology( (src/nova/tests/unit/fake_request_spec.py:L22)
- **global-mutation**: IMAGE_META = objects.ImageMeta.from_dict( (src/nova/tests/unit/fake_request_spec.py:L29)
- **global-mutation**: PCI_REQUESTS = objects.InstancePCIRequests( (src/nova/tests/unit/fake_request_spec.py:L54)

