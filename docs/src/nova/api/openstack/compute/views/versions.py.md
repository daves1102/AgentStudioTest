# src/nova/api/openstack/compute/views/versions.py

## Overview

This file implements the `versions` module, defining 1 class, 1 function, 6 methods, 2 imports, 1 security surface entry.

Lines: total 95, code 64, comment 14, blank 17

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `get_view_builder` | function | (req) | exported | `ViewBuilder(base_url)` (src/nova/api/openstack/compute/views/versions.py:L23) | 1/3 | `src/nova/api/openstack/compute/views/versions.py:L21–L23` |
| `ViewBuilder` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/views/versions.py:L26–L95` |
| `ViewBuilder.__init__` | method | (self, base_url) | public | not declared | 1/3 | `src/nova/api/openstack/compute/views/versions.py:L28–L31` |
| `ViewBuilder.build_choices` | method | (self, VERSIONS, req) | public | `dict(choices=version_objs)` (src/nova/api/openstack/compute/views/versions.py:L49) | 2/16 | `src/nova/api/openstack/compute/views/versions.py:L33–L49` |
| `ViewBuilder.build_versions` | method | (self, versions) | public | `dict(versions=version_objs)` (src/nova/api/openstack/compute/views/versions.py:L64) | 2/13 | `src/nova/api/openstack/compute/views/versions.py:L51–L64` |
| `ViewBuilder.build_version` | method | (self, version) | public | `dict(version=reval)` (src/nova/api/openstack/compute/views/versions.py:L72) | 1/7 | `src/nova/api/openstack/compute/views/versions.py:L66–L72` |
| `ViewBuilder._build_links` | method | (self, version_data) | private | `links` (src/nova/api/openstack/compute/views/versions.py:L85) | 1/9 | `src/nova/api/openstack/compute/views/versions.py:L74–L85` |
| `ViewBuilder.generate_href` | method | (self, version, path=None) | public | `common.url_join(self.prefix, version_number, path)` (src/nova/api/openstack/compute/views/versions.py:L95) | 3/7 | `src/nova/api/openstack/compute/views/versions.py:L87–L95` |

## Dependencies

- `import copy` (src/nova/api/openstack/compute/views/versions.py:L16)
- `nova.api.openstack`: imports `common` (src/nova/api/openstack/compute/views/versions.py:L18)

## Security Surface

- **sink** (`db-write`): reval['links'].insert(0, { (src/nova/api/openstack/compute/views/versions.py:L68)

