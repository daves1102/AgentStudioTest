# src/nova/tests/unit/compute/test_provider_config.py

## Overview

This file implements the `test_provider_config` module, defining 4 classs, 2 constants, 17 methods, 10 imports, 5 side effects.

Lines: total 458, code 382, comment 25, blank 51

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `SchemaValidationMixin` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_provider_config.py:L27–L118` |
| `SchemaValidationMixin.setUp` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_provider_config.py:L40–L47` |
| `SchemaValidationMixin.set_config` | method | (self, config=None) | public | `data` (src/nova/tests/unit/compute/test_provider_config.py:L52) | 2/4 | `src/nova/tests/unit/compute/test_provider_config.py:L49–L52` |
| `SchemaValidationMixin.run_test_validation_errors` | method | (self, config, expected_messages) | public | not declared | 2/7 | `src/nova/tests/unit/compute/test_provider_config.py:L54–L62` |
| `SchemaValidationMixin.run_test_validation_errors_regex` | method | (self, config, pattern) | public | not declared | 1/6 | `src/nova/tests/unit/compute/test_provider_config.py:L64–L71` |
| `SchemaValidationMixin.run_test_validation_success` | method | (self, config) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_provider_config.py:L73–L78` |
| `SchemaValidationMixin.run_schema_version_matching` | method | (self, min_schema_version, max_schema_version) | public | not declared | 1/25 | `src/nova/tests/unit/compute/test_provider_config.py:L80–L118` |
| `SchemaValidationTestCasesV1` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_provider_config.py:L122–L144` |
| `SchemaValidationTestCasesV1.MIN_SCHEMA_VERSION` | constant | — | public | not declared | — | `src/nova/tests/unit/compute/test_provider_config.py:L123–L123` |
| `SchemaValidationTestCasesV1.MAX_SCHEMA_VERSION` | constant | — | public | not declared | — | `src/nova/tests/unit/compute/test_provider_config.py:L124–L124` |
| `SchemaValidationTestCasesV1.test_validation_errors` | method | (self, config, expected_messages=None, expected_message_regex=None) | public | not declared | 2/8 | `src/nova/tests/unit/compute/test_provider_config.py:L128–L135` |
| `SchemaValidationTestCasesV1.test_validation_success` | method | (self, config) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_provider_config.py:L139–L140` |
| `SchemaValidationTestCasesV1.test_schema_version_matching` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_provider_config.py:L142–L144` |
| `ValidateProviderConfigTestCases` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_provider_config.py:L148–L201` |
| `ValidateProviderConfigTestCases.test__validate_provider_good_config` | method | (self, sample) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_provider_config.py:L151–L152` |
| `ValidateProviderConfigTestCases.test__validate_provider_bad_config` | method | (self, sample, expected_messages) | public | not declared | 1/6 | `src/nova/tests/unit/compute/test_provider_config.py:L156–L162` |
| `ValidateProviderConfigTestCases.test__validate_provider_config_one_noop_provider` | method | (self, mock_log) | public | not declared | 1/32 | `src/nova/tests/unit/compute/test_provider_config.py:L165–L201` |
| `GetProviderConfigsTestCases` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_provider_config.py:L204–L458` |
| `GetProviderConfigsTestCases.test_get_provider_configs_one_file` | method | (self, mock_glob) | public | not declared | 1/36 | `src/nova/tests/unit/compute/test_provider_config.py:L206–L244` |
| `GetProviderConfigsTestCases.test_get_provider_configs_one_file_uuid_conflict` | method | (self, mock_parser, mock_glob) | public | not declared | 1/60 | `src/nova/tests/unit/compute/test_provider_config.py:L248–L310` |
| `GetProviderConfigsTestCases.test_get_provider_configs_two_files` | method | (self, mock_parser, mock_glob) | public | not declared | 3/64 | `src/nova/tests/unit/compute/test_provider_config.py:L314–L379` |
| `GetProviderConfigsTestCases.test_get_provider_configs_two_files_name_conflict` | method | (self, mock_parser, mock_glob) | public | not declared | 2/63 | `src/nova/tests/unit/compute/test_provider_config.py:L383–L448` |
| `GetProviderConfigsTestCases.test_get_provider_configs_no_configs` | method | (self, mock_log) | public | not declared | 1/7 | `src/nova/tests/unit/compute/test_provider_config.py:L451–L458` |

## Dependencies

- `import copy` (src/nova/tests/unit/compute/test_provider_config.py:L13)
- `import ddt` (src/nova/tests/unit/compute/test_provider_config.py:L14)
- `import fixtures` (src/nova/tests/unit/compute/test_provider_config.py:L15)
- `import microversion_parse` (src/nova/tests/unit/compute/test_provider_config.py:L16)
- `import os` (src/nova/tests/unit/compute/test_provider_config.py:L17)
- `unittest`: imports `mock` (src/nova/tests/unit/compute/test_provider_config.py:L18)
- `oslo_utils.fixture`: imports `uuidsentinel` (src/nova/tests/unit/compute/test_provider_config.py:L20)
- `oslotest`: imports `base` (src/nova/tests/unit/compute/test_provider_config.py:L21)
- `nova.compute`: imports `provider_config` (src/nova/tests/unit/compute/test_provider_config.py:L23)
- `nova`: imports `exception as nova_exc` (src/nova/tests/unit/compute/test_provider_config.py:L24)

## Side Effects

- **file-io**: example_file = os.path.join( (src/nova/tests/unit/compute/test_provider_config.py:L236)
- **file-io**: os.path.dirname(os.path.realpath(__file__)), (src/nova/tests/unit/compute/test_provider_config.py:L237)
- **file-io**: mock_glob.glob.assert_called_once_with(os.path.join(dummy_path, (src/nova/tests/unit/compute/test_provider_config.py:L375)
- **global-mutation**: MIN_SCHEMA_VERSION = microversion_parse.Version(1, 0) (src/nova/tests/unit/compute/test_provider_config.py:L123)
- **global-mutation**: MAX_SCHEMA_VERSION = microversion_parse.Version(1, 0) (src/nova/tests/unit/compute/test_provider_config.py:L124)

