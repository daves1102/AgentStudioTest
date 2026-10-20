# src/nova/compute/stats.py

## Overview

This file implements the `stats` module, defining 1 class, 1 function, 14 methods, 2 propertys, 3 imports, 2 security surface entries.

Lines: total 155, code 97, comment 27, blank 31

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `Stats` | class | — | exported | not declared | — | `src/nova/compute/stats.py:L21–L155` |
| `Stats.__init__` | method | (self) | public | not declared | 1/3 | `src/nova/compute/stats.py:L24–L28` |
| `Stats.clear` | method | (self) | public | not declared | 1/3 | `src/nova/compute/stats.py:L30–L33` |
| `Stats.digest_stats` | method | (self, stats) | public | `` (src/nova/compute/stats.py:L38); `` (src/nova/compute/stats.py:L47) | 3/8 | `src/nova/compute/stats.py:L35–L48` |
| `Stats.io_workload` | method | (self) | public | `(num_builds + num_rebuilds + num_resizes + num_migrations + num_snapshots + num_backups + num_rescues + num_unshelves)` (src/nova/compute/stats.py:L67) | 1/12 | `src/nova/compute/stats.py:L51–L68` |
| `Stats.io_workload._get` | function | (state, state_type) | private | `self.get(key, 0)` (src/nova/compute/stats.py:L56) | — | `src/nova/compute/stats.py:L54–L56` |
| `Stats.calculate_workload` | method | (self) | public | `current_workload` (src/nova/compute/stats.py:L78) | 4/6 | `src/nova/compute/stats.py:L70–L78` |
| `Stats.num_instances` | method | (self) | public | `self.get("num_instances", 0)` (src/nova/compute/stats.py:L82) | 1/2 | `src/nova/compute/stats.py:L81–L82` |
| `Stats.num_instances_for_project` | method | (self, project_id) | public | `self.get(key, 0)` (src/nova/compute/stats.py:L86) | 1/3 | `src/nova/compute/stats.py:L84–L86` |
| `Stats.num_os_type` | method | (self, os_type) | public | `self.get(key, 0)` (src/nova/compute/stats.py:L90) | 1/3 | `src/nova/compute/stats.py:L88–L90` |
| `Stats.update_stats_for_instance` | method | (self, instance, is_removed=False) | public | not declared | 4/22 | `src/nova/compute/stats.py:L92–L125` |
| `Stats._decrement` | method | (self, key) | private | not declared | 1/3 | `src/nova/compute/stats.py:L127–L129` |
| `Stats._increment` | method | (self, key) | private | not declared | 1/3 | `src/nova/compute/stats.py:L131–L133` |
| `Stats._extract_state_from_instance` | method | (self, instance) | private | `(vm_state, task_state, os_type, project_id)` (src/nova/compute/stats.py:L147) | 1/9 | `src/nova/compute/stats.py:L135–L147` |
| `Stats.build_failed` | method | (self) | public | not declared | 1/2 | `src/nova/compute/stats.py:L149–L150` |
| `Stats.build_succeeded` | method | (self) | public | not declared | 1/2 | `src/nova/compute/stats.py:L152–L155` |
| `Stats.io_workload` | property | — | public | not declared | — | `src/nova/compute/stats.py:L50–L68` |
| `Stats.num_instances` | property | — | public | not declared | — | `src/nova/compute/stats.py:L80–L82` |

## Dependencies

- `nova.compute`: imports `task_states` (src/nova/compute/stats.py:L16)
- `nova.compute`: imports `vm_states` (src/nova/compute/stats.py:L17)
- `nova.i18n`: imports `_` (src/nova/compute/stats.py:L18)

## Security Surface

- **sink** (`db-write`): self.update(stats) (src/nova/compute/stats.py:L46)
- **sink** (`db-write`): """Update stats after an instance is changed.""" (src/nova/compute/stats.py:L93)

