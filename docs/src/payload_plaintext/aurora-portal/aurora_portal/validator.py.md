# src/payload_plaintext/aurora-portal/aurora_portal/validator.py

## Overview

`validator.py` implements the validator pipeline stage for the Aurora Portal tenant service. It defines a single class `Validator` that accepts an incoming payload dictionary, applies a recursive string-stripping transformation to each value, and returns the transformed result. A module-level `build()` factory function constructs a `Validator` with optional configuration. The module has no external dependencies and no file-system, network, or process side effects.

## Defined Symbols

| Name | Kind | Signature | Visibility | Lines |
|---|---|---|---|---|
| `Validator` | class | — | module | `validator.py:L7–L28` |
| `Validator.__init__` | constructor | `(self, options=None) -> None` | public | `validator.py:L10–L12` |
| `Validator.handle` | method | `(self, payload: dict) -> dict` | public | `validator.py:L14–L18` |
| `Validator.transform` | method | `(self, value: Any) -> Any` | public | `validator.py:L20–L25` |
| `Validator.stats` | method | `(self) -> dict` | public | `validator.py:L27–L28` |
| `build` | function | `(options=None) -> Validator` | module | `validator.py:L31–L32` |

## Dependencies

No external module imports. All referenced names (`isinstance`, `TypeError`, `dict`, `str`, `list`, `tuple`) are Python builtins.

## Security Surface

- **Input entry point — method parameter:** `Validator.handle(payload)` accepts an external payload `dict` with no schema validation beyond an `isinstance(payload, dict)` type check (`validator.py:L14–L18`)
