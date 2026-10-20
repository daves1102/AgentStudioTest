# src/nova/keymgr/conf_key_mgr.py

## Overview

This file implements the `conf_key_mgr` module, defining 1 class, 2 constants, 9 methods, 7 imports, 2 side effects.

Lines: total 141, code 95, comment 14, blank 32

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/keymgr/conf_key_mgr.py:L45–L45` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/keymgr/conf_key_mgr.py:L46–L46` |
| `ConfKeyManager` | class | — | exported | not declared | — | `src/nova/keymgr/conf_key_mgr.py:L49–L141` |
| `ConfKeyManager.__init__` | method | (self, configuration) | public | not declared | 3/10 | `src/nova/keymgr/conf_key_mgr.py:L57–L69` |
| `ConfKeyManager._get_key` | method | (self) | private | `key.SymmetricKey('AES', len(key_bytes) * 8, key_bytes)` (src/nova/keymgr/conf_key_mgr.py:L73) | 1/3 | `src/nova/keymgr/conf_key_mgr.py:L71–L73` |
| `ConfKeyManager.create_key` | method | (self, context, algorithm, length, **kwargs) | public | `self.key_id` (src/nova/keymgr/conf_key_mgr.py:L85) | 2/4 | `src/nova/keymgr/conf_key_mgr.py:L75–L85` |
| `ConfKeyManager.create_key_pair` | method | (self, context, **kwargs) | public | not declared | 1/3 | `src/nova/keymgr/conf_key_mgr.py:L87–L89` |
| `ConfKeyManager.store` | method | (self, context, managed_object, **kwargs) | public | `self.key_id` (src/nova/keymgr/conf_key_mgr.py:L100) | 3/7 | `src/nova/keymgr/conf_key_mgr.py:L91–L100` |
| `ConfKeyManager.get` | method | (self, context, managed_object_id) | public | `self._get_key()` (src/nova/keymgr/conf_key_mgr.py:L115) | 3/6 | `src/nova/keymgr/conf_key_mgr.py:L102–L115` |
| `ConfKeyManager.delete` | method | (self, context, managed_object_id) | public | not declared | 3/7 | `src/nova/keymgr/conf_key_mgr.py:L117–L131` |
| `ConfKeyManager.add_consumer` | method | (self, context, managed_object_id, consumer_data) | public | not declared | 1/4 | `src/nova/keymgr/conf_key_mgr.py:L133–L136` |
| `ConfKeyManager.remove_consumer` | method | (self, context, managed_object_id, consumer_data) | public | not declared | 1/4 | `src/nova/keymgr/conf_key_mgr.py:L138–L141` |

## Dependencies

- `import binascii` (src/nova/keymgr/conf_key_mgr.py:L34)
- `castellan.common.objects`: imports `symmetric_key as key` (src/nova/keymgr/conf_key_mgr.py:L36)
- `castellan.key_manager`: imports `key_manager` (src/nova/keymgr/conf_key_mgr.py:L37)
- `oslo_log`: imports `log as logging` (src/nova/keymgr/conf_key_mgr.py:L38)
- `import nova.conf` (src/nova/keymgr/conf_key_mgr.py:L40)
- `nova`: imports `exception` (src/nova/keymgr/conf_key_mgr.py:L41)
- `nova.i18n`: imports `_` (src/nova/keymgr/conf_key_mgr.py:L42)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/keymgr/conf_key_mgr.py:L45)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/keymgr/conf_key_mgr.py:L46)

