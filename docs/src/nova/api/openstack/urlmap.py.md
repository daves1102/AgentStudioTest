# src/nova/api/openstack/urlmap.py

## Overview

This file implements the `urlmap` module, defining 2 classs, 1 constant, 7 functions, 10 methods, 2 variables, 5 imports, 1 side effect.

Lines: total 309, code 202, comment 45, blank 62

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/api/openstack/urlmap.py:L25–L25` |
| `_quoted_string_re` | variable | — | unexported | not declared | — | `src/nova/api/openstack/urlmap.py:L28–L28` |
| `_option_header_piece_re` | variable | — | unexported | not declared | — | `src/nova/api/openstack/urlmap.py:L29–L31` |
| `unquote_header_value` | function | (value) | exported | `value` (src/nova/api/openstack/urlmap.py:L47) | 3/4 | `src/nova/api/openstack/urlmap.py:L34–L47` |
| `parse_list_header` | function | (value) | exported | `result` (src/nova/api/openstack/urlmap.py:L71) | 3/7 | `src/nova/api/openstack/urlmap.py:L50–L71` |
| `parse_options_header` | function | (value) | exported | `'', {}` (src/nova/api/openstack/urlmap.py:L93); `name, extra` (src/nova/api/openstack/urlmap.py:L98) | 2/8 | `src/nova/api/openstack/urlmap.py:L74–L98` |
| `parse_options_header._tokenize` | function | (string) | private | not declared | — | `src/nova/api/openstack/urlmap.py:L84–L90` |
| `Accept` | class | — | exported | not declared | — | `src/nova/api/openstack/urlmap.py:L101–L142` |
| `Accept.__init__` | method | (self, value) | public | not declared | 2/3 | `src/nova/api/openstack/urlmap.py:L102–L104` |
| `Accept.best_match` | method | (self, supported_content_types) | public | `best_content_type, best_params` (src/nova/api/openstack/urlmap.py:L133) | 8/22 | `src/nova/api/openstack/urlmap.py:L106–L133` |
| `Accept._match_mask` | method | (self, mask, content_type) | private | `content_type == mask` (src/nova/api/openstack/urlmap.py:L137); `True` (src/nova/api/openstack/urlmap.py:L139); `content_type_major == mask_major` (src/nova/api/openstack/urlmap.py:L142) | 3/8 | `src/nova/api/openstack/urlmap.py:L135–L142` |
| `urlmap_factory` | function | (loader, global_conf, **local_conf) | exported | `urlmap` (src/nova/api/openstack/urlmap.py:L157) | 4/13 | `src/nova/api/openstack/urlmap.py:L145–L157` |
| `URLMap` | class | — | exported | not declared | — | `src/nova/api/openstack/urlmap.py:L160–L309` |
| `URLMap._match` | method | (self, host, port, path_info) | private | `app, app_url[:-2]` (src/nova/api/openstack/urlmap.py:L183); `app, app_url` (src/nova/api/openstack/urlmap.py:L187); `None, None` (src/nova/api/openstack/urlmap.py:L189) | 10/14 | `src/nova/api/openstack/urlmap.py:L161–L189` |
| `URLMap._set_script_name` | method | (self, app, app_url) | private | `wrap` (src/nova/api/openstack/urlmap.py:L196) | 1/3 | `src/nova/api/openstack/urlmap.py:L191–L196` |
| `URLMap._set_script_name.wrap` | function | (environ, start_response) | public | `app(environ, start_response)` (src/nova/api/openstack/urlmap.py:L194) | — | `src/nova/api/openstack/urlmap.py:L192–L194` |
| `URLMap._munge_path` | method | (self, app, path_info, app_url) | private | `wrap` (src/nova/api/openstack/urlmap.py:L204) | 1/3 | `src/nova/api/openstack/urlmap.py:L198–L204` |
| `URLMap._munge_path.wrap` | function | (environ, start_response) | public | `app(environ, start_response)` (src/nova/api/openstack/urlmap.py:L202) | — | `src/nova/api/openstack/urlmap.py:L199–L202` |
| `URLMap._path_strategy` | method | (self, host, port, path_info) | private | `mime_type, app, app_url` (src/nova/api/openstack/urlmap.py:L224) | 6/14 | `src/nova/api/openstack/urlmap.py:L206–L224` |
| `URLMap._content_type_strategy` | method | (self, host, port, environ) | private | `app` (src/nova/api/openstack/urlmap.py:L235) | 3/8 | `src/nova/api/openstack/urlmap.py:L226–L235` |
| `URLMap._accept_strategy` | method | (self, host, port, environ, supported_content_types) | private | `mime_type, app` (src/nova/api/openstack/urlmap.py:L250) | 3/9 | `src/nova/api/openstack/urlmap.py:L237–L250` |
| `URLMap.__call__` | method | (self, environ, start_response) | public | `app(environ, start_response)` (src/nova/api/openstack/urlmap.py:L305); `self.not_found_application(environ, start_response)` (src/nova/api/openstack/urlmap.py:L309) | 17/36 | `src/nova/api/openstack/urlmap.py:L252–L309` |

## Dependencies

- `import re` (src/nova/api/openstack/urlmap.py:L16)
- `urllib`: imports `request as urllib2` (src/nova/api/openstack/urlmap.py:L17)
- `oslo_log`: imports `log as logging` (src/nova/api/openstack/urlmap.py:L19)
- `import paste.urlmap` (src/nova/api/openstack/urlmap.py:L20)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/openstack/urlmap.py:L22)

## Side Effects

- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/api/openstack/urlmap.py:L25)

