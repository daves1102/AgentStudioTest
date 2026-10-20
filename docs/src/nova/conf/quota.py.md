# src/nova/conf/quota.py

## Overview

This file implements the `quota` module, defining 1 class, 1 field, 2 functions, 1 method, 2 variables, 4 imports.

Lines: total 372, code 288, comment 18, blank 66

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `UnifiedLimitsResource` | class | — | exported | not declared | — | `src/nova/conf/quota.py:L24–L46` |
| `UnifiedLimitsResource.resources` | field | — | public | not declared | — | `src/nova/conf/quota.py:L29–L33` |
| `UnifiedLimitsResource.__call__` | method | (self, value) | public | `value` (src/nova/conf/quota.py:L41) | 4/12 | `src/nova/conf/quota.py:L35–L46` |
| `quota_group` | variable | — | exported | not declared | — | `src/nova/conf/quota.py:L49–L54` |
| `quota_opts` | variable | — | exported | not declared | — | `src/nova/conf/quota.py:L56–L363` |
| `register_opts` | function | (conf) | exported | not declared | 1/3 | `src/nova/conf/quota.py:L366–L368` |
| `list_opts` | function | — | exported | `{quota_group: quota_opts}` (src/nova/conf/quota.py:L372) | 1/2 | `src/nova/conf/quota.py:L371–L372` |

## Dependencies

- `import re` (src/nova/conf/quota.py:L17)
- `import os_resource_classes as orc` (src/nova/conf/quota.py:L19)
- `oslo_config`: imports `cfg` (src/nova/conf/quota.py:L20)
- `oslo_config`: imports `types as cfg_types` (src/nova/conf/quota.py:L21)

