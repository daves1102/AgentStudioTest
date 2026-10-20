# src/nova/api/openstack/compute/attach_interfaces.py

## Overview

This file implements the `attach_interfaces` module, defining 1 class, 1 function, 5 methods, 13 imports, 1 side effect.

Lines: total 243, code 189, comment 24, blank 30

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `_translate_interface_attachment_view` | function | (context, port_info, show_tag=False) | unexported | `info` (src/nova/api/openstack/compute/attach_interfaces.py:L55) | 3/12 | `src/nova/api/openstack/compute/attach_interfaces.py:L34–L55` |
| `InterfaceAttachmentController` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/attach_interfaces.py:L59–L243` |
| `InterfaceAttachmentController.__init__` | method | (self) | public | not declared | 1/4 | `src/nova/api/openstack/compute/attach_interfaces.py:L62–L65` |
| `InterfaceAttachmentController.index` | method | (self, req, server_id) | public | `{'interfaceAttachments': results}` (src/nova/api/openstack/compute/attach_interfaces.py:L111) | 7/26 | `src/nova/api/openstack/compute/attach_interfaces.py:L72–L111` |
| `InterfaceAttachmentController.show` | method | (self, req, server_id, id) | public | `{'interfaceAttachment': _translate_interface_attachment_view( context, port_info['port'], show_tag=api_version_request.is_supported(req, '2.70'))}` (src/nova/api/openstack/compute/attach_interfaces.py:L139) | 4/20 | `src/nova/api/openstack/compute/attach_interfaces.py:L118–L142` |
| `InterfaceAttachmentController.create` | method | (self, req, server_id, body) | public | `self.show(req, server_id, vif['id'])` (src/nova/api/openstack/compute/attach_interfaces.py:L214) | 13/60 | `src/nova/api/openstack/compute/attach_interfaces.py:L149–L214` |
| `InterfaceAttachmentController.delete` | method | (self, req, server_id, id) | public | not declared | 6/21 | `src/nova/api/openstack/compute/attach_interfaces.py:L219–L243` |

## Dependencies

- `import webob` (src/nova/api/openstack/compute/attach_interfaces.py:L18)
- `webob`: imports `exc` (src/nova/api/openstack/compute/attach_interfaces.py:L19)
- `nova.api.openstack`: imports `api_version_request` (src/nova/api/openstack/compute/attach_interfaces.py:L21)
- `nova.api.openstack`: imports `common` (src/nova/api/openstack/compute/attach_interfaces.py:L22)
- `nova.api.openstack.compute.schemas`: imports `attach_interfaces as schema` (src/nova/api/openstack/compute/attach_interfaces.py:L23)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/openstack/compute/attach_interfaces.py:L24)
- `nova.api`: imports `validation` (src/nova/api/openstack/compute/attach_interfaces.py:L25)
- `nova.compute`: imports `api as compute` (src/nova/api/openstack/compute/attach_interfaces.py:L26)
- `nova`: imports `exception` (src/nova/api/openstack/compute/attach_interfaces.py:L27)
- `nova.i18n`: imports `_` (src/nova/api/openstack/compute/attach_interfaces.py:L28)
- `nova.network`: imports `neutron` (src/nova/api/openstack/compute/attach_interfaces.py:L29)
- `nova`: imports `objects` (src/nova/api/openstack/compute/attach_interfaces.py:L30)
- `nova.policies`: imports `attach_interfaces as ai_policies` (src/nova/api/openstack/compute/attach_interfaces.py:L31)

## Side Effects

- **network**: from nova.api.openstack.compute.schemas import attach_interfaces as schema (src/nova/api/openstack/compute/attach_interfaces.py:L23)

