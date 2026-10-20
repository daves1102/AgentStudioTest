# src/nova/api/openstack/api_version_request.py

## Overview

This file implements the `api_version_request` module, defining 1 class, 6 constants, 3 functions, 12 methods, 2 variables, 5 imports, 6 side effects, 4 security surface entries.

Lines: total 441, code 357, comment 44, blank 40

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `REST_API_VERSION_HISTORY` | constant | — | exported | not declared | — | `src/nova/api/openstack/api_version_request.py:L43–L292` |
| `_MIN_API_VERSION` | variable | — | unexported | not declared | — | `src/nova/api/openstack/api_version_request.py:L299–L299` |
| `_MAX_API_VERSION` | variable | — | unexported | not declared | — | `src/nova/api/openstack/api_version_request.py:L300–L300` |
| `DEFAULT_API_VERSION` | constant | — | exported | not declared | — | `src/nova/api/openstack/api_version_request.py:L301–L301` |
| `MAX_PROXY_API_SUPPORT_VERSION` | constant | — | exported | not declared | — | `src/nova/api/openstack/api_version_request.py:L305–L305` |
| `MIN_WITHOUT_PROXY_API_SUPPORT_VERSION` | constant | — | exported | not declared | — | `src/nova/api/openstack/api_version_request.py:L306–L306` |
| `MAX_IMAGE_META_PROXY_API_VERSION` | constant | — | exported | not declared | — | `src/nova/api/openstack/api_version_request.py:L309–L309` |
| `MIN_WITHOUT_IMAGE_META_PROXY_API_VERSION` | constant | — | exported | not declared | — | `src/nova/api/openstack/api_version_request.py:L310–L310` |
| `min_api_version` | function | — | exported | `APIVersionRequest(_MIN_API_VERSION)` (src/nova/api/openstack/api_version_request.py:L317) | 1/2 | `src/nova/api/openstack/api_version_request.py:L316–L317` |
| `max_api_version` | function | — | exported | `APIVersionRequest(_MAX_API_VERSION)` (src/nova/api/openstack/api_version_request.py:L321) | 1/2 | `src/nova/api/openstack/api_version_request.py:L320–L321` |
| `is_supported` | function | (req, version) | exported | `False` (src/nova/api/openstack/api_version_request.py:L337); `req.api_version_request >= APIVersionRequest(version)` (src/nova/api/openstack/api_version_request.py:L339) | 2/4 | `src/nova/api/openstack/api_version_request.py:L324–L339` |
| `APIVersionRequest` | class | — | exported | not declared | — | `src/nova/api/openstack/api_version_request.py:L342–L441` |
| `APIVersionRequest.__init__` | method | (self, version_string=None) | public | not declared | 3/11 | `src/nova/api/openstack/api_version_request.py:L348–L366` |
| `APIVersionRequest.__str__` | method | (self) | public | `("API Version Request Major: %s, Minor: %s" % (self.ver_major, self.ver_minor))` (src/nova/api/openstack/api_version_request.py:L370) | 1/3 | `src/nova/api/openstack/api_version_request.py:L368–L371` |
| `APIVersionRequest.is_null` | method | (self) | public | `self.ver_major == 0 and self.ver_minor == 0` (src/nova/api/openstack/api_version_request.py:L374) | 2/2 | `src/nova/api/openstack/api_version_request.py:L373–L374` |
| `APIVersionRequest._format_type_error` | method | (self, other) | private | `TypeError(_("'%(other)s' should be an instance of '%(cls)s'") % {"other": other, "cls": self.__class__})` (src/nova/api/openstack/api_version_request.py:L377) | 1/3 | `src/nova/api/openstack/api_version_request.py:L376–L378` |
| `APIVersionRequest.__lt__` | method | (self, other) | public | `((self.ver_major, self.ver_minor) < (other.ver_major, other.ver_minor))` (src/nova/api/openstack/api_version_request.py:L384) | 2/5 | `src/nova/api/openstack/api_version_request.py:L380–L385` |
| `APIVersionRequest.__eq__` | method | (self, other) | public | `((self.ver_major, self.ver_minor) == (other.ver_major, other.ver_minor))` (src/nova/api/openstack/api_version_request.py:L391) | 2/5 | `src/nova/api/openstack/api_version_request.py:L387–L392` |
| `APIVersionRequest.__gt__` | method | (self, other) | public | `((self.ver_major, self.ver_minor) > (other.ver_major, other.ver_minor))` (src/nova/api/openstack/api_version_request.py:L398) | 2/5 | `src/nova/api/openstack/api_version_request.py:L394–L399` |
| `APIVersionRequest.__le__` | method | (self, other) | public | `self < other or self == other` (src/nova/api/openstack/api_version_request.py:L402) | 2/2 | `src/nova/api/openstack/api_version_request.py:L401–L402` |
| `APIVersionRequest.__ne__` | method | (self, other) | public | `not self.__eq__(other)` (src/nova/api/openstack/api_version_request.py:L405) | 1/2 | `src/nova/api/openstack/api_version_request.py:L404–L405` |
| `APIVersionRequest.__ge__` | method | (self, other) | public | `self > other or self == other` (src/nova/api/openstack/api_version_request.py:L408) | 2/2 | `src/nova/api/openstack/api_version_request.py:L407–L408` |
| `APIVersionRequest.matches` | method | (self, min_version, max_version) | public | `True` (src/nova/api/openstack/api_version_request.py:L425); `min_version <= self` (src/nova/api/openstack/api_version_request.py:L429); `self <= max_version` (src/nova/api/openstack/api_version_request.py:L431); `min_version <= self <= max_version` (src/nova/api/openstack/api_version_request.py:L433) | 6/11 | `src/nova/api/openstack/api_version_request.py:L410–L433` |
| `APIVersionRequest.get_string` | method | (self) | public | `"%s.%s" % (self.ver_major, self.ver_minor)` (src/nova/api/openstack/api_version_request.py:L441) | 2/4 | `src/nova/api/openstack/api_version_request.py:L435–L441` |

