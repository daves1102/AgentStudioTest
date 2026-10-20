# src/nova/conf/scheduler.py

## Overview

This file implements the `scheduler` module, defining 2 functions, 6 variables, 2 imports, 2 side effects, 3 security surface entries.

Lines: total 1067, code 783, comment 20, blank 264

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `scheduler_group` | variable | — | exported | not declared | — | `src/nova/conf/scheduler.py:L21–L22` |
| `scheduler_opts` | variable | — | exported | not declared | — | `src/nova/conf/scheduler.py:L24–L205` |
| `filter_scheduler_group` | variable | — | exported | not declared | — | `src/nova/conf/scheduler.py:L207–L208` |
| `filter_scheduler_opts` | variable | — | exported | not declared | — | `src/nova/conf/scheduler.py:L210–L927` |
| `metrics_group` | variable | — | exported | not declared | — | `src/nova/conf/scheduler.py:L929–L937` |
| `metrics_weight_opts` | variable | — | exported | not declared | — | `src/nova/conf/scheduler.py:L941–L1048` |
| `register_opts` | function | (conf) | exported | not declared | 1/7 | `src/nova/conf/scheduler.py:L1051–L1059` |
| `list_opts` | function | — | exported | `{ scheduler_group: scheduler_opts, filter_scheduler_group: filter_scheduler_opts, metrics_group: metrics_weight_opts, }` (src/nova/conf/scheduler.py:L1063) | 1/6 | `src/nova/conf/scheduler.py:L1062–L1067` |

## Dependencies

- `oslo_config`: imports `cfg` (src/nova/conf/scheduler.py:L16)
- `nova.virt`: imports `arch` (src/nova/conf/scheduler.py:L18)

## Side Effects

- **network**: See https://docs.openstack.org/neutron/latest/admin/config-routed-networks.html (src/nova/conf/scheduler.py:L103)
- **network**: at https://docs.openstack.org/nova/latest/reference/isolate-aggregates.html (src/nova/conf/scheduler.py:L179)

## Security Surface

- **sink** (`db-write`): every time this runs, we will select any unmapped hosts out of each (src/nova/conf/scheduler.py:L54)
- **sink** (`db-write`): scheduler processes handling similar requests will select the same host, (src/nova/conf/scheduler.py:L221)
- **sink** (`db-write`): availability to select destination for a server with PCI request. The scheduler (src/nova/conf/scheduler.py:L917)

