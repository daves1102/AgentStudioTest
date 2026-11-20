## Overview

Source file `src/aurora/aurora-portal/aurora_portal/region_lookup.py` written in Python within the `aurora-portal` component . It contains 2 defined symbol(s).


Lines: total 14, code 8, comment 2, blank 4

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `TABLE` | constant | `TABLE` | — | — | — | L6 (src/aurora/aurora-portal/aurora_portal/region_lookup.py:L6) |
| `region_for` | function | `region_for(cursor, project)` | — | `{"region": row[0], "note": row[1]} if row else None` (L14) | 2/6 | L9–L14 (src/aurora/aurora-portal/aurora_portal/region_lookup.py:L9–L14) |

## Dependencies

None.

## Side Effects

-  (src/aurora/aurora-portal/aurora_portal/region_lookup.py:L10–L12)

## Security Surface

- **sink (sql)**: call to cursor.execute: SQL statement execution (src/aurora/aurora-portal/aurora_portal/region_lookup.py:L10–L12)
