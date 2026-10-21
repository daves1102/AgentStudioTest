# src/nova/tests/unit/objects/test_volume_usage.py

## Overview

This file implements the `test_volume_usage` module, defining 3 classs, 1 constant, 2 methods, 1 variable, 5 imports, 1 side effect.

Lines: total 93, code 69, comment 11, blank 13

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `NOW` | constant | — | exported | not declared | — | `src/nova/tests/unit/objects/test_volume_usage.py:L22–L22` |
| `fake_vol_usage` | variable | — | exported | not declared | — | `src/nova/tests/unit/objects/test_volume_usage.py:L24–L45` |
| `_TestVolumeUsage` | class | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_volume_usage.py:L48–L85` |
| `_TestVolumeUsage.test_save` | method | (self, mock_upd) | public | not declared | 1/16 | `src/nova/tests/unit/objects/test_volume_usage.py:L51–L66` |
| `_TestVolumeUsage.test_save_update_totals` | method | (self, mock_upd) | public | not declared | 1/16 | `src/nova/tests/unit/objects/test_volume_usage.py:L70–L85` |
| `TestVolumeUsage` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_volume_usage.py:L88–L89` |
| `TestRemoteVolumeUsage` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_volume_usage.py:L92–L93` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/objects/test_volume_usage.py:L13)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/objects/test_volume_usage.py:L15)
- `oslo_utils`: imports `timeutils` (src/nova/tests/unit/objects/test_volume_usage.py:L16)
- `nova`: imports `objects` (src/nova/tests/unit/objects/test_volume_usage.py:L18)
- `nova.tests.unit.objects`: imports `test_objects` (src/nova/tests/unit/objects/test_volume_usage.py:L19)

## Side Effects

- **global-mutation**: NOW = timeutils.utcnow().replace(microsecond=0) (src/nova/tests/unit/objects/test_volume_usage.py:L22)

