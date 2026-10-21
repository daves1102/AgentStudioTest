# src/nova/tests/functional/api_samples_test_base.py

## Overview

This file implements the `api_samples_test_base` module, defining 2 classs, 3 classmethods, 1 constant, 3 fields, 2 functions, 26 methods, 2 propertys, 1 variable, 6 imports, 16 side effects, 5 security surface entries.

Lines: total 547, code 391, comment 94, blank 62

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `PROJECT_ID` | constant | — | exported | not declared | — | `src/nova/tests/functional/api_samples_test_base.py:L25–L25` |
| `pp` | variable | — | exported | not declared | — | `src/nova/tests/functional/api_samples_test_base.py:L28–L28` |
| `NoMatch` | class | — | exported | not declared | — | `src/nova/tests/functional/api_samples_test_base.py:L31–L32` |
| `pretty_data` | function | (data) | exported | `'\n'.join(line.rstrip() for line in data.split('\n')).strip()` (src/nova/tests/functional/api_samples_test_base.py:L38) | 2/4 | `src/nova/tests/functional/api_samples_test_base.py:L35–L38` |
| `objectify` | function | (data) | exported | `{}` (src/nova/tests/functional/api_samples_test_base.py:L43); `jsonutils.loads(data)` (src/nova/tests/functional/api_samples_test_base.py:L65) | 2/5 | `src/nova/tests/functional/api_samples_test_base.py:L41–L65` |
| `ApiSampleTestBase` | class | — | exported | not declared | — | `src/nova/tests/functional/api_samples_test_base.py:L68–L547` |
| `ApiSampleTestBase.sample_dir` | field | — | public | not declared | — | `src/nova/tests/functional/api_samples_test_base.py:L69–L69` |
| `ApiSampleTestBase.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_samples_test_base.py:L70–L70` |
| `ApiSampleTestBase._use_common_server_api_samples` | field | — | private | not declared | — | `src/nova/tests/functional/api_samples_test_base.py:L71–L71` |
| `ApiSampleTestBase.__init__` | method | (self, *args, **kwargs) | public | not declared | 1/3 | `src/nova/tests/functional/api_samples_test_base.py:L73–L75` |
| `ApiSampleTestBase.subs` | method | (self) | public | `self._subs` (src/nova/tests/functional/api_samples_test_base.py:L79) | 1/2 | `src/nova/tests/functional/api_samples_test_base.py:L78–L79` |
| `ApiSampleTestBase.subs` | method | (self, value) | public | not declared | 5/11 | `src/nova/tests/functional/api_samples_test_base.py:L82–L92` |
| `ApiSampleTestBase._get_sample_path` | method | (cls, name, dirname, suffix='', api_version=None) | private | `os.path.join(*parts)` (src/nova/tests/functional/api_samples_test_base.py:L110) | 3/11 | `src/nova/tests/functional/api_samples_test_base.py:L95–L110` |
| `ApiSampleTestBase._get_sample` | method | (cls, name, api_version=None) | private | `cls._get_sample_path(name, dirname, api_version=api_version)` (src/nova/tests/functional/api_samples_test_base.py:L117) | 1/5 | `src/nova/tests/functional/api_samples_test_base.py:L113–L117` |
| `ApiSampleTestBase._get_template` | method | (cls, name, api_version=None) | private | `cls._get_sample_path(name, dirname, suffix='.tpl', api_version=api_version)` (src/nova/tests/functional/api_samples_test_base.py:L124) | 1/6 | `src/nova/tests/functional/api_samples_test_base.py:L120–L125` |
| `ApiSampleTestBase._read_template` | method | (self, name) | private | `inf.read().strip()` (src/nova/tests/functional/api_samples_test_base.py:L130) | 1/4 | `src/nova/tests/functional/api_samples_test_base.py:L127–L130` |
| `ApiSampleTestBase._write_template` | method | (self, name, data) | private | not declared | 1/4 | `src/nova/tests/functional/api_samples_test_base.py:L132–L135` |
| `ApiSampleTestBase._write_sample` | method | (self, name, data) | private | not declared | 1/5 | `src/nova/tests/functional/api_samples_test_base.py:L137–L143` |
| `ApiSampleTestBase._compare_result` | method | (self, expected, result, result_str) | private | `self._compare_result(expected[0], result[0], result_str)` (src/nova/tests/functional/api_samples_test_base.py:L197); `self._compare_result(expected, result, result_str)` (src/nova/tests/functional/api_samples_test_base.py:L288); `matched_value` (src/nova/tests/functional/api_samples_test_base.py:L313) | 38/125 | `src/nova/tests/functional/api_samples_test_base.py:L145–L313` |
| `ApiSampleTestBase.project_id` | method | (self) | public | `project_id or PROJECT_ID` (src/nova/tests/functional/api_samples_test_base.py:L325) | 3/7 | `src/nova/tests/functional/api_samples_test_base.py:L316–L325` |
| `ApiSampleTestBase.project_id` | method | (self, project_id) | public | not declared | 1/3 | `src/nova/tests/functional/api_samples_test_base.py:L328–L331` |
| `ApiSampleTestBase.generalize_subs` | method | (self, subs, vanilla_regexes) | public | `subs` (src/nova/tests/functional/api_samples_test_base.py:L342) | 1/2 | `src/nova/tests/functional/api_samples_test_base.py:L333–L342` |
| `ApiSampleTestBase._update_links` | method | (self, sample_data) | private | `updated_data` (src/nova/tests/functional/api_samples_test_base.py:L362) | 3/13 | `src/nova/tests/functional/api_samples_test_base.py:L344–L362` |
| `ApiSampleTestBase._verify_response` | method | (self, name, subs, response, exp_code, update_links=True) | private | `response_result` (src/nova/tests/functional/api_samples_test_base.py:L422) | 8/58 | `src/nova/tests/functional/api_samples_test_base.py:L364–L432` |
| `ApiSampleTestBase._get_host` | method | (self) | private | `'http://openstack.example.com'` (src/nova/tests/functional/api_samples_test_base.py:L435) | 1/2 | `src/nova/tests/functional/api_samples_test_base.py:L434–L435` |
| `ApiSampleTestBase._get_glance_host` | method | (self) | private | `'http://glance.openstack.example.com'` (src/nova/tests/functional/api_samples_test_base.py:L438) | 1/2 | `src/nova/tests/functional/api_samples_test_base.py:L437–L438` |
| `ApiSampleTestBase._get_regexes` | method | (self) | private | `{ 'isotime': isotime_re, 'strtime': strtime_re, 'strtime_url': strtime_url_re, 'strtime_or_none': r'None\|%s' % strtime_re, 'xmltime': xmltime_re, 'password': '[0-9a-zA-Z]{1,12}', 'ip': '[0-9]{1,3}.[0-` (src/nova/tests/functional/api_samples_test_base.py:L452) | 1/45 | `src/nova/tests/functional/api_samples_test_base.py:L440–L487` |
| `ApiSampleTestBase._get_compute_endpoint` | method | (self) | private | `'%s/%s' % (self._get_host(), self.project_id)` (src/nova/tests/functional/api_samples_test_base.py:L493); `self._get_host()` (src/nova/tests/functional/api_samples_test_base.py:L495) | 2/5 | `src/nova/tests/functional/api_samples_test_base.py:L489–L495` |
| `ApiSampleTestBase._get_vers_compute_endpoint` | method | (self) | private | `'%s/%s/%s' % (self._get_host(), self.api_major_version, self.project_id)` (src/nova/tests/functional/api_samples_test_base.py:L501); `'%s/%s' % (self._get_host(), self.api_major_version)` (src/nova/tests/functional/api_samples_test_base.py:L504) | 2/6 | `src/nova/tests/functional/api_samples_test_base.py:L497–L504` |
| `ApiSampleTestBase._get_response` | method | (self, url, method, body=None, strip_version=False, headers=None) | private | `self.api.api_request(url, body=body, method=method, headers=headers, strip_version=strip_version)` (src/nova/tests/functional/api_samples_test_base.py:L511) | 2/7 | `src/nova/tests/functional/api_samples_test_base.py:L506–L512` |
| `ApiSampleTestBase._do_options` | method | (self, url, strip_version=False, headers=None) | private | `self._get_response(url, 'OPTIONS', strip_version=strip_version, headers=headers)` (src/nova/tests/functional/api_samples_test_base.py:L515) | 1/3 | `src/nova/tests/functional/api_samples_test_base.py:L514–L516` |
| `ApiSampleTestBase._do_get` | method | (self, url, strip_version=False, headers=None, return_json_body=False) | private | `jsonutils.loads(response.content)` (src/nova/tests/functional/api_samples_test_base.py:L523); `response` (src/nova/tests/functional/api_samples_test_base.py:L524) | 3/7 | `src/nova/tests/functional/api_samples_test_base.py:L518–L524` |
| `ApiSampleTestBase._do_post` | method | (self, url, name=None, subs=None, method='POST', headers=None) | private | `self._get_response(url, method, body, headers=headers)` (src/nova/tests/functional/api_samples_test_base.py:L534) | 5/9 | `src/nova/tests/functional/api_samples_test_base.py:L526–L534` |
| `ApiSampleTestBase._do_put` | method | (self, url, name=None, subs=None, headers=None) | private | `self._do_post( url, name, subs, method='PUT', headers=headers)` (src/nova/tests/functional/api_samples_test_base.py:L541); `self._get_response(url, 'PUT', headers=headers)` (src/nova/tests/functional/api_samples_test_base.py:L544) | 2/6 | `src/nova/tests/functional/api_samples_test_base.py:L536–L544` |
| `ApiSampleTestBase._do_delete` | method | (self, url, headers=None) | private | `self._get_response(url, 'DELETE', headers=headers)` (src/nova/tests/functional/api_samples_test_base.py:L547) | 1/2 | `src/nova/tests/functional/api_samples_test_base.py:L546–L547` |
| `ApiSampleTestBase.subs` | property | — | public | not declared | — | `src/nova/tests/functional/api_samples_test_base.py:L77–L79` |
| `ApiSampleTestBase._get_sample_path` | classmethod | — | private | not declared | — | `src/nova/tests/functional/api_samples_test_base.py:L94–L110` |
| `ApiSampleTestBase._get_sample` | classmethod | — | private | not declared | — | `src/nova/tests/functional/api_samples_test_base.py:L112–L117` |
| `ApiSampleTestBase._get_template` | classmethod | — | private | not declared | — | `src/nova/tests/functional/api_samples_test_base.py:L119–L125` |
| `ApiSampleTestBase.project_id` | property | — | public | not declared | — | `src/nova/tests/functional/api_samples_test_base.py:L315–L325` |

