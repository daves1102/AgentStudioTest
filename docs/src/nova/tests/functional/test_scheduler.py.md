# src/nova/tests/functional/test_scheduler.py

## Overview

This file implements the `test_scheduler` module, defining 4 classs, 3 constants, 18 methods, 7 imports, 3 side effects, 1 security surface entry.

Lines: total 245, code 188, comment 18, blank 39

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CELL1_NAME` | constant | — | exported | not declared | — | `src/nova/tests/functional/test_scheduler.py:L22–L22` |
| `CELL2_NAME` | constant | — | exported | not declared | — | `src/nova/tests/functional/test_scheduler.py:L23–L23` |
| `_AggregateTestCase` | class | — | unexported | not declared | — | `src/nova/tests/functional/test_scheduler.py:L26–L36` |
| `_AggregateTestCase._create_aggregate` | method | (self, metadata) | private | `aggregate` (src/nova/tests/functional/test_scheduler.py:L36) | 1/9 | `src/nova/tests/functional/test_scheduler.py:L28–L36` |
| `AggregateImagePropertiesIsolationTestCase` | class | — | exported | not declared | — | `src/nova/tests/functional/test_scheduler.py:L39–L133` |
| `AggregateImagePropertiesIsolationTestCase.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/test_scheduler.py:L42–L47` |
| `AggregateImagePropertiesIsolationTestCase._create_image` | method | (self, metadata) | private | `self.glance.create(None, image)` (src/nova/tests/functional/test_scheduler.py:L73) | 1/25 | `src/nova/tests/functional/test_scheduler.py:L49–L73` |
| `AggregateImagePropertiesIsolationTestCase.test_filter_passes` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/test_scheduler.py:L75–L80` |
| `AggregateImagePropertiesIsolationTestCase.test_filter_rejects` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/test_scheduler.py:L82–L88` |
| `AggregateImagePropertiesIsolationTestCase.test_filter_passes_with_prefix` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/test_scheduler.py:L90–L101` |
| `AggregateImagePropertiesIsolationTestCase.test_filter_rejects_with_prefix` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/test_scheduler.py:L103–L114` |
| `AggregateImagePropertiesIsolationTestCase.test_filter_passes_with_invalid_key` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/test_scheduler.py:L116–L120` |
| `AggregateImagePropertiesIsolationTestCase.test_filter_passes_with_irrelevant_key` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/test_scheduler.py:L122–L133` |
| `AggregateInstanceExtraSpecsFilterTestCase` | class | — | exported | not declared | — | `src/nova/tests/functional/test_scheduler.py:L136–L177` |
| `AggregateInstanceExtraSpecsFilterTestCase.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/test_scheduler.py:L139–L144` |
| `AggregateInstanceExtraSpecsFilterTestCase.test_filter_passes` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/test_scheduler.py:L146–L151` |
| `AggregateInstanceExtraSpecsFilterTestCase.test_filter_rejects` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/test_scheduler.py:L153–L159` |
| `AggregateInstanceExtraSpecsFilterTestCase.test_filter_passes_with_prefix` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/test_scheduler.py:L161–L168` |
| `AggregateInstanceExtraSpecsFilterTestCase.test_filter_rejects_with_prefix` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/test_scheduler.py:L170–L177` |
| `MultiCellSchedulerTestCase` | class | — | exported | not declared | — | `src/nova/tests/functional/test_scheduler.py:L180–L245` |
| `MultiCellSchedulerTestCase.NUMBER_OF_CELLS` | constant | — | public | not declared | — | `src/nova/tests/functional/test_scheduler.py:L183–L183` |
| `MultiCellSchedulerTestCase.setUp` | method | (self) | public | not declared | 1/17 | `src/nova/tests/functional/test_scheduler.py:L185–L203` |
| `MultiCellSchedulerTestCase._test_create_and_migrate` | method | (self, expected_status, az=None) | private | `self.admin_api.api_post( '/servers/%s/action' % server['id'], {'migrate': None}, check_response_status=[expected_status]), server` (src/nova/tests/functional/test_scheduler.py:L208) | 1/6 | `src/nova/tests/functional/test_scheduler.py:L205–L211` |
| `MultiCellSchedulerTestCase.test_migrate_between_cells` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/test_scheduler.py:L213–L226` |
| `MultiCellSchedulerTestCase.test_migrate_within_cell` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/test_scheduler.py:L228–L245` |

## Dependencies

- `import datetime` (src/nova/tests/functional/test_scheduler.py:L13)
- `nova.compute`: imports `instance_actions` (src/nova/tests/functional/test_scheduler.py:L15)
- `nova`: imports `test` (src/nova/tests/functional/test_scheduler.py:L16)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/functional/test_scheduler.py:L17)
- `nova.tests.functional`: imports `fixtures as func_fixtures` (src/nova/tests/functional/test_scheduler.py:L18)
- `nova.tests.functional`: imports `integrated_helpers` (src/nova/tests/functional/test_scheduler.py:L19)
- `nova.tests.unit`: imports `fake_network` (src/nova/tests/functional/test_scheduler.py:L20)

## Side Effects

- **global-mutation**: CELL1_NAME = 'cell1' (src/nova/tests/functional/test_scheduler.py:L22)
- **global-mutation**: CELL2_NAME = 'cell2' (src/nova/tests/functional/test_scheduler.py:L23)
- **global-mutation**: NUMBER_OF_CELLS = 2 (src/nova/tests/functional/test_scheduler.py:L183)

## Security Surface

- **sink** (`db-write`): image['properties'].update(metadata) (src/nova/tests/functional/test_scheduler.py:L72)

