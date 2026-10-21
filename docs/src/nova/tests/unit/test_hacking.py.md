# src/nova/tests/unit/test_hacking.py

## Overview

This file implements the `test_hacking` module, defining 1 class, 3 functions, 52 methods, 5 imports, 6 side effects, 3 security surface entries.

Lines: total 1145, code 945, comment 41, blank 159

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `HackingTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_hacking.py:L24–L1145` |
| `HackingTestCase.test_virt_driver_imports` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/test_hacking.py:L55–L69` |
| `HackingTestCase.test_virt_driver_config_vars` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/test_hacking.py:L71–L80` |
| `HackingTestCase.test_assert_true_instance` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/test_hacking.py:L82–L88` |
| `HackingTestCase.test_assert_equal_type` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/test_hacking.py:L90–L95` |
| `HackingTestCase.test_assert_equal_in` | method | (self) | public | not declared | 1/25 | `src/nova/tests/unit/test_hacking.py:L97–L132` |
| `HackingTestCase.test_assert_true_or_false_with_in_or_not_in` | method | (self) | public | not declared | 1/29 | `src/nova/tests/unit/test_hacking.py:L134–L175` |
| `HackingTestCase.test_no_translate_logs` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/test_hacking.py:L177–L185` |
| `HackingTestCase.test_no_setting_conf_directly_in_tests` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/test_hacking.py:L187–L206` |
| `HackingTestCase.test_no_mutable_default_args` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/test_hacking.py:L208–L216` |
| `HackingTestCase.test_check_explicit_underscore_import` | method | (self) | public | not declared | 1/22 | `src/nova/tests/unit/test_hacking.py:L218–L239` |
| `HackingTestCase.test_use_jsonutils` | method | (self) | public | not declared | 2/18 | `src/nova/tests/unit/test_hacking.py:L241–L263` |
| `HackingTestCase.test_use_jsonutils.__get_msg` | function | (fun) | private | `[(0, msg)]` (src/nova/tests/unit/test_hacking.py:L245) | — | `src/nova/tests/unit/test_hacking.py:L242–L245` |
| `HackingTestCase._run_check` | method | (self, code, checker, filename=None) | private | `checker.report._deferred_print` (src/nova/tests/unit/test_hacking.py:L281) | 1/8 | `src/nova/tests/unit/test_hacking.py:L269–L281` |
| `HackingTestCase._assert_has_errors` | method | (self, code, checker, expected_errors=None, filename=None) | private | not declared | 3/5 | `src/nova/tests/unit/test_hacking.py:L283–L287` |
| `HackingTestCase._assert_has_no_errors` | method | (self, code, checker, filename=None) | private | not declared | 1/2 | `src/nova/tests/unit/test_hacking.py:L289–L290` |
| `HackingTestCase.test_api_version_decorator_check` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/test_hacking.py:L292–L300` |
| `HackingTestCase.test_oslo_assert_raises_regexp` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/test_hacking.py:L302–L310` |
| `HackingTestCase.test_api_version_decorator_check_no_errors` | method | (self) | public | not declared | 2/17 | `src/nova/tests/unit/test_hacking.py:L312–L328` |
| `HackingTestCase.test_trans_add` | method | (self) | public | not declared | 1/23 | `src/nova/tests/unit/test_hacking.py:L330–L354` |
| `HackingTestCase.test_dict_constructor_with_list_copy` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/test_hacking.py:L356–L382` |
| `HackingTestCase.test_check_http_not_implemented` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/test_hacking.py:L384–L400` |
| `HackingTestCase.test_check_contextlib_use` | method | (self) | public | not declared | 1/24 | `src/nova/tests/unit/test_hacking.py:L402–L425` |
| `HackingTestCase.test_check_greenthread_spawns` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/test_hacking.py:L427–L451` |
| `HackingTestCase.test_config_option_regex_match` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/test_hacking.py:L453–L466` |
| `HackingTestCase.test_config_option_regex_match.should_match` | function | (code) | public | not declared | — | `src/nova/tests/unit/test_hacking.py:L454–L455` |
| `HackingTestCase.test_config_option_regex_match.should_not_match` | function | (code) | public | not declared | — | `src/nova/tests/unit/test_hacking.py:L457–L458` |
| `HackingTestCase.test_check_config_option_in_central_place` | method | (self) | public | not declared | 1/22 | `src/nova/tests/unit/test_hacking.py:L468–L495` |
| `HackingTestCase.test_check_doubled_words` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/test_hacking.py:L497–L508` |
| `HackingTestCase.test_no_os_popen` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/test_hacking.py:L510–L526` |
| `HackingTestCase.test_no_log_warn` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/test_hacking.py:L528–L538` |
| `HackingTestCase.test_uncalled_closures` | method | (self) | public | not declared | 1/23 | `src/nova/tests/unit/test_hacking.py:L540–L565` |
| `HackingTestCase.test_check_policy_registration_in_central_place` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/test_hacking.py:L567–L582` |
| `HackingTestCase.test_check_policy_enforce` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/test_hacking.py:L584–L592` |
| `HackingTestCase.test_check_policy_enforce_does_not_catch_other_enforce` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/test_hacking.py:L594–L601` |
| `HackingTestCase.test_log_context` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/test_hacking.py:L603–L621` |
| `HackingTestCase.test_no_assert_equal_true_false` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/test_hacking.py:L623–L643` |
| `HackingTestCase.test_no_assert_true_false_is_not` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/test_hacking.py:L645–L655` |
| `HackingTestCase.test_check_uuid4` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/test_hacking.py:L657–L671` |
| `HackingTestCase.test_return_followed_by_space` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/test_hacking.py:L673–L689` |
| `HackingTestCase.test_no_redundant_import_alias` | method | (self) | public | not declared | 2/19 | `src/nova/tests/unit/test_hacking.py:L691–L709` |
| `HackingTestCase.test_yield_followed_by_space` | method | (self) | public | not declared | 2/21 | `src/nova/tests/unit/test_hacking.py:L711–L731` |
| `HackingTestCase.test_assert_regexpmatches` | method | (self) | public | not declared | 2/13 | `src/nova/tests/unit/test_hacking.py:L733–L745` |
| `HackingTestCase.test_import_alias_privsep` | method | (self) | public | not declared | 5/33 | `src/nova/tests/unit/test_hacking.py:L747–L779` |
| `HackingTestCase.test_did_you_mean_tuple` | method | (self) | public | not declared | 2/23 | `src/nova/tests/unit/test_hacking.py:L781–L803` |
| `HackingTestCase.test_nonexistent_assertion_methods_and_attributes` | method | (self) | public | not declared | 2/74 | `src/nova/tests/unit/test_hacking.py:L805–L881` |
| `HackingTestCase.test_useless_assertion` | method | (self) | public | not declared | 2/25 | `src/nova/tests/unit/test_hacking.py:L883–L909` |
| `HackingTestCase.test_check_assert_has_calls` | method | (self) | public | not declared | 2/21 | `src/nova/tests/unit/test_hacking.py:L911–L933` |
| `HackingTestCase.test_do_not_alias_mock_class` | method | (self) | public | not declared | 2/23 | `src/nova/tests/unit/test_hacking.py:L935–L959` |
| `HackingTestCase.test_do_not_use_mock_class_as_new_mock_value` | method | (self) | public | not declared | 2/37 | `src/nova/tests/unit/test_hacking.py:L961–L999` |
| `HackingTestCase.test_check_lockutils_rwlocks` | method | (self) | public | not declared | 2/18 | `src/nova/tests/unit/test_hacking.py:L1001–L1019` |
| `HackingTestCase.test_check_six` | method | (self) | public | not declared | 2/9 | `src/nova/tests/unit/test_hacking.py:L1021–L1029` |
| `HackingTestCase.test_check_set_daemon` | method | (self) | public | not declared | 2/19 | `src/nova/tests/unit/test_hacking.py:L1031–L1050` |
| `HackingTestCase.test_check_eventlet_primitives` | method | (self) | public | not declared | 3/28 | `src/nova/tests/unit/test_hacking.py:L1052–L1081` |
| `HackingTestCase.test_check_eventlet_yield` | method | (self) | public | not declared | 2/11 | `src/nova/tests/unit/test_hacking.py:L1083–L1094` |
| `HackingTestCase.test_check_threading_event_mock` | method | (self) | public | not declared | 2/49 | `src/nova/tests/unit/test_hacking.py:L1096–L1145` |

