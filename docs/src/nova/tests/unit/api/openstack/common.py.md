# src/nova/tests/unit/api/openstack/common.py

## Overview

This file implements the `common` module, defining 5 functions, 2 imports, 1 security surface entry.

Lines: total 55, code 27, comment 14, blank 14

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `webob_factory` | function | (url) | exported | `web_request` (src/nova/tests/unit/api/openstack/common.py:L33) | 1/4 | `src/nova/tests/unit/api/openstack/common.py:L20–L33` |
| `webob_factory.web_request` | function | (url, method=None, body=None) | public | `req` (src/nova/tests/unit/api/openstack/common.py:L32) | — | `src/nova/tests/unit/api/openstack/common.py:L25–L32` |
| `compare_links` | function | (actual, expected) | exported | `compare_tree_to_dict(actual, expected, ('rel', 'href', 'type'))` (src/nova/tests/unit/api/openstack/common.py:L39) | 1/2 | `src/nova/tests/unit/api/openstack/common.py:L36–L39` |
| `compare_media_types` | function | (actual, expected) | exported | `compare_tree_to_dict(actual, expected, ('base', 'type'))` (src/nova/tests/unit/api/openstack/common.py:L45) | 1/2 | `src/nova/tests/unit/api/openstack/common.py:L42–L45` |
| `compare_tree_to_dict` | function | (actual, expected, keys) | exported | `False` (src/nova/tests/unit/api/openstack/common.py:L54); `True` (src/nova/tests/unit/api/openstack/common.py:L55) | 4/6 | `src/nova/tests/unit/api/openstack/common.py:L48–L55` |

## Dependencies

- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/api/openstack/common.py:L16)
- `import webob` (src/nova/tests/unit/api/openstack/common.py:L17)

## Security Surface

- **entry-point** (`http-param`): req = webob.Request.blank("%s%s" % (base_url, url)) (src/nova/tests/unit/api/openstack/common.py:L26)

