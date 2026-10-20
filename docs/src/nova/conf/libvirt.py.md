# src/nova/conf/libvirt.py

## Overview

This file implements the `libvirt` module, defining 1 constant, 2 functions, 22 variables, 4 imports, 1 side effect.

Lines: total 1716, code 1398, comment 24, blank 294

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `libvirt_group` | variable | — | exported | not declared | — | `src/nova/conf/libvirt.py:L31–L40` |
| `libvirt_general_opts` | variable | — | exported | not declared | — | `src/nova/conf/libvirt.py:L42–L972` |
| `libvirt_imagebackend_opts` | variable | — | exported | not declared | — | `src/nova/conf/libvirt.py:L974–L1080` |
| `libvirt_lvm_opts` | variable | — | exported | not declared | — | `src/nova/conf/libvirt.py:L1082–L1117` |
| `libvirt_utils_opts` | variable | — | exported | not declared | — | `src/nova/conf/libvirt.py:L1119–L1133` |
| `libvirt_vif_opts` | variable | — | exported | not declared | — | `src/nova/conf/libvirt.py:L1135–L1139` |
| `libvirt_volume_opts` | variable | — | exported | not declared | — | `src/nova/conf/libvirt.py:L1141–L1173` |
| `libvirt_volume_aoe_opts` | variable | — | exported | not declared | — | `src/nova/conf/libvirt.py:L1175–L1185` |
| `libvirt_volume_iscsi_opts` | variable | — | exported | not declared | — | `src/nova/conf/libvirt.py:L1187–L1203` |
| `libvirt_volume_iser_opts` | variable | — | exported | not declared | — | `src/nova/conf/libvirt.py:L1205–L1223` |
| `libvirt_volume_net_opts` | variable | — | exported | not declared | — | `src/nova/conf/libvirt.py:L1225–L1263` |
| `libvirt_volume_nfs_opts` | variable | — | exported | not declared | — | `src/nova/conf/libvirt.py:L1265–L1292` |
| `libvirt_volume_ceph_opts` | variable | — | exported | not declared | — | `src/nova/conf/libvirt.py:L1294–L1320` |
| `libvirt_volume_quobyte_opts` | variable | — | exported | not declared | — | `src/nova/conf/libvirt.py:L1322–L1350` |
| `libvirt_volume_smbfs_opts` | variable | — | exported | not declared | — | `src/nova/conf/libvirt.py:L1352–L1381` |
| `libvirt_remotefs_opts` | variable | — | exported | not declared | — | `src/nova/conf/libvirt.py:L1383–L1398` |
| `libvirt_volume_vzstorage_opts` | variable | — | exported | not declared | — | `src/nova/conf/libvirt.py:L1400–L1522` |
| `libvirt_virtio_queue_sizes` | variable | — | exported | not declared | — | `src/nova/conf/libvirt.py:L1528–L1554` |
| `libvirt_volume_nvmeof_opts` | variable | — | exported | not declared | — | `src/nova/conf/libvirt.py:L1557–L1567` |
| `libvirt_pmem_opts` | variable | — | exported | not declared | — | `src/nova/conf/libvirt.py:L1570–L1592` |
| `libvirt_vtpm_opts` | variable | — | exported | not declared | — | `src/nova/conf/libvirt.py:L1595–L1665` |
| `libvirt_cpu_mgmt_opts` | variable | — | exported | not declared | — | `src/nova/conf/libvirt.py:L1667–L1683` |
| `ALL_OPTS` | constant | — | exported | not declared | — | `src/nova/conf/libvirt.py:L1685–L1707` |
| `register_opts` | function | (conf) | exported | not declared | 1/3 | `src/nova/conf/libvirt.py:L1710–L1712` |
| `list_opts` | function | — | exported | `{libvirt_group: ALL_OPTS}` (src/nova/conf/libvirt.py:L1716) | 1/2 | `src/nova/conf/libvirt.py:L1715–L1716` |

## Dependencies

- `import itertools` (src/nova/conf/libvirt.py:L22)
- `oslo_config`: imports `cfg` (src/nova/conf/libvirt.py:L24)
- `oslo_config`: imports `types` (src/nova/conf/libvirt.py:L26)
- `nova.conf`: imports `paths` (src/nova/conf/libvirt.py:L28)

## Side Effects

- **global-mutation**: ALL_OPTS = list(itertools.chain( (src/nova/conf/libvirt.py:L1685)

