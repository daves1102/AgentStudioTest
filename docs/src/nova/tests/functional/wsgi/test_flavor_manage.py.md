# src/nova/tests/functional/wsgi/test_flavor_manage.py

## Overview

This file implements the `test_flavor_manage` module, defining 1 class, 2 fields, 1 function, 9 methods, 7 imports, 1 security surface entry.

Lines: total 256, code 161, comment 43, blank 52

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `rand_flavor` | function | (**kwargs) | exported | `flav` (src/nova/tests/functional/wsgi/test_flavor_manage.py:L36) | 1/10 | `src/nova/tests/functional/wsgi/test_flavor_manage.py:L27–L36` |
| `FlavorManageFullstack` | class | — | exported | not declared | — | `src/nova/tests/functional/wsgi/test_flavor_manage.py:L39–L256` |
| `FlavorManageFullstack._additional_fixtures` | field | — | private | not declared | — | `src/nova/tests/functional/wsgi/test_flavor_manage.py:L76–L76` |
| `FlavorManageFullstack.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/wsgi/test_flavor_manage.py:L78–L81` |
| `FlavorManageFullstack.setUp` | method | (self) | public | not declared | 2/10 | `src/nova/tests/functional/wsgi/test_flavor_manage.py:L83–L98` |
| `FlavorManageFullstack.assertFlavorDbEqual` | method | (self, flav, flavdb) | public | not declared | 3/13 | `src/nova/tests/functional/wsgi/test_flavor_manage.py:L100–L113` |
| `FlavorManageFullstack.assertFlavorAPIEqual` | method | (self, flav, flavapi) | public | not declared | 3/7 | `src/nova/tests/functional/wsgi/test_flavor_manage.py:L115–L123` |
| `FlavorManageFullstack.assertFlavorInList` | method | (self, flav, flavlist) | public | `` (src/nova/tests/functional/wsgi/test_flavor_manage.py:L129) | 3/6 | `src/nova/tests/functional/wsgi/test_flavor_manage.py:L125–L130` |
| `FlavorManageFullstack.assertFlavorNotInList` | method | (self, flav, flavlist) | public | not declared | 3/4 | `src/nova/tests/functional/wsgi/test_flavor_manage.py:L132–L135` |
| `FlavorManageFullstack.test_flavor_manage_func_negative` | method | (self) | public | not declared | 1/20 | `src/nova/tests/functional/wsgi/test_flavor_manage.py:L137–L178` |
| `FlavorManageFullstack.test_flavor_manage_deleted` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/wsgi/test_flavor_manage.py:L180–L194` |
| `FlavorManageFullstack.test_flavor_manage_func` | method | (self) | public | not declared | 1/17 | `src/nova/tests/functional/wsgi/test_flavor_manage.py:L196–L229` |
| `FlavorManageFullstack.test_flavor_manage_permissions` | method | (self) | public | not declared | 1/14 | `src/nova/tests/functional/wsgi/test_flavor_manage.py:L231–L256` |

## Dependencies

- `import testscenarios` (src/nova/tests/functional/wsgi/test_flavor_manage.py:L17)
- `nova`: imports `context` (src/nova/tests/functional/wsgi/test_flavor_manage.py:L19)
- `nova`: imports `exception as ex` (src/nova/tests/functional/wsgi/test_flavor_manage.py:L20)
- `nova`: imports `objects` (src/nova/tests/functional/wsgi/test_flavor_manage.py:L21)
- `nova`: imports `test` (src/nova/tests/functional/wsgi/test_flavor_manage.py:L22)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/functional/wsgi/test_flavor_manage.py:L23)
- `nova.tests.functional`: imports `integrated_helpers as helper` (src/nova/tests/functional/wsgi/test_flavor_manage.py:L24)

## Security Surface

- **sink** (`db-write`): flav.update(kwargs) (src/nova/tests/functional/wsgi/test_flavor_manage.py:L35)

