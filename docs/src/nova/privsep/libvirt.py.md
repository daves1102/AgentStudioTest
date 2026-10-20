# src/nova/privsep/libvirt.py

## Overview

This file implements the `libvirt` module, defining 1 constant, 18 functions, 8 imports, 23 side effects, 16 security surface entries.

Lines: total 236, code 135, comment 49, blank 52

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/privsep/libvirt.py:L31–L31` |
| `dmcrypt_create_volume` | function | (target, device, cipher, key_size, key) | exported | not declared | 1/10 | `src/nova/privsep/libvirt.py:L35–L52` |
| `dmcrypt_delete_volume` | function | (target) | exported | not declared | 1/2 | `src/nova/privsep/libvirt.py:L56–L61` |
| `ploop_init` | function | (size, disk_format, fs_type, disk_path) | exported | not declared | 1/5 | `src/nova/privsep/libvirt.py:L65–L84` |
| `ploop_resize` | function | (disk_path, size) | exported | not declared | 1/6 | `src/nova/privsep/libvirt.py:L88–L98` |
| `ploop_restore_descriptor` | function | (image_dir, base_delta, fmt) | exported | not declared | 1/4 | `src/nova/privsep/libvirt.py:L102–L111` |
| `plug_infiniband_vif` | function | (vnic_mac, device_id, fabric, net_model, pci_slot) | exported | not declared | 1/3 | `src/nova/privsep/libvirt.py:L115–L117` |
| `unplug_infiniband_vif` | function | (fabric, vnic_mac) | exported | not declared | 1/2 | `src/nova/privsep/libvirt.py:L121–L122` |
| `plug_midonet_vif` | function | (port_id, dev) | exported | not declared | 1/2 | `src/nova/privsep/libvirt.py:L126–L127` |
| `unplug_midonet_vif` | function | (port_id) | exported | not declared | 1/2 | `src/nova/privsep/libvirt.py:L131–L132` |
| `plug_plumgrid_vif` | function | (dev, iface_id, vif_address, net_id, tenant_id) | exported | not declared | 1/5 | `src/nova/privsep/libvirt.py:L136–L140` |
| `unplug_plumgrid_vif` | function | (dev) | exported | not declared | 1/3 | `src/nova/privsep/libvirt.py:L144–L146` |
| `readpty` | function | (path) | exported | `f.read()` (src/nova/privsep/libvirt.py:L166); `''` (src/nova/privsep/libvirt.py:L190) | 2/13 | `src/nova/privsep/libvirt.py:L150–L190` |
| `systemd_run_qb_mount` | function | (qb_vol, mnt_base, cfg_file=None) | exported | `processutils.execute(*sysdr_cmd)` (src/nova/privsep/libvirt.py:L201) | 2/6 | `src/nova/privsep/libvirt.py:L194–L201` |
| `unprivileged_qb_mount` | function | (qb_vol, mnt_base, cfg_file=None) | exported | `processutils.execute(*mnt_cmd)` (src/nova/privsep/libvirt.py:L210) | 2/5 | `src/nova/privsep/libvirt.py:L205–L210` |
| `umount` | function | (mnt_base) | exported | not declared | 1/2 | `src/nova/privsep/libvirt.py:L214–L216` |
| `unprivileged_umount` | function | (mnt_base) | exported | `processutils.execute(*umnt_cmd)` (src/nova/privsep/libvirt.py:L223) | 1/3 | `src/nova/privsep/libvirt.py:L220–L223` |
| `get_pmem_namespaces` | function | — | exported | `nss_info` (src/nova/privsep/libvirt.py:L230) | 1/4 | `src/nova/privsep/libvirt.py:L227–L230` |
| `cleanup_vpmem` | function | (devpath) | exported | not declared | 1/3 | `src/nova/privsep/libvirt.py:L234–L236` |

## Dependencies

- `import binascii` (src/nova/privsep/libvirt.py:L20)
- `import os` (src/nova/privsep/libvirt.py:L21)
- `import stat` (src/nova/privsep/libvirt.py:L22)
- `oslo_concurrency`: imports `processutils` (src/nova/privsep/libvirt.py:L24)
- `oslo_log`: imports `log as logging` (src/nova/privsep/libvirt.py:L25)
- `oslo_utils`: imports `units` (src/nova/privsep/libvirt.py:L26)
- `import nova.privsep` (src/nova/privsep/libvirt.py:L28)
- `import fcntl` (src/nova/privsep/libvirt.py:L158)

## Side Effects

- **process-spawn**: @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/libvirt.py:L34)
- **process-spawn**: @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/libvirt.py:L55)
- **process-spawn**: @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/libvirt.py:L64)
- **process-spawn**: @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/libvirt.py:L87)
- **process-spawn**: @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/libvirt.py:L101)
- **process-spawn**: @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/libvirt.py:L114)
- **process-spawn**: @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/libvirt.py:L120)
- **process-spawn**: @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/libvirt.py:L125)
- **process-spawn**: @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/libvirt.py:L130)
- **process-spawn**: @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/libvirt.py:L135)
- **process-spawn**: @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/libvirt.py:L143)
- **process-spawn**: @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/libvirt.py:L149)
- **file-io**: with open(path, 'r') as f: (src/nova/privsep/libvirt.py:L161)
- **process-spawn**: @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/libvirt.py:L193)
- **syscall**: def systemd_run_qb_mount(qb_vol, mnt_base, cfg_file=None): (src/nova/privsep/libvirt.py:L194)
- **syscall**: def unprivileged_qb_mount(qb_vol, mnt_base, cfg_file=None): (src/nova/privsep/libvirt.py:L205)
- **process-spawn**: @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/libvirt.py:L213)
- **syscall**: def umount(mnt_base): (src/nova/privsep/libvirt.py:L214)
- **syscall**: unprivileged_umount(mnt_base) (src/nova/privsep/libvirt.py:L216)
- **syscall**: def unprivileged_umount(mnt_base): (src/nova/privsep/libvirt.py:L220)
- **process-spawn**: @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/libvirt.py:L226)
- **process-spawn**: @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/libvirt.py:L233)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/privsep/libvirt.py:L31)

## Security Surface

- **privilege** (`privsep-entrypoint`): @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/libvirt.py:L34)
- **privilege** (`privsep-entrypoint`): @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/libvirt.py:L55)
- **privilege** (`privsep-entrypoint`): @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/libvirt.py:L64)
- **privilege** (`privsep-entrypoint`): @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/libvirt.py:L87)
- **privilege** (`privsep-entrypoint`): @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/libvirt.py:L101)
- **privilege** (`privsep-entrypoint`): @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/libvirt.py:L114)
- **privilege** (`privsep-entrypoint`): @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/libvirt.py:L120)
- **privilege** (`privsep-entrypoint`): @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/libvirt.py:L125)
- **privilege** (`privsep-entrypoint`): @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/libvirt.py:L130)
- **privilege** (`privsep-entrypoint`): @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/libvirt.py:L135)
- **privilege** (`privsep-entrypoint`): @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/libvirt.py:L143)
- **privilege** (`privsep-entrypoint`): @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/libvirt.py:L149)
- **privilege** (`privsep-entrypoint`): @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/libvirt.py:L193)
- **privilege** (`privsep-entrypoint`): @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/libvirt.py:L213)
- **privilege** (`privsep-entrypoint`): @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/libvirt.py:L226)
- **privilege** (`privsep-entrypoint`): @nova.privsep.sys_admin_pctxt.entrypoint (src/nova/privsep/libvirt.py:L233)

## Notes

- KB `sideEffects` entries at L194, L205, L214, L220 have targets that appear to be code fragments rather than resource paths; documented as recorded.

