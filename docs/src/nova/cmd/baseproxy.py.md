# src/nova/cmd/baseproxy.py

## Overview

This file implements the `baseproxy` module, defining 1 constant, 2 functions, 12 imports, 3 side effects, 1 security surface entry.

Lines: total 96, code 54, comment 25, blank 17

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/cmd/baseproxy.py:L38–L38` |
| `exit_with_error` | function | (msg, errno=-1) | exported | not declared | 1/3 | `src/nova/cmd/baseproxy.py:L46–L48` |
| `proxy` | function | (host, port, security_proxy=None) | exported | not declared | 6/25 | `src/nova/cmd/baseproxy.py:L51–L96` |

## Dependencies

- `nova`: imports `monkey_patch` (src/nova/cmd/baseproxy.py:L20)
- `import multiprocessing` (src/nova/cmd/baseproxy.py:L23)
- `import os` (src/nova/cmd/baseproxy.py:L24)
- `import sys` (src/nova/cmd/baseproxy.py:L25)
- `oslo_log`: imports `log as logging` (src/nova/cmd/baseproxy.py:L27)
- `oslo_reports`: imports `guru_meditation_report as gmr` (src/nova/cmd/baseproxy.py:L28)
- `oslo_reports`: imports `opts as gmr_opts` (src/nova/cmd/baseproxy.py:L29)
- `import nova.conf` (src/nova/cmd/baseproxy.py:L31)
- `nova.conf`: imports `novnc` (src/nova/cmd/baseproxy.py:L32)
- `nova.console`: imports `websocketproxy` (src/nova/cmd/baseproxy.py:L33)
- `nova`: imports `objects` (src/nova/cmd/baseproxy.py:L34)
- `nova`: imports `version` (src/nova/cmd/baseproxy.py:L35)

## Side Effects

- **file-io**: if CONF.ssl_only and not os.path.exists(CONF.cert): (src/nova/cmd/baseproxy.py:L62)
- **file-io**: if CONF.web and not os.path.exists(CONF.web): (src/nova/cmd/baseproxy.py:L66)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/cmd/baseproxy.py:L38)

## Security Surface

- **sink** (`file-write`): sys.stderr.write(msg + '\n') (src/nova/cmd/baseproxy.py:L47)

