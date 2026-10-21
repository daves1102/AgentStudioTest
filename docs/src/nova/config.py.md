# src/nova/config.py

## Overview

This file implements the `config` module, defining 1 constant, 4 functions, 1 variable, 9 imports, 3 side effects, 1 security surface entry.

Lines: total 106, code 52, comment 28, blank 26

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `profiler` | variable | — | exported | not declared | — | `src/nova/config.py:L30–L30` |
| `CONF` | constant | — | exported | not declared | — | `src/nova/config.py:L33–L33` |
| `set_lib_defaults` | function | — | exported | not declared | 1/4 | `src/nova/config.py:L36–L53` |
| `rabbit_heartbeat_filter` | function | (log_record) | exported | `message not in log_record.msg` (src/nova/config.py:L58) | 1/3 | `src/nova/config.py:L56–L58` |
| `set_log_defaults` | function | — | exported | not declared | 3/10 | `src/nova/config.py:L61–L78` |
| `parse_args` | function | (argv, default_config_files=None, configure_db=True, init_rpc=True, prog=None) | exported | not declared | 4/18 | `src/nova/config.py:L81–L106` |

## Dependencies

- `import logging` (src/nova/config.py:L18)
- `oslo_log`: imports `log` (src/nova/config.py:L20)
- `oslo_utils`: imports `importutils` (src/nova/config.py:L21)
- `import nova.conf` (src/nova/config.py:L23)
- `nova.db.api`: imports `api as api_db_api` (src/nova/config.py:L24)
- `nova.db.main`: imports `api as main_db_api` (src/nova/config.py:L25)
- `nova`: imports `middleware` (src/nova/config.py:L26)
- `nova`: imports `rpc` (src/nova/config.py:L27)
- `nova`: imports `version` (src/nova/config.py:L28)

## Side Effects

- **network**: https://docs.openstack.org/oslo.config/latest/cli/ (src/nova/config.py:L41)
- **process-spawn**: extra_default_log_levels.append('oslo.privsep.daemon=INFO') (src/nova/config.py:L75)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/config.py:L33)

## Security Surface

- **sink** (`db-write`): """Update default value for configuration options from other namespace. (src/nova/config.py:L37)

