# src/nova/api/validation/extra_specs/validators.py

## Overview

This file implements the `validators` module, defining 3 constants, 3 functions, 5 imports, 1 side effect.

Lines: total 83, code 47, comment 18, blank 18

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/api/validation/extra_specs/validators.py:L25–L25` |
| `VALIDATORS` | constant | — | exported | not declared | — | `src/nova/api/validation/extra_specs/validators.py:L27–L27` |
| `NAMESPACES` | constant | — | exported | not declared | — | `src/nova/api/validation/extra_specs/validators.py:L28–L28` |
| `validate` | function | (name, value) | exported | `` (src/nova/api/validation/extra_specs/validators.py:L41); `` (src/nova/api/validation/extra_specs/validators.py:L47); `` (src/nova/api/validation/extra_specs/validators.py:L51); `` (src/nova/api/validation/extra_specs/validators.py:L58) | 7/19 | `src/nova/api/validation/extra_specs/validators.py:L31–L63` |
| `load_validators` | function | — | exported | not declared | 4/12 | `src/nova/api/validation/extra_specs/validators.py:L66–L80` |
| `load_validators._report_load_failure` | function | (mgr, ep, err) | private | not declared | — | `src/nova/api/validation/extra_specs/validators.py:L67–L68` |

## Dependencies

- `import re` (src/nova/api/validation/extra_specs/validators.py:L17)
- `oslo_log`: imports `log as logging` (src/nova/api/validation/extra_specs/validators.py:L19)
- `stevedore`: imports `extension` (src/nova/api/validation/extra_specs/validators.py:L20)
- `nova.api.validation.extra_specs`: imports `base` (src/nova/api/validation/extra_specs/validators.py:L22)
- `nova`: imports `exception` (src/nova/api/validation/extra_specs/validators.py:L23)

## Side Effects

- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/api/validation/extra_specs/validators.py:L25)

