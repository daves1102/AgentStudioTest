# src/nova/tests/functional/api_sample_tests/test_server_migrations.py

## Overview

This file implements the `test_server_migrations` module, defining 6 classs, 9 constants, 17 fields, 13 methods, 9 imports, 9 side effects.

Lines: total 316, code 257, comment 21, blank 38

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ServerMigrationsSampleJsonTest` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_server_migrations.py:L29–L68` |
| `ServerMigrationsSampleJsonTest.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_server_migrations.py:L32–L32` |
| `ServerMigrationsSampleJsonTest.sample_dir` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_server_migrations.py:L33–L33` |
| `ServerMigrationsSampleJsonTest.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_server_migrations.py:L34–L34` |
| `ServerMigrationsSampleJsonTest.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_server_migrations.py:L35–L35` |
| `ServerMigrationsSampleJsonTest.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/api_sample_tests/test_server_migrations.py:L37–L40` |
| `ServerMigrationsSampleJsonTest.test_live_migrate_force_complete` | method | (self, live_migration_pause_instance, get_by_id_and_instance, service_get_by_compute_host, _live_migrate) | public | not declared | 1/14 | `src/nova/tests/functional/api_sample_tests/test_server_migrations.py:L47–L60` |
| `ServerMigrationsSampleJsonTest.test_get_migration` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/api_sample_tests/test_server_migrations.py:L62–L64` |
| `ServerMigrationsSampleJsonTest.test_list_migrations` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/api_sample_tests/test_server_migrations.py:L66–L68` |
| `ServerMigrationsSamplesJsonTestV2_23` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_server_migrations.py:L71–L169` |
| `ServerMigrationsSamplesJsonTestV2_23.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_server_migrations.py:L74–L74` |
| `ServerMigrationsSamplesJsonTestV2_23.sample_dir` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_server_migrations.py:L75–L75` |
| `ServerMigrationsSamplesJsonTestV2_23.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_server_migrations.py:L76–L76` |
| `ServerMigrationsSamplesJsonTestV2_23.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_server_migrations.py:L77–L77` |
| `ServerMigrationsSamplesJsonTestV2_23.UUID_1` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_server_migrations.py:L78–L78` |
| `ServerMigrationsSamplesJsonTestV2_23.UUID_2` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_server_migrations.py:L79–L79` |
| `ServerMigrationsSamplesJsonTestV2_23.fake_migrations` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_server_migrations.py:L81–L126` |
| `ServerMigrationsSamplesJsonTestV2_23.setUp` | method | (self) | public | not declared | 1/20 | `src/nova/tests/functional/api_sample_tests/test_server_migrations.py:L128–L150` |
| `ServerMigrationsSamplesJsonTestV2_23.test_get_migration` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/api_sample_tests/test_server_migrations.py:L152–L160` |
| `ServerMigrationsSamplesJsonTestV2_23.test_list_migrations` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/api_sample_tests/test_server_migrations.py:L162–L169` |
| `ServerMigrationsSampleJsonTestV2_24` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_server_migrations.py:L172–L223` |
| `ServerMigrationsSampleJsonTestV2_24.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_server_migrations.py:L175–L175` |
| `ServerMigrationsSampleJsonTestV2_24.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_server_migrations.py:L176–L176` |
| `ServerMigrationsSampleJsonTestV2_24.sample_dir` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_server_migrations.py:L177–L177` |
| `ServerMigrationsSampleJsonTestV2_24.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_server_migrations.py:L178–L178` |
| `ServerMigrationsSampleJsonTestV2_24.setUp` | method | (self) | public | not declared | 1/16 | `src/nova/tests/functional/api_sample_tests/test_server_migrations.py:L180–L197` |
| `ServerMigrationsSampleJsonTestV2_24.test_live_migrate_abort` | method | (self, _live_migrate) | public | not declared | 1/6 | `src/nova/tests/functional/api_sample_tests/test_server_migrations.py:L200–L205` |
| `ServerMigrationsSampleJsonTestV2_24.test_live_migrate_abort_migration_not_found` | method | (self, _live_migrate) | public | not declared | 1/6 | `src/nova/tests/functional/api_sample_tests/test_server_migrations.py:L208–L213` |
| `ServerMigrationsSampleJsonTestV2_24.test_live_migrate_abort_migration_not_running` | method | (self, _live_migrate) | public | not declared | 1/8 | `src/nova/tests/functional/api_sample_tests/test_server_migrations.py:L216–L223` |
| `ServerMigrationsSamplesJsonTestV2_59` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_server_migrations.py:L226–L238` |
| `ServerMigrationsSamplesJsonTestV2_59.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_server_migrations.py:L229–L229` |
| `ServerMigrationsSamplesJsonTestV2_59.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_server_migrations.py:L230–L230` |
| `ServerMigrationsSamplesJsonTestV2_59.setUp` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/api_sample_tests/test_server_migrations.py:L232–L238` |
| `ServerMigrationsSampleJsonTestV2_65` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_server_migrations.py:L241–L255` |
| `ServerMigrationsSampleJsonTestV2_65.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_server_migrations.py:L242–L242` |
| `ServerMigrationsSampleJsonTestV2_65.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_server_migrations.py:L243–L243` |
| `ServerMigrationsSampleJsonTestV2_65.test_live_migrate_abort_migration_queued` | method | (self, _live_migrate) | public | not declared | 1/10 | `src/nova/tests/functional/api_sample_tests/test_server_migrations.py:L246–L255` |
| `ServerMigrationsSampleJsonTestV2_80` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_server_migrations.py:L258–L316` |
| `ServerMigrationsSampleJsonTestV2_80.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_server_migrations.py:L260–L260` |
| `ServerMigrationsSampleJsonTestV2_80.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_server_migrations.py:L261–L261` |
| `ServerMigrationsSampleJsonTestV2_80.UUID_1` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_server_migrations.py:L263–L263` |
| `ServerMigrationsSampleJsonTestV2_80.UUID_2` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_server_migrations.py:L264–L264` |
| `ServerMigrationsSampleJsonTestV2_80.USER_ID` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_server_migrations.py:L266–L266` |
| `ServerMigrationsSampleJsonTestV2_80.PROJECT_ID` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_server_migrations.py:L267–L267` |
| `ServerMigrationsSampleJsonTestV2_80.fake_migrations` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_server_migrations.py:L269–L316` |

## Dependencies

- `import datetime` (src/nova/tests/functional/api_sample_tests/test_server_migrations.py:L16)
- `unittest`: imports `mock` (src/nova/tests/functional/api_sample_tests/test_server_migrations.py:L17)
- `import futurist` (src/nova/tests/functional/api_sample_tests/test_server_migrations.py:L19)
- `nova.conductor`: imports `manager as conductor_manager` (src/nova/tests/functional/api_sample_tests/test_server_migrations.py:L21)
- `nova`: imports `context` (src/nova/tests/functional/api_sample_tests/test_server_migrations.py:L22)
- `nova.db.main`: imports `api as db` (src/nova/tests/functional/api_sample_tests/test_server_migrations.py:L23)
- `nova`: imports `objects` (src/nova/tests/functional/api_sample_tests/test_server_migrations.py:L24)
- `nova.tests.functional.api_sample_tests`: imports `test_servers` (src/nova/tests/functional/api_sample_tests/test_server_migrations.py:L25)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/functional/api_sample_tests/test_server_migrations.py:L26)

## Side Effects

- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/api_sample_tests/test_server_migrations.py:L32)
- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/api_sample_tests/test_server_migrations.py:L74)
- **global-mutation**: UUID_1 = '4cfba335-03d8-49b2-8c52-e69043d1e8fe' (src/nova/tests/functional/api_sample_tests/test_server_migrations.py:L78)
- **global-mutation**: UUID_2 = '058fc419-a8a8-4e08-b62c-a9841ef9cd3f' (src/nova/tests/functional/api_sample_tests/test_server_migrations.py:L79)
- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/api_sample_tests/test_server_migrations.py:L175)
- **global-mutation**: UUID_1 = '4cfba335-03d8-49b2-8c52-e69043d1e8fe' (src/nova/tests/functional/api_sample_tests/test_server_migrations.py:L263)
- **global-mutation**: UUID_2 = '058fc419-a8a8-4e08-b62c-a9841ef9cd3f' (src/nova/tests/functional/api_sample_tests/test_server_migrations.py:L264)
- **global-mutation**: USER_ID = '8dbaa0f0-ab95-4ffe-8cb4-9c89d2ac9d24' (src/nova/tests/functional/api_sample_tests/test_server_migrations.py:L266)
- **global-mutation**: PROJECT_ID = '5f705771-3aa9-4f4c-8660-0d9522ffdbea' (src/nova/tests/functional/api_sample_tests/test_server_migrations.py:L267)

