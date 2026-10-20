# src/nova/compute/instance_actions.py

## Overview

This file implements the `instance_actions` module, defining 40 constants, 40 side effects.

Lines: total 79, code 50, comment 23, blank 6

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CREATE` | constant | — | exported | not declared | — | `src/nova/compute/instance_actions.py:L30–L30` |
| `DELETE` | constant | — | exported | not declared | — | `src/nova/compute/instance_actions.py:L31–L31` |
| `EVACUATE` | constant | — | exported | not declared | — | `src/nova/compute/instance_actions.py:L32–L32` |
| `RESTORE` | constant | — | exported | not declared | — | `src/nova/compute/instance_actions.py:L33–L33` |
| `STOP` | constant | — | exported | not declared | — | `src/nova/compute/instance_actions.py:L34–L34` |
| `START` | constant | — | exported | not declared | — | `src/nova/compute/instance_actions.py:L35–L35` |
| `REBOOT` | constant | — | exported | not declared | — | `src/nova/compute/instance_actions.py:L36–L36` |
| `REBUILD` | constant | — | exported | not declared | — | `src/nova/compute/instance_actions.py:L37–L37` |
| `REVERT_RESIZE` | constant | — | exported | not declared | — | `src/nova/compute/instance_actions.py:L38–L38` |
| `CONFIRM_RESIZE` | constant | — | exported | not declared | — | `src/nova/compute/instance_actions.py:L39–L39` |
| `RESIZE` | constant | — | exported | not declared | — | `src/nova/compute/instance_actions.py:L40–L40` |
| `MIGRATE` | constant | — | exported | not declared | — | `src/nova/compute/instance_actions.py:L41–L41` |
| `PAUSE` | constant | — | exported | not declared | — | `src/nova/compute/instance_actions.py:L42–L42` |
| `UNPAUSE` | constant | — | exported | not declared | — | `src/nova/compute/instance_actions.py:L43–L43` |
| `SUSPEND` | constant | — | exported | not declared | — | `src/nova/compute/instance_actions.py:L44–L44` |
| `RESUME` | constant | — | exported | not declared | — | `src/nova/compute/instance_actions.py:L45–L45` |
| `RESCUE` | constant | — | exported | not declared | — | `src/nova/compute/instance_actions.py:L46–L46` |
| `UNRESCUE` | constant | — | exported | not declared | — | `src/nova/compute/instance_actions.py:L47–L47` |
| `CHANGE_PASSWORD` | constant | — | exported | not declared | — | `src/nova/compute/instance_actions.py:L48–L48` |
| `SHELVE` | constant | — | exported | not declared | — | `src/nova/compute/instance_actions.py:L49–L49` |
| `SHELVE_OFFLOAD` | constant | — | exported | not declared | — | `src/nova/compute/instance_actions.py:L50–L50` |
| `UNSHELVE` | constant | — | exported | not declared | — | `src/nova/compute/instance_actions.py:L51–L51` |
| `LIVE_MIGRATION` | constant | — | exported | not declared | — | `src/nova/compute/instance_actions.py:L52–L52` |
| `LIVE_MIGRATION_CANCEL` | constant | — | exported | not declared | — | `src/nova/compute/instance_actions.py:L53–L53` |
| `LIVE_MIGRATION_FORCE_COMPLETE` | constant | — | exported | not declared | — | `src/nova/compute/instance_actions.py:L54–L54` |
| `TRIGGER_CRASH_DUMP` | constant | — | exported | not declared | — | `src/nova/compute/instance_actions.py:L55–L55` |
| `EXTEND_VOLUME` | constant | — | exported | not declared | — | `src/nova/compute/instance_actions.py:L63–L63` |
| `ATTACH_INTERFACE` | constant | — | exported | not declared | — | `src/nova/compute/instance_actions.py:L64–L64` |
| `DETACH_INTERFACE` | constant | — | exported | not declared | — | `src/nova/compute/instance_actions.py:L65–L65` |
| `ATTACH_VOLUME` | constant | — | exported | not declared | — | `src/nova/compute/instance_actions.py:L66–L66` |
| `DETACH_VOLUME` | constant | — | exported | not declared | — | `src/nova/compute/instance_actions.py:L67–L67` |
| `ATTACH_SHARE` | constant | — | exported | not declared | — | `src/nova/compute/instance_actions.py:L68–L68` |
| `DETACH_SHARE` | constant | — | exported | not declared | — | `src/nova/compute/instance_actions.py:L69–L69` |
| `SWAP_VOLUME` | constant | — | exported | not declared | — | `src/nova/compute/instance_actions.py:L70–L70` |
| `LOCK` | constant | — | exported | not declared | — | `src/nova/compute/instance_actions.py:L71–L71` |
| `UNLOCK` | constant | — | exported | not declared | — | `src/nova/compute/instance_actions.py:L72–L72` |
| `BACKUP` | constant | — | exported | not declared | — | `src/nova/compute/instance_actions.py:L73–L73` |
| `CREATE_IMAGE` | constant | — | exported | not declared | — | `src/nova/compute/instance_actions.py:L74–L74` |
| `RESET_STATE` | constant | — | exported | not declared | — | `src/nova/compute/instance_actions.py:L75–L75` |
| `NOVA_MANAGE_REFRESH_VOLUME_ATTACHMENT` | constant | — | exported | not declared | — | `src/nova/compute/instance_actions.py:L79–L79` |

## Dependencies

None.

## Side Effects

- **global-mutation**: CREATE = 'create' (src/nova/compute/instance_actions.py:L30)
- **global-mutation**: DELETE = 'delete' (src/nova/compute/instance_actions.py:L31)
- **global-mutation**: EVACUATE = 'evacuate' (src/nova/compute/instance_actions.py:L32)
- **global-mutation**: RESTORE = 'restore' (src/nova/compute/instance_actions.py:L33)
- **global-mutation**: STOP = 'stop' (src/nova/compute/instance_actions.py:L34)
- **global-mutation**: START = 'start' (src/nova/compute/instance_actions.py:L35)
- **global-mutation**: REBOOT = 'reboot' (src/nova/compute/instance_actions.py:L36)
- **global-mutation**: REBUILD = 'rebuild' (src/nova/compute/instance_actions.py:L37)
- **global-mutation**: REVERT_RESIZE = 'revertResize' (src/nova/compute/instance_actions.py:L38)
- **global-mutation**: CONFIRM_RESIZE = 'confirmResize' (src/nova/compute/instance_actions.py:L39)
- **global-mutation**: RESIZE = 'resize' (src/nova/compute/instance_actions.py:L40)
- **global-mutation**: MIGRATE = 'migrate' (src/nova/compute/instance_actions.py:L41)
- **global-mutation**: PAUSE = 'pause' (src/nova/compute/instance_actions.py:L42)
- **global-mutation**: UNPAUSE = 'unpause' (src/nova/compute/instance_actions.py:L43)
- **global-mutation**: SUSPEND = 'suspend' (src/nova/compute/instance_actions.py:L44)
- **global-mutation**: RESUME = 'resume' (src/nova/compute/instance_actions.py:L45)
- **global-mutation**: RESCUE = 'rescue' (src/nova/compute/instance_actions.py:L46)
- **global-mutation**: UNRESCUE = 'unrescue' (src/nova/compute/instance_actions.py:L47)
- **global-mutation**: CHANGE_PASSWORD = 'changePassword' (src/nova/compute/instance_actions.py:L48)
- **global-mutation**: SHELVE = 'shelve' (src/nova/compute/instance_actions.py:L49)
- **global-mutation**: SHELVE_OFFLOAD = 'shelveOffload' (src/nova/compute/instance_actions.py:L50)
- **global-mutation**: UNSHELVE = 'unshelve' (src/nova/compute/instance_actions.py:L51)
- **global-mutation**: LIVE_MIGRATION = 'live-migration' (src/nova/compute/instance_actions.py:L52)
- **global-mutation**: LIVE_MIGRATION_CANCEL = 'live_migration_cancel' (src/nova/compute/instance_actions.py:L53)
- **global-mutation**: LIVE_MIGRATION_FORCE_COMPLETE = 'live_migration_force_complete' (src/nova/compute/instance_actions.py:L54)
- **global-mutation**: TRIGGER_CRASH_DUMP = 'trigger_crash_dump' (src/nova/compute/instance_actions.py:L55)
- **global-mutation**: EXTEND_VOLUME = 'extend_volume' (src/nova/compute/instance_actions.py:L63)
- **global-mutation**: ATTACH_INTERFACE = 'attach_interface' (src/nova/compute/instance_actions.py:L64)
- **global-mutation**: DETACH_INTERFACE = 'detach_interface' (src/nova/compute/instance_actions.py:L65)
- **global-mutation**: ATTACH_VOLUME = 'attach_volume' (src/nova/compute/instance_actions.py:L66)
- **global-mutation**: DETACH_VOLUME = 'detach_volume' (src/nova/compute/instance_actions.py:L67)
- **global-mutation**: ATTACH_SHARE = 'attach_share' (src/nova/compute/instance_actions.py:L68)
- **global-mutation**: DETACH_SHARE = 'detach_share' (src/nova/compute/instance_actions.py:L69)
- **global-mutation**: SWAP_VOLUME = 'swap_volume' (src/nova/compute/instance_actions.py:L70)
- **global-mutation**: LOCK = 'lock' (src/nova/compute/instance_actions.py:L71)
- **global-mutation**: UNLOCK = 'unlock' (src/nova/compute/instance_actions.py:L72)
- **global-mutation**: BACKUP = 'createBackup' (src/nova/compute/instance_actions.py:L73)
- **global-mutation**: CREATE_IMAGE = 'createImage' (src/nova/compute/instance_actions.py:L74)
- **global-mutation**: RESET_STATE = 'resetState' (src/nova/compute/instance_actions.py:L75)
- **global-mutation**: NOVA_MANAGE_REFRESH_VOLUME_ATTACHMENT = 'refresh_volume_attachment' (src/nova/compute/instance_actions.py:L79)

