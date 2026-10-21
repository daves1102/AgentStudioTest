# src/nova/tests/functional/libvirt/test_amd_sev.py

## Overview

This file implements the `test_amd_sev` module, defining 1 class, 1 field, 5 methods, 9 imports.

Lines: total 180, code 132, comment 24, blank 24

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `TestSEV` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_amd_sev.py:L26–L180` |
| `TestSEV.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_amd_sev.py:L27–L27` |
| `TestSEV.setUp` | method | (self) | public | not declared | 1/27 | `src/nova/tests/functional/libvirt/test_amd_sev.py:L29–L63` |
| `TestSEV.test_sev_lost_after_restart` | method | (self) | public | not declared | 1/18 | `src/nova/tests/functional/libvirt/test_amd_sev.py:L68–L94` |
| `TestSEV.test_sev_es_lost_after_restart` | method | (self) | public | not declared | 1/16 | `src/nova/tests/functional/libvirt/test_amd_sev.py:L99–L120` |
| `TestSEV.test_sev_snp_detected_after_restart` | method | (self) | public | not declared | 1/16 | `src/nova/tests/functional/libvirt/test_amd_sev.py:L125–L147` |
| `TestSEV.test_sev_snp_lost_after_restart` | method | (self) | public | not declared | 1/22 | `src/nova/tests/functional/libvirt/test_amd_sev.py:L153–L180` |

## Dependencies

- `import copy` (src/nova/tests/functional/libvirt/test_amd_sev.py:L13)
- `unittest`: imports `mock` (src/nova/tests/functional/libvirt/test_amd_sev.py:L14)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/functional/libvirt/test_amd_sev.py:L16)
- `oslo_utils`: imports `versionutils` (src/nova/tests/functional/libvirt/test_amd_sev.py:L17)
- `nova`: imports `exception` (src/nova/tests/functional/libvirt/test_amd_sev.py:L19)
- `nova.tests.fixtures`: imports `libvirt as fakelibvirt` (src/nova/tests/functional/libvirt/test_amd_sev.py:L20)
- `nova.tests.functional.libvirt`: imports `base` (src/nova/tests/functional/libvirt/test_amd_sev.py:L21)
- `nova.virt.libvirt`: imports `driver` (src/nova/tests/functional/libvirt/test_amd_sev.py:L22)
- `nova.virt.libvirt`: imports `host` (src/nova/tests/functional/libvirt/test_amd_sev.py:L23)

