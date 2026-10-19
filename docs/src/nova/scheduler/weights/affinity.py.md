# src/nova/scheduler/weights/affinity.py

## Overview

This file implements the `affinity` module, defining 3 classs, 2 constants, 3 fields, 4 methods, 4 imports, 2 side effects.

Lines: total 76, code 42, comment 14, blank 20

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/scheduler/weights/affinity.py:L31–L31` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/scheduler/weights/affinity.py:L33–L33` |
| `_SoftAffinityWeigherBase` | class | — | unexported | not declared | — | `src/nova/scheduler/weights/affinity.py:L36–L53` |
| `_SoftAffinityWeigherBase.policy_name` | field | — | public | not declared | — | `src/nova/scheduler/weights/affinity.py:L37–L37` |
| `_SoftAffinityWeigherBase._weigh_object` | method | (self, host_state, request_spec) | private | `0` (src/nova/scheduler/weights/affinity.py:L42); `0` (src/nova/scheduler/weights/affinity.py:L47); `len(member_on_host)` (src/nova/scheduler/weights/affinity.py:L53) | 3/10 | `src/nova/scheduler/weights/affinity.py:L39–L53` |
| `ServerGroupSoftAffinityWeigher` | class | — | exported | not declared | — | `src/nova/scheduler/weights/affinity.py:L56–L62` |
| `ServerGroupSoftAffinityWeigher.policy_name` | field | — | public | not declared | — | `src/nova/scheduler/weights/affinity.py:L57–L57` |
| `ServerGroupSoftAffinityWeigher.weight_multiplier` | method | (self, host_state) | public | `utils.get_weight_multiplier( host_state, 'soft_affinity_weight_multiplier', CONF.filter_scheduler.soft_affinity_weight_multiplier)` (src/nova/scheduler/weights/affinity.py:L60) | 1/4 | `src/nova/scheduler/weights/affinity.py:L59–L62` |
| `ServerGroupSoftAntiAffinityWeigher` | class | — | exported | not declared | — | `src/nova/scheduler/weights/affinity.py:L65–L76` |
| `ServerGroupSoftAntiAffinityWeigher.policy_name` | field | — | public | not declared | — | `src/nova/scheduler/weights/affinity.py:L66–L66` |
| `ServerGroupSoftAntiAffinityWeigher.weight_multiplier` | method | (self, host_state) | public | `utils.get_weight_multiplier( host_state, 'soft_anti_affinity_weight_multiplier', CONF.filter_scheduler.soft_anti_affinity_weight_multiplier)` (src/nova/scheduler/weights/affinity.py:L69) | 1/4 | `src/nova/scheduler/weights/affinity.py:L68–L71` |
| `ServerGroupSoftAntiAffinityWeigher._weigh_object` | method | (self, host_state, request_spec) | private | `-1 * weight` (src/nova/scheduler/weights/affinity.py:L76) | 1/4 | `src/nova/scheduler/weights/affinity.py:L73–L76` |

## Dependencies

- `oslo_config`: imports `cfg` (src/nova/scheduler/weights/affinity.py:L25)
- `oslo_log`: imports `log as logging` (src/nova/scheduler/weights/affinity.py:L26)
- `nova.scheduler`: imports `utils` (src/nova/scheduler/weights/affinity.py:L28)
- `nova.scheduler`: imports `weights` (src/nova/scheduler/weights/affinity.py:L29)

## Side Effects

- **global-mutation**: CONF = cfg.CONF (src/nova/scheduler/weights/affinity.py:L31)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/scheduler/weights/affinity.py:L33)

