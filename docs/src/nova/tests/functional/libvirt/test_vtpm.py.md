# src/nova/tests/functional/libvirt/test_vtpm.py

## Overview

This file implements the `test_vtpm` module, defining 3 classs, 3 constants, 1 field, 2 functions, 45 methods, 18 imports, 3 side effects, 9 security surface entries.

Lines: total 1116, code 694, comment 184, blank 238

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_vtpm.py:L37–L37` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_vtpm.py:L38–L38` |
| `FakeKeyManager` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_vtpm.py:L41–L143` |
| `FakeKeyManager.__init__` | method | (self, configuration) | public | not declared | 1/4 | `src/nova/tests/functional/libvirt/test_vtpm.py:L50–L57` |
| `FakeKeyManager.create_key` | method | (self, context, algorithm, length, **kwargs) | public | not declared | 1/4 | `src/nova/tests/functional/libvirt/test_vtpm.py:L59–L66` |
| `FakeKeyManager.create_key_pair` | method | (self, context, **kwargs) | public | not declared | 1/4 | `src/nova/tests/functional/libvirt/test_vtpm.py:L68–L75` |
| `FakeKeyManager.store` | method | (self, context, managed_object, **kwargs) | public | `uuid` (src/nova/tests/functional/libvirt/test_vtpm.py:L91) | 3/11 | `src/nova/tests/functional/libvirt/test_vtpm.py:L77–L91` |
| `FakeKeyManager.get` | method | (self, context, managed_object_id) | public | `self._passphrases[managed_object_id]` (src/nova/tests/functional/libvirt/test_vtpm.py:L112) | 4/11 | `src/nova/tests/functional/libvirt/test_vtpm.py:L93–L112` |
| `FakeKeyManager.delete` | method | (self, context, managed_object_id) | public | not declared | 4/13 | `src/nova/tests/functional/libvirt/test_vtpm.py:L114–L133` |
| `FakeKeyManager.add_consumer` | method | (self, context, managed_object_id, consumer_data) | public | not declared | 1/4 | `src/nova/tests/functional/libvirt/test_vtpm.py:L135–L138` |
| `FakeKeyManager.remove_consumer` | method | (self, context, managed_object_id, consumer_data) | public | not declared | 1/4 | `src/nova/tests/functional/libvirt/test_vtpm.py:L140–L143` |
| `VTPMServersTest` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_vtpm.py:L149–L1107` |
| `VTPMServersTest.CAST_AS_CALL` | constant | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_vtpm.py:L155–L155` |
| `VTPMServersTest.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_vtpm.py:L159–L159` |
| `VTPMServersTest.setUp` | method | (self) | public | not declared | 1/15 | `src/nova/tests/functional/libvirt/test_vtpm.py:L161–L186` |
| `VTPMServersTest.setUp.fake_get_nova_service_user_context` | function | — | public | `nova_context.RequestContext(user_id='nova')` (src/nova/tests/functional/libvirt/test_vtpm.py:L182) | — | `src/nova/tests/functional/libvirt/test_vtpm.py:L181–L182` |
| `VTPMServersTest._create_server_with_vtpm` | method | (self, secret_security=None, expected_state='ACTIVE') | private | `server` (src/nova/tests/functional/libvirt/test_vtpm.py:L197) | 2/9 | `src/nova/tests/functional/libvirt/test_vtpm.py:L188–L197` |
| `VTPMServersTest._create_server_without_vtpm` | method | (self) | private | `self._create_server()` (src/nova/tests/functional/libvirt/test_vtpm.py:L201) | 1/2 | `src/nova/tests/functional/libvirt/test_vtpm.py:L199–L201` |
| `VTPMServersTest.assertInstanceHasSecret` | method | (self, server, user_id='fake') | public | `instance.system_metadata['vtpm_secret_uuid']` (src/nova/tests/functional/libvirt/test_vtpm.py:L212) | 1/9 | `src/nova/tests/functional/libvirt/test_vtpm.py:L203–L212` |
| `VTPMServersTest.assertInstanceHasNoSecret` | method | (self, server) | public | not declared | 1/5 | `src/nova/tests/functional/libvirt/test_vtpm.py:L214–L218` |
| `VTPMServersTest._assert_libvirt_has_secret` | method | (self, host, instance_uuid) | private | not declared | 1/7 | `src/nova/tests/functional/libvirt/test_vtpm.py:L220–L226` |
| `VTPMServersTest._assert_libvirt_had_secret` | method | (self, compute, secret_uuid) | private | not declared | 1/3 | `src/nova/tests/functional/libvirt/test_vtpm.py:L228–L235` |
| `VTPMServersTest._assert_libvirt_secret_missing` | method | (self, host, instance_uuid) | private | not declared | 1/3 | `src/nova/tests/functional/libvirt/test_vtpm.py:L237–L239` |
| `VTPMServersTest.test_tpm_secret_security_user` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/libvirt/test_vtpm.py:L241–L256` |
| `VTPMServersTest.test_tpm_secret_security_user_negative` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/libvirt/test_vtpm.py:L258–L263` |
| `VTPMServersTest.test_create_server` | method | (self) | public | not declared | 2/9 | `src/nova/tests/functional/libvirt/test_vtpm.py:L265–L284` |
| `VTPMServersTest.test_create_server_secret_security_host` | method | (self) | public | not declared | 1/17 | `src/nova/tests/functional/libvirt/test_vtpm.py:L286–L316` |
| `VTPMServersTest.test_create_server_secret_security_deployment` | method | (self) | public | not declared | 1/19 | `src/nova/tests/functional/libvirt/test_vtpm.py:L318–L351` |
| `VTPMServersTest.test_live_migrate_server_secret_security_user_too_old` | method | (self) | public | not declared | 1/15 | `src/nova/tests/functional/libvirt/test_vtpm.py:L353–L383` |
| `VTPMServersTest.test_live_migrate_server_secret_security_host_too_old` | method | (self) | public | not declared | 1/16 | `src/nova/tests/functional/libvirt/test_vtpm.py:L385–L415` |
| `VTPMServersTest.test_live_migrate_host_server_secret_security_host_too_old` | method | (self) | public | not declared | 1/16 | `src/nova/tests/functional/libvirt/test_vtpm.py:L417–L449` |
| `VTPMServersTest.test_live_migrate_host_force_server_secret_security_host_too_old` | method | (self) | public | not declared | 1/21 | `src/nova/tests/functional/libvirt/test_vtpm.py:L451–L491` |
| `VTPMServersTest.test_live_migrate_server_secret_security_host` | method | (self) | public | not declared | 1/14 | `src/nova/tests/functional/libvirt/test_vtpm.py:L496–L526` |
| `VTPMServersTest.test_live_migrate_server_secret_security_host_missing` | method | (self) | public | not declared | 1/24 | `src/nova/tests/functional/libvirt/test_vtpm.py:L531–L575` |
| `VTPMServersTest.test_live_migrate_server_secret_security_host_rollback` | method | (self) | public | not declared | 1/25 | `src/nova/tests/functional/libvirt/test_vtpm.py:L580–L639` |
| `VTPMServersTest.test_live_migrate_server_secret_security_host_rollback._migrate_stub` | function | (domain, destination, params, flags) | private | not declared | — | `src/nova/tests/functional/libvirt/test_vtpm.py:L587–L593` |
| `VTPMServersTest.test_suspend_resume_server` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/libvirt/test_vtpm.py:L641–L660` |
| `VTPMServersTest.test_soft_reboot_server` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/libvirt/test_vtpm.py:L662–L674` |
| `VTPMServersTest.test_hard_reboot_server` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/libvirt/test_vtpm.py:L676–L688` |
| `VTPMServersTest.test_hard_reboot_server_as_admin` | method | (self, secret_security) | public | not declared | 2/8 | `src/nova/tests/functional/libvirt/test_vtpm.py:L691–L706` |
| `VTPMServersTest._test_resize_revert_server__vtpm_to_vtpm` | method | (self, extra_specs=None) | private | not declared | 3/19 | `src/nova/tests/functional/libvirt/test_vtpm.py:L708–L743` |
| `VTPMServersTest.test_resize_revert_server__vtpm_to_vtpm_same_config` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/libvirt/test_vtpm.py:L745–L746` |
| `VTPMServersTest.test_resize_revert_server__vtpm_to_vtpm_different_config` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/libvirt/test_vtpm.py:L748–L751` |
| `VTPMServersTest.test_resize_server__no_vtpm_to_vtpm` | method | (self, secret_security) | public | not declared | 4/23 | `src/nova/tests/functional/libvirt/test_vtpm.py:L754–L813` |
| `VTPMServersTest.test_resize_server__vtpm_to_no_vtpm` | method | (self, secret_security) | public | not declared | 4/21 | `src/nova/tests/functional/libvirt/test_vtpm.py:L816–L872` |
| `VTPMServersTest.test_resize_vtpm_server_secret_security_deployment_unsupported` | method | (self, from_secret_security, to_secret_security) | public | not declared | 4/26 | `src/nova/tests/functional/libvirt/test_vtpm.py:L879–L930` |
| `VTPMServersTest.test_resize_vtpm_server_secret_security_deployment_supported` | method | (self, from_secret_security, to_secret_security) | public | not declared | 4/20 | `src/nova/tests/functional/libvirt/test_vtpm.py:L941–L988` |
| `VTPMServersTest.test_create_server_secret_security_unsupported` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/libvirt/test_vtpm.py:L990–L1006` |
| `VTPMServersTest.test_migrate_server` | method | (self) | public | not declared | 2/15 | `src/nova/tests/functional/libvirt/test_vtpm.py:L1008–L1039` |
| `VTPMServersTest.test_migrate_server_as_admin` | method | (self) | public | not declared | 2/18 | `src/nova/tests/functional/libvirt/test_vtpm.py:L1041–L1072` |
| `VTPMServersTest.test_live_migrate_server` | method | (self) | public | not declared | 2/12 | `src/nova/tests/functional/libvirt/test_vtpm.py:L1074–L1091` |
| `VTPMServersTest.test_shelve_server` | method | (self) | public | not declared | 2/9 | `src/nova/tests/functional/libvirt/test_vtpm.py:L1093–L1107` |
| `VTPMServersTestNonShared` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_vtpm.py:L1110–L1116` |
| `VTPMServersTestNonShared.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/libvirt/test_vtpm.py:L1112–L1116` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/functional/libvirt/test_vtpm.py:L16)
- `castellan.common`: imports `exception as castellan_exc` (src/nova/tests/functional/libvirt/test_vtpm.py:L18)
- `castellan.common.objects`: imports `passphrase` (src/nova/tests/functional/libvirt/test_vtpm.py:L19)
- `castellan.key_manager`: imports `key_manager` (src/nova/tests/functional/libvirt/test_vtpm.py:L20)
- `import ddt` (src/nova/tests/functional/libvirt/test_vtpm.py:L21)
- `import fixtures` (src/nova/tests/functional/libvirt/test_vtpm.py:L22)
- `oslo_log`: imports `log as logging` (src/nova/tests/functional/libvirt/test_vtpm.py:L23)
- `oslo_utils`: imports `uuidutils` (src/nova/tests/functional/libvirt/test_vtpm.py:L24)
- `import nova.conf` (src/nova/tests/functional/libvirt/test_vtpm.py:L26)
- `nova`: imports `context as nova_context` (src/nova/tests/functional/libvirt/test_vtpm.py:L27)
- `nova`: imports `crypto` (src/nova/tests/functional/libvirt/test_vtpm.py:L28)
- `nova.db.main`: imports `api as db_api` (src/nova/tests/functional/libvirt/test_vtpm.py:L29)
- `nova`: imports `exception` (src/nova/tests/functional/libvirt/test_vtpm.py:L30)
- `nova`: imports `objects` (src/nova/tests/functional/libvirt/test_vtpm.py:L31)
- `nova.tests.fixtures`: imports `libvirt as fakelibvirt` (src/nova/tests/functional/libvirt/test_vtpm.py:L32)
- `nova.tests.functional.api`: imports `client` (src/nova/tests/functional/libvirt/test_vtpm.py:L33)
- `nova.tests.functional.libvirt`: imports `base` (src/nova/tests/functional/libvirt/test_vtpm.py:L34)
- `nova`: imports `utils` (src/nova/tests/functional/libvirt/test_vtpm.py:L35)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/tests/functional/libvirt/test_vtpm.py:L37)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/tests/functional/libvirt/test_vtpm.py:L38)
- **global-mutation**: CAST_AS_CALL = False (src/nova/tests/functional/libvirt/test_vtpm.py:L155)

