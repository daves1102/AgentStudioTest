# src/nova/monkey_patch.py

## Overview

This file implements the `monkey_patch` module, defining 1 class, 1 constant, 6 functions, 1 method, 9 imports, 6 side effects, 4 security surface entries.

Lines: total 200, code 115, comment 54, blank 31

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `MONKEY_PATCHED` | constant | — | exported | not declared | — | `src/nova/monkey_patch.py:L24–L24` |
| `_config_file_args` | function | (argv) | unexported | `result` (src/nova/monkey_patch.py:L46) | 6/14 | `src/nova/monkey_patch.py:L27–L46` |
| `_get_concurrency_from_config` | function | — | unexported | `conf.concurrency_backend` (src/nova/monkey_patch.py:L69) | 1/11 | `src/nova/monkey_patch.py:L49–L69` |
| `is_patched` | function | — | exported | `MONKEY_PATCHED` (src/nova/monkey_patch.py:L73) | 1/2 | `src/nova/monkey_patch.py:L72–L73` |
| `_monkey_patch` | function | — | unexported | `False` (src/nova/monkey_patch.py:L78); `True` (src/nova/monkey_patch.py:L117) | 3/16 | `src/nova/monkey_patch.py:L76–L117` |
| `patch` | function | (backend='eventlet') | exported | not declared | 8/40 | `src/nova/monkey_patch.py:L120–L180` |
| `poison_eventlet` | function | — | exported | not declared | 2/11 | `src/nova/monkey_patch.py:L183–L200` |
| `poison_eventlet.PoisonEventletImport` | class | — | public | not declared | — | `src/nova/monkey_patch.py:L193–L198` |
| `poison_eventlet.PoisonEventletImport.find_spec` | method | (self, fullname, path, target=None) | public | not declared | — | `src/nova/monkey_patch.py:L194–L198` |

## Dependencies

- `import os` (src/nova/monkey_patch.py:L21)
- `import sys` (src/nova/monkey_patch.py:L22)
- `oslo_config`: imports `cfg` (src/nova/monkey_patch.py:L59)
- `import eventlet` (src/nova/monkey_patch.py:L85)
- `oslo_log`: imports `log as logging` (src/nova/monkey_patch.py:L108)
- `import oslo_service.backend as service` (src/nova/monkey_patch.py:L155)
- `oslo_log`: imports `log as logging` (src/nova/monkey_patch.py:L157)
- `import oslo_service.backend as service` (src/nova/monkey_patch.py:L173)
- `oslo_log`: imports `log as logging` (src/nova/monkey_patch.py:L178)

## Side Effects

- **network**: "https://docs.openstack.org/nova/latest/admin/concurrency" (src/nova/monkey_patch.py:L165)
- **global-mutation**: MONKEY_PATCHED = False (src/nova/monkey_patch.py:L24)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/monkey_patch.py:L110)
- **global-mutation**: MONKEY_PATCHED = True (src/nova/monkey_patch.py:L153)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/monkey_patch.py:L158)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/monkey_patch.py:L179)

## Security Surface

- **entry-point** (`cli-args`): conf(_config_file_args(sys.argv[1:])) (src/nova/monkey_patch.py:L68)
- **entry-point** (`env`): env = os.environ.get('OS_NOVA_DISABLE_EVENTLET_PATCHING', '').lower() (src/nova/monkey_patch.py:L134)
- **entry-point** (`env`): % os.environ.get('OS_NOVA_DISABLE_EVENTLET_PATCHING', '')) (src/nova/monkey_patch.py:L191)
- **sink** (`db-write`): sys.meta_path.insert(0, PoisonEventletImport()) (src/nova/monkey_patch.py:L200)

