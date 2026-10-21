# src/nova/tests/functional/test_metadata.py

## Overview

This file implements the `test_metadata` module, defining 2 classs, 2 functions, 9 methods, 1 variable, 10 imports, 3 side effects, 4 security surface entries.

Lines: total 190, code 132, comment 22, blank 36

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `fake_result` | class | — | exported | not declared | — | `src/nova/tests/functional/test_metadata.py:L29–L32` |
| `fake_result.__init__` | method | (self, result) | public | not declared | 1/3 | `src/nova/tests/functional/test_metadata.py:L30–L32` |
| `real_request` | variable | — | exported | not declared | — | `src/nova/tests/functional/test_metadata.py:L35–L35` |
| `fake_request` | function | (obj, url, method, **kwargs) | exported | `fake_result({'a': 1, 'b': 'foo'})` (src/nova/tests/functional/test_metadata.py:L40); `fake_result({'c': 3})` (src/nova/tests/functional/test_metadata.py:L42); `fake_result(jsonutils.loads(kwargs.get('data', '{}')))` (src/nova/tests/functional/test_metadata.py:L44); `real_request(method, url, **kwargs)` (src/nova/tests/functional/test_metadata.py:L45) | 4/8 | `src/nova/tests/functional/test_metadata.py:L38–L45` |
| `MetadataTest` | class | — | exported | not declared | — | `src/nova/tests/functional/test_metadata.py:L48–L190` |
| `MetadataTest.setUp` | method | (self) | public | not declared | 1/20 | `src/nova/tests/functional/test_metadata.py:L49–L77` |
| `MetadataTest.setUp.fake_get_fixed_ip_by_address` | function | (self, ctxt, address) | public | `{'instance_uuid': server['id']}` (src/nova/tests/functional/test_metadata.py:L72) | — | `src/nova/tests/functional/test_metadata.py:L71–L72` |
| `MetadataTest.test_lookup_metadata_root_url` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/test_metadata.py:L79–L81` |
| `MetadataTest.test_lookup_metadata_openstack_url` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/test_metadata.py:L83–L87` |
| `MetadataTest.test_lookup_metadata_data_url` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/test_metadata.py:L89–L95` |
| `MetadataTest.test_lookup_external_service` | method | (self) | public | not declared | 1/20 | `src/nova/tests/functional/test_metadata.py:L97–L119` |
| `MetadataTest.test_lookup_external_service_no_overwrite` | method | (self) | public | not declared | 1/19 | `src/nova/tests/functional/test_metadata.py:L121–L142` |
| `MetadataTest.test_lookup_external_service_passes_data` | method | (self) | public | not declared | 1/21 | `src/nova/tests/functional/test_metadata.py:L144–L172` |
| `MetadataTest.test_network_data_matches_schema` | method | (self) | public | not declared | 1/12 | `src/nova/tests/functional/test_metadata.py:L174–L190` |

## Dependencies

- `import fixtures` (src/nova/tests/functional/test_metadata.py:L15)
- `import jsonschema` (src/nova/tests/functional/test_metadata.py:L16)
- `import os` (src/nova/tests/functional/test_metadata.py:L17)
- `import requests` (src/nova/tests/functional/test_metadata.py:L18)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/functional/test_metadata.py:L20)
- `oslo_utils`: imports `uuidutils` (src/nova/tests/functional/test_metadata.py:L21)
- `nova`: imports `test` (src/nova/tests/functional/test_metadata.py:L23)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/functional/test_metadata.py:L24)
- `nova.tests.functional`: imports `fixtures as func_fixtures` (src/nova/tests/functional/test_metadata.py:L25)
- `nova.tests.functional`: imports `integrated_helpers` (src/nova/tests/functional/test_metadata.py:L26)

## Side Effects

- **file-io**: schema_file = os.path.normpath(os.path.join( (src/nova/tests/functional/test_metadata.py:L184)
- **file-io**: os.path.dirname(os.path.abspath(__file__)), (src/nova/tests/functional/test_metadata.py:L185)
- **file-io**: with open(schema_file, 'rb') as f: (src/nova/tests/functional/test_metadata.py:L187)

## Security Surface

- **privilege** (`crypto-key`): 'keystoneauth1.session.Session.request', fake_request)) (src/nova/tests/functional/test_metadata.py:L108)
- **privilege** (`crypto-key`): 'keystoneauth1.session.Session.request', fake_request)) (src/nova/tests/functional/test_metadata.py:L132)
- **privilege** (`crypto-key`): 'keystoneauth1.session.Session.request', fake_request)) (src/nova/tests/functional/test_metadata.py:L159)
- **privilege** (`crypto-key`): 'keystoneauth1.session.Session.request', fake_request)) (src/nova/tests/functional/test_metadata.py:L176)

