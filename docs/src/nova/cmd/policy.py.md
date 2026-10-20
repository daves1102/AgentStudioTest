# src/nova/cmd/policy.py

## Overview

This file implements the `policy` module, defining 1 class, 2 constants, 1 field, 2 functions, 4 methods, 3 variables, 17 imports, 2 side effects, 4 security surface entries.

Lines: total 192, code 138, comment 21, blank 33

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/cmd/policy.py:L41–L41` |
| `cli_opts` | variable | — | exported | not declared | — | `src/nova/cmd/policy.py:L44–L60` |
| `PolicyCommands` | class | — | exported | not declared | — | `src/nova/cmd/policy.py:L63–L143` |
| `PolicyCommands._ACCEPTABLE_TARGETS` | field | — | private | not declared | — | `src/nova/cmd/policy.py:L66–L68` |
| `PolicyCommands.check` | method | (self, api_name=None, target=None) | public | `0` (src/nova/cmd/policy.py:L98); `1` (src/nova/cmd/policy.py:L101) | 3/11 | `src/nova/cmd/policy.py:L88–L101` |
| `PolicyCommands._get_context` | method | (self) | private | `nova_context.RequestContext( roles=CONF.os_roles, user_id=CONF.os_user_id, project_id=CONF.os_tenant_id)` (src/nova/cmd/policy.py:L104) | 1/5 | `src/nova/cmd/policy.py:L103–L107` |
| `PolicyCommands._get_target` | method | (self, context, target) | private | `None` (src/nova/cmd/policy.py:L121); `new_target` (src/nova/cmd/policy.py:L138) | 5/16 | `src/nova/cmd/policy.py:L109–L138` |
| `PolicyCommands._filter_rules` | method | (self, context, api_name, target) | private | `[rule.name for rule in all_rules if api_name in rule.name and context.can(rule.name, target, fatal=False)]` (src/nova/cmd/policy.py:L142) | 4/4 | `src/nova/cmd/policy.py:L140–L143` |
| `CATEGORIES` | constant | — | exported | not declared | — | `src/nova/cmd/policy.py:L146–L148` |
| `add_command_parsers` | variable | — | exported | not declared | — | `src/nova/cmd/policy.py:L151–L152` |
| `category_opt` | variable | — | exported | not declared | — | `src/nova/cmd/policy.py:L155–L158` |
| `main` | function | — | exported | `0` (src/nova/cmd/policy.py:L169); `0` (src/nova/cmd/policy.py:L173); `ret` (src/nova/cmd/policy.py:L178); `1` (src/nova/cmd/policy.py:L181) | 4/17 | `src/nova/cmd/policy.py:L161–L181` |
| `_at_exit` | function | — | unexported | not declared | 2/4 | `src/nova/cmd/policy.py:L189–L192` |

## Dependencies

- `nova`: imports `monkey_patch` (src/nova/cmd/policy.py:L20)
- `import atexit` (src/nova/cmd/policy.py:L23)
- `import functools` (src/nova/cmd/policy.py:L24)
- `import os` (src/nova/cmd/policy.py:L25)
- `import sys` (src/nova/cmd/policy.py:L26)
- `oslo_config`: imports `cfg` (src/nova/cmd/policy.py:L28)
- `nova.cmd`: imports `common as cmd_common` (src/nova/cmd/policy.py:L30)
- `import nova.conf` (src/nova/cmd/policy.py:L31)
- `nova`: imports `config` (src/nova/cmd/policy.py:L32)
- `nova`: imports `context as nova_context` (src/nova/cmd/policy.py:L33)
- `nova.db.main`: imports `api as db` (src/nova/cmd/policy.py:L34)
- `nova`: imports `exception` (src/nova/cmd/policy.py:L35)
- `nova.i18n`: imports `_` (src/nova/cmd/policy.py:L36)
- `nova`: imports `policies` (src/nova/cmd/policy.py:L37)
- `nova`: imports `utils` (src/nova/cmd/policy.py:L38)
- `nova`: imports `version` (src/nova/cmd/policy.py:L39)
- `import logging` (src/nova/cmd/policy.py:L191)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/cmd/policy.py:L41)
- **global-mutation**: CATEGORIES = { (src/nova/cmd/policy.py:L146)

## Security Surface

- **entry-point** (`env`): default=os.environ.get('OS_ROLES'), (src/nova/cmd/policy.py:L48)
- **entry-point** (`env`): default=os.environ.get('OS_USER_ID'), (src/nova/cmd/policy.py:L53)
- **entry-point** (`env`): default=os.environ.get('OS_TENANT_ID'), (src/nova/cmd/policy.py:L58)
- **entry-point** (`cli-args`): config.parse_args(sys.argv) (src/nova/cmd/policy.py:L165)

