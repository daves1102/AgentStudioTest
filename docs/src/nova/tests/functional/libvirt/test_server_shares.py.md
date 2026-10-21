# src/nova/tests/functional/libvirt/test_server_shares.py

## Overview

This file implements the `test_server_shares` module, defining 3 classs, 5 constants, 1 field, 1 function, 30 methods, 16 imports, 5 side effects, 3 security surface entries.

Lines: total 645, code 471, comment 53, blank 121

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_server_shares.py:L32–L32` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_server_shares.py:L33–L33` |
| `ServerSharesTestBase` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_server_shares.py:L36–L133` |
| `ServerSharesTestBase.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_server_shares.py:L37–L37` |
| `ServerSharesTestBase.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_server_shares.py:L38–L38` |
| `ServerSharesTestBase.FAKE_LIBVIRT_VERSION` | constant | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_server_shares.py:L39–L39` |
| `ServerSharesTestBase.FAKE_QEMU_VERSION` | constant | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_server_shares.py:L40–L40` |
| `ServerSharesTestBase.setUp` | method | (self) | public | not declared | 1/28 | `src/nova/tests/functional/libvirt/test_server_shares.py:L42–L76` |
| `ServerSharesTestBase._get_xml` | method | (self, server) | private | `xml` (src/nova/tests/functional/libvirt/test_server_shares.py:L83) | 1/6 | `src/nova/tests/functional/libvirt/test_server_shares.py:L78–L83` |
| `ServerSharesTestBase._get_filesystem_tag` | method | (self, xml, tag) | private | `tags` (src/nova/tests/functional/libvirt/test_server_shares.py:L93) | 2/9 | `src/nova/tests/functional/libvirt/test_server_shares.py:L85–L93` |
| `ServerSharesTestBase._assert_filesystem_tag` | method | (self, xml, tag) | private | not declared | 1/3 | `src/nova/tests/functional/libvirt/test_server_shares.py:L95–L97` |
| `ServerSharesTestBase._assert_filesystem_tag_not_present` | method | (self, xml, tag) | private | not declared | 1/3 | `src/nova/tests/functional/libvirt/test_server_shares.py:L99–L101` |
| `ServerSharesTestBase._get_metadata_url` | method | (self, server) | private | `url` (src/nova/tests/functional/libvirt/test_server_shares.py:L115) | 1/8 | `src/nova/tests/functional/libvirt/test_server_shares.py:L103–L115` |
| `ServerSharesTestBase._get_metadata_url.fake_get_fixed_ip_by_address` | function | (self, ctxt, address) | public | `{'instance_uuid': server['id']}` (src/nova/tests/functional/libvirt/test_server_shares.py:L108) | — | `src/nova/tests/functional/libvirt/test_server_shares.py:L107–L108` |
| `ServerSharesTestBase._assert_share_in_metadata` | method | (self, metatdata_url, share_id, tag) | private | not declared | 2/8 | `src/nova/tests/functional/libvirt/test_server_shares.py:L117–L124` |
| `ServerSharesTestBase._check_traits` | method | (self) | private | not declared | 1/6 | `src/nova/tests/functional/libvirt/test_server_shares.py:L126–L133` |
| `ServerSharesTest` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_server_shares.py:L136–L514` |
| `ServerSharesTest.test_server_share_metadata` | method | (self) | public | `(server, share_id)` (src/nova/tests/functional/libvirt/test_server_shares.py:L155) | 1/11 | `src/nova/tests/functional/libvirt/test_server_shares.py:L138–L155` |
| `ServerSharesTest.test_server_share_metadata_with_tag` | method | (self) | public | `(server, share_id)` (src/nova/tests/functional/libvirt/test_server_shares.py:L175) | 1/12 | `src/nova/tests/functional/libvirt/test_server_shares.py:L157–L175` |
| `ServerSharesTest.test_server_share_fails_with_tag_already_used` | method | (self) | public | not declared | 1/22 | `src/nova/tests/functional/libvirt/test_server_shares.py:L177–L203` |
| `ServerSharesTest.test_server_cephfs_share_metadata` | method | (self) | public | `(server, share_id)` (src/nova/tests/functional/libvirt/test_server_shares.py:L238) | 4/22 | `src/nova/tests/functional/libvirt/test_server_shares.py:L205–L238` |
| `ServerSharesTest._cephfs_grants` | method | (self, share_id) | private | `{ grant[2] for grant in self.manila_fixture.share_access if grant[0] == share_id and grant[1] == 'cephx' }` (src/nova/tests/functional/libvirt/test_server_shares.py:L241) | 4/5 | `src/nova/tests/functional/libvirt/test_server_shares.py:L240–L244` |
| `ServerSharesTest.test_cephfs_share_per_instance_identity` | method | (self) | public | not declared | 1/25 | `src/nova/tests/functional/libvirt/test_server_shares.py:L246–L276` |
| `ServerSharesTest.test_reconcile_removes_stale_cephfs_grant` | method | (self) | public | not declared | 1/14 | `src/nova/tests/functional/libvirt/test_server_shares.py:L278–L297` |
| `ServerSharesTest.test_server_share_after_hard_reboot` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/libvirt/test_server_shares.py:L299–L307` |
| `ServerSharesTest.test_server_share_mount_failure` | method | (self) | public | `(server, share_id)` (src/nova/tests/functional/libvirt/test_server_shares.py:L351) | 1/31 | `src/nova/tests/functional/libvirt/test_server_shares.py:L309–L351` |
| `ServerSharesTest.test_server_start_fails_share_in_error` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/libvirt/test_server_shares.py:L353–L359` |
| `ServerSharesTest._verify_start_fails_share_in_error` | method | (self, server, share_id) | private | not declared | 1/35 | `src/nova/tests/functional/libvirt/test_server_shares.py:L361–L409` |
| `ServerSharesTest.test_detach_server_share_in_error` | method | (self) | public | not declared | 1/24 | `src/nova/tests/functional/libvirt/test_server_shares.py:L411–L450` |
| `ServerSharesTest.test_server_share_umount_failure` | method | (self) | public | `(server, share_id)` (src/nova/tests/functional/libvirt/test_server_shares.py:L479) | 1/22 | `src/nova/tests/functional/libvirt/test_server_shares.py:L452–L479` |
| `ServerSharesTest.test_server_resume_with_shares` | method | (self) | public | not declared | 1/11 | `src/nova/tests/functional/libvirt/test_server_shares.py:L481–L492` |
| `ServerSharesTest.test_server_rescue_with_shares` | method | (self) | public | `(server, share_id)` (src/nova/tests/functional/libvirt/test_server_shares.py:L514) | 1/15 | `src/nova/tests/functional/libvirt/test_server_shares.py:L494–L514` |
| `ServerSharesColdMigrateTest` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_server_shares.py:L517–L645` |
| `ServerSharesColdMigrateTest.setUp` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/libvirt/test_server_shares.py:L519–L526` |
| `ServerSharesColdMigrateTest._get_xml_on_host` | method | (self, server, hostname) | private | `guest.get_xml_desc()` (src/nova/tests/functional/libvirt/test_server_shares.py:L532) | 1/5 | `src/nova/tests/functional/libvirt/test_server_shares.py:L528–L532` |
| `ServerSharesColdMigrateTest._setup_server_with_share` | method | (self) | private | `server, share_id` (src/nova/tests/functional/libvirt/test_server_shares.py:L540) | 1/7 | `src/nova/tests/functional/libvirt/test_server_shares.py:L534–L540` |
| `ServerSharesColdMigrateTest.test_cold_migrate_with_share` | method | (self) | public | not declared | 1/17 | `src/nova/tests/functional/libvirt/test_server_shares.py:L542–L561` |
| `ServerSharesColdMigrateTest.test_cold_migrate_revert_with_share` | method | (self) | public | not declared | 1/16 | `src/nova/tests/functional/libvirt/test_server_shares.py:L563–L580` |
| `ServerSharesColdMigrateTest.test_cold_migrate_with_share_mount_failure` | method | (self) | public | not declared | 1/17 | `src/nova/tests/functional/libvirt/test_server_shares.py:L582–L600` |
| `ServerSharesColdMigrateTest.test_cold_migrate_same_host_with_share` | method | (self) | public | not declared | 3/33 | `src/nova/tests/functional/libvirt/test_server_shares.py:L602–L645` |

