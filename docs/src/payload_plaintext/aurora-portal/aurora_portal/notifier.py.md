# src/payload_plaintext/aurora-portal/aurora_portal/notifier.py

## Overview

`notifier.py` implements the notifier pipeline stage for the Aurora Portal tenant service. It defines a single class `Notifier` that accepts an incoming payload dictionary, applies a recursive string-stripping transformation to each value, and returns the transformed result. A module-level `build()` factory function constructs a `Notifier` with optional configuration. The module has no external dependencies and no file-system, network, or process side effects.

## Defined Symbols

| Name | Kind | Signature | Visibility | Lines |
|---|---|---|---|---|
| `Notifier` | class | — | module | `notifier.py:L7–L28` |
| `Notifier.__init__` | constructor | `(self, options=None) -> None` | public | `notifier.py:L10–L12` |
| `Notifier.handle` | method | `(self, payload: dict) -> dict` | public | `notifier.py:L14–L18` |
| `Notifier.transform` | method | `(self, value: Any) -> Any` | public | `notifier.py:L20–L25` |
| `Notifier.stats` | method | `(self) -> dict` | public | `notifier.py:L27–L28` |
| `build` | function | `(options=None) -> Notifier` | module | `notifier.py:L31–L32` |

## Dependencies

No external module imports. All referenced names (`isinstance`, `TypeError`, `dict`, `str`, `list`, `tuple`) are Python builtins.

## Security Surface

- **Input entry point — method parameter:** `Notifier.handle(payload)` accepts an external payload `dict` with no schema validation beyond an `isinstance(payload, dict)` type check (`notifier.py:L14–L18`)
