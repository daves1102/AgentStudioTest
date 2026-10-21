# src/nova/tests/fixtures/cinder.py

## Overview

This file implements the `cinder` module, defining 1 class, 16 constants, 1 field, 27 methods, 8 imports, 16 side effects, 2 security surface entries.

Lines: total 547, code 413, comment 65, blank 69

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/cinder.py:L26–L26` |
| `CinderFixture` | class | — | exported | not declared | — | `src/nova/tests/fixtures/cinder.py:L29–L547` |
| `CinderFixture.tenant_id` | field | — | public | not declared | — | `src/nova/tests/fixtures/cinder.py:L33–L33` |
| `CinderFixture.SWAP_OLD_VOL` | constant | — | public | not declared | — | `src/nova/tests/fixtures/cinder.py:L35–L35` |
| `CinderFixture.SWAP_NEW_VOL` | constant | — | public | not declared | — | `src/nova/tests/fixtures/cinder.py:L36–L36` |
| `CinderFixture.SWAP_ERR_OLD_VOL` | constant | — | public | not declared | — | `src/nova/tests/fixtures/cinder.py:L37–L37` |
| `CinderFixture.SWAP_ERR_NEW_VOL` | constant | — | public | not declared | — | `src/nova/tests/fixtures/cinder.py:L38–L38` |
| `CinderFixture.SWAP_ERR_ATTACH_ID` | constant | — | public | not declared | — | `src/nova/tests/fixtures/cinder.py:L39–L39` |
| `CinderFixture.MULTIATTACH_VOL` | constant | — | public | not declared | — | `src/nova/tests/fixtures/cinder.py:L41–L41` |
| `CinderFixture.MULTIATTACH_RO_SWAP_OLD_VOL` | constant | — | public | not declared | — | `src/nova/tests/fixtures/cinder.py:L42–L42` |
| `CinderFixture.MULTIATTACH_RO_SWAP_NEW_VOL` | constant | — | public | not declared | — | `src/nova/tests/fixtures/cinder.py:L43–L43` |
| `CinderFixture.MULTIATTACH_RO_MIGRATE_OLD_VOL` | constant | — | public | not declared | — | `src/nova/tests/fixtures/cinder.py:L44–L44` |
| `CinderFixture.MULTIATTACH_RO_MIGRATE_NEW_VOL` | constant | — | public | not declared | — | `src/nova/tests/fixtures/cinder.py:L45–L45` |
| `CinderFixture.IMAGE_BACKED_VOL` | constant | — | public | not declared | — | `src/nova/tests/fixtures/cinder.py:L49–L49` |
| `CinderFixture.IMAGE_BACKED_VOL_QUIESCE` | constant | — | public | not declared | — | `src/nova/tests/fixtures/cinder.py:L55–L55` |
| `CinderFixture.IMAGE_WITH_TRAITS_BACKED_VOL` | constant | — | public | not declared | — | `src/nova/tests/fixtures/cinder.py:L59–L59` |
| `CinderFixture.ISCSI_BACKED_VOL` | constant | — | public | not declared | — | `src/nova/tests/fixtures/cinder.py:L62–L62` |
| `CinderFixture.VOLUME_CONNECTION_INFO` | constant | — | public | not declared | — | `src/nova/tests/fixtures/cinder.py:L65–L78` |
| `CinderFixture.__init__` | method | (self, test, az='nova') | public | not declared | 1/11 | `src/nova/tests/fixtures/cinder.py:L80–L106` |
| `CinderFixture.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/fixtures/cinder.py:L108–L110` |
| `CinderFixture._create_fakes` | method | (self) | private | not declared | 1/61 | `src/nova/tests/fixtures/cinder.py:L112–L178` |
| `CinderFixture._is_multiattach` | method | (self, volume_id) | private | `volume_id in [ self.MULTIATTACH_VOL, self.MULTIATTACH_RO_SWAP_OLD_VOL, self.MULTIATTACH_RO_SWAP_NEW_VOL, self.MULTIATTACH_RO_MIGRATE_OLD_VOL, self.MULTIATTACH_RO_MIGRATE_NEW_VOL]` (src/nova/tests/fixtures/cinder.py:L181) | 1/7 | `src/nova/tests/fixtures/cinder.py:L180–L186` |
| `CinderFixture._find_attachment` | method | (self, attachment_id) | private | `volume_id, attachment, attachments` (src/nova/tests/fixtures/cinder.py:L198) | 4/7 | `src/nova/tests/fixtures/cinder.py:L188–L201` |
| `CinderFixture._find_connection_info` | method | (self, volume_id, attachment_id) | private | `connection_info` (src/nova/tests/fixtures/cinder.py:L217) | 1/9 | `src/nova/tests/fixtures/cinder.py:L203–L217` |
| `CinderFixture.fake_migrate_volume_completion` | method | (self, context, old_volume_id, new_volume_id, error) | public | `{'save_volume_id': old_volume_id}` (src/nova/tests/fixtures/cinder.py:L228); `{'save_volume_id': new_volume_id}` (src/nova/tests/fixtures/cinder.py:L229) | 2/7 | `src/nova/tests/fixtures/cinder.py:L219–L229` |
| `CinderFixture.fake_get` | method | (self, context, volume_id, microversion=None) | public | `volume` (src/nova/tests/fixtures/cinder.py:L329) | 17/75 | `src/nova/tests/fixtures/cinder.py:L231–L329` |
| `CinderFixture.fake_get_all_volume_types` | method | (self, *args, **kwargs) | public | `[{ # This is used in the 2.67 API sample test. 'id': '5f9204ec-3e94-4f27-9beb-fe7bb73b6eb9', 'name': 'lvm-1' }]` (src/nova/tests/fixtures/cinder.py:L332) | 1/5 | `src/nova/tests/fixtures/cinder.py:L331–L336` |
| `CinderFixture.fake_attachment_get` | method | (self, context, attachment_id) | public | `attachment_ref` (src/nova/tests/fixtures/cinder.py:L346) | 1/8 | `src/nova/tests/fixtures/cinder.py:L338–L346` |
| `CinderFixture.fake_attachment_create` | method | (self, context, volume_id, instance_uuid, connector=None, mountpoint=None) | public | `attachment` (src/nova/tests/fixtures/cinder.py:L380) | 4/27 | `src/nova/tests/fixtures/cinder.py:L348–L380` |
| `CinderFixture.fake_attachment_update` | method | (self, context, attachment_id, connector, mountpoint=None) | public | `attachment_ref` (src/nova/tests/fixtures/cinder.py:L416) | 6/25 | `src/nova/tests/fixtures/cinder.py:L382–L416` |
| `CinderFixture.fake_attachment_complete` | method | (self, _context, attachment_id) | public | not declared | 2/6 | `src/nova/tests/fixtures/cinder.py:L418–L424` |
| `CinderFixture.fake_attachment_delete` | method | (self, context, attachment_id) | public | not declared | 1/8 | `src/nova/tests/fixtures/cinder.py:L426–L434` |
| `CinderFixture.fake_begin_detaching` | method | (self, context, volume_id) | public | not declared | 2/4 | `src/nova/tests/fixtures/cinder.py:L436–L439` |
| `CinderFixture.fake_roll_detaching` | method | (self, context, volume_id) | public | not declared | 2/4 | `src/nova/tests/fixtures/cinder.py:L441–L444` |
| `CinderFixture.fake_reimage_volume` | method | (self, *args, **kwargs) | public | not declared | 3/5 | `src/nova/tests/fixtures/cinder.py:L446–L450` |
| `CinderFixture.fake_get_absolute_limits` | method | (self, context) | public | `limits` (src/nova/tests/fixtures/cinder.py:L454) | 1/3 | `src/nova/tests/fixtures/cinder.py:L452–L454` |
| `CinderFixture.fake_attachment_get_all` | method | (self, context, instance_id=None, volume_id=None) | public | `self.volume_to_attachment[volume_id]` (src/nova/tests/fixtures/cinder.py:L463); `all_attachments` (src/nova/tests/fixtures/cinder.py:L471) | 7/13 | `src/nova/tests/fixtures/cinder.py:L456–L471` |
| `CinderFixture.volume_ids_for_instance` | method | (self, instance_uuid) | public | not declared | 4/6 | `src/nova/tests/fixtures/cinder.py:L473–L480` |
| `CinderFixture.attachment_ids_for_instance` | method | (self, instance_uuid) | public | `attachment_ids` (src/nova/tests/fixtures/cinder.py:L488) | 4/7 | `src/nova/tests/fixtures/cinder.py:L482–L488` |
| `CinderFixture.create_vol_attachment` | method | (self, volume_id, instance_id) | public | `attachment` (src/nova/tests/fixtures/cinder.py:L500) | 2/10 | `src/nova/tests/fixtures/cinder.py:L490–L500` |
| `CinderFixture.get_vol_attachment` | method | (self, _id) | public | `attachments[attachment_id]` (src/nova/tests/fixtures/cinder.py:L508) | 4/5 | `src/nova/tests/fixtures/cinder.py:L502–L508` |
| `CinderFixture.delete_vol_attachment` | method | (self, vol_id) | public | not declared | 1/2 | `src/nova/tests/fixtures/cinder.py:L510–L512` |
| `CinderFixture.fake_create_snapshot_force` | method | (self, _ctxt, volume_id, name, description) | public | `snapshot` (src/nova/tests/fixtures/cinder.py:L524) | 1/11 | `src/nova/tests/fixtures/cinder.py:L514–L524` |
| `CinderFixture.fake_get_snapshot` | method | (self, _ctxt, snap_id) | public | `self.volume_snapshots[snap_id]` (src/nova/tests/fixtures/cinder.py:L530) | 2/4 | `src/nova/tests/fixtures/cinder.py:L526–L530` |
| `CinderFixture.fake_vol_create` | method | (self, _ctxt, size, name, description, snapshot=None, image_id=None, volume_type=None, metadata=None, availability_zone=None) | public | `volume` (src/nova/tests/fixtures/cinder.py:L547) | 3/16 | `src/nova/tests/fixtures/cinder.py:L532–L547` |

## Dependencies

- `import collections` (src/nova/tests/fixtures/cinder.py:L15)
- `import copy` (src/nova/tests/fixtures/cinder.py:L16)
- `import fixtures` (src/nova/tests/fixtures/cinder.py:L17)
- `oslo_log`: imports `log as logging` (src/nova/tests/fixtures/cinder.py:L19)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/fixtures/cinder.py:L20)
- `oslo_utils`: imports `uuidutils` (src/nova/tests/fixtures/cinder.py:L21)
- `nova`: imports `exception` (src/nova/tests/fixtures/cinder.py:L23)
- `nova.tests.fixtures`: imports `nova as nova_fixtures` (src/nova/tests/fixtures/cinder.py:L24)

## Side Effects

- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/tests/fixtures/cinder.py:L26)
- **global-mutation**: SWAP_OLD_VOL = 'a07f71dc-8151-4e7d-a0cc-cd24a3f11113' (src/nova/tests/fixtures/cinder.py:L35)
- **global-mutation**: SWAP_NEW_VOL = '227cc671-f30b-4488-96fd-7d0bf13648d8' (src/nova/tests/fixtures/cinder.py:L36)
- **global-mutation**: SWAP_ERR_OLD_VOL = '828419fa-3efb-4533-b458-4267ca5fe9b1' (src/nova/tests/fixtures/cinder.py:L37)
- **global-mutation**: SWAP_ERR_NEW_VOL = '9c6d9c2d-7a8f-4c80-938d-3bf062b8d489' (src/nova/tests/fixtures/cinder.py:L38)
- **global-mutation**: SWAP_ERR_ATTACH_ID = '4a3cd440-b9c2-11e1-afa6-0800200c9a66' (src/nova/tests/fixtures/cinder.py:L39)
- **global-mutation**: MULTIATTACH_VOL = '4757d51f-54eb-4442-8684-3399a6431f67' (src/nova/tests/fixtures/cinder.py:L41)
- **global-mutation**: MULTIATTACH_RO_SWAP_OLD_VOL = uuids.multiattach_ro_swap_old_vol (src/nova/tests/fixtures/cinder.py:L42)
- **global-mutation**: MULTIATTACH_RO_SWAP_NEW_VOL = uuids.multiattach_ro_swap_new_vol (src/nova/tests/fixtures/cinder.py:L43)
- **global-mutation**: MULTIATTACH_RO_MIGRATE_OLD_VOL = uuids.multiattach_ro_migrate_old_vol (src/nova/tests/fixtures/cinder.py:L44)
- **global-mutation**: MULTIATTACH_RO_MIGRATE_NEW_VOL = uuids.multiattach_ro_migrate_new_vol (src/nova/tests/fixtures/cinder.py:L45)
- **global-mutation**: IMAGE_BACKED_VOL = '6ca404f3-d844-4169-bb96-bc792f37de98' (src/nova/tests/fixtures/cinder.py:L49)
- **global-mutation**: IMAGE_BACKED_VOL_QUIESCE = '6ca404f3-d844-4169-bb96-bc792f37de26' (src/nova/tests/fixtures/cinder.py:L55)
- **global-mutation**: IMAGE_WITH_TRAITS_BACKED_VOL = '6194fc02-c60e-4a01-a8e5-600798208b5f' (src/nova/tests/fixtures/cinder.py:L59)
- **global-mutation**: ISCSI_BACKED_VOL = uuids.iscsi_backed_volume (src/nova/tests/fixtures/cinder.py:L62)
- **global-mutation**: VOLUME_CONNECTION_INFO = { (src/nova/tests/fixtures/cinder.py:L65)

## Security Surface

- **sink** (`db-write`): volume.update({ (src/nova/tests/fixtures/cinder.py:L279)
- **sink** (`db-write`): volume.update({ (src/nova/tests/fixtures/cinder.py:L287)

