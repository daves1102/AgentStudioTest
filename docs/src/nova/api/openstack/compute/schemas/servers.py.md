# src/nova/api/openstack/compute/schemas/servers.py

## Overview

This file implements the `servers` module, defining 6 constants, 139 variables, 4 imports, 6 side effects, 43 security surface entries.

Lines: total 2123, code 1823, comment 146, blank 154

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `_legacy_block_device_mapping` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L21–L44` |
| `_block_device_mapping_v2_new_item` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L46–L80` |
| `_block_device_mapping_v2` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L82–L82` |
| `_hints` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L87–L152` |
| `create` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L154–L230` |
| `create_v20` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L232–L232` |
| `create_v219` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L246–L246` |
| `create_v232` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L250–L250` |
| `create_v233` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L272–L272` |
| `create_v237` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L281–L281` |
| `create_v242` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L303–L303` |
| `create_v252` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L328–L328` |
| `create_v257` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L336–L336` |
| `create_v263` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L341–L341` |
| `create_v267` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L346–L346` |
| `create_v274` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L352–L352` |
| `create_v290` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L359–L359` |
| `create_v294` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L364–L364` |
| `update` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L368–L384` |
| `update_v20` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L386–L386` |
| `update_v219` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L390–L390` |
| `update_v290` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L395–L395` |
| `update_v294` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L400–L400` |
| `update_v2104` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L404–L404` |
| `rebuild` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L408–L430` |
| `rebuild_v20` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L432–L432` |
| `rebuild_v219` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L436–L436` |
| `rebuild_v254` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L440–L440` |
| `rebuild_v257` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L447–L447` |
| `rebuild_v263` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L455–L455` |
| `rebuild_v290` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L459–L459` |
| `rebuild_v294` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L463–L463` |
| `resize` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L467–L482` |
| `create_image` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L484–L499` |
| `create_image_v20` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L501–L501` |
| `confirm_resize` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L507–L514` |
| `revert_resize` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L517–L524` |
| `reboot` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L526–L543` |
| `start_server` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L546–L553` |
| `stop_server` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L556–L563` |
| `trigger_crash_dump` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L565–L572` |
| `JOINED_TABLE_QUERY_PARAMS_SERVERS` | constant | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L574–L582` |
| `SERVER_LIST_IGNORE_SORT_KEY` | constant | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L588–L594` |
| `SERVER_LIST_IGNORE_SORT_KEY_V273` | constant | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L597–L597` |
| `VALID_SORT_KEYS` | constant | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L600–L611` |
| `VALID_SORT_KEYS_V273` | constant | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L614–L619` |
| `VALID_SORT_KEYS_V275` | constant | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L621–L621` |
| `index_query` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L626–L694` |
| `index_query_v226` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L705–L705` |
| `index_query_v266` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L713–L713` |
| `index_query_v273` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L720–L720` |
| `index_query_v275` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L726–L726` |
| `show_query` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L732–L736` |
| `show_query_v2102` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L738–L738` |
| `_server_status` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L741–L766` |
| `index_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L768–L788` |
| `index_response_v269` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L792–L792` |
| `_server_cell_down_response` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L809–L872` |
| `_server_detail_cell_down_response` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L874–L874` |
| `_server_cell_down_response_v271` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L892–L892` |
| `_server_response` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L902–L1076` |
| `_server_response_v23` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1078–L1078` |
| `_server_response_v29` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1107–L1107` |
| `_server_response_v216` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1113–L1113` |
| `_server_response_v219` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1120–L1120` |
| `_server_response_v226` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1126–L1126` |
| `_server_response_v247` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1132–L1132` |
| `_server_response_v263` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1157–L1157` |
| `_server_response_v271` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1169–L1169` |
| `_server_response_v273` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1179–L1179` |
| `_server_detail_response_v273` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1186–L1186` |
| `_server_response_v290` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1192–L1192` |
| `_server_detail_response_v290` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1195–L1195` |
| `_server_response_v296` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1198–L1198` |
| `_server_detail_response_v296` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1204–L1204` |
| `_server_response_v298` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1210–L1210` |
| `_server_detail_response_v298` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1224–L1224` |
| `_server_response_v2100` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1240–L1240` |
| `_server_detail_response_v2100` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1246–L1246` |
| `detail_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1252–L1263` |
| `detail_response_v23` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1265–L1265` |
| `detail_response_v29` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1270–L1270` |
| `detail_response_v216` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1275–L1275` |
| `detail_response_v219` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1280–L1280` |
| `detail_response_v226` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1285–L1285` |
| `detail_response_v247` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1290–L1290` |
| `detail_response_v263` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1295–L1295` |
| `detail_response_v269` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1302–L1302` |
| `detail_response_v273` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1307–L1307` |
| `detail_response_v290` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1312–L1312` |
| `detail_response_v296` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1317–L1317` |
| `detail_response_v298` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1322–L1322` |
| `detail_response_v2100` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1327–L1327` |
| `show_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1334–L1341` |
| `show_response_v23` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1343–L1343` |
| `show_response_v29` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1346–L1346` |
| `show_response_v216` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1349–L1349` |
| `show_response_v219` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1352–L1352` |
| `show_response_v226` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1355–L1355` |
| `show_response_v247` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1358–L1358` |
| `show_response_v263` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1361–L1361` |
| `show_response_v269` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1366–L1366` |
| `show_response_v271` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1371–L1371` |
| `show_response_v273` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1376–L1376` |
| `show_response_v290` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1381–L1381` |
| `show_response_v296` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1386–L1386` |
| `show_response_v298` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1391–L1391` |
| `show_response_v2100` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1396–L1396` |
| `create_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1401–L1446` |
| `update_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1448–L1568` |
| `update_response_v29` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1570–L1570` |
| `update_response_v219` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1576–L1576` |
| `update_response_v226` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1582–L1582` |
| `update_response_v247` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1592–L1592` |
| `update_response_v263` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1614–L1614` |
| `update_response_v271` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1627–L1627` |
| `update_response_v273` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1641–L1641` |
| `update_response_v275` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1651–L1651` |
| `update_response_v296` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1737–L1737` |
| `update_response_v298` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1747–L1747` |
| `update_response_v2100` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1763–L1763` |
| `resize_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1771–L1771` |
| `confirm_resize_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1773–L1773` |
| `revert_resize_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1775–L1775` |
| `reboot_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1777–L1777` |
| `delete_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1779–L1779` |
| `start_server_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1781–L1781` |
| `stop_server_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1783–L1783` |
| `trigger_crash_dump_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1785–L1785` |
| `create_image_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1787–L1787` |
| `create_image_response_v245` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1789–L1796` |
| `rebuild_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1798–L1919` |
| `rebuild_response_v29` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1921–L1921` |
| `rebuild_response_v219` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1927–L1927` |
| `rebuild_response_v226` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1933–L1933` |
| `rebuild_response_v247` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1943–L1943` |
| `rebuild_response_v254` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1963–L1963` |
| `rebuild_response_v257` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1969–L1969` |
| `rebuild_response_v263` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1975–L1975` |
| `rebuild_response_v271` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L1988–L1988` |
| `rebuild_response_v273` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L2002–L2002` |
| `rebuild_response_v275` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L2012–L2012` |
| `rebuild_response_v296` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L2092–L2092` |
| `rebuild_response_v298` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L2102–L2102` |
| `rebuild_response_v2100` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/servers.py:L2117–L2117` |

