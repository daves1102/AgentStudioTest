# src/payload_plaintext/aurora-portal/aurora_portal/formatter.py

## Overview

`formatter.py` implements the formatter pipeline stage for the Aurora Portal tenant service. It defines a single class `Formatter` that accepts an incoming payload dictionary, applies a recursive string-stripping transformation to each value, and returns the transformed result. A module-level `build()` factory function constructs a `Formatter` with optional configuration. The module has no external dependencies and no file-system, network, or process side effects.

## Defined Symbols

| Name | Kind | Signature | Visibility | Lines |
|---|---|---|---|---|
| `Formatter` | class | — | module | `formatter.py:L7–L28` |
| `Formatter.__init__` | constructor | `(self, options=None) -> None` | public | `formatter.py:L10–L12` |
| `Formatter.handle` | method | `(self, payload: dict) -> dict` | public | `formatter.py:L14–L18` |
| `Formatter.transform` | method | `(self, value: Any) -> Any` | public | `formatter.py:L20–L25` |
| `Formatter.stats` | method | `(self) -> dict` | public | `formatter.py:L27–L28` |
| `build` | function | `(options=None) -> Formatter` | module | `formatter.py:L31–L32` |

## Dependencies

No external module imports. All referenced names (`isinstance`, `TypeError`, `dict`, `str`, `list`, `tuple`) are Python builtins.

## Security Surface

- **Input entry point — method parameter:** `Formatter.handle(payload)` accepts an external payload `dict` with no schema validation beyond an `isinstance(payload, dict)` type check (`formatter.py:L14–L18`)
