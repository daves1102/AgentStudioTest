# src/nova/virt/node.py

## Overview

This file implements the `node` module, defining 4 constants, 3 functions, 6 imports, 10 side effects, 1 security surface entry.

Lines: total 108, code 65, comment 25, blank 18

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/virt/node.py:L24–L24` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/virt/node.py:L25–L25` |
| `COMPUTE_ID_FILE` | constant | — | exported | not declared | — | `src/nova/virt/node.py:L26–L26` |
| `LOCAL_NODE_UUID` | constant | — | exported | not declared | — | `src/nova/virt/node.py:L27–L27` |
| `write_local_node_uuid` | function | (node_uuid) | exported | not declared | 3/12 | `src/nova/virt/node.py:L30–L50` |
| `read_local_node_uuid` | function | — | exported | `first` (src/nova/virt/node.py:L86); `None` (src/nova/virt/node.py:L88) | 8/29 | `src/nova/virt/node.py:L53–L88` |
| `get_local_node_uuid` | function | — | exported | `LOCAL_NODE_UUID` (src/nova/virt/node.py:L99); `node_uuid` (src/nova/virt/node.py:L108) | 3/11 | `src/nova/virt/node.py:L91–L108` |

## Dependencies

- `import logging` (src/nova/virt/node.py:L15)
- `import os` (src/nova/virt/node.py:L16)
- `import uuid` (src/nova/virt/node.py:L17)
- `oslo_utils`: imports `uuidutils` (src/nova/virt/node.py:L19)
- `import nova.conf` (src/nova/virt/node.py:L21)
- `nova`: imports `exception` (src/nova/virt/node.py:L22)

## Side Effects

- **file-io**: fn = os.path.join(CONF.state_path, COMPUTE_ID_FILE) (src/nova/virt/node.py:L33)
- **file-io**: with open(fn, 'x') as f: (src/nova/virt/node.py:L38)
- **file-io**: locations = ([os.path.dirname(f) for f in CONF.config_file] + (src/nova/virt/node.py:L54)
- **file-io**: fn = os.path.join(location, COMPUTE_ID_FILE) (src/nova/virt/node.py:L60)
- **file-io**: with open(fn) as f: (src/nova/virt/node.py:L66)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/virt/node.py:L24)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/virt/node.py:L25)
- **global-mutation**: COMPUTE_ID_FILE = 'compute_id' (src/nova/virt/node.py:L26)
- **global-mutation**: LOCAL_NODE_UUID = None (src/nova/virt/node.py:L27)
- **global-mutation**: LOCAL_NODE_UUID = node_uuid (src/nova/virt/node.py:L107)

## Security Surface

- **sink** (`file-write`): f.write(node_uuid) (src/nova/virt/node.py:L39)

