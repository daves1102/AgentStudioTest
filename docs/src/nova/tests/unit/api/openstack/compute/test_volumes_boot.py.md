# src/nova/tests/unit/api/openstack/compute/test_volumes_boot.py

## Overview

This file implements the `test_volumes_boot` module, defining 1 class, 2 methods, 4 imports, 1 side effect, 1 security surface entry.

Lines: total 63, code 43, comment 13, blank 7

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `VolumesBootControllerDeprecationTest` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_volumes_boot.py:L19–L63` |
| `VolumesBootControllerDeprecationTest.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_volumes_boot.py:L21–L24` |
| `VolumesBootControllerDeprecationTest.test_not_found` | method | (self) | public | not declared | 4/34 | `src/nova/tests/unit/api/openstack/compute/test_volumes_boot.py:L26–L63` |

## Dependencies

- `nova.api.openstack.compute`: imports `volumes_boot` (src/nova/tests/unit/api/openstack/compute/test_volumes_boot.py:L13)
- `nova`: imports `exception` (src/nova/tests/unit/api/openstack/compute/test_volumes_boot.py:L14)
- `nova`: imports `test` (src/nova/tests/unit/api/openstack/compute/test_volumes_boot.py:L15)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/api/openstack/compute/test_volumes_boot.py:L16)

## Side Effects

- **network**: from nova.api.openstack.compute import volumes_boot (src/nova/tests/unit/api/openstack/compute/test_volumes_boot.py:L13)

## Security Surface

- **sink** (`db-write`): self.controller.update, (src/nova/tests/unit/api/openstack/compute/test_volumes_boot.py:L44)

