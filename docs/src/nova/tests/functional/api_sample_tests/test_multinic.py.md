# src/nova/tests/functional/api_sample_tests/test_multinic.py

## Overview

This file implements the `test_multinic` module, defining 1 class, 1 constant, 1 field, 5 methods, 2 imports, 1 side effect, 1 security surface entry.

Lines: total 58, code 32, comment 15, blank 11

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `MultinicSampleJsonTest` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_multinic.py:L20–L58` |
| `MultinicSampleJsonTest.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_multinic.py:L21–L21` |
| `MultinicSampleJsonTest.sample_dir` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_multinic.py:L22–L22` |
| `MultinicSampleJsonTest.setUp` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/api_sample_tests/test_multinic.py:L24–L29` |
| `MultinicSampleJsonTest._boot_a_server` | method | (self, expected_status='ACTIVE', extra_params=None) | private | `found_server` (src/nova/tests/functional/api_sample_tests/test_multinic.py:L41) | 2/8 | `src/nova/tests/functional/api_sample_tests/test_multinic.py:L31–L41` |
| `MultinicSampleJsonTest._add_fixed_ip` | method | (self) | private | not declared | 1/5 | `src/nova/tests/functional/api_sample_tests/test_multinic.py:L43–L47` |
| `MultinicSampleJsonTest.test_add_fixed_ip` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/api_sample_tests/test_multinic.py:L49–L50` |
| `MultinicSampleJsonTest.test_remove_fixed_ip` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/api_sample_tests/test_multinic.py:L52–L58` |

## Dependencies

- `nova.tests`: imports `fixtures` (src/nova/tests/functional/api_sample_tests/test_multinic.py:L16)
- `nova.tests.functional.api_sample_tests`: imports `api_sample_base` (src/nova/tests/functional/api_sample_tests/test_multinic.py:L17)

## Side Effects

- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/api_sample_tests/test_multinic.py:L21)

## Security Surface

- **sink** (`db-write`): server.update(extra_params) (src/nova/tests/functional/api_sample_tests/test_multinic.py:L34)

