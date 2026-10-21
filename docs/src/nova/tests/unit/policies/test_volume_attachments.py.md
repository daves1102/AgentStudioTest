# src/nova/tests/unit/policies/test_volume_attachments.py

## Overview

This file implements the `test_volume_attachments` module, defining 2 classs, 3 constants, 1 field, 2 functions, 10 methods, 14 imports, 5 side effects, 6 security surface entries.

Lines: total 233, code 177, comment 27, blank 29

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `FAKE_UUID` | constant | — | exported | not declared | — | `src/nova/tests/unit/policies/test_volume_attachments.py:L31–L31` |
| `FAKE_UUID_A` | constant | — | exported | not declared | — | `src/nova/tests/unit/policies/test_volume_attachments.py:L33–L33` |
| `FAKE_UUID_B` | constant | — | exported | not declared | — | `src/nova/tests/unit/policies/test_volume_attachments.py:L35–L35` |
| `fake_bdm_get_by_volume_and_instance` | function | (cls, ctxt, volume_id, instance_uuid) | exported | `objects.BlockDeviceMapping._from_db_object( ctxt, objects.BlockDeviceMapping(), db_bdm)` (src/nova/tests/unit/policies/test_volume_attachments.py:L51) | 2/15 | `src/nova/tests/unit/policies/test_volume_attachments.py:L38–L52` |
| `fake_get_volume` | function | (self, context, id) | exported | `{ 'id': id, 'status': status, 'attach_status': attach_status, 'migration_status': migration_status }` (src/nova/tests/unit/policies/test_volume_attachments.py:L69) | 4/18 | `src/nova/tests/unit/policies/test_volume_attachments.py:L55–L72` |
| `VolumeAttachPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_volume_attachments.py:L75–L215` |
| `VolumeAttachPolicyTest.setUp` | method | (self) | public | not declared | 1/28 | `src/nova/tests/unit/policies/test_volume_attachments.py:L84–L126` |
| `VolumeAttachPolicyTest.test_index_volume_attach_policy` | method | (self, mock_get_instance) | public | not declared | 1/5 | `src/nova/tests/unit/policies/test_volume_attachments.py:L129–L133` |
| `VolumeAttachPolicyTest.test_show_volume_attach_policy` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/policies/test_volume_attachments.py:L135–L139` |
| `VolumeAttachPolicyTest.test_create_volume_attach_policy` | method | (self, mock_attach_volume) | public | not declared | 1/8 | `src/nova/tests/unit/policies/test_volume_attachments.py:L142–L149` |
| `VolumeAttachPolicyTest.test_update_volume_attach_policy` | method | (self, mock_bdm_save) | public | not declared | 1/10 | `src/nova/tests/unit/policies/test_volume_attachments.py:L152–L161` |
| `VolumeAttachPolicyTest.test_delete_volume_attach_policy` | method | (self, mock_detach_volume) | public | not declared | 1/5 | `src/nova/tests/unit/policies/test_volume_attachments.py:L164–L168` |
| `VolumeAttachPolicyTest.test_swap_volume_attach_policy` | method | (self, mock_swap_volume) | public | not declared | 1/7 | `src/nova/tests/unit/policies/test_volume_attachments.py:L171–L177` |
| `VolumeAttachPolicyTest.test_swap_volume_attach_policy_failed` | method | (self, mock_swap_volume, mock_bdm_save) | public | not declared | 1/17 | `src/nova/tests/unit/policies/test_volume_attachments.py:L181–L199` |
| `VolumeAttachPolicyTest.test_pass_swap_and_update_volume_attach_policy` | method | (self, mock_swap_volume, mock_bdm_save) | public | not declared | 1/13 | `src/nova/tests/unit/policies/test_volume_attachments.py:L203–L215` |
| `VolumeAttachNoLegacyPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_volume_attachments.py:L218–L233` |
| `VolumeAttachNoLegacyPolicyTest.without_deprecated_rules` | field | — | public | not declared | — | `src/nova/tests/unit/policies/test_volume_attachments.py:L224–L224` |
| `VolumeAttachNoLegacyPolicyTest.setUp` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/policies/test_volume_attachments.py:L226–L233` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/policies/test_volume_attachments.py:L13)
- `import fixtures` (src/nova/tests/unit/policies/test_volume_attachments.py:L15)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/policies/test_volume_attachments.py:L16)
- `oslo_utils`: imports `timeutils` (src/nova/tests/unit/policies/test_volume_attachments.py:L17)
- `nova.api.openstack.compute`: imports `volume_attachments` (src/nova/tests/unit/policies/test_volume_attachments.py:L19)
- `nova.compute`: imports `vm_states` (src/nova/tests/unit/policies/test_volume_attachments.py:L20)
- `nova`: imports `exception` (src/nova/tests/unit/policies/test_volume_attachments.py:L21)
- `nova`: imports `objects` (src/nova/tests/unit/policies/test_volume_attachments.py:L22)
- `nova.objects`: imports `block_device as block_device_obj` (src/nova/tests/unit/policies/test_volume_attachments.py:L23)
- `nova.policies`: imports `volumes_attachments as va_policies` (src/nova/tests/unit/policies/test_volume_attachments.py:L24)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/policies/test_volume_attachments.py:L25)
- `nova.tests.unit`: imports `fake_block_device` (src/nova/tests/unit/policies/test_volume_attachments.py:L26)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/policies/test_volume_attachments.py:L27)
- `nova.tests.unit.policies`: imports `base` (src/nova/tests/unit/policies/test_volume_attachments.py:L28)

## Side Effects

- **network**: from nova.api.openstack.compute import volume_attachments (src/nova/tests/unit/policies/test_volume_attachments.py:L19)
- **network**: fixtures.MockPatch('nova.api.openstack.common.get_instance')).mock (src/nova/tests/unit/policies/test_volume_attachments.py:L95)
- **global-mutation**: FAKE_UUID = 'aaaaaaaa-aaaa-aaaa-aaaa-aaaaaaaaaaaa' (src/nova/tests/unit/policies/test_volume_attachments.py:L31)
- **global-mutation**: FAKE_UUID_A = '00000000-aaaa-aaaa-aaaa-000000000000' (src/nova/tests/unit/policies/test_volume_attachments.py:L33)
- **global-mutation**: FAKE_UUID_B = 'bbbbbbbb-bbbb-bbbb-bbbb-bbbbbbbbbbbb' (src/nova/tests/unit/policies/test_volume_attachments.py:L35)

## Security Surface

- **sink** (`db-write`): rule_name = self.policy_root % "update" (src/nova/tests/unit/policies/test_volume_attachments.py:L153)
- **sink** (`db-write`): rule_name, self.controller.update, (src/nova/tests/unit/policies/test_volume_attachments.py:L159)
- **sink** (`db-write`): rule_name, self.controller.update, (src/nova/tests/unit/policies/test_volume_attachments.py:L176)
- **sink** (`db-write`): """Policy check fails for swap + update due to swap policy failure. (src/nova/tests/unit/policies/test_volume_attachments.py:L184)
- **sink** (`db-write`): exception.PolicyNotAuthorized, self.controller.update, (src/nova/tests/unit/policies/test_volume_attachments.py:L193)
- **sink** (`db-write`): rule_name, self.controller.update, (src/nova/tests/unit/policies/test_volume_attachments.py:L212)

