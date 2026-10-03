# src/payload_plaintext/aurora-portal/aurora_portal/adapter.py

## Overview

`adapter.py` implements the adapter pipeline stage for the Aurora Portal tenant service. It defines a single class `Adapter` that accepts an incoming payload dictionary, applies a recursive string-stripping transformation to each value, and returns the transformed result. A module-level `build()` factory function constructs an `Adapter` with optional configuration. The module has no external dependencies and no file-system, network, or process side effects.

## Defined Symbols

| Name | Kind | Signature | Visibility | Lines |
|---|---|---|---|---|
| `Adapter` | class | — | module | `adapter.py:L7–L28` |
| `Adapter.__init__` | constructor | `(self, options=None) -> None` | public | `adapter.py:L10–L12` |
| `Adapter.handle` | method | `(self, payload: dict) -> dict` | public | `adapter.py:L14–L18` |
| `Adapter.transform` | method | `(self, value: Any) -> Any` | public | `adapter.py:L20–L25` |
| `Adapter.stats` | method | `(self) -> dict` | public | `adapter.py:L27–L28` |
| `build` | function | `(options=None) -> Adapter` | module | `adapter.py:L31–L32` |

## Dependencies

No external module imports. All referenced names (`isinstance`, `TypeError`, `dict`, `str`, `list`, `tuple`) are Python builtins.

## Security Surface

- **Input entry point — method parameter:** `Adapter.handle(payload)` accepts an external payload `dict` with no schema validation beyond a `isinstance(payload, dict)` type check (`adapter.py:L14–L18`)
