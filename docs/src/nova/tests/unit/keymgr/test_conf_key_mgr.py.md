# src/nova/tests/unit/keymgr/test_conf_key_mgr.py

## Overview

This file implements the `test_conf_key_mgr` module, defining 1 class, 1 constant, 15 methods, 1 variable, 8 imports, 1 side effect, 19 security surface entries.

Lines: total 111, code 69, comment 16, blank 26

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/unit/keymgr/test_conf_key_mgr.py:L32–L32` |
| `decode_hex` | variable | — | exported | not declared | — | `src/nova/tests/unit/keymgr/test_conf_key_mgr.py:L33–L33` |
| `ConfKeyManagerTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/keymgr/test_conf_key_mgr.py:L36–L111` |
| `ConfKeyManagerTestCase.__init__` | method | (self, *args, **kwargs) | public | not declared | 1/3 | `src/nova/tests/unit/keymgr/test_conf_key_mgr.py:L37–L40` |
| `ConfKeyManagerTestCase._create_key_manager` | method | (self) | private | `conf_key_mgr.ConfKeyManager(CONF)` (src/nova/tests/unit/keymgr/test_conf_key_mgr.py:L45) | 1/4 | `src/nova/tests/unit/keymgr/test_conf_key_mgr.py:L42–L45` |
| `ConfKeyManagerTestCase.setUp` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/keymgr/test_conf_key_mgr.py:L47–L54` |
| `ConfKeyManagerTestCase.test_init` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/keymgr/test_conf_key_mgr.py:L56–L58` |
| `ConfKeyManagerTestCase.test_init_value_error` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/keymgr/test_conf_key_mgr.py:L60–L62` |
| `ConfKeyManagerTestCase.test_create_key` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/keymgr/test_conf_key_mgr.py:L64–L68` |
| `ConfKeyManagerTestCase.test_create_null_context` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/keymgr/test_conf_key_mgr.py:L70–L72` |
| `ConfKeyManagerTestCase.test_store_key` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/keymgr/test_conf_key_mgr.py:L74–L80` |
| `ConfKeyManagerTestCase.test_store_null_context` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/keymgr/test_conf_key_mgr.py:L82–L84` |
| `ConfKeyManagerTestCase.test_get_null_context` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/keymgr/test_conf_key_mgr.py:L86–L88` |
| `ConfKeyManagerTestCase.test_get_unknown_key` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/keymgr/test_conf_key_mgr.py:L90–L91` |
| `ConfKeyManagerTestCase.test_get` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/keymgr/test_conf_key_mgr.py:L93–L95` |
| `ConfKeyManagerTestCase.test_delete_key` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/keymgr/test_conf_key_mgr.py:L97–L103` |
| `ConfKeyManagerTestCase.test_delete_null_context` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/keymgr/test_conf_key_mgr.py:L105–L107` |
| `ConfKeyManagerTestCase.test_delete_unknown_key` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/keymgr/test_conf_key_mgr.py:L109–L111` |

## Dependencies

- `import binascii` (src/nova/tests/unit/keymgr/test_conf_key_mgr.py:L20)
- `import codecs` (src/nova/tests/unit/keymgr/test_conf_key_mgr.py:L21)
- `castellan.common.objects`: imports `symmetric_key as key` (src/nova/tests/unit/keymgr/test_conf_key_mgr.py:L23)
- `import nova.conf` (src/nova/tests/unit/keymgr/test_conf_key_mgr.py:L25)
- `nova`: imports `context` (src/nova/tests/unit/keymgr/test_conf_key_mgr.py:L26)
- `nova`: imports `exception` (src/nova/tests/unit/keymgr/test_conf_key_mgr.py:L27)
- `nova.keymgr`: imports `conf_key_mgr` (src/nova/tests/unit/keymgr/test_conf_key_mgr.py:L28)
- `nova`: imports `test` (src/nova/tests/unit/keymgr/test_conf_key_mgr.py:L29)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/tests/unit/keymgr/test_conf_key_mgr.py:L32)

## Security Surface

- **privilege** (`crypto-key`): from nova.keymgr import conf_key_mgr (src/nova/tests/unit/keymgr/test_conf_key_mgr.py:L28)
- **privilege** (`crypto-key`): return conf_key_mgr.ConfKeyManager(CONF) (src/nova/tests/unit/keymgr/test_conf_key_mgr.py:L45)
- **privilege** (`crypto-key`): self.key_mgr = self._create_key_manager() (src/nova/tests/unit/keymgr/test_conf_key_mgr.py:L51)
- **privilege** (`crypto-key`): self.key_id = self.key_mgr.key_id (src/nova/tests/unit/keymgr/test_conf_key_mgr.py:L54)
- **privilege** (`crypto-key`): self.assertRaises(ValueError, conf_key_mgr.ConfKeyManager, CONF) (src/nova/tests/unit/keymgr/test_conf_key_mgr.py:L62)
- **privilege** (`crypto-key`): key_id_1 = self.key_mgr.create_key(self.ctxt, 'AES', 256) (src/nova/tests/unit/keymgr/test_conf_key_mgr.py:L65)
- **privilege** (`crypto-key`): key_id_2 = self.key_mgr.create_key(self.ctxt, 'AES', 256) (src/nova/tests/unit/keymgr/test_conf_key_mgr.py:L66)
- **privilege** (`crypto-key`): self.key_mgr.create_key, None, 'AES', 256) (src/nova/tests/unit/keymgr/test_conf_key_mgr.py:L72)
- **privilege** (`crypto-key`): key_id = self.key_mgr.store(self.ctxt, _key) (src/nova/tests/unit/keymgr/test_conf_key_mgr.py:L77)
- **privilege** (`crypto-key`): actual_key = self.key_mgr.get(self.ctxt, key_id) (src/nova/tests/unit/keymgr/test_conf_key_mgr.py:L79)
- **privilege** (`crypto-key`): self.key_mgr.store, None, self.key) (src/nova/tests/unit/keymgr/test_conf_key_mgr.py:L84)
- **privilege** (`crypto-key`): self.key_mgr.get, None, None) (src/nova/tests/unit/keymgr/test_conf_key_mgr.py:L88)
- **privilege** (`crypto-key`): self.assertRaises(KeyError, self.key_mgr.get, self.ctxt, None) (src/nova/tests/unit/keymgr/test_conf_key_mgr.py:L91)
- **privilege** (`crypto-key`): self.key_mgr.get(self.ctxt, self.key_id)) (src/nova/tests/unit/keymgr/test_conf_key_mgr.py:L95)
- **privilege** (`crypto-key`): key_id = self.key_mgr.create_key(self.ctxt, 'AES', 256) (src/nova/tests/unit/keymgr/test_conf_key_mgr.py:L98)
- **privilege** (`crypto-key`): self.key_mgr.delete(self.ctxt, key_id) (src/nova/tests/unit/keymgr/test_conf_key_mgr.py:L99)
- **privilege** (`crypto-key`): self.key_mgr.get(self.ctxt, key_id)) (src/nova/tests/unit/keymgr/test_conf_key_mgr.py:L103)
- **privilege** (`crypto-key`): self.key_mgr.delete, None, None) (src/nova/tests/unit/keymgr/test_conf_key_mgr.py:L107)
- **privilege** (`crypto-key`): self.key_mgr.delete, self.ctxt, None) (src/nova/tests/unit/keymgr/test_conf_key_mgr.py:L111)

