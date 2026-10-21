# src/nova/tests/unit/api/openstack/compute/test_console_output.py

## Overview

This file implements the `test_console_output` module, defining 1 class, 2 fields, 5 functions, 17 methods, 9 imports, 1 side effect.

Lines: total 151, code 103, comment 14, blank 34

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `fake_get_console_output` | function | (self, _context, _instance, tail_length) | exported | `'\n'.join(fixture)` (src/nova/tests/unit/api/openstack/compute/test_console_output.py:L40) | 4/9 | `src/nova/tests/unit/api/openstack/compute/test_console_output.py:L30–L40` |
| `fake_get_console_output_not_ready` | function | (self, _context, _instance, tail_length) | exported | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_console_output.py:L43–L44` |
| `fake_get_console_output_all_characters` | function | (self, _ctx, _instance, _tail_len) | exported | `string.printable` (src/nova/tests/unit/api/openstack/compute/test_console_output.py:L48) | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_console_output.py:L47–L48` |
| `fake_get` | function | (self, context, instance_uuid, expected_attrs=None, cell_down_support=False) | exported | `fake_instance.fake_instance_obj(context, **{'uuid': instance_uuid})` (src/nova/tests/unit/api/openstack/compute/test_console_output.py:L53) | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_console_output.py:L51–L53` |
| `fake_get_not_found` | function | (*args, **kwargs) | exported | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_console_output.py:L56–L57` |
| `ConsoleOutputExtensionTestV21` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_console_output.py:L60–L151` |
| `ConsoleOutputExtensionTestV21.controller_class` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_console_output.py:L61–L61` |
| `ConsoleOutputExtensionTestV21.validation_error` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_console_output.py:L62–L62` |
| `ConsoleOutputExtensionTestV21.setUp` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_console_output.py:L64–L70` |
| `ConsoleOutputExtensionTestV21._get_console_output` | method | (self, length_dict=None) | private | `self.controller.get_console_output(self.req, fakes.FAKE_UUID, body=body)` (src/nova/tests/unit/api/openstack/compute/test_console_output.py:L75) | 2/5 | `src/nova/tests/unit/api/openstack/compute/test_console_output.py:L72–L76` |
| `ConsoleOutputExtensionTestV21._check_console_output_failure` | method | (self, exception, body) | private | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_console_output.py:L78–L81` |
| `ConsoleOutputExtensionTestV21.test_get_text_console_instance_action` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_console_output.py:L83–L85` |
| `ConsoleOutputExtensionTestV21.test_get_console_output_with_tail` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_console_output.py:L87–L89` |
| `ConsoleOutputExtensionTestV21.test_get_console_output_with_none_length` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_console_output.py:L91–L93` |
| `ConsoleOutputExtensionTestV21.test_get_console_output_with_length_as_str` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_console_output.py:L95–L97` |
| `ConsoleOutputExtensionTestV21.test_get_console_output_filtered_characters` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_console_output.py:L99–L105` |
| `ConsoleOutputExtensionTestV21.test_get_text_console_no_instance` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_console_output.py:L107–L110` |
| `ConsoleOutputExtensionTestV21.test_get_text_console_no_instance_on_get_output` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_console_output.py:L112–L116` |
| `ConsoleOutputExtensionTestV21.test_get_console_output_with_non_integer_length` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_console_output.py:L118–L120` |
| `ConsoleOutputExtensionTestV21.test_get_text_console_bad_body` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_console_output.py:L122–L124` |
| `ConsoleOutputExtensionTestV21.test_get_console_output_with_length_as_float` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_console_output.py:L126–L128` |
| `ConsoleOutputExtensionTestV21.test_get_console_output_not_ready` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_console_output.py:L130–L134` |
| `ConsoleOutputExtensionTestV21.test_not_implemented` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_console_output.py:L136–L140` |
| `ConsoleOutputExtensionTestV21.test_get_console_output_with_boolean_length` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_console_output.py:L142–L144` |
| `ConsoleOutputExtensionTestV21.test_get_console_output_not_available` | method | (self, mock_get_console_output) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_console_output.py:L149–L151` |

## Dependencies

- `import string` (src/nova/tests/unit/api/openstack/compute/test_console_output.py:L16)
- `unittest`: imports `mock` (src/nova/tests/unit/api/openstack/compute/test_console_output.py:L17)
- `import webob` (src/nova/tests/unit/api/openstack/compute/test_console_output.py:L19)
- `nova.api.openstack.compute`: imports `console_output as console_output_v21` (src/nova/tests/unit/api/openstack/compute/test_console_output.py:L21–L22)
- `nova.compute`: imports `api as compute_api` (src/nova/tests/unit/api/openstack/compute/test_console_output.py:L23)
- `nova`: imports `exception` (src/nova/tests/unit/api/openstack/compute/test_console_output.py:L24)
- `nova`: imports `test` (src/nova/tests/unit/api/openstack/compute/test_console_output.py:L25)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/api/openstack/compute/test_console_output.py:L26)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/api/openstack/compute/test_console_output.py:L27)

## Side Effects

- **network**: from nova.api.openstack.compute import console_output \ (src/nova/tests/unit/api/openstack/compute/test_console_output.py:L21)

