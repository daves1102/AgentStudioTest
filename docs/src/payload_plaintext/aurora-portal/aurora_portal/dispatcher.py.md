# src/payload_plaintext/aurora-portal/aurora_portal/dispatcher.py

## Overview

`dispatcher.py` implements the dispatcher pipeline stage for the Aurora Portal tenant service. It defines a single class `Dispatcher` that accepts an incoming payload dictionary, applies a recursive string-stripping transformation to each value, and returns the transformed result. A module-level `build()` factory function constructs a `Dispatcher` with optional configuration. The module has no external dependencies and no file-system, network, or process side effects.

## Defined Symbols

| Name | Kind | Signature | Visibility | Lines |
|---|---|---|---|---|
| `Dispatcher` | class | — | module | `dispatcher.py:L7–L28` |
| `Dispatcher.__init__` | constructor | `(self, options=None) -> None` | public | `dispatcher.py:L10–L12` |
| `Dispatcher.handle` | method | `(self, payload: dict) -> dict` | public | `dispatcher.py:L14–L18` |
| `Dispatcher.transform` | method | `(self, value: Any) -> Any` | public | `dispatcher.py:L20–L25` |
| `Dispatcher.stats` | method | `(self) -> dict` | public | `dispatcher.py:L27–L28` |
| `build` | function | `(options=None) -> Dispatcher` | module | `dispatcher.py:L31–L32` |

## Dependencies

No external module imports. All referenced names (`isinstance`, `TypeError`, `dict`, `str`, `list`, `tuple`) are Python builtins.

## Security Surface

- **Input entry point — method parameter:** `Dispatcher.handle(payload)` accepts an external payload `dict` with no schema validation beyond an `isinstance(payload, dict)` type check (`dispatcher.py:L14–L18`)
