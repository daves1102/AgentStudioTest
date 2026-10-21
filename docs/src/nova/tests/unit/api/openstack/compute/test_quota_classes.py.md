# src/nova/tests/unit/api/openstack/compute/test_quota_classes.py

## Overview

This file implements the `test_quota_classes` module, defining 5 classs, 10 fields, 27 methods, 11 imports, 1 side effect, 15 security surface entries.

Lines: total 382, code 319, comment 18, blank 45

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `QuotaClassSetsTestV21` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_quota_classes.py:L32–L130` |
| `QuotaClassSetsTestV21.validation_error` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_quota_classes.py:L33–L33` |
| `QuotaClassSetsTestV21.api_version` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_quota_classes.py:L34–L34` |
| `QuotaClassSetsTestV21.quota_resources` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_quota_classes.py:L35–L42` |
| `QuotaClassSetsTestV21.filtered_quotas` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_quota_classes.py:L43–L43` |
| `QuotaClassSetsTestV21.quota_set` | method | (self, class_name) | public | `{'quota_class_set': quotas}` (src/nova/tests/unit/api/openstack/compute/test_quota_classes.py:L48) | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_quota_classes.py:L45–L48` |
| `QuotaClassSetsTestV21.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_quota_classes.py:L50–L53` |
| `QuotaClassSetsTestV21._setup` | method | (self) | private | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_quota_classes.py:L55–L56` |
| `QuotaClassSetsTestV21._check_filtered_extended_quota` | method | (self, quota_set) | private | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_quota_classes.py:L58–L64` |
| `QuotaClassSetsTestV21.test_format_quota_set` | method | (self) | public | not declared | 4/12 | `src/nova/tests/unit/api/openstack/compute/test_quota_classes.py:L66–L78` |
| `QuotaClassSetsTestV21.test_quotas_show` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_quota_classes.py:L80–L83` |
| `QuotaClassSetsTestV21.test_quotas_update` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_quota_classes.py:L85–L94` |
| `QuotaClassSetsTestV21.test_quotas_update_with_empty_body` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_quota_classes.py:L96–L99` |
| `QuotaClassSetsTestV21.test_quotas_update_with_invalid_integer` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_quota_classes.py:L101–L104` |
| `QuotaClassSetsTestV21.test_quotas_update_with_long_quota_class_name` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_quota_classes.py:L106–L110` |
| `QuotaClassSetsTestV21.test_quotas_update_with_non_integer` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_quota_classes.py:L112–L124` |
| `QuotaClassSetsTestV21.test_quotas_update_with_unsupported_quota_class` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_quota_classes.py:L126–L130` |
| `QuotaClassSetsTestV250` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_quota_classes.py:L133–L155` |
| `QuotaClassSetsTestV250.api_version` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_quota_classes.py:L134–L134` |
| `QuotaClassSetsTestV250.quota_resources` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_quota_classes.py:L135–L142` |
| `QuotaClassSetsTestV250.filtered_quotas` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_quota_classes.py:L143–L143` |
| `QuotaClassSetsTestV250._check_filtered_extended_quota` | method | (self, quota_set) | private | not declared | 2/5 | `src/nova/tests/unit/api/openstack/compute/test_quota_classes.py:L145–L149` |
| `QuotaClassSetsTestV250.test_quotas_update_with_filtered_quota` | method | (self) | public | not declared | 2/5 | `src/nova/tests/unit/api/openstack/compute/test_quota_classes.py:L151–L155` |
| `QuotaClassSetsTestV257` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_quota_classes.py:L158–L165` |
| `QuotaClassSetsTestV257.api_version` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_quota_classes.py:L159–L159` |
| `QuotaClassSetsTestV257.setUp` | method | (self) | public | not declared | 2/5 | `src/nova/tests/unit/api/openstack/compute/test_quota_classes.py:L161–L165` |
| `NoopQuotaClassesTest` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_quota_classes.py:L168–L265` |
| `NoopQuotaClassesTest.quota_driver` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_quota_classes.py:L169–L169` |
| `NoopQuotaClassesTest.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_quota_classes.py:L171–L174` |
| `NoopQuotaClassesTest.test_show_v21` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/api/openstack/compute/test_quota_classes.py:L176–L196` |
| `NoopQuotaClassesTest.test_show_v257` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/api/openstack/compute/test_quota_classes.py:L198–L213` |
| `NoopQuotaClassesTest.test_update_v21_still_rejects_badrequests` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_quota_classes.py:L215–L220` |
| `NoopQuotaClassesTest.test_update_v21` | method | (self, mock_update) | public | not declared | 1/23 | `src/nova/tests/unit/api/openstack/compute/test_quota_classes.py:L223–L245` |
| `NoopQuotaClassesTest.test_update_v257` | method | (self, mock_update) | public | not declared | 1/18 | `src/nova/tests/unit/api/openstack/compute/test_quota_classes.py:L248–L265` |
| `UnifiedLimitsQuotaClassesTest` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_quota_classes.py:L268–L382` |
| `UnifiedLimitsQuotaClassesTest.quota_driver` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_quota_classes.py:L269–L269` |
| `UnifiedLimitsQuotaClassesTest.setUp` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_quota_classes.py:L271–L283` |
| `UnifiedLimitsQuotaClassesTest.test_show_v21` | method | (self, mock_default) | public | not declared | 1/22 | `src/nova/tests/unit/api/openstack/compute/test_quota_classes.py:L286–L307` |
| `UnifiedLimitsQuotaClassesTest.test_show_v257` | method | (self, mock_default) | public | not declared | 1/17 | `src/nova/tests/unit/api/openstack/compute/test_quota_classes.py:L310–L326` |
| `UnifiedLimitsQuotaClassesTest.test_update_still_rejects_badrequests` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_quota_classes.py:L328–L333` |
| `UnifiedLimitsQuotaClassesTest.test_update_v21` | method | (self, mock_update, mock_default) | public | not declared | 1/23 | `src/nova/tests/unit/api/openstack/compute/test_quota_classes.py:L337–L360` |
| `UnifiedLimitsQuotaClassesTest.test_update_v257` | method | (self, mock_update, mock_default) | public | not declared | 1/18 | `src/nova/tests/unit/api/openstack/compute/test_quota_classes.py:L364–L382` |

