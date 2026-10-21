# src/nova/tests/unit/test_manager.py

## Overview

This file implements the `test_manager` module, defining 2 classs, 3 functions, 23 methods, 7 imports.

Lines: total 362, code 261, comment 26, blank 75

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `SkipGeneralTrackingTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_manager.py:L23–L32` |
| `SkipGeneralTrackingTestCase.test_marks_function` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/test_manager.py:L25–L32` |
| `SkipGeneralTrackingTestCase.test_marks_function.fake` | function | — | public | not declared | — | `src/nova/tests/unit/test_manager.py:L26–L27` |
| `ManagerTaskTrackingTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_manager.py:L35–L362` |
| `ManagerTaskTrackingTestCase.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/test_manager.py:L36–L39` |
| `ManagerTaskTrackingTestCase.test_init_state` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/test_manager.py:L41–L46` |
| `ManagerTaskTrackingTestCase.test_set_shutdown_in_progress` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/test_manager.py:L48–L53` |
| `ManagerTaskTrackingTestCase.test_periodic_tasks_skipped_when_shutdown_in_progress` | method | (self, mock_run) | public | not declared | 1/11 | `src/nova/tests/unit/test_manager.py:L56–L69` |
| `ManagerTaskTrackingTestCase.test_record_task_start_assigns_increasing_keys` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/test_manager.py:L71–L82` |
| `ManagerTaskTrackingTestCase.test_record_task_end_removes_task` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/test_manager.py:L84–L89` |
| `ManagerTaskTrackingTestCase.test_record_task_end_unknown_key_is_noop` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/test_manager.py:L91–L98` |
| `ManagerTaskTrackingTestCase.test_record_task_end_called_twice_logs_warning` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/test_manager.py:L100–L115` |
| `ManagerTaskTrackingTestCase.test_record_task_end_via_future_done_callback` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/test_manager.py:L117–L126` |
| `ManagerTaskTrackingTestCase.test_record_task_end_tracks_completed_count_during_shutdown` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/test_manager.py:L128–L141` |
| `ManagerTaskTrackingTestCase.test_record_task_end_not_tracked_when_no_shutdown` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/test_manager.py:L143–L151` |
| `ManagerTaskTrackingTestCase.test_record_task_end_explicit_failed` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/test_manager.py:L153–L165` |
| `ManagerTaskTrackingTestCase.test_record_task_end_derives_failed_from_future_exception` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/test_manager.py:L167–L176` |
| `ManagerTaskTrackingTestCase.test_record_task_end_derives_failed_from_future_cancelled` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/test_manager.py:L178–L187` |
| `ManagerTaskTrackingTestCase.test_record_task_end_future_overrides_failed_kwarg` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/test_manager.py:L189–L198` |
| `ManagerTaskTrackingTestCase.test_summarize_failed_tasks` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/test_manager.py:L200–L209` |
| `ManagerTaskTrackingTestCase.test_record_task_logs_when_shutdown_in_progress` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/test_manager.py:L211–L231` |
| `ManagerTaskTrackingTestCase.test_summarize_in_progress_tasks` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/test_manager.py:L233–L241` |
| `ManagerTaskTrackingTestCase.test_wait_for_in_progress_tasks_returns_immediately_if_empty` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/test_manager.py:L243–L251` |
| `ManagerTaskTrackingTestCase.test_wait_for_in_progress_tasks_waits_for_completion` | method | (self) | public | not declared | 1/34 | `src/nova/tests/unit/test_manager.py:L253–L307` |
| `ManagerTaskTrackingTestCase.test_wait_for_in_progress_tasks_waits_for_completion._wait` | function | (*args, **kwargs) | private | `` (src/nova/tests/unit/test_manager.py:L269); `orig_wait(*args, **kwargs)` (src/nova/tests/unit/test_manager.py:L271) | — | `src/nova/tests/unit/test_manager.py:L263–L271` |
| `ManagerTaskTrackingTestCase.test_wait_for_in_progress_tasks_reports_completed_and_failed` | method | (self) | public | not declared | 1/33 | `src/nova/tests/unit/test_manager.py:L309–L349` |
| `ManagerTaskTrackingTestCase.test_wait_for_in_progress_tasks_reports_completed_and_failed._finish_soon` | function | — | private | not declared | — | `src/nova/tests/unit/test_manager.py:L316–L319` |
| `ManagerTaskTrackingTestCase.test_wait_for_in_progress_tasks_times_out` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/test_manager.py:L351–L362` |

## Dependencies

- `import concurrent.futures` (src/nova/tests/unit/test_manager.py:L13)
- `import functools` (src/nova/tests/unit/test_manager.py:L14)
- `import threading` (src/nova/tests/unit/test_manager.py:L15)
- `import time` (src/nova/tests/unit/test_manager.py:L16)
- `unittest`: imports `mock` (src/nova/tests/unit/test_manager.py:L17)
- `nova`: imports `manager` (src/nova/tests/unit/test_manager.py:L19)
- `nova`: imports `test` (src/nova/tests/unit/test_manager.py:L20)

