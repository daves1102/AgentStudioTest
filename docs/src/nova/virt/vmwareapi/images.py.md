# src/nova/virt/vmwareapi/images.py

## Overview

This file implements the `images` module, defining 1 class, 1 classmethod, 6 constants, 10 functions, 6 methods, 4 propertys, 16 imports, 8 side effects, 4 security surface entries.

Lines: total 473, code 366, comment 34, blank 73

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/virt/vmwareapi/images.py:L45–L45` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/virt/vmwareapi/images.py:L47–L47` |
| `IMAGE_API` | constant | — | exported | not declared | — | `src/nova/virt/vmwareapi/images.py:L48–L48` |
| `QUEUE_BUFFER_SIZE` | constant | — | exported | not declared | — | `src/nova/virt/vmwareapi/images.py:L50–L50` |
| `NFC_LEASE_UPDATE_PERIOD` | constant | — | exported | not declared | — | `src/nova/virt/vmwareapi/images.py:L51–L51` |
| `CHUNK_SIZE` | constant | — | exported | not declared | — | `src/nova/virt/vmwareapi/images.py:L52–L52` |
| `VMwareImage` | class | — | exported | not declared | — | `src/nova/virt/vmwareapi/images.py:L55–L180` |
| `VMwareImage.__init__` | method | (self, image_id, file_size=0, os_type=constants.DEFAULT_OS_TYPE, adapter_type=constants.DEFAULT_ADAPTER_TYPE, disk_type=constants.DEFAULT_DISK_TYPE, container_format=constants.CONTAINER_FORMAT_BARE, file_type=constants.DEFAULT_DISK_FORMAT, linked_clone=None, vsphere_location=None, vif_model=constants.DEFAULT_VIF_MODEL) | public | not declared | 4/26 | `src/nova/virt/vmwareapi/images.py:L56–L98` |
| `VMwareImage.file_size_in_kb` | method | (self) | public | `self.file_size / units.Ki` (src/nova/virt/vmwareapi/images.py:L102) | 1/2 | `src/nova/virt/vmwareapi/images.py:L101–L102` |
| `VMwareImage.is_sparse` | method | (self) | public | `self.disk_type == constants.DISK_TYPE_SPARSE` (src/nova/virt/vmwareapi/images.py:L106) | 1/2 | `src/nova/virt/vmwareapi/images.py:L105–L106` |
| `VMwareImage.is_iso` | method | (self) | public | `self.file_type == constants.DISK_FORMAT_ISO` (src/nova/virt/vmwareapi/images.py:L110) | 1/2 | `src/nova/virt/vmwareapi/images.py:L109–L110` |
| `VMwareImage.is_ova` | method | (self) | public | `self.container_format == constants.CONTAINER_FORMAT_OVA` (src/nova/virt/vmwareapi/images.py:L114) | 1/2 | `src/nova/virt/vmwareapi/images.py:L113–L114` |
| `VMwareImage.from_image` | method | (cls, context, image_id, image_meta) | public | `cls(**props)` (src/nova/virt/vmwareapi/images.py:L180) | 9/45 | `src/nova/virt/vmwareapi/images.py:L117–L180` |
| `get_vsphere_location` | function | (context, image_id) | exported | `loc_url` (src/nova/virt/vmwareapi/images.py:L193); `None` (src/nova/virt/vmwareapi/images.py:L194) | 6/10 | `src/nova/virt/vmwareapi/images.py:L183–L194` |
| `image_transfer` | function | (read_handle, write_handle) | exported | not declared | 4/14 | `src/nova/virt/vmwareapi/images.py:L197–L212` |
| `upload_iso_to_datastore` | function | (iso_path, instance, **kwargs) | exported | not declared | 2/22 | `src/nova/virt/vmwareapi/images.py:L215–L238` |
| `fetch_image` | function | (context, instance, host, port, dc_name, ds_name, file_path, cookies=None) | exported | not declared | 3/22 | `src/nova/virt/vmwareapi/images.py:L241–L264` |
| `_build_shadow_vm_config_spec` | function | (session, name, size_kb, disk_type, ds_name) | unexported | `create_spec` (src/nova/virt/vmwareapi/images.py:L319) | 3/36 | `src/nova/virt/vmwareapi/images.py:L267–L319` |
| `_build_import_spec_for_import_vapp` | function | (session, vm_name, datastore_name) | unexported | `vm_import_spec` (src/nova/virt/vmwareapi/images.py:L329) | 1/7 | `src/nova/virt/vmwareapi/images.py:L322–L329` |
| `fetch_image_stream_optimized` | function | (context, instance, session, vm_name, ds_name, vm_folder_ref, res_pool_ref) | exported | `vmdk.capacity_in_bytes` (src/nova/virt/vmwareapi/images.py:L366) | 1/28 | `src/nova/virt/vmwareapi/images.py:L332–L366` |
| `get_vmdk_name_from_ovf` | function | (xmlstr) | exported | `vmdk_name` (src/nova/virt/vmwareapi/images.py:L381) | 1/9 | `src/nova/virt/vmwareapi/images.py:L369–L381` |
| `fetch_image_ova` | function | (context, instance, session, vm_name, ds_name, vm_folder_ref, res_pool_ref) | exported | `vmdk.capacity_in_bytes` (src/nova/virt/vmwareapi/images.py:L432) | 6/44 | `src/nova/virt/vmwareapi/images.py:L384–L435` |
| `upload_image_stream_optimized` | function | (context, image_id, instance, session, vm, vmdk_size) | exported | not declared | 2/27 | `src/nova/virt/vmwareapi/images.py:L438–L473` |
| `VMwareImage.file_size_in_kb` | property | — | public | not declared | — | `src/nova/virt/vmwareapi/images.py:L100–L102` |
| `VMwareImage.is_sparse` | property | — | public | not declared | — | `src/nova/virt/vmwareapi/images.py:L104–L106` |
| `VMwareImage.is_iso` | property | — | public | not declared | — | `src/nova/virt/vmwareapi/images.py:L108–L110` |
| `VMwareImage.is_ova` | property | — | public | not declared | — | `src/nova/virt/vmwareapi/images.py:L112–L114` |
| `VMwareImage.from_image` | classmethod | — | public | not declared | — | `src/nova/virt/vmwareapi/images.py:L116–L180` |

