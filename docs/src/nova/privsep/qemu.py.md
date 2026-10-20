# src/nova/privsep/qemu.py

## Overview

This file implements the `qemu` module, defining 1 class, 3 constants, 2 fields, 4 functions, 11 imports, 12 side effects, 6 security surface entries.

Lines: total 270, code 152, comment 79, blank 39

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/privsep/qemu.py:L33–L33` |
| `CONF` | constant | — | exported | not declared | — | `src/nova/privsep/qemu.py:L35–L35` |
| `QEMU_IMG_LIMITS` | constant | — | exported | not declared | — | `src/nova/privsep/qemu.py:L37–L39` |
| `EncryptionOptions` | class | — | exported | not declared | — | `src/nova/privsep/qemu.py:L42–L44` |
| `EncryptionOptions.secret` | field | — | public | not declared | — | `src/nova/privsep/qemu.py:L43–L43` |
| `EncryptionOptions.format` | field | — | public | not declared | — | `src/nova/privsep/qemu.py:L44–L44` |
| `convert_image` | function | (source, dest, in_format, out_format, instances_path, compress, src_encryption=None, dest_encryption=None) | exported | not declared | 1/6 | `src/nova/privsep/qemu.py:L48–L53` |
| `unprivileged_convert_image` | function | (source, dest, in_format, out_format, instances_path, compress, src_encryption=None, dest_encryption=None) | exported | not declared | 14/70 | `src/nova/privsep/qemu.py:L57–L222` |
| `privileged_qemu_img_info` | function | (path, format=None) | exported | `unprivileged_qemu_img_info(path, format=format)` (src/nova/privsep/qemu.py:L232) | 1/2 | `src/nova/privsep/qemu.py:L226–L232` |
| `unprivileged_qemu_img_info` | function | (path, format=None) | exported | `out` (src/nova/privsep/qemu.py:L270) | 9/27 | `src/nova/privsep/qemu.py:L235–L270` |

## Dependencies

- `import contextlib` (src/nova/privsep/qemu.py:L19)
- `import os` (src/nova/privsep/qemu.py:L20)
- `import tempfile` (src/nova/privsep/qemu.py:L21)
- `import typing as ty` (src/nova/privsep/qemu.py:L22)
- `oslo_concurrency`: imports `processutils` (src/nova/privsep/qemu.py:L24)
- `oslo_log`: imports `log as logging` (src/nova/privsep/qemu.py:L25)
- `oslo_utils`: imports `units` (src/nova/privsep/qemu.py:L26)
- `import nova.conf` (src/nova/privsep/qemu.py:L28)
- `nova`: imports `exception` (src/nova/privsep/qemu.py:L29)
- `nova.i18n`: imports `_` (src/nova/privsep/qemu.py:L30)
- `import nova.privsep.utils` (src/nova/privsep/qemu.py:L31)

## Side Effects

- **process-spawn**: import nova.privsep.utils (src/nova/privsep/qemu.py:L31)
- **process-spawn**: @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/qemu.py:L47)
- **process-spawn**: if nova.privsep.utils.supports_direct_io(instances_path): (src/nova/privsep/qemu.py:L111)
- **file-io**: tempfile.NamedTemporaryFile(mode='tr+', encoding='utf-8')) (src/nova/privsep/qemu.py:L136)
- **file-io**: tempfile.NamedTemporaryFile(mode='tr+', encoding='utf-8')) (src/nova/privsep/qemu.py:L163)
- **process-spawn**: @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/qemu.py:L225)
- **file-io**: if (os.path.isdir(path) and (src/nova/privsep/qemu.py:L240)
- **file-io**: os.path.exists(os.path.join(path, "DiskDescriptor.xml"))): (src/nova/privsep/qemu.py:L241)
- **file-io**: path = os.path.join(path, "root.hds") (src/nova/privsep/qemu.py:L242)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/privsep/qemu.py:L33)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/privsep/qemu.py:L35)
- **global-mutation**: QEMU_IMG_LIMITS = processutils.ProcessLimits( (src/nova/privsep/qemu.py:L37)

## Security Surface

- **privilege** (`privsep-entrypoint`): import nova.privsep.utils (src/nova/privsep/qemu.py:L31)
- **privilege** (`privsep-entrypoint`): @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/qemu.py:L47)
- **privilege** (`privsep-entrypoint`): if nova.privsep.utils.supports_direct_io(instances_path): (src/nova/privsep/qemu.py:L111)
- **sink** (`file-write`): src_secret_file.write(src_encryption['secret']) (src/nova/privsep/qemu.py:L139)
- **sink** (`file-write`): dest_secret_file.write(dest_encryption['secret']) (src/nova/privsep/qemu.py:L166)
- **privilege** (`privsep-entrypoint`): @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/qemu.py:L225)

