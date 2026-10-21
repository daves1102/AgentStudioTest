# src/nova/tests/unit/virt/zvm/test_utils.py

## Overview

This file implements the `test_utils` module, defining 2 classs, 12 methods, 7 imports.

Lines: total 136, code 100, comment 13, blank 23

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `TestZVMUtils` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/zvm/test_utils.py:L26–L136` |
| `TestZVMUtils.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/zvm/test_utils.py:L28–L31` |
| `TestZVMUtils.test_connector_request_handler_invalid_url` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/zvm/test_utils.py:L33–L35` |
| `TestZVMUtils.test_connector_request_handler_https` | method | (self, mock_init) | public | not declared | 1/6 | `src/nova/tests/unit/virt/zvm/test_utils.py:L39–L44` |
| `TestZVMUtils.test_connector_request_handler_https_noca` | method | (self, mock_init) | public | not declared | 1/5 | `src/nova/tests/unit/virt/zvm/test_utils.py:L48–L52` |
| `TestZVMUtils.test_connector_request_handler_http` | method | (self, mock_init) | public | not declared | 1/5 | `src/nova/tests/unit/virt/zvm/test_utils.py:L56–L60` |
| `TestZVMUtils.test_connector_request_handler` | method | (self, mock_send) | public | not declared | 1/6 | `src/nova/tests/unit/virt/zvm/test_utils.py:L63–L68` |
| `TestZVMUtils.test_connector_request_handler_error` | method | (self, mock_send) | public | not declared | 1/12 | `src/nova/tests/unit/virt/zvm/test_utils.py:L71–L83` |
| `TestZVMUtils.test_generate_configdrive` | method | (self, get, create, required) | public | not declared | 1/15 | `src/nova/tests/unit/virt/zvm/test_utils.py:L88–L104` |
| `TestZVMUtils.test_create_config_drive` | method | (self, make_drive, mock_instance_metadata) | public | not declared | 1/15 | `src/nova/tests/unit/virt/zvm/test_utils.py:L108–L128` |
| `TestZVMUtils.test_create_config_drive.FakeInstanceMetadata` | class | — | public | not declared | — | `src/nova/tests/unit/virt/zvm/test_utils.py:L110–L115` |
| `TestZVMUtils.test_create_config_drive.FakeInstanceMetadata.__init__` | method | (self) | public | not declared | — | `src/nova/tests/unit/virt/zvm/test_utils.py:L111–L112` |
| `TestZVMUtils.test_create_config_drive.FakeInstanceMetadata.metadata_for_config_drive` | method | (self) | public | `[]` (src/nova/tests/unit/virt/zvm/test_utils.py:L115) | — | `src/nova/tests/unit/virt/zvm/test_utils.py:L114–L115` |
| `TestZVMUtils.test_create_config_drive_invalid_format` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/zvm/test_utils.py:L130–L136` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/virt/zvm/test_utils.py:L15)
- `zvmconnector`: imports `connector` (src/nova/tests/unit/virt/zvm/test_utils.py:L17)
- `nova`: imports `context` (src/nova/tests/unit/virt/zvm/test_utils.py:L19)
- `nova`: imports `exception` (src/nova/tests/unit/virt/zvm/test_utils.py:L20)
- `nova`: imports `test` (src/nova/tests/unit/virt/zvm/test_utils.py:L21)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/virt/zvm/test_utils.py:L22)
- `nova.virt.zvm`: imports `utils as zvmutils` (src/nova/tests/unit/virt/zvm/test_utils.py:L23)