## Dependencies

- `import os` (src/nova/virt/vmwareapi/images.py:L20)
- `import tarfile` (src/nova/virt/vmwareapi/images.py:L21)
- `lxml`: imports `etree` (src/nova/virt/vmwareapi/images.py:L23)
- `oslo_config`: imports `cfg` (src/nova/virt/vmwareapi/images.py:L24)
- `oslo_log`: imports `log as logging` (src/nova/virt/vmwareapi/images.py:L25)
- `oslo_service`: imports `loopingcall` (src/nova/virt/vmwareapi/images.py:L26)
- `oslo_utils`: imports `encodeutils` (src/nova/virt/vmwareapi/images.py:L27)
- `oslo_utils`: imports `strutils` (src/nova/virt/vmwareapi/images.py:L28)
- `oslo_utils`: imports `units` (src/nova/virt/vmwareapi/images.py:L29)
- `oslo_vmware`: imports `rw_handles` (src/nova/virt/vmwareapi/images.py:L30)
- `nova`: imports `exception` (src/nova/virt/vmwareapi/images.py:L33)
- `nova.i18n`: imports `_` (src/nova/virt/vmwareapi/images.py:L34)
- `nova.image`: imports `glance` (src/nova/virt/vmwareapi/images.py:L35)
- `nova.objects`: imports `fields` (src/nova/virt/vmwareapi/images.py:L36)
- `nova.virt.vmwareapi`: imports `constants` (src/nova/virt/vmwareapi/images.py:L37)
- `nova.virt.vmwareapi`: imports `vm_util` (src/nova/virt/vmwareapi/images.py:L38)

## Side Effects

- **file-io**: with open(iso_path, 'r') as iso_file: (src/nova/virt/vmwareapi/images.py:L218)
- **file-io**: with tarfile.open(mode="r|", fileobj=read_handle) as tar: (src/nova/virt/vmwareapi/images.py:L404)
- **global-mutation**: CONF = cfg.CONF (src/nova/virt/vmwareapi/images.py:L45)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/virt/vmwareapi/images.py:L47)
- **global-mutation**: IMAGE_API = glance.API() (src/nova/virt/vmwareapi/images.py:L48)
- **global-mutation**: QUEUE_BUFFER_SIZE = 10 (src/nova/virt/vmwareapi/images.py:L50)
- **global-mutation**: NFC_LEASE_UPDATE_PERIOD = 60  # update NFC lease every 60sec. (src/nova/virt/vmwareapi/images.py:L51)
- **global-mutation**: CHUNK_SIZE = 64 * units.Ki  # default chunk size for image transfer (src/nova/virt/vmwareapi/images.py:L52)

## Security Surface

- **sink** (`db-write`): NFC_LEASE_UPDATE_PERIOD = 60  # update NFC lease every 60sec. (src/nova/virt/vmwareapi/images.py:L51)
- **sink** (`file-write`): write_handle.write(data) (src/nova/virt/vmwareapi/images.py:L208)
- **sink** (`file-write`): write_file_handle.write(data) (src/nova/virt/vmwareapi/images.py:L233)
- **sink** (`db-write`): IMAGE_API.update(context, image_id, image_metadata, data=read_handle) (src/nova/virt/vmwareapi/images.py:L467)

