# src/nova/tests/functional/test_middleware.py

## Overview

This file implements the `test_middleware` module, defining 1 class, 1 function, 9 methods, 2 imports.

Lines: total 152, code 101, comment 24, blank 27

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `TestCORSMiddleware` | class | — | exported | not declared | — | `src/nova/tests/functional/test_middleware.py:L21–L152` |
| `TestCORSMiddleware.setUp` | method | (self) | public | not declared | 2/6 | `src/nova/tests/functional/test_middleware.py:L29–L50` |
| `TestCORSMiddleware.setUp._mock_getattr` | function | (instance, key) | private | `self._original_call_method(instance, key)` (src/nova/tests/functional/test_middleware.py:L38); `["http://valid.example.com"]` (src/nova/tests/functional/test_middleware.py:L39) | — | `src/nova/tests/functional/test_middleware.py:L36–L39` |
| `TestCORSMiddleware.tearDown` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/test_middleware.py:L52–L56` |
| `TestCORSMiddleware.test_valid_cors_options_request` | method | (self) | public | not declared | 1/10 | `src/nova/tests/functional/test_middleware.py:L58–L68` |
| `TestCORSMiddleware.test_invalid_cors_options_request` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/test_middleware.py:L70–L78` |
| `TestCORSMiddleware.test_valid_cors_get_request` | method | (self) | public | not declared | 1/10 | `src/nova/tests/functional/test_middleware.py:L80–L90` |
| `TestCORSMiddleware.test_invalid_cors_get_request` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/test_middleware.py:L92–L100` |
| `TestCORSMiddleware.test_valid_cors_get_versions_request` | method | (self) | public | not declared | 1/11 | `src/nova/tests/functional/test_middleware.py:L102–L113` |
| `TestCORSMiddleware.test_invalid_cors_get_versions_request` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/test_middleware.py:L115–L124` |
| `TestCORSMiddleware.test_api_version_request_headers` | method | (self) | public | not declared | 1/22 | `src/nova/tests/functional/test_middleware.py:L126–L152` |

## Dependencies

- `oslo_config`: imports `cfg` (src/nova/tests/functional/test_middleware.py:L16)
- `nova.tests.functional.api_sample_tests`: imports `api_sample_base` (src/nova/tests/functional/test_middleware.py:L18)

