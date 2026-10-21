# src/nova/wsgi/metadata.py

## Overview

This file implements the `metadata` module, defining 2 constants, 3 variables, 3 imports, 2 side effects.

Lines: total 29, code 11, comment 13, blank 5

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `NAME` | constant | — | exported | not declared | — | `src/nova/wsgi/metadata.py:L22–L22` |
| `PROG` | constant | — | exported | not declared | — | `src/nova/wsgi/metadata.py:L23–L23` |
| `application` | variable | — | exported | not declared | — | `src/nova/wsgi/metadata.py:L25–L25` |
| `lock` | variable | — | exported | not declared | — | `src/nova/wsgi/metadata.py:L26–L26` |
| `application` | variable | — | exported | not declared | — | `src/nova/wsgi/metadata.py:L29–L29` |

## Dependencies

- `nova`: imports `monkey_patch` (src/nova/wsgi/metadata.py:L15)
- `import threading` (src/nova/wsgi/metadata.py:L18)
- `nova.api.openstack`: imports `wsgi_app` (src/nova/wsgi/metadata.py:L20)

## Side Effects

- **global-mutation**: NAME = "metadata" (src/nova/wsgi/metadata.py:L22)
- **global-mutation**: PROG = "nova-api-metadata" (src/nova/wsgi/metadata.py:L23)

