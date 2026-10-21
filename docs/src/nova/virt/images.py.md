# src/nova/virt/images.py

## Overview

This file implements the `images` module, defining 3 constants, 11 functions, 12 imports, 14 side effects, 5 security surface entries.

Lines: total 301, code 198, comment 54, blank 49

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/virt/images.py:L37–L37` |
| `CONF` | constant | — | exported | not declared | — | `src/nova/virt/images.py:L39–L39` |
| `IMAGE_API` | constant | — | exported | not declared | — | `src/nova/virt/images.py:L40–L40` |
| `qemu_img_info` | function | (path, format=None) | exported | `imageutils.QemuImgInfo(info, format='json')` (src/nova/virt/images.py:L49) | 3/5 | `src/nova/virt/images.py:L43–L49` |
| `privileged_qemu_img_info` | function | (path, format=None, output_format='json') | exported | `imageutils.QemuImgInfo(info, format='json')` (src/nova/virt/images.py:L58) | 3/5 | `src/nova/virt/images.py:L52–L58` |
| `convert_image` | function | (source, dest, in_format, out_format, run_as_root=False, compress=False, src_encryption=None, dest_encryption=None) | exported | not declared | 2/8 | `src/nova/virt/images.py:L61–L69` |
| `convert_image_unsafe` | function | (source, dest, out_format, run_as_root=False) | exported | not declared | 1/2 | `src/nova/virt/images.py:L72–L82` |
| `_convert_image` | function | (source, dest, in_format, out_format, run_as_root, compress=False, src_encryption=None, dest_encryption=None) | unexported | not declared | 3/18 | `src/nova/virt/images.py:L85–L103` |
| `fetch` | function | (context, image_href, path, trusted_certs=None) | exported | not declared | 1/5 | `src/nova/virt/images.py:L106–L110` |
| `get_info` | function | (context, image_href) | exported | `IMAGE_API.get(context, image_href)` (src/nova/virt/images.py:L114) | 1/2 | `src/nova/virt/images.py:L113–L114` |
| `check_vmdk_image` | function | (image_id, data) | exported | not declared | 4/18 | `src/nova/virt/images.py:L117–L142` |
| `get_image_format` | function | (path) | exported | `wrapper.format` (src/nova/virt/images.py:L157); `[x for x in wrapper.formats if str(x) == 'iso'][0]` (src/nova/virt/images.py:L164) | 9/18 | `src/nova/virt/images.py:L145–L166` |
| `do_image_deep_inspection` | function | (img, image_href, path) | exported | `disk_format` (src/nova/virt/images.py:L223) | 11/36 | `src/nova/virt/images.py:L169–L223` |
| `fetch_to_raw` | function | (context, image_href, path, trusted_certs=None) | exported | not declared | 15/57 | `src/nova/virt/images.py:L226–L301` |

## Dependencies

- `import os` (src/nova/virt/images.py:L22)
- `oslo_concurrency`: imports `processutils` (src/nova/virt/images.py:L24)
- `oslo_log`: imports `log as logging` (src/nova/virt/images.py:L25)
- `oslo_utils`: imports `fileutils` (src/nova/virt/images.py:L26)
- `oslo_utils`: imports `imageutils` (src/nova/virt/images.py:L27)
- `oslo_utils.imageutils`: imports `format_inspector` (src/nova/virt/images.py:L28)
- `nova.compute`: imports `utils as compute_utils` (src/nova/virt/images.py:L30)
- `import nova.conf` (src/nova/virt/images.py:L31)
- `nova`: imports `exception` (src/nova/virt/images.py:L32)
- `nova.i18n`: imports `_` (src/nova/virt/images.py:L33)
- `nova.image`: imports `glance` (src/nova/virt/images.py:L34)
- `import nova.privsep.qemu` (src/nova/virt/images.py:L35)

## Side Effects

- **process-spawn**: import nova.privsep.qemu (src/nova/virt/images.py:L35)
- **file-io**: if not os.path.exists(path) and not path.startswith('rbd:'): (src/nova/virt/images.py:L45)
- **process-spawn**: info = nova.privsep.qemu.unprivileged_qemu_img_info(path, format=format) (src/nova/virt/images.py:L48)
- **file-io**: if not os.path.exists(path) and not path.startswith('rbd:'): (src/nova/virt/images.py:L54)
- **process-spawn**: info = nova.privsep.qemu.privileged_qemu_img_info(path, format=format) (src/nova/virt/images.py:L57)
- **process-spawn**: nova.privsep.qemu.unprivileged_convert_image( (src/nova/virt/images.py:L90)
- **process-spawn**: nova.privsep.qemu.convert_image( (src/nova/virt/images.py:L95)
- **file-io**: with fileutils.remove_path_on_error(path): (src/nova/virt/images.py:L107)
- **file-io**: with open(path, 'rb') as f: (src/nova/virt/images.py:L146)
- **file-io**: with fileutils.remove_path_on_error(path_tmp): (src/nova/virt/images.py:L230)
- **file-io**: with fileutils.remove_path_on_error(staged): (src/nova/virt/images.py:L282)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/virt/images.py:L37)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/virt/images.py:L39)
- **global-mutation**: IMAGE_API = glance.API() (src/nova/virt/images.py:L40)

## Security Surface

- **privilege** (`privsep-entrypoint`): import nova.privsep.qemu (src/nova/virt/images.py:L35)
- **privilege** (`privsep-entrypoint`): info = nova.privsep.qemu.unprivileged_qemu_img_info(path, format=format) (src/nova/virt/images.py:L48)
- **privilege** (`privsep-entrypoint`): info = nova.privsep.qemu.privileged_qemu_img_info(path, format=format) (src/nova/virt/images.py:L57)
- **privilege** (`privsep-entrypoint`): nova.privsep.qemu.unprivileged_convert_image( (src/nova/virt/images.py:L90)
- **privilege** (`privsep-entrypoint`): nova.privsep.qemu.convert_image( (src/nova/virt/images.py:L95)

