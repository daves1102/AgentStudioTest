# src/nova/tests/unit/cmd/test_compute.py

## Overview

This file implements the `test_compute` module, defining 2 classs, 2 functions, 6 methods, 10 imports, 1 security surface entry.

Lines: total 96, code 64, comment 17, blank 15

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `restore_db` | function | — | exported | not declared | 2/6 | `src/nova/tests/unit/cmd/test_compute.py:L30–L35` |
| `ComputeMainTest` | class | — | exported | not declared | — | `src/nova/tests/unit/cmd/test_compute.py:L38–L53` |
| `ComputeMainTest._call_main` | method | (self, mod, gmr, cond) | private | not declared | 1/5 | `src/nova/tests/unit/cmd/test_compute.py:L41–L47` |
| `ComputeMainTest._call_main.run_main` | function | (serv, conf) | public | not declared | — | `src/nova/tests/unit/cmd/test_compute.py:L44–L45` |
| `ComputeMainTest.test_compute_main_blocks_db` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/cmd/test_compute.py:L49–L53` |
| `TestComputeConfig` | class | — | exported | not declared | — | `src/nova/tests/unit/cmd/test_compute.py:L57–L96` |
| `TestComputeConfig.setUp` | method | (self) | public | not declared | 2/9 | `src/nova/tests/unit/cmd/test_compute.py:L60–L72` |
| `TestComputeConfig._call_main` | method | (self) | private | not declared | 1/7 | `src/nova/tests/unit/cmd/test_compute.py:L74–L81` |
| `TestComputeConfig.test_config_dumped_at_startup_when_log_options_enabled` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/cmd/test_compute.py:L83–L88` |
| `TestComputeConfig.test_config_not_dumped_at_startup_when_log_options_disabled` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/cmd/test_compute.py:L90–L96` |

## Dependencies

- `import contextlib` (src/nova/tests/unit/cmd/test_compute.py:L15)
- `import os` (src/nova/tests/unit/cmd/test_compute.py:L16)
- `unittest`: imports `mock` (src/nova/tests/unit/cmd/test_compute.py:L17)
- `oslo_service`: imports `opts as oslo_svc_opts` (src/nova/tests/unit/cmd/test_compute.py:L19)
- `nova.cmd`: imports `compute` (src/nova/tests/unit/cmd/test_compute.py:L21)
- `nova`: imports `config` (src/nova/tests/unit/cmd/test_compute.py:L22)
- `nova`: imports `context` (src/nova/tests/unit/cmd/test_compute.py:L23)
- `nova.db.main`: imports `api as db` (src/nova/tests/unit/cmd/test_compute.py:L24)
- `nova`: imports `exception` (src/nova/tests/unit/cmd/test_compute.py:L25)
- `nova`: imports `test` (src/nova/tests/unit/cmd/test_compute.py:L26)

## Security Surface

- **entry-point** (`env`): if os.environ.get( (src/nova/tests/unit/cmd/test_compute.py:L64)

