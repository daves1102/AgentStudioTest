# src/nova/tests/fixtures/manila.py

## Overview

This file implements the `manila` module, defining 3 classs, 2 constants, 12 methods, 4 imports, 2 side effects.

Lines: total 144, code 110, comment 15, blank 19

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/manila.py:L19–L19` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/manila.py:L20–L20` |
| `ManilaShare` | class | — | exported | not declared | — | `src/nova/tests/fixtures/manila.py:L23–L39` |
| `ManilaShare.__init__` | method | (self, share_id, proto="NFS") | public | not declared | 1/16 | `src/nova/tests/fixtures/manila.py:L24–L39` |
| `ManilaAccess` | class | — | exported | not declared | — | `src/nova/tests/fixtures/manila.py:L42–L53` |
| `ManilaAccess.__init__` | method | (self, access_type="ip", access_to=None) | public | not declared | 5/11 | `src/nova/tests/fixtures/manila.py:L43–L53` |
| `ManilaFixture` | class | — | exported | not declared | — | `src/nova/tests/fixtures/manila.py:L56–L144` |
| `ManilaFixture.setUp` | method | (self) | public | not declared | 1/19 | `src/nova/tests/fixtures/manila.py:L59–L77` |
| `ManilaFixture.fake_get` | method | (self, context, share_id) | public | `nova.share.manila.Share.from_manila_share( manila_share, export_location )` (src/nova/tests/fixtures/manila.py:L82) | 1/6 | `src/nova/tests/fixtures/manila.py:L79–L84` |
| `ManilaFixture.fake_get_share_status_error` | method | (self, context, share_id) | public | `nova.share.manila.Share.from_manila_share( manila_share, export_location )` (src/nova/tests/fixtures/manila.py:L90) | 1/7 | `src/nova/tests/fixtures/manila.py:L86–L92` |
| `ManilaFixture.fake_get_share_export_location_missing` | method | (self, context, share_id) | public | `nova.share.manila.Share.from_manila_share( manila_share, export_location )` (src/nova/tests/fixtures/manila.py:L97) | 1/6 | `src/nova/tests/fixtures/manila.py:L94–L99` |
| `ManilaFixture.fake_get_share_unknown_protocol` | method | (self, context, share_id) | public | `nova.share.manila.Share.from_manila_share( manila_share, export_location )` (src/nova/tests/fixtures/manila.py:L105) | 1/7 | `src/nova/tests/fixtures/manila.py:L101–L107` |
| `ManilaFixture.fake_get_cephfs` | method | (self, context, share_id) | public | `nova.share.manila.Share.from_manila_share( manila_share, export_location )` (src/nova/tests/fixtures/manila.py:L112) | 1/6 | `src/nova/tests/fixtures/manila.py:L109–L114` |
| `ManilaFixture.fake_get_access` | method | (self, context, share_id, access_type, access_to) | public | `None` (src/nova/tests/fixtures/manila.py:L122); `nova.share.manila.Access.from_manila_access(access)` (src/nova/tests/fixtures/manila.py:L124) | 2/5 | `src/nova/tests/fixtures/manila.py:L116–L124` |
| `ManilaFixture.fake_allow` | method | (self, context, share_id, access_type, access_to, access_level, lock_reason=None) | public | not declared | 1/6 | `src/nova/tests/fixtures/manila.py:L126–L131` |
| `ManilaFixture.fake_deny` | method | (self, context, share_id, access_type, access_to) | public | `202` (src/nova/tests/fixtures/manila.py:L135) | 1/3 | `src/nova/tests/fixtures/manila.py:L133–L135` |
| `ManilaFixture.fake_get_access_rules` | method | (self, context, share_id) | public | `rules` (src/nova/tests/fixtures/manila.py:L144) | 3/8 | `src/nova/tests/fixtures/manila.py:L137–L144` |

## Dependencies

- `import fixtures` (src/nova/tests/fixtures/manila.py:L13)
- `import nova` (src/nova/tests/fixtures/manila.py:L14)
- `oslo_config`: imports `cfg` (src/nova/tests/fixtures/manila.py:L15)
- `oslo_log`: imports `log as logging` (src/nova/tests/fixtures/manila.py:L16)

## Side Effects

- **global-mutation**: CONF = cfg.CONF (src/nova/tests/fixtures/manila.py:L19)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/tests/fixtures/manila.py:L20)

