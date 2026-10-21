# src/nova/tests/functional/api_sample_tests/test_floating_ips.py

## Overview

This file implements the `test_floating_ips` module, defining 2 classs, 1 constant, 6 fields, 13 methods, 5 imports, 1 side effect.

Lines: total 227, code 175, comment 21, blank 31

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_floating_ips.py:L22–L22` |
| `NeutronFixture` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_floating_ips.py:L28–L177` |
| `NeutronFixture.network_1` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_floating_ips.py:L30–L52` |
| `NeutronFixture.subnet_1` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_floating_ips.py:L54–L75` |
| `NeutronFixture.subnet_2` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_floating_ips.py:L76–L95` |
| `NeutronFixture.floatingip_1` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_floating_ips.py:L98–L110` |
| `NeutronFixture.floatingip_2` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_floating_ips.py:L111–L123` |
| `NeutronFixture.__init__` | method | (self, test) | public | not declared | 1/11 | `src/nova/tests/functional/api_sample_tests/test_floating_ips.py:L125–L136` |
| `NeutronFixture.create_floatingip` | method | (self, body=None) | public | `{'floatingip': floatingip}` (src/nova/tests/functional/api_sample_tests/test_floating_ips.py:L147) | 3/8 | `src/nova/tests/functional/api_sample_tests/test_floating_ips.py:L138–L147` |
| `NeutronFixture.delete_floatingip` | method | (self, floatingip) | public | not declared | 2/4 | `src/nova/tests/functional/api_sample_tests/test_floating_ips.py:L149–L153` |
| `NeutronFixture.show_floatingip` | method | (self, floatingip, **_params) | public | `{'floatingip': copy.deepcopy(self._floatingips[floatingip])}` (src/nova/tests/functional/api_sample_tests/test_floating_ips.py:L159) | 2/4 | `src/nova/tests/functional/api_sample_tests/test_floating_ips.py:L155–L159` |
| `NeutronFixture.list_floatingips` | method | (self, retrieve_all=True, **_params) | public | `{'floatingips': copy.deepcopy(list(self._floatingips.values()))}` (src/nova/tests/functional/api_sample_tests/test_floating_ips.py:L162) | 1/2 | `src/nova/tests/functional/api_sample_tests/test_floating_ips.py:L161–L162` |
| `NeutronFixture.list_extensions` | method | (self, *args, **kwargs) | public | `extensions` (src/nova/tests/functional/api_sample_tests/test_floating_ips.py:L177) | 1/13 | `src/nova/tests/functional/api_sample_tests/test_floating_ips.py:L164–L177` |
| `FloatingIpsTest` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_floating_ips.py:L180–L227` |
| `FloatingIpsTest.sample_dir` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_floating_ips.py:L181–L181` |
| `FloatingIpsTest.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/api_sample_tests/test_floating_ips.py:L183–L190` |
| `FloatingIpsTest.test_floating_ips_list_empty` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/api_sample_tests/test_floating_ips.py:L192–L196` |
| `FloatingIpsTest.test_floating_ips_list` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/api_sample_tests/test_floating_ips.py:L198–L204` |
| `FloatingIpsTest.test_floating_ips_create_nopool` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/api_sample_tests/test_floating_ips.py:L206–L209` |
| `FloatingIpsTest.test_floating_ips_create` | method | (self) | public | `response` (src/nova/tests/functional/api_sample_tests/test_floating_ips.py:L216) | 1/6 | `src/nova/tests/functional/api_sample_tests/test_floating_ips.py:L211–L216` |
| `FloatingIpsTest.test_floating_ips_get` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/api_sample_tests/test_floating_ips.py:L218–L221` |
| `FloatingIpsTest.test_floating_ips_delete` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/api_sample_tests/test_floating_ips.py:L223–L227` |

## Dependencies

- `import copy` (src/nova/tests/functional/api_sample_tests/test_floating_ips.py:L15)
- `import nova.conf` (src/nova/tests/functional/api_sample_tests/test_floating_ips.py:L17)
- `nova.network`: imports `constants` (src/nova/tests/functional/api_sample_tests/test_floating_ips.py:L18)
- `nova.tests`: imports `fixtures` (src/nova/tests/functional/api_sample_tests/test_floating_ips.py:L19)
- `nova.tests.functional.api_sample_tests`: imports `api_sample_base` (src/nova/tests/functional/api_sample_tests/test_floating_ips.py:L20)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/tests/functional/api_sample_tests/test_floating_ips.py:L22)