## Security Surface

- **privilege** (`crypto-key`): self.key_mgr = crypto._get_key_manager() (src/nova/tests/functional/libvirt/test_vtpm.py:L177)
- **sink** (`db-write`): extra_specs.update({'hw:tpm_secret_security': secret_security}) (src/nova/tests/functional/libvirt/test_vtpm.py:L192)
- **privilege** (`crypto-key`): self.assertEqual(1, len(self.key_mgr._passphrases)) (src/nova/tests/functional/libvirt/test_vtpm.py:L208)
- **privilege** (`crypto-key`): self.assertIn(secret_uuid, self.key_mgr._passphrases) (src/nova/tests/functional/libvirt/test_vtpm.py:L210)
- **privilege** (`crypto-key`): self.assertEqual(user_id, self.key_mgr._contexts[secret_uuid].user_id) (src/nova/tests/functional/libvirt/test_vtpm.py:L211)
- **privilege** (`crypto-key`): self.assertEqual(0, len(self.key_mgr._passphrases)) (src/nova/tests/functional/libvirt/test_vtpm.py:L218)
- **privilege** (`crypto-key`): self.assertEqual(0, len(self.key_mgr._passphrases)) (src/nova/tests/functional/libvirt/test_vtpm.py:L284)
- **privilege** (`crypto-key`): self.assertEqual(0, len(self.key_mgr._passphrases)) (src/nova/tests/functional/libvirt/test_vtpm.py:L314)
- **privilege** (`crypto-key`): self.assertEqual(0, len(self.key_mgr._passphrases)) (src/nova/tests/functional/libvirt/test_vtpm.py:L348)

