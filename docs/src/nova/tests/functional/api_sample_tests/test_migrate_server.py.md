# src/nova/tests/functional/api_sample_tests/test_migrate_server.py

## Overview

This file implements the `test_migrate_server` module, defining 5 classs, 3 constants, 13 fields, 5 functions, 16 methods, 5 imports, 3 side effects.

Lines: total 228, code 157, comment 26, blank 45

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `fake_get_compute` | function | (context, host) | exported | `{'compute_node': [service]}` (src/nova/tests/functional/api_sample_tests/test_migrate_server.py:L37) | 1/11 | `src/nova/tests/functional/api_sample_tests/test_migrate_server.py:L25–L37` |
| `MigrateServerSamplesJsonTest` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_migrate_server.py:L40–L98` |
| `MigrateServerSamplesJsonTest.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_migrate_server.py:L42–L42` |
| `MigrateServerSamplesJsonTest.sample_dir` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_migrate_server.py:L43–L43` |
| `MigrateServerSamplesJsonTest.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/api_sample_tests/test_migrate_server.py:L45–L52` |
| `MigrateServerSamplesJsonTest.test_post_migrate` | method | (self, mock_cold_migrate) | public | not declared | 1/4 | `src/nova/tests/functional/api_sample_tests/test_migrate_server.py:L55–L59` |
| `MigrateServerSamplesJsonTest._check_post_live_migrate_server` | method | (self, req_subs=None) | private | not declared | 2/14 | `src/nova/tests/functional/api_sample_tests/test_migrate_server.py:L61–L81` |
| `MigrateServerSamplesJsonTest._check_post_live_migrate_server.fake_live_migrate` | function | (_self, context, instance, scheduler_hint, block_migration, disk_over_commit, request_spec) | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_migrate_server.py:L65–L69` |
| `MigrateServerSamplesJsonTest.test_post_live_migrate_server` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/api_sample_tests/test_migrate_server.py:L83–L85` |
| `MigrateServerSamplesJsonTest.test_live_migrate_compute_host_not_found` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/api_sample_tests/test_migrate_server.py:L87–L98` |
| `MigrateServerSamplesJsonTest.test_live_migrate_compute_host_not_found.fake_execute` | function | (_self) | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_migrate_server.py:L90–L91` |
| `MigrateServerSamplesJsonTestV225` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_migrate_server.py:L101–L108` |
| `MigrateServerSamplesJsonTestV225.sample_dir` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_migrate_server.py:L102–L102` |
| `MigrateServerSamplesJsonTestV225.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_migrate_server.py:L103–L103` |
| `MigrateServerSamplesJsonTestV225.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_migrate_server.py:L104–L104` |
| `MigrateServerSamplesJsonTestV225.test_post_migrate` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/api_sample_tests/test_migrate_server.py:L106–L108` |
| `MigrateServerSamplesJsonTestV230` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_migrate_server.py:L111–L151` |
| `MigrateServerSamplesJsonTestV230.sample_dir` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_migrate_server.py:L112–L112` |
| `MigrateServerSamplesJsonTestV230.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_migrate_server.py:L113–L113` |
| `MigrateServerSamplesJsonTestV230.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_migrate_server.py:L114–L114` |
| `MigrateServerSamplesJsonTestV230.test_post_migrate` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/api_sample_tests/test_migrate_server.py:L116–L118` |
| `MigrateServerSamplesJsonTestV230.test_post_live_migrate_server` | method | (self, compute_node_get_all_by_host) | public | not declared | 1/9 | `src/nova/tests/functional/api_sample_tests/test_migrate_server.py:L121–L131` |
| `MigrateServerSamplesJsonTestV230.test_post_live_migrate_server_with_force` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/api_sample_tests/test_migrate_server.py:L133–L137` |
| `MigrateServerSamplesJsonTestV230.test_live_migrate_compute_host_not_found` | method | (self) | public | not declared | 1/10 | `src/nova/tests/functional/api_sample_tests/test_migrate_server.py:L139–L151` |
| `MigrateServerSamplesJsonTestV230.test_live_migrate_compute_host_not_found.fake_execute` | function | (_self) | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_migrate_server.py:L142–L143` |
| `MigrateServerSamplesJsonTestV256` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_migrate_server.py:L154–L192` |
| `MigrateServerSamplesJsonTestV256.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_migrate_server.py:L156–L156` |
| `MigrateServerSamplesJsonTestV256.sample_dir` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_migrate_server.py:L157–L157` |
| `MigrateServerSamplesJsonTestV256.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_migrate_server.py:L158–L158` |
| `MigrateServerSamplesJsonTestV256.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_migrate_server.py:L159–L159` |
| `MigrateServerSamplesJsonTestV256.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/api_sample_tests/test_migrate_server.py:L161–L167` |
| `MigrateServerSamplesJsonTestV256.test_post_migrate` | method | (self, mock_cold_migrate) | public | not declared | 1/5 | `src/nova/tests/functional/api_sample_tests/test_migrate_server.py:L170–L174` |
| `MigrateServerSamplesJsonTestV256.test_post_migrate_with_host` | method | (self, mock_cold_migrate, mock_get_all_by_host) | public | not declared | 1/6 | `src/nova/tests/functional/api_sample_tests/test_migrate_server.py:L180–L185` |
| `MigrateServerSamplesJsonTestV256.test_post_migrate_null` | method | (self, mock_cold_migrate) | public | not declared | 1/4 | `src/nova/tests/functional/api_sample_tests/test_migrate_server.py:L188–L192` |
| `MigrateServerSamplesJsonTestV268` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_migrate_server.py:L195–L228` |
| `MigrateServerSamplesJsonTestV268.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_migrate_server.py:L197–L197` |
| `MigrateServerSamplesJsonTestV268.sample_dir` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_migrate_server.py:L198–L198` |
| `MigrateServerSamplesJsonTestV268.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_migrate_server.py:L199–L199` |
| `MigrateServerSamplesJsonTestV268.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_migrate_server.py:L200–L200` |
| `MigrateServerSamplesJsonTestV268.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/api_sample_tests/test_migrate_server.py:L202–L208` |
| `MigrateServerSamplesJsonTestV268.test_post_live_migrate_server` | method | (self) | public | not declared | 1/13 | `src/nova/tests/functional/api_sample_tests/test_migrate_server.py:L210–L228` |
| `MigrateServerSamplesJsonTestV268.test_post_live_migrate_server.fake_live_migrate` | function | (_self, context, instance, scheduler_hint, block_migration, disk_over_commit, request_spec) | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_migrate_server.py:L214–L216` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/functional/api_sample_tests/test_migrate_server.py:L16)
- `oslo_utils`: imports `versionutils` (src/nova/tests/functional/api_sample_tests/test_migrate_server.py:L18)
- `nova`: imports `exception` (src/nova/tests/functional/api_sample_tests/test_migrate_server.py:L20)
- `nova`: imports `objects` (src/nova/tests/functional/api_sample_tests/test_migrate_server.py:L21)
- `nova.tests.functional.api_sample_tests`: imports `test_servers` (src/nova/tests/functional/api_sample_tests/test_migrate_server.py:L22)

## Side Effects

- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/api_sample_tests/test_migrate_server.py:L42)
- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/api_sample_tests/test_migrate_server.py:L156)
- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/api_sample_tests/test_migrate_server.py:L197)

