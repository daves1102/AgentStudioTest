# src/payload_plaintext/aurora-portal/tests/test_quota.py

## Overview

`test_quota.py` contains two pytest-style unit tests for the `aurora_portal.quota` module. `test_remaining()` constructs a limit `Quota` and a used `Quota`, calls `remaining()`, and asserts the computed `instances` and `vcpus` residuals. `test_exceeded()` constructs a limit that has been exceeded on `instances` and asserts that `exceeded()` returns `True`. The file has no side effects and no security surface.

## Defined Symbols

| Name | Kind | Signature | Visibility | Lines |
|---|---|---|---|---|
| `test_remaining` | function | `() -> None` | module | `test_quota.py:L4–L9` |
| `test_exceeded` | function | `() -> None` | module | `test_quota.py:L12–L15` |

## Dependencies

- `aurora_portal.quota` — imports `Quota`, `exceeded`, and `remaining` (`test_quota.py:L1`)
