# src/nova/api/metadata/vendordata_dynamic.py

## Overview

This file implements the `vendordata_dynamic` module, defining 1 class, 2 constants, 1 function, 3 methods, 7 imports, 2 side effects, 1 security surface entry.

Lines: total 133, code 84, comment 22, blank 27

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/api/metadata/vendordata_dynamic.py:L28–L28` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/api/metadata/vendordata_dynamic.py:L29–L29` |
| `_load_ks_session` | function | (conf) | unexported | `session` (src/nova/api/metadata/vendordata_dynamic.py:L49) | 2/10 | `src/nova/api/metadata/vendordata_dynamic.py:L32–L49` |
| `DynamicVendorData` | class | — | exported | not declared | — | `src/nova/api/metadata/vendordata_dynamic.py:L52–L133` |
| `DynamicVendorData.__init__` | method | (self, instance) | public | not declared | 1/3 | `src/nova/api/metadata/vendordata_dynamic.py:L53–L56` |
| `DynamicVendorData._do_request` | method | (self, service_name, url) | private | `jsonutils.loads(res.text)` (src/nova/api/metadata/vendordata_dynamic.py:L89); `{}` (src/nova/api/metadata/vendordata_dynamic.py:L91); `{}` (src/nova/api/metadata/vendordata_dynamic.py:L105) | 8/38 | `src/nova/api/metadata/vendordata_dynamic.py:L58–L105` |
| `DynamicVendorData.get` | method | (self) | public | `j` (src/nova/api/metadata/vendordata_dynamic.py:L133) | 4/18 | `src/nova/api/metadata/vendordata_dynamic.py:L107–L133` |

## Dependencies

- `import sys` (src/nova/api/metadata/vendordata_dynamic.py:L18)
- `keystoneauth1`: imports `exceptions as ks_exceptions` (src/nova/api/metadata/vendordata_dynamic.py:L20)
- `oslo_log`: imports `log as logging` (src/nova/api/metadata/vendordata_dynamic.py:L21)
- `oslo_serialization`: imports `jsonutils` (src/nova/api/metadata/vendordata_dynamic.py:L22)
- `nova.api.metadata`: imports `vendordata` (src/nova/api/metadata/vendordata_dynamic.py:L24)
- `import nova.conf` (src/nova/api/metadata/vendordata_dynamic.py:L25)
- `nova`: imports `service_auth` (src/nova/api/metadata/vendordata_dynamic.py:L26)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/api/metadata/vendordata_dynamic.py:L28)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/api/metadata/vendordata_dynamic.py:L29)

## Security Surface

- **privilege** (`crypto-key`): from keystoneauth1 import exceptions as ks_exceptions (src/nova/api/metadata/vendordata_dynamic.py:L20)

