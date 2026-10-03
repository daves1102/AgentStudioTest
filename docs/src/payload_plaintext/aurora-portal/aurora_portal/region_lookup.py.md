# src/payload_plaintext/aurora-portal/aurora_portal/region_lookup.py

## Overview

`region_lookup.py` retrieves the region assignment for a given project from a database table named `tenant_region_assignment`. It exposes a single function `region_for()` that accepts a database cursor and a project identifier, constructs and executes a raw SQL SELECT query, and returns the matching `region` and `note` fields as a dictionary, or `None` if no row is found. The table name is held in a module-level constant `TABLE`. The module has no external library imports; it operates entirely through the caller-supplied cursor object.

## Defined Symbols

| Name | Kind | Signature | Visibility | Lines |
|---|---|---|---|---|
| `TABLE` | module-level constant | `str` | module | `region_lookup.py:L6` |
| `region_for` | function | `(cursor: Any, project: str) -> dict \| None` | module | `region_lookup.py:L9–L14` |

## Dependencies

No external module imports.

## Side Effects

- **Database query:** `region_for` executes a SELECT against table `tenant_region_assignment` via the caller-supplied `cursor` object (`region_lookup.py:L10–L12`)

## Security Surface

- **SQL injection:** `region_for()` builds the SELECT query by `'%s' % project` string interpolation, inserting the caller-supplied `project` value directly into the SQL string without parameterisation — a crafted project value can break out of the quoted literal and alter query semantics (`region_lookup.py:L10–L12`)
- **Input entry point — function parameter:** `region_for(cursor, project)`: `project` is caller-supplied and used unescaped in a raw SQL string (`region_lookup.py:L9`)
