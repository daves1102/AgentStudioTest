# src/nova/virt/storage_users.py

## Overview

This file implements the `storage_users` module, defining 3 constants, 4 functions, 6 imports, 14 side effects, 2 security surface entries.

Lines: total 102, code 49, comment 29, blank 24

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/virt/storage_users.py:L25–L25` |
| `CONF` | constant | — | exported | not declared | — | `src/nova/virt/storage_users.py:L28–L28` |
| `TWENTY_FOUR_HOURS` | constant | — | exported | not declared | — | `src/nova/virt/storage_users.py:L29–L29` |
| `register_storage_use` | function | (storage_path, hostname) | exported | `do_register_storage_use(storage_path, hostname)` (src/nova/virt/storage_users.py:L72) | 1/6 | `src/nova/virt/storage_users.py:L45–L72` |
| `register_storage_use.do_register_storage_use` | function | (storage_path, hostname) | public | not declared | — | `src/nova/virt/storage_users.py:L52–L70` |
| `get_storage_users` | function | (storage_path) | exported | `do_get_storage_users(storage_path)` (src/nova/virt/storage_users.py:L102) | 1/6 | `src/nova/virt/storage_users.py:L75–L102` |
| `get_storage_users.do_get_storage_users` | function | (storage_path) | public | `recent_users` (src/nova/virt/storage_users.py:L100) | — | `src/nova/virt/storage_users.py:L84–L100` |

## Dependencies

- `import os` (src/nova/virt/storage_users.py:L16)
- `import time` (src/nova/virt/storage_users.py:L17)
- `oslo_config`: imports `cfg` (src/nova/virt/storage_users.py:L19)
- `oslo_log`: imports `log as logging` (src/nova/virt/storage_users.py:L20)
- `oslo_serialization`: imports `jsonutils` (src/nova/virt/storage_users.py:L21)
- `nova`: imports `utils` (src/nova/virt/storage_users.py:L23)

## Side Effects

- **file-io**: LOCK_PATH = os.path.join(CONF.instances_path, 'locks') (src/nova/virt/storage_users.py:L48)
- **file-io**: id_path = os.path.join(storage_path, 'compute_nodes') (src/nova/virt/storage_users.py:L58)
- **file-io**: if os.path.exists(id_path): (src/nova/virt/storage_users.py:L59)
- **file-io**: with open(id_path) as f: (src/nova/virt/storage_users.py:L60)
- **file-io**: with open(id_path, 'w') as f: (src/nova/virt/storage_users.py:L69)
- **file-io**: LOCK_PATH = os.path.join(CONF.instances_path, 'locks') (src/nova/virt/storage_users.py:L80)
- **file-io**: id_path = os.path.join(storage_path, 'compute_nodes') (src/nova/virt/storage_users.py:L86)
- **file-io**: if os.path.exists(id_path): (src/nova/virt/storage_users.py:L87)
- **file-io**: with open(id_path) as f: (src/nova/virt/storage_users.py:L88)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/virt/storage_users.py:L25)
- **global-mutation**: CONF = cfg.CONF (src/nova/virt/storage_users.py:L28)
- **global-mutation**: TWENTY_FOUR_HOURS = 3600 * 24 (src/nova/virt/storage_users.py:L29)
- **global-mutation**: LOCK_PATH = os.path.join(CONF.instances_path, 'locks') (src/nova/virt/storage_users.py:L48)
- **global-mutation**: LOCK_PATH = os.path.join(CONF.instances_path, 'locks') (src/nova/virt/storage_users.py:L80)

## Security Surface

- **sink** (`file-write`): with open(id_path, 'w') as f: (src/nova/virt/storage_users.py:L69)
- **sink** (`file-write`): f.write(jsonutils.dumps(d)) (src/nova/virt/storage_users.py:L70)

