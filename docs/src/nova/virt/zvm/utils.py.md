# src/nova/virt/zvm/utils.py

## Overview

This file implements the `utils` module, defining 1 class, 2 constants, 4 functions, 2 methods, 9 imports, 6 side effects.

Lines: total 125, code 80, comment 15, blank 30

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/virt/zvm/utils.py:L29–L29` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/virt/zvm/utils.py:L30–L30` |
| `ConnectorClient` | class | — | exported | not declared | — | `src/nova/virt/zvm/utils.py:L33–L68` |
| `ConnectorClient.__init__` | method | (self, zcc_url, ca_file=None) | public | not declared | 5/17 | `src/nova/virt/zvm/utils.py:L36–L55` |
| `ConnectorClient.call` | method | (self, func_name, *args, **kwargs) | public | `results['output']` (src/nova/virt/zvm/utils.py:L68) | 2/10 | `src/nova/virt/zvm/utils.py:L57–L68` |
| `_get_instance_path` | function | (instance_uuid) | unexported | `instance_folder` (src/nova/virt/zvm/utils.py:L75) | 1/5 | `src/nova/virt/zvm/utils.py:L71–L75` |
| `_create_config_drive` | function | (context, instance_path, instance, injected_files, network_info, admin_password) | unexported | `configdrive_iso` (src/nova/virt/zvm/utils.py:L101) | 3/19 | `src/nova/virt/zvm/utils.py:L78–L101` |
| `generate_configdrive` | function | (context, instance, injected_files, network_info, admin_password) | exported | `transportfiles` (src/nova/virt/zvm/utils.py:L120) | 2/13 | `src/nova/virt/zvm/utils.py:L105–L120` |
| `clean_up_file` | function | (filepath) | exported | not declared | 2/3 | `src/nova/virt/zvm/utils.py:L123–L125` |

## Dependencies

- `import os` (src/nova/virt/zvm/utils.py:L15)
- `urllib`: imports `parse as urlparse` (src/nova/virt/zvm/utils.py:L16)
- `oslo_log`: imports `log as logging` (src/nova/virt/zvm/utils.py:L18)
- `zvmconnector`: imports `connector` (src/nova/virt/zvm/utils.py:L19)
- `oslo_utils`: imports `fileutils` (src/nova/virt/zvm/utils.py:L21)
- `nova.api.metadata`: imports `base as instance_metadata` (src/nova/virt/zvm/utils.py:L23)
- `nova`: imports `conf` (src/nova/virt/zvm/utils.py:L24)
- `nova`: imports `exception` (src/nova/virt/zvm/utils.py:L25)
- `nova.virt`: imports `configdrive` (src/nova/virt/zvm/utils.py:L26)

## Side Effects

- **file-io**: instance_folder = os.path.join(os.path.normpath(CONF.instances_path), (src/nova/virt/zvm/utils.py:L72)
- **file-io**: fileutils.ensure_tree(instance_folder) (src/nova/virt/zvm/utils.py:L74)
- **file-io**: configdrive_iso = os.path.join(instance_path, 'cfgdrive.iso') (src/nova/virt/zvm/utils.py:L95)
- **file-io**: if os.path.exists(filepath): (src/nova/virt/zvm/utils.py:L124)
- **global-mutation**: CONF = conf.CONF (src/nova/virt/zvm/utils.py:L29)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/virt/zvm/utils.py:L30)

