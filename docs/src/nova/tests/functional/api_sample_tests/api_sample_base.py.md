# src/nova/tests/functional/api_sample_tests/api_sample_base.py

## Overview

This file implements the `api_sample_base` module, defining 1 class, 3 constants, 4 fields, 2 methods, 5 imports, 3 side effects, 1 security surface entry.

Lines: total 119, code 44, comment 57, blank 18

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/api_sample_base.py:L23–L23` |
| `ApiSampleTestBaseV21` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/api_sample_base.py:L54–L119` |
| `ApiSampleTestBaseV21.SUPPORTS_CELLS` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/api_sample_base.py:L56–L56` |
| `ApiSampleTestBaseV21._additional_fixtures` | field | — | private | not declared | — | `src/nova/tests/functional/api_sample_tests/api_sample_base.py:L59–L59` |
| `ApiSampleTestBaseV21.sample_dir` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/api_sample_base.py:L60–L60` |
| `ApiSampleTestBaseV21.USE_PROJECT_ID` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/api_sample_base.py:L66–L66` |
| `ApiSampleTestBaseV21.availability_zones` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/api_sample_base.py:L69–L69` |
| `ApiSampleTestBaseV21.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/api_sample_base.py:L71–L81` |
| `ApiSampleTestBaseV21.setUp` | method | (self) | public | not declared | 5/21 | `src/nova/tests/functional/api_sample_tests/api_sample_base.py:L83–L116` |
| `ApiSampleTestBaseV21._setup_services` | method | (self) | private | not declared | 1/2 | `src/nova/tests/functional/api_sample_tests/api_sample_base.py:L118–L119` |

## Dependencies

- `import os` (src/nova/tests/functional/api_sample_tests/api_sample_base.py:L15)
- `import testscenarios` (src/nova/tests/functional/api_sample_tests/api_sample_base.py:L17)
- `import nova.conf` (src/nova/tests/functional/api_sample_tests/api_sample_base.py:L19)
- `nova.tests`: imports `fixtures` (src/nova/tests/functional/api_sample_tests/api_sample_base.py:L20)
- `nova.tests.functional`: imports `api_samples_test_base` (src/nova/tests/functional/api_sample_tests/api_sample_base.py:L21)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/tests/functional/api_sample_tests/api_sample_base.py:L23)
- **global-mutation**: SUPPORTS_CELLS = False (src/nova/tests/functional/api_sample_tests/api_sample_base.py:L56)
- **global-mutation**: USE_PROJECT_ID = True (src/nova/tests/functional/api_sample_tests/api_sample_base.py:L66)

## Security Surface

- **entry-point** (`env`): self.generate_samples = os.getenv('GENERATE_SAMPLES') is not None (src/nova/tests/functional/api_sample_tests/api_sample_base.py:L112)

