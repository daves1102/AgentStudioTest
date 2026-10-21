# src/nova/tests/unit/virt/fakelibosinfo.py

## Overview

This file implements the `fakelibosinfo` module, defining 7 classs, 1 classmethod, 1 function, 22 methods.

Lines: total 176, code 119, comment 13, blank 44

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `match_item` | function | (obj, fltr) | exported | `getattr(obj, key, None) == val` (src/nova/tests/unit/virt/fakelibosinfo.py:L22) | 3/7 | `src/nova/tests/unit/virt/fakelibosinfo.py:L16–L22` |
| `Loader` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/fakelibosinfo.py:L25–L31` |
| `Loader.process_default_path` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/fakelibosinfo.py:L27–L28` |
| `Loader.get_db` | method | (self) | public | `Db()` (src/nova/tests/unit/virt/fakelibosinfo.py:L31) | 1/2 | `src/nova/tests/unit/virt/fakelibosinfo.py:L30–L31` |
| `Db` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/fakelibosinfo.py:L34–L109` |
| `Db._get_fedora19` | method | (self) | private | `fedora` (src/nova/tests/unit/virt/fakelibosinfo.py:L56) | 1/18 | `src/nova/tests/unit/virt/fakelibosinfo.py:L36–L56` |
| `Db._get_fedora22` | method | (self) | private | `fedora` (src/nova/tests/unit/virt/fakelibosinfo.py:L78) | 1/18 | `src/nova/tests/unit/virt/fakelibosinfo.py:L58–L78` |
| `Db._get_fedora23` | method | (self) | private | `fedora` (src/nova/tests/unit/virt/fakelibosinfo.py:L100) | 1/18 | `src/nova/tests/unit/virt/fakelibosinfo.py:L80–L100` |
| `Db.__init__` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/fakelibosinfo.py:L102–L106` |
| `Db.get_os_list` | method | (self) | public | `self.oslist` (src/nova/tests/unit/virt/fakelibosinfo.py:L109) | 1/2 | `src/nova/tests/unit/virt/fakelibosinfo.py:L108–L109` |
| `Filter` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/fakelibosinfo.py:L112–L121` |
| `Filter.__init__` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/fakelibosinfo.py:L113–L114` |
| `Filter.new` | method | (cls) | public | `cls()` (src/nova/tests/unit/virt/fakelibosinfo.py:L118) | 1/2 | `src/nova/tests/unit/virt/fakelibosinfo.py:L117–L118` |
| `Filter.add_constraint` | method | (self, flt_key, val) | public | not declared | 1/2 | `src/nova/tests/unit/virt/fakelibosinfo.py:L120–L121` |
| `OsList` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/fakelibosinfo.py:L124–L138` |
| `OsList.__init__` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/fakelibosinfo.py:L126–L127` |
| `OsList.new_filtered` | method | (self, fltr) | public | `new_list` (src/nova/tests/unit/virt/fakelibosinfo.py:L132) | 3/4 | `src/nova/tests/unit/virt/fakelibosinfo.py:L129–L132` |
| `OsList.get_length` | method | (self) | public | `len(self.os_list)` (src/nova/tests/unit/virt/fakelibosinfo.py:L135) | 1/2 | `src/nova/tests/unit/virt/fakelibosinfo.py:L134–L135` |
| `OsList.get_nth` | method | (self, index) | public | `self.os_list[index]` (src/nova/tests/unit/virt/fakelibosinfo.py:L138) | 1/2 | `src/nova/tests/unit/virt/fakelibosinfo.py:L137–L138` |
| `Os` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/fakelibosinfo.py:L141–L155` |
| `Os.__init__` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/fakelibosinfo.py:L142–L146` |
| `Os.get_all_devices` | method | (self, fltr) | public | `new_list` (src/nova/tests/unit/virt/fakelibosinfo.py:L152) | 3/5 | `src/nova/tests/unit/virt/fakelibosinfo.py:L148–L152` |
| `Os.get_name` | method | (self) | public | `self.name` (src/nova/tests/unit/virt/fakelibosinfo.py:L155) | 1/2 | `src/nova/tests/unit/virt/fakelibosinfo.py:L154–L155` |
| `DeviceList` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/fakelibosinfo.py:L158–L167` |
| `DeviceList.__init__` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/virt/fakelibosinfo.py:L160–L161` |
| `DeviceList.get_length` | method | (self) | public | `len(self.devices)` (src/nova/tests/unit/virt/fakelibosinfo.py:L164) | 1/2 | `src/nova/tests/unit/virt/fakelibosinfo.py:L163–L164` |
| `DeviceList.get_nth` | method | (self, index) | public | `self.devices[index]` (src/nova/tests/unit/virt/fakelibosinfo.py:L167) | 1/2 | `src/nova/tests/unit/virt/fakelibosinfo.py:L166–L167` |
| `Device` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/fakelibosinfo.py:L170–L176` |
| `Device.__init__` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/fakelibosinfo.py:L171–L173` |
| `Device.get_name` | method | (self) | public | `self.name` (src/nova/tests/unit/virt/fakelibosinfo.py:L176) | 1/2 | `src/nova/tests/unit/virt/fakelibosinfo.py:L175–L176` |
| `Filter.new` | classmethod | — | public | not declared | — | `src/nova/tests/unit/virt/fakelibosinfo.py:L116–L118` |

## Dependencies

None.

