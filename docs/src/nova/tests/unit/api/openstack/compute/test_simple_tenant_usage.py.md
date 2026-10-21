# src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py

## Overview

This file implements the `test_simple_tenant_usage` module, defining 7 classs, 12 constants, 9 fields, 5 functions, 53 methods, 13 imports, 13 side effects.

Lines: total 628, code 495, comment 38, blank 95

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L33–L33` |
| `SERVERS` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L35–L35` |
| `TENANTS` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L36–L36` |
| `HOURS` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L37–L37` |
| `ROOT_GB` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L38–L38` |
| `EPHEMERAL_GB` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L39–L39` |
| `MEMORY_MB` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L40–L40` |
| `VCPUS` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L41–L41` |
| `NOW` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L42–L42` |
| `START` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L43–L43` |
| `STOP` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L44–L44` |
| `FAKE_FLAVOR` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L46–L64` |
| `_fake_instance` | function | (start, end, instance_id, tenant_id, vm_state=vm_states.ACTIVE) | unexported | `objects.Instance( deleted=False, id=instance_id, uuid=getattr(uuids, 'instance_%d' % instance_id), image_ref='1', project_id=tenant_id, user_id='fakeuser', display_name='name', instance_type_id=flavor` (src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L70) | 1/20 | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L67–L86` |
| `_fake_instance_deleted_flavorless` | function | (context, start, end, instance_id, tenant_id, vm_state=vm_states.ACTIVE) | unexported | `objects.Instance( context=context, deleted=instance_id, id=instance_id, uuid=getattr(uuids, 'instance_%d' % instance_id), image_ref='1', project_id=tenant_id, user_id='fakeuser', display_name='name', ` (src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L91) | 1/20 | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L89–L108` |
| `fake_get_active_deleted_flavorless` | function | (cls, context, begin, end=None, project_id=None, host=None, expected_attrs=None, use_slave=False, limit=None, marker=None) | exported | `objects.InstanceList(objects=instances)` (src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L131) | 5/17 | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L112–L131` |
| `fake_get_active_by_window_joined` | function | (cls, context, begin, end=None, project_id=None, host=None, expected_attrs=None, use_slave=False, limit=None, marker=None) | exported | `objects.InstanceList(objects=[ _fake_instance( START, STOP, x, project_id or getattr(uuids, 'faketenant_%s' % (x // SERVERS)) ) for x in range(TENANTS * SERVERS)])` (src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L139) | 3/9 | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L135–L143` |
| `SimpleTenantUsageTestV21` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L146–L402` |
| `SimpleTenantUsageTestV21.version` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L147–L147` |
| `SimpleTenantUsageTestV21.policy_rule_prefix` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L148–L148` |
| `SimpleTenantUsageTestV21.controller` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L149–L149` |
| `SimpleTenantUsageTestV21.setUp` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L151–L166` |
| `SimpleTenantUsageTestV21._test_verify_index` | method | (self, start, stop, limit=None) | private | not declared | 5/29 | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L168–L203` |
| `SimpleTenantUsageTestV21.test_verify_index_deleted_flavorless` | method | (self, mock_load) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L214–L217` |
| `SimpleTenantUsageTestV21.test_verify_index` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L221–L222` |
| `SimpleTenantUsageTestV21.test_verify_index_future_end_time` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L226–L228` |
| `SimpleTenantUsageTestV21.test_verify_show` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L230–L231` |
| `SimpleTenantUsageTestV21.test_verify_show_future_end_time` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L233–L235` |
| `SimpleTenantUsageTestV21._get_tenant_usages` | method | (self, detailed='') | private | `res_dict['tenant_usages']` (src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L263) | 1/13 | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L239–L263` |
| `SimpleTenantUsageTestV21._get_tenant_usages.fake_get_active_by_window_joined` | function | (context, begin, end=None, project_id=None, host=None, expected_attrs=None, use_slave=False, limit=None, marker=None) | public | `orig_get_active_by_window_joined(context, begin, end, project_id, host, expected_attrs, use_slave)` (src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L255) | — | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L250–L257` |
| `SimpleTenantUsageTestV21.test_verify_detailed_index` | method | (self) | public | not declared | 3/6 | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L265–L270` |
| `SimpleTenantUsageTestV21.test_verify_simple_index` | method | (self) | public | not declared | 2/4 | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L272–L275` |
| `SimpleTenantUsageTestV21.test_verify_simple_index_empty_param` | method | (self) | public | not declared | 2/4 | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L277–L281` |
| `SimpleTenantUsageTestV21._test_verify_show` | method | (self, start, stop, limit=None) | private | not declared | 6/30 | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L285–L321` |
| `SimpleTenantUsageTestV21.test_get_tenants_usage_with_bad_start_date` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L323–L331` |
| `SimpleTenantUsageTestV21.test_get_tenants_usage_with_invalid_start_date` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L333–L340` |
| `SimpleTenantUsageTestV21._test_get_tenants_usage_with_one_date` | method | (self, date_url_param) | private | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L342–L347` |
| `SimpleTenantUsageTestV21.test_get_tenants_usage_with_no_start_date` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L349–L351` |
| `SimpleTenantUsageTestV21.test_get_tenants_usage_with_no_end_date` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L353–L355` |
| `SimpleTenantUsageTestV21.test_index_additional_query_parameters` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L357–L362` |
| `SimpleTenantUsageTestV21._test_index_duplicate_query_parameters_validation` | method | (self, params) | private | not declared | 2/7 | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L364–L371` |
| `SimpleTenantUsageTestV21.test_index_duplicate_query_parameters_validation` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L373–L379` |
| `SimpleTenantUsageTestV21.test_show_additional_query_parameters` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L381–L386` |
| `SimpleTenantUsageTestV21._test_show_duplicate_query_parameters_validation` | method | (self, params) | private | not declared | 2/7 | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L388–L395` |
| `SimpleTenantUsageTestV21.test_show_duplicate_query_parameters_validation` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L397–L402` |
| `SimpleTenantUsageTestV40` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L405–L441` |
| `SimpleTenantUsageTestV40.version` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L406–L406` |
| `SimpleTenantUsageTestV40.test_next_links_show` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L410–L412` |
| `SimpleTenantUsageTestV40.test_next_links_index` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L416–L418` |
| `SimpleTenantUsageTestV40.test_index_duplicate_query_parameters_validation` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L422–L430` |
| `SimpleTenantUsageTestV40.test_show_duplicate_query_parameters_validation` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L434–L441` |
| `SimpleTenantUsageTestV2_75` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L444–L474` |
| `SimpleTenantUsageTestV2_75.version` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L445–L445` |
| `SimpleTenantUsageTestV2_75.test_index_additional_query_param_old_version` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L447–L452` |
| `SimpleTenantUsageTestV2_75.test_index_additional_query_parameters` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L454–L459` |
| `SimpleTenantUsageTestV2_75.test_show_additional_query_param_old_version` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L461–L466` |
| `SimpleTenantUsageTestV2_75.test_show_additional_query_parameters` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L468–L474` |
| `SimpleTenantUsageLimitsTestV21` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L477–L503` |
| `SimpleTenantUsageLimitsTestV21.version` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L478–L478` |
| `SimpleTenantUsageLimitsTestV21.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L480–L482` |
| `SimpleTenantUsageLimitsTestV21._get_request` | method | (self, url) | private | `fakes.HTTPRequest.blank(url, version=self.version)` (src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L486) | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L484–L486` |
| `SimpleTenantUsageLimitsTestV21.assert_limit` | method | (self, mock_get, limit) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L488–L491` |
| `SimpleTenantUsageLimitsTestV21.test_limit_defaults_to_conf_max_limit_show` | method | (self, mock_get) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L494–L497` |
| `SimpleTenantUsageLimitsTestV21.test_limit_defaults_to_conf_max_limit_index` | method | (self, mock_get) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L500–L503` |
| `SimpleTenantUsageLimitsTestV240` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L506–L569` |
| `SimpleTenantUsageLimitsTestV240.version` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L507–L507` |
| `SimpleTenantUsageLimitsTestV240.assert_limit_and_marker` | method | (self, mock_get, limit, marker) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L509–L513` |
| `SimpleTenantUsageLimitsTestV240.test_limit_and_marker_show` | method | (self, mock_get) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L516–L519` |
| `SimpleTenantUsageLimitsTestV240.test_limit_and_marker_index` | method | (self, mock_get) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L522–L525` |
| `SimpleTenantUsageLimitsTestV240.test_marker_not_found_show` | method | (self, mock_get) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L528–L532` |
| `SimpleTenantUsageLimitsTestV240.test_marker_not_found_index` | method | (self, mock_get) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L535–L539` |
| `SimpleTenantUsageLimitsTestV240.test_index_with_invalid_non_int_limit` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L541–L544` |
| `SimpleTenantUsageLimitsTestV240.test_index_with_invalid_string_limit` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L546–L549` |
| `SimpleTenantUsageLimitsTestV240.test_index_duplicate_query_with_invalid_string_limit` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L551–L554` |
| `SimpleTenantUsageLimitsTestV240.test_show_with_invalid_non_int_limit` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L556–L559` |
| `SimpleTenantUsageLimitsTestV240.test_show_with_invalid_string_limit` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L561–L564` |
| `SimpleTenantUsageLimitsTestV240.test_show_duplicate_query_with_invalid_string_limit` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L566–L569` |
| `SimpleTenantUsageControllerTestV21` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L572–L611` |
| `SimpleTenantUsageControllerTestV21.controller` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L573–L573` |
| `SimpleTenantUsageControllerTestV21.setUp` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L575–L582` |
| `SimpleTenantUsageControllerTestV21.test_get_flavor_from_non_deleted_with_id_fails` | method | (self, fake_get_flavor) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L586–L591` |
| `SimpleTenantUsageControllerTestV21.test_get_flavor_from_deleted_with_notfound` | method | (self, fake_get_flavor) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L595–L601` |
| `SimpleTenantUsageControllerTestV21.test_get_flavor_from_deleted_with_id_of_deleted` | method | (self, fake_get_flavor) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L605–L611` |
| `SimpleTenantUsageUtilsV21` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L614–L628` |
| `SimpleTenantUsageUtilsV21.simple_tenant_usage` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L615–L615` |
| `SimpleTenantUsageUtilsV21.test_valid_string` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L617–L622` |
| `SimpleTenantUsageUtilsV21.test_invalid_string` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L624–L628` |

## Dependencies

- `import datetime` (src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L16)
- `unittest`: imports `mock` (src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L17)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L19)
- `oslo_utils`: imports `timeutils` (src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L20)
- `import webob` (src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L21)
- `nova.api.openstack.compute`: imports `simple_tenant_usage as simple_tenant_usage_v21` (src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L23–L24)
- `nova.compute`: imports `vm_states` (src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L25)
- `import nova.conf` (src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L26)
- `nova`: imports `context` (src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L27)
- `nova`: imports `exception` (src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L28)
- `nova`: imports `objects` (src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L29)
- `nova`: imports `test` (src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L30)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L31)

## Side Effects

- **network**: from nova.api.openstack.compute import simple_tenant_usage as \ (src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L23)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L33)
- **global-mutation**: SERVERS = 5 (src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L35)
- **global-mutation**: TENANTS = 2 (src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L36)
- **global-mutation**: HOURS = 24 (src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L37)
- **global-mutation**: ROOT_GB = 10 (src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L38)
- **global-mutation**: EPHEMERAL_GB = 20 (src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L39)
- **global-mutation**: MEMORY_MB = 1024 (src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L40)
- **global-mutation**: VCPUS = 2 (src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L41)
- **global-mutation**: NOW = timeutils.utcnow() (src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L42)
- **global-mutation**: START = NOW - datetime.timedelta(hours=HOURS) (src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L43)
- **global-mutation**: STOP = NOW (src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L44)
- **global-mutation**: FAKE_FLAVOR = { (src/nova/tests/unit/api/openstack/compute/test_simple_tenant_usage.py:L46)

