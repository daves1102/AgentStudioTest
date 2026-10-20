# src/nova/cmd/scheduler.py

## Overview

This file implements the `scheduler` module, defining 1 constant, 1 function, 13 imports, 1 side effect, 1 security surface entry.

Lines: total 66, code 28, comment 27, blank 11

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/cmd/scheduler.py:L37–L37` |
| `main` | function | — | exported | not declared | 2/13 | `src/nova/cmd/scheduler.py:L40–L66` |

## Dependencies

- `nova`: imports `monkey_patch` (src/nova/cmd/scheduler.py:L19)
- `import sys` (src/nova/cmd/scheduler.py:L22)
- `oslo_concurrency`: imports `processutils` (src/nova/cmd/scheduler.py:L24)
- `oslo_log`: imports `log as logging` (src/nova/cmd/scheduler.py:L25)
- `oslo_reports`: imports `guru_meditation_report as gmr` (src/nova/cmd/scheduler.py:L26)
- `oslo_reports`: imports `opts as gmr_opts` (src/nova/cmd/scheduler.py:L27)
- `import nova.conf` (src/nova/cmd/scheduler.py:L29)
- `nova`: imports `config` (src/nova/cmd/scheduler.py:L30)
- `nova`: imports `objects` (src/nova/cmd/scheduler.py:L31)
- `nova.scheduler`: imports `rpcapi` (src/nova/cmd/scheduler.py:L32)
- `nova`: imports `service` (src/nova/cmd/scheduler.py:L33)
- `nova`: imports `thread_pool_factory` (src/nova/cmd/scheduler.py:L34)
- `nova`: imports `version` (src/nova/cmd/scheduler.py:L35)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/cmd/scheduler.py:L37)

## Security Surface

- **entry-point** (`cli-args`): config.parse_args(sys.argv) (src/nova/cmd/scheduler.py:L41)

