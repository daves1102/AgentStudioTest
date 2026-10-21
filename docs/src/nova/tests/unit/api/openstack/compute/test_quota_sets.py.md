# src/nova/tests/unit/api/openstack/compute/test_quota_sets.py

## Overview

This file implements the `test_quota_sets` module, defining 9 classs, 12 fields, 1 function, 72 methods, 13 imports, 2 side effects, 36 security surface entries.

Lines: total 1102, code 938, comment 35, blank 129

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `quota_set` | function | (id, include_server_group_quotas=True) | exported | `res` (src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L46) | 2/13 | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L34–L46` |
| `BaseQuotaSetsTest` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L49–L60` |
| `BaseQuotaSetsTest.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L51–L60` |
| `QuotaSetsTestV21` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L63–L324` |
| `QuotaSetsTestV21.validation_error` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L64–L64` |
| `QuotaSetsTestV21.include_server_group_quotas` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L65–L65` |
| `QuotaSetsTestV21.setUp` | method | (self) | public | not declared | 2/19 | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L67–L85` |
| `QuotaSetsTestV21._get_http_request` | method | (self, url='') | private | `fakes.HTTPRequest.blank(url)` (src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L88) | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L87–L88` |
| `QuotaSetsTestV21.test_format_quota_set` | method | (self) | public | not declared | 2/20 | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L90–L110` |
| `QuotaSetsTestV21.test_validate_quota_limit` | method | (self) | public | not declared | 1/28 | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L112–L159` |
| `QuotaSetsTestV21.test_quotas_defaults` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L161–L169` |
| `QuotaSetsTestV21.test_quotas_show` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L171–L178` |
| `QuotaSetsTestV21.test_quotas_update` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L180–L188` |
| `QuotaSetsTestV21.test_quotas_update_with_good_data` | method | (self, mock_createlimit) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L191–L197` |
| `QuotaSetsTestV21.test_quotas_update_with_bad_data` | method | (self, mock_createlimit, mock_validate) | public | not declared | 1/13 | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L201–L213` |
| `QuotaSetsTestV21.test_quotas_update_zero_value` | method | (self) | public | not declared | 2/16 | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L215–L231` |
| `QuotaSetsTestV21._quotas_update_bad_request_case` | method | (self, body) | private | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L233–L236` |
| `QuotaSetsTestV21.test_quotas_update_invalid_key` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L238–L243` |
| `QuotaSetsTestV21.test_quotas_update_invalid_limit` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L245–L250` |
| `QuotaSetsTestV21.test_quotas_update_empty_body` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L252–L254` |
| `QuotaSetsTestV21.test_quotas_update_invalid_value_non_int` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L256–L262` |
| `QuotaSetsTestV21.test_quotas_update_invalid_value_with_float` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L264–L270` |
| `QuotaSetsTestV21.test_quotas_update_invalid_value_with_unicode` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L272–L278` |
| `QuotaSetsTestV21.test_quotas_delete` | method | (self, mock_destroy_all_by_project) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L281–L286` |
| `QuotaSetsTestV21.test_duplicate_quota_filter` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L288–L294` |
| `QuotaSetsTestV21.test_quota_filter_negative_int_as_string` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L296–L301` |
| `QuotaSetsTestV21.test_quota_filter_int_as_string` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L303–L308` |
| `QuotaSetsTestV21.test_unknown_quota_filter` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L310–L316` |
| `QuotaSetsTestV21.test_quota_additional_filter` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L318–L324` |
| `ExtendedQuotasTestV21` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L327–L409` |
| `ExtendedQuotasTestV21.fake_quotas` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L328–L345` |
| `ExtendedQuotasTestV21.fake_get_quotas` | method | (self, context, id, user_id=None, usages=False) | public | `self.fake_quotas` (src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L349); `{k: v['limit'] for k, v in self.fake_quotas.items()}` (src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L351) | 3/5 | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L347–L351` |
| `ExtendedQuotasTestV21.fake_get_settable_quotas` | method | (self, context, project_id, user_id=None) | public | `{ k: { 'minimum': v['in_use'] + v['reserved'], 'maximum': -1, } for k, v in self.fake_quotas.items() }` (src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L354) | 2/7 | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L353–L359` |
| `ExtendedQuotasTestV21._get_http_request` | method | (self, url='') | private | `fakes.HTTPRequest.blank(url)` (src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L362) | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L361–L362` |
| `ExtendedQuotasTestV21.test_quotas_update_exceed_in_used` | method | (self, get_settable_quotas) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L365–L371` |
| `ExtendedQuotasTestV21.test_quotas_force_update_exceed_in_used` | method | (self, get_settable_quotas) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L374–L383` |
| `ExtendedQuotasTestV21.test_quotas_update_good_data` | method | (self, mock_createlimit) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L386–L394` |
| `ExtendedQuotasTestV21.test_quotas_update_bad_data` | method | (self, mock_gsq, mock_createlimit) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L398–L409` |
| `UserQuotasTestV21` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L412–L486` |
| `UserQuotasTestV21.plugin` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L413–L413` |
| `UserQuotasTestV21.include_server_group_quotas` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L414–L414` |
| `UserQuotasTestV21._get_http_request` | method | (self, url='') | private | `fakes.HTTPRequest.blank(url)` (src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L417) | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L416–L417` |
| `UserQuotasTestV21.test_user_quotas_show` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L419–L425` |
| `UserQuotasTestV21.test_user_quotas_update` | method | (self) | public | not declared | 2/17 | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L427–L445` |
| `UserQuotasTestV21.test_user_quotas_update_exceed_project` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L447–L453` |
| `UserQuotasTestV21.test_user_quotas_delete` | method | (self, mock_destroy_all_by_project_and_user) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L456–L463` |
| `UserQuotasTestV21.test_user_quotas_update_good_data` | method | (self, mock_createlimit) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L466–L474` |
| `UserQuotasTestV21.test_user_quotas_update_bad_data` | method | (self, mock_createlimit) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L477–L486` |
| `QuotaSetsTestV236` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L489–L583` |
| `QuotaSetsTestV236.microversion` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L490–L490` |
| `QuotaSetsTestV236.setUp` | method | (self) | public | not declared | 1/40 | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L492–L532` |
| `QuotaSetsTestV236.test_quotas_show_filtered` | method | (self) | public | not declared | 3/7 | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L534–L541` |
| `QuotaSetsTestV236.test_quotas_default_filtered` | method | (self) | public | not declared | 3/7 | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L543–L550` |
| `QuotaSetsTestV236.test_quotas_detail_filtered` | method | (self) | public | not declared | 3/7 | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L552–L559` |
| `QuotaSetsTestV236.test_quotas_update_input_filtered` | method | (self) | public | not declared | 3/9 | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L561–L570` |
| `QuotaSetsTestV236.test_quotas_update_output_filtered` | method | (self) | public | not declared | 3/11 | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L572–L583` |
| `QuotaSetsTestV257` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L586–L591` |
| `QuotaSetsTestV257.microversion` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L587–L587` |
| `QuotaSetsTestV257.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L589–L591` |
| `QuotaSetsTestV275` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L594–L632` |
| `QuotaSetsTestV275.microversion` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L595–L595` |
| `QuotaSetsTestV275.test_quota_additional_filter_older_version` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L597–L604` |
| `QuotaSetsTestV275.test_quota_update_additional_filter` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L606–L611` |
| `QuotaSetsTestV275.test_quota_show_additional_filter` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L613–L618` |
| `QuotaSetsTestV275.test_quota_detail_additional_filter` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L620–L625` |
| `QuotaSetsTestV275.test_quota_delete_additional_filter` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L627–L632` |
| `NoopQuotaSetsTest` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L635–L831` |
| `NoopQuotaSetsTest.quota_driver` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L636–L636` |
| `NoopQuotaSetsTest.expected_detail` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L637–L637` |
| `NoopQuotaSetsTest.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L639–L642` |
| `NoopQuotaSetsTest.test_show_v21` | method | (self) | public | not declared | 1/23 | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L644–L666` |
| `NoopQuotaSetsTest.test_show_v257` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L668–L681` |
| `NoopQuotaSetsTest.test_detail_v21` | method | (self) | public | not declared | 1/23 | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L683–L706` |
| `NoopQuotaSetsTest.test_detail_v21_user` | method | (self) | public | not declared | 1/23 | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L708–L730` |
| `NoopQuotaSetsTest.test_update_still_rejects_badrequests` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L732–L737` |
| `NoopQuotaSetsTest.test_update_v21` | method | (self, mock_create) | public | not declared | 1/26 | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L740–L765` |
| `NoopQuotaSetsTest.test_update_v21_user` | method | (self, mock_create) | public | not declared | 1/26 | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L768–L793` |
| `NoopQuotaSetsTest.test_defaults_v21` | method | (self) | public | not declared | 1/23 | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L795–L817` |
| `NoopQuotaSetsTest.test_quotas_delete` | method | (self, mock_destroy_all_by_project) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L820–L824` |
| `NoopQuotaSetsTest.test_user_quotas_delete` | method | (self, mock_destroy_all_by_user) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L827–L831` |
| `UnifiedLimitsQuotaSetsTest` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L834–L1102` |
| `UnifiedLimitsQuotaSetsTest.quota_driver` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L835–L835` |
| `UnifiedLimitsQuotaSetsTest.expected_detail` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L837–L837` |
| `UnifiedLimitsQuotaSetsTest.setUp` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L839–L849` |
| `UnifiedLimitsQuotaSetsTest.test_show_v21` | method | (self, mock_proj) | public | not declared | 1/24 | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L852–L875` |
| `UnifiedLimitsQuotaSetsTest.test_show_v257` | method | (self, mock_proj) | public | not declared | 1/15 | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L878–L892` |
| `UnifiedLimitsQuotaSetsTest.test_detail_v21` | method | (self, mock_count, mock_proj, mock_kcount) | public | not declared | 1/36 | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L897–L932` |
| `UnifiedLimitsQuotaSetsTest.test_detail_v21_user` | method | (self, mock_count, mock_proj, mock_kcount) | public | not declared | 1/36 | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L937–L972` |
| `UnifiedLimitsQuotaSetsTest.test_update_v21` | method | (self, mock_create, mock_proj) | public | not declared | 1/25 | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L976–L1001` |
| `UnifiedLimitsQuotaSetsTest.test_update_v21_user` | method | (self, mock_create, mock_proj) | public | not declared | 1/25 | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L1005–L1029` |
| `UnifiedLimitsQuotaSetsTest.test_defaults_v21` | method | (self, mock_default) | public | not declared | 1/24 | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L1032–L1055` |
| `UnifiedLimitsQuotaSetsTest.test_defaults_v21_different_limit_values` | method | (self) | public | not declared | 1/31 | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L1057–L1088` |
| `UnifiedLimitsQuotaSetsTest.test_quotas_delete` | method | (self, mock_destroy_all_by_project) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L1091–L1095` |
| `UnifiedLimitsQuotaSetsTest.test_user_quotas_delete` | method | (self, mock_destroy_all_by_user) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L1098–L1102` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L17)
- `oslo_limit`: imports `fixture as limit_fixture` (src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L19)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L20)
- `import webob` (src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L21)
- `nova.api.openstack.compute`: imports `quota_sets` (src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L23)
- `nova.db`: imports `constants as db_const` (src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L24)
- `nova`: imports `exception` (src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L25)
- `nova.limit`: imports `local as local_limit` (src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L26)
- `nova.limit`: imports `placement as placement_limit` (src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L27)
- `nova`: imports `objects` (src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L28)
- `nova`: imports `quota` (src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L29)
- `nova`: imports `test` (src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L30)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L31)

## Side Effects

- **network**: from nova.api.openstack.compute import quota_sets (src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L23)
- **network**: self.stub_out('nova.api.openstack.identity.verify_project_id', (src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L59)

## Security Surface

- **sink** (`db-write`): self.default_quotas.update({'id': fakes.FAKE_PROJECT_ID}) (src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L166)
- **sink** (`db-write`): self.default_quotas.update({ (src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L181)
- **sink** (`db-write`): res_dict = self.controller.update(req, 'update_me', body=body) (src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L187)
- **sink** (`db-write`): self.default_quotas.update({}) (src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L192)
- **sink** (`db-write`): self.controller.update(req, 'update_me', body=body) (src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L195)
- **sink** (`db-write`): self.default_quotas.update({ (src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L204)
- **sink** (`db-write`): self.assertRaises(webob.exc.HTTPBadRequest, self.controller.update, (src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L210)
- **sink** (`db-write`): res_dict = self.controller.update(req, 'update_me', body=body) (src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L230)
- **sink** (`db-write`): self.assertRaises(self.validation_error, self.controller.update, (src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L235)
- **sink** (`db-write`): self.default_quotas.update({ (src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L258)
- **sink** (`db-write`): self.default_quotas.update({ (src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L266)
- **sink** (`db-write`): self.default_quotas.update({ (src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L274)
- **sink** (`db-write`): self.controller.update(req, uuids.project_id, body={'quota_set': {}}) (src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L292)
- **sink** (`db-write`): self.controller.update(req, uuids.project_id, body={'quota_set': {}}) (src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L299)
- **sink** (`db-write`): self.controller.update(req, uuids.project_id, body={'quota_set': {}}) (src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L306)
- **sink** (`db-write`): self.controller.update(req, uuids.project_id, body={'quota_set': {}}) (src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L314)
- **sink** (`db-write`): self.controller.update(req, uuids.project_id, body={'quota_set': {}}) (src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L322)
- **sink** (`db-write`): self.assertRaises(webob.exc.HTTPBadRequest, self.controller.update, (src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L370)
- **sink** (`db-write`): self.controller.update(req, 'update_me', body=body) (src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L383)
- **sink** (`db-write`): self.controller.update(req, 'update_me', body=body) (src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L392)
- **sink** (`db-write`): self.assertRaises(webob.exc.HTTPBadRequest, self.controller.update, (src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L406)
- **sink** (`db-write`): res_dict = self.controller.update(req, 'update_me', body=body) (src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L443)
- **sink** (`db-write`): self.assertRaises(webob.exc.HTTPBadRequest, self.controller.update, (src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L452)
- **sink** (`db-write`): self.controller.update(req, 'update_me', body=body) (src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L472)
- **sink** (`db-write`): self.assertRaises(webob.exc.HTTPBadRequest, self.controller.update, (src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L483)
- **sink** (`db-write`): self.controller.update( (src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L562)
- **sink** (`db-write`): self.controller.update, self.req, uuids.project_id, (src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L569)
- **sink** (`db-write`): res_dict = self.controller.update( (src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L573)
- **sink** (`db-write`): res_dict = self.controller.update( (src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L579)
- **sink** (`db-write`): self.controller.update(req, uuids.project_id, body={'quota_set': {}}) (src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L602)
- **sink** (`db-write`): self.assertRaises(exception.ValidationError, self.controller.update, (src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L610)
- **sink** (`db-write`): self.assertRaises(exception.ValidationError, self.controller.update, (src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L736)
- **sink** (`db-write`): response = self.controller.update(req, uuids.project_id, body=body) (src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L743)
- **sink** (`db-write`): response = self.controller.update(req, uuids.project_id, body=body) (src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L771)
- **sink** (`db-write`): response = self.controller.update(req, uuids.project_id, body=body) (src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L981)
- **sink** (`db-write`): response = self.controller.update(req, uuids.project_id, body=body) (src/nova/tests/unit/api/openstack/compute/test_quota_sets.py:L1009)

