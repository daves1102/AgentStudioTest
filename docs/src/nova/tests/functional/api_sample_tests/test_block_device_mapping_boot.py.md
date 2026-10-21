# src/nova/tests/functional/api_sample_tests/test_block_device_mapping_boot.py

## Overview

This file implements the `test_block_device_mapping_boot` module, defining 2 classs, 2 fields, 1 method, 2 imports.

Lines: total 31, code 11, comment 14, blank 6

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `BlockDeviceMappingV1BootJsonTest` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_block_device_mapping_boot.py:L20–L27` |
| `BlockDeviceMappingV1BootJsonTest.sample_dir` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_block_device_mapping_boot.py:L21–L21` |
| `BlockDeviceMappingV1BootJsonTest.test_servers_post_with_bdm` | method | (self) | public | `self._post_server()` (src/nova/tests/functional/api_sample_tests/test_block_device_mapping_boot.py:L27) | 1/5 | `src/nova/tests/functional/api_sample_tests/test_block_device_mapping_boot.py:L23–L27` |
| `BlockDeviceMappingV2BootJsonTest` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_block_device_mapping_boot.py:L30–L31` |
| `BlockDeviceMappingV2BootJsonTest.sample_dir` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_block_device_mapping_boot.py:L31–L31` |

## Dependencies

- `nova.tests.functional.api_sample_tests`: imports `test_servers` (src/nova/tests/functional/api_sample_tests/test_block_device_mapping_boot.py:L16)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/functional/api_sample_tests/test_block_device_mapping_boot.py:L17)

