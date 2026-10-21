# src/nova/tests/unit/api/test_wsgi_loader.py

## Overview

This file implements the `test_wsgi_loader` module, defining 1 class, 1 method, 5 imports, 1 side effect.

Lines: total 39, code 17, comment 16, blank 6

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `TestInitApplication` | class | — | exported | not declared | — | `src/nova/tests/unit/api/test_wsgi_loader.py:L26–L39` |
| `TestInitApplication.test_init_application_passes_sys_argv_to_config` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/test_wsgi_loader.py:L30–L39` |

## Dependencies

- `import sys` (src/nova/tests/unit/api/test_wsgi_loader.py:L18)
- `unittest`: imports `mock` (src/nova/tests/unit/api/test_wsgi_loader.py:L19)
- `nova.api.openstack`: imports `wsgi_app` (src/nova/tests/unit/api/test_wsgi_loader.py:L21)
- `nova`: imports `test` (src/nova/tests/unit/api/test_wsgi_loader.py:L22)
- `nova`: imports `utils` (src/nova/tests/unit/api/test_wsgi_loader.py:L23)

## Side Effects

- **network**: @mock.patch('nova.api.openstack.wsgi_app._setup_service', new=mock.Mock()) (src/nova/tests/unit/api/test_wsgi_loader.py:L28)

