# src/nova/tests/unit/limit/test_placement.py

## Overview

This file implements the `test_placement` module, defining 4 classs, 1 constant, 28 methods, 14 imports, 1 side effect.

Lines: total 449, code 342, comment 28, blank 79

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/unit/limit/test_placement.py:L32–L32` |
| `TestGetUsage` | class | — | exported | not declared | — | `src/nova/tests/unit/limit/test_placement.py:L35–L159` |
| `TestGetUsage.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/limit/test_placement.py:L36–L39` |
| `TestGetUsage.test_get_usage` | method | (self, mock_placement, mock_inst, mock_qfd) | public | not declared | 1/11 | `src/nova/tests/unit/limit/test_placement.py:L45–L57` |
| `TestGetUsage.test_get_usage_bad_resources` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/limit/test_placement.py:L59–L68` |
| `TestGetUsage.test_get_usage_bad_qfd` | method | (self, mock_qfd) | public | not declared | 1/6 | `src/nova/tests/unit/limit/test_placement.py:L71–L76` |
| `TestGetUsage.test_get_usage_unified_limits_disabled` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/limit/test_placement.py:L78–L82` |
| `TestGetUsage.test_get_usage_placement_fail` | method | (self, mock_placement, mock_inst, mock_qfd) | public | not declared | 1/14 | `src/nova/tests/unit/limit/test_placement.py:L88–L103` |
| `TestGetUsage.test_get_usage_pcpu_as_vcpu` | method | (self, mock_placement, mock_inst, mock_qfd) | public | not declared | 1/29 | `src/nova/tests/unit/limit/test_placement.py:L109–L159` |
| `TestGetDeltas` | class | — | exported | not declared | — | `src/nova/tests/unit/limit/test_placement.py:L162–L297` |
| `TestGetDeltas.test_get_deltas` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/limit/test_placement.py:L163–L173` |
| `TestGetDeltas.test_get_deltas_recheck` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/limit/test_placement.py:L175–L185` |
| `TestGetDeltas.test_get_deltas_check_baremetal` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/limit/test_placement.py:L187–L199` |
| `TestGetDeltas.test_get_deltas_check_bfv` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/limit/test_placement.py:L201–L211` |
| `TestGetDeltas.test_get_deltas_with_port_bandwidth_resources` | method | (self) | public | not declared | 1/20 | `src/nova/tests/unit/limit/test_placement.py:L213–L235` |
| `TestGetDeltas.test_get_deltas_with_cyborg_device_profile` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/limit/test_placement.py:L237–L253` |
| `TestGetDeltas.test_get_deltas_with_empty_requested_resources` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/limit/test_placement.py:L255–L268` |
| `TestGetDeltas.test_get_deltas_with_mixed_resources` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/limit/test_placement.py:L270–L291` |
| `TestGetDeltas.test_get_deltas_requires_flavor` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/limit/test_placement.py:L293–L297` |
| `TestEnforce` | class | — | exported | not declared | — | `src/nova/tests/unit/limit/test_placement.py:L300–L408` |
| `TestEnforce.setUp` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/limit/test_placement.py:L301–L311` |
| `TestEnforce.test_enforce_num_instances_and_resources_disabled` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/limit/test_placement.py:L313–L317` |
| `TestEnforce.test_enforce_num_instances_and_resources_with_request_spec` | method | (self, mock_limit) | public | not declared | 1/12 | `src/nova/tests/unit/limit/test_placement.py:L320–L333` |
| `TestEnforce.test_enforce_num_instances_and_resources_recheck` | method | (self, mock_limit) | public | not declared | 1/11 | `src/nova/tests/unit/limit/test_placement.py:L336–L348` |
| `TestEnforce.test_enforce_num_instances_and_resources_retry` | method | (self, mock_limit) | public | not declared | 1/18 | `src/nova/tests/unit/limit/test_placement.py:L351–L370` |
| `TestEnforce.test_enforce_num_instances_and_resources_fails` | method | (self, mock_limit) | public | not declared | 1/16 | `src/nova/tests/unit/limit/test_placement.py:L373–L392` |
| `TestEnforce.test_enforce_num_instances_and_resources_placement_fail` | method | (self, mock_limit) | public | not declared | 1/12 | `src/nova/tests/unit/limit/test_placement.py:L395–L408` |
| `GetLegacyLimitsTest` | class | — | exported | not declared | — | `src/nova/tests/unit/limit/test_placement.py:L411–L449` |
| `GetLegacyLimitsTest.setUp` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/limit/test_placement.py:L412–L418` |
| `GetLegacyLimitsTest.test_convert_keys_to_legacy_name` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/limit/test_placement.py:L420–L422` |
| `GetLegacyLimitsTest.test_get_legacy_default_limits` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/limit/test_placement.py:L424–L428` |
| `GetLegacyLimitsTest.test_get_legacy_project_limits` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/limit/test_placement.py:L430–L435` |
| `GetLegacyLimitsTest.test_get_legacy_counts` | method | (self, mock_qfd, mock_counts, mock_placement) | public | not declared | 1/9 | `src/nova/tests/unit/limit/test_placement.py:L441–L449` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/limit/test_placement.py:L15)
- `oslo_config`: imports `cfg` (src/nova/tests/unit/limit/test_placement.py:L17)
- `oslo_limit`: imports `exception as limit_exceptions` (src/nova/tests/unit/limit/test_placement.py:L18)
- `oslo_limit`: imports `fixture as limit_fixture` (src/nova/tests/unit/limit/test_placement.py:L19)
- `oslo_limit`: imports `limit` (src/nova/tests/unit/limit/test_placement.py:L20)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/limit/test_placement.py:L21)
- `nova`: imports `context` (src/nova/tests/unit/limit/test_placement.py:L23)
- `nova`: imports `exception` (src/nova/tests/unit/limit/test_placement.py:L24)
- `nova.limit`: imports `placement as placement_limits` (src/nova/tests/unit/limit/test_placement.py:L25)
- `nova.limit`: imports `utils as limit_utils` (src/nova/tests/unit/limit/test_placement.py:L26)
- `nova`: imports `objects` (src/nova/tests/unit/limit/test_placement.py:L27)
- `nova`: imports `quota` (src/nova/tests/unit/limit/test_placement.py:L28)
- `nova.scheduler.client`: imports `report` (src/nova/tests/unit/limit/test_placement.py:L29)
- `nova`: imports `test` (src/nova/tests/unit/limit/test_placement.py:L30)

## Side Effects

- **global-mutation**: CONF = cfg.CONF (src/nova/tests/unit/limit/test_placement.py:L32)