## Dependencies

- `import os` (src/nova/tests/functional/api_samples_test_base.py:L16)
- `import pprint` (src/nova/tests/functional/api_samples_test_base.py:L17)
- `import re` (src/nova/tests/functional/api_samples_test_base.py:L18)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/functional/api_samples_test_base.py:L20)
- `nova`: imports `test` (src/nova/tests/functional/api_samples_test_base.py:L22)
- `nova.tests.functional`: imports `integrated_helpers` (src/nova/tests/functional/api_samples_test_base.py:L23)

## Side Effects

- **file-io**: return os.path.join(*parts) (src/nova/tests/functional/api_samples_test_base.py:L110)
- **file-io**: dirname = os.path.dirname(os.path.abspath(__file__)) (src/nova/tests/functional/api_samples_test_base.py:L114)
- **file-io**: dirname = os.path.normpath(os.path.join(dirname, (src/nova/tests/functional/api_samples_test_base.py:L115)
- **file-io**: dirname = os.path.dirname(os.path.abspath(__file__)) (src/nova/tests/functional/api_samples_test_base.py:L121)
- **file-io**: dirname = os.path.normpath(os.path.join(dirname, (src/nova/tests/functional/api_samples_test_base.py:L122)
- **file-io**: with open(template) as inf: (src/nova/tests/functional/api_samples_test_base.py:L129)
- **file-io**: with open(self._get_template(name, (src/nova/tests/functional/api_samples_test_base.py:L133)
- **file-io**: os.makedirs(os.path.dirname(sample_file), exist_ok = True) (src/nova/tests/functional/api_samples_test_base.py:L140)
- **file-io**: with open(sample_file, 'w') as outf: (src/nova/tests/functional/api_samples_test_base.py:L142)
- **file-io**: if not os.path.exists(template_path): (src/nova/tests/functional/api_samples_test_base.py:L380)
- **file-io**: if (self.generate_samples and not os.path.exists(sample_path)): (src/nova/tests/functional/api_samples_test_base.py:L400)
- **file-io**: with open(sample_path) as sample: (src/nova/tests/functional/api_samples_test_base.py:L404)
- **network**: return 'http://openstack.example.com' (src/nova/tests/functional/api_samples_test_base.py:L435)
- **network**: return 'http://glance.openstack.example.com' (src/nova/tests/functional/api_samples_test_base.py:L438)
- **file-io**: if self.generate_samples and not os.path.exists(sample): (src/nova/tests/functional/api_samples_test_base.py:L532)
- **global-mutation**: PROJECT_ID = "6f70656e737461636b20342065766572" (src/nova/tests/functional/api_samples_test_base.py:L25)

## Security Surface

- **sink** (`file-write`): outf.write(data) (src/nova/tests/functional/api_samples_test_base.py:L135)
- **sink** (`file-write`): with open(sample_file, 'w') as outf: (src/nova/tests/functional/api_samples_test_base.py:L142)
- **sink** (`file-write`): outf.write(data) (src/nova/tests/functional/api_samples_test_base.py:L143)
- **sink** (`db-write`): """Process sample data and update version specific links.""" (src/nova/tests/functional/api_samples_test_base.py:L345)
- **sink** (`db-write`): regexes.update(subs) (src/nova/tests/functional/api_samples_test_base.py:L372)

