# src/nova/api/openstack/compute/volume_attachments.py

## Overview

This file implements the `volume_attachments` module, defining 1 class, 2 functions, 8 methods, 15 imports, 1 side effect, 3 security surface entries.

Lines: total 441, code 342, comment 43, blank 56

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `_translate_attachment_detail_view` | function | (bdm, show_tag=False, show_delete_on_termination=False, show_attachment_id_bdm_uuid=False) | unexported | `d` (src/nova/api/openstack/compute/volume_attachments.py:L76) | 6/21 | `src/nova/api/openstack/compute/volume_attachments.py:L36–L76` |
| `_check_request_version` | function | (req, min_version, method, server_id, server_state) | unexported | `` (src/nova/api/openstack/compute/volume_attachments.py:L81) | 2/10 | `src/nova/api/openstack/compute/volume_attachments.py:L79–L89` |
| `VolumeAttachmentController` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/volume_attachments.py:L93–L441` |
| `VolumeAttachmentController.__init__` | method | (self) | public | not declared | 1/4 | `src/nova/api/openstack/compute/volume_attachments.py:L101–L104` |
| `VolumeAttachmentController.index` | method | (self, req, server_id) | public | `{'volumeAttachments': results}` (src/nova/api/openstack/compute/volume_attachments.py:L145) | 5/28 | `src/nova/api/openstack/compute/volume_attachments.py:L113–L145` |
| `VolumeAttachmentController.show` | method | (self, req, server_id, id) | public | `{ 'volumeAttachment': _translate_attachment_detail_view( bdm, show_tag=show_tag, show_delete_on_termination=show_delete_on_termination, show_attachment_id_bdm_uuid=show_attachment_id_bdm_uuid, ) }` (src/nova/api/openstack/compute/volume_attachments.py:L188) | 4/35 | `src/nova/api/openstack/compute/volume_attachments.py:L153–L195` |
| `VolumeAttachmentController.create` | method | (self, req, server_id, body) | public | `webob.Response(status_int=202)` (src/nova/api/openstack/compute/volume_attachments.py:L260); `{'volumeAttachment': attachment}` (src/nova/api/openstack/compute/volume_attachments.py:L279) | 11/59 | `src/nova/api/openstack/compute/volume_attachments.py:L205–L279` |
| `VolumeAttachmentController._update_volume_swap` | method | (self, req, instance, id, body) | private | not declared | 9/35 | `src/nova/api/openstack/compute/volume_attachments.py:L281–L325` |
| `VolumeAttachmentController._update_volume_regular` | method | (self, req, instance, id, body) | private | not declared | 11/25 | `src/nova/api/openstack/compute/volume_attachments.py:L327–L357` |
| `VolumeAttachmentController.update` | method | (self, req, server_id, id, body) | public | not declared | 5/18 | `src/nova/api/openstack/compute/volume_attachments.py:L364–L390` |
| `VolumeAttachmentController.delete` | method | (self, req, server_id, id) | public | not declared | 9/41 | `src/nova/api/openstack/compute/volume_attachments.py:L395–L441` |

## Dependencies

- `oslo_utils`: imports `strutils` (src/nova/api/openstack/compute/volume_attachments.py:L18)
- `import webob` (src/nova/api/openstack/compute/volume_attachments.py:L19)
- `webob`: imports `exc` (src/nova/api/openstack/compute/volume_attachments.py:L20)
- `nova.api.openstack`: imports `api_version_request` (src/nova/api/openstack/compute/volume_attachments.py:L22)
- `nova.api.openstack`: imports `common` (src/nova/api/openstack/compute/volume_attachments.py:L23)
- `nova.api.openstack.compute.schemas`: imports `volume_attachments as schema` (src/nova/api/openstack/compute/volume_attachments.py:L24)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/openstack/compute/volume_attachments.py:L25)
- `nova.api`: imports `validation` (src/nova/api/openstack/compute/volume_attachments.py:L26)
- `nova.compute`: imports `api as compute` (src/nova/api/openstack/compute/volume_attachments.py:L27)
- `nova.compute`: imports `vm_states` (src/nova/api/openstack/compute/volume_attachments.py:L28)
- `nova`: imports `exception` (src/nova/api/openstack/compute/volume_attachments.py:L29)
- `nova.i18n`: imports `_` (src/nova/api/openstack/compute/volume_attachments.py:L30)
- `nova`: imports `objects` (src/nova/api/openstack/compute/volume_attachments.py:L31)
- `nova.policies`: imports `volumes_attachments as va_policies` (src/nova/api/openstack/compute/volume_attachments.py:L32)
- `nova.volume`: imports `cinder` (src/nova/api/openstack/compute/volume_attachments.py:L33)

## Side Effects

- **network**: from nova.api.openstack.compute.schemas import volume_attachments as schema (src/nova/api/openstack/compute/volume_attachments.py:L24)

## Security Surface

- **sink** (`db-write`): @validation.schema(schema.update, '2.0', '2.84') (src/nova/api/openstack/compute/volume_attachments.py:L361)
- **sink** (`db-write`): def update(self, req, server_id, id, body): (src/nova/api/openstack/compute/volume_attachments.py:L364)
- **sink** (`db-write`): va_policies.POLICY_ROOT % 'update', (src/nova/api/openstack/compute/volume_attachments.py:L379)

