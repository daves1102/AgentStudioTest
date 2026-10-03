# src/payload_plaintext/aurora-portal/aurora_portal/indexer.py

## Overview

`indexer.py` implements the indexer pipeline stage for the Aurora Portal tenant service. It defines a single class `Indexer` that accepts an incoming payload dictionary, applies a recursive string-stripping transformation to each value, and returns the transformed result. A module-level `build()` factory function constructs an `Indexer` with optional configuration. The module has no external dependencies and no file-system, network, or process side effects.

## Defined Symbols

| Name | Kind | Signature | Visibility | Lines |
|---|---|---|---|---|
| `Indexer` | class | — | module | `indexer.py:L7–L28` |
| `Indexer.__init__` | constructor | `(self, options=None) -> None` | public | `indexer.py:L10–L12` |
| `Indexer.handle` | method | `(self, payload: dict) -> dict` | public | `indexer.py:L14–L18` |
| `Indexer.transform` | method | `(self, value: Any) -> Any` | public | `indexer.py:L20–L25` |
| `Indexer.stats` | method | `(self) -> dict` | public | `indexer.py:L27–L28` |
| `build` | function | `(options=None) -> Indexer` | module | `indexer.py:L31–L32` |

## Dependencies

No external module imports. All referenced names (`isinstance`, `TypeError`, `dict`, `str`, `list`, `tuple`) are Python builtins.

## Security Surface

- **Input entry point — method parameter:** `Indexer.handle(payload)` accepts an external payload `dict` with no schema validation beyond an `isinstance(payload, dict)` type check (`indexer.py:L14–L18`)
