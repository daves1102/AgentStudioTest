# src/payload_plaintext/aurora-portal/aurora_portal/collector.py

## Overview

`collector.py` implements the collector pipeline stage for the Aurora Portal tenant service. It defines a single class `Collector` that accepts an incoming payload dictionary, applies a recursive string-stripping transformation to each value, and returns the transformed result. A module-level `build()` factory function constructs a `Collector` with optional configuration. The module has no external dependencies and no file-system, network, or process side effects.

## Defined Symbols

| Name | Kind | Signature | Visibility | Lines |
|---|---|---|---|---|
| `Collector` | class | — | module | `collector.py:L7–L28` |
| `Collector.__init__` | constructor | `(self, options=None) -> None` | public | `collector.py:L10–L12` |
| `Collector.handle` | method | `(self, payload: dict) -> dict` | public | `collector.py:L14–L18` |
| `Collector.transform` | method | `(self, value: Any) -> Any` | public | `collector.py:L20–L25` |
| `Collector.stats` | method | `(self) -> dict` | public | `collector.py:L27–L28` |
| `build` | function | `(options=None) -> Collector` | module | `collector.py:L31–L32` |

## Dependencies

No external module imports. All referenced names (`isinstance`, `TypeError`, `dict`, `str`, `list`, `tuple`) are Python builtins.

## Security Surface

- **Input entry point — method parameter:** `Collector.handle(payload)` accepts an external payload `dict` with no schema validation beyond an `isinstance(payload, dict)` type check (`collector.py:L14–L18`)
