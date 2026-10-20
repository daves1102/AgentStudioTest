# src/nova/compute/task_states.py

## Overview

This file implements the `task_states` module, defining 43 constants, 4 variables, 1 import, 43 side effects.

Lines: total 132, code 59, comment 41, blank 32

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `SCHEDULING` | constant | — | exported | not declared | — | `src/nova/compute/task_states.py:L29–L29` |
| `BLOCK_DEVICE_MAPPING` | constant | — | exported | not declared | — | `src/nova/compute/task_states.py:L30–L30` |
| `NETWORKING` | constant | — | exported | not declared | — | `src/nova/compute/task_states.py:L31–L31` |
| `SPAWNING` | constant | — | exported | not declared | — | `src/nova/compute/task_states.py:L32–L32` |
| `IMAGE_SNAPSHOT` | constant | — | exported | not declared | — | `src/nova/compute/task_states.py:L35–L35` |
| `IMAGE_SNAPSHOT_PENDING` | constant | — | exported | not declared | — | `src/nova/compute/task_states.py:L36–L36` |
| `IMAGE_PENDING_UPLOAD` | constant | — | exported | not declared | — | `src/nova/compute/task_states.py:L37–L37` |
| `IMAGE_UPLOADING` | constant | — | exported | not declared | — | `src/nova/compute/task_states.py:L38–L38` |
| `IMAGE_BACKUP` | constant | — | exported | not declared | — | `src/nova/compute/task_states.py:L41–L41` |
| `UPDATING_PASSWORD` | constant | — | exported | not declared | — | `src/nova/compute/task_states.py:L44–L44` |
| `RESIZE_PREP` | constant | — | exported | not declared | — | `src/nova/compute/task_states.py:L47–L47` |
| `RESIZE_MIGRATING` | constant | — | exported | not declared | — | `src/nova/compute/task_states.py:L48–L48` |
| `RESIZE_MIGRATED` | constant | — | exported | not declared | — | `src/nova/compute/task_states.py:L49–L49` |
| `RESIZE_FINISH` | constant | — | exported | not declared | — | `src/nova/compute/task_states.py:L50–L50` |
| `RESIZE_REVERTING` | constant | — | exported | not declared | — | `src/nova/compute/task_states.py:L53–L53` |
| `RESIZE_CONFIRMING` | constant | — | exported | not declared | — | `src/nova/compute/task_states.py:L56–L56` |
| `REBOOTING` | constant | — | exported | not declared | — | `src/nova/compute/task_states.py:L59–L59` |
| `REBOOT_PENDING` | constant | — | exported | not declared | — | `src/nova/compute/task_states.py:L60–L60` |
| `REBOOT_STARTED` | constant | — | exported | not declared | — | `src/nova/compute/task_states.py:L61–L61` |
| `REBOOTING_HARD` | constant | — | exported | not declared | — | `src/nova/compute/task_states.py:L62–L62` |
| `REBOOT_PENDING_HARD` | constant | — | exported | not declared | — | `src/nova/compute/task_states.py:L63–L63` |
| `REBOOT_STARTED_HARD` | constant | — | exported | not declared | — | `src/nova/compute/task_states.py:L64–L64` |
| `PAUSING` | constant | — | exported | not declared | — | `src/nova/compute/task_states.py:L67–L67` |
| `UNPAUSING` | constant | — | exported | not declared | — | `src/nova/compute/task_states.py:L70–L70` |
| `SUSPENDING` | constant | — | exported | not declared | — | `src/nova/compute/task_states.py:L73–L73` |
| `RESUMING` | constant | — | exported | not declared | — | `src/nova/compute/task_states.py:L76–L76` |
| `POWERING_OFF` | constant | — | exported | not declared | — | `src/nova/compute/task_states.py:L79–L79` |
| `POWERING_ON` | constant | — | exported | not declared | — | `src/nova/compute/task_states.py:L82–L82` |
| `RESCUING` | constant | — | exported | not declared | — | `src/nova/compute/task_states.py:L85–L85` |
| `UNRESCUING` | constant | — | exported | not declared | — | `src/nova/compute/task_states.py:L88–L88` |
| `REBUILDING` | constant | — | exported | not declared | — | `src/nova/compute/task_states.py:L91–L91` |
| `REBUILD_BLOCK_DEVICE_MAPPING` | constant | — | exported | not declared | — | `src/nova/compute/task_states.py:L92–L93` |
| `REBUILD_SPAWNING` | constant | — | exported | not declared | — | `src/nova/compute/task_states.py:L94–L94` |
| `MIGRATING` | constant | — | exported | not declared | — | `src/nova/compute/task_states.py:L97–L97` |
| `DELETING` | constant | — | exported | not declared | — | `src/nova/compute/task_states.py:L100–L100` |
| `SOFT_DELETING` | constant | — | exported | not declared | — | `src/nova/compute/task_states.py:L103–L103` |
| `RESTORING` | constant | — | exported | not declared | — | `src/nova/compute/task_states.py:L106–L106` |
| `SHELVING` | constant | — | exported | not declared | — | `src/nova/compute/task_states.py:L109–L109` |
| `SHELVING_IMAGE_PENDING_UPLOAD` | constant | — | exported | not declared | — | `src/nova/compute/task_states.py:L110–L111` |
| `SHELVING_IMAGE_UPLOADING` | constant | — | exported | not declared | — | `src/nova/compute/task_states.py:L112–L112` |
| `SHELVING_OFFLOADING` | constant | — | exported | not declared | — | `src/nova/compute/task_states.py:L115–L115` |
| `UNSHELVING` | constant | — | exported | not declared | — | `src/nova/compute/task_states.py:L118–L118` |
| `ALLOW_REBOOT` | constant | — | exported | not declared | — | `src/nova/compute/task_states.py:L120–L121` |
| `soft_reboot_states` | variable | — | exported | not declared | — | `src/nova/compute/task_states.py:L124–L124` |
| `hard_reboot_states` | variable | — | exported | not declared | — | `src/nova/compute/task_states.py:L125–L125` |
| `resizing_states` | variable | — | exported | not declared | — | `src/nova/compute/task_states.py:L128–L129` |
| `rebuild_states` | variable | — | exported | not declared | — | `src/nova/compute/task_states.py:L132–L132` |

