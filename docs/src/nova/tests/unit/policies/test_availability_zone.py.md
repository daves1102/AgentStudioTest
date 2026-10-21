# src/nova/tests/unit/policies/test_availability_zone.py

## Overview

This file implements the `test_availability_zone` module, defining 2 classs, 1 field, 3 methods, 4 imports, 1 side effect.

Lines: total 63, code 36, comment 14, blank 13

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `AvailabilityZonePolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_availability_zone.py:L20–L53` |
| `AvailabilityZonePolicyTest.setUp` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/policies/test_availability_zone.py:L29–L40` |
| `AvailabilityZonePolicyTest.test_availability_zone_list_policy` | method | (self, mock_save) | public | not declared | 1/5 | `src/nova/tests/unit/policies/test_availability_zone.py:L43–L47` |
| `AvailabilityZonePolicyTest.test_availability_zone_detail_policy` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/policies/test_availability_zone.py:L49–L53` |
| `AvailabilityZoneNoLegacyPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_availability_zone.py:L56–L63` |
| `AvailabilityZoneNoLegacyPolicyTest.without_deprecated_rules` | field | — | public | not declared | — | `src/nova/tests/unit/policies/test_availability_zone.py:L63–L63` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/policies/test_availability_zone.py:L13)
- `nova.api.openstack.compute`: imports `availability_zone` (src/nova/tests/unit/policies/test_availability_zone.py:L15)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/policies/test_availability_zone.py:L16)
- `nova.tests.unit.policies`: imports `base` (src/nova/tests/unit/policies/test_availability_zone.py:L17)

## Side Effects

- **network**: from nova.api.openstack.compute import availability_zone (src/nova/tests/unit/policies/test_availability_zone.py:L15)

