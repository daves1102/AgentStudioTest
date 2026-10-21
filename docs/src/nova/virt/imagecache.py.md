# src/nova/virt/imagecache.py

## Overview

This file implements the `imagecache` module, defining 1 class, 1 constant, 7 methods, 5 imports, 3 side effects, 4 security surface entries.

Lines: total 132, code 95, comment 17, blank 20

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/virt/imagecache.py:L22–L22` |
| `ImageCacheManager` | class | — | exported | not declared | — | `src/nova/virt/imagecache.py:L25–L132` |
| `ImageCacheManager.__init__` | method | (self) | public | not declared | 1/7 | `src/nova/virt/imagecache.py:L31–L37` |
| `ImageCacheManager._get_base` | method | (self) | private | not declared | 1/2 | `src/nova/virt/imagecache.py:L39–L41` |
| `ImageCacheManager._list_running_instances` | method | (self, context, all_instances) | private | `{'used_images': used_images, 'instance_names': instance_names, 'used_swap_images': used_swap_images, 'used_ephemeral_images': used_ephemeral_images}` (src/nova/virt/imagecache.py:L100) | 11/46 | `src/nova/virt/imagecache.py:L43–L103` |
| `ImageCacheManager._scan_base_images` | method | (self, base_dir) | private | not declared | 1/2 | `src/nova/virt/imagecache.py:L105–L109` |
| `ImageCacheManager._age_and_verify_cached_images` | method | (self, context, all_instances, base_dir) | private | not declared | 1/2 | `src/nova/virt/imagecache.py:L111–L114` |
| `ImageCacheManager.update` | method | (self, context, all_instances) | public | not declared | 1/2 | `src/nova/virt/imagecache.py:L116–L123` |
| `ImageCacheManager.get_disk_usage` | method | (self) | public | not declared | 1/2 | `src/nova/virt/imagecache.py:L125–L132` |

## Dependencies

- `nova.compute`: imports `task_states` (src/nova/virt/imagecache.py:L16)
- `nova.compute`: imports `vm_states` (src/nova/virt/imagecache.py:L17)
- `import nova.conf` (src/nova/virt/imagecache.py:L18)
- `nova`: imports `objects` (src/nova/virt/imagecache.py:L19)
- `nova.virt`: imports `block_device as driver_block_device` (src/nova/virt/imagecache.py:L20)

## Side Effects

- **process-spawn**: os_type = nova.privsep.fs.get_fs_type_for_os_type( (src/nova/virt/imagecache.py:L91)
- **process-spawn**: file_name = nova.privsep.fs.get_file_extension_for_os_type( (src/nova/virt/imagecache.py:L93)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/virt/imagecache.py:L22)

## Security Surface

- **privilege** (`privsep-entrypoint`): os_type = nova.privsep.fs.get_fs_type_for_os_type( (src/nova/virt/imagecache.py:L91)
- **privilege** (`privsep-entrypoint`): file_name = nova.privsep.fs.get_file_extension_for_os_type( (src/nova/virt/imagecache.py:L93)
- **sink** (`db-write`): def update(self, context, all_instances): (src/nova/virt/imagecache.py:L116)
- **sink** (`db-write`): This will invoke the cache manager. This will update the cache (src/nova/virt/imagecache.py:L119)