## Dependencies

- `nova.objects`: imports `fields` (src/nova/compute/task_states.py:L26)

## Side Effects

- **global-mutation**: SCHEDULING = fields.InstanceTaskState.SCHEDULING (src/nova/compute/task_states.py:L29)
- **global-mutation**: BLOCK_DEVICE_MAPPING = fields.InstanceTaskState.BLOCK_DEVICE_MAPPING (src/nova/compute/task_states.py:L30)
- **global-mutation**: NETWORKING = fields.InstanceTaskState.NETWORKING (src/nova/compute/task_states.py:L31)
- **global-mutation**: SPAWNING = fields.InstanceTaskState.SPAWNING (src/nova/compute/task_states.py:L32)
- **global-mutation**: IMAGE_SNAPSHOT = fields.InstanceTaskState.IMAGE_SNAPSHOT (src/nova/compute/task_states.py:L35)
- **global-mutation**: IMAGE_SNAPSHOT_PENDING = fields.InstanceTaskState.IMAGE_SNAPSHOT_PENDING (src/nova/compute/task_states.py:L36)
- **global-mutation**: IMAGE_PENDING_UPLOAD = fields.InstanceTaskState.IMAGE_PENDING_UPLOAD (src/nova/compute/task_states.py:L37)
- **global-mutation**: IMAGE_UPLOADING = fields.InstanceTaskState.IMAGE_UPLOADING (src/nova/compute/task_states.py:L38)
- **global-mutation**: IMAGE_BACKUP = fields.InstanceTaskState.IMAGE_BACKUP (src/nova/compute/task_states.py:L41)
- **global-mutation**: UPDATING_PASSWORD = fields.InstanceTaskState.UPDATING_PASSWORD (src/nova/compute/task_states.py:L44)
- **global-mutation**: RESIZE_PREP = fields.InstanceTaskState.RESIZE_PREP (src/nova/compute/task_states.py:L47)
- **global-mutation**: RESIZE_MIGRATING = fields.InstanceTaskState.RESIZE_MIGRATING (src/nova/compute/task_states.py:L48)
- **global-mutation**: RESIZE_MIGRATED = fields.InstanceTaskState.RESIZE_MIGRATED (src/nova/compute/task_states.py:L49)
- **global-mutation**: RESIZE_FINISH = fields.InstanceTaskState.RESIZE_FINISH (src/nova/compute/task_states.py:L50)
- **global-mutation**: RESIZE_REVERTING = fields.InstanceTaskState.RESIZE_REVERTING (src/nova/compute/task_states.py:L53)
- **global-mutation**: RESIZE_CONFIRMING = fields.InstanceTaskState.RESIZE_CONFIRMING (src/nova/compute/task_states.py:L56)
- **global-mutation**: REBOOTING = fields.InstanceTaskState.REBOOTING (src/nova/compute/task_states.py:L59)
- **global-mutation**: REBOOT_PENDING = fields.InstanceTaskState.REBOOT_PENDING (src/nova/compute/task_states.py:L60)
- **global-mutation**: REBOOT_STARTED = fields.InstanceTaskState.REBOOT_STARTED (src/nova/compute/task_states.py:L61)
- **global-mutation**: REBOOTING_HARD = fields.InstanceTaskState.REBOOTING_HARD (src/nova/compute/task_states.py:L62)
- **global-mutation**: REBOOT_PENDING_HARD = fields.InstanceTaskState.REBOOT_PENDING_HARD (src/nova/compute/task_states.py:L63)
- **global-mutation**: REBOOT_STARTED_HARD = fields.InstanceTaskState.REBOOT_STARTED_HARD (src/nova/compute/task_states.py:L64)
- **global-mutation**: PAUSING = fields.InstanceTaskState.PAUSING (src/nova/compute/task_states.py:L67)
- **global-mutation**: UNPAUSING = fields.InstanceTaskState.UNPAUSING (src/nova/compute/task_states.py:L70)
- **global-mutation**: SUSPENDING = fields.InstanceTaskState.SUSPENDING (src/nova/compute/task_states.py:L73)
- **global-mutation**: RESUMING = fields.InstanceTaskState.RESUMING (src/nova/compute/task_states.py:L76)
- **global-mutation**: POWERING_OFF = fields.InstanceTaskState.POWERING_OFF (src/nova/compute/task_states.py:L79)
- **global-mutation**: POWERING_ON = fields.InstanceTaskState.POWERING_ON (src/nova/compute/task_states.py:L82)
- **global-mutation**: RESCUING = fields.InstanceTaskState.RESCUING (src/nova/compute/task_states.py:L85)
- **global-mutation**: UNRESCUING = fields.InstanceTaskState.UNRESCUING (src/nova/compute/task_states.py:L88)
- **global-mutation**: REBUILDING = fields.InstanceTaskState.REBUILDING (src/nova/compute/task_states.py:L91)
- **global-mutation**: REBUILD_BLOCK_DEVICE_MAPPING = \ (src/nova/compute/task_states.py:L92)
- **global-mutation**: REBUILD_SPAWNING = fields.InstanceTaskState.REBUILD_SPAWNING (src/nova/compute/task_states.py:L94)
- **global-mutation**: MIGRATING = fields.InstanceTaskState.MIGRATING (src/nova/compute/task_states.py:L97)
- **global-mutation**: DELETING = fields.InstanceTaskState.DELETING (src/nova/compute/task_states.py:L100)
- **global-mutation**: SOFT_DELETING = fields.InstanceTaskState.SOFT_DELETING (src/nova/compute/task_states.py:L103)
- **global-mutation**: RESTORING = fields.InstanceTaskState.RESTORING (src/nova/compute/task_states.py:L106)
- **global-mutation**: SHELVING = fields.InstanceTaskState.SHELVING (src/nova/compute/task_states.py:L109)
- **global-mutation**: SHELVING_IMAGE_PENDING_UPLOAD = \ (src/nova/compute/task_states.py:L110)
- **global-mutation**: SHELVING_IMAGE_UPLOADING = fields.InstanceTaskState.SHELVING_IMAGE_UPLOADING (src/nova/compute/task_states.py:L112)
- **global-mutation**: SHELVING_OFFLOADING = fields.InstanceTaskState.SHELVING_OFFLOADING (src/nova/compute/task_states.py:L115)
- **global-mutation**: UNSHELVING = fields.InstanceTaskState.UNSHELVING (src/nova/compute/task_states.py:L118)
- **global-mutation**: ALLOW_REBOOT = [None, REBOOTING, REBOOT_PENDING, REBOOT_STARTED, RESUMING, (src/nova/compute/task_states.py:L120)

