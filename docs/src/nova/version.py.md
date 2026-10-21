# src/nova/version.py

## Overview

This file implements the `version` module, defining 4 constants, 6 functions, 3 variables, 4 imports, 9 side effects.

Lines: total 96, code 51, comment 16, blank 29

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `NOVA_VENDOR` | constant | — | exported | not declared | — | `src/nova/version.py:L17–L17` |
| `NOVA_PRODUCT` | constant | — | exported | not declared | — | `src/nova/version.py:L18–L18` |
| `NOVA_PACKAGE` | constant | — | exported | not declared | — | `src/nova/version.py:L19–L19` |
| `NOVA_SUPPORT` | constant | — | exported | not declared | — | `src/nova/version.py:L20–L20` |
| `loaded` | variable | — | exported | not declared | — | `src/nova/version.py:L22–L22` |
| `version_info` | variable | — | exported | not declared | — | `src/nova/version.py:L23–L23` |
| `version_string` | variable | — | exported | not declared | — | `src/nova/version.py:L24–L24` |
| `_load_config` | function | — | unexported | `` (src/nova/version.py:L39); `` (src/nova/version.py:L45) | 8/26 | `src/nova/version.py:L27–L65` |
| `vendor_string` | function | — | exported | `NOVA_VENDOR` (src/nova/version.py:L71) | 1/3 | `src/nova/version.py:L68–L71` |
| `product_string` | function | — | exported | `NOVA_PRODUCT` (src/nova/version.py:L77) | 1/3 | `src/nova/version.py:L74–L77` |
| `package_string` | function | — | exported | `NOVA_PACKAGE` (src/nova/version.py:L83) | 1/3 | `src/nova/version.py:L80–L83` |
| `version_string_with_package` | function | — | exported | `version_info.version_string()` (src/nova/version.py:L88); `"%s-%s" % (version_info.version_string(), package_string())` (src/nova/version.py:L90) | 2/5 | `src/nova/version.py:L86–L90` |
| `support_string` | function | — | exported | `NOVA_SUPPORT` (src/nova/version.py:L96) | 1/3 | `src/nova/version.py:L93–L96` |

## Dependencies

- `import pbr.version` (src/nova/version.py:L15)
- `import configparser` (src/nova/version.py:L31)
- `oslo_config`: imports `cfg` (src/nova/version.py:L33)
- `oslo_log`: imports `log as logging` (src/nova/version.py:L35)

## Side Effects

- **global-mutation**: NOVA_VENDOR = "OpenStack Foundation" (src/nova/version.py:L17)
- **global-mutation**: NOVA_PRODUCT = "OpenStack Nova" (src/nova/version.py:L18)
- **global-mutation**: NOVA_PACKAGE = None  # OS distro package version suffix (src/nova/version.py:L19)
- **global-mutation**: NOVA_SUPPORT = "Please contact the administrator" (src/nova/version.py:L20)
- **global-mutation**: NOVA_VENDOR = cfg.get("Nova", "vendor") (src/nova/version.py:L52)
- **global-mutation**: NOVA_PRODUCT = cfg.get("Nova", "product") (src/nova/version.py:L55)
- **global-mutation**: NOVA_PACKAGE = cfg.get("Nova", "package") (src/nova/version.py:L58)
- **global-mutation**: NOVA_SUPPORT = cfg.get("Nova", "support") (src/nova/version.py:L61)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/version.py:L63)

