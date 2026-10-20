# src/nova/limit/local.py

## Overview

This file implements the `local` module, defining 15 constants, 9 functions, 9 imports, 15 side effects.

Lines: total 236, code 162, comment 33, blank 41

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/limit/local.py:L27–L27` |
| `CONF` | constant | — | exported | not declared | — | `src/nova/limit/local.py:L28–L28` |
| `SERVER_METADATA_ITEMS` | constant | — | exported | not declared | — | `src/nova/limit/local.py:L32–L32` |
| `INJECTED_FILES` | constant | — | exported | not declared | — | `src/nova/limit/local.py:L33–L33` |
| `INJECTED_FILES_CONTENT` | constant | — | exported | not declared | — | `src/nova/limit/local.py:L34–L34` |
| `INJECTED_FILES_PATH` | constant | — | exported | not declared | — | `src/nova/limit/local.py:L35–L35` |
| `API_LIMITS` | constant | — | exported | not declared | — | `src/nova/limit/local.py:L36–L41` |
| `KEY_PAIRS` | constant | — | exported | not declared | — | `src/nova/limit/local.py:L45–L45` |
| `SERVER_GROUPS` | constant | — | exported | not declared | — | `src/nova/limit/local.py:L46–L46` |
| `SERVER_GROUP_MEMBERS` | constant | — | exported | not declared | — | `src/nova/limit/local.py:L47–L47` |
| `DB_LIMITS` | constant | — | exported | not declared | — | `src/nova/limit/local.py:L48–L52` |
| `UNIFIED_LIMITS_DRIVER` | constant | — | exported | not declared | — | `src/nova/limit/local.py:L55–L55` |
| `EXCEPTIONS` | constant | — | exported | not declared | — | `src/nova/limit/local.py:L60–L68` |
| `LEGACY_LIMITS` | constant | — | exported | not declared | — | `src/nova/limit/local.py:L71–L79` |
| `get_in_use` | function | (context, project_id) | exported | `_convert_keys_to_legacy_name(usages)` (src/nova/limit/local.py:L106) | 1/14 | `src/nova/limit/local.py:L82–L106` |
| `always_zero_usage` | function | (project_id, resource_names) | exported | `{resource_name: 0 for resource_name in resource_names}` (src/nova/limit/local.py:L115) | 2/4 | `src/nova/limit/local.py:L109–L115` |
| `enforce_api_limit` | function | (entity_type, count) | exported | `` (src/nova/limit/local.py:L125) | 6/18 | `src/nova/limit/local.py:L118–L145` |
| `enforce_db_limit` | function | (context, entity_type, entity_scope, delta) | exported | `` (src/nova/limit/local.py:L170) | 7/27 | `src/nova/limit/local.py:L148–L195` |
| `_convert_keys_to_legacy_name` | function | (new_dict) | unexported | `legacy` (src/nova/limit/local.py:L205) | 3/7 | `src/nova/limit/local.py:L198–L205` |
| `get_legacy_default_limits` | function | — | exported | `_convert_keys_to_legacy_name(dict(new_limits))` (src/nova/limit/local.py:L212) | 1/4 | `src/nova/limit/local.py:L208–L212` |
| `_keypair_count` | function | (context, user_id, *args) | unexported | `{'server_key_pairs': count}` (src/nova/limit/local.py:L217) | 1/3 | `src/nova/limit/local.py:L215–L217` |
| `_server_group_count` | function | (context, project_id, *args) | unexported | `{'server_groups': raw_counts['project']['server_groups']}` (src/nova/limit/local.py:L222) | 1/3 | `src/nova/limit/local.py:L220–L222` |
| `_server_group_members_count` | function | (context, server_group_uuid, *args) | unexported | `{'server_group_members': len(server_group.members)}` (src/nova/limit/local.py:L229) | 1/4 | `src/nova/limit/local.py:L225–L229` |
| `DB_COUNT_FUNCTION` | constant | — | exported | not declared | — | `src/nova/limit/local.py:L232–L236` |

## Dependencies

- `import functools` (src/nova/limit/local.py:L15)
- `import typing as ty` (src/nova/limit/local.py:L16)
- `oslo_limit`: imports `exception as limit_exceptions` (src/nova/limit/local.py:L18)
- `oslo_limit`: imports `limit` (src/nova/limit/local.py:L19)
- `oslo_log`: imports `log as logging` (src/nova/limit/local.py:L20)
- `import nova.conf` (src/nova/limit/local.py:L22)
- `nova`: imports `exception` (src/nova/limit/local.py:L23)
- `nova.limit`: imports `utils as nova_limit_utils` (src/nova/limit/local.py:L24)
- `nova`: imports `objects` (src/nova/limit/local.py:L25)

## Side Effects

- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/limit/local.py:L27)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/limit/local.py:L28)
- **global-mutation**: SERVER_METADATA_ITEMS = "server_metadata_items" (src/nova/limit/local.py:L32)
- **global-mutation**: INJECTED_FILES = "server_injected_files" (src/nova/limit/local.py:L33)
- **global-mutation**: INJECTED_FILES_CONTENT = "server_injected_file_content_bytes" (src/nova/limit/local.py:L34)
- **global-mutation**: INJECTED_FILES_PATH = "server_injected_file_path_bytes" (src/nova/limit/local.py:L35)
- **global-mutation**: API_LIMITS = set([ (src/nova/limit/local.py:L36)
- **global-mutation**: KEY_PAIRS = "server_key_pairs" (src/nova/limit/local.py:L45)
- **global-mutation**: SERVER_GROUPS = "server_groups" (src/nova/limit/local.py:L46)
- **global-mutation**: SERVER_GROUP_MEMBERS = "server_group_members" (src/nova/limit/local.py:L47)
- **global-mutation**: DB_LIMITS = set([ (src/nova/limit/local.py:L48)
- **global-mutation**: UNIFIED_LIMITS_DRIVER = "nova.quota.UnifiedLimitsDriver" (src/nova/limit/local.py:L55)
- **global-mutation**: EXCEPTIONS = { (src/nova/limit/local.py:L60)
- **global-mutation**: LEGACY_LIMITS = { (src/nova/limit/local.py:L71)
- **global-mutation**: DB_COUNT_FUNCTION = { (src/nova/limit/local.py:L232)

