# src/nova/api/openstack/compute/schemas/quota_sets.py

## Overview

This file implements the `quota_sets` module, defining 38 variables, 2 imports, 9 security surface entries.

Lines: total 292, code 228, comment 28, blank 36

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `_common_quota` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/quota_sets.py:L19–L27` |
| `_quota_resources` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/quota_sets.py:L29–L48` |
| `_update_quota_set` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/quota_sets.py:L50–L50` |
| `_update_quota_set_v236` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/quota_sets.py:L53–L53` |
| `_update_quota_set_v257` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/quota_sets.py:L59–L59` |
| `update` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/quota_sets.py:L64–L75` |
| `update_v236` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/quota_sets.py:L77–L77` |
| `update_v257` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/quota_sets.py:L80–L80` |
| `show_query` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/quota_sets.py:L83–L93` |
| `show_query_v275` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/quota_sets.py:L95–L95` |
| `detail_query` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/quota_sets.py:L98–L98` |
| `detail_query_v275` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/quota_sets.py:L99–L99` |
| `update_query` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/quota_sets.py:L101–L101` |
| `update_query_v275` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/quota_sets.py:L102–L102` |
| `delete_query` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/quota_sets.py:L104–L104` |
| `delete_query_v275` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/quota_sets.py:L105–L105` |
| `defaults_query` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/quota_sets.py:L107–L111` |
| `defaults_query_v2102` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/quota_sets.py:L113–L113` |
| `_quota_response` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/quota_sets.py:L116–L155` |
| `_quota_response_v236` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/quota_sets.py:L157–L157` |
| `_quota_response_v257` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/quota_sets.py:L166–L166` |
| `show_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/quota_sets.py:L175–L182` |
| `show_response_v236` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/quota_sets.py:L188–L188` |
| `show_response_v257` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/quota_sets.py:L197–L197` |
| `_detail_quota` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/quota_sets.py:L206–L215` |
| `_detail_quota_response` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/quota_sets.py:L217–L217` |
| `_detail_quota_response_v236` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/quota_sets.py:L224–L224` |
| `_detail_quota_response_v257` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/schemas/quota_sets.py:L233–L233` |
| `detail_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/quota_sets.py:L242–L249` |
| `detail_response_v236` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/quota_sets.py:L255–L255` |
| `detail_response_v257` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/quota_sets.py:L264–L264` |
| `update_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/quota_sets.py:L273–L280` |
| `update_response_v236` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/quota_sets.py:L282–L282` |
| `update_response_v257` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/quota_sets.py:L285–L285` |
| `defaults_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/quota_sets.py:L288–L288` |
| `defaults_response_v236` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/quota_sets.py:L289–L289` |
| `defaults_response_v257` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/quota_sets.py:L290–L290` |
| `delete_response` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/schemas/quota_sets.py:L292–L292` |

## Dependencies

- `import copy` (src/nova/api/openstack/compute/schemas/quota_sets.py:L15)
- `nova.api.validation`: imports `parameter_types` (src/nova/api/openstack/compute/schemas/quota_sets.py:L17)

## Security Surface

- **sink** (`db-write`): _update_quota_set.update({'force': parameter_types.boolean}) (src/nova/api/openstack/compute/schemas/quota_sets.py:L51)
- **sink** (`db-write`): update = { (src/nova/api/openstack/compute/schemas/quota_sets.py:L64)
- **sink** (`db-write`): update_v236 = copy.deepcopy(update) (src/nova/api/openstack/compute/schemas/quota_sets.py:L77)
- **sink** (`db-write`): show_response['properties']['quota_set']['properties'].update({ (src/nova/api/openstack/compute/schemas/quota_sets.py:L183)
- **sink** (`db-write`): show_response_v236['properties']['quota_set']['properties'].update({ (src/nova/api/openstack/compute/schemas/quota_sets.py:L192)
- **sink** (`db-write`): show_response_v257['properties']['quota_set']['properties'].update({ (src/nova/api/openstack/compute/schemas/quota_sets.py:L201)
- **sink** (`db-write`): detail_response['properties']['quota_set']['properties'].update({ (src/nova/api/openstack/compute/schemas/quota_sets.py:L250)
- **sink** (`db-write`): detail_response_v236['properties']['quota_set']['properties'].update({ (src/nova/api/openstack/compute/schemas/quota_sets.py:L259)
- **sink** (`db-write`): detail_response_v257['properties']['quota_set']['properties'].update({ (src/nova/api/openstack/compute/schemas/quota_sets.py:L268)