## Dependencies

- `import fixtures` (src/nova/tests/functional/libvirt/test_server_shares.py:L13)
- `lxml`: imports `etree` (src/nova/tests/functional/libvirt/test_server_shares.py:L14)
- `import os` (src/nova/tests/functional/libvirt/test_server_shares.py:L15)
- `requests`: imports `request` (src/nova/tests/functional/libvirt/test_server_shares.py:L16)
- `unittest`: imports `mock` (src/nova/tests/functional/libvirt/test_server_shares.py:L17)
- `nova`: imports `context as nova_context` (src/nova/tests/functional/libvirt/test_server_shares.py:L19)
- `nova`: imports `exception` (src/nova/tests/functional/libvirt/test_server_shares.py:L20)
- `nova.objects`: imports `instance` (src/nova/tests/functional/libvirt/test_server_shares.py:L21)
- `nova.objects`: imports `share_mapping` (src/nova/tests/functional/libvirt/test_server_shares.py:L22)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/functional/libvirt/test_server_shares.py:L23)
- `nova.tests.functional.api`: imports `client` (src/nova/tests/functional/libvirt/test_server_shares.py:L24)
- `nova.tests.functional.libvirt`: imports `base` (src/nova/tests/functional/libvirt/test_server_shares.py:L25)
- `oslo_concurrency`: imports `processutils` (src/nova/tests/functional/libvirt/test_server_shares.py:L27)
- `oslo_config`: imports `cfg` (src/nova/tests/functional/libvirt/test_server_shares.py:L28)
- `oslo_log`: imports `log as logging` (src/nova/tests/functional/libvirt/test_server_shares.py:L29)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/functional/libvirt/test_server_shares.py:L30)

## Side Effects

- **global-mutation**: CONF = cfg.CONF (src/nova/tests/functional/libvirt/test_server_shares.py:L32)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/tests/functional/libvirt/test_server_shares.py:L33)
- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/libvirt/test_server_shares.py:L38)
- **global-mutation**: FAKE_LIBVIRT_VERSION = 8000000 (src/nova/tests/functional/libvirt/test_server_shares.py:L39)
- **global-mutation**: FAKE_QEMU_VERSION = 6002000 (src/nova/tests/functional/libvirt/test_server_shares.py:L40)

## Security Surface

- **entry-point** (`env`): os.environ['OS_DEBUG'] = "true" (src/nova/tests/functional/libvirt/test_server_shares.py:L310)
- **entry-point** (`env`): os.environ['OS_DEBUG'] = "true" (src/nova/tests/functional/libvirt/test_server_shares.py:L415)
- **entry-point** (`env`): os.environ['OS_DEBUG'] = "true" (src/nova/tests/functional/libvirt/test_server_shares.py:L454)

