# src/payload_plaintext/aurora-portal/aurora_portal/resolver.py

## Overview

`resolver.py` implements the resolver pipeline stage for the Aurora Portal tenant service. It defines a single class `Resolver` that accepts an incoming payload dictionary, applies a recursive string-stripping transformation to each value, and returns the transformed result. A module-level `build()` factory function constructs a `Resolver` with optional configuration. The module has no external dependencies and no file-system, network, or process side effects.

## Defined Symbols

| Name | Kind | Signature | Visibility | Lines |
|---|---|---|---|---|
| `Resolver` | class | — | module | `resolver.py:L7–L28` |
| `Resolver.__init__` | constructor | `(self, options=None) -> None` | public | `resolver.py:L10–L12` |
| `Resolver.handle` | method | `(self, payload: dict) -> dict` | public | `resolver.py:L14–L18` |
| `Resolver.transform` | method | `(self, value: Any) -> Any` | public | `resolver.py:L20–L25` |
| `Resolver.stats` | method | `(self) -> dict` | public | `resolver.py:L27–L28` |
| `build` | function | `(options=None) -> Resolver` | module | `resolver.py:L31–L32` |

## Dependencies

No external module imports. All referenced names (`isinstance`, `TypeError`, `dict`, `str`, `list`, `tuple`) are Python builtins.

## Security Surface

- **Input entry point — method parameter:** `Resolver.handle(payload)` accepts an external payload `dict` with no schema validation beyond an `isinstance(payload, dict)` type check (`resolver.py:L14–L18`)
