# src/nova/hacking/checks.py

## Overview

This file implements the `checks` module, defining 4 classs, 3 constants, 4 fields, 50 functions, 9 methods, 51 variables, 4 imports, 5 side effects.

Lines: total 1140, code 817, comment 71, blank 252

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `UNDERSCORE_IMPORT_FILES` | constant | — | exported | not declared | — | `src/nova/hacking/checks.py:L37–L37` |
| `session_check` | variable | — | exported | not declared | — | `src/nova/hacking/checks.py:L39–L39` |
| `cfg_re` | variable | — | exported | not declared | — | `src/nova/hacking/checks.py:L40–L40` |
| `cfg_opt_re` | variable | — | exported | not declared | — | `src/nova/hacking/checks.py:L42–L42` |
| `rule_default_re` | variable | — | exported | not declared | — | `src/nova/hacking/checks.py:L43–L43` |
| `policy_enforce_re` | variable | — | exported | not declared | — | `src/nova/hacking/checks.py:L44–L44` |
| `virt_file_re` | variable | — | exported | not declared | — | `src/nova/hacking/checks.py:L45–L45` |
| `virt_import_re` | variable | — | exported | not declared | — | `src/nova/hacking/checks.py:L46–L47` |
| `virt_config_re` | variable | — | exported | not declared | — | `src/nova/hacking/checks.py:L48–L49` |
| `asse_trueinst_re` | variable | — | exported | not declared | — | `src/nova/hacking/checks.py:L50–L52` |
| `asse_equal_type_re` | variable | — | exported | not declared | — | `src/nova/hacking/checks.py:L53–L55` |
| `asse_equal_in_end_with_true_or_false_re` | variable | — | exported | not declared | — | `src/nova/hacking/checks.py:L56–L57` |
| `asse_equal_in_start_with_true_or_false_re` | variable | — | exported | not declared | — | `src/nova/hacking/checks.py:L58–L59` |
| `asse_true_false_with_in_or_not_in` | variable | — | exported | not declared | — | `src/nova/hacking/checks.py:L71–L72` |
| `asse_true_false_with_in_or_not_in_spaces` | variable | — | exported | not declared | — | `src/nova/hacking/checks.py:L73–L75` |
| `asse_raises_regexp` | variable | — | exported | not declared | — | `src/nova/hacking/checks.py:L76–L76` |
| `conf_attribute_set_re` | variable | — | exported | not declared | — | `src/nova/hacking/checks.py:L77–L77` |
| `translated_log` | variable | — | exported | not declared | — | `src/nova/hacking/checks.py:L78–L78` |
| `mutable_default_args` | variable | — | exported | not declared | — | `src/nova/hacking/checks.py:L79–L79` |
| `string_translation` | variable | — | exported | not declared | — | `src/nova/hacking/checks.py:L80–L80` |
| `underscore_import_check` | variable | — | exported | not declared | — | `src/nova/hacking/checks.py:L81–L81` |
| `import_translation_for_log_or_exception` | variable | — | exported | not declared | — | `src/nova/hacking/checks.py:L82–L83` |
| `custom_underscore_check` | variable | — | exported | not declared | — | `src/nova/hacking/checks.py:L85–L85` |
| `api_version_re` | variable | — | exported | not declared | — | `src/nova/hacking/checks.py:L86–L86` |
| `dict_constructor_with_list_copy_re` | variable | — | exported | not declared | — | `src/nova/hacking/checks.py:L87–L87` |
| `decorator_re` | variable | — | exported | not declared | — | `src/nova/hacking/checks.py:L88–L88` |
| `http_not_implemented_re` | variable | — | exported | not declared | — | `src/nova/hacking/checks.py:L89–L89` |
| `spawn_re` | variable | — | exported | not declared | — | `src/nova/hacking/checks.py:L90–L91` |
| `contextlib_nested` | variable | — | exported | not declared | — | `src/nova/hacking/checks.py:L92–L92` |
| `doubled_words_re` | variable | — | exported | not declared | — | `src/nova/hacking/checks.py:L93–L94` |
| `log_remove_context` | variable | — | exported | not declared | — | `src/nova/hacking/checks.py:L95–L96` |
| `return_not_followed_by_space` | variable | — | exported | not declared | — | `src/nova/hacking/checks.py:L97–L97` |
| `uuid4_re` | variable | — | exported | not declared | — | `src/nova/hacking/checks.py:L98–L98` |
| `redundant_import_alias_re` | variable | — | exported | not declared | — | `src/nova/hacking/checks.py:L99–L99` |
| `yield_not_followed_by_space` | variable | — | exported | not declared | — | `src/nova/hacking/checks.py:L100–L100` |
| `asse_regexpmatches` | variable | — | exported | not declared | — | `src/nova/hacking/checks.py:L101–L102` |
| `privsep_file_re` | variable | — | exported | not declared | — | `src/nova/hacking/checks.py:L103–L103` |
| `privsep_import_re` | variable | — | exported | not declared | — | `src/nova/hacking/checks.py:L104–L105` |
| `disguised_as_tuple_re` | variable | — | exported | not declared | — | `src/nova/hacking/checks.py:L115–L115` |
| `mock_assert_method_re` | variable | — | exported | not declared | — | `src/nova/hacking/checks.py:L120–L125` |
| `mock_attribute_re` | variable | — | exported | not declared | — | `src/nova/hacking/checks.py:L126–L126` |
| `useless_assertion_re` | variable | — | exported | not declared | — | `src/nova/hacking/checks.py:L128–L129` |
| `mock_assert_has_calls_re` | variable | — | exported | not declared | — | `src/nova/hacking/checks.py:L131–L131` |
| `mock_class_aliasing_re` | variable | — | exported | not declared | — | `src/nova/hacking/checks.py:L134–L135` |
| `mock_class_as_new_value_in_patching_re` | variable | — | exported | not declared | — | `src/nova/hacking/checks.py:L137–L138` |
| `rwlock_re` | variable | — | exported | not declared | — | `src/nova/hacking/checks.py:L140–L142` |
| `six_re` | variable | — | exported | not declared | — | `src/nova/hacking/checks.py:L143–L143` |
| `set_daemon_re` | variable | — | exported | not declared | — | `src/nova/hacking/checks.py:L145–L145` |
| `eventlet_stdlib_primitives_re` | variable | — | exported | not declared | — | `src/nova/hacking/checks.py:L146–L147` |
| `eventlet_yield_re` | variable | — | exported | not declared | — | `src/nova/hacking/checks.py:L148–L148` |
| `eventlet_primitives_re` | variable | — | exported | not declared | — | `src/nova/hacking/checks.py:L149–L151` |
| `threading_event_mock_re` | variable | — | exported | not declared | — | `src/nova/hacking/checks.py:L152–L157` |
| `BaseASTChecker` | class | — | exported | not declared | — | `src/nova/hacking/checks.py:L160–L200` |
| `BaseASTChecker.__init__` | method | (self, tree, filename) | public | not declared | 1/3 | `src/nova/hacking/checks.py:L174–L182` |
| `BaseASTChecker.run` | method | (self) | public | `self._errors` (src/nova/hacking/checks.py:L187) | 1/3 | `src/nova/hacking/checks.py:L184–L187` |
| `BaseASTChecker.add_error` | method | (self, node, message=None) | public | not declared | 2/4 | `src/nova/hacking/checks.py:L189–L193` |
| `BaseASTChecker._check_call_names` | method | (self, call_node, names) | private | `True` (src/nova/hacking/checks.py:L199); `False` (src/nova/hacking/checks.py:L200) | 4/6 | `src/nova/hacking/checks.py:L195–L200` |
| `import_no_db_in_virt` | function | (logical_line, filename) | exported | not declared | 4/4 | `src/nova/hacking/checks.py:L204–L214` |
| `no_db_session_in_public_api` | function | (logical_line, filename) | exported | not declared | 3/4 | `src/nova/hacking/checks.py:L218–L221` |
| `use_timeutils_utcnow` | function | (logical_line, filename) | exported | `` (src/nova/hacking/checks.py:L228) | 4/9 | `src/nova/hacking/checks.py:L225–L236` |
| `_get_virt_name` | function | (regex, data) | unexported | `None` (src/nova/hacking/checks.py:L242); `None` (src/nova/hacking/checks.py:L247); `driver` (src/nova/hacking/checks.py:L248) | 3/9 | `src/nova/hacking/checks.py:L239–L248` |
| `import_no_virt_driver_import_deps` | function | (physical_line, filename) | exported | `(0, "N311: importing code from other virt drivers forbidden")` (src/nova/hacking/checks.py:L268) | 4/7 | `src/nova/hacking/checks.py:L252–L268` |
| `import_no_virt_driver_config_deps` | function | (physical_line, filename) | exported | `(0, "N312: using config vars from other virt drivers forbidden")` (src/nova/hacking/checks.py:L287) | 4/7 | `src/nova/hacking/checks.py:L272–L287` |
| `capital_cfg_help` | function | (logical_line, tokens) | exported | not declared | 6/8 | `src/nova/hacking/checks.py:L291–L299` |
| `assert_true_instance` | function | (logical_line) | exported | not declared | 2/3 | `src/nova/hacking/checks.py:L303–L309` |
| `assert_equal_type` | function | (logical_line) | exported | not declared | 2/3 | `src/nova/hacking/checks.py:L313–L319` |
| `no_translate_logs` | function | (logical_line, filename) | exported | not declared | 2/3 | `src/nova/hacking/checks.py:L323–L332` |
| `no_import_translation_in_tests` | function | (logical_line, filename) | exported | not declared | 3/5 | `src/nova/hacking/checks.py:L336–L343` |
| `no_setting_conf_directly_in_tests` | function | (logical_line, filename) | exported | not declared | 3/6 | `src/nova/hacking/checks.py:L347–L360` |
| `no_mutable_default_args` | function | (logical_line) | exported | not declared | 2/4 | `src/nova/hacking/checks.py:L364–L367` |
| `check_explicit_underscore_import` | function | (logical_line, filename) | exported | not declared | 5/8 | `src/nova/hacking/checks.py:L371–L388` |
| `use_jsonutils` | function | (logical_line, filename) | exported | `` (src/nova/hacking/checks.py:L395) | 5/10 | `src/nova/hacking/checks.py:L392–L404` |
| `check_api_version_decorator` | function | (logical_line, previous_logical, blank_before, filename) | exported | not declared | 4/7 | `src/nova/hacking/checks.py:L408–L414` |
| `CheckForTransAdd` | class | — | exported | not declared | — | `src/nova/hacking/checks.py:L417–L440` |
| `CheckForTransAdd.name` | field | — | public | not declared | — | `src/nova/hacking/checks.py:L425–L425` |
| `CheckForTransAdd.version` | field | — | public | not declared | — | `src/nova/hacking/checks.py:L426–L426` |
| `CheckForTransAdd.CHECK_DESC` | constant | — | public | not declared | — | `src/nova/hacking/checks.py:L428–L429` |
| `CheckForTransAdd.TRANS_FUNC` | constant | — | public | not declared | — | `src/nova/hacking/checks.py:L431–L431` |
| `CheckForTransAdd.visit_BinOp` | method | (self, node) | public | not declared | 6/8 | `src/nova/hacking/checks.py:L433–L440` |
| `_FindVariableReferences` | class | — | unexported | not declared | — | `src/nova/hacking/checks.py:L443–L456` |
| `_FindVariableReferences.__init__` | method | (self) | public | not declared | 1/3 | `src/nova/hacking/checks.py:L444–L446` |
| `_FindVariableReferences.visit_Name` | method | (self, node) | public | not declared | 2/4 | `src/nova/hacking/checks.py:L448–L456` |
| `CheckForUncalledTestClosure` | class | — | exported | not declared | — | `src/nova/hacking/checks.py:L459–L514` |
| `CheckForUncalledTestClosure.name` | field | — | public | not declared | — | `src/nova/hacking/checks.py:L486–L486` |
| `CheckForUncalledTestClosure.version` | field | — | public | not declared | — | `src/nova/hacking/checks.py:L487–L487` |
| `CheckForUncalledTestClosure.__init__` | method | (self, tree, filename) | public | not declared | 1/3 | `src/nova/hacking/checks.py:L489–L491` |
| `CheckForUncalledTestClosure.visit_FunctionDef` | method | (self, node) | public | `` (src/nova/hacking/checks.py:L497) | 6/16 | `src/nova/hacking/checks.py:L493–L514` |
| `assert_true_or_false_with_in` | function | (logical_line) | exported | not declared | 3/7 | `src/nova/hacking/checks.py:L518–L530` |
| `assert_raises_regexp` | function | (logical_line) | exported | not declared | 2/5 | `src/nova/hacking/checks.py:L534–L542` |
| `dict_constructor_with_list_copy` | function | (logical_line) | exported | not declared | 2/6 | `src/nova/hacking/checks.py:L546–L551` |
| `assert_equal_in` | function | (logical_line) | exported | not declared | 3/7 | `src/nova/hacking/checks.py:L555–L566` |
| `check_http_not_implemented` | function | (logical_line, filename, noqa) | exported | `` (src/nova/hacking/checks.py:L574); `` (src/nova/hacking/checks.py:L576) | 4/9 | `src/nova/hacking/checks.py:L570–L578` |
| `check_greenthread_spawns` | function | (logical_line, filename) | exported | `` (src/nova/hacking/checks.py:L591) | 4/8 | `src/nova/hacking/checks.py:L582–L596` |
| `check_no_contextlib_nested` | function | (logical_line, filename) | exported | not declared | 2/7 | `src/nova/hacking/checks.py:L600–L607` |
| `check_config_option_in_central_place` | function | (logical_line, filename) | exported | `` (src/nova/hacking/checks.py:L617); `` (src/nova/hacking/checks.py:L634) | 5/16 | `src/nova/hacking/checks.py:L611–L637` |
| `check_policy_registration_in_central_place` | function | (logical_line, filename) | exported | `` (src/nova/hacking/checks.py:L646); `` (src/nova/hacking/checks.py:L649) | 4/9 | `src/nova/hacking/checks.py:L641–L652` |
| `check_policy_enforce` | function | (logical_line, filename) | exported | not declared | 2/5 | `src/nova/hacking/checks.py:L656–L671` |
| `check_doubled_words` | function | (physical_line, filename) | exported | `(0, msg % {'word': match.group(1)})` (src/nova/hacking/checks.py:L685) | 2/5 | `src/nova/hacking/checks.py:L675–L685` |
| `no_os_popen` | function | (logical_line) | exported | not declared | 2/4 | `src/nova/hacking/checks.py:L689–L700` |
| `no_log_warn` | function | (logical_line) | exported | not declared | 2/4 | `src/nova/hacking/checks.py:L704–L715` |
| `check_context_log` | function | (logical_line, filename, noqa) | exported | `` (src/nova/hacking/checks.py:L729); `` (src/nova/hacking/checks.py:L732) | 4/11 | `src/nova/hacking/checks.py:L719–L739` |
| `no_assert_equal_true_false` | function | (logical_line) | exported | not declared | 3/8 | `src/nova/hacking/checks.py:L743–L758` |
| `no_assert_true_false_is_not` | function | (logical_line) | exported | not declared | 2/6 | `src/nova/hacking/checks.py:L762–L774` |
| `check_uuid4` | function | (logical_line) | exported | not declared | 2/5 | `src/nova/hacking/checks.py:L778–L791` |
| `return_followed_by_space` | function | (logical_line) | exported | not declared | 2/4 | `src/nova/hacking/checks.py:L795–L809` |
| `no_redundant_import_alias` | function | (logical_line) | exported | not declared | 2/3 | `src/nova/hacking/checks.py:L813–L825` |
| `yield_followed_by_space` | function | (logical_line) | exported | not declared | 2/4 | `src/nova/hacking/checks.py:L829–L843` |
| `assert_regexpmatches` | function | (logical_line) | exported | not declared | 2/5 | `src/nova/hacking/checks.py:L847–L855` |
| `privsep_imports_not_aliased` | function | (logical_line, filename) | exported | not declared | 4/9 | `src/nova/hacking/checks.py:L859–L884` |
| `did_you_mean_tuple` | function | (logical_line) | exported | not declared | 2/4 | `src/nova/hacking/checks.py:L888–L895` |
| `nonexistent_assertion_methods_and_attributes` | function | (logical_line, filename) | exported | not declared | 4/11 | `src/nova/hacking/checks.py:L899–L929` |
| `useless_assertion` | function | (logical_line, filename) | exported | not declared | 4/6 | `src/nova/hacking/checks.py:L933–L952` |
| `check_assert_has_calls` | function | (logical_line, filename) | exported | not declared | 3/5 | `src/nova/hacking/checks.py:L956–L967` |
| `do_not_alias_mock_class` | function | (logical_line, filename) | exported | not declared | 3/14 | `src/nova/hacking/checks.py:L971–L996` |
| `do_not_use_mock_class_as_new_mock_value` | function | (logical_line, filename) | exported | not declared | 3/12 | `src/nova/hacking/checks.py:L1000–L1022` |
| `check_lockutils_rwlocks` | function | (logical_line) | exported | not declared | 2/10 | `src/nova/hacking/checks.py:L1026–L1047` |
| `check_six` | function | (logical_line) | exported | not declared | 2/4 | `src/nova/hacking/checks.py:L1051–L1062` |
| `check_set_daemon` | function | (logical_line) | exported | not declared | 2/5 | `src/nova/hacking/checks.py:L1066–L1081` |
| `check_eventlet_primitives` | function | (logical_line, filename) | exported | not declared | 3/10 | `src/nova/hacking/checks.py:L1085–L1103` |
| `check_eventlet_yield` | function | (logical_line, filename) | exported | not declared | 2/7 | `src/nova/hacking/checks.py:L1107–L1119` |
| `check_threading_event_mock` | function | (physical_line, filename) | exported | `` (src/nova/hacking/checks.py:L1135); `0, msg` (src/nova/hacking/checks.py:L1140) | 3/11 | `src/nova/hacking/checks.py:L1123–L1140` |

## Dependencies

- `import ast` (src/nova/hacking/checks.py:L30)
- `import os` (src/nova/hacking/checks.py:L31)
- `import re` (src/nova/hacking/checks.py:L32)
- `hacking`: imports `core` (src/nova/hacking/checks.py:L34)

## Side Effects

- **file-io**: if (not os.path.basename(self._filename).startswith('test_') and (src/nova/hacking/checks.py:L495)
- **file-io**: os.path.basename(self._filename) != 'stdin'): (src/nova/hacking/checks.py:L496)
- **global-mutation**: UNDERSCORE_IMPORT_FILES = [] (src/nova/hacking/checks.py:L37)
- **global-mutation**: CHECK_DESC = ('N326 Translated messages cannot be concatenated.  ' (src/nova/hacking/checks.py:L428)
- **global-mutation**: TRANS_FUNC = ['_'] (src/nova/hacking/checks.py:L431)

