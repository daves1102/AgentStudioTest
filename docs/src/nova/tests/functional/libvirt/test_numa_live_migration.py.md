# src/nova/tests/functional/libvirt/test_numa_live_migration.py

## Overview

This file implements the `test_numa_live_migration` module, defining 8 classs, 4 constants, 3 fields, 2 functions, 31 methods, 10 imports, 4 side effects, 2 security surface entries.

Lines: total 672, code 457, comment 116, blank 99

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_numa_live_migration.py:L30–L30` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_numa_live_migration.py:L31–L31` |
| `NUMALiveMigrationBase` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_numa_live_migration.py:L34–L92` |
| `NUMALiveMigrationBase.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_numa_live_migration.py:L42–L42` |
| `NUMALiveMigrationBase.ADDITIONAL_FILTERS` | constant | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_numa_live_migration.py:L43–L43` |
| `NUMALiveMigrationBase.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_numa_live_migration.py:L44–L44` |
| `NUMALiveMigrationBase.setUp` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/libvirt/test_numa_live_migration.py:L46–L66` |
| `NUMALiveMigrationBase.get_host` | method | (self, server_id) | public | `server['OS-EXT-SRV-ATTR:host']` (src/nova/tests/functional/libvirt/test_numa_live_migration.py:L70) | 1/3 | `src/nova/tests/functional/libvirt/test_numa_live_migration.py:L68–L70` |
| `NUMALiveMigrationBase._get_migration_context` | method | (self, instance_uuid) | private | `objects.MigrationContext.get_by_instance_uuid(ctxt, instance_uuid)` (src/nova/tests/functional/libvirt/test_numa_live_migration.py:L74) | 1/4 | `src/nova/tests/functional/libvirt/test_numa_live_migration.py:L72–L75` |
| `NUMALiveMigrationBase._assert_instance_pinned_cpus` | method | (self, uuid, instance_cpus, host_cpus) | private | not declared | 2/9 | `src/nova/tests/functional/libvirt/test_numa_live_migration.py:L77–L86` |
| `NUMALiveMigrationBase._assert_host_consumed_cpus` | method | (self, host, cpus) | private | not declared | 1/5 | `src/nova/tests/functional/libvirt/test_numa_live_migration.py:L88–L92` |
| `NUMALiveMigrationPositiveBase` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_numa_live_migration.py:L95–L138` |
| `NUMALiveMigrationPositiveBase.setUp` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/libvirt/test_numa_live_migration.py:L101–L102` |
| `NUMALiveMigrationPositiveBase.start_computes_and_servers` | method | (self) | public | not declared | 2/19 | `src/nova/tests/functional/libvirt/test_numa_live_migration.py:L104–L129` |
| `NUMALiveMigrationPositiveBase._rpc_pin_host` | method | (self, hostname) | private | not declared | 1/8 | `src/nova/tests/functional/libvirt/test_numa_live_migration.py:L131–L138` |
| `NUMALiveMigrationPositiveTests` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_numa_live_migration.py:L141–L287` |
| `NUMALiveMigrationPositiveTests._migrate_stub` | method | (self, domain, destination, params, flags) | private | not declared | 1/24 | `src/nova/tests/functional/libvirt/test_numa_live_migration.py:L146–L195` |
| `NUMALiveMigrationPositiveTests._test` | method | (self, pin_dest) | private | not declared | 2/21 | `src/nova/tests/functional/libvirt/test_numa_live_migration.py:L197–L239` |
| `NUMALiveMigrationPositiveTests.test_numa_live_migration` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/libvirt/test_numa_live_migration.py:L241–L242` |
| `NUMALiveMigrationPositiveTests.test_numa_live_migration_dest_pinned` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/libvirt/test_numa_live_migration.py:L244–L245` |
| `NUMALiveMigrationPositiveTests.test_bug_1843639` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/libvirt/test_numa_live_migration.py:L247–L287` |
| `NUMALiveMigrationPositiveTests.test_bug_1843639.live_migration` | function | (*args, **kwargs) | public | `orig_live_migration(*args, **kwargs)` (src/nova/tests/functional/libvirt/test_numa_live_migration.py:L281) | — | `src/nova/tests/functional/libvirt/test_numa_live_migration.py:L265–L281` |
| `NUMALiveMigrationRollbackTests` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_numa_live_migration.py:L290–L426` |
| `NUMALiveMigrationRollbackTests._migrate_stub` | method | (self, domain, destination, params, flags) | private | not declared | 1/14 | `src/nova/tests/functional/libvirt/test_numa_live_migration.py:L296–L322` |
| `NUMALiveMigrationRollbackTests._test` | method | (self, pin_dest=False) | private | not declared | 2/11 | `src/nova/tests/functional/libvirt/test_numa_live_migration.py:L324–L342` |
| `NUMALiveMigrationRollbackTests._test_rollback` | method | (self, pin_dest=False) | private | not declared | 1/6 | `src/nova/tests/functional/libvirt/test_numa_live_migration.py:L344–L353` |
| `NUMALiveMigrationRollbackTests.test_rollback` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/libvirt/test_numa_live_migration.py:L355–L356` |
| `NUMALiveMigrationRollbackTests.test_rollback_pinned_dest` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/libvirt/test_numa_live_migration.py:L358–L359` |
| `NUMALiveMigrationRollbackTests._test_bug_1894095` | method | (self, pre_drop_race=False, post_drop_race=False) | private | not declared | 1/10 | `src/nova/tests/functional/libvirt/test_numa_live_migration.py:L361–L420` |
| `NUMALiveMigrationRollbackTests._test_bug_1894095.drop_move_claim` | function | (*args, **kwargs) | public | `result` (src/nova/tests/functional/libvirt/test_numa_live_migration.py:L410) | — | `src/nova/tests/functional/libvirt/test_numa_live_migration.py:L371–L410` |
| `NUMALiveMigrationRollbackTests.test_bug_1894095_pre_drop` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/libvirt/test_numa_live_migration.py:L422–L423` |
| `NUMALiveMigrationRollbackTests.test_bug_1894095_post_drop` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/libvirt/test_numa_live_migration.py:L425–L426` |
| `NUMALiveMigrationLegacyBase` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_numa_live_migration.py:L429–L520` |
| `NUMALiveMigrationLegacyBase.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_numa_live_migration.py:L441–L441` |
| `NUMALiveMigrationLegacyBase.setUp` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/libvirt/test_numa_live_migration.py:L443–L448` |
| `NUMALiveMigrationLegacyBase._test` | method | (self, pin_source, pin_cond, expect_success=True) | private | not declared | 5/59 | `src/nova/tests/functional/libvirt/test_numa_live_migration.py:L450–L520` |
| `NUMALiveMigrationLegacyTests` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_numa_live_migration.py:L523–L552` |
| `NUMALiveMigrationLegacyTests._migrate_stub` | method | (self, domain, destination, params, flags) | private | not declared | 1/12 | `src/nova/tests/functional/libvirt/test_numa_live_migration.py:L530–L546` |
| `NUMALiveMigrationLegacyTests.test_source_pinned_dest_unpinned` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/libvirt/test_numa_live_migration.py:L548–L549` |
| `NUMALiveMigrationLegacyTests.test_conductor_pinned` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/libvirt/test_numa_live_migration.py:L551–L552` |
| `NUMALiveMigrationLegacyRollbackTests` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_numa_live_migration.py:L555–L577` |
| `NUMALiveMigrationLegacyRollbackTests._migrate_stub` | method | (self, domain, destination, params, flags) | private | not declared | 1/8 | `src/nova/tests/functional/libvirt/test_numa_live_migration.py:L561–L571` |
| `NUMALiveMigrationLegacyRollbackTests.test_source_pinned_dest_unpinned` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/libvirt/test_numa_live_migration.py:L573–L574` |
| `NUMALiveMigrationLegacyRollbackTests.test_conductor_pinned` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/libvirt/test_numa_live_migration.py:L576–L577` |
| `NUMALiveMigrationNegativeTests` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_numa_live_migration.py:L580–L672` |
| `NUMALiveMigrationNegativeTests.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_numa_live_migration.py:L588–L588` |
| `NUMALiveMigrationNegativeTests.test_insufficient_resources` | method | (self) | public | not declared | 1/34 | `src/nova/tests/functional/libvirt/test_numa_live_migration.py:L590–L626` |
| `NUMALiveMigrationNegativeTests.test_different_page_sizes` | method | (self) | public | not declared | 2/42 | `src/nova/tests/functional/libvirt/test_numa_live_migration.py:L628–L672` |

## Dependencies

- `import fixtures` (src/nova/tests/functional/libvirt/test_numa_live_migration.py:L16)
- `oslo_config`: imports `cfg` (src/nova/tests/functional/libvirt/test_numa_live_migration.py:L18)
- `oslo_log`: imports `log as logging` (src/nova/tests/functional/libvirt/test_numa_live_migration.py:L19)
- `nova.compute`: imports `manager as compute_manager` (src/nova/tests/functional/libvirt/test_numa_live_migration.py:L21)
- `nova.compute`: imports `resource_tracker as rt` (src/nova/tests/functional/libvirt/test_numa_live_migration.py:L22)
- `nova`: imports `context` (src/nova/tests/functional/libvirt/test_numa_live_migration.py:L23)
- `nova`: imports `objects` (src/nova/tests/functional/libvirt/test_numa_live_migration.py:L24)
- `nova.tests.fixtures`: imports `libvirt as fakelibvirt` (src/nova/tests/functional/libvirt/test_numa_live_migration.py:L25)
- `nova.tests.functional`: imports `integrated_helpers` (src/nova/tests/functional/libvirt/test_numa_live_migration.py:L26)
- `nova.tests.functional.libvirt`: imports `base` (src/nova/tests/functional/libvirt/test_numa_live_migration.py:L27)

## Side Effects

- **global-mutation**: CONF = cfg.CONF (src/nova/tests/functional/libvirt/test_numa_live_migration.py:L30)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/tests/functional/libvirt/test_numa_live_migration.py:L31)
- **global-mutation**: ADDITIONAL_FILTERS = ['NUMATopologyFilter'] (src/nova/tests/functional/libvirt/test_numa_live_migration.py:L43)
- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/libvirt/test_numa_live_migration.py:L44)

## Security Surface

- **sink** (`db-write`): before the fix for 1845146 merged, and were ignored by the update (src/nova/tests/functional/libvirt/test_numa_live_migration.py:L249)
- **sink** (`db-write`): running the update available resources periodic task while the (src/nova/tests/functional/libvirt/test_numa_live_migration.py:L258)