## Dependencies

- `import copy` (src/nova/tests/unit/api/openstack/compute/test_quota_classes.py:L16)
- `unittest`: imports `mock` (src/nova/tests/unit/api/openstack/compute/test_quota_classes.py:L17)
- `oslo_limit`: imports `fixture as limit_fixture` (src/nova/tests/unit/api/openstack/compute/test_quota_classes.py:L19)
- `import webob` (src/nova/tests/unit/api/openstack/compute/test_quota_classes.py:L20)
- `nova.api.openstack.compute`: imports `quota_classes as quota_classes_v21` (src/nova/tests/unit/api/openstack/compute/test_quota_classes.py:L22–L23)
- `nova`: imports `exception` (src/nova/tests/unit/api/openstack/compute/test_quota_classes.py:L24)
- `nova.limit`: imports `local as local_limit` (src/nova/tests/unit/api/openstack/compute/test_quota_classes.py:L25)
- `nova.limit`: imports `placement as placement_limit` (src/nova/tests/unit/api/openstack/compute/test_quota_classes.py:L26)
- `nova`: imports `objects` (src/nova/tests/unit/api/openstack/compute/test_quota_classes.py:L27)
- `nova`: imports `test` (src/nova/tests/unit/api/openstack/compute/test_quota_classes.py:L28)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/api/openstack/compute/test_quota_classes.py:L29)

## Side Effects

- **network**: from nova.api.openstack.compute import quota_classes \ (src/nova/tests/unit/api/openstack/compute/test_quota_classes.py:L22)

## Security Surface

- **sink** (`db-write`): res_dict = self.controller.update(self.req, 'default', (src/nova/tests/unit/api/openstack/compute/test_quota_classes.py:L91)
- **sink** (`db-write`): self.assertRaises(self.validation_error, self.controller.update, (src/nova/tests/unit/api/openstack/compute/test_quota_classes.py:L98)
- **sink** (`db-write`): self.assertRaises(self.validation_error, self.controller.update, (src/nova/tests/unit/api/openstack/compute/test_quota_classes.py:L103)
- **sink** (`db-write`): self.assertRaises(webob.exc.HTTPBadRequest, self.controller.update, (src/nova/tests/unit/api/openstack/compute/test_quota_classes.py:L109)
- **sink** (`db-write`): self.assertRaises(self.validation_error, self.controller.update, (src/nova/tests/unit/api/openstack/compute/test_quota_classes.py:L114)
- **sink** (`db-write`): self.assertRaises(self.validation_error, self.controller.update, (src/nova/tests/unit/api/openstack/compute/test_quota_classes.py:L118)
- **sink** (`db-write`): self.assertRaises(self.validation_error, self.controller.update, (src/nova/tests/unit/api/openstack/compute/test_quota_classes.py:L123)
- **sink** (`db-write`): self.assertRaises(self.validation_error, self.controller.update, (src/nova/tests/unit/api/openstack/compute/test_quota_classes.py:L129)
- **sink** (`db-write`): self.assertRaises(self.validation_error, self.controller.update, (src/nova/tests/unit/api/openstack/compute/test_quota_classes.py:L154)
- **sink** (`db-write`): self.assertRaises(exception.ValidationError, self.controller.update, (src/nova/tests/unit/api/openstack/compute/test_quota_classes.py:L219)
- **sink** (`db-write`): response = self.controller.update(req, 'default', body=body) (src/nova/tests/unit/api/openstack/compute/test_quota_classes.py:L226)
- **sink** (`db-write`): response = self.controller.update(req, 'default', body=body) (src/nova/tests/unit/api/openstack/compute/test_quota_classes.py:L251)
- **sink** (`db-write`): self.assertRaises(exception.ValidationError, self.controller.update, (src/nova/tests/unit/api/openstack/compute/test_quota_classes.py:L332)
- **sink** (`db-write`): response = self.controller.update(req, 'default', body=body) (src/nova/tests/unit/api/openstack/compute/test_quota_classes.py:L341)
- **sink** (`db-write`): response = self.controller.update(req, 'default', body=body) (src/nova/tests/unit/api/openstack/compute/test_quota_classes.py:L368)

