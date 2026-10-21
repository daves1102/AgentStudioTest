# src/nova/tests/functional/wsgi/test_secgroup.py

## Overview

This file implements the `test_secgroup` module, defining 1 class, 2 constants, 1 field, 3 methods, 4 imports, 2 side effects.

Lines: total 89, code 45, comment 25, blank 19

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/tests/functional/wsgi/test_secgroup.py:L21–L21` |
| `SecgroupsFullstack` | class | — | exported | not declared | — | `src/nova/tests/functional/wsgi/test_secgroup.py:L25–L89` |
| `SecgroupsFullstack.REQUIRES_LOCKING` | constant | — | public | not declared | — | `src/nova/tests/functional/wsgi/test_secgroup.py:L33–L33` |
| `SecgroupsFullstack.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/wsgi/test_secgroup.py:L38–L42` |
| `SecgroupsFullstack.setUp` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/wsgi/test_secgroup.py:L44–L50` |
| `SecgroupsFullstack._build_minimal_create_server_request` | method | (self, name) | private | `server` (src/nova/tests/functional/wsgi/test_secgroup.py:L73) | 2/14 | `src/nova/tests/functional/wsgi/test_secgroup.py:L54–L73` |
| `SecgroupsFullstack.test_security_group_fuzz` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/wsgi/test_secgroup.py:L75–L89` |

## Dependencies

- `oslo_log`: imports `log as logging` (src/nova/tests/functional/wsgi/test_secgroup.py:L15)
- `import testscenarios` (src/nova/tests/functional/wsgi/test_secgroup.py:L16)
- `nova`: imports `test` (src/nova/tests/functional/wsgi/test_secgroup.py:L18)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/functional/wsgi/test_secgroup.py:L19)

## Side Effects

- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/tests/functional/wsgi/test_secgroup.py:L21)
- **global-mutation**: REQUIRES_LOCKING = True (src/nova/tests/functional/wsgi/test_secgroup.py:L33)

