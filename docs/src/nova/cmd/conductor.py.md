# src/nova/cmd/conductor.py

## Overview

This file implements the `conductor` module, defining 1 constant, 1 function, 13 imports, 1 side effect, 1 security surface entry.

Lines: total 53, code 28, comment 15, blank 10

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/cmd/conductor.py:L35–L35` |
| `main` | function | — | exported | not declared | 2/13 | `src/nova/cmd/conductor.py:L38–L53` |

## Dependencies

- `nova`: imports `monkey_patch` (src/nova/cmd/conductor.py:L17)
- `import sys` (src/nova/cmd/conductor.py:L20)
- `oslo_concurrency`: imports `processutils` (src/nova/cmd/conductor.py:L22)
- `oslo_log`: imports `log as logging` (src/nova/cmd/conductor.py:L23)
- `oslo_reports`: imports `guru_meditation_report as gmr` (src/nova/cmd/conductor.py:L24)
- `oslo_reports`: imports `opts as gmr_opts` (src/nova/cmd/conductor.py:L25)
- `nova.conductor`: imports `rpcapi` (src/nova/cmd/conductor.py:L27)
- `import nova.conf` (src/nova/cmd/conductor.py:L28)
- `nova`: imports `config` (src/nova/cmd/conductor.py:L29)
- `nova`: imports `objects` (src/nova/cmd/conductor.py:L30)
- `nova`: imports `service` (src/nova/cmd/conductor.py:L31)
- `nova`: imports `thread_pool_factory` (src/nova/cmd/conductor.py:L32)
- `nova`: imports `version` (src/nova/cmd/conductor.py:L33)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/cmd/conductor.py:L35)

## Security Surface

- **entry-point** (`cli-args`): config.parse_args(sys.argv) (src/nova/cmd/conductor.py:L39)

