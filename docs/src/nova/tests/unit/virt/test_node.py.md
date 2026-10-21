# src/nova/tests/unit/virt/test_node.py

## Overview

This file implements the `test_node` module, defining 1 class, 1 constant, 10 methods, 11 imports, 7 side effects, 2 security surface entries.

Lines: total 142, code 93, comment 27, blank 22

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/unit/virt/test_node.py:L29–L29` |
| `TestNodeIdentity` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/test_node.py:L34–L142` |
| `TestNodeIdentity.flags` | method | (self, **kw) | public | not declared | 2/4 | `src/nova/tests/unit/virt/test_node.py:L35–L39` |
| `TestNodeIdentity.setUp` | method | (self) | public | not declared | 2/13 | `src/nova/tests/unit/virt/test_node.py:L41–L53` |
| `TestNodeIdentity.test_generate_local_node_uuid` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/test_node.py:L55–L63` |
| `TestNodeIdentity.test_generate_local_node_uuid_unexpected_open_fail` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/test_node.py:L65–L71` |
| `TestNodeIdentity.test_generate_local_node_uuid_unexpected_write_fail` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/virt/test_node.py:L73–L80` |
| `TestNodeIdentity.test_get_local_node_uuid_simple_exists` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/test_node.py:L82–L86` |
| `TestNodeIdentity.test_get_local_node_uuid_simple_exists_whitespace` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/virt/test_node.py:L88–L93` |
| `TestNodeIdentity.test_get_local_node_uuid_simple_generate` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/virt/test_node.py:L95–L110` |
| `TestNodeIdentity.test_get_local_node_uuid_two` | method | (self) | public | not declared | 2/6 | `src/nova/tests/unit/virt/test_node.py:L112–L122` |
| `TestNodeIdentity.test_get_local_node_uuid_two_mismatch` | method | (self) | public | not declared | 2/14 | `src/nova/tests/unit/virt/test_node.py:L124–L142` |

## Dependencies

- `import os` (src/nova/tests/unit/virt/test_node.py:L15)
- `unittest`: imports `mock` (src/nova/tests/unit/virt/test_node.py:L16)
- `import uuid` (src/nova/tests/unit/virt/test_node.py:L17)
- `import fixtures` (src/nova/tests/unit/virt/test_node.py:L19)
- `oslo_config`: imports `cfg` (src/nova/tests/unit/virt/test_node.py:L20)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/virt/test_node.py:L21)
- `import testtools` (src/nova/tests/unit/virt/test_node.py:L22)
- `nova`: imports `exception` (src/nova/tests/unit/virt/test_node.py:L24)
- `nova`: imports `test` (src/nova/tests/unit/virt/test_node.py:L25)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/unit/virt/test_node.py:L26)
- `nova.virt`: imports `node` (src/nova/tests/unit/virt/test_node.py:L27)

## Side Effects

- **file-io**: self.identity_file = os.path.join(self.tempdir, node.COMPUTE_ID_FILE) (src/nova/tests/unit/virt/test_node.py:L45)
- **file-io**: os.makedirs(os.path.dirname(fn)) (src/nova/tests/unit/virt/test_node.py:L50)
- **file-io**: open(os.path.join(os.path.dirname(cf), (src/nova/tests/unit/virt/test_node.py:L117)
- **file-io**: open(os.path.join( (src/nova/tests/unit/virt/test_node.py:L129)
- **file-io**: os.path.dirname(fn), (src/nova/tests/unit/virt/test_node.py:L130)
- **file-io**: os.path.join(os.path.dirname(self.fake_config_files[1]), (src/nova/tests/unit/virt/test_node.py:L139)
- **global-mutation**: CONF = cfg.CONF (src/nova/tests/unit/virt/test_node.py:L29)

## Security Surface

- **sink** (`file-write`): node.COMPUTE_ID_FILE), 'w').write(node_uuid) (src/nova/tests/unit/virt/test_node.py:L118)
- **sink** (`file-write`): node.COMPUTE_ID_FILE), 'w').write(id) (src/nova/tests/unit/virt/test_node.py:L131)

