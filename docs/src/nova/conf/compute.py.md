# src/nova/conf/compute.py

## Overview

This file implements the `compute` module, defining 1 constant, 2 functions, 11 variables, 4 imports, 7 side effects, 8 security surface entries.

Lines: total 1600, code 1258, comment 30, blank 312

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `compute_group` | variable | — | exported | not declared | — | `src/nova/conf/compute.py:L26–L31` |
| `compute_opts` | variable | — | exported | not declared | — | `src/nova/conf/compute.py:L32–L322` |
| `resource_tracker_opts` | variable | — | exported | not declared | — | `src/nova/conf/compute.py:L324–L432` |
| `allocation_ratio_opts` | variable | — | exported | not declared | — | `src/nova/conf/compute.py:L434–L578` |
| `compute_manager_opts` | variable | — | exported | not declared | — | `src/nova/conf/compute.py:L580–L770` |
| `compute_group_opts` | variable | — | exported | not declared | — | `src/nova/conf/compute.py:L772–L1104` |
| `interval_opts` | variable | — | exported | not declared | — | `src/nova/conf/compute.py:L1106–L1354` |
| `timeout_opts` | variable | — | exported | not declared | — | `src/nova/conf/compute.py:L1356–L1442` |
| `running_deleted_opts` | variable | — | exported | not declared | — | `src/nova/conf/compute.py:L1444–L1496` |
| `instance_cleaning_opts` | variable | — | exported | not declared | — | `src/nova/conf/compute.py:L1498–L1516` |
| `db_opts` | variable | — | exported | not declared | — | `src/nova/conf/compute.py:L1518–L1578` |
| `ALL_OPTS` | constant | — | exported | not declared | — | `src/nova/conf/compute.py:L1581–L1589` |
| `register_opts` | function | (conf) | exported | not declared | 1/4 | `src/nova/conf/compute.py:L1592–L1595` |
| `list_opts` | function | — | exported | `{'DEFAULT': ALL_OPTS, 'compute': compute_group_opts}` (src/nova/conf/compute.py:L1599) | 1/3 | `src/nova/conf/compute.py:L1598–L1600` |

## Dependencies

- `import socket` (src/nova/conf/compute.py:L19)
- `oslo_config`: imports `cfg` (src/nova/conf/compute.py:L21)
- `oslo_config`: imports `types` (src/nova/conf/compute.py:L22)
- `nova.conf`: imports `paths` (src/nova/conf/compute.py:L24)

## Side Effects

- **network**: See https://docs.openstack.org/nova/latest/admin/configuration/schedulers.html (src/nova/conf/compute.py:L539)
- **network**: See https://docs.openstack.org/nova/latest/admin/configuration/schedulers.html (src/nova/conf/compute.py:L555)
- **network**: See https://docs.openstack.org/nova/latest/admin/configuration/schedulers.html (src/nova/conf/compute.py:L571)
- **network**: https://docs.openstack.org/cinder/latest/admin/blockstorage-image-volume-cache.html (src/nova/conf/compute.py:L743)
- **network**: see https://docs.openstack.org/glance/latest/admin/useful-image-properties.html (src/nova/conf/compute.py:L986)
- **network**: https://docs.openstack.org/nova/latest/admin/managing-resource-providers.html (src/nova/conf/compute.py:L1031)
- **global-mutation**: ALL_OPTS = (compute_opts + (src/nova/conf/compute.py:L1581)

## Security Surface

- **sink** (`db-write`): This option gives an opportunity to select which image-properties (src/nova/conf/compute.py:L61)
- **sink** (`db-write`): Nova sends a port update to Neutron after an instance has been scheduled, (src/nova/conf/compute.py:L143)
- **sink** (`db-write`): This option specifies the number of seconds between attempts to update a (src/nova/conf/compute.py:L832)
- **sink** (`db-write`): the decisions made by the scheduler about which compute node to select when (src/nova/conf/compute.py:L1042)
- **sink** (`db-write`): update it's cache periodically if this option is set to <= 0. Nova will still (src/nova/conf/compute.py:L1140)
- **sink** (`db-write`): react to network-changed external events to update its cache. (src/nova/conf/compute.py:L1141)
- **sink** (`db-write`): update nova's view. So in these deployment scenarios this periodic is safe to (src/nova/conf/compute.py:L1143)
- **sink** (`db-write`): set, a launch of a new instance or an update of an existing instance with a (src/nova/conf/compute.py:L1533)

