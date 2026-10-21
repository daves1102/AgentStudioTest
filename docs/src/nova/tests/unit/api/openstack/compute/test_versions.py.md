# src/nova/tests/unit/api/openstack/compute/test_versions.py

## Overview

This file implements the `test_versions` module, defining 4 classs, 4 constants, 1 field, 1 function, 28 methods, 3 propertys, 9 imports, 16 side effects, 4 security surface entries.

Lines: total 519, code 440, comment 16, blank 63

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `NS` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_versions.py:L29–L32` |
| `MAX_API_VERSION` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_versions.py:L34–L34` |
| `EXP_LINKS` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_versions.py:L36–L43` |
| `EXP_VERSIONS` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_versions.py:L46–L91` |
| `_get_self_href` | function | (response) | unexported | `link['href']` (src/nova/tests/unit/api/openstack/compute/test_versions.py:L99); `''` (src/nova/tests/unit/api/openstack/compute/test_versions.py:L100) | 3/6 | `src/nova/tests/unit/api/openstack/compute/test_versions.py:L94–L100` |
| `VersionsTestV21WithV2CompatibleWrapper` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_versions.py:L103–L300` |
| `VersionsTestV21WithV2CompatibleWrapper.wsgi_app` | method | (self) | public | `fakes.wsgi_app_v21(v2_compatible=True)` (src/nova/tests/unit/api/openstack/compute/test_versions.py:L107) | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_versions.py:L106–L107` |
| `VersionsTestV21WithV2CompatibleWrapper.test_get_version_list` | method | (self) | public | not declared | 1/34 | `src/nova/tests/unit/api/openstack/compute/test_versions.py:L109–L142` |
| `VersionsTestV21WithV2CompatibleWrapper._test_get_version_2_detail` | method | (self, url, accept=None) | private | not declared | 2/37 | `src/nova/tests/unit/api/openstack/compute/test_versions.py:L144–L180` |
| `VersionsTestV21WithV2CompatibleWrapper.test_get_version_2_detail` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_versions.py:L182–L183` |
| `VersionsTestV21WithV2CompatibleWrapper.test_get_version_2_detail_content_type` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_versions.py:L185–L187` |
| `VersionsTestV21WithV2CompatibleWrapper.test_get_version_2_versions_invalid` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_versions.py:L189–L193` |
| `VersionsTestV21WithV2CompatibleWrapper.test_multi_choice_image` | method | (self) | public | not declared | 1/45 | `src/nova/tests/unit/api/openstack/compute/test_versions.py:L195–L241` |
| `VersionsTestV21WithV2CompatibleWrapper.test_multi_choice_server_atom` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_versions.py:L243–L251` |
| `VersionsTestV21WithV2CompatibleWrapper.test_multi_choice_server` | method | (self) | public | not declared | 1/46 | `src/nova/tests/unit/api/openstack/compute/test_versions.py:L253–L300` |
| `VersionsViewBuilderTests` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_versions.py:L303–L428` |
| `VersionsViewBuilderTests.test_view_builder` | method | (self) | public | not declared | 1/31 | `src/nova/tests/unit/api/openstack/compute/test_versions.py:L304–L338` |
| `VersionsViewBuilderTests._test_view_builder_compute_link_prefix` | method | (self, href=None) | private | not declared | 2/34 | `src/nova/tests/unit/api/openstack/compute/test_versions.py:L340–L374` |
| `VersionsViewBuilderTests.test_view_builder_with_compute_link_prefix` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_versions.py:L376–L379` |
| `VersionsViewBuilderTests.test_view_builder_without_compute_link_prefix` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_versions.py:L381–L382` |
| `VersionsViewBuilderTests.test_generate_href` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_versions.py:L384–L392` |
| `VersionsViewBuilderTests.test_generate_href_v21` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_versions.py:L394–L402` |
| `VersionsViewBuilderTests.test_generate_href_unknown` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_versions.py:L404–L412` |
| `VersionsViewBuilderTests.test_generate_href_with_path` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_versions.py:L414–L420` |
| `VersionsViewBuilderTests.test_generate_href_with_empty_path` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_versions.py:L422–L428` |
| `VersionsTestV21` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_versions.py:L433–L491` |
| `VersionsTestV21.exp_versions` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_versions.py:L434–L434` |
| `VersionsTestV21.wsgi_app` | method | (self) | public | `fakes.wsgi_app_v21()` (src/nova/tests/unit/api/openstack/compute/test_versions.py:L441) | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_versions.py:L440–L441` |
| `VersionsTestV21.test_get_version_21_detail` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_versions.py:L443–L451` |
| `VersionsTestV21.test_get_version_21_versions_v21_detail` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_versions.py:L453–L463` |
| `VersionsTestV21.test_get_version_21_versions_v20_detail` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_versions.py:L465–L475` |
| `VersionsTestV21.test_get_version_21_versions_invalid` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_versions.py:L477–L481` |
| `VersionsTestV21.test_get_version_21_detail_content_type` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_versions.py:L483–L491` |
| `VersionBehindSslTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_versions.py:L494–L519` |
| `VersionBehindSslTestCase.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_versions.py:L495–L498` |
| `VersionBehindSslTestCase.wsgi_app` | method | (self) | public | `fakes.wsgi_app_v21(v2_compatible=True)` (src/nova/tests/unit/api/openstack/compute/test_versions.py:L502) | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_versions.py:L501–L502` |
| `VersionBehindSslTestCase.test_versions_without_headers` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_versions.py:L504–L510` |
| `VersionBehindSslTestCase.test_versions_with_header` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_versions.py:L512–L519` |
| `VersionsTestV21WithV2CompatibleWrapper.wsgi_app` | property | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_versions.py:L105–L107` |
| `VersionsTestV21.wsgi_app` | property | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_versions.py:L439–L441` |
| `VersionBehindSslTestCase.wsgi_app` | property | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_versions.py:L500–L502` |

