# src/nova/wsgi/osapi_compute.py

## Overview

This file implements the `osapi_compute` module, defining 2 constants, 3 variables, 3 imports, 2 side effects.

Lines: total 29, code 11, comment 13, blank 5

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `NAME` | constant | — | exported | not declared | — | `src/nova/wsgi/osapi_compute.py:L22–L22` |
| `PROG` | constant | — | exported | not declared | — | `src/nova/wsgi/osapi_compute.py:L23–L23` |
| `application` | variable | — | exported | not declared | — | `src/nova/wsgi/osapi_compute.py:L25–L25` |
| `lock` | variable | — | exported | not declared | — | `src/nova/wsgi/osapi_compute.py:L26–L26` |
| `application` | variable | — | exported | not declared | — | `src/nova/wsgi/osapi_compute.py:L29–L29` |

## Dependencies

- `nova`: imports `monkey_patch` (src/nova/wsgi/osapi_compute.py:L15)
- `import threading` (src/nova/wsgi/osapi_compute.py:L18)
- `nova.api.openstack`: imports `wsgi_app` (src/nova/wsgi/osapi_compute.py:L20)

## Side Effects

- **global-mutation**: NAME = "osapi_compute" (src/nova/wsgi/osapi_compute.py:L22)
- **global-mutation**: PROG = "nova-api-os-compute" (src/nova/wsgi/osapi_compute.py:L23)

