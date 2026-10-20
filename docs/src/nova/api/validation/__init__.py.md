# src/nova/api/validation/\_\_init\_\_.py

## Overview

This file implements the `__init__` module, defining 1 class, 1 classmethod, 2 constants, 12 functions, 5 methods, 12 imports, 2 side effects, 1 security surface entry.

Lines: total 452, code 298, comment 78, blank 76

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/api/validation/__init__.py:L34–L34` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/api/validation/__init__.py:L35–L35` |
| `validated` | function | (cls) | exported | `cls` (src/nova/api/validation/__init__.py:L40) | 1/3 | `src/nova/api/validation/__init__.py:L38–L40` |
| `Schemas` | class | — | exported | not declared | — | `src/nova/api/validation/__init__.py:L43–L147` |
| `Schemas.__init__` | method | (self) | public | not declared | 1/8 | `src/nova/api/validation/__init__.py:L49–L56` |
| `Schemas.add_schema` | method | (self, schema, min_version, max_version) | public | not declared | 1/15 | `src/nova/api/validation/__init__.py:L58–L75` |
| `Schemas._validate_schema` | method | (cls, schema) | private | `` (src/nova/api/validation/__init__.py:L84); `` (src/nova/api/validation/__init__.py:L92); `` (src/nova/api/validation/__init__.py:L102) | 10/26 | `src/nova/api/validation/__init__.py:L78–L120` |
| `Schemas.validate_schemas` | method | (self) | public | not declared | 3/9 | `src/nova/api/validation/__init__.py:L122–L137` |
| `Schemas.__call__` | method | (self, req) | public | `schema` (src/nova/api/validation/__init__.py:L144); `None` (src/nova/api/validation/__init__.py:L147) | 3/6 | `src/nova/api/validation/__init__.py:L139–L147` |
| `_schema_validation_helper` | function | (schema, target, min_version, max_version, args, kwargs, *, relax_additional_properties=False, is_body=True) | unexported | `True` (src/nova/api/validation/__init__.py:L217); `True` (src/nova/api/validation/__init__.py:L225); `False` (src/nova/api/validation/__init__.py:L227) | 7/32 | `src/nova/api/validation/__init__.py:L150–L227` |
| `schema` | function | (request_body_schema, min_version=None, max_version=None) | exported | `add_validator` (src/nova/api/validation/__init__.py:L275) | 1/7 | `src/nova/api/validation/__init__.py:L234–L275` |
| `schema.add_validator` | function | (func) | public | `wrapper` (src/nova/api/validation/__init__.py:L273) | — | `src/nova/api/validation/__init__.py:L250–L273` |
| `schema.add_validator.wrapper` | function | (*args, **kwargs) | public | `func(*args, **kwargs)` (src/nova/api/validation/__init__.py:L262) | — | `src/nova/api/validation/__init__.py:L252–L262` |
| `response_body_schema` | function | (response_body_schema, min_version=None, max_version=None) | exported | `add_validator` (src/nova/api/validation/__init__.py:L348) | 1/7 | `src/nova/api/validation/__init__.py:L278–L348` |
| `response_body_schema.add_validator` | function | (func) | public | `wrapper` (src/nova/api/validation/__init__.py:L346) | — | `src/nova/api/validation/__init__.py:L293–L346` |
| `response_body_schema.add_validator.wrapper` | function | (*args, **kwargs) | public | `response` (src/nova/api/validation/__init__.py:L301); `response` (src/nova/api/validation/__init__.py:L335) | — | `src/nova/api/validation/__init__.py:L295–L335` |
| `_strip_additional_query_parameters` | function | (schema, req) | unexported | not declared | 9/13 | `src/nova/api/validation/__init__.py:L351–L376` |
| `query_schema` | function | (request_query_schema, min_version=None, max_version=None) | exported | `add_validator` (src/nova/api/validation/__init__.py:L452) | 2/9 | `src/nova/api/validation/__init__.py:L379–L452` |
| `query_schema.add_validator` | function | (func) | public | `wrapper` (src/nova/api/validation/__init__.py:L444) | — | `src/nova/api/validation/__init__.py:L394–L444` |
| `query_schema.add_validator.wrapper` | function | (*args, **kwargs) | public | `func(*args, **kwargs)` (src/nova/api/validation/__init__.py:L433) | — | `src/nova/api/validation/__init__.py:L396–L433` |
| `Schemas._validate_schema` | classmethod | — | private | not declared | — | `src/nova/api/validation/__init__.py:L77–L120` |

## Dependencies

- `import functools` (src/nova/api/validation/__init__.py:L19)
- `import re` (src/nova/api/validation/__init__.py:L20)
- `import typing as ty` (src/nova/api/validation/__init__.py:L21)
- `oslo_log`: imports `log as logging` (src/nova/api/validation/__init__.py:L23)
- `oslo_serialization`: imports `jsonutils` (src/nova/api/validation/__init__.py:L24)
- `import webob` (src/nova/api/validation/__init__.py:L25)
- `nova.api.openstack`: imports `api_version_request` (src/nova/api/validation/__init__.py:L27)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/validation/__init__.py:L28)
- `nova.api.validation`: imports `validators` (src/nova/api/validation/__init__.py:L29)
- `import nova.conf` (src/nova/api/validation/__init__.py:L30)
- `nova`: imports `exception` (src/nova/api/validation/__init__.py:L31)
- `nova.i18n`: imports `_` (src/nova/api/validation/__init__.py:L32)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/api/validation/__init__.py:L34)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/api/validation/__init__.py:L35)

## Security Surface

- **entry-point** (`http-param`): def __call__(self, req: wsgi.Request) -> dict[str, object] | None: (src/nova/api/validation/__init__.py:L139)

