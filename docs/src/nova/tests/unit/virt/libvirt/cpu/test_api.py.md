# src/nova/tests/unit/virt/libvirt/cpu/test_api.py

## Overview

This file implements the `test_api` module, defining 1 class, 27 methods, 6 imports.

Lines: total 264, code 187, comment 31, blank 46

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `TestAPI` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/libvirt/cpu/test_api.py:L22–L264` |
| `TestAPI.setUp` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/libvirt/cpu/test_api.py:L24–L34` |
| `TestAPI.test_online` | method | (self, mock_get_online) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/cpu/test_api.py:L37–L40` |
| `TestAPI.test_set_online` | method | (self, mock_set_online) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/cpu/test_api.py:L43–L45` |
| `TestAPI.test_set_offline` | method | (self, mock_set_offline) | public | not declared | 1/3 | `src/nova/tests/unit/virt/libvirt/cpu/test_api.py:L48–L50` |
| `TestAPI.test_hash` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/libvirt/cpu/test_api.py:L52–L53` |
| `TestAPI.test_governor` | method | (self, mock_get_governor) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/cpu/test_api.py:L56–L59` |
| `TestAPI.test_governor_optional` | method | (self, mock_get_governor) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/cpu/test_api.py:L62–L65` |
| `TestAPI.test_set_governor_low` | method | (self, mock_set_governor) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/cpu/test_api.py:L68–L72` |
| `TestAPI.test_set_governor_high` | method | (self, mock_set_governor) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/cpu/test_api.py:L75–L79` |
| `TestAPI.test_power_up_online` | method | (self, mock_online) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/cpu/test_api.py:L82–L89` |
| `TestAPI.test_power_up_governor` | method | (self, mock_set_governor) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/cpu/test_api.py:L92–L100` |
| `TestAPI.test_power_up_skipped` | method | (self, mock_online) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/cpu/test_api.py:L103–L106` |
| `TestAPI.test_power_up_skipped_if_standard_instance` | method | (self, mock_online) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/cpu/test_api.py:L109–L112` |
| `TestAPI.test_power_down_offline` | method | (self, mock_offline) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/cpu/test_api.py:L115–L122` |
| `TestAPI.test_power_down_governor_cpu0_ignored` | method | (self, mock_set_governor) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/cpu/test_api.py:L125–L134` |
| `TestAPI.test_power_down_governor` | method | (self, mock_set_governor) | public | not declared | 1/6 | `src/nova/tests/unit/virt/libvirt/cpu/test_api.py:L137–L146` |
| `TestAPI.test_power_down_skipped` | method | (self, mock_offline) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/cpu/test_api.py:L149–L152` |
| `TestAPI.test_power_down_skipped_if_standard_instance` | method | (self, mock_offline) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/cpu/test_api.py:L155–L158` |
| `TestAPI.test_power_down_all_dedicated_cpus_offline` | method | (self, mock_offline) | public | not declared | 1/5 | `src/nova/tests/unit/virt/libvirt/cpu/test_api.py:L161–L167` |
| `TestAPI.test_power_down_all_dedicated_cpus_governor` | method | (self, mock_set_governor) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/cpu/test_api.py:L170–L178` |
| `TestAPI.test_power_down_all_dedicated_cpus_skipped` | method | (self, mock_offline) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/cpu/test_api.py:L181–L184` |
| `TestAPI.test_power_down_all_dedicated_cpus_no_dedicated_cpus_configured` | method | (self, mock_offline) | public | not declared | 1/7 | `src/nova/tests/unit/virt/libvirt/cpu/test_api.py:L187–L193` |
| `TestAPI.test_validate_all_dedicated_cpus_for_governor` | method | (self, mock_get_online, mock_get_governor) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/cpu/test_api.py:L197–L205` |
| `TestAPI.test_validate_all_dedicated_cpus_for_cpu_state` | method | (self, mock_get_online, mock_get_governor) | public | not declared | 1/9 | `src/nova/tests/unit/virt/libvirt/cpu/test_api.py:L209–L217` |
| `TestAPI.test_validate_all_dedicated_cpus_for_cpu_state_warning` | method | (self, mock_warning, mock_get_online, mock_get_governor) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/cpu/test_api.py:L222–L239` |
| `TestAPI.test_validate_all_dedicated_cpus_no_cpu` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/libvirt/cpu/test_api.py:L241–L246` |
| `TestAPI.test_validate_all_dedicated_cpus_for_cpu_state_with_off_cores` | method | (self, mock_get_online, mock_get_governor) | public | not declared | 1/12 | `src/nova/tests/unit/virt/libvirt/cpu/test_api.py:L250–L264` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/virt/libvirt/cpu/test_api.py:L13)
- `nova`: imports `exception` (src/nova/tests/unit/virt/libvirt/cpu/test_api.py:L15)
- `nova`: imports `objects` (src/nova/tests/unit/virt/libvirt/cpu/test_api.py:L16)
- `nova`: imports `test` (src/nova/tests/unit/virt/libvirt/cpu/test_api.py:L17)
- `nova.virt.libvirt.cpu`: imports `api` (src/nova/tests/unit/virt/libvirt/cpu/test_api.py:L18)
- `nova.virt.libvirt.cpu`: imports `core` (src/nova/tests/unit/virt/libvirt/cpu/test_api.py:L19)

