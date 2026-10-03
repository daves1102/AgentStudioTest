# src/payload_plaintext/aurora-portal/aurora_portal/publisher.py

## Overview

`publisher.py` implements the publisher pipeline stage for the Aurora Portal tenant service. It defines a single class `Publisher` that accepts an incoming payload dictionary, applies a recursive string-stripping transformation to each value, and returns the transformed result. A module-level `build()` factory function constructs a `Publisher` with optional configuration. The module has no external dependencies and no file-system, network, or process side effects.

## Defined Symbols

| Name | Kind | Signature | Visibility | Lines |
|---|---|---|---|---|
| `Publisher` | class | — | module | `publisher.py:L7–L28` |
| `Publisher.__init__` | constructor | `(self, options=None) -> None` | public | `publisher.py:L10–L12` |
| `Publisher.handle` | method | `(self, payload: dict) -> dict` | public | `publisher.py:L14–L18` |
| `Publisher.transform` | method | `(self, value: Any) -> Any` | public | `publisher.py:L20–L25` |
| `Publisher.stats` | method | `(self) -> dict` | public | `publisher.py:L27–L28` |
| `build` | function | `(options=None) -> Publisher` | module | `publisher.py:L31–L32` |

## Dependencies

No external module imports. All referenced names (`isinstance`, `TypeError`, `dict`, `str`, `list`, `tuple`) are Python builtins.

## Security Surface

- **Input entry point — method parameter:** `Publisher.handle(payload)` accepts an external payload `dict` with no schema validation beyond an `isinstance(payload, dict)` type check (`publisher.py:L14–L18`)
