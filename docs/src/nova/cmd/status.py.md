# src/nova/cmd/status.py

## Overview

This file implements the `status` module, defining 1 class, 4 constants, 1 field, 2 functions, 9 methods, 2 staticmethods, 2 variables, 28 imports, 6 side effects, 4 security surface entries.

Lines: total 361, code 238, comment 73, blank 50

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/cmd/status.py:L53–L53` |
| `MIN_PLACEMENT_MICROVERSION` | constant | — | exported | not declared | — | `src/nova/cmd/status.py:L60–L60` |
| `MIN_CINDER_MICROVERSION` | constant | — | exported | not declared | — | `src/nova/cmd/status.py:L64–L64` |
| `UpgradeCommands` | class | — | exported | not declared | — | `src/nova/cmd/status.py:L67–L312` |
| `UpgradeCommands._count_compute_nodes` | method | (self, context=None) | private | `conn.execute( sa.select(sqlfunc.count()).select_from(compute_nodes).where( compute_nodes.c.deleted == 0 ) ).scalars().first()` (src/nova/cmd/status.py:L97) | 1/10 | `src/nova/cmd/status.py:L76–L101` |
| `UpgradeCommands._check_cellsv2` | method | (self) | private | `upgradecheck.Result(upgradecheck.Code.FAILURE, msg)` (src/nova/cmd/status.py:L125); `upgradecheck.Result(upgradecheck.Code.FAILURE, msg)` (src/nova/cmd/status.py:L132); `upgradecheck.Result(upgradecheck.Code.FAILURE, msg)` (src/nova/cmd/status.py:L152); `upgradecheck.Result(upgradecheck.Code.SUCCESS, msg)` (src/nova/cmd/status.py:L157); `upgradecheck.Result(upgradecheck.Code.SUCCESS)` (src/nova/cmd/status.py:L159) | 6/34 | `src/nova/cmd/status.py:L103–L159` |
| `UpgradeCommands._placement_get` | method | (path) | private | `client.get(path, raise_exc=True).json()` (src/nova/cmd/status.py:L170) | 1/3 | `src/nova/cmd/status.py:L162–L170` |
| `UpgradeCommands._check_placement` | method | (self) | private | `upgradecheck.Result(upgradecheck.Code.FAILURE, msg)` (src/nova/cmd/status.py:L189); `upgradecheck.Result(upgradecheck.Code.FAILURE, msg)` (src/nova/cmd/status.py:L192); `upgradecheck.Result(upgradecheck.Code.FAILURE, msg)` (src/nova/cmd/status.py:L195); `upgradecheck.Result(upgradecheck.Code.FAILURE, msg)` (src/nova/cmd/status.py:L198); `upgradecheck.Result(upgradecheck.Code.FAILURE, msg)` (src/nova/cmd/status.py:L201); `upgradecheck.Result(upgradecheck.Code.FAILURE, msg)` (src/nova/cmd/status.py:L204); `upgradecheck.Result(upgradecheck.Code.SUCCESS)` (src/nova/cmd/status.py:L206) | 7/28 | `src/nova/cmd/status.py:L172–L206` |
| `UpgradeCommands._get_cell_mappings` | method | — | private | `cell_mappings` (src/nova/cmd/status.py:L225) | 1/4 | `src/nova/cmd/status.py:L209–L225` |
| `UpgradeCommands._check_cinder` | method | (self) | private | `upgradecheck.Result(upgradecheck.Code.SUCCESS)` (src/nova/cmd/status.py:L234); `upgradecheck.Result( upgradecheck.Code.FAILURE, _('Cinder API %s or greater is required. Deploy at least ' 'Cinder 12.0.0 (Queens).') % MIN_CINDER_MICROVERSION)` (src/nova/cmd/status.py:L242); `upgradecheck.Result( upgradecheck.Code.WARNING, _('Unable to determine Cinder API version due to error: %s') % str(ex))` (src/nova/cmd/status.py:L249); `upgradecheck.Result(upgradecheck.Code.SUCCESS)` (src/nova/cmd/status.py:L253) | 4/17 | `src/nova/cmd/status.py:L227–L253` |
| `UpgradeCommands._check_old_computes` | method | (self) | private | `upgradecheck.Result(upgradecheck.Code.FAILURE, str(e))` (src/nova/cmd/status.py:L261); `upgradecheck.Result(upgradecheck.Code.SUCCESS)` (src/nova/cmd/status.py:L263) | 2/6 | `src/nova/cmd/status.py:L255–L263` |
| `UpgradeCommands._check_machine_type_set` | method | (self) | private | `upgradecheck.Result(upgradecheck.Code.WARNING, msg)` (src/nova/cmd/status.py:L274); `upgradecheck.Result(upgradecheck.Code.SUCCESS)` (src/nova/cmd/status.py:L276) | 2/11 | `src/nova/cmd/status.py:L265–L276` |
| `UpgradeCommands._check_service_user_token` | method | (self) | private | `upgradecheck.Result(upgradecheck.Code.FAILURE, msg)` (src/nova/cmd/status.py:L284); `upgradecheck.Result(upgradecheck.Code.SUCCESS)` (src/nova/cmd/status.py:L285) | 2/8 | `src/nova/cmd/status.py:L278–L285` |
| `UpgradeCommands._upgrade_checks` | field | — | private | not declared | — | `src/nova/cmd/status.py:L294–L312` |
| `CATEGORIES` | constant | — | exported | not declared | — | `src/nova/cmd/status.py:L315–L317` |
| `add_command_parsers` | variable | — | exported | not declared | — | `src/nova/cmd/status.py:L320–L321` |
| `category_opt` | variable | — | exported | not declared | — | `src/nova/cmd/status.py:L324–L327` |
| `main` | function | — | exported | `0` (src/nova/cmd/status.py:L337); `0` (src/nova/cmd/status.py:L341); `ret` (src/nova/cmd/status.py:L346); `255` (src/nova/cmd/status.py:L350) | 4/16 | `src/nova/cmd/status.py:L330–L350` |
| `_at_exit` | function | — | unexported | not declared | 2/4 | `src/nova/cmd/status.py:L358–L361` |
| `UpgradeCommands._placement_get` | staticmethod | — | private | not declared | — | `src/nova/cmd/status.py:L161–L170` |
| `UpgradeCommands._get_cell_mappings` | staticmethod | — | private | not declared | — | `src/nova/cmd/status.py:L208–L225` |

## Dependencies

- `nova`: imports `monkey_patch` (src/nova/cmd/status.py:L19)
- `import atexit` (src/nova/cmd/status.py:L22)
- `import functools` (src/nova/cmd/status.py:L23)
- `import sys` (src/nova/cmd/status.py:L24)
- `import traceback` (src/nova/cmd/status.py:L25)
- `keystoneauth1`: imports `exceptions as ks_exc` (src/nova/cmd/status.py:L27)
- `import microversion_parse` (src/nova/cmd/status.py:L28)
- `oslo_config`: imports `cfg` (src/nova/cmd/status.py:L29)
- `oslo_upgradecheck`: imports `common_checks` (src/nova/cmd/status.py:L30)
- `oslo_upgradecheck`: imports `upgradecheck` (src/nova/cmd/status.py:L31)
- `import sqlalchemy as sa` (src/nova/cmd/status.py:L32)
- `sqlalchemy`: imports `func as sqlfunc` (src/nova/cmd/status.py:L33)
- `nova.cmd`: imports `common as cmd_common` (src/nova/cmd/status.py:L35)
- `import nova.conf` (src/nova/cmd/status.py:L36)
- `nova`: imports `config` (src/nova/cmd/status.py:L37)
- `nova`: imports `context as nova_context` (src/nova/cmd/status.py:L38)
- `nova.db.api`: imports `api as api_db_api` (src/nova/cmd/status.py:L39)
- `nova.db.main`: imports `api as main_db_api` (src/nova/cmd/status.py:L40)
- `nova`: imports `exception` (src/nova/cmd/status.py:L41)
- `nova.i18n`: imports `_` (src/nova/cmd/status.py:L42)
- `nova.objects`: imports `cell_mapping as cell_mapping_obj` (src/nova/cmd/status.py:L43)
- `nova.objects`: imports `image_meta as image_meta_obj` (src/nova/cmd/status.py:L46)
- `nova.objects`: imports `instance as instance_obj` (src/nova/cmd/status.py:L47)
- `nova`: imports `utils` (src/nova/cmd/status.py:L48)
- `nova`: imports `version` (src/nova/cmd/status.py:L49)
- `nova.virt.libvirt`: imports `machine_type_utils` (src/nova/cmd/status.py:L50)
- `nova.volume`: imports `cinder` (src/nova/cmd/status.py:L51)
- `import logging` (src/nova/cmd/status.py:L360)

## Side Effects

- **network**: https://docs.openstack.org/nova/latest/admin/hw-machine-type.html""")) (src/nova/cmd/status.py:L273)
- **network**: https://docs.openstack.org/nova/latest/admin/configuration/service-user-token.html"""))  # noqa (src/nova/cmd/status.py:L283)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/cmd/status.py:L53)
- **global-mutation**: MIN_PLACEMENT_MICROVERSION = "1.36" (src/nova/cmd/status.py:L60)
- **global-mutation**: MIN_CINDER_MICROVERSION = '3.44' (src/nova/cmd/status.py:L64)
- **global-mutation**: CATEGORIES = { (src/nova/cmd/status.py:L315)

## Security Surface

- **privilege** (`crypto-key`): from keystoneauth1 import exceptions as ks_exc (src/nova/cmd/status.py:L27)
- **sink** (`db-write`): sa.select(sqlfunc.count()).select_from(compute_nodes).where( (src/nova/cmd/status.py:L98)
- **sink** (`db-write`): sa.select(sqlfunc.count()).select_from(host_mappings) (src/nova/cmd/status.py:L138)
- **entry-point** (`cli-args`): config.parse_args(sys.argv) (src/nova/cmd/status.py:L333)

