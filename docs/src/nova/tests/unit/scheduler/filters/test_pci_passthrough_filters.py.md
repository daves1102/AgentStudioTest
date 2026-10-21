# src/nova/tests/unit/scheduler/filters/test_pci_passthrough_filters.py

## Overview

This file implements the `test_pci_passthrough_filters` module, defining 1 class, 9 methods, 7 imports.

Lines: total 185, code 143, comment 24, blank 18

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `TestPCIPassthroughFilter` | class | — | exported | not declared | — | `src/nova/tests/unit/scheduler/filters/test_pci_passthrough_filters.py:L24–L185` |
| `TestPCIPassthroughFilter.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/scheduler/filters/test_pci_passthrough_filters.py:L26–L28` |
| `TestPCIPassthroughFilter.test_pci_passthrough_pass` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/scheduler/filters/test_pci_passthrough_filters.py:L30–L47` |
| `TestPCIPassthroughFilter.test_pci_passthrough_fail` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/scheduler/filters/test_pci_passthrough_filters.py:L49–L66` |
| `TestPCIPassthroughFilter.test_pci_passthrough_no_pci_request` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/scheduler/filters/test_pci_passthrough_filters.py:L68–L71` |
| `TestPCIPassthroughFilter.test_pci_passthrough_empty_pci_request_obj` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/scheduler/filters/test_pci_passthrough_filters.py:L73–L77` |
| `TestPCIPassthroughFilter.test_pci_passthrough_no_pci_stats` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/scheduler/filters/test_pci_passthrough_filters.py:L79–L87` |
| `TestPCIPassthroughFilter.test_pci_passthrough_with_pci_stats_none` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/scheduler/filters/test_pci_passthrough_filters.py:L89–L96` |
| `TestPCIPassthroughFilter.test_filters_candidates` | method | (self) | public | not declared | 1/44 | `src/nova/tests/unit/scheduler/filters/test_pci_passthrough_filters.py:L98–L150` |
| `TestPCIPassthroughFilter.test_filter_fails_if_no_matching_candidate_left` | method | (self) | public | not declared | 1/26 | `src/nova/tests/unit/scheduler/filters/test_pci_passthrough_filters.py:L152–L185` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/scheduler/filters/test_pci_passthrough_filters.py:L13)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/scheduler/filters/test_pci_passthrough_filters.py:L15)
- `nova`: imports `objects` (src/nova/tests/unit/scheduler/filters/test_pci_passthrough_filters.py:L17)
- `nova.pci`: imports `stats` (src/nova/tests/unit/scheduler/filters/test_pci_passthrough_filters.py:L18)
- `nova.scheduler.filters`: imports `pci_passthrough_filter` (src/nova/tests/unit/scheduler/filters/test_pci_passthrough_filters.py:L19)
- `nova`: imports `test` (src/nova/tests/unit/scheduler/filters/test_pci_passthrough_filters.py:L20)
- `nova.tests.unit.scheduler`: imports `fakes` (src/nova/tests/unit/scheduler/filters/test_pci_passthrough_filters.py:L21)

