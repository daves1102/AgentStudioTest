# src/nova/tests/unit/api/openstack/compute/test_limits.py

## Overview

This file implements the `test_limits` module, defining 10 classs, 3 fields, 1 function, 36 methods, 18 imports, 2 side effects.

Lines: total 526, code 430, comment 20, blank 76

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `fake_get_project_quotas` | function | (context, project_id, usages=True) | exported | `{ k: {'limit': v, 'in_use': max(-1, v // 2)} for k, v in absolute_limits.items() }` (src/nova/tests/unit/api/openstack/compute/test_limits.py:L59) | 2/20 | `src/nova/tests/unit/api/openstack/compute/test_limits.py:L42–L62` |
| `BaseLimitTestSuite` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_limits.py:L65–L84` |
| `BaseLimitTestSuite.setUp` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/api/openstack/compute/test_limits.py:L68–L80` |
| `BaseLimitTestSuite._get_time` | method | (self) | private | `self.time` (src/nova/tests/unit/api/openstack/compute/test_limits.py:L84) | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_limits.py:L82–L84` |
| `LimitsControllerTestV21` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_limits.py:L87–L229` |
| `LimitsControllerTestV21.limits_controller` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_limits.py:L89–L89` |
| `LimitsControllerTestV21.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_limits.py:L91–L95` |
| `LimitsControllerTestV21._get_index_request` | method | (self, accept_header="application/json", tenant_id=None, user_id='testuser', project_id='testproject') | private | `request` (src/nova/tests/unit/api/openstack/compute/test_limits.py:L113) | 2/15 | `src/nova/tests/unit/api/openstack/compute/test_limits.py:L97–L113` |
| `LimitsControllerTestV21.test_index_json` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_limits.py:L115–L116` |
| `LimitsControllerTestV21.test_index_json_by_tenant` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_limits.py:L118–L119` |
| `LimitsControllerTestV21._test_index_json` | method | (self, tenant_id=None) | private | not declared | 2/36 | `src/nova/tests/unit/api/openstack/compute/test_limits.py:L121–L160` |
| `LimitsControllerTestV21.test_admin_can_fetch_limits_for_a_given_tenant_id` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/api/openstack/compute/test_limits.py:L162–L178` |
| `LimitsControllerTestV21._test_admin_can_fetch_used_limits_for_own_project` | method | (self, req_get) | private | not declared | 2/13 | `src/nova/tests/unit/api/openstack/compute/test_limits.py:L180–L195` |
| `LimitsControllerTestV21.test_admin_can_fetch_used_limits_for_own_project` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_limits.py:L197–L199` |
| `LimitsControllerTestV21.test_admin_can_fetch_used_limits_for_dummy_only` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_limits.py:L201–L205` |
| `LimitsControllerTestV21.test_admin_can_fetch_used_limits_with_positive_int` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_limits.py:L207–L209` |
| `LimitsControllerTestV21.test_admin_can_fetch_used_limits_with_negative_int` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_limits.py:L211–L213` |
| `LimitsControllerTestV21.test_admin_can_fetch_used_limits_with_unknown_param` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_limits.py:L215–L217` |
| `LimitsControllerTestV21.test_used_limits_fetched_for_context_project_id` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_limits.py:L219–L229` |
| `FakeHttplibSocket` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_limits.py:L232–L241` |
| `FakeHttplibSocket.__init__` | method | (self, response_string) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_limits.py:L235–L237` |
| `FakeHttplibSocket.makefile` | method | (self, _mode, _other) | public | `self._buffer` (src/nova/tests/unit/api/openstack/compute/test_limits.py:L241) | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_limits.py:L239–L241` |
| `FakeHttplibConnection` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_limits.py:L244–L274` |
| `FakeHttplibConnection.__init__` | method | (self, app, host) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_limits.py:L247–L250` |
| `FakeHttplibConnection.request` | method | (self, method, path, body="", headers=None) | public | not declared | 2/13 | `src/nova/tests/unit/api/openstack/compute/test_limits.py:L252–L270` |
| `FakeHttplibConnection.getresponse` | method | (self) | public | `self.http_response` (src/nova/tests/unit/api/openstack/compute/test_limits.py:L274) | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_limits.py:L272–L274` |
| `LimitsViewBuilderTest` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_limits.py:L277–L309` |
| `LimitsViewBuilderTest.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_limits.py:L278–L281` |
| `LimitsViewBuilderTest.test_build_limits` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/api/openstack/compute/test_limits.py:L283–L302` |
| `LimitsViewBuilderTest.test_build_limits_empty_limits` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_limits.py:L304–L309` |
| `LimitsControllerTestV236` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_limits.py:L312–L343` |
| `LimitsControllerTestV236.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_limits.py:L314–L318` |
| `LimitsControllerTestV236.test_index_filtered` | method | (self) | public | not declared | 1/24 | `src/nova/tests/unit/api/openstack/compute/test_limits.py:L320–L343` |
| `LimitsControllerTestV239` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_limits.py:L346–L359` |
| `LimitsControllerTestV239.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_limits.py:L348–L352` |
| `LimitsControllerTestV239.test_index_filtered_no_max_image_meta` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_limits.py:L354–L359` |
| `LimitsControllerTestV275` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_limits.py:L362–L376` |
| `LimitsControllerTestV275.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_limits.py:L363–L365` |
| `LimitsControllerTestV275.test_index_additional_query_param_old_version` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_limits.py:L367–L370` |
| `LimitsControllerTestV275.test_index_additional_query_param` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_limits.py:L372–L376` |
| `NoopLimitsControllerTest` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_limits.py:L379–L444` |
| `NoopLimitsControllerTest.quota_driver` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_limits.py:L380–L380` |
| `NoopLimitsControllerTest.setUp` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_limits.py:L382–L389` |
| `NoopLimitsControllerTest.test_index_v21` | method | (self) | public | not declared | 1/30 | `src/nova/tests/unit/api/openstack/compute/test_limits.py:L391–L420` |
| `NoopLimitsControllerTest.test_index_v275` | method | (self) | public | not declared | 1/23 | `src/nova/tests/unit/api/openstack/compute/test_limits.py:L422–L444` |
| `UnifiedLimitsControllerTest` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_limits.py:L447–L526` |
| `UnifiedLimitsControllerTest.quota_driver` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_limits.py:L448–L448` |
| `UnifiedLimitsControllerTest.setUp` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/compute/test_limits.py:L450–L459` |
| `UnifiedLimitsControllerTest.test_index_v21` | method | (self, mock_count, mock_proj, mock_kcount) | public | not declared | 1/33 | `src/nova/tests/unit/api/openstack/compute/test_limits.py:L464–L496` |
| `UnifiedLimitsControllerTest.test_index_v275` | method | (self, mock_count, mock_proj, mock_kcount) | public | not declared | 1/26 | `src/nova/tests/unit/api/openstack/compute/test_limits.py:L501–L526` |

## Dependencies

- `http`: imports `client as httplib` (src/nova/tests/unit/api/openstack/compute/test_limits.py:L20)
- `io`: imports `StringIO` (src/nova/tests/unit/api/openstack/compute/test_limits.py:L21)
- `unittest`: imports `mock` (src/nova/tests/unit/api/openstack/compute/test_limits.py:L22)
- `oslo_limit`: imports `fixture as limit_fixture` (src/nova/tests/unit/api/openstack/compute/test_limits.py:L24)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/api/openstack/compute/test_limits.py:L25)
- `oslo_utils`: imports `encodeutils` (src/nova/tests/unit/api/openstack/compute/test_limits.py:L26)
- `nova.api.openstack.compute`: imports `limits as limits_v21` (src/nova/tests/unit/api/openstack/compute/test_limits.py:L28)
- `nova.api.openstack.compute`: imports `views` (src/nova/tests/unit/api/openstack/compute/test_limits.py:L29)
- `nova.api.openstack`: imports `wsgi` (src/nova/tests/unit/api/openstack/compute/test_limits.py:L30)
- `import nova.context` (src/nova/tests/unit/api/openstack/compute/test_limits.py:L31)
- `nova`: imports `exception` (src/nova/tests/unit/api/openstack/compute/test_limits.py:L32)
- `nova.limit`: imports `local as local_limit` (src/nova/tests/unit/api/openstack/compute/test_limits.py:L33)
- `nova.limit`: imports `placement as placement_limit` (src/nova/tests/unit/api/openstack/compute/test_limits.py:L34)
- `nova`: imports `objects` (src/nova/tests/unit/api/openstack/compute/test_limits.py:L35)
- `nova.policies`: imports `limits as l_policies` (src/nova/tests/unit/api/openstack/compute/test_limits.py:L36)
- `nova`: imports `test` (src/nova/tests/unit/api/openstack/compute/test_limits.py:L37)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/api/openstack/compute/test_limits.py:L38)
- `nova.tests.unit`: imports `matchers` (src/nova/tests/unit/api/openstack/compute/test_limits.py:L39)

## Side Effects

- **network**: from nova.api.openstack.compute import limits as limits_v21 (src/nova/tests/unit/api/openstack/compute/test_limits.py:L28)
- **network**: from nova.api.openstack.compute import views (src/nova/tests/unit/api/openstack/compute/test_limits.py:L29)