## Dependencies

- `import re` (src/nova/api/openstack/api_version_request.py:L15)
- `import typing as ty` (src/nova/api/openstack/api_version_request.py:L16)
- `nova`: imports `exception` (src/nova/api/openstack/api_version_request.py:L18)
- `nova.i18n`: imports `_` (src/nova/api/openstack/api_version_request.py:L19)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/openstack/api_version_request.py:L22)

## Side Effects

- **global-mutation**: REST_API_VERSION_HISTORY = """REST API Version History: (src/nova/api/openstack/api_version_request.py:L43)
- **global-mutation**: DEFAULT_API_VERSION = _MIN_API_VERSION (src/nova/api/openstack/api_version_request.py:L301)
- **global-mutation**: MAX_PROXY_API_SUPPORT_VERSION = '2.35' (src/nova/api/openstack/api_version_request.py:L305)
- **global-mutation**: MIN_WITHOUT_PROXY_API_SUPPORT_VERSION = '2.36' (src/nova/api/openstack/api_version_request.py:L306)
- **global-mutation**: MAX_IMAGE_META_PROXY_API_VERSION = '2.38' (src/nova/api/openstack/api_version_request.py:L309)
- **global-mutation**: MIN_WITHOUT_IMAGE_META_PROXY_API_VERSION = '2.39' (src/nova/api/openstack/api_version_request.py:L310)

## Security Surface

- **sink** (`db-write`): * 2.76 - Adds ``power-update`` event to ``os-server-external-events`` API. (src/nova/api/openstack/api_version_request.py:L203)
- **sink** (`db-write`): ``server show``, ``server list --long``, ``server update``, and (src/nova/api/openstack/api_version_request.py:L263)
- **sink** (`db-write`): ``server show``, ``server list --long``, `server update``, and (src/nova/api/openstack/api_version_request.py:L274)
- **entry-point** (`http-param`): def is_supported(req: 'wsgi.Request', version: str) -> bool: (src/nova/api/openstack/api_version_request.py:L324)

