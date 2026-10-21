# src/nova/tests/functional/api_sample_tests/test_migrations.py

## Overview

This file implements the `test_migrations` module, defining 5 classs, 8 constants, 13 fields, 1 function, 11 methods, 5 imports, 8 side effects.

Lines: total 453, code 392, comment 28, blank 33

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `INSTANCE_UUID_1` | constant | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_migrations.py:L27–L27` |
| `INSTANCE_UUID_2` | constant | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_migrations.py:L28–L28` |
| `_stub_migrations` | function | (stub_self, context, filters) | unexported | `fake_migrations` (src/nova/tests/functional/api_sample_tests/test_migrations.py:L76) | 1/46 | `src/nova/tests/functional/api_sample_tests/test_migrations.py:L31–L76` |
| `MigrationsSamplesJsonTest` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_migrations.py:L79–L92` |
| `MigrationsSamplesJsonTest.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_migrations.py:L80–L80` |
| `MigrationsSamplesJsonTest.sample_dir` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_migrations.py:L81–L81` |
| `MigrationsSamplesJsonTest.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/api_sample_tests/test_migrations.py:L83–L86` |
| `MigrationsSamplesJsonTest.test_get_migrations` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/api_sample_tests/test_migrations.py:L88–L92` |
| `MigrationsSamplesJsonTestV2_23` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_migrations.py:L95–L199` |
| `MigrationsSamplesJsonTestV2_23.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_migrations.py:L96–L96` |
| `MigrationsSamplesJsonTestV2_23.sample_dir` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_migrations.py:L97–L97` |
| `MigrationsSamplesJsonTestV2_23.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_migrations.py:L98–L98` |
| `MigrationsSamplesJsonTestV2_23.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_migrations.py:L99–L99` |
| `MigrationsSamplesJsonTestV2_23.fake_migrations` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_migrations.py:L101–L182` |
| `MigrationsSamplesJsonTestV2_23.setUp` | method | (self) | public | not declared | 2/7 | `src/nova/tests/functional/api_sample_tests/test_migrations.py:L184–L191` |
| `MigrationsSamplesJsonTestV2_23.test_get_migrations_v2_23` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/api_sample_tests/test_migrations.py:L193–L199` |
| `MigrationsSamplesJsonTestV2_59` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_migrations.py:L202–L314` |
| `MigrationsSamplesJsonTestV2_59.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_migrations.py:L203–L203` |
| `MigrationsSamplesJsonTestV2_59.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_migrations.py:L204–L204` |
| `MigrationsSamplesJsonTestV2_59.fake_migrations` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_migrations.py:L205–L290` |
| `MigrationsSamplesJsonTestV2_59.test_get_migrations_with_limit` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/api_sample_tests/test_migrations.py:L292–L297` |
| `MigrationsSamplesJsonTestV2_59.test_get_migrations_with_marker` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/api_sample_tests/test_migrations.py:L299–L306` |
| `MigrationsSamplesJsonTestV2_59.test_get_migrations_with_changes_since` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/api_sample_tests/test_migrations.py:L308–L314` |
| `MigrationsSamplesJsonTestV2_66` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_migrations.py:L317–L327` |
| `MigrationsSamplesJsonTestV2_66.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_migrations.py:L318–L318` |
| `MigrationsSamplesJsonTestV2_66.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_migrations.py:L319–L319` |
| `MigrationsSamplesJsonTestV2_66.test_get_migrations_with_changes_before` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/api_sample_tests/test_migrations.py:L321–L327` |
| `MigrationsSamplesJsonTestV2_80` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_migrations.py:L330–L453` |
| `MigrationsSamplesJsonTestV2_80.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_migrations.py:L332–L332` |
| `MigrationsSamplesJsonTestV2_80.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_migrations.py:L333–L333` |
| `MigrationsSamplesJsonTestV2_80.USER_ID1` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_migrations.py:L334–L334` |
| `MigrationsSamplesJsonTestV2_80.PROJECT_ID1` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_migrations.py:L335–L335` |
| `MigrationsSamplesJsonTestV2_80.USER_ID2` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_migrations.py:L336–L336` |
| `MigrationsSamplesJsonTestV2_80.PROJECT_ID2` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_migrations.py:L337–L337` |
| `MigrationsSamplesJsonTestV2_80.fake_migrations` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_migrations.py:L339–L432` |
| `MigrationsSamplesJsonTestV2_80.test_get_migrations_with_user_id` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/api_sample_tests/test_migrations.py:L434–L438` |
| `MigrationsSamplesJsonTestV2_80.test_get_migrations_with_project_id` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/api_sample_tests/test_migrations.py:L440–L445` |
| `MigrationsSamplesJsonTestV2_80.test_get_migrations_with_user_and_project_id` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/api_sample_tests/test_migrations.py:L447–L453` |

## Dependencies

- `import datetime` (src/nova/tests/functional/api_sample_tests/test_migrations.py:L16)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/functional/api_sample_tests/test_migrations.py:L18)
- `nova`: imports `context` (src/nova/tests/functional/api_sample_tests/test_migrations.py:L20)
- `nova`: imports `objects` (src/nova/tests/functional/api_sample_tests/test_migrations.py:L21)
- `nova.tests.functional.api_sample_tests`: imports `api_sample_base` (src/nova/tests/functional/api_sample_tests/test_migrations.py:L22)

## Side Effects

- **global-mutation**: INSTANCE_UUID_1 = "8600d31b-d1a1-4632-b2ff-45c2be1a70ff" (src/nova/tests/functional/api_sample_tests/test_migrations.py:L27)
- **global-mutation**: INSTANCE_UUID_2 = "9128d044-7b61-403e-b766-7547076ff6c1" (src/nova/tests/functional/api_sample_tests/test_migrations.py:L28)
- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/api_sample_tests/test_migrations.py:L80)
- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/api_sample_tests/test_migrations.py:L96)
- **global-mutation**: USER_ID1 = "5c48ebaa-193f-4c5d-948a-f559cc92cd5e" (src/nova/tests/functional/api_sample_tests/test_migrations.py:L334)
- **global-mutation**: PROJECT_ID1 = "ef92ccff-00f3-46e4-b015-811110e36ee4" (src/nova/tests/functional/api_sample_tests/test_migrations.py:L335)
- **global-mutation**: USER_ID2 = "78348f0e-97ee-4d70-ad34-189692673ea2" (src/nova/tests/functional/api_sample_tests/test_migrations.py:L336)
- **global-mutation**: PROJECT_ID2 = "9842f0f7-1229-4355-afe7-15ebdbb8c3d8" (src/nova/tests/functional/api_sample_tests/test_migrations.py:L337)

