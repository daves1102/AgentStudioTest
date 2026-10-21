# src/nova/tests/fixtures/libvirt_imagebackend.py

## Overview

This file implements the `libvirt_imagebackend` module, defining 1 class, 1 constant, 3 functions, 8 methods, 1 property, 10 imports, 3 side effects.

Lines: total 267, code 136, comment 88, blank 43

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt_imagebackend.py:L30–L30` |
| `LibvirtImageBackendFixture` | class | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt_imagebackend.py:L33–L267` |
| `LibvirtImageBackendFixture.__init__` | method | (self, got_files=None, imported_files=None, exists=None) | public | not declared | 1/5 | `src/nova/tests/fixtures/libvirt_imagebackend.py:L35–L53` |
| `LibvirtImageBackendFixture.setUp` | method | (self) | public | not declared | 1/23 | `src/nova/tests/fixtures/libvirt_imagebackend.py:L55–L84` |
| `LibvirtImageBackendFixture.created_disks` | method | (self) | public | `{ name: disk for name, disk in self.disks.items() if any([disk.cache.called, disk.import_file.called]) }` (src/nova/tests/fixtures/libvirt_imagebackend.py:L92) | 3/5 | `src/nova/tests/fixtures/libvirt_imagebackend.py:L87–L95` |
| `LibvirtImageBackendFixture._mock_disk` | method | (self) | private | `disk` (src/nova/tests/fixtures/libvirt_imagebackend.py:L130) | 1/9 | `src/nova/tests/fixtures/libvirt_imagebackend.py:L97–L130` |
| `LibvirtImageBackendFixture._mock_backend` | method | (self, backend_self, image_type=None) | private | `image_init` (src/nova/tests/fixtures/libvirt_imagebackend.py:L220) | 1/12 | `src/nova/tests/fixtures/libvirt_imagebackend.py:L132–L220` |
| `LibvirtImageBackendFixture._mock_backend.image_init` | function | (instance=None, disk_name=None, path=None, disk_info_mapping=None) | public | `disk` (src/nova/tests/fixtures/libvirt_imagebackend.py:L196) | — | `src/nova/tests/fixtures/libvirt_imagebackend.py:L161–L196` |
| `LibvirtImageBackendFixture._mock_backend.is_shared_block_storage` | function | — | public | `False` (src/nova/tests/fixtures/libvirt_imagebackend.py:L208) | — | `src/nova/tests/fixtures/libvirt_imagebackend.py:L207–L208` |
| `LibvirtImageBackendFixture._mock_backend.is_file_in_instance_path` | function | — | public | `False` (src/nova/tests/fixtures/libvirt_imagebackend.py:L211) | — | `src/nova/tests/fixtures/libvirt_imagebackend.py:L210–L211` |
| `LibvirtImageBackendFixture._fake_cache` | method | (self, fetch_func, filename, size=None, safe=False, *args, **kwargs) | private | not declared | 2/6 | `src/nova/tests/fixtures/libvirt_imagebackend.py:L222–L231` |
| `LibvirtImageBackendFixture._fake_import_file` | method | (self, instance, local_filename, remote_filename) | private | not declared | 2/3 | `src/nova/tests/fixtures/libvirt_imagebackend.py:L233–L236` |
| `LibvirtImageBackendFixture._fake_libvirt_info` | method | (self, mock_disk, cache_mode, extra_specs, disk_unit=None, boot_order=None) | private | `info` (src/nova/tests/fixtures/libvirt_imagebackend.py:L267) | 3/25 | `src/nova/tests/fixtures/libvirt_imagebackend.py:L238–L267` |
| `LibvirtImageBackendFixture.created_disks` | property | — | public | not declared | — | `src/nova/tests/fixtures/libvirt_imagebackend.py:L86–L95` |

## Dependencies

- `import collections` (src/nova/tests/fixtures/libvirt_imagebackend.py:L16)
- `import functools` (src/nova/tests/fixtures/libvirt_imagebackend.py:L17)
- `import os` (src/nova/tests/fixtures/libvirt_imagebackend.py:L18)
- `unittest`: imports `mock` (src/nova/tests/fixtures/libvirt_imagebackend.py:L19)
- `import fixtures` (src/nova/tests/fixtures/libvirt_imagebackend.py:L21)
- `import nova.conf` (src/nova/tests/fixtures/libvirt_imagebackend.py:L23)
- `nova.virt.libvirt`: imports `config` (src/nova/tests/fixtures/libvirt_imagebackend.py:L24)
- `nova.virt.libvirt`: imports `driver` (src/nova/tests/fixtures/libvirt_imagebackend.py:L25)
- `nova.virt.libvirt`: imports `imagebackend` (src/nova/tests/fixtures/libvirt_imagebackend.py:L26)
- `nova.virt.libvirt`: imports `utils as libvirt_utils` (src/nova/tests/fixtures/libvirt_imagebackend.py:L27)

## Side Effects

- **file-io**: path = os.path.join( (src/nova/tests/fixtures/libvirt_imagebackend.py:L167)
- **file-io**: disk_name = os.path.basename(path) (src/nova/tests/fixtures/libvirt_imagebackend.py:L170)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/tests/fixtures/libvirt_imagebackend.py:L30)

