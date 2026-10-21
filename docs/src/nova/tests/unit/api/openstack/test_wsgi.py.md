# src/nova/tests/unit/api/openstack/test_wsgi.py

## Overview

This file implements the `test_wsgi` module, defining 52 classs, 1 field, 1 function, 127 methods, 11 imports, 5 side effects, 46 security surface entries.

Lines: total 974, code 769, comment 30, blank 175

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `MicroversionedTest` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L28–L43` |
| `MicroversionedTest.scenarios` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L30–L37` |
| `MicroversionedTest._make_microversion_header` | method | (self, value) | private | `{self.header_name: value}` (src/nova/tests/unit/api/openstack/test_wsgi.py:L41); `{self.header_name: 'compute %s' % value}` (src/nova/tests/unit/api/openstack/test_wsgi.py:L43) | 2/5 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L39–L43` |
| `RequestTest` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L46–L165` |
| `RequestTest.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L48–L52` |
| `RequestTest.test_content_type_missing` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L54–L57` |
| `RequestTest.test_content_type_unsupported` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L59–L64` |
| `RequestTest.test_content_type_with_charset` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L66–L70` |
| `RequestTest.test_content_type_accept_default` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L72–L76` |
| `RequestTest.test_content_type_accept_with_quality_values` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L78–L84` |
| `RequestTest.test_from_request` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L86–L90` |
| `RequestTest.test_asterisk` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L92–L102` |
| `RequestTest.test_asterisk_followed_by_other_language` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L104–L108` |
| `RequestTest.test_truncate` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L110–L114` |
| `RequestTest.test_secondary` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L116–L120` |
| `RequestTest.test_none_found` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L122–L126` |
| `RequestTest.test_no_lang_header` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L128–L132` |
| `RequestTest.test_api_version_request_header_none` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L134–L138` |
| `RequestTest.test_api_version_request_header` | method | (self, mock_maxver) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L141–L148` |
| `RequestTest.test_api_version_request_header_latest` | method | (self, mock_maxver) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L151–L158` |
| `RequestTest.test_api_version_request_header_invalid` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L160–L165` |
| `ActionDispatcherTest` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L168–L184` |
| `ActionDispatcherTest.test_dispatch` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L169–L172` |
| `ActionDispatcherTest.test_dispatch_action_None` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L174–L178` |
| `ActionDispatcherTest.test_dispatch_default` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L180–L184` |
| `JSONDictSerializerTest` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L187–L194` |
| `JSONDictSerializerTest.test_json` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L188–L194` |
| `JSONDeserializerTest` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L197–L246` |
| `JSONDeserializerTest.test_json` | method | (self) | public | not declared | 1/20 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L198–L217` |
| `JSONDeserializerTest.test_json_valid_utf8` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L219–L235` |
| `JSONDeserializerTest.test_json_invalid_utf8` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L237–L246` |
| `ResourceTest` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L249–L781` |
| `ResourceTest.get_req_id_header_name` | method | (self, request) | public | `header_name` (src/nova/tests/unit/api/openstack/test_wsgi.py:L256) | 2/5 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L251–L256` |
| `ResourceTest.test_resource_receives_api_version_request_default` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L258–L271` |
| `ResourceTest.test_resource_receives_api_version_request_default.Controller` | class | — | public | not declared | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L259–L265` |
| `ResourceTest.test_resource_receives_api_version_request_default.Controller.index` | method | (self, req) | public | `'success'` (src/nova/tests/unit/api/openstack/test_wsgi.py:L265) | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L260–L265` |
| `ResourceTest.test_resource_receives_api_version_request` | method | (self, mock_maxver) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L274–L290` |
| `ResourceTest.test_resource_receives_api_version_request.Controller` | class | — | public | not declared | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L278–L283` |
| `ResourceTest.test_resource_receives_api_version_request.Controller.index` | method | (self, req) | public | `'success'` (src/nova/tests/unit/api/openstack/test_wsgi.py:L283) | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L279–L283` |
| `ResourceTest.test_resource_receives_api_version_request_invalid` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L292–L303` |
| `ResourceTest.test_resource_receives_api_version_request_invalid.Controller` | class | — | public | not declared | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L295–L297` |
| `ResourceTest.test_resource_receives_api_version_request_invalid.Controller.index` | method | (self, req) | public | `'success'` (src/nova/tests/unit/api/openstack/test_wsgi.py:L297) | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L296–L297` |
| `ResourceTest.test_resource_call_with_method_get` | method | (self) | public | not declared | 1/16 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L305–L323` |
| `ResourceTest.test_resource_call_with_method_get.Controller` | class | — | public | not declared | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L306–L308` |
| `ResourceTest.test_resource_call_with_method_get.Controller.index` | method | (self, req) | public | `'success'` (src/nova/tests/unit/api/openstack/test_wsgi.py:L308) | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L307–L308` |
| `ResourceTest.test_resource_call_with_method_post` | method | (self) | public | not declared | 1/27 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L325–L358` |
| `ResourceTest.test_resource_call_with_method_post.Controller` | class | — | public | not declared | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L326–L332` |
| `ResourceTest.test_resource_call_with_method_post.Controller.create` | method | (self, req, body) | public | `"success"` (src/nova/tests/unit/api/openstack/test_wsgi.py:L332) | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L328–L332` |
| `ResourceTest.test_resource_call_with_method_put` | method | (self) | public | not declared | 1/28 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L360–L393` |
| `ResourceTest.test_resource_call_with_method_put.Controller` | class | — | public | not declared | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L361–L366` |
| `ResourceTest.test_resource_call_with_method_put.Controller.update` | method | (self, req, id, body) | public | `"success"` (src/nova/tests/unit/api/openstack/test_wsgi.py:L366) | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L362–L366` |
| `ResourceTest.test_resource_call_with_method_delete` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L395–L410` |
| `ResourceTest.test_resource_call_with_method_delete.Controller` | class | — | public | not declared | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L396–L398` |
| `ResourceTest.test_resource_call_with_method_delete.Controller.delete` | method | (self, req, id) | public | `"success"` (src/nova/tests/unit/api/openstack/test_wsgi.py:L398) | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L397–L398` |
| `ResourceTest.test_resource_forbidden` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L412–L420` |
| `ResourceTest.test_resource_forbidden.Controller` | class | — | public | not declared | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L413–L415` |
| `ResourceTest.test_resource_forbidden.Controller.index` | method | (self, req) | public | not declared | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L414–L415` |
| `ResourceTest.test_resource_not_authorized` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L422–L430` |
| `ResourceTest.test_resource_not_authorized.Controller` | class | — | public | not declared | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L423–L425` |
| `ResourceTest.test_resource_not_authorized.Controller.index` | method | (self, req) | public | not declared | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L424–L425` |
| `ResourceTest.test_dispatch` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L432–L442` |
| `ResourceTest.test_dispatch.Controller` | class | — | public | not declared | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L433–L435` |
| `ResourceTest.test_dispatch.Controller.index` | method | (self, req, pants=None) | public | `pants` (src/nova/tests/unit/api/openstack/test_wsgi.py:L435) | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L434–L435` |
| `ResourceTest.test_get_method_unknown_controller_method` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L444–L452` |
| `ResourceTest.test_get_method_unknown_controller_method.Controller` | class | — | public | not declared | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L445–L447` |
| `ResourceTest.test_get_method_unknown_controller_method.Controller.index` | method | (self, req, pants=None) | public | `pants` (src/nova/tests/unit/api/openstack/test_wsgi.py:L447) | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L446–L447` |
| `ResourceTest.test_get_method_action_json` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L454–L465` |
| `ResourceTest.test_get_method_action_json.Controller` | class | — | public | not declared | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L455–L458` |
| `ResourceTest.test_get_method_action_json.Controller._action_foo` | method | (self, req, id, body) | private | `body` (src/nova/tests/unit/api/openstack/test_wsgi.py:L458) | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L457–L458` |
| `ResourceTest.test_get_method_action_bad_body` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L467–L476` |
| `ResourceTest.test_get_method_action_bad_body.Controller` | class | — | public | not declared | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L468–L471` |
| `ResourceTest.test_get_method_action_bad_body.Controller._action_foo` | method | (self, req, id, body) | private | `body` (src/nova/tests/unit/api/openstack/test_wsgi.py:L471) | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L470–L471` |
| `ResourceTest.test_get_method_unknown_controller_action` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L478–L488` |
| `ResourceTest.test_get_method_unknown_controller_action.Controller` | class | — | public | not declared | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L479–L482` |
| `ResourceTest.test_get_method_unknown_controller_action.Controller._action_foo` | method | (self, req, id, body) | private | `body` (src/nova/tests/unit/api/openstack/test_wsgi.py:L482) | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L481–L482` |
| `ResourceTest.test_get_method_action_method` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L490–L500` |
| `ResourceTest.test_get_method_action_method.Controller` | class | — | public | not declared | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L491–L493` |
| `ResourceTest.test_get_method_action_method.Controller.action` | method | (self, req, pants=None) | public | `pants` (src/nova/tests/unit/api/openstack/test_wsgi.py:L493) | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L492–L493` |
| `ResourceTest.test_get_action_args` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L502–L521` |
| `ResourceTest.test_get_action_args.Controller` | class | — | public | not declared | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L503–L505` |
| `ResourceTest.test_get_action_args.Controller.index` | method | (self, req, pants=None) | public | `pants` (src/nova/tests/unit/api/openstack/test_wsgi.py:L505) | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L504–L505` |
| `ResourceTest.test_get_body_bad_content` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L523–L536` |
| `ResourceTest.test_get_body_bad_content.Controller` | class | — | public | not declared | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L524–L526` |
| `ResourceTest.test_get_body_bad_content.Controller.index` | method | (self, req, pants=None) | public | `pants` (src/nova/tests/unit/api/openstack/test_wsgi.py:L526) | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L525–L526` |
| `ResourceTest.test_get_body_no_content_type` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L538–L551` |
| `ResourceTest.test_get_body_no_content_type.Controller` | class | — | public | not declared | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L539–L541` |
| `ResourceTest.test_get_body_no_content_type.Controller.index` | method | (self, req, pants=None) | public | `pants` (src/nova/tests/unit/api/openstack/test_wsgi.py:L541) | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L540–L541` |
| `ResourceTest.test_get_body_no_content_body` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L553–L567` |
| `ResourceTest.test_get_body_no_content_body.Controller` | class | — | public | not declared | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L554–L556` |
| `ResourceTest.test_get_body_no_content_body.Controller.index` | method | (self, req, pants=None) | public | `pants` (src/nova/tests/unit/api/openstack/test_wsgi.py:L556) | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L555–L556` |
| `ResourceTest.test_get_body_content_body_none` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L569–L577` |
| `ResourceTest.test_get_body` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L579–L593` |
| `ResourceTest.test_get_body.Controller` | class | — | public | not declared | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L580–L582` |
| `ResourceTest.test_get_body.Controller.index` | method | (self, req, pants=None) | public | `pants` (src/nova/tests/unit/api/openstack/test_wsgi.py:L582) | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L581–L582` |
| `ResourceTest.test_get_request_id_with_dict_response_body` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L595–L605` |
| `ResourceTest.test_get_request_id_with_dict_response_body.Controller` | class | — | public | not declared | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L596–L598` |
| `ResourceTest.test_get_request_id_with_dict_response_body.Controller.index` | method | (self, req) | public | `{'foo': 'bar'}` (src/nova/tests/unit/api/openstack/test_wsgi.py:L598) | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L597–L598` |
| `ResourceTest.test_no_request_id_with_str_response_body` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L607–L621` |
| `ResourceTest.test_no_request_id_with_str_response_body.Controller` | class | — | public | not declared | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L608–L610` |
| `ResourceTest.test_no_request_id_with_str_response_body.Controller.index` | method | (self, req) | public | `'foo'` (src/nova/tests/unit/api/openstack/test_wsgi.py:L610) | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L609–L610` |
| `ResourceTest.test_get_request_id_no_response_body` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L623–L633` |
| `ResourceTest.test_get_request_id_no_response_body.Controller` | class | — | public | not declared | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L624–L626` |
| `ResourceTest.test_get_request_id_no_response_body.Controller.index` | method | (self, req) | public | not declared | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L625–L626` |
| `ResourceTest.test_deserialize_default` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L635–L644` |
| `ResourceTest.test_deserialize_default.Controller` | class | — | public | not declared | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L636–L638` |
| `ResourceTest.test_deserialize_default.Controller.index` | method | (self, req, pants=None) | public | `pants` (src/nova/tests/unit/api/openstack/test_wsgi.py:L638) | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L637–L638` |
| `ResourceTest.test_register_actions` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L646–L669` |
| `ResourceTest.test_register_actions.Controller` | class | — | public | not declared | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L647–L649` |
| `ResourceTest.test_register_actions.Controller.index` | method | (self, req, pants=None) | public | `pants` (src/nova/tests/unit/api/openstack/test_wsgi.py:L649) | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L648–L649` |
| `ResourceTest.test_register_actions.ControllerExtended` | class | — | public | not declared | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L651–L658` |
| `ResourceTest.test_register_actions.ControllerExtended._action_foo` | method | (self, req, id, body) | private | `body` (src/nova/tests/unit/api/openstack/test_wsgi.py:L654) | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L653–L654` |
| `ResourceTest.test_register_actions.ControllerExtended._action_bar` | method | (self, req, id, body) | private | `body` (src/nova/tests/unit/api/openstack/test_wsgi.py:L658) | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L657–L658` |
| `ResourceTest.test_get_method` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L671–L679` |
| `ResourceTest.test_get_method.Controller` | class | — | public | not declared | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L672–L674` |
| `ResourceTest.test_get_method.Controller.index` | method | (self, req, pants=None) | public | `pants` (src/nova/tests/unit/api/openstack/test_wsgi.py:L674) | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L673–L674` |
| `ResourceTest.test_get_method_action` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L681–L695` |
| `ResourceTest.test_get_method_action.Controller` | class | — | public | not declared | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L682–L688` |
| `ResourceTest.test_get_method_action.Controller.index` | method | (self, req, pants=None) | public | `pants` (src/nova/tests/unit/api/openstack/test_wsgi.py:L684) | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L683–L684` |
| `ResourceTest.test_get_method_action.Controller._action_foo` | method | (self, req, id, body) | private | `body` (src/nova/tests/unit/api/openstack/test_wsgi.py:L688) | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L687–L688` |
| `ResourceTest.test_get_method_action_whitelist` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L697–L722` |
| `ResourceTest.test_get_method_action_whitelist.Controller` | class | — | public | not declared | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L698–L700` |
| `ResourceTest.test_get_method_action_whitelist.Controller.index` | method | (self, req, pants=None) | public | `pants` (src/nova/tests/unit/api/openstack/test_wsgi.py:L700) | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L699–L700` |
| `ResourceTest.test_get_method_action_whitelist.ControllerExtended` | class | — | public | not declared | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L702–L709` |
| `ResourceTest.test_get_method_action_whitelist.ControllerExtended._create` | method | (self, req, body) | private | not declared | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L704–L705` |
| `ResourceTest.test_get_method_action_whitelist.ControllerExtended._delete` | method | (self, req, id) | private | not declared | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L708–L709` |
| `ResourceTest.test_resource_exception_handler_type_error` | method | (self) | public | not declared | 2/8 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L724–L734` |
| `ResourceTest.test_resource_exception_handler_type_error.foo` | function | (a) | public | `a` (src/nova/tests/unit/api/openstack/test_wsgi.py:L727) | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L726–L727` |
| `ResourceTest.test_resource_headers_are_utf8` | method | (self) | public | not declared | 2/15 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L736–L754` |
| `ResourceTest.test_resource_headers_are_utf8.Controller` | class | — | public | not declared | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L742–L744` |
| `ResourceTest.test_resource_headers_are_utf8.Controller.index` | method | (self, req) | public | `resp` (src/nova/tests/unit/api/openstack/test_wsgi.py:L744) | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L743–L744` |
| `ResourceTest.test_resource_valid_utf8_body` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L756–L769` |
| `ResourceTest.test_resource_valid_utf8_body.Controller` | class | — | public | not declared | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L757–L759` |
| `ResourceTest.test_resource_valid_utf8_body.Controller.update` | method | (self, req, id, body) | public | `body` (src/nova/tests/unit/api/openstack/test_wsgi.py:L759) | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L758–L759` |
| `ResourceTest.test_resource_invalid_utf8` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L771–L781` |
| `ResourceTest.test_resource_invalid_utf8.Controller` | class | — | public | not declared | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L772–L774` |
| `ResourceTest.test_resource_invalid_utf8.Controller.update` | method | (self, req, id, body) | public | `body` (src/nova/tests/unit/api/openstack/test_wsgi.py:L774) | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L773–L774` |
| `ResponseObjectTest` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L784–L824` |
| `ResponseObjectTest.test_default_code` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L785–L787` |
| `ResponseObjectTest.test_modified_code` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L789–L792` |
| `ResponseObjectTest.test_override_default_code` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L794–L796` |
| `ResponseObjectTest.test_override_modified_code` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L798–L801` |
| `ResponseObjectTest.test_set_header` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L803–L806` |
| `ResponseObjectTest.test_get_header` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L808–L811` |
| `ResponseObjectTest.test_del_header` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L813–L817` |
| `ResponseObjectTest.test_header_isolation` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L819–L824` |
| `ValidBodyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L827–L853` |
| `ValidBodyTest.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L829–L831` |
| `ValidBodyTest.test_is_valid_body` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L833–L835` |
| `ValidBodyTest.test_is_valid_body_none` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L837–L839` |
| `ValidBodyTest.test_is_valid_body_empty` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L841–L843` |
| `ValidBodyTest.test_is_valid_body_no_entity` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L845–L848` |
| `ValidBodyTest.test_is_valid_body_malformed_entity` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L850–L853` |
| `APIVersionTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L856–L891` |
| `APIVersionTestCase.test_api_version` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L858–L880` |
| `APIVersionTestCase.test_api_version.FakeController` | class | — | public | not declared | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L859–L862` |
| `APIVersionTestCase.test_api_version.FakeController.fake_func` | method | (self, req) | public | `{'resources': []}` (src/nova/tests/unit/api/openstack/test_wsgi.py:L862) | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L861–L862` |
| `APIVersionTestCase.test_api_version_legacy` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L882–L891` |
| `APIVersionTestCase.test_api_version_legacy.FakeController` | class | — | public | not declared | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L883–L886` |
| `APIVersionTestCase.test_api_version_legacy.FakeController.fake_func` | method | (self, req) | public | `{'resources': []}` (src/nova/tests/unit/api/openstack/test_wsgi.py:L886) | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L885–L886` |
| `ExpectedErrorTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L894–L974` |
| `ExpectedErrorTestCase.test_expected_error` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L896–L904` |
| `ExpectedErrorTestCase.test_expected_error.FakeController` | class | — | public | not declared | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L897–L900` |
| `ExpectedErrorTestCase.test_expected_error.FakeController.fake_func` | method | (self, req) | public | not declared | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L899–L900` |
| `ExpectedErrorTestCase.test_expected_error_from_list` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L906–L914` |
| `ExpectedErrorTestCase.test_expected_error_from_list.FakeController` | class | — | public | not declared | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L907–L910` |
| `ExpectedErrorTestCase.test_expected_error_from_list.FakeController.fake_func` | method | (self, req) | public | not declared | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L909–L910` |
| `ExpectedErrorTestCase.test_expected_error_with_microversion` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L916–L925` |
| `ExpectedErrorTestCase.test_expected_error_with_microversion.FakeController` | class | — | public | not declared | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L917–L921` |
| `ExpectedErrorTestCase.test_expected_error_with_microversion.FakeController.fake_func` | method | (self, req) | public | not declared | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L920–L921` |
| `ExpectedErrorTestCase.test_unexpected_error` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L927–L937` |
| `ExpectedErrorTestCase.test_unexpected_error.FakeController` | class | — | public | not declared | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L928–L931` |
| `ExpectedErrorTestCase.test_unexpected_error.FakeController.fake_func` | method | (self, req) | public | not declared | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L930–L931` |
| `ExpectedErrorTestCase.test_unexpected_error_from_list` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L939–L949` |
| `ExpectedErrorTestCase.test_unexpected_error_from_list.FakeController` | class | — | public | not declared | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L940–L943` |
| `ExpectedErrorTestCase.test_unexpected_error_from_list.FakeController.fake_func` | method | (self, req) | public | not declared | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L942–L943` |
| `ExpectedErrorTestCase.test_unexpected_error_with_microversion` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L951–L962` |
| `ExpectedErrorTestCase.test_unexpected_error_with_microversion.FakeController` | class | — | public | not declared | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L952–L956` |
| `ExpectedErrorTestCase.test_unexpected_error_with_microversion.FakeController.fake_func` | method | (self, req) | public | not declared | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L955–L956` |
| `ExpectedErrorTestCase.test_unexpected_policy_not_authorized_error` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/test_wsgi.py:L964–L974` |
| `ExpectedErrorTestCase.test_unexpected_policy_not_authorized_error.FakeController` | class | — | public | not declared | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L965–L968` |
| `ExpectedErrorTestCase.test_unexpected_policy_not_authorized_error.FakeController.fake_func` | method | (self, req) | public | not declared | — | `src/nova/tests/unit/api/openstack/test_wsgi.py:L967–L968` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/api/openstack/test_wsgi.py:L13)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/api/openstack/test_wsgi.py:L15)
- `import testscenarios` (src/nova/tests/unit/api/openstack/test_wsgi.py:L16)
- `import webob` (src/nova/tests/unit/api/openstack/test_wsgi.py:L17)
- `nova.api.openstack`: imports `api_version_request as api_version` (src/nova/tests/unit/api/openstack/test_wsgi.py:L19)
- `nova.api.openstack`: imports `wsgi` (src/nova/tests/unit/api/openstack/test_wsgi.py:L20)
- `nova`: imports `exception` (src/nova/tests/unit/api/openstack/test_wsgi.py:L21)
- `nova`: imports `test` (src/nova/tests/unit/api/openstack/test_wsgi.py:L22)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/api/openstack/test_wsgi.py:L23)
- `nova.tests.unit`: imports `matchers` (src/nova/tests/unit/api/openstack/test_wsgi.py:L24)
- `nova.tests.unit`: imports `utils` (src/nova/tests/unit/api/openstack/test_wsgi.py:L25)

## Side Effects

- **network**: "application/vnd.openstack.compute+json;q=0.6") (src/nova/tests/unit/api/openstack/test_wsgi.py:L82)
- **network**: self.assertEqual("application/vnd.openstack.compute+json", result) (src/nova/tests/unit/api/openstack/test_wsgi.py:L84)
- **network**: @mock.patch("nova.api.openstack.api_version_request.max_api_version") (src/nova/tests/unit/api/openstack/test_wsgi.py:L140)
- **network**: @mock.patch("nova.api.openstack.api_version_request.max_api_version") (src/nova/tests/unit/api/openstack/test_wsgi.py:L150)
- **network**: @mock.patch("nova.api.openstack.api_version_request.max_api_version") (src/nova/tests/unit/api/openstack/test_wsgi.py:L273)

## Security Surface

- **entry-point** (`http-param`): request = wsgi.Request.blank('/tests/123', method='POST') (src/nova/tests/unit/api/openstack/test_wsgi.py:L55)
- **entry-point** (`http-param`): request.body = b"<body />" (src/nova/tests/unit/api/openstack/test_wsgi.py:L56)
- **entry-point** (`http-param`): request = wsgi.Request.blank('/tests/123', method='POST') (src/nova/tests/unit/api/openstack/test_wsgi.py:L60)
- **entry-point** (`http-param`): request.body = b"asdf<br />" (src/nova/tests/unit/api/openstack/test_wsgi.py:L62)
- **entry-point** (`http-param`): request = wsgi.Request.blank('/tests/123') (src/nova/tests/unit/api/openstack/test_wsgi.py:L67)
- **entry-point** (`http-param`): request = wsgi.Request.blank('/tests/123.unsupported') (src/nova/tests/unit/api/openstack/test_wsgi.py:L73)
- **entry-point** (`http-param`): request = wsgi.Request.blank('/tests/123') (src/nova/tests/unit/api/openstack/test_wsgi.py:L79)
- **entry-point** (`http-param`): request = wsgi.Request.blank('/') (src/nova/tests/unit/api/openstack/test_wsgi.py:L87)
- **entry-point** (`http-param`): request = wsgi.Request.blank('/') (src/nova/tests/unit/api/openstack/test_wsgi.py:L99)
- **entry-point** (`http-param`): request = wsgi.Request.blank('/') (src/nova/tests/unit/api/openstack/test_wsgi.py:L105)
- **entry-point** (`http-param`): request = wsgi.Request.blank('/') (src/nova/tests/unit/api/openstack/test_wsgi.py:L111)
- **entry-point** (`http-param`): request = wsgi.Request.blank('/') (src/nova/tests/unit/api/openstack/test_wsgi.py:L117)
- **entry-point** (`http-param`): request = wsgi.Request.blank('/') (src/nova/tests/unit/api/openstack/test_wsgi.py:L123)
- **entry-point** (`http-param`): request = wsgi.Request.blank('/') (src/nova/tests/unit/api/openstack/test_wsgi.py:L129)
- **entry-point** (`http-param`): request = wsgi.Request.blank('/') (src/nova/tests/unit/api/openstack/test_wsgi.py:L135)
- **entry-point** (`http-param`): request = wsgi.Request.blank('/') (src/nova/tests/unit/api/openstack/test_wsgi.py:L144)
- **entry-point** (`http-param`): request = wsgi.Request.blank('/') (src/nova/tests/unit/api/openstack/test_wsgi.py:L154)
- **entry-point** (`http-param`): request = wsgi.Request.blank('/') (src/nova/tests/unit/api/openstack/test_wsgi.py:L161)
- **sink** (`db-write`): self.assertEqual(serializer.dispatch({}, action='update'), 'trousers') (src/nova/tests/unit/api/openstack/test_wsgi.py:L184)
- **entry-point** (`http-param`): req = webob.Request.blank('/tests') (src/nova/tests/unit/api/openstack/test_wsgi.py:L268)
- **entry-point** (`http-param`): req = webob.Request.blank('/tests') (src/nova/tests/unit/api/openstack/test_wsgi.py:L286)
- **entry-point** (`http-param`): req = webob.Request.blank('/tests') (src/nova/tests/unit/api/openstack/test_wsgi.py:L300)
- **entry-point** (`http-param`): req = webob.Request.blank('/tests') (src/nova/tests/unit/api/openstack/test_wsgi.py:L312)
- **entry-point** (`http-param`): req = webob.Request.blank('/tests', method="POST", (src/nova/tests/unit/api/openstack/test_wsgi.py:L335)
- **sink** (`db-write`): def update(self, req, id, body): (src/nova/tests/unit/api/openstack/test_wsgi.py:L362)
- **entry-point** (`http-param`): req = webob.Request.blank('/tests/test_id', method="PUT", (src/nova/tests/unit/api/openstack/test_wsgi.py:L369)
- **entry-point** (`http-param`): req = webob.Request.blank('/tests/test_id', method="PUT", (src/nova/tests/unit/api/openstack/test_wsgi.py:L384)
- **entry-point** (`http-param`): req = webob.Request.blank('/tests/test_id', method="DELETE") (src/nova/tests/unit/api/openstack/test_wsgi.py:L402)
- **entry-point** (`http-param`): req = webob.Request.blank('/tests') (src/nova/tests/unit/api/openstack/test_wsgi.py:L417)
- **entry-point** (`http-param`): req = webob.Request.blank('/tests') (src/nova/tests/unit/api/openstack/test_wsgi.py:L427)
- **sink** (`db-write`): 'action': 'update', (src/nova/tests/unit/api/openstack/test_wsgi.py:L514)
- **sink** (`db-write`): expected = {'action': 'update', 'id': 12} (src/nova/tests/unit/api/openstack/test_wsgi.py:L519)
- **entry-point** (`http-param`): request = wsgi.Request.blank('/', method='POST') (src/nova/tests/unit/api/openstack/test_wsgi.py:L531)
- **entry-point** (`http-param`): request.body = b'foo' (src/nova/tests/unit/api/openstack/test_wsgi.py:L533)
- **entry-point** (`http-param`): request = wsgi.Request.blank('/', method='POST') (src/nova/tests/unit/api/openstack/test_wsgi.py:L546)
- **entry-point** (`http-param`): request.body = b'foo' (src/nova/tests/unit/api/openstack/test_wsgi.py:L547)
- **entry-point** (`http-param`): request = wsgi.Request.blank('/', method='POST') (src/nova/tests/unit/api/openstack/test_wsgi.py:L561)
- **entry-point** (`http-param`): request.body = b'' (src/nova/tests/unit/api/openstack/test_wsgi.py:L563)
- **entry-point** (`http-param`): request = wsgi.Request.blank('/', method='PUT') (src/nova/tests/unit/api/openstack/test_wsgi.py:L571)
- **entry-point** (`http-param`): request = wsgi.Request.blank('/', method='POST') (src/nova/tests/unit/api/openstack/test_wsgi.py:L587)
- **entry-point** (`http-param`): request.body = b'foo' (src/nova/tests/unit/api/openstack/test_wsgi.py:L589)
- **entry-point** (`http-param`): req = webob.Request.blank('/tests') (src/nova/tests/unit/api/openstack/test_wsgi.py:L746)
- **sink** (`db-write`): def update(self, req, id, body): (src/nova/tests/unit/api/openstack/test_wsgi.py:L758)
- **entry-point** (`http-param`): req = webob.Request.blank('/tests/test_id', method="PUT") (src/nova/tests/unit/api/openstack/test_wsgi.py:L761)
- **sink** (`db-write`): def update(self, req, id, body): (src/nova/tests/unit/api/openstack/test_wsgi.py:L773)
- **entry-point** (`http-param`): req = webob.Request.blank('/tests/test_id', method="PUT") (src/nova/tests/unit/api/openstack/test_wsgi.py:L776)

