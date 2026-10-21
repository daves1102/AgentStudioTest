# src/nova/tests/functional/api_sample_tests/test_attach_interfaces.py

## Overview

This file implements the `test_attach_interfaces` module, defining 3 classs, 6 fields, 6 functions, 14 methods, 4 imports.

Lines: total 230, code 182, comment 18, blank 30

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `AttachInterfacesSampleJsonTest` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_attach_interfaces.py:L22–L148` |
| `AttachInterfacesSampleJsonTest.sample_dir` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_attach_interfaces.py:L23–L23` |
| `AttachInterfacesSampleJsonTest.setUp` | method | (self) | public | not declared | 1/12 | `src/nova/tests/functional/api_sample_tests/test_attach_interfaces.py:L25–L71` |
| `AttachInterfacesSampleJsonTest.setUp.fake_list_ports` | function | (self, *args, **kwargs) | public | `ports` (src/nova/tests/functional/api_sample_tests/test_attach_interfaces.py:L47) | — | `src/nova/tests/functional/api_sample_tests/test_attach_interfaces.py:L28–L47` |
| `AttachInterfacesSampleJsonTest.setUp.fake_attach_interface` | function | (self, context, instance, network_id, port_id, requested_ip='192.168.1.3', tag=None) | public | `vif` (src/nova/tests/functional/api_sample_tests/test_attach_interfaces.py:L60) | — | `src/nova/tests/functional/api_sample_tests/test_attach_interfaces.py:L49–L60` |
| `AttachInterfacesSampleJsonTest.setUp.fake_detach_interface` | function | (self, context, instance, port_id) | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_attach_interfaces.py:L62–L63` |
| `AttachInterfacesSampleJsonTest.generalize_subs` | method | (self, subs, vanilla_regexes) | public | `subs` (src/nova/tests/functional/api_sample_tests/test_attach_interfaces.py:L79) | 1/7 | `src/nova/tests/functional/api_sample_tests/test_attach_interfaces.py:L73–L79` |
| `AttachInterfacesSampleJsonTest._get_subs` | method | (self) | private | `{ 'ip_address': '192.168.1.3', 'subnet_id': 'f8a6e8f8-c2ec-497c-9f23-da9616de54ef', 'mac_addr': 'fa:16:3e:4c:2c:30', 'net_id': '3cb9bc59-5699-4588-a4b1-b87f96708bc6', 'port_id': 'ce531f90-199f-48c0-81` (src/nova/tests/functional/api_sample_tests/test_attach_interfaces.py:L84) | 1/9 | `src/nova/tests/functional/api_sample_tests/test_attach_interfaces.py:L81–L91` |
| `AttachInterfacesSampleJsonTest.test_list_interfaces` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/api_sample_tests/test_attach_interfaces.py:L93–L99` |
| `AttachInterfacesSampleJsonTest._stub_show_for_instance` | method | (self, instance_uuid, port_id) | private | not declared | 1/5 | `src/nova/tests/functional/api_sample_tests/test_attach_interfaces.py:L101–L105` |
| `AttachInterfacesSampleJsonTest.test_show_interfaces` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/api_sample_tests/test_attach_interfaces.py:L107–L116` |
| `AttachInterfacesSampleJsonTest.test_create_interfaces` | method | (self, instance_uuid=None) | public | not declared | 2/10 | `src/nova/tests/functional/api_sample_tests/test_attach_interfaces.py:L118–L127` |
| `AttachInterfacesSampleJsonTest.test_create_interfaces_with_net_id_and_fixed_ips` | method | (self, instance_uuid=None) | public | not declared | 2/11 | `src/nova/tests/functional/api_sample_tests/test_attach_interfaces.py:L129–L139` |
| `AttachInterfacesSampleJsonTest.test_delete_interfaces` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/api_sample_tests/test_attach_interfaces.py:L141–L148` |
| `AttachInterfacesSampleV249JsonTest` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_attach_interfaces.py:L151–L198` |
| `AttachInterfacesSampleV249JsonTest.sample_dir` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_attach_interfaces.py:L152–L152` |
| `AttachInterfacesSampleV249JsonTest.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_attach_interfaces.py:L153–L153` |
| `AttachInterfacesSampleV249JsonTest.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_attach_interfaces.py:L154–L154` |
| `AttachInterfacesSampleV249JsonTest.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/api_sample_tests/test_attach_interfaces.py:L156–L174` |
| `AttachInterfacesSampleV249JsonTest.setUp.fake_attach_interface` | function | (self, context, instance, network_id, port_id, requested_ip='192.168.1.3', tag=None) | public | `vif` (src/nova/tests/functional/api_sample_tests/test_attach_interfaces.py:L171) | — | `src/nova/tests/functional/api_sample_tests/test_attach_interfaces.py:L159–L171` |
| `AttachInterfacesSampleV249JsonTest._stub_show_for_instance` | method | (self, instance_uuid, port_id) | private | not declared | 1/5 | `src/nova/tests/functional/api_sample_tests/test_attach_interfaces.py:L176–L180` |
| `AttachInterfacesSampleV249JsonTest.test_create_interfaces` | method | (self, instance_uuid=None) | public | not declared | 2/17 | `src/nova/tests/functional/api_sample_tests/test_attach_interfaces.py:L182–L198` |
| `AttachInterfacesSampleV270JsonTest` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_attach_interfaces.py:L201–L230` |
| `AttachInterfacesSampleV270JsonTest.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_attach_interfaces.py:L205–L205` |
| `AttachInterfacesSampleV270JsonTest.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_attach_interfaces.py:L206–L206` |
| `AttachInterfacesSampleV270JsonTest.setUp` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/api_sample_tests/test_attach_interfaces.py:L208–L224` |
| `AttachInterfacesSampleV270JsonTest.setUp.fake_virtual_interface_list_by_instance_uuid` | function | (*args, **kwargs) | public | `objects.VirtualInterfaceList(objects=[ objects.VirtualInterface( # All these tests care about is the uuid and tag. uuid=port_id, tag='public')])` (src/nova/tests/functional/api_sample_tests/test_attach_interfaces.py:L213) | — | `src/nova/tests/functional/api_sample_tests/test_attach_interfaces.py:L212–L216` |
| `AttachInterfacesSampleV270JsonTest.setUp.fake_virtual_interface_get_by_uuid` | function | (*args, **kwargs) | public | `objects.VirtualInterface(uuid=port_id, tag='public')` (src/nova/tests/functional/api_sample_tests/test_attach_interfaces.py:L219) | — | `src/nova/tests/functional/api_sample_tests/test_attach_interfaces.py:L218–L219` |
| `AttachInterfacesSampleV270JsonTest._get_subs` | method | (self) | private | `subs` (src/nova/tests/functional/api_sample_tests/test_attach_interfaces.py:L230) | 1/4 | `src/nova/tests/functional/api_sample_tests/test_attach_interfaces.py:L226–L230` |

## Dependencies

- `nova`: imports `exception` (src/nova/tests/functional/api_sample_tests/test_attach_interfaces.py:L16)
- `nova`: imports `objects` (src/nova/tests/functional/api_sample_tests/test_attach_interfaces.py:L17)
- `nova.tests.functional.api_sample_tests`: imports `test_servers` (src/nova/tests/functional/api_sample_tests/test_attach_interfaces.py:L18)
- `nova.tests.unit`: imports `fake_network_cache_model` (src/nova/tests/functional/api_sample_tests/test_attach_interfaces.py:L19)

