# src/nova/tests/unit/compute/monitors/test_monitors.py

## Overview

This file implements the `test_monitors` module, defining 2 classs, 2 methods, 3 imports.

Lines: total 62, code 35, comment 18, blank 9

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `MonitorsTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/monitors/test_monitors.py:L24–L62` |
| `MonitorsTestCase.test_check_enabled_monitor` | method | (self, _mock_ext_manager) | public | not declared | 1/26 | `src/nova/tests/unit/compute/monitors/test_monitors.py:L28–L62` |
| `MonitorsTestCase.test_check_enabled_monitor.FakeExt` | class | — | public | not declared | — | `src/nova/tests/unit/compute/monitors/test_monitors.py:L29–L32` |
| `MonitorsTestCase.test_check_enabled_monitor.FakeExt.__init__` | method | (self, ept, name) | public | not declared | — | `src/nova/tests/unit/compute/monitors/test_monitors.py:L30–L32` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/compute/monitors/test_monitors.py:L18)
- `nova.compute`: imports `monitors` (src/nova/tests/unit/compute/monitors/test_monitors.py:L20)
- `nova`: imports `test` (src/nova/tests/unit/compute/monitors/test_monitors.py:L21)

