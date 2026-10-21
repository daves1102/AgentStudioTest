# src/nova/tests/unit/utils.py

## Overview

This file implements the `utils` module, defining 3 classs, 21 constants, 21 functions, 6 methods, 18 imports, 30 side effects, 1 security surface entry.

Lines: total 393, code 289, comment 18, blank 86

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/unit/utils.py:L36–L36` |
| `get_test_admin_context` | function | — | exported | `nova.context.get_admin_context()` (src/nova/tests/unit/utils.py:L40) | 1/2 | `src/nova/tests/unit/utils.py:L39–L40` |
| `get_test_image_object` | function | (context, instance_ref) | exported | `objects.ImageMeta.from_dict( image_service.show(context, image_id))` (src/nova/tests/unit/utils.py:L50) | 2/8 | `src/nova/tests/unit/utils.py:L43–L51` |
| `get_test_flavor` | function | (context=None, options=None) | exported | `flavor_ref` (src/nova/tests/unit/utils.py:L74) | 4/19 | `src/nova/tests/unit/utils.py:L54–L74` |
| `get_test_instance` | function | (context=None, flavor=None, obj=False) | exported | `instance` (src/nova/tests/unit/utils.py:L105) | 4/26 | `src/nova/tests/unit/utils.py:L77–L105` |
| `FAKE_NETWORK_VLAN` | constant | — | exported | not declared | — | `src/nova/tests/unit/utils.py:L108–L108` |
| `FAKE_NETWORK_BRIDGE` | constant | — | exported | not declared | — | `src/nova/tests/unit/utils.py:L109–L109` |
| `FAKE_NETWORK_INTERFACE` | constant | — | exported | not declared | — | `src/nova/tests/unit/utils.py:L110–L110` |
| `FAKE_NETWORK_IP4_ADDR1` | constant | — | exported | not declared | — | `src/nova/tests/unit/utils.py:L112–L112` |
| `FAKE_NETWORK_IP4_ADDR2` | constant | — | exported | not declared | — | `src/nova/tests/unit/utils.py:L113–L113` |
| `FAKE_NETWORK_IP6_ADDR1` | constant | — | exported | not declared | — | `src/nova/tests/unit/utils.py:L114–L114` |
| `FAKE_NETWORK_IP6_ADDR2` | constant | — | exported | not declared | — | `src/nova/tests/unit/utils.py:L115–L115` |
| `FAKE_NETWORK_IP6_ADDR3` | constant | — | exported | not declared | — | `src/nova/tests/unit/utils.py:L116–L116` |
| `FAKE_NETWORK_IP4_GATEWAY` | constant | — | exported | not declared | — | `src/nova/tests/unit/utils.py:L118–L118` |
| `FAKE_NETWORK_IP6_GATEWAY` | constant | — | exported | not declared | — | `src/nova/tests/unit/utils.py:L119–L119` |
| `FAKE_NETWORK_IP4_CIDR` | constant | — | exported | not declared | — | `src/nova/tests/unit/utils.py:L121–L121` |
| `FAKE_NETWORK_IP6_CIDR` | constant | — | exported | not declared | — | `src/nova/tests/unit/utils.py:L122–L122` |
| `FAKE_NETWORK_DNS_IP4_ADDR1` | constant | — | exported | not declared | — | `src/nova/tests/unit/utils.py:L124–L124` |
| `FAKE_NETWORK_DNS_IP4_ADDR2` | constant | — | exported | not declared | — | `src/nova/tests/unit/utils.py:L125–L125` |
| `FAKE_NETWORK_DNS_IP6_ADDR1` | constant | — | exported | not declared | — | `src/nova/tests/unit/utils.py:L126–L126` |
| `FAKE_NETWORK_DNS_IP6_ADDR2` | constant | — | exported | not declared | — | `src/nova/tests/unit/utils.py:L127–L127` |
| `FAKE_NETWORK_DHCP_IP4_ADDR` | constant | — | exported | not declared | — | `src/nova/tests/unit/utils.py:L129–L129` |
| `FAKE_NETWORK_UUID` | constant | — | exported | not declared | — | `src/nova/tests/unit/utils.py:L131–L131` |
| `FAKE_VIF_UUID` | constant | — | exported | not declared | — | `src/nova/tests/unit/utils.py:L133–L133` |
| `FAKE_VIF_MAC` | constant | — | exported | not declared | — | `src/nova/tests/unit/utils.py:L134–L134` |
| `get_test_network_info` | function | (count=1) | exported | `network_model.NetworkInfo([current() for x in range(0, count)])` (src/nova/tests/unit/utils.py:L175) | 2/3 | `src/nova/tests/unit/utils.py:L137–L175` |
| `get_test_network_info.current` | function | — | public | `vif` (src/nova/tests/unit/utils.py:L173) | — | `src/nova/tests/unit/utils.py:L138–L173` |
| `is_osx` | function | — | exported | `platform.mac_ver()[0] != ''` (src/nova/tests/unit/utils.py:L179) | 1/2 | `src/nova/tests/unit/utils.py:L178–L179` |
| `is_linux` | function | — | exported | `platform.system() == 'Linux'` (src/nova/tests/unit/utils.py:L183) | 1/2 | `src/nova/tests/unit/utils.py:L182–L183` |
| `killer_xml_body` | function | — | exported | `(("""<!DOCTYPE x [ <!ENTITY a "%(a)s"> <!ENTITY b "%(b)s"> <!ENTITY c "%(c)s">]> <foo> <bar> <v1>%(d)s</v1> </bar> </foo>""") % { 'a': 'A' * 10, 'b': '&a;' * 10, 'c': '&b;' * 10, 'd': '&c;' * 9999, })` (src/nova/tests/unit/utils.py:L187) | 1/15 | `src/nova/tests/unit/utils.py:L186–L200` |
| `is_ipv6_supported` | function | — | exported | `has_ipv6_support` (src/nova/tests/unit/utils.py:L224) | 8/19 | `src/nova/tests/unit/utils.py:L203–L224` |
| `get_api_version` | function | (request) | exported | `int(request.path[2:3])` (src/nova/tests/unit/utils.py:L229) | 2/3 | `src/nova/tests/unit/utils.py:L227–L229` |
| `compare_obj_primitive` | function | (thing1, thing2) | exported | `thing1.obj_to_primitive() == thing2.obj_to_primitive()` (src/nova/tests/unit/utils.py:L234); `thing1 == thing2` (src/nova/tests/unit/utils.py:L236) | 2/5 | `src/nova/tests/unit/utils.py:L232–L236` |
| `_compare_args` | function | (args1, args2, cmp) | unexported | `all(cmp(*pair) for pair in zip(args1, args2))` (src/nova/tests/unit/utils.py:L240) | 2/2 | `src/nova/tests/unit/utils.py:L239–L240` |
| `_compare_kwargs` | function | (kwargs1, kwargs2, cmp) | unexported | `all(cmp(kwargs1[k], kwargs2[k]) for k in set(list(kwargs1.keys()) + list(kwargs2.keys())))` (src/nova/tests/unit/utils.py:L244) | 2/3 | `src/nova/tests/unit/utils.py:L243–L245` |
| `_obj_called_with` | function | (the_mock, *args, **kwargs) | unexported | `count` (src/nova/tests/unit/utils.py:L260) | 5/11 | `src/nova/tests/unit/utils.py:L248–L260` |
| `obj_called_with` | function | (the_mock, *args, **kwargs) | exported | `_obj_called_with(the_mock, *args, **kwargs) != 0` (src/nova/tests/unit/utils.py:L264) | 1/2 | `src/nova/tests/unit/utils.py:L263–L264` |
| `obj_called_once_with` | function | (the_mock, *args, **kwargs) | exported | `_obj_called_with(the_mock, *args, **kwargs) == 1` (src/nova/tests/unit/utils.py:L268) | 1/2 | `src/nova/tests/unit/utils.py:L267–L268` |
| `CustomMockCallMatcher` | class | — | exported | not declared | — | `src/nova/tests/unit/utils.py:L271–L276` |
| `CustomMockCallMatcher.__init__` | method | (self, comparator) | public | not declared | 1/2 | `src/nova/tests/unit/utils.py:L272–L273` |
| `CustomMockCallMatcher.__eq__` | method | (self, other) | public | `self.comparator(other)` (src/nova/tests/unit/utils.py:L276) | 1/2 | `src/nova/tests/unit/utils.py:L275–L276` |
| `ItemsMatcher` | class | — | exported | not declared | — | `src/nova/tests/unit/utils.py:L279–L316` |
| `ItemsMatcher.__init__` | method | (self, iterable) | public | not declared | 1/4 | `src/nova/tests/unit/utils.py:L304–L312` |
| `ItemsMatcher.__repr__` | method | (self) | public | `'ItemsMatcher(%r)' % list(self.bag.elements())` (src/nova/tests/unit/utils.py:L316) | 1/2 | `src/nova/tests/unit/utils.py:L314–L316` |
| `assert_instance_delete_notification_by_uuid` | function | (mock_legacy_notify, mock_notify, expected_instance_uuid, expected_notifier, expected_context, expect_targeted_context=False, expected_source='nova-api', expected_host='fake-mini') | exported | not declared | 1/13 | `src/nova/tests/unit/utils.py:L319–L333` |
| `assert_versioned_instance_delete_notification_by_uuid` | function | (mock_notify, instance_matcher, expected_context, expected_source, expected_host) | exported | not declared | 1/16 | `src/nova/tests/unit/utils.py:L336–L352` |
| `assert_legacy_instance_delete_notification_by_uuid` | function | (mock_notify, instance_matcher, expected_notifier, expected_context, expect_targeted_context) | exported | not declared | 3/17 | `src/nova/tests/unit/utils.py:L355–L373` |
| `ExceptionHelper` | class | — | exported | not declared | — | `src/nova/tests/unit/utils.py:L376–L393` |
| `ExceptionHelper.__init__` | method | (self, target) | public | not declared | 1/2 | `src/nova/tests/unit/utils.py:L381–L382` |
| `ExceptionHelper.__getattr__` | method | (self, name) | public | `wrapper` (src/nova/tests/unit/utils.py:L393) | 1/5 | `src/nova/tests/unit/utils.py:L384–L393` |
| `ExceptionHelper.__getattr__.wrapper` | function | (*args, **kwargs) | public | `func(*args, **kwargs)` (src/nova/tests/unit/utils.py:L390) | — | `src/nova/tests/unit/utils.py:L388–L392` |

## Dependencies

- `import collections` (src/nova/tests/unit/utils.py:L15)
- `import errno` (src/nova/tests/unit/utils.py:L16)
- `import functools` (src/nova/tests/unit/utils.py:L17)
- `import platform` (src/nova/tests/unit/utils.py:L18)
- `import socket` (src/nova/tests/unit/utils.py:L19)
- `import sys` (src/nova/tests/unit/utils.py:L20)
- `unittest`: imports `mock` (src/nova/tests/unit/utils.py:L21)
- `import oslo_messaging as messaging` (src/nova/tests/unit/utils.py:L23)
- `nova.compute`: imports `flavors` (src/nova/tests/unit/utils.py:L25)
- `import nova.conf` (src/nova/tests/unit/utils.py:L26)
- `import nova.context` (src/nova/tests/unit/utils.py:L27)
- `nova.db.main`: imports `api as db` (src/nova/tests/unit/utils.py:L28)
- `nova`: imports `exception` (src/nova/tests/unit/utils.py:L29)
- `nova.image`: imports `glance` (src/nova/tests/unit/utils.py:L30)
- `nova.network`: imports `model as network_model` (src/nova/tests/unit/utils.py:L31)
- `nova`: imports `objects` (src/nova/tests/unit/utils.py:L32)
- `nova.objects`: imports `base as obj_base` (src/nova/tests/unit/utils.py:L33)
- `import nova.utils` (src/nova/tests/unit/utils.py:L34)

## Side Effects

- **file-io**: with open('/proc/net/if_inet6') as f: (src/nova/tests/unit/utils.py:L218)
- **network**: mock_legacy_notify, mock_notify, expected_instance_uuid, (src/nova/tests/unit/utils.py:L320)
- **network**: mock_legacy_notify, match_by_instance_uuid, expected_notifier, (src/nova/tests/unit/utils.py:L329)
- **network**: mock_notify, match_by_instance_uuid, (src/nova/tests/unit/utils.py:L332)
- **network**: mock_notify, instance_matcher, (src/nova/tests/unit/utils.py:L337)
- **network**: mock_notify.assert_has_calls([ (src/nova/tests/unit/utils.py:L340)
- **network**: mock_notify, instance_matcher, expected_notifier, (src/nova/tests/unit/utils.py:L356)
- **network**: mock_notify.assert_has_calls([ (src/nova/tests/unit/utils.py:L359)
- **network**: for call in mock_notify.call_args_list: (src/nova/tests/unit/utils.py:L369)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/tests/unit/utils.py:L36)
- **global-mutation**: FAKE_NETWORK_VLAN = 100 (src/nova/tests/unit/utils.py:L108)
- **global-mutation**: FAKE_NETWORK_BRIDGE = 'br0' (src/nova/tests/unit/utils.py:L109)
- **global-mutation**: FAKE_NETWORK_INTERFACE = 'eth0' (src/nova/tests/unit/utils.py:L110)
- **global-mutation**: FAKE_NETWORK_IP4_ADDR1 = '10.0.0.73' (src/nova/tests/unit/utils.py:L112)
- **global-mutation**: FAKE_NETWORK_IP4_ADDR2 = '10.0.0.74' (src/nova/tests/unit/utils.py:L113)
- **global-mutation**: FAKE_NETWORK_IP6_ADDR1 = '2001:b105:f00d::1' (src/nova/tests/unit/utils.py:L114)
- **global-mutation**: FAKE_NETWORK_IP6_ADDR2 = '2001:b105:f00d::2' (src/nova/tests/unit/utils.py:L115)
- **global-mutation**: FAKE_NETWORK_IP6_ADDR3 = '2001:b105:f00d::3' (src/nova/tests/unit/utils.py:L116)
- **global-mutation**: FAKE_NETWORK_IP4_GATEWAY = '10.0.0.254' (src/nova/tests/unit/utils.py:L118)
- **global-mutation**: FAKE_NETWORK_IP6_GATEWAY = '2001:b105:f00d::ff' (src/nova/tests/unit/utils.py:L119)
- **global-mutation**: FAKE_NETWORK_IP4_CIDR = '10.0.0.0/24' (src/nova/tests/unit/utils.py:L121)
- **global-mutation**: FAKE_NETWORK_IP6_CIDR = '2001:b105:f00d::0/64' (src/nova/tests/unit/utils.py:L122)
- **global-mutation**: FAKE_NETWORK_DNS_IP4_ADDR1 = '192.168.122.1' (src/nova/tests/unit/utils.py:L124)
- **global-mutation**: FAKE_NETWORK_DNS_IP4_ADDR2 = '192.168.122.2' (src/nova/tests/unit/utils.py:L125)
- **global-mutation**: FAKE_NETWORK_DNS_IP6_ADDR1 = '2001:dead:beef::1' (src/nova/tests/unit/utils.py:L126)
- **global-mutation**: FAKE_NETWORK_DNS_IP6_ADDR2 = '2001:dead:beef::2' (src/nova/tests/unit/utils.py:L127)
- **global-mutation**: FAKE_NETWORK_DHCP_IP4_ADDR = '192.168.122.253' (src/nova/tests/unit/utils.py:L129)
- **global-mutation**: FAKE_NETWORK_UUID = '4587c867-a2e6-4356-8c5b-bc077dcb8620' (src/nova/tests/unit/utils.py:L131)
- **global-mutation**: FAKE_VIF_UUID = '51a9642b-1414-4bd6-9a92-1320ddc55a63' (src/nova/tests/unit/utils.py:L133)
- **global-mutation**: FAKE_VIF_MAC = 'de:ad:be:ef:ca:fe' (src/nova/tests/unit/utils.py:L134)

## Security Surface

- **sink** (`db-write`): test_flavor.update(options) (src/nova/tests/unit/utils.py:L67)

