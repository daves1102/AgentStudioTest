# src/nova/api/metadata/vendordata_json.py

## Overview

This file implements the `vendordata_json` module, defining 1 class, 2 constants, 2 methods, 5 imports, 3 side effects.

Lines: total 56, code 33, comment 14, blank 9

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/api/metadata/vendordata_json.py:L26–L26` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/api/metadata/vendordata_json.py:L27–L27` |
| `JsonFileVendorData` | class | — | exported | not declared | — | `src/nova/api/metadata/vendordata_json.py:L30–L56` |
| `JsonFileVendorData.__init__` | method | (self, *args, **kwargs) | public | not declared | 5/22 | `src/nova/api/metadata/vendordata_json.py:L31–L53` |
| `JsonFileVendorData.get` | method | (self) | public | `self._data` (src/nova/api/metadata/vendordata_json.py:L56) | 1/2 | `src/nova/api/metadata/vendordata_json.py:L55–L56` |

## Dependencies

- `import errno` (src/nova/api/metadata/vendordata_json.py:L18)
- `oslo_log`: imports `log as logging` (src/nova/api/metadata/vendordata_json.py:L20)
- `oslo_serialization`: imports `jsonutils` (src/nova/api/metadata/vendordata_json.py:L21)
- `nova.api.metadata`: imports `vendordata` (src/nova/api/metadata/vendordata_json.py:L23)
- `import nova.conf` (src/nova/api/metadata/vendordata_json.py:L24)

## Side Effects

- **file-io**: with open(fpath, "rb") as fp: (src/nova/api/metadata/vendordata_json.py:L38)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/api/metadata/vendordata_json.py:L26)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/api/metadata/vendordata_json.py:L27)

