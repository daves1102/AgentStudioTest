# src/nova/tests/unit/virt/vmwareapi/test_session.py

## Overview

This file implements the `test_session` module, defining 3 classs, 2 functions, 12 methods, 5 imports.

Lines: total 208, code 157, comment 18, blank 33

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `_fake_create_session` | function | (inst) | unexported | not declared | 1/7 | `src/nova/tests/unit/virt/vmwareapi/test_session.py:L33–L39` |
| `_fake_fetch_moref_impl` | function | (inst, _) | unexported | not declared | 1/3 | `src/nova/tests/unit/virt/vmwareapi/test_session.py:L42–L44` |
| `FakeStableMoRefProxy` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/test_session.py:L47–L57` |
| `FakeStableMoRefProxy.__init__` | method | (self, ref=None) | public | not declared | 2/4 | `src/nova/tests/unit/virt/vmwareapi/test_session.py:L48–L51` |
| `FakeStableMoRefProxy.fetch_moref` | method | (self, session) | public | not declared | 1/2 | `src/nova/tests/unit/virt/vmwareapi/test_session.py:L53–L54` |
| `FakeStableMoRefProxy.__repr__` | method | (self) | public | `"FakeStableMoRefProxy({!r})".format(self.moref)` (src/nova/tests/unit/virt/vmwareapi/test_session.py:L57) | 1/2 | `src/nova/tests/unit/virt/vmwareapi/test_session.py:L56–L57` |
| `StableMoRefProxyTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/test_session.py:L60–L69` |
| `StableMoRefProxyTestCase.test_proxy` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/vmwareapi/test_session.py:L61–L64` |
| `StableMoRefProxyTestCase.test_proxy_classes` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/vmwareapi/test_session.py:L66–L69` |
| `VMwareSessionTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/test_session.py:L72–L208` |
| `VMwareSessionTestCase.test_call_method` | method | (self, mock_is_vim) | public | not declared | 1/13 | `src/nova/tests/unit/virt/vmwareapi/test_session.py:L76–L88` |
| `VMwareSessionTestCase.test_call_method_vim` | method | (self, mock_is_vim) | public | not declared | 1/12 | `src/nova/tests/unit/virt/vmwareapi/test_session.py:L92–L103` |
| `VMwareSessionTestCase.test_call_method_no_recovery` | method | (self, mock_is_vim) | public | not declared | 1/15 | `src/nova/tests/unit/virt/vmwareapi/test_session.py:L107–L123` |
| `VMwareSessionTestCase.test_call_method_recovery_arg_failed` | method | (self, mock_is_vim) | public | not declared | 1/16 | `src/nova/tests/unit/virt/vmwareapi/test_session.py:L127–L144` |
| `VMwareSessionTestCase.test_call_method_recovery_kwarg_failed` | method | (self, mock_is_vim) | public | not declared | 1/17 | `src/nova/tests/unit/virt/vmwareapi/test_session.py:L148–L166` |
| `VMwareSessionTestCase.test_call_method_recovery_arg_success` | method | (self, mock_is_vim) | public | not declared | 1/17 | `src/nova/tests/unit/virt/vmwareapi/test_session.py:L170–L187` |
| `VMwareSessionTestCase.test_call_method_recovery_kwarg_success` | method | (self, mock_is_vim) | public | not declared | 1/17 | `src/nova/tests/unit/virt/vmwareapi/test_session.py:L191–L208` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/virt/vmwareapi/test_session.py:L24)
- `oslo_vmware`: imports `exceptions as vexec` (src/nova/tests/unit/virt/vmwareapi/test_session.py:L26)
- `nova`: imports `test` (src/nova/tests/unit/virt/vmwareapi/test_session.py:L28)
- `nova.tests.unit.virt.vmwareapi`: imports `fake as vmwareapi_fake` (src/nova/tests/unit/virt/vmwareapi/test_session.py:L29)
- `nova.virt.vmwareapi`: imports `session` (src/nova/tests/unit/virt/vmwareapi/test_session.py:L30)

