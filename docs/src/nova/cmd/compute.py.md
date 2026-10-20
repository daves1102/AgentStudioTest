# src/nova/cmd/compute.py

## Overview

This file implements the `compute` module, defining 2 constants, 1 function, 20 imports, 2 side effects, 1 security surface entry.

Lines: total 80, code 44, comment 27, blank 9

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/cmd/compute.py:L44–L44` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/cmd/compute.py:L45–L45` |
| `main` | function | — | exported | not declared | 3/21 | `src/nova/cmd/compute.py:L48–L80` |

## Dependencies

- `nova`: imports `monkey_patch` (src/nova/cmd/compute.py:L19)
- `import shlex` (src/nova/cmd/compute.py:L22)
- `import sys` (src/nova/cmd/compute.py:L23)
- `import os_brick` (src/nova/cmd/compute.py:L25)
- `import os_vif` (src/nova/cmd/compute.py:L26)
- `oslo_log`: imports `log as logging` (src/nova/cmd/compute.py:L27)
- `oslo_privsep`: imports `priv_context` (src/nova/cmd/compute.py:L28)
- `oslo_reports`: imports `guru_meditation_report as gmr` (src/nova/cmd/compute.py:L29)
- `oslo_reports`: imports `opts as gmr_opts` (src/nova/cmd/compute.py:L30)
- `oslo_service`: imports `opts as oslo_svc_opts` (src/nova/cmd/compute.py:L31)
- `nova.compute`: imports `rpcapi as compute_rpcapi` (src/nova/cmd/compute.py:L33)
- `nova.conductor`: imports `rpcapi as conductor_rpcapi` (src/nova/cmd/compute.py:L34)
- `import nova.conf` (src/nova/cmd/compute.py:L35)
- `nova`: imports `config` (src/nova/cmd/compute.py:L36)
- `import nova.db.main.api` (src/nova/cmd/compute.py:L37)
- `nova`: imports `objects` (src/nova/cmd/compute.py:L38)
- `nova.objects`: imports `base as objects_base` (src/nova/cmd/compute.py:L39)
- `nova`: imports `service` (src/nova/cmd/compute.py:L40)
- `nova`: imports `utils` (src/nova/cmd/compute.py:L41)
- `nova`: imports `version` (src/nova/cmd/compute.py:L42)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/cmd/compute.py:L44)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/cmd/compute.py:L45)

## Security Surface

- **entry-point** (`cli-args`): config.parse_args(sys.argv) (src/nova/cmd/compute.py:L49)

