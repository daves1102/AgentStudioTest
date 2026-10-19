# src/nova/objects/diagnostics.py

## Overview

This file implements the `diagnostics` module, defining 5 classs, 5 constants, 5 fields, 4 methods, 1 variable, 2 imports, 5 side effects.

Lines: total 179, code 127, comment 19, blank 33

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `__all__` | variable | — | unexported | not declared | — | `src/nova/objects/diagnostics.py:L19–L25` |
| `CpuDiagnostics` | class | — | exported | not declared | — | `src/nova/objects/diagnostics.py:L29–L38` |
| `CpuDiagnostics.VERSION` | constant | — | public | not declared | — | `src/nova/objects/diagnostics.py:L32–L32` |
| `CpuDiagnostics.fields` | field | — | public | not declared | — | `src/nova/objects/diagnostics.py:L34–L38` |
| `NicDiagnostics` | class | — | exported | not declared | — | `src/nova/objects/diagnostics.py:L42–L59` |
| `NicDiagnostics.VERSION` | constant | — | public | not declared | — | `src/nova/objects/diagnostics.py:L45–L45` |
| `NicDiagnostics.fields` | field | — | public | not declared | — | `src/nova/objects/diagnostics.py:L47–L59` |
| `DiskDiagnostics` | class | — | exported | not declared | — | `src/nova/objects/diagnostics.py:L63–L74` |
| `DiskDiagnostics.VERSION` | constant | — | public | not declared | — | `src/nova/objects/diagnostics.py:L66–L66` |
| `DiskDiagnostics.fields` | field | — | public | not declared | — | `src/nova/objects/diagnostics.py:L68–L74` |
| `MemoryDiagnostics` | class | — | exported | not declared | — | `src/nova/objects/diagnostics.py:L78–L86` |
| `MemoryDiagnostics.VERSION` | constant | — | public | not declared | — | `src/nova/objects/diagnostics.py:L81–L81` |
| `MemoryDiagnostics.fields` | field | — | public | not declared | — | `src/nova/objects/diagnostics.py:L83–L86` |
| `Diagnostics` | class | — | exported | not declared | — | `src/nova/objects/diagnostics.py:L90–L179` |
| `Diagnostics.VERSION` | constant | — | public | not declared | — | `src/nova/objects/diagnostics.py:L93–L93` |
| `Diagnostics.fields` | field | — | public | not declared | — | `src/nova/objects/diagnostics.py:L95–L111` |
| `Diagnostics.__init__` | method | (self, *args, **kwargs) | public | not declared | 1/5 | `src/nova/objects/diagnostics.py:L113–L118` |
| `Diagnostics.add_cpu` | method | (self, id=None, time=None, utilisation=None) | public | not declared | 1/4 | `src/nova/objects/diagnostics.py:L120–L130` |
| `Diagnostics.add_nic` | method | (self, mac_address=None, rx_octets=None, rx_errors=None, rx_drop=None, rx_packets=None, rx_rate=None, tx_octets=None, tx_errors=None, tx_drop=None, tx_packets=None, tx_rate=None) | public | not declared | 1/15 | `src/nova/objects/diagnostics.py:L132–L161` |
| `Diagnostics.add_disk` | method | (self, read_bytes=None, read_requests=None, write_bytes=None, write_requests=None, errors_count=None) | public | not declared | 1/8 | `src/nova/objects/diagnostics.py:L163–L179` |

## Dependencies

- `nova.objects`: imports `base` (src/nova/objects/diagnostics.py:L16)
- `nova.objects`: imports `fields` (src/nova/objects/diagnostics.py:L17)

## Side Effects

- **global-mutation**: VERSION = '1.0' (src/nova/objects/diagnostics.py:L32)
- **global-mutation**: VERSION = '1.0' (src/nova/objects/diagnostics.py:L45)
- **global-mutation**: VERSION = '1.0' (src/nova/objects/diagnostics.py:L66)
- **global-mutation**: VERSION = '1.0' (src/nova/objects/diagnostics.py:L81)
- **global-mutation**: VERSION = '1.0' (src/nova/objects/diagnostics.py:L93)

