# src/nova/tests/functional/test_cross_az_attach.py

## Overview

This file implements the `test_cross_az_attach` module, defining 1 class, 1 field, 7 methods, 5 imports.

Lines: total 184, code 137, comment 34, blank 13

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CrossAZAttachTestCase` | class | — | exported | not declared | — | `src/nova/tests/functional/test_cross_az_attach.py:L20–L184` |
| `CrossAZAttachTestCase.az` | field | — | public | not declared | — | `src/nova/tests/functional/test_cross_az_attach.py:L26–L26` |
| `CrossAZAttachTestCase.setUp` | method | (self) | public | not declared | 1/23 | `src/nova/tests/functional/test_cross_az_attach.py:L28–L53` |
| `CrossAZAttachTestCase.test_cross_az_attach_false_boot_from_volume_no_az_specified` | method | (self) | public | not declared | 1/12 | `src/nova/tests/functional/test_cross_az_attach.py:L55–L73` |
| `CrossAZAttachTestCase.test_cross_az_attach_false_data_volume_no_az_specified` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/test_cross_az_attach.py:L75–L96` |
| `CrossAZAttachTestCase.test_cross_az_attach_false_boot_from_volume_default_zone_match` | method | (self) | public | not declared | 1/13 | `src/nova/tests/functional/test_cross_az_attach.py:L98–L115` |
| `CrossAZAttachTestCase.test_cross_az_attach_false_bfv_az_specified_mismatch` | method | (self) | public | not declared | 1/16 | `src/nova/tests/functional/test_cross_az_attach.py:L117–L138` |
| `CrossAZAttachTestCase.test_cross_az_attach_false_no_volumes` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/test_cross_az_attach.py:L140–L146` |
| `CrossAZAttachTestCase.test_cross_az_attach_false_migrate_continues_to_pin_an_az` | method | (self) | public | not declared | 1/25 | `src/nova/tests/functional/test_cross_az_attach.py:L148–L184` |

## Dependencies

- `nova`: imports `test` (src/nova/tests/functional/test_cross_az_attach.py:L13)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/functional/test_cross_az_attach.py:L14)
- `nova.tests.functional.api`: imports `client as api_client` (src/nova/tests/functional/test_cross_az_attach.py:L15)
- `nova.tests.functional`: imports `fixtures as func_fixtures` (src/nova/tests/functional/test_cross_az_attach.py:L16)
- `nova.tests.functional`: imports `integrated_helpers` (src/nova/tests/functional/test_cross_az_attach.py:L17)

