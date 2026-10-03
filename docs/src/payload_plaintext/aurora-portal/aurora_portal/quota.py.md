# src/payload_plaintext/aurora-portal/aurora_portal/quota.py

## Overview

`quota.py` defines the resource-quota data model and two pure functions for the Aurora Portal. The `Quota` dataclass holds four integer resource limits (`instances`, `vcpus`, `memory_mib`, `volumes`). A module-level `DEFAULT` constant pre-populates standard quota values. `remaining()` computes the field-wise difference between a limit and a used quota, returning a new `Quota`. `exceeded()` delegates to `remaining()` and returns `True` if any field of the result is negative. The module has no side effects and no security surface.

## Defined Symbols

| Name | Kind | Signature | Visibility | Lines |
|---|---|---|---|---|
| `Quota` | class (dataclass) | — | module | `quota.py:L7–L12` |
| `Quota.instances` | class field | `int` | public | `quota.py:L9` |
| `Quota.vcpus` | class field | `int` | public | `quota.py:L10` |
| `Quota.memory_mib` | class field | `int` | public | `quota.py:L11` |
| `Quota.volumes` | class field | `int` | public | `quota.py:L12` |
| `DEFAULT` | module-level constant | `Quota` | module | `quota.py:L15` |
| `remaining` | function | `(limit: Quota, used: Quota) -> Quota` | module | `quota.py:L18–L24` |
| `exceeded` | function | `(limit: Quota, used: Quota) -> bool` | module | `quota.py:L27–L32` |

## Dependencies

- `dataclasses.dataclass` — decorator applied to the `Quota` class (`quota.py:L4`)
