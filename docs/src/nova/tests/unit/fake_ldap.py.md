# src/nova/tests/unit/fake_ldap.py

## Overview

This file implements the `fake_ldap` module, defining 6 classs, 1 classmethod, 6 constants, 7 functions, 17 methods, 1 property, 1 variable, 2 imports, 6 side effects.

Lines: total 326, code 227, comment 25, blank 74

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `Store` | class | — | exported | not declared | — | `src/nova/tests/unit/fake_ldap.py:L29–L38` |
| `Store.__init__` | method | (self) | public | not declared | 2/3 | `src/nova/tests/unit/fake_ldap.py:L30–L32` |
| `Store.instance` | method | (cls) | public | `cls._instance` (src/nova/tests/unit/fake_ldap.py:L38) | 2/4 | `src/nova/tests/unit/fake_ldap.py:L35–L38` |
| `_StorageDict` | class | — | unexported | not declared | — | `src/nova/tests/unit/fake_ldap.py:L41–L83` |
| `_StorageDict.keys` | method | (self, pat=None) | public | `ret` (src/nova/tests/unit/fake_ldap.py:L46) | 2/5 | `src/nova/tests/unit/fake_ldap.py:L42–L46` |
| `_StorageDict.delete` | method | (self, key) | public | not declared | 2/5 | `src/nova/tests/unit/fake_ldap.py:L48–L52` |
| `_StorageDict.flushdb` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/fake_ldap.py:L54–L55` |
| `_StorageDict.hgetall` | method | (self, key) | public | `self[key]` (src/nova/tests/unit/fake_ldap.py:L63); `self[key]` (src/nova/tests/unit/fake_ldap.py:L66) | 2/6 | `src/nova/tests/unit/fake_ldap.py:L57–L66` |
| `_StorageDict.hget` | method | (self, key, field) | public | `hashdict[field]` (src/nova/tests/unit/fake_ldap.py:L71); `hashdict[field]` (src/nova/tests/unit/fake_ldap.py:L74) | 2/7 | `src/nova/tests/unit/fake_ldap.py:L68–L74` |
| `_StorageDict.hset` | method | (self, key, field, val) | public | not declared | 1/3 | `src/nova/tests/unit/fake_ldap.py:L76–L78` |
| `_StorageDict.hmset` | method | (self, key, value_dict) | public | not declared | 2/4 | `src/nova/tests/unit/fake_ldap.py:L80–L83` |
| `SCOPE_BASE` | constant | — | exported | not declared | — | `src/nova/tests/unit/fake_ldap.py:L86–L86` |
| `SCOPE_ONELEVEL` | constant | — | exported | not declared | — | `src/nova/tests/unit/fake_ldap.py:L87–L87` |
| `SCOPE_SUBTREE` | constant | — | exported | not declared | — | `src/nova/tests/unit/fake_ldap.py:L88–L88` |
| `MOD_ADD` | constant | — | exported | not declared | — | `src/nova/tests/unit/fake_ldap.py:L89–L89` |
| `MOD_DELETE` | constant | — | exported | not declared | — | `src/nova/tests/unit/fake_ldap.py:L90–L90` |
| `MOD_REPLACE` | constant | — | exported | not declared | — | `src/nova/tests/unit/fake_ldap.py:L91–L91` |
| `NO_SUCH_OBJECT` | class | — | exported | not declared | — | `src/nova/tests/unit/fake_ldap.py:L94–L96` |
| `OBJECT_CLASS_VIOLATION` | class | — | exported | not declared | — | `src/nova/tests/unit/fake_ldap.py:L99–L101` |
| `SERVER_DOWN` | class | — | exported | not declared | — | `src/nova/tests/unit/fake_ldap.py:L104–L106` |
| `initialize` | function | (_uri) | exported | `FakeLDAP()` (src/nova/tests/unit/fake_ldap.py:L111) | 1/2 | `src/nova/tests/unit/fake_ldap.py:L109–L111` |
| `_match_query` | function | (query, attrs) | unexported | `_match_query(l, attrs) and _match_query(r, attrs)` (src/nova/tests/unit/fake_ldap.py:L125); `_match_query(l, attrs) or _match_query(r, attrs)` (src/nova/tests/unit/fake_ldap.py:L129); `not _match_query(query[2:-1], attrs)` (src/nova/tests/unit/fake_ldap.py:L132); `_match(k, v, attrs)` (src/nova/tests/unit/fake_ldap.py:L135) | 6/12 | `src/nova/tests/unit/fake_ldap.py:L114–L135` |
| `_paren_groups` | function | (source) | unexported | `result` (src/nova/tests/unit/fake_ldap.py:L152) | 6/14 | `src/nova/tests/unit/fake_ldap.py:L138–L152` |
| `_match` | function | (key, value, attrs) | unexported | `False` (src/nova/tests/unit/fake_ldap.py:L158); `True` (src/nova/tests/unit/fake_ldap.py:L161); `value in attrs[key]` (src/nova/tests/unit/fake_ldap.py:L163); `True` (src/nova/tests/unit/fake_ldap.py:L168); `False` (src/nova/tests/unit/fake_ldap.py:L169) | 6/12 | `src/nova/tests/unit/fake_ldap.py:L155–L169` |
| `_subs` | function | (value) | unexported | `[value] + subs[value]` (src/nova/tests/unit/fake_ldap.py:L182); `[value]` (src/nova/tests/unit/fake_ldap.py:L183) | 2/5 | `src/nova/tests/unit/fake_ldap.py:L172–L183` |
| `_from_json` | function | (encoded) | unexported | `[str(x) for x in jsonutils.loads(encoded)]` (src/nova/tests/unit/fake_ldap.py:L195) | 2/2 | `src/nova/tests/unit/fake_ldap.py:L186–L195` |
| `_to_json` | function | (unencoded) | unexported | `jsonutils.dumps(list(unencoded))` (src/nova/tests/unit/fake_ldap.py:L208) | 1/2 | `src/nova/tests/unit/fake_ldap.py:L198–L208` |
| `server_fail` | variable | — | exported | not declared | — | `src/nova/tests/unit/fake_ldap.py:L211–L211` |
| `FakeLDAP` | class | — | exported | not declared | — | `src/nova/tests/unit/fake_ldap.py:L214–L326` |
| `FakeLDAP.simple_bind_s` | method | (self, dn, password) | public | not declared | 2/4 | `src/nova/tests/unit/fake_ldap.py:L217–L221` |
| `FakeLDAP.unbind_s` | method | (self) | public | not declared | 2/4 | `src/nova/tests/unit/fake_ldap.py:L223–L227` |
| `FakeLDAP.add_s` | method | (self, dn, attr) | public | not declared | 3/6 | `src/nova/tests/unit/fake_ldap.py:L229–L236` |
| `FakeLDAP.delete_s` | method | (self, dn) | public | not declared | 2/4 | `src/nova/tests/unit/fake_ldap.py:L238–L243` |
| `FakeLDAP.modify_s` | method | (self, dn, attrs) | public | not declared | 5/14 | `src/nova/tests/unit/fake_ldap.py:L245–L268` |
| `FakeLDAP.modrdn_s` | method | (self, dn, newrdn) | public | not declared | 3/11 | `src/nova/tests/unit/fake_ldap.py:L270–L282` |
| `FakeLDAP.search_s` | method | (self, dn, scope, query=None, fields=None) | public | `objects` (src/nova/tests/unit/fake_ldap.py:L321) | 13/22 | `src/nova/tests/unit/fake_ldap.py:L284–L321` |
| `FakeLDAP.__prefix` | method | (self) | private | `'ldap:'` (src/nova/tests/unit/fake_ldap.py:L326) | 1/2 | `src/nova/tests/unit/fake_ldap.py:L324–L326` |
| `Store.instance` | classmethod | — | public | not declared | — | `src/nova/tests/unit/fake_ldap.py:L34–L38` |
| `FakeLDAP.__prefix` | property | — | private | not declared | — | `src/nova/tests/unit/fake_ldap.py:L323–L326` |

## Dependencies

- `import fnmatch` (src/nova/tests/unit/fake_ldap.py:L24)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/fake_ldap.py:L26)

## Side Effects

- **global-mutation**: SCOPE_BASE = 0 (src/nova/tests/unit/fake_ldap.py:L86)
- **global-mutation**: SCOPE_ONELEVEL = 1  # Not implemented (src/nova/tests/unit/fake_ldap.py:L87)
- **global-mutation**: SCOPE_SUBTREE = 2 (src/nova/tests/unit/fake_ldap.py:L88)
- **global-mutation**: MOD_ADD = 0 (src/nova/tests/unit/fake_ldap.py:L89)
- **global-mutation**: MOD_DELETE = 1 (src/nova/tests/unit/fake_ldap.py:L90)
- **global-mutation**: MOD_REPLACE = 2 (src/nova/tests/unit/fake_ldap.py:L91)