## Dependencies

- `import copy` (src/nova/tests/unit/api/openstack/compute/test_versions.py:L16)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/api/openstack/compute/test_versions.py:L18)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/api/openstack/compute/test_versions.py:L19)
- `nova.api.openstack`: imports `api_version_request as avr` (src/nova/tests/unit/api/openstack/compute/test_versions.py:L21)
- `nova.api.openstack.compute`: imports `views` (src/nova/tests/unit/api/openstack/compute/test_versions.py:L22)
- `nova.api`: imports `wsgi` (src/nova/tests/unit/api/openstack/compute/test_versions.py:L23)
- `nova`: imports `test` (src/nova/tests/unit/api/openstack/compute/test_versions.py:L24)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/api/openstack/compute/test_versions.py:L25)
- `nova.tests.unit`: imports `matchers` (src/nova/tests/unit/api/openstack/compute/test_versions.py:L26)

## Side Effects

- **network**: from nova.api.openstack.compute import views (src/nova/tests/unit/api/openstack/compute/test_versions.py:L22)
- **network**: 'ns': 'http://docs.openstack.org/common/api/v1.0' (src/nova/tests/unit/api/openstack/compute/test_versions.py:L31)
- **network**: 'html': 'http://docs.openstack.org/', (src/nova/tests/unit/api/openstack/compute/test_versions.py:L38)
- **network**: 'html': 'http://docs.openstack.org/' (src/nova/tests/unit/api/openstack/compute/test_versions.py:L41)
- **network**: "type": "application/vnd.openstack.compute+json;version=2", (src/nova/tests/unit/api/openstack/compute/test_versions.py:L63)
- **network**: "type": "application/vnd.openstack.compute+json;version=2.1", (src/nova/tests/unit/api/openstack/compute/test_versions.py:L87)
- **network**: "vnd.openstack.compute+json;version=2", (src/nova/tests/unit/api/openstack/compute/test_versions.py:L175)
- **network**: "type": "application/vnd.openstack.compute+json" (src/nova/tests/unit/api/openstack/compute/test_versions.py:L216)
- **network**: "application/vnd.openstack.compute+json;version=2.1", (src/nova/tests/unit/api/openstack/compute/test_versions.py:L234)
- **network**: "type": "application/vnd.openstack.compute+json" (src/nova/tests/unit/api/openstack/compute/test_versions.py:L275)
- **network**: "application/vnd.openstack.compute+json;version=2.1", (src/nova/tests/unit/api/openstack/compute/test_versions.py:L293)
- **network**: "type": ("application/vnd.openstack." (src/nova/tests/unit/api/openstack/compute/test_versions.py:L361)
- **global-mutation**: NS = { (src/nova/tests/unit/api/openstack/compute/test_versions.py:L29)
- **global-mutation**: MAX_API_VERSION = avr.max_api_version().get_string() (src/nova/tests/unit/api/openstack/compute/test_versions.py:L34)
- **global-mutation**: EXP_LINKS = { (src/nova/tests/unit/api/openstack/compute/test_versions.py:L36)
- **global-mutation**: EXP_VERSIONS = { (src/nova/tests/unit/api/openstack/compute/test_versions.py:L46)

## Security Surface

- **sink** (`db-write`): expected['version']['links'].insert(0, { (src/nova/tests/unit/api/openstack/compute/test_versions.py:L368)
- **sink** (`db-write`): exp_versions['v2.0']['links'].insert(0, (src/nova/tests/unit/api/openstack/compute/test_versions.py:L435)
- **entry-point** (`http-param`): req = wsgi.Request.blank('/') (src/nova/tests/unit/api/openstack/compute/test_versions.py:L505)
- **entry-point** (`http-param`): req = wsgi.Request.blank('/') (src/nova/tests/unit/api/openstack/compute/test_versions.py:L513)

