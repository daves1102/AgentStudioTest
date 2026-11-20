## Overview

Source file `src/aurora/aurora-portal/aurora_portal/publisher.py` written in Python within the `aurora-portal` component . It contains 6 defined symbol(s).


Lines: total 32, code 21, comment 2, blank 9

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `Publisher` | class | `Publisher` | — | — | — | L7–L28 (src/aurora/aurora-portal/aurora_portal/publisher.py:L7–L28) |
| `__init__` | method | `__init__(self, options)` | — | — | 2/3 | L10–L12 (src/aurora/aurora-portal/aurora_portal/publisher.py:L10–L12) |
| `handle` | method | `handle(self, payload)` | — | `{key: self.transform(value) for key, value in payload.items()}` (L18) | 3/5 | L14–L18 (src/aurora/aurora-portal/aurora_portal/publisher.py:L14–L18) |
| `transform` | method | `transform(self, value)` | — | `value.strip()` (L22), `[self.transform(item) for item in value]` (L24), `value` (L25) | 4/6 | L20–L25 (src/aurora/aurora-portal/aurora_portal/publisher.py:L20–L25) |
| `stats` | method | `stats(self)` | — | `{"processed": self.processed, "options": len(self.options)}` (L28) | 1/2 | L27–L28 (src/aurora/aurora-portal/aurora_portal/publisher.py:L27–L28) |
| `build` | function | `build(options)` | — | `Publisher(options)` (L32) | 1/2 | L31–L32 (src/aurora/aurora-portal/aurora_portal/publisher.py:L31–L32) |

## Dependencies

None.