## Dependencies

- `import textwrap` (src/nova/tests/unit/test_hacking.py:L15)
- `unittest`: imports `mock` (src/nova/tests/unit/test_hacking.py:L16)
- `import pycodestyle` (src/nova/tests/unit/test_hacking.py:L18)
- `nova.hacking`: imports `checks` (src/nova/tests/unit/test_hacking.py:L20)
- `nova`: imports `test` (src/nova/tests/unit/test_hacking.py:L21)

## Side Effects

- **process-spawn**: import nova.privsep.linux_net as privsep_linux_net (src/nova/tests/unit/test_hacking.py:L752)
- **process-spawn**: 'nova/foo/privsep.py', (src/nova/tests/unit/test_hacking.py:L756)
- **process-spawn**: good_filenames = ('nova/privsep.py', (src/nova/tests/unit/test_hacking.py:L763)
- **process-spawn**: import nova.privsep.foo (src/nova/tests/unit/test_hacking.py:L771)
- **process-spawn**: import nova.privsep.foo.bar (src/nova/tests/unit/test_hacking.py:L772)
- **process-spawn**: import nova.foo.privsep.bar (src/nova/tests/unit/test_hacking.py:L774)

## Security Surface

- **privilege** (`privsep-entrypoint`): import nova.privsep.linux_net as privsep_linux_net (src/nova/tests/unit/test_hacking.py:L752)
- **privilege** (`privsep-entrypoint`): import nova.privsep.foo (src/nova/tests/unit/test_hacking.py:L771)
- **privilege** (`privsep-entrypoint`): import nova.privsep.foo.bar (src/nova/tests/unit/test_hacking.py:L772)

