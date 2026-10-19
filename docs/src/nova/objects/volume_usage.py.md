# src/nova/objects/volume_usage.py

## Overview

This file implements the `volume_usage` module, defining 1 class, 1 constant, 1 field, 8 methods, 5 propertys, 1 variable, 3 imports, 1 side effect.

Lines: total 104, code 78, comment 13, blank 13

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `__all__` | variable | — | unexported | not declared | — | `src/nova/objects/volume_usage.py:L17–L19` |
| `VolumeUsage` | class | — | exported | not declared | — | `src/nova/objects/volume_usage.py:L23–L104` |
| `VolumeUsage.VERSION` | constant | — | public | not declared | — | `src/nova/objects/volume_usage.py:L25–L25` |
| `VolumeUsage.fields` | field | — | public | not declared | — | `src/nova/objects/volume_usage.py:L27–L46` |
| `VolumeUsage.last_refreshed` | method | (self) | public | `max(self.tot_last_refreshed, self.curr_last_refreshed)` (src/nova/objects/volume_usage.py:L51); `self.tot_last_refreshed` (src/nova/objects/volume_usage.py:L53); `self.curr_last_refreshed` (src/nova/objects/volume_usage.py:L56) | 4/7 | `src/nova/objects/volume_usage.py:L49–L56` |
| `VolumeUsage.reads` | method | (self) | public | `self.tot_reads + self.curr_reads` (src/nova/objects/volume_usage.py:L60) | 1/2 | `src/nova/objects/volume_usage.py:L59–L60` |
| `VolumeUsage.read_bytes` | method | (self) | public | `self.tot_read_bytes + self.curr_read_bytes` (src/nova/objects/volume_usage.py:L64) | 1/2 | `src/nova/objects/volume_usage.py:L63–L64` |
| `VolumeUsage.writes` | method | (self) | public | `self.tot_writes + self.curr_writes` (src/nova/objects/volume_usage.py:L68) | 1/2 | `src/nova/objects/volume_usage.py:L67–L68` |
| `VolumeUsage.write_bytes` | method | (self) | public | `self.tot_write_bytes + self.curr_write_bytes` (src/nova/objects/volume_usage.py:L72) | 1/2 | `src/nova/objects/volume_usage.py:L71–L72` |
| `VolumeUsage._from_db_object` | method | (context, vol_usage, db_vol_usage) | private | `vol_usage` (src/nova/objects/volume_usage.py:L80) | 2/6 | `src/nova/objects/volume_usage.py:L75–L80` |
| `VolumeUsage.save` | method | (self, update_totals=False) | public | not declared | 1/7 | `src/nova/objects/volume_usage.py:L83–L89` |
| `VolumeUsage.to_dict` | method | (self) | public | `{ 'volume_id': self.volume_id, 'tenant_id': self.project_id, 'user_id': self.user_id, 'availability_zone': self.availability_zone, 'instance_id': self.instance_uuid, 'last_refreshed': str( self.last_r` (src/nova/objects/volume_usage.py:L92) | 2/14 | `src/nova/objects/volume_usage.py:L91–L104` |
| `VolumeUsage.last_refreshed` | property | — | public | not declared | — | `src/nova/objects/volume_usage.py:L48–L56` |
| `VolumeUsage.reads` | property | — | public | not declared | — | `src/nova/objects/volume_usage.py:L58–L60` |
| `VolumeUsage.read_bytes` | property | — | public | not declared | — | `src/nova/objects/volume_usage.py:L62–L64` |
| `VolumeUsage.writes` | property | — | public | not declared | — | `src/nova/objects/volume_usage.py:L66–L68` |
| `VolumeUsage.write_bytes` | property | — | public | not declared | — | `src/nova/objects/volume_usage.py:L70–L72` |

## Dependencies

- `nova.db.main`: imports `api as db` (src/nova/objects/volume_usage.py:L13)
- `nova.objects`: imports `base` (src/nova/objects/volume_usage.py:L14)
- `nova.objects`: imports `fields` (src/nova/objects/volume_usage.py:L15)

## Side Effects

- **global-mutation**: VERSION = '1.0' (src/nova/objects/volume_usage.py:L25)