## Dependencies

- `import copy` (src/nova/api/openstack/compute/schemas/servers.py:L15)
- `nova.api.validation`: imports `parameter_types` (src/nova/api/openstack/compute/schemas/servers.py:L17)
- `nova.api.validation`: imports `response_types` (src/nova/api/openstack/compute/schemas/servers.py:L18)
- `nova.objects`: imports `instance` (src/nova/api/openstack/compute/schemas/servers.py:L19)

## Side Effects

- **global-mutation**: JOINED_TABLE_QUERY_PARAMS_SERVERS = { (src/nova/api/openstack/compute/schemas/servers.py:L574)
- **global-mutation**: SERVER_LIST_IGNORE_SORT_KEY = [ (src/nova/api/openstack/compute/schemas/servers.py:L588)
- **global-mutation**: SERVER_LIST_IGNORE_SORT_KEY_V273 = list(SERVER_LIST_IGNORE_SORT_KEY) (src/nova/api/openstack/compute/schemas/servers.py:L597)
- **global-mutation**: VALID_SORT_KEYS = { (src/nova/api/openstack/compute/schemas/servers.py:L600)
- **global-mutation**: VALID_SORT_KEYS_V273 = { (src/nova/api/openstack/compute/schemas/servers.py:L614)
- **global-mutation**: VALID_SORT_KEYS_V275 = copy.deepcopy(VALID_SORT_KEYS_V273) (src/nova/api/openstack/compute/schemas/servers.py:L621)

## Security Surface

- **sink** (`db-write`): _block_device_mapping_v2['properties'].update( (src/nova/api/openstack/compute/schemas/servers.py:L83)
- **sink** (`db-write`): update = { (src/nova/api/openstack/compute/schemas/servers.py:L368)
- **sink** (`db-write`): update_v20 = copy.deepcopy(update) (src/nova/api/openstack/compute/schemas/servers.py:L386)
- **sink** (`db-write`): update_v219 = copy.deepcopy(update) (src/nova/api/openstack/compute/schemas/servers.py:L390)
- **sink** (`db-write`): create_image_v20['properties']['createImage']['properties'].update({ (src/nova/api/openstack/compute/schemas/servers.py:L502)
- **sink** (`db-write`): index_query['properties'].update( (src/nova/api/openstack/compute/schemas/servers.py:L699)
- **sink** (`db-write`): index_query['properties'].update( (src/nova/api/openstack/compute/schemas/servers.py:L702)
- **sink** (`db-write`): index_query_v226['properties'].update({ (src/nova/api/openstack/compute/schemas/servers.py:L706)
- **sink** (`db-write`): index_query_v266['properties'].update({ (src/nova/api/openstack/compute/schemas/servers.py:L714)
- **sink** (`db-write`): index_query_v273['properties'].update({ (src/nova/api/openstack/compute/schemas/servers.py:L721)
- **sink** (`db-write`): index_query_v275['properties'].update({ (src/nova/api/openstack/compute/schemas/servers.py:L727)
- **sink** (`db-write`): _server_cell_down_response_v271['properties'].update({ (src/nova/api/openstack/compute/schemas/servers.py:L893)
- **sink** (`db-write`): _server_response_v23['properties'].update({ (src/nova/api/openstack/compute/schemas/servers.py:L1080)
- **sink** (`db-write`): _server_response_v29['properties'].update({ (src/nova/api/openstack/compute/schemas/servers.py:L1108)
- **sink** (`db-write`): _server_response_v216['properties'].update({ (src/nova/api/openstack/compute/schemas/servers.py:L1114)
- **sink** (`db-write`): _server_response_v219['properties'].update({ (src/nova/api/openstack/compute/schemas/servers.py:L1121)
- **sink** (`db-write`): _server_response_v226['properties'].update({ (src/nova/api/openstack/compute/schemas/servers.py:L1127)
- **sink** (`db-write`): _server_response_v263['properties'].update({ (src/nova/api/openstack/compute/schemas/servers.py:L1158)
- **sink** (`db-write`): _server_response_v271['properties'].update({ (src/nova/api/openstack/compute/schemas/servers.py:L1170)
- **sink** (`db-write`): _server_response_v273['properties'].update({ (src/nova/api/openstack/compute/schemas/servers.py:L1180)
- **sink** (`db-write`): _server_detail_response_v273['properties'].update({ (src/nova/api/openstack/compute/schemas/servers.py:L1187)
- **sink** (`db-write`): _server_response_v296['properties'].update({ (src/nova/api/openstack/compute/schemas/servers.py:L1199)
- **sink** (`db-write`): _server_detail_response_v296['properties'].update({ (src/nova/api/openstack/compute/schemas/servers.py:L1205)
- **sink** (`db-write`): _server_response_v298['properties']['image']['oneOf'][1]['properties'].update({ (src/nova/api/openstack/compute/schemas/servers.py:L1211)
- **sink** (`db-write`): ].update({ (src/nova/api/openstack/compute/schemas/servers.py:L1227)
- **sink** (`db-write`): _server_response_v2100['properties'].update({ (src/nova/api/openstack/compute/schemas/servers.py:L1241)
- **sink** (`db-write`): _server_detail_response_v2100['properties'].update({ (src/nova/api/openstack/compute/schemas/servers.py:L1247)
- **sink** (`db-write`): update_response_v263['properties']['server']['properties'].update( (src/nova/api/openstack/compute/schemas/servers.py:L1615)
- **sink** (`db-write`): update_response_v271['properties']['server']['properties'].update( (src/nova/api/openstack/compute/schemas/servers.py:L1628)
- **sink** (`db-write`): update_response_v273['properties']['server']['properties'].update( (src/nova/api/openstack/compute/schemas/servers.py:L1642)
- **sink** (`db-write`): update_response_v275['properties']['server']['properties'].update( (src/nova/api/openstack/compute/schemas/servers.py:L1652)
- **sink** (`db-write`): ]['^.+$']['items']['properties'].update({ (src/nova/api/openstack/compute/schemas/servers.py:L1727)
- **sink** (`db-write`): update_response_v296['properties']['server']['properties'].update({ (src/nova/api/openstack/compute/schemas/servers.py:L1738)
- **sink** (`db-write`): ]['properties'].update({ (src/nova/api/openstack/compute/schemas/servers.py:L1750)
- **sink** (`db-write`): update_response_v2100['properties']['server']['properties'].update({ (src/nova/api/openstack/compute/schemas/servers.py:L1764)
- **sink** (`db-write`): rebuild_response_v263['properties']['server']['properties'].update( (src/nova/api/openstack/compute/schemas/servers.py:L1976)
- **sink** (`db-write`): rebuild_response_v271['properties']['server']['properties'].update( (src/nova/api/openstack/compute/schemas/servers.py:L1989)
- **sink** (`db-write`): rebuild_response_v273['properties']['server']['properties'].update( (src/nova/api/openstack/compute/schemas/servers.py:L2003)
- **sink** (`db-write`): rebuild_response_v275['properties']['server']['properties'].update( (src/nova/api/openstack/compute/schemas/servers.py:L2013)
- **sink** (`db-write`): ]['^.+$']['items']['properties'].update({ (src/nova/api/openstack/compute/schemas/servers.py:L2082)
- **sink** (`db-write`): rebuild_response_v296['properties']['server']['properties'].update({ (src/nova/api/openstack/compute/schemas/servers.py:L2093)
- **sink** (`db-write`): ]['properties'].update({ (src/nova/api/openstack/compute/schemas/servers.py:L2105)
- **sink** (`db-write`): rebuild_response_v2100['properties']['server']['properties'].update({ (src/nova/api/openstack/compute/schemas/servers.py:L2118)

