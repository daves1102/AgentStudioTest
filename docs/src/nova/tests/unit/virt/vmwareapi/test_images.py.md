# src/nova/tests/unit/virt/vmwareapi/test_images.py

## Overview

This file implements the `test_images` module, defining 1 class, 3 functions, 21 methods, 12 imports, 4 side effects.

Lines: total 370, code 302, comment 16, blank 52

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `VMwareImagesTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/test_images.py:L34–L370` |
| `VMwareImagesTestCase.test_fetch_image` | method | (self) | public | not declared | 1/42 | `src/nova/tests/unit/virt/vmwareapi/test_images.py:L37–L88` |
| `VMwareImagesTestCase.test_fetch_image.fake_read_handle` | function | (read_iter) | public | `read_file_handle` (src/nova/tests/unit/virt/vmwareapi/test_images.py:L60) | — | `src/nova/tests/unit/virt/vmwareapi/test_images.py:L59–L60` |
| `VMwareImagesTestCase.test_fetch_image.fake_write_handle` | function | (host, port, dc_name, ds_name, cookies, file_path, file_size) | public | `write_file_handle` (src/nova/tests/unit/virt/vmwareapi/test_images.py:L64) | — | `src/nova/tests/unit/virt/vmwareapi/test_images.py:L62–L64` |
| `VMwareImagesTestCase._setup_mock_get_remote_image_service` | method | (self, mock_get_remote_image_service, metadata) | private | not declared | 1/6 | `src/nova/tests/unit/virt/vmwareapi/test_images.py:L90–L95` |
| `VMwareImagesTestCase.test_get_vmdk_name_from_ovf` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/vmwareapi/test_images.py:L97–L102` |
| `VMwareImagesTestCase.test_fetch_image_ova` | method | (self, mock_tar_open, mock_write_class, mock_read_class) | public | not declared | 1/54 | `src/nova/tests/unit/virt/vmwareapi/test_images.py:L107–L174` |
| `VMwareImagesTestCase.test_fetch_image_ova.fake_extract` | function | (name) | public | `m` (src/nova/tests/unit/virt/vmwareapi/test_images.py:L153); `mock_read_handle` (src/nova/tests/unit/virt/vmwareapi/test_images.py:L155) | — | `src/nova/tests/unit/virt/vmwareapi/test_images.py:L149–L155` |
| `VMwareImagesTestCase.test_fetch_image_stream_optimized` | method | (self, mock_write_class, mock_read_class) | public | not declared | 1/39 | `src/nova/tests/unit/virt/vmwareapi/test_images.py:L178–L222` |
| `VMwareImagesTestCase.test_from_image_with_image_ref` | method | (self) | public | not declared | 1/24 | `src/nova/tests/unit/virt/vmwareapi/test_images.py:L224–L250` |
| `VMwareImagesTestCase._image_build` | method | (self, image_lc_setting, global_lc_setting, disk_format=constants.DEFAULT_DISK_FORMAT, os_type=constants.DEFAULT_OS_TYPE, adapter_type=constants.DEFAULT_ADAPTER_TYPE, disk_type=constants.DEFAULT_DISK_TYPE, vif_model=constants.DEFAULT_VIF_MODEL, vsphere_location=None) | private | `images.VMwareImage.from_image(context, uuids.image, mdata)` (src/nova/tests/unit/virt/vmwareapi/test_images.py:L279) | 2/25 | `src/nova/tests/unit/virt/vmwareapi/test_images.py:L252–L279` |
| `VMwareImagesTestCase.test_use_linked_clone_override_nf` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/vmwareapi/test_images.py:L281–L284` |
| `VMwareImagesTestCase.test_use_linked_clone_override_nt` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/vmwareapi/test_images.py:L286–L289` |
| `VMwareImagesTestCase.test_use_linked_clone_override_ny` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/vmwareapi/test_images.py:L291–L294` |
| `VMwareImagesTestCase.test_use_linked_clone_override_ft` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/vmwareapi/test_images.py:L296–L299` |
| `VMwareImagesTestCase.test_use_linked_clone_override_string_nt` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/vmwareapi/test_images.py:L301–L304` |
| `VMwareImagesTestCase.test_use_linked_clone_override_string_yf` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/vmwareapi/test_images.py:L306–L309` |
| `VMwareImagesTestCase.test_use_disk_format_iso` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/vmwareapi/test_images.py:L311–L314` |
| `VMwareImagesTestCase.test_use_bad_disk_format` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/vmwareapi/test_images.py:L316–L321` |
| `VMwareImagesTestCase.test_image_no_defaults` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/virt/vmwareapi/test_images.py:L323–L335` |
| `VMwareImagesTestCase.test_image_defaults` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/vmwareapi/test_images.py:L337–L346` |
| `VMwareImagesTestCase.test_use_vsphere_location` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/virt/vmwareapi/test_images.py:L348–L350` |
| `VMwareImagesTestCase.test_get_vsphere_location` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/virt/vmwareapi/test_images.py:L352–L358` |
| `VMwareImagesTestCase.test_get_no_vsphere_location` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/virt/vmwareapi/test_images.py:L360–L365` |
| `VMwareImagesTestCase.test_get_vsphere_location_no_image` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/virt/vmwareapi/test_images.py:L367–L370` |

## Dependencies

- `import os` (src/nova/tests/unit/virt/vmwareapi/test_images.py:L18)
- `import tarfile` (src/nova/tests/unit/virt/vmwareapi/test_images.py:L19)
- `unittest`: imports `mock` (src/nova/tests/unit/virt/vmwareapi/test_images.py:L20)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/virt/vmwareapi/test_images.py:L22)
- `oslo_utils`: imports `units` (src/nova/tests/unit/virt/vmwareapi/test_images.py:L23)
- `oslo_vmware`: imports `rw_handles` (src/nova/tests/unit/virt/vmwareapi/test_images.py:L24)
- `nova`: imports `exception` (src/nova/tests/unit/virt/vmwareapi/test_images.py:L26)
- `nova`: imports `objects` (src/nova/tests/unit/virt/vmwareapi/test_images.py:L27)
- `nova`: imports `test` (src/nova/tests/unit/virt/vmwareapi/test_images.py:L28)
- `nova.virt.vmwareapi`: imports `constants` (src/nova/tests/unit/virt/vmwareapi/test_images.py:L29)
- `nova.virt.vmwareapi`: imports `images` (src/nova/tests/unit/virt/vmwareapi/test_images.py:L30)
- `nova.virt.vmwareapi`: imports `vm_util` (src/nova/tests/unit/virt/vmwareapi/test_images.py:L31)

## Side Effects

- **file-io**: ovf_path = os.path.join(os.path.dirname(__file__), 'ovf.xml') (src/nova/tests/unit/virt/vmwareapi/test_images.py:L98)
- **file-io**: with open(ovf_path) as f: (src/nova/tests/unit/virt/vmwareapi/test_images.py:L99)
- **file-io**: ovf_path = os.path.join(os.path.dirname(__file__), 'ovf.xml') (src/nova/tests/unit/virt/vmwareapi/test_images.py:L111)
- **file-io**: with open(ovf_path) as f: (src/nova/tests/unit/virt/vmwareapi/test_images.py:L112)

