## Overview

Source file `src/aurora/aurora-portal/aurora_portal/quota.py` written in Python within the `aurora-portal` component . It contains 8 defined symbol(s), 1 dependency/dependencies.


Lines: total 32, code 21, comment 2, blank 9

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `Quota` | class | `Quota` | — | — | — | L8–L12 (src/aurora/aurora-portal/aurora_portal/quota.py:L8–L12) |
| `instances` | field | `instances` | — | — | — | L9 (src/aurora/aurora-portal/aurora_portal/quota.py:L9) |
| `vcpus` | field | `vcpus` | — | — | — | L10 (src/aurora/aurora-portal/aurora_portal/quota.py:L10) |
| `memory_mib` | field | `memory_mib` | — | — | — | L11 (src/aurora/aurora-portal/aurora_portal/quota.py:L11) |
| `volumes` | field | `volumes` | — | — | — | L12 (src/aurora/aurora-portal/aurora_portal/quota.py:L12) |
| `DEFAULT` | constant | `DEFAULT` | — | — | — | L15 (src/aurora/aurora-portal/aurora_portal/quota.py:L15) |
| `remaining` | function | `remaining(limit, used)` | — | `Quota( instances=limit.instances - used.instances, vcpus=limit.vcpus - used.vcpus, memory_mib=limit.memory_mib - used.memory_mib, volumes=limit.volumes - used.volumes, )` (L19) | 1/7 | L18–L24 (src/aurora/aurora-portal/aurora_portal/quota.py:L18–L24) |
| `exceeded` | function | `exceeded(limit, used)` | — | `any( value < 0 for value in (left.instances, left.vcpus, left.memory_mib, left.volumes) )` (L29) | 2/6 | L27–L32 (src/aurora/aurora-portal/aurora_portal/quota.py:L27–L32) |

## Dependencies

- `dataclasses` imports: `{'alias': None, 'name': 'dataclass'}` (src/aurora/aurora-portal/aurora_portal/quota.py:L4)
