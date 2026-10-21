# src/nova/tests/functional/compute/test_live_migration.py

## Overview

This file implements the `test_live_migration` module, defining 4 classs, 3 constants, 3 fields, 3 functions, 8 methods, 9 imports, 6 side effects.

Lines: total 280, code 189, comment 50, blank 41

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `FakeCinderError` | class | — | exported | not declared | — | `src/nova/tests/functional/compute/test_live_migration.py:L28–L43` |
| `FakeCinderError.__init__` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/compute/test_live_migration.py:L35–L37` |
| `FakeCinderError.__call__` | method | (self, *args, **kwargs) | public | not declared | 2/5 | `src/nova/tests/functional/compute/test_live_migration.py:L39–L43` |
| `LiveMigrationCinderFailure` | class | — | exported | not declared | — | `src/nova/tests/functional/compute/test_live_migration.py:L46–L96` |
| `LiveMigrationCinderFailure.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/compute/test_live_migration.py:L48–L48` |
| `LiveMigrationCinderFailure.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/compute/test_live_migration.py:L49–L49` |
| `LiveMigrationCinderFailure.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/compute/test_live_migration.py:L51–L56` |
| `LiveMigrationCinderFailure.test_live_migrate_attachment_delete_fails` | method | (self) | public | not declared | 2/37 | `src/nova/tests/functional/compute/test_live_migration.py:L58–L96` |
| `TestVolAttachmentsDuringLiveMigration` | class | — | exported | not declared | — | `src/nova/tests/functional/compute/test_live_migration.py:L99–L240` |
| `TestVolAttachmentsDuringLiveMigration.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/compute/test_live_migration.py:L106–L106` |
| `TestVolAttachmentsDuringLiveMigration.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/compute/test_live_migration.py:L107–L107` |
| `TestVolAttachmentsDuringLiveMigration._setup_compute_service` | method | (self) | private | not declared | 1/3 | `src/nova/tests/functional/compute/test_live_migration.py:L109–L111` |
| `TestVolAttachmentsDuringLiveMigration.test_vol_attachments_during_driver_live_mig_failure` | method | (self, mock_lm) | public | not declared | 1/56 | `src/nova/tests/functional/compute/test_live_migration.py:L114–L240` |
| `TestVolAttachmentsDuringLiveMigration.test_vol_attachments_during_driver_live_mig_failure._fake_live_migration_with_rollback` | function | (context, instance, dest, post_method, recover_method, block_migration=False, migrate_data=None) | private | not declared | — | `src/nova/tests/functional/compute/test_live_migration.py:L131–L137` |
| `TestVolAttachmentsDuringLiveMigration.test_vol_attachments_during_driver_live_mig_failure.wrap_pre_live_migration` | function | (*args, **kwargs) | public | `migrate_data` (src/nova/tests/functional/compute/test_live_migration.py:L207) | — | `src/nova/tests/functional/compute/test_live_migration.py:L187–L207` |
| `LiveMigrationNeutronInteractionsTest` | class | — | exported | not declared | — | `src/nova/tests/functional/compute/test_live_migration.py:L243–L280` |
| `LiveMigrationNeutronInteractionsTest.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/compute/test_live_migration.py:L247–L247` |
| `LiveMigrationNeutronInteractionsTest.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/compute/test_live_migration.py:L248–L248` |
| `LiveMigrationNeutronInteractionsTest._setup_compute_service` | method | (self) | private | not declared | 1/3 | `src/nova/tests/functional/compute/test_live_migration.py:L250–L252` |
| `LiveMigrationNeutronInteractionsTest.test_live_migrate_vifs_from_info_cache` | method | (self) | public | not declared | 1/11 | `src/nova/tests/functional/compute/test_live_migration.py:L254–L280` |
| `LiveMigrationNeutronInteractionsTest.test_live_migrate_vifs_from_info_cache.stub_notify` | function | (context, instance, event_suffix, network_info=None, extra_usage_info=None, fault=None, best_effort=False) | public | not declared | — | `src/nova/tests/functional/compute/test_live_migration.py:L258–L267` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/functional/compute/test_live_migration.py:L15)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/functional/compute/test_live_migration.py:L17)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/functional/compute/test_live_migration.py:L18)
- `nova`: imports `context` (src/nova/tests/functional/compute/test_live_migration.py:L20)
- `nova`: imports `exception` (src/nova/tests/functional/compute/test_live_migration.py:L21)
- `nova`: imports `objects` (src/nova/tests/functional/compute/test_live_migration.py:L22)
- `nova`: imports `test` (src/nova/tests/functional/compute/test_live_migration.py:L23)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/functional/compute/test_live_migration.py:L24)
- `nova.tests.functional`: imports `integrated_helpers` (src/nova/tests/functional/compute/test_live_migration.py:L25)

## Side Effects

- **network**: def stub_notify(context, instance, event_suffix, (src/nova/tests/functional/compute/test_live_migration.py:L258)
- **network**: side_effect=stub_notify) as mock_notify: (src/nova/tests/functional/compute/test_live_migration.py:L274)
- **network**: mock_notify.assert_called() (src/nova/tests/functional/compute/test_live_migration.py:L280)
- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/compute/test_live_migration.py:L48)
- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/compute/test_live_migration.py:L106)
- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/compute/test_live_migration.py:L247)

## Notes

- KB `sideEffects` entries at L258 have targets that appear to be code fragments rather than resource paths; documented as recorded.

