# src/nova/tests/unit/test_test.py

## Overview

This file implements the `test_test` module, defining 15 classs, 2 constants, 1 field, 27 methods, 12 imports, 22 side effects, 2 security surface entries.

Lines: total 437, code 342, comment 33, blank 62

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/tests/unit/test_test.py:L34–L34` |
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/unit/test_test.py:L36–L36` |
| `IsolationTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_test.py:L39–L65` |
| `IsolationTestCase.test_service_isolation` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/test_test.py:L47–L48` |
| `IsolationTestCase.test_rpc_consumer_isolation` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/test_test.py:L50–L65` |
| `IsolationTestCase.test_rpc_consumer_isolation.NeverCalled` | class | — | public | not declared | — | `src/nova/tests/unit/test_test.py:L51–L59` |
| `IsolationTestCase.test_rpc_consumer_isolation.NeverCalled.__getattribute__` | method | (self, name) | public | `` (src/nova/tests/unit/test_test.py:L58) | — | `src/nova/tests/unit/test_test.py:L53–L59` |
| `JsonTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_test.py:L68–L246` |
| `JsonTestCase.test_compare_dict_string` | method | (self) | public | not declared | 1/32 | `src/nova/tests/unit/test_test.py:L69–L100` |
| `JsonTestCase.test_fail_on_list_length` | method | (self) | public | not declared | 2/32 | `src/nova/tests/unit/test_test.py:L102–L135` |
| `JsonTestCase.test_fail_on_dict_length` | method | (self) | public | not declared | 2/26 | `src/nova/tests/unit/test_test.py:L137–L162` |
| `JsonTestCase.test_fail_on_dict_keys` | method | (self) | public | not declared | 2/23 | `src/nova/tests/unit/test_test.py:L164–L186` |
| `JsonTestCase.test_fail_on_list_value` | method | (self) | public | not declared | 2/29 | `src/nova/tests/unit/test_test.py:L188–L216` |
| `JsonTestCase.test_fail_on_dict_value` | method | (self) | public | not declared | 2/25 | `src/nova/tests/unit/test_test.py:L218–L242` |
| `JsonTestCase.test_compare_scalars` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/test_test.py:L244–L246` |
| `BadLogTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_test.py:L249–L254` |
| `BadLogTestCase.test_bad_debug_log` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/test_test.py:L252–L254` |
| `MatchTypeTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_test.py:L257–L282` |
| `MatchTypeTestCase.test_match_type_simple` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/test_test.py:L259–L268` |
| `MatchTypeTestCase.test_match_type_object` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/test_test.py:L270–L282` |
| `MatchTypeTestCase.test_match_type_object.Hello` | class | — | public | not declared | — | `src/nova/tests/unit/test_test.py:L271–L272` |
| `MatchTypeTestCase.test_match_type_object.World` | class | — | public | not declared | — | `src/nova/tests/unit/test_test.py:L274–L275` |
| `ContainKeyValueTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_test.py:L285–L302` |
| `ContainKeyValueTestCase.test_contain_key_value_normal` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/test_test.py:L287–L292` |
| `ContainKeyValueTestCase.test_contain_key_value_exception` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/test_test.py:L294–L302` |
| `NovaExceptionReraiseFormatErrorTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_test.py:L305–L320` |
| `NovaExceptionReraiseFormatErrorTestCase.test_format_error_in_nova_exception` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/test_test.py:L308–L320` |
| `NovaExceptionReraiseFormatErrorTestCase.test_format_error_in_nova_exception.FakeImageException` | class | — | public | not declared | — | `src/nova/tests/unit/test_test.py:L309–L310` |
| `PatchExistsTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_test.py:L323–L364` |
| `PatchExistsTestCase.test_with_patch_exists_true` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/test_test.py:L324–L334` |
| `PatchExistsTestCase.test_with_patch_exists_false` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/test_test.py:L336–L346` |
| `PatchExistsTestCase.test_patch_exists_decorator_true` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/test_test.py:L349–L355` |
| `PatchExistsTestCase.test_patch_exists_decorator_false` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/test_test.py:L358–L364` |
| `PatchOpenTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_test.py:L367–L419` |
| `PatchOpenTestCase.fake_contents` | field | — | public | not declared | — | `src/nova/tests/unit/test_test.py:L368–L368` |
| `PatchOpenTestCase._test_patched_open` | method | (self) | private | `tmp.name` (src/nova/tests/unit/test_test.py:L398) | 1/17 | `src/nova/tests/unit/test_test.py:L370–L398` |
| `PatchOpenTestCase.test_with_patch_open` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/test_test.py:L400–L412` |
| `PatchOpenTestCase.test_patch_open_decorator` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/test_test.py:L415–L419` |
| `SubclassSignatureTestCaseTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_test.py:L422–L437` |
| `SubclassSignatureTestCaseTestCase.Baseclass` | class | — | public | not declared | — | `src/nova/tests/unit/test_test.py:L423–L425` |
| `SubclassSignatureTestCaseTestCase.Baseclass.method` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/test_test.py:L424–L425` |
| `SubclassSignatureTestCaseTestCase.Subclass` | class | — | public | not declared | — | `src/nova/tests/unit/test_test.py:L427–L429` |
| `SubclassSignatureTestCaseTestCase.Subclass.method` | method | (self, different) | public | not declared | 1/2 | `src/nova/tests/unit/test_test.py:L428–L429` |
| `SubclassSignatureTestCaseTestCase._get_base_class` | method | (self) | private | `SubclassSignatureTestCaseTestCase.Baseclass` (src/nova/tests/unit/test_test.py:L432) | 1/2 | `src/nova/tests/unit/test_test.py:L431–L432` |
| `SubclassSignatureTestCaseTestCase.test_signatures` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/test_test.py:L435–L437` |

## Dependencies

- `import os.path` (src/nova/tests/unit/test_test.py:L19)
- `import tempfile` (src/nova/tests/unit/test_test.py:L20)
- `import unittest` (src/nova/tests/unit/test_test.py:L21)
- `unittest`: imports `mock` (src/nova/tests/unit/test_test.py:L22)
- `import uuid` (src/nova/tests/unit/test_test.py:L23)
- `oslo_log`: imports `log as logging` (src/nova/tests/unit/test_test.py:L25)
- `import oslo_messaging as messaging` (src/nova/tests/unit/test_test.py:L26)
- `import nova.conf` (src/nova/tests/unit/test_test.py:L28)
- `nova`: imports `exception` (src/nova/tests/unit/test_test.py:L29)
- `nova`: imports `rpc` (src/nova/tests/unit/test_test.py:L30)
- `nova`: imports `test` (src/nova/tests/unit/test_test.py:L31)
- `nova.tests`: imports `fixtures` (src/nova/tests/unit/test_test.py:L32)

## Side Effects

- **file-io**: self.assertFalse(os.path.exists('fake_file')) (src/nova/tests/unit/test_test.py:L329)
- **file-io**: self.assertTrue(os.path.exists('fake_file')) (src/nova/tests/unit/test_test.py:L331)
- **file-io**: self.assertTrue(os.path.exists(__file__)) (src/nova/tests/unit/test_test.py:L332)
- **file-io**: self.assertFalse(os.path.exists('non-existent/file')) (src/nova/tests/unit/test_test.py:L333)
- **file-io**: self.assertTrue(os.path.exists(__file__)) (src/nova/tests/unit/test_test.py:L341)
- **file-io**: self.assertFalse(os.path.exists(__file__)) (src/nova/tests/unit/test_test.py:L343)
- **file-io**: self.assertTrue(os.path.exists(os.path.dirname(__file__))) (src/nova/tests/unit/test_test.py:L344)
- **file-io**: self.assertFalse(os.path.exists('non-existent/file')) (src/nova/tests/unit/test_test.py:L345)
- **file-io**: self.assertTrue(os.path.exists('fake_file')) (src/nova/tests/unit/test_test.py:L353)
- **file-io**: self.assertTrue(os.path.exists(__file__)) (src/nova/tests/unit/test_test.py:L354)
- **file-io**: self.assertFalse(os.path.exists('non-existent/file')) (src/nova/tests/unit/test_test.py:L355)
- **file-io**: self.assertFalse(os.path.exists(__file__)) (src/nova/tests/unit/test_test.py:L362)
- **file-io**: self.assertTrue(os.path.exists(os.path.dirname(__file__))) (src/nova/tests/unit/test_test.py:L363)
- **file-io**: self.assertFalse(os.path.exists('non-existent/file')) (src/nova/tests/unit/test_test.py:L364)
- **file-io**: self.assertFalse(os.path.exists('fake_file')) (src/nova/tests/unit/test_test.py:L374)
- **file-io**: with open('fake_file') as f: (src/nova/tests/unit/test_test.py:L376)
- **file-io**: with open(__file__.rstrip('c')) as f: (src/nova/tests/unit/test_test.py:L382)
- **file-io**: tmp = tempfile.NamedTemporaryFile() (src/nova/tests/unit/test_test.py:L391)
- **file-io**: with open(tmp.name, 'w') as f: (src/nova/tests/unit/test_test.py:L393)
- **file-io**: with open(tmp.name) as f: (src/nova/tests/unit/test_test.py:L395)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/tests/unit/test_test.py:L34)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/tests/unit/test_test.py:L36)

## Security Surface

- **sink** (`file-write`): with open(tmp.name, 'w') as f: (src/nova/tests/unit/test_test.py:L393)
- **sink** (`file-write`): f.write(tmp_contents) (src/nova/tests/unit/test_test.py:L394)

