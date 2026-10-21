# src/nova/tests/unit/image/fake.py

## Overview

This file implements the `fake` module, defining 2 constants, 1 function, 3 imports, 2 side effects, 2 security surface entries.

Lines: total 50, code 25, comment 17, blank 8

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/unit/image/fake.py:L24–L24` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/tests/unit/image/fake.py:L25–L25` |
| `fake_image_obj` | function | (default_image_meta=None, default_image_props=None, variable_image_props=None) | exported | `objects.ImageMeta.from_dict(test_image_meta)` (src/nova/tests/unit/image/fake.py:L50) | 5/12 | `src/nova/tests/unit/image/fake.py:L28–L50` |

## Dependencies

- `oslo_log`: imports `log as logging` (src/nova/tests/unit/image/fake.py:L19)
- `import nova.conf` (src/nova/tests/unit/image/fake.py:L21)
- `nova`: imports `objects` (src/nova/tests/unit/image/fake.py:L22)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/tests/unit/image/fake.py:L24)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/tests/unit/image/fake.py:L25)

## Security Surface

- **sink** (`db-write`): image_meta_props.update(variable_image_props) (src/nova/tests/unit/image/fake.py:L39)
- **sink** (`db-write`): test_image_meta.update({ (src/nova/tests/unit/image/fake.py:L46)

