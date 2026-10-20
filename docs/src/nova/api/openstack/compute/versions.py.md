# src/nova/api/openstack/compute/versions.py

## Overview

This file implements the `versions` module, defining 2 classs, 2 constants, 1 field, 7 methods, 5 imports, 8 side effects.

Lines: total 129, code 94, comment 17, blank 18

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LINKS` | constant | — | exported | not declared | — | `src/nova/api/openstack/compute/versions.py:L23–L30` |
| `VERSIONS` | constant | — | exported | not declared | — | `src/nova/api/openstack/compute/versions.py:L33–L74` |
| `Versions` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/versions.py:L78–L109` |
| `Versions.support_api_request_version` | field | — | public | not declared | — | `src/nova/api/openstack/compute/versions.py:L81–L81` |
| `Versions.__init__` | method | (self) | public | not declared | 1/2 | `src/nova/api/openstack/compute/versions.py:L83–L84` |
| `Versions.index` | method | (self, req, body=None) | public | `builder.build_versions(VERSIONS)` (src/nova/api/openstack/compute/versions.py:L91) | 1/3 | `src/nova/api/openstack/compute/versions.py:L88–L91` |
| `Versions.multi` | method | (self, req, body=None) | public | `builder.build_choices(VERSIONS, req)` (src/nova/api/openstack/compute/versions.py:L99) | 1/3 | `src/nova/api/openstack/compute/versions.py:L96–L99` |
| `Versions.get_action_args` | method | (self, request_environment) | public | `args` (src/nova/api/openstack/compute/versions.py:L109) | 2/7 | `src/nova/api/openstack/compute/versions.py:L101–L109` |
| `VersionsV2` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/versions.py:L113–L129` |
| `VersionsV2.__init__` | method | (self) | public | not declared | 1/2 | `src/nova/api/openstack/compute/versions.py:L115–L116` |
| `VersionsV2.index` | method | (self, req, body=None) | public | `builder.build_version(VERSIONS[ver])` (src/nova/api/openstack/compute/versions.py:L125) | 2/4 | `src/nova/api/openstack/compute/versions.py:L122–L125` |
| `VersionsV2.get_action_args` | method | (self, request_environment) | public | `{'action': 'index'}` (src/nova/api/openstack/compute/versions.py:L129) | 1/2 | `src/nova/api/openstack/compute/versions.py:L127–L129` |

## Dependencies

- `nova.api.openstack`: imports `api_version_request` (src/nova/api/openstack/compute/versions.py:L16)
- `nova.api.openstack.compute.schemas`: imports `versions as schema` (src/nova/api/openstack/compute/versions.py:L17)
- `nova.api.openstack.compute.views`: imports `versions as views_versions` (src/nova/api/openstack/compute/versions.py:L18)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/openstack/compute/versions.py:L19)
- `nova.api`: imports `validation` (src/nova/api/openstack/compute/versions.py:L20)

## Side Effects

- **network**: from nova.api.openstack.compute.schemas import versions as schema (src/nova/api/openstack/compute/versions.py:L17)
- **network**: from nova.api.openstack.compute.views import versions as views_versions (src/nova/api/openstack/compute/versions.py:L18)
- **network**: 'html': 'http://docs.openstack.org/' (src/nova/api/openstack/compute/versions.py:L25)
- **network**: 'html': 'http://docs.openstack.org/' (src/nova/api/openstack/compute/versions.py:L28)
- **network**: "type": "application/vnd.openstack.compute+json;version=2", (src/nova/api/openstack/compute/versions.py:L50)
- **network**: "type": "application/vnd.openstack.compute+json;version=2.1", (src/nova/api/openstack/compute/versions.py:L70)
- **global-mutation**: LINKS = { (src/nova/api/openstack/compute/versions.py:L23)
- **global-mutation**: VERSIONS = { (src/nova/api/openstack/compute/versions.py:L33)

