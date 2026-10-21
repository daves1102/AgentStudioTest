# src/nova/tests/fixtures/cyborg.py

## Overview

This file implements the `cyborg` module, defining 1 class, 2 constants, 4 fields, 3 functions, 10 methods, 2 staticmethods, 5 imports, 4 side effects, 3 security surface entries.

Lines: total 393, code 321, comment 42, blank 30

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/cyborg.py:L22–L22` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/cyborg.py:L23–L23` |
| `_get_device_profile` | function | (dp_name, trait) | unexported | `dp[dp_name]` (src/nova/tests/fixtures/cyborg.py:L69) | 1/41 | `src/nova/tests/fixtures/cyborg.py:L26–L69` |
| `get_arqs` | function | (dp_name) | exported | `arqs, bound_arqs` (src/nova/tests/fixtures/cyborg.py:L159) | 2/84 | `src/nova/tests/fixtures/cyborg.py:L72–L159` |
| `get_mdev_arqs` | function | (dp_name) | exported | `arqs, bound_arqs` (src/nova/tests/fixtures/cyborg.py:L215) | 2/54 | `src/nova/tests/fixtures/cyborg.py:L162–L215` |
| `CyborgFixture` | class | — | exported | not declared | — | `src/nova/tests/fixtures/cyborg.py:L218–L393` |
| `CyborgFixture.dp_name` | field | — | public | not declared | — | `src/nova/tests/fixtures/cyborg.py:L221–L221` |
| `CyborgFixture.trait` | field | — | public | not declared | — | `src/nova/tests/fixtures/cyborg.py:L222–L222` |
| `CyborgFixture.arq_uuids` | field | — | public | not declared | — | `src/nova/tests/fixtures/cyborg.py:L224–L224` |
| `CyborgFixture.call_create_arq_count` | field | — | public | not declared | — | `src/nova/tests/fixtures/cyborg.py:L227–L227` |
| `CyborgFixture.setUp` | method | (self) | public | not declared | 1/40 | `src/nova/tests/fixtures/cyborg.py:L251–L290` |
| `CyborgFixture.fake_get_device_profile_list` | method | (self, dp_name) | public | `_get_device_profile(dp_name, self.trait)` (src/nova/tests/fixtures/cyborg.py:L293) | 1/2 | `src/nova/tests/fixtures/cyborg.py:L292–L293` |
| `CyborgFixture.fake_bind_arqs` | method | (bindings) | public | not declared | 6/11 | `src/nova/tests/fixtures/cyborg.py:L296–L325` |
| `CyborgFixture.fake_get_arqs_for_instance` | method | (instance_uuid, only_resolved=False) | public | `instance_bound_arqs` (src/nova/tests/fixtures/cyborg.py:L339) | 3/7 | `src/nova/tests/fixtures/cyborg.py:L328–L339` |
| `CyborgFixture.fake_get_arq_by_uuid` | method | (self, uuid) | public | `arq` (src/nova/tests/fixtures/cyborg.py:L344); `None` (src/nova/tests/fixtures/cyborg.py:L345) | 3/5 | `src/nova/tests/fixtures/cyborg.py:L341–L345` |
| `CyborgFixture.fake_delete_arqs_for_instance` | method | (self, instance_uuid) | public | not declared | 3/6 | `src/nova/tests/fixtures/cyborg.py:L347–L353` |
| `CyborgFixture.fake_create_arq_and_match_rp` | method | (self, dp_name, rg_rp_map=None, owner=None) | public | `arqs` (src/nova/tests/fixtures/cyborg.py:L364) | 3/9 | `src/nova/tests/fixtures/cyborg.py:L355–L364` |
| `CyborgFixture.fake_create_arqs` | method | (self, dp_name) | public | `[self.arq_list[index]]` (src/nova/tests/fixtures/cyborg.py:L370); `None` (src/nova/tests/fixtures/cyborg.py:L372) | 2/7 | `src/nova/tests/fixtures/cyborg.py:L366–L372` |
| `CyborgFixture.fake_get_arq_device_rp_uuid` | method | (self, arq_arg, rg_rp_map=None, port_id=None) | public | `arq["device_rp_uuid"]` (src/nova/tests/fixtures/cyborg.py:L383); `None` (src/nova/tests/fixtures/cyborg.py:L384) | 3/10 | `src/nova/tests/fixtures/cyborg.py:L374–L384` |
| `CyborgFixture.fake_delete_arqs_by_uuid` | method | (self, arq_uuids) | public | not declared | 4/7 | `src/nova/tests/fixtures/cyborg.py:L386–L393` |
| `CyborgFixture.fake_bind_arqs` | staticmethod | — | public | not declared | — | `src/nova/tests/fixtures/cyborg.py:L295–L325` |
| `CyborgFixture.fake_get_arqs_for_instance` | staticmethod | — | public | not declared | — | `src/nova/tests/fixtures/cyborg.py:L327–L339` |

## Dependencies

- `import copy` (src/nova/tests/fixtures/cyborg.py:L13)
- `import fixtures` (src/nova/tests/fixtures/cyborg.py:L15)
- `oslo_config`: imports `cfg` (src/nova/tests/fixtures/cyborg.py:L16)
- `oslo_log`: imports `log as logging` (src/nova/tests/fixtures/cyborg.py:L17)
- `nova`: imports `exception` (src/nova/tests/fixtures/cyborg.py:L19)

## Side Effects

- **network**: 'nova.service_auth.get_service_user_token_auth_plugin')) (src/nova/tests/fixtures/cyborg.py:L254)
- **network**: 'nova.utils.get_sdk_adapter')) (src/nova/tests/fixtures/cyborg.py:L256)
- **global-mutation**: CONF = cfg.CONF (src/nova/tests/fixtures/cyborg.py:L22)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/tests/fixtures/cyborg.py:L23)

## Security Surface

- **sink** (`db-write`): bound_arq.update( (src/nova/tests/fixtures/cyborg.py:L153)
- **sink** (`db-write`): bound_arq.update({ (src/nova/tests/fixtures/cyborg.py:L208)
- **privilege** (`crypto-key`): 'nova.service_auth.get_service_user_token_auth_plugin')) (src/nova/tests/fixtures/cyborg.py:L254)

