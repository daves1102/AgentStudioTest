# src/nova/tests/unit/api/openstack/compute/test_server_group_quotas.py

## Overview

This file implements the `test_server_group_quotas` module, defining 3 classs, 1 constant, 3 functions, 18 methods, 13 imports, 2 side effects.

Lines: total 283, code 210, comment 29, blank 44

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_group_quotas.py:L33–L33` |
| `AttrDict` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_group_quotas.py:L36–L38` |
| `AttrDict.__getattr__` | method | (self, k) | public | `self[k]` (src/nova/tests/unit/api/openstack/compute/test_server_group_quotas.py:L38) | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_server_group_quotas.py:L37–L38` |
| `server_group_template` | function | (**kwargs) | exported | `sgroup` (src/nova/tests/unit/api/openstack/compute/test_server_group_quotas.py:L44) | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_server_group_quotas.py:L41–L44` |
| `server_group_db` | function | (sg) | exported | `AttrDict(attrs)` (src/nova/tests/unit/api/openstack/compute/test_server_group_quotas.py:L75) | 7/28 | `src/nova/tests/unit/api/openstack/compute/test_server_group_quotas.py:L47–L75` |
| `ServerGroupQuotasTestV21` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_group_quotas.py:L78–L203` |
| `ServerGroupQuotasTestV21.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_server_group_quotas.py:L80–L83` |
| `ServerGroupQuotasTestV21._setup_controller` | method | (self) | private | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_server_group_quotas.py:L85–L86` |
| `ServerGroupQuotasTestV21._setup_quotas` | method | (self) | private | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_server_group_quotas.py:L88–L89` |
| `ServerGroupQuotasTestV21._assert_server_groups_in_use` | method | (self, project_id, user_id, in_use) | private | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_server_group_quotas.py:L91–L96` |
| `ServerGroupQuotasTestV21.test_create_server_group_normal` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/compute/test_server_group_quotas.py:L98–L107` |
| `ServerGroupQuotasTestV21.test_create_server_group_quota_limit` | method | (self) | public | not declared | 2/10 | `src/nova/tests/unit/api/openstack/compute/test_server_group_quotas.py:L109–L121` |
| `ServerGroupQuotasTestV21._test_create_server_group_during_recheck` | method | (self, mock_method) | private | `e` (src/nova/tests/unit/api/openstack/compute/test_server_group_quotas.py:L132) | 1/10 | `src/nova/tests/unit/api/openstack/compute/test_server_group_quotas.py:L123–L132` |
| `ServerGroupQuotasTestV21.test_create_server_group_during_recheck` | method | (self, mock_check) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_server_group_quotas.py:L135–L145` |
| `ServerGroupQuotasTestV21._test_create_server_group_recheck_disabled` | method | (self) | private | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_server_group_quotas.py:L147–L153` |
| `ServerGroupQuotasTestV21.test_create_server_group_recheck_disabled` | method | (self, mock_check) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_server_group_quotas.py:L156–L160` |
| `ServerGroupQuotasTestV21.test_delete_server_group_by_admin` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/api/openstack/compute/test_server_group_quotas.py:L162–L180` |
| `ServerGroupQuotasTestV21.test_delete_server_group_by_id` | method | (self, mock_destroy) | public | not declared | 2/13 | `src/nova/tests/unit/api/openstack/compute/test_server_group_quotas.py:L183–L203` |
| `ServerGroupQuotasTestV21.test_delete_server_group_by_id.return_server_group` | function | (_cls, context, group_id) | public | `objects.InstanceGroup(**server_group_db(sg))` (src/nova/tests/unit/api/openstack/compute/test_server_group_quotas.py:L189) | — | `src/nova/tests/unit/api/openstack/compute/test_server_group_quotas.py:L187–L189` |
| `ServerGroupQuotasUnifiedLimitsTestV21` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_server_group_quotas.py:L206–L283` |
| `ServerGroupQuotasUnifiedLimitsTestV21.setUp` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_server_group_quotas.py:L208–L215` |
| `ServerGroupQuotasUnifiedLimitsTestV21.test_create_server_group_during_recheck` | method | (self, mock_enforce) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_server_group_quotas.py:L218–L230` |
| `ServerGroupQuotasUnifiedLimitsTestV21.test_create_server_group_recheck_disabled` | method | (self, mock_enforce) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_server_group_quotas.py:L233–L239` |
| `ServerGroupQuotasUnifiedLimitsTestV21.test_create_group_fails_with_zero_quota` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/compute/test_server_group_quotas.py:L241–L251` |
| `ServerGroupQuotasUnifiedLimitsTestV21.test_create_only_one_group_when_limit_is_one` | method | (self) | public | not declared | 1/24 | `src/nova/tests/unit/api/openstack/compute/test_server_group_quotas.py:L253–L283` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/api/openstack/compute/test_server_group_quotas.py:L16)
- `oslo_config`: imports `cfg` (src/nova/tests/unit/api/openstack/compute/test_server_group_quotas.py:L18)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/api/openstack/compute/test_server_group_quotas.py:L19)
- `oslo_utils`: imports `uuidutils` (src/nova/tests/unit/api/openstack/compute/test_server_group_quotas.py:L20)
- `import webob` (src/nova/tests/unit/api/openstack/compute/test_server_group_quotas.py:L21)
- `nova.api.openstack.compute`: imports `server_groups as sg_v21` (src/nova/tests/unit/api/openstack/compute/test_server_group_quotas.py:L23)
- `nova`: imports `context` (src/nova/tests/unit/api/openstack/compute/test_server_group_quotas.py:L24)
- `nova`: imports `exception` (src/nova/tests/unit/api/openstack/compute/test_server_group_quotas.py:L25)
- `nova.limit`: imports `local as local_limit` (src/nova/tests/unit/api/openstack/compute/test_server_group_quotas.py:L26)
- `nova`: imports `objects` (src/nova/tests/unit/api/openstack/compute/test_server_group_quotas.py:L27)
- `nova`: imports `test` (src/nova/tests/unit/api/openstack/compute/test_server_group_quotas.py:L28)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/unit/api/openstack/compute/test_server_group_quotas.py:L29)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/api/openstack/compute/test_server_group_quotas.py:L30)

## Side Effects

- **network**: from nova.api.openstack.compute import server_groups as sg_v21 (src/nova/tests/unit/api/openstack/compute/test_server_group_quotas.py:L23)
- **global-mutation**: CONF = cfg.CONF (src/nova/tests/unit/api/openstack/compute/test_server_group_quotas.py:L33)

