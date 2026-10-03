# src/payload_plaintext/aurora-portal/aurora_portal/throttle.py

## Overview

`throttle.py` implements the throttle pipeline stage for the Aurora Portal tenant service. It defines a single class `Throttle` that accepts an incoming payload dictionary, applies a recursive string-stripping transformation to each value, and returns the transformed result. A module-level `build()` factory function constructs a `Throttle` with optional configuration. The module has no external dependencies and no file-system, network, or process side effects.

## Defined Symbols

| Name | Kind | Signature | Visibility | Lines |
|---|---|---|---|---|
| `Throttle` | class | — | module | `throttle.py:L7–L28` |
| `Throttle.__init__` | constructor | `(self, options=None) -> None` | public | `throttle.py:L10–L12` |
| `Throttle.handle` | method | `(self, payload: dict) -> dict` | public | `throttle.py:L14–L18` |
| `Throttle.transform` | method | `(self, value: Any) -> Any` | public | `throttle.py:L20–L25` |
| `Throttle.stats` | method | `(self) -> dict` | public | `throttle.py:L27–L28` |
| `build` | function | `(options=None) -> Throttle` | module | `throttle.py:L31–L32` |

## Dependencies

No external module imports. All referenced names (`isinstance`, `TypeError`, `dict`, `str`, `list`, `tuple`) are Python builtins.

## Security Surface

- **Input entry point — method parameter:** `Throttle.handle(payload)` accepts an external payload `dict` with no schema validation beyond an `isinstance(payload, dict)` type check (`throttle.py:L14–L18`)
