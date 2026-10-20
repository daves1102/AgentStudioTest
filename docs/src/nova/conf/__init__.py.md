# src/nova/conf/\_\_init\_\_.py

## Overview

This file implements the `__init__` module, defining 1 constant, 46 imports, 1 side effect.

Lines: total 114, code 92, comment 17, blank 5

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/conf/__init__.py:L68–L68` |

## Dependencies

- `oslo_config`: imports `cfg` (src/nova/conf/__init__.py:L20)
- `nova.conf`: imports `api` (src/nova/conf/__init__.py:L22)
- `nova.conf`: imports `availability_zone` (src/nova/conf/__init__.py:L23)
- `nova.conf`: imports `base` (src/nova/conf/__init__.py:L24)
- `nova.conf`: imports `cache` (src/nova/conf/__init__.py:L25)
- `nova.conf`: imports `cinder` (src/nova/conf/__init__.py:L26)
- `nova.conf`: imports `compute` (src/nova/conf/__init__.py:L27)
- `nova.conf`: imports `conductor` (src/nova/conf/__init__.py:L28)
- `nova.conf`: imports `configdrive` (src/nova/conf/__init__.py:L29)
- `nova.conf`: imports `console` (src/nova/conf/__init__.py:L30)
- `nova.conf`: imports `consoleauth` (src/nova/conf/__init__.py:L31)
- `nova.conf`: imports `cyborg` (src/nova/conf/__init__.py:L32)
- `nova.conf`: imports `database` (src/nova/conf/__init__.py:L33)
- `nova.conf`: imports `devices` (src/nova/conf/__init__.py:L34)
- `nova.conf`: imports `ephemeral_storage` (src/nova/conf/__init__.py:L35)
- `nova.conf`: imports `glance` (src/nova/conf/__init__.py:L36)
- `nova.conf`: imports `guestfs` (src/nova/conf/__init__.py:L37)
- `nova.conf`: imports `imagecache` (src/nova/conf/__init__.py:L38)
- `nova.conf`: imports `ironic` (src/nova/conf/__init__.py:L39)
- `nova.conf`: imports `key_manager` (src/nova/conf/__init__.py:L40)
- `nova.conf`: imports `keystone` (src/nova/conf/__init__.py:L41)
- `nova.conf`: imports `libvirt` (src/nova/conf/__init__.py:L42)
- `nova.conf`: imports `manila` (src/nova/conf/__init__.py:L43)
- `nova.conf`: imports `mks` (src/nova/conf/__init__.py:L44)
- `nova.conf`: imports `netconf` (src/nova/conf/__init__.py:L45)
- `nova.conf`: imports `neutron` (src/nova/conf/__init__.py:L46)
- `nova.conf`: imports `notifications` (src/nova/conf/__init__.py:L47)
- `nova.conf`: imports `novnc` (src/nova/conf/__init__.py:L48)
- `nova.conf`: imports `paths` (src/nova/conf/__init__.py:L49)
- `nova.conf`: imports `pci` (src/nova/conf/__init__.py:L50)
- `nova.conf`: imports `placement` (src/nova/conf/__init__.py:L51)
- `nova.conf`: imports `quota` (src/nova/conf/__init__.py:L52)
- `nova.conf`: imports `rpc` (src/nova/conf/__init__.py:L53)
- `nova.conf`: imports `scheduler` (src/nova/conf/__init__.py:L54)
- `nova.conf`: imports `serial_console` (src/nova/conf/__init__.py:L55)
- `nova.conf`: imports `service` (src/nova/conf/__init__.py:L56)
- `nova.conf`: imports `service_token` (src/nova/conf/__init__.py:L57)
- `nova.conf`: imports `servicegroup` (src/nova/conf/__init__.py:L58)
- `nova.conf`: imports `spice` (src/nova/conf/__init__.py:L59)
- `nova.conf`: imports `upgrade_levels` (src/nova/conf/__init__.py:L60)
- `nova.conf`: imports `vendordata` (src/nova/conf/__init__.py:L61)
- `nova.conf`: imports `vmware` (src/nova/conf/__init__.py:L62)
- `nova.conf`: imports `vnc` (src/nova/conf/__init__.py:L63)
- `nova.conf`: imports `workarounds` (src/nova/conf/__init__.py:L64)
- `nova.conf`: imports `wsgi` (src/nova/conf/__init__.py:L65)
- `nova.conf`: imports `zvm` (src/nova/conf/__init__.py:L66)

## Side Effects

- **global-mutation**: CONF = cfg.CONF (src/nova/conf/__init__.py:L68)

