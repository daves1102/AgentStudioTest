# src/nova/api/validation/extra_specs/base.py

## Overview

This file implements the `base` module, defining 1 class, 7 fields, 5 methods, 5 imports.

Lines: total 120, code 82, comment 18, blank 20

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ExtraSpecValidator` | class | — | exported | not declared | — | `src/nova/api/validation/extra_specs/base.py:L25–L120` |
| `ExtraSpecValidator.name` | field | — | public | not declared | — | `src/nova/api/validation/extra_specs/base.py:L26–L26` |
| `ExtraSpecValidator.description` | field | — | public | not declared | — | `src/nova/api/validation/extra_specs/base.py:L27–L27` |
| `ExtraSpecValidator.value` | field | — | public | not declared | — | `src/nova/api/validation/extra_specs/base.py:L28–L28` |
| `ExtraSpecValidator.deprecated` | field | — | public | not declared | — | `src/nova/api/validation/extra_specs/base.py:L29–L29` |
| `ExtraSpecValidator.parameters` | field | — | public | not declared | — | `src/nova/api/validation/extra_specs/base.py:L30–L32` |
| `ExtraSpecValidator.name_regex` | field | — | public | not declared | — | `src/nova/api/validation/extra_specs/base.py:L34–L34` |
| `ExtraSpecValidator.value_regex` | field | — | public | not declared | — | `src/nova/api/validation/extra_specs/base.py:L35–L35` |
| `ExtraSpecValidator.__post_init__` | method | (self) | public | not declared | 5/14 | `src/nova/api/validation/extra_specs/base.py:L37–L60` |
| `ExtraSpecValidator._validate_str` | method | (self, value) | private | not declared | 6/14 | `src/nova/api/validation/extra_specs/base.py:L62–L75` |
| `ExtraSpecValidator._validate_int` | method | (self, value) | private | not declared | 6/17 | `src/nova/api/validation/extra_specs/base.py:L77–L95` |
| `ExtraSpecValidator._validate_bool` | method | (self, value) | private | not declared | 2/8 | `src/nova/api/validation/extra_specs/base.py:L97–L104` |
| `ExtraSpecValidator.validate` | method | (self, name, value) | public | not declared | 4/13 | `src/nova/api/validation/extra_specs/base.py:L106–L120` |

## Dependencies

- `import dataclasses` (src/nova/api/validation/extra_specs/base.py:L15)
- `import re` (src/nova/api/validation/extra_specs/base.py:L16)
- `import typing as ty` (src/nova/api/validation/extra_specs/base.py:L17)
- `oslo_utils`: imports `strutils` (src/nova/api/validation/extra_specs/base.py:L19)
- `nova`: imports `exception` (src/nova/api/validation/extra_specs/base.py:L21)

