# src/nova/tests/unit/fake_volume.py

## Overview

This file implements the `fake_volume` module, defining 4 classs, 2 constants, 7 fields, 31 methods, 5 imports, 2 side effects.

Lines: total 272, code 213, comment 11, blank 48

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/tests/unit/fake_volume.py:L23–L23` |
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/unit/fake_volume.py:L25–L25` |
| `fake_volume` | class | — | exported | not declared | — | `src/nova/tests/unit/fake_volume.py:L28–L77` |
| `fake_volume.user_uuid` | field | — | public | not declared | — | `src/nova/tests/unit/fake_volume.py:L29–L29` |
| `fake_volume.instance_uuid` | field | — | public | not declared | — | `src/nova/tests/unit/fake_volume.py:L30–L30` |
| `fake_volume.__init__` | method | (self, size, name, description, volume_id, snapshot, volume_type, metadata, availability_zone) | public | not declared | 3/37 | `src/nova/tests/unit/fake_volume.py:L32–L68` |
| `fake_volume.get` | method | (self, key, default=None) | public | `self.vol[key]` (src/nova/tests/unit/fake_volume.py:L71) | 1/2 | `src/nova/tests/unit/fake_volume.py:L70–L71` |
| `fake_volume.__setitem__` | method | (self, key, value) | public | not declared | 1/2 | `src/nova/tests/unit/fake_volume.py:L73–L74` |
| `fake_volume.__getitem__` | method | (self, key) | public | `self.vol[key]` (src/nova/tests/unit/fake_volume.py:L77) | 1/2 | `src/nova/tests/unit/fake_volume.py:L76–L77` |
| `fake_snapshot` | class | — | exported | not declared | — | `src/nova/tests/unit/fake_volume.py:L80–L111` |
| `fake_snapshot.user_uuid` | field | — | public | not declared | — | `src/nova/tests/unit/fake_volume.py:L81–L81` |
| `fake_snapshot.instance_uuid` | field | — | public | not declared | — | `src/nova/tests/unit/fake_volume.py:L82–L82` |
| `fake_snapshot.__init__` | method | (self, volume_id, size, name, desc, id=None) | public | not declared | 2/19 | `src/nova/tests/unit/fake_volume.py:L84–L102` |
| `fake_snapshot.get` | method | (self, key, default=None) | public | `self.snap[key]` (src/nova/tests/unit/fake_volume.py:L105) | 1/2 | `src/nova/tests/unit/fake_volume.py:L104–L105` |
| `fake_snapshot.__setitem__` | method | (self, key, value) | public | not declared | 1/2 | `src/nova/tests/unit/fake_volume.py:L107–L108` |
| `fake_snapshot.__getitem__` | method | (self, key) | public | `self.snap[key]` (src/nova/tests/unit/fake_volume.py:L111) | 1/2 | `src/nova/tests/unit/fake_volume.py:L110–L111` |
| `API` | class | — | exported | not declared | — | `src/nova/tests/unit/fake_volume.py:L114–L272` |
| `API.volume_list` | field | — | public | not declared | — | `src/nova/tests/unit/fake_volume.py:L115–L115` |
| `API.snapshot_list` | field | — | public | not declared | — | `src/nova/tests/unit/fake_volume.py:L116–L116` |
| `API._instance` | field | — | private | not declared | — | `src/nova/tests/unit/fake_volume.py:L117–L117` |
| `API.Singleton` | class | — | public | not declared | — | `src/nova/tests/unit/fake_volume.py:L119–L121` |
| `API.Singleton.__init__` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/fake_volume.py:L120–L121` |
| `API.__init__` | method | (self) | public | not declared | 2/4 | `src/nova/tests/unit/fake_volume.py:L123–L127` |
| `API.create` | method | (self, context, size, name, description, snapshot=None, volume_type=None, metadata=None, availability_zone=None) | public | `v.vol` (src/nova/tests/unit/fake_volume.py:L137) | 1/9 | `src/nova/tests/unit/fake_volume.py:L129–L137` |
| `API.create_with_kwargs` | method | (self, context, **kwargs) | public | `v.vol` (src/nova/tests/unit/fake_volume.py:L159) | 5/20 | `src/nova/tests/unit/fake_volume.py:L139–L159` |
| `API.get` | method | (self, context, volume_id) | public | `{'id': volume_id, 'attach_time': '13:56:24', 'attach_status': 'attached', 'status': 'in-use'}` (src/nova/tests/unit/fake_volume.py:L163); `v` (src/nova/tests/unit/fake_volume.py:L170) | 4/10 | `src/nova/tests/unit/fake_volume.py:L161–L172` |
| `API.get_all` | method | (self, context) | public | `self.volume_list` (src/nova/tests/unit/fake_volume.py:L175) | 1/2 | `src/nova/tests/unit/fake_volume.py:L174–L175` |
| `API.delete` | method | (self, context, volume_id) | public | not declared | 3/4 | `src/nova/tests/unit/fake_volume.py:L177–L180` |
| `API.check_availability_zone` | method | (self, context, volume, instance=None) | public | not declared | 4/5 | `src/nova/tests/unit/fake_volume.py:L182–L186` |
| `API.attach` | method | (self, context, volume_id, instance_uuid, mountpoint, mode='rw') | public | not declared | 1/10 | `src/nova/tests/unit/fake_volume.py:L188–L197` |
| `API.reset_fake_api` | method | (self, context) | public | not declared | 1/3 | `src/nova/tests/unit/fake_volume.py:L199–L201` |
| `API.detach` | method | (self, context, volume_id, instance_uuid, attachment_id=None) | public | not declared | 1/5 | `src/nova/tests/unit/fake_volume.py:L203–L207` |
| `API.initialize_connection` | method | (self, context, volume_id, connector) | public | `{'driver_volume_type': 'iscsi', 'data': {}}` (src/nova/tests/unit/fake_volume.py:L210) | 1/2 | `src/nova/tests/unit/fake_volume.py:L209–L210` |
| `API.terminate_connection` | method | (self, context, volume_id, connector) | public | `None` (src/nova/tests/unit/fake_volume.py:L213) | 1/2 | `src/nova/tests/unit/fake_volume.py:L212–L213` |
| `API.get_snapshot` | method | (self, context, snapshot_id) | public | `snap` (src/nova/tests/unit/fake_volume.py:L218) | 3/4 | `src/nova/tests/unit/fake_volume.py:L215–L218` |
| `API.get_all_snapshots` | method | (self, context) | public | `self.snapshot_list` (src/nova/tests/unit/fake_volume.py:L221) | 1/2 | `src/nova/tests/unit/fake_volume.py:L220–L221` |
| `API.create_snapshot` | method | (self, context, volume_id, name, description, id=None) | public | `snapshot.snap` (src/nova/tests/unit/fake_volume.py:L228) | 1/6 | `src/nova/tests/unit/fake_volume.py:L223–L228` |
| `API.create_snapshot_with_kwargs` | method | (self, context, **kwargs) | public | `snapshot.snap` (src/nova/tests/unit/fake_volume.py:L240) | 1/10 | `src/nova/tests/unit/fake_volume.py:L230–L240` |
| `API.create_snapshot_force` | method | (self, context, volume_id, name, description, id=None) | public | `snapshot.snap` (src/nova/tests/unit/fake_volume.py:L248) | 1/7 | `src/nova/tests/unit/fake_volume.py:L242–L248` |
| `API.delete_snapshot` | method | (self, context, snapshot_id) | public | not declared | 3/3 | `src/nova/tests/unit/fake_volume.py:L250–L252` |
| `API.reserve_volume` | method | (self, context, volume_id) | public | not declared | 1/4 | `src/nova/tests/unit/fake_volume.py:L254–L257` |
| `API.unreserve_volume` | method | (self, context, volume_id) | public | not declared | 1/4 | `src/nova/tests/unit/fake_volume.py:L259–L262` |
| `API.begin_detaching` | method | (self, context, volume_id) | public | not declared | 1/4 | `src/nova/tests/unit/fake_volume.py:L264–L267` |
| `API.roll_detaching` | method | (self, context, volume_id) | public | not declared | 1/4 | `src/nova/tests/unit/fake_volume.py:L269–L272` |

## Dependencies

- `oslo_log`: imports `log as logging` (src/nova/tests/unit/fake_volume.py:L15)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/fake_volume.py:L16)
- `oslo_utils`: imports `timeutils` (src/nova/tests/unit/fake_volume.py:L17)
- `import nova.conf` (src/nova/tests/unit/fake_volume.py:L19)
- `nova`: imports `exception` (src/nova/tests/unit/fake_volume.py:L20)

## Side Effects

- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/tests/unit/fake_volume.py:L23)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/tests/unit/fake_volume.py:L25)

