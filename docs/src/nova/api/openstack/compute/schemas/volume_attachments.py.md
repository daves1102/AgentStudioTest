# src/nova/api/openstack/compute/schemas/volume_attachments.py

## Overview

This file implements the `volume_attachments` module, defining 27 variables, 2 imports, 5 security surface entries.

Lines: total 238, code 184, comment 26, blank 28

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `index_query` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/volume_attachments.py:L17–L30` |
| `index_query_v275` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/volume_attachments.py:L32–L32` |
| `show_query` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/volume_attachments.py:L35–L39` |
| `show_query_v2102` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/volume_attachments.py:L41–L41` |
| `create` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/volume_attachments.py:L44–L64` |
| `create_v249` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/volume_attachments.py:L65–L65` |
| `create_v279` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/volume_attachments.py:L69–L69` |
| `update` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/volume_attachments.py:L73–L73` |
| `update_v285` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/volume_attachments.py:L80–L104` |
| `_volume_attachment_response` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/volume_attachments.py:L106–L121` |
| `_volume_attachment_response_v270` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/volume_attachments.py:L123–L123` |
| `_volume_attachment_response_v279` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/volume_attachments.py:L134–L136` |
| `_volume_attachment_response_v289` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/volume_attachments.py:L142–L144` |
| `index_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/volume_attachments.py:L157–L167` |
| `index_response_v270` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/volume_attachments.py:L169–L169` |
| `index_response_v279` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/volume_attachments.py:L174–L174` |
| `index_response_v289` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/volume_attachments.py:L179–L179` |
| `show_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/volume_attachments.py:L184–L191` |
| `show_response_v270` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/volume_attachments.py:L193–L193` |
| `show_response_v279` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/volume_attachments.py:L198–L198` |
| `show_response_v289` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/volume_attachments.py:L203–L203` |
| `create_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/volume_attachments.py:L208–L215` |
| `create_response_v270` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/volume_attachments.py:L217–L217` |
| `create_response_v279` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/volume_attachments.py:L226–L226` |
| `create_response_v2101` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/volume_attachments.py:L234–L234` |
| `update_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/volume_attachments.py:L236–L236` |
| `delete_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/volume_attachments.py:L238–L238` |

## Dependencies

- `import copy` (src/nova/api/openstack/compute/schemas/volume_attachments.py:L13)
- `nova.api.validation`: imports `parameter_types` (src/nova/api/openstack/compute/schemas/volume_attachments.py:L15)

## Security Surface

- **sink** (`db-write`): update = copy.deepcopy(create) (src/nova/api/openstack/compute/schemas/volume_attachments.py:L73)
- **sink** (`db-write`): del update['properties']['volumeAttachment']['properties']['device'] (src/nova/api/openstack/compute/schemas/volume_attachments.py:L74)
- **sink** (`db-write`): _volume_attachment_response_v270['properties'].update({ (src/nova/api/openstack/compute/schemas/volume_attachments.py:L124)
- **sink** (`db-write`): _volume_attachment_response_v279['properties'].update({ (src/nova/api/openstack/compute/schemas/volume_attachments.py:L137)
- **sink** (`db-write`): _volume_attachment_response_v289['properties'].update({ (src/nova/api/openstack/compute/schemas/volume_attachments.py:L146)

