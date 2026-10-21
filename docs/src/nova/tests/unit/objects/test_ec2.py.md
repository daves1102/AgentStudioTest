# src/nova/tests/unit/objects/test_ec2.py

## Overview

This file implements the `test_ec2` module, defining 9 classs, 12 methods, 2 staticmethods, 1 variable, 6 imports.

Lines: total 200, code 143, comment 13, blank 44

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `fake_map` | variable | — | exported | not declared | — | `src/nova/tests/unit/objects/test_ec2.py:L25–L32` |
| `_TestEC2InstanceMapping` | class | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_ec2.py:L35–L64` |
| `_TestEC2InstanceMapping._compare` | method | (test, db, obj) | private | not declared | 2/3 | `src/nova/tests/unit/objects/test_ec2.py:L37–L39` |
| `_TestEC2InstanceMapping.test_create` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/objects/test_ec2.py:L41–L51` |
| `_TestEC2InstanceMapping.test_get_by_uuid` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_ec2.py:L53–L58` |
| `_TestEC2InstanceMapping.test_get_by_ec2_id` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_ec2.py:L60–L64` |
| `TestEC2InstanceMapping` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_ec2.py:L67–L68` |
| `TestRemoteEC2InstanceMapping` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_ec2.py:L71–L73` |
| `_TestS3ImageMapping` | class | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_ec2.py:L76–L105` |
| `_TestS3ImageMapping._compare` | method | (test, db, obj) | private | not declared | 2/3 | `src/nova/tests/unit/objects/test_ec2.py:L78–L80` |
| `_TestS3ImageMapping.test_create` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/objects/test_ec2.py:L82–L92` |
| `_TestS3ImageMapping.test_get_by_uuid` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_ec2.py:L94–L99` |
| `_TestS3ImageMapping.test_get_by_s3_id` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_ec2.py:L101–L105` |
| `TestS3ImageMapping` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_ec2.py:L108–L109` |
| `TestRemoteS3ImageMapping` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_ec2.py:L112–L113` |
| `_TestEC2Ids` | class | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_ec2.py:L116–L192` |
| `_TestEC2Ids.test_get_by_instance` | method | (self, mock_inst, mock_glance, mock_type) | public | not declared | 1/16 | `src/nova/tests/unit/objects/test_ec2.py:L120–L137` |
| `_TestEC2Ids.test_get_by_instance_no_image_ref` | method | (self, mock_inst, mock_glance) | public | not declared | 1/10 | `src/nova/tests/unit/objects/test_ec2.py:L141–L152` |
| `_TestEC2Ids.test_get_by_instance_no_kernel_id` | method | (self, mock_inst, mock_glance, mock_type) | public | not declared | 1/14 | `src/nova/tests/unit/objects/test_ec2.py:L157–L172` |
| `_TestEC2Ids.test_get_by_instance_no_ramdisk_id` | method | (self, mock_inst, mock_glance, mock_type) | public | not declared | 1/14 | `src/nova/tests/unit/objects/test_ec2.py:L177–L192` |
| `TestEC2Ids` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_ec2.py:L195–L196` |
| `TestRemoteEC2Ids` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_ec2.py:L199–L200` |
| `_TestEC2InstanceMapping._compare` | staticmethod | — | private | not declared | — | `src/nova/tests/unit/objects/test_ec2.py:L36–L39` |
| `_TestS3ImageMapping._compare` | staticmethod | — | private | not declared | — | `src/nova/tests/unit/objects/test_ec2.py:L77–L80` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/objects/test_ec2.py:L15)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/objects/test_ec2.py:L17)
- `nova.db.main`: imports `api as db` (src/nova/tests/unit/objects/test_ec2.py:L19)
- `nova`: imports `objects` (src/nova/tests/unit/objects/test_ec2.py:L20)
- `nova.objects`: imports `ec2 as ec2_obj` (src/nova/tests/unit/objects/test_ec2.py:L21)
- `nova.tests.unit.objects`: imports `test_objects` (src/nova/tests/unit/objects/test_ec2.py:L22)

