# src/nova/notifications/objects/instance.py

## Overview

This file implements the `instance` module, defining 28 classs, 5 classmethods, 32 constants, 28 fields, 22 methods, 6 imports, 32 side effects, 1 security surface entry.

Lines: total 815, code 550, comment 148, blank 117

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/notifications/objects/instance.py:L21–L21` |
| `InstancePayload` | class | — | exported | not declared | — | `src/nova/notifications/objects/instance.py:L25–L141` |
| `InstancePayload.SCHEMA` | constant | — | public | not declared | — | `src/nova/notifications/objects/instance.py:L26–L61` |
| `InstancePayload.VERSION` | constant | — | public | not declared | — | `src/nova/notifications/objects/instance.py:L73–L73` |
| `InstancePayload.fields` | field | — | public | not declared | — | `src/nova/notifications/objects/instance.py:L74–L120` |
| `InstancePayload.__init__` | method | (self, context, instance, bdms=None) | public | not declared | 4/16 | `src/nova/notifications/objects/instance.py:L122–L141` |
| `InstanceActionPayload` | class | — | exported | not declared | — | `src/nova/notifications/objects/instance.py:L145–L168` |
| `InstanceActionPayload.VERSION` | constant | — | public | not declared | — | `src/nova/notifications/objects/instance.py:L158–L158` |
| `InstanceActionPayload.fields` | field | — | public | not declared | — | `src/nova/notifications/objects/instance.py:L159–L162` |
| `InstanceActionPayload.__init__` | method | (self, context, instance, fault, bdms=None) | public | not declared | 1/5 | `src/nova/notifications/objects/instance.py:L164–L168` |
| `InstanceActionVolumePayload` | class | — | exported | not declared | — | `src/nova/notifications/objects/instance.py:L172–L192` |
| `InstanceActionVolumePayload.VERSION` | constant | — | public | not declared | — | `src/nova/notifications/objects/instance.py:L182–L182` |
| `InstanceActionVolumePayload.fields` | field | — | public | not declared | — | `src/nova/notifications/objects/instance.py:L183–L185` |
| `InstanceActionVolumePayload.__init__` | method | (self, context, instance, fault, volume_id) | public | not declared | 1/6 | `src/nova/notifications/objects/instance.py:L187–L192` |
| `InstanceActionSharePayload` | class | — | exported | not declared | — | `src/nova/notifications/objects/instance.py:L196–L208` |
| `InstanceActionSharePayload.VERSION` | constant | — | public | not declared | — | `src/nova/notifications/objects/instance.py:L198–L198` |
| `InstanceActionSharePayload.fields` | field | — | public | not declared | — | `src/nova/notifications/objects/instance.py:L199–L201` |
| `InstanceActionSharePayload.__init__` | method | (self, context, instance, fault, share_id) | public | not declared | 1/6 | `src/nova/notifications/objects/instance.py:L203–L208` |
| `InstanceActionVolumeSwapPayload` | class | — | exported | not declared | — | `src/nova/notifications/objects/instance.py:L212–L237` |
| `InstanceActionVolumeSwapPayload.VERSION` | constant | — | public | not declared | — | `src/nova/notifications/objects/instance.py:L225–L225` |
| `InstanceActionVolumeSwapPayload.fields` | field | — | public | not declared | — | `src/nova/notifications/objects/instance.py:L226–L229` |
| `InstanceActionVolumeSwapPayload.__init__` | method | (self, context, instance, fault, old_volume_id, new_volume_id) | public | not declared | 1/7 | `src/nova/notifications/objects/instance.py:L231–L237` |
| `InstanceCreatePayload` | class | — | exported | not declared | — | `src/nova/notifications/objects/instance.py:L241–L284` |
| `InstanceCreatePayload.VERSION` | constant | — | public | not declared | — | `src/nova/notifications/objects/instance.py:L262–L262` |
| `InstanceCreatePayload.fields` | field | — | public | not declared | — | `src/nova/notifications/objects/instance.py:L263–L269` |
| `InstanceCreatePayload.__init__` | method | (self, context, instance, fault, bdms) | public | not declared | 4/14 | `src/nova/notifications/objects/instance.py:L271–L284` |
| `InstanceActionResizePrepPayload` | class | — | exported | not declared | — | `src/nova/notifications/objects/instance.py:L288–L307` |
| `InstanceActionResizePrepPayload.VERSION` | constant | — | public | not declared | — | `src/nova/notifications/objects/instance.py:L297–L297` |
| `InstanceActionResizePrepPayload.fields` | field | — | public | not declared | — | `src/nova/notifications/objects/instance.py:L298–L300` |
| `InstanceActionResizePrepPayload.__init__` | method | (self, context, instance, fault, new_flavor) | public | not declared | 1/6 | `src/nova/notifications/objects/instance.py:L302–L307` |
| `InstanceUpdatePayload` | class | — | exported | not declared | — | `src/nova/notifications/objects/instance.py:L311–L341` |
| `InstanceUpdatePayload.VERSION` | constant | — | public | not declared | — | `src/nova/notifications/objects/instance.py:L325–L325` |
| `InstanceUpdatePayload.fields` | field | — | public | not declared | — | `src/nova/notifications/objects/instance.py:L326–L331` |
| `InstanceUpdatePayload.__init__` | method | (self, context, instance, state_update, audit_period, old_display_name) | public | not declared | 2/9 | `src/nova/notifications/objects/instance.py:L333–L341` |
| `InstanceActionRescuePayload` | class | — | exported | not declared | — | `src/nova/notifications/objects/instance.py:L345–L362` |
| `InstanceActionRescuePayload.VERSION` | constant | — | public | not declared | — | `src/nova/notifications/objects/instance.py:L352–L352` |
| `InstanceActionRescuePayload.fields` | field | — | public | not declared | — | `src/nova/notifications/objects/instance.py:L353–L355` |
| `InstanceActionRescuePayload.__init__` | method | (self, context, instance, fault, rescue_image_ref) | public | not declared | 1/6 | `src/nova/notifications/objects/instance.py:L357–L362` |
| `InstanceActionRebuildPayload` | class | — | exported | not declared | — | `src/nova/notifications/objects/instance.py:L366–L392` |
| `InstanceActionRebuildPayload.VERSION` | constant | — | public | not declared | — | `src/nova/notifications/objects/instance.py:L378–L378` |
| `InstanceActionRebuildPayload.fields` | field | — | public | not declared | — | `src/nova/notifications/objects/instance.py:L379–L382` |
| `InstanceActionRebuildPayload.__init__` | method | (self, context, instance, fault, bdms=None) | public | not declared | 2/9 | `src/nova/notifications/objects/instance.py:L384–L392` |
| `IpPayload` | class | — | exported | not declared | — | `src/nova/notifications/objects/instance.py:L396–L437` |
| `IpPayload.VERSION` | constant | — | public | not declared | — | `src/nova/notifications/objects/instance.py:L398–L398` |
| `IpPayload.fields` | field | — | public | not declared | — | `src/nova/notifications/objects/instance.py:L399–L407` |
| `IpPayload.__init__` | method | (self, label, mac, meta, port_uuid, version, address, device_name) | public | not declared | 1/10 | `src/nova/notifications/objects/instance.py:L409–L418` |
| `IpPayload.from_network_info` | method | (cls, network_info) | public | `ips` (src/nova/notifications/objects/instance.py:L437) | 4/14 | `src/nova/notifications/objects/instance.py:L421–L437` |
| `AuditPeriodPayload` | class | — | exported | not declared | — | `src/nova/notifications/objects/instance.py:L441–L452` |
| `AuditPeriodPayload.VERSION` | constant | — | public | not declared | — | `src/nova/notifications/objects/instance.py:L443–L443` |
| `AuditPeriodPayload.fields` | field | — | public | not declared | — | `src/nova/notifications/objects/instance.py:L444–L447` |
| `AuditPeriodPayload.__init__` | method | (self, audit_period_beginning, audit_period_ending) | public | not declared | 1/4 | `src/nova/notifications/objects/instance.py:L449–L452` |
| `BlockDevicePayload` | class | — | exported | not declared | — | `src/nova/notifications/objects/instance.py:L456–L503` |
| `BlockDevicePayload.VERSION` | constant | — | public | not declared | — | `src/nova/notifications/objects/instance.py:L458–L458` |
| `BlockDevicePayload.SCHEMA` | constant | — | public | not declared | — | `src/nova/notifications/objects/instance.py:L460–L466` |
| `BlockDevicePayload.fields` | field | — | public | not declared | — | `src/nova/notifications/objects/instance.py:L468–L474` |
| `BlockDevicePayload.__init__` | method | (self, bdm) | public | not declared | 1/3 | `src/nova/notifications/objects/instance.py:L476–L478` |
| `BlockDevicePayload.from_instance` | method | (cls, instance) | public | `None` (src/nova/notifications/objects/instance.py:L486); `cls.from_bdms(instance_bdms)` (src/nova/notifications/objects/instance.py:L490); `[]` (src/nova/notifications/objects/instance.py:L492) | 3/8 | `src/nova/notifications/objects/instance.py:L481–L492` |
| `BlockDevicePayload.from_bdms` | method | (cls, bdms) | public | `payloads` (src/nova/notifications/objects/instance.py:L503) | 3/6 | `src/nova/notifications/objects/instance.py:L495–L503` |
| `SharePayload` | class | — | exported | not declared | — | `src/nova/notifications/objects/instance.py:L507–L548` |
| `SharePayload.VERSION` | constant | — | public | not declared | — | `src/nova/notifications/objects/instance.py:L509–L509` |
| `SharePayload.SCHEMA` | constant | — | public | not declared | — | `src/nova/notifications/objects/instance.py:L511–L518` |
| `SharePayload.fields` | field | — | public | not declared | — | `src/nova/notifications/objects/instance.py:L520–L526` |
| `SharePayload.__init__` | method | (self, share) | public | not declared | 1/3 | `src/nova/notifications/objects/instance.py:L528–L530` |
| `SharePayload.from_instance` | method | (cls, instance) | public | `None` (src/nova/notifications/objects/instance.py:L538); `[cls(share) for share in instance_shares]` (src/nova/notifications/objects/instance.py:L541) | 3/5 | `src/nova/notifications/objects/instance.py:L533–L541` |
| `SharePayload.from_shares` | method | (cls, shares) | public | `[cls(share) for share in shares]` (src/nova/notifications/objects/instance.py:L548) | 2/2 | `src/nova/notifications/objects/instance.py:L544–L548` |
| `InstanceStateUpdatePayload` | class | — | exported | not declared | — | `src/nova/notifications/objects/instance.py:L552–L567` |
| `InstanceStateUpdatePayload.VERSION` | constant | — | public | not declared | — | `src/nova/notifications/objects/instance.py:L554–L554` |
| `InstanceStateUpdatePayload.fields` | field | — | public | not declared | — | `src/nova/notifications/objects/instance.py:L555–L560` |
| `InstanceStateUpdatePayload.__init__` | method | (self, old_state, state, old_task_state, new_task_state) | public | not declared | 1/6 | `src/nova/notifications/objects/instance.py:L562–L567` |
| `InstanceActionNotification` | class | — | exported | not declared | — | `src/nova/notifications/objects/instance.py:L637–L643` |
| `InstanceActionNotification.VERSION` | constant | — | public | not declared | — | `src/nova/notifications/objects/instance.py:L639–L639` |
| `InstanceActionNotification.fields` | field | — | public | not declared | — | `src/nova/notifications/objects/instance.py:L641–L643` |
| `InstanceUpdateNotification` | class | — | exported | not declared | — | `src/nova/notifications/objects/instance.py:L648–L654` |
| `InstanceUpdateNotification.VERSION` | constant | — | public | not declared | — | `src/nova/notifications/objects/instance.py:L650–L650` |
| `InstanceUpdateNotification.fields` | field | — | public | not declared | — | `src/nova/notifications/objects/instance.py:L652–L654` |
| `InstanceActionVolumeSwapNotification` | class | — | exported | not declared | — | `src/nova/notifications/objects/instance.py:L661–L667` |
| `InstanceActionVolumeSwapNotification.VERSION` | constant | — | public | not declared | — | `src/nova/notifications/objects/instance.py:L663–L663` |
| `InstanceActionVolumeSwapNotification.fields` | field | — | public | not declared | — | `src/nova/notifications/objects/instance.py:L665–L667` |
| `InstanceActionVolumeNotification` | class | — | exported | not declared | — | `src/nova/notifications/objects/instance.py:L676–L682` |
| `InstanceActionVolumeNotification.VERSION` | constant | — | public | not declared | — | `src/nova/notifications/objects/instance.py:L678–L678` |
| `InstanceActionVolumeNotification.fields` | field | — | public | not declared | — | `src/nova/notifications/objects/instance.py:L680–L682` |
| `InstanceActionShareNotification` | class | — | exported | not declared | — | `src/nova/notifications/objects/instance.py:L692–L698` |
| `InstanceActionShareNotification.VERSION` | constant | — | public | not declared | — | `src/nova/notifications/objects/instance.py:L694–L694` |
| `InstanceActionShareNotification.fields` | field | — | public | not declared | — | `src/nova/notifications/objects/instance.py:L696–L698` |
| `InstanceCreateNotification` | class | — | exported | not declared | — | `src/nova/notifications/objects/instance.py:L705–L711` |
| `InstanceCreateNotification.VERSION` | constant | — | public | not declared | — | `src/nova/notifications/objects/instance.py:L707–L707` |
| `InstanceCreateNotification.fields` | field | — | public | not declared | — | `src/nova/notifications/objects/instance.py:L709–L711` |
| `InstanceActionResizePrepNotification` | class | — | exported | not declared | — | `src/nova/notifications/objects/instance.py:L717–L723` |
| `InstanceActionResizePrepNotification.VERSION` | constant | — | public | not declared | — | `src/nova/notifications/objects/instance.py:L719–L719` |
| `InstanceActionResizePrepNotification.fields` | field | — | public | not declared | — | `src/nova/notifications/objects/instance.py:L721–L723` |
| `InstanceActionSnapshotNotification` | class | — | exported | not declared | — | `src/nova/notifications/objects/instance.py:L729–L735` |
| `InstanceActionSnapshotNotification.VERSION` | constant | — | public | not declared | — | `src/nova/notifications/objects/instance.py:L731–L731` |
| `InstanceActionSnapshotNotification.fields` | field | — | public | not declared | — | `src/nova/notifications/objects/instance.py:L733–L735` |
| `InstanceActionRescueNotification` | class | — | exported | not declared | — | `src/nova/notifications/objects/instance.py:L741–L747` |
| `InstanceActionRescueNotification.VERSION` | constant | — | public | not declared | — | `src/nova/notifications/objects/instance.py:L743–L743` |
| `InstanceActionRescueNotification.fields` | field | — | public | not declared | — | `src/nova/notifications/objects/instance.py:L745–L747` |
| `InstanceActionRebuildNotification` | class | — | exported | not declared | — | `src/nova/notifications/objects/instance.py:L755–L761` |
| `InstanceActionRebuildNotification.VERSION` | constant | — | public | not declared | — | `src/nova/notifications/objects/instance.py:L757–L757` |
| `InstanceActionRebuildNotification.fields` | field | — | public | not declared | — | `src/nova/notifications/objects/instance.py:L759–L761` |
| `InstanceActionSnapshotPayload` | class | — | exported | not declared | — | `src/nova/notifications/objects/instance.py:L765–L786` |
| `InstanceActionSnapshotPayload.VERSION` | constant | — | public | not declared | — | `src/nova/notifications/objects/instance.py:L776–L776` |
| `InstanceActionSnapshotPayload.fields` | field | — | public | not declared | — | `src/nova/notifications/objects/instance.py:L777–L779` |
| `InstanceActionSnapshotPayload.__init__` | method | (self, context, instance, fault, snapshot_image_id) | public | not declared | 1/6 | `src/nova/notifications/objects/instance.py:L781–L786` |
| `InstanceExistsPayload` | class | — | exported | not declared | — | `src/nova/notifications/objects/instance.py:L790–L804` |
| `InstanceExistsPayload.VERSION` | constant | — | public | not declared | — | `src/nova/notifications/objects/instance.py:L797–L797` |
| `InstanceExistsPayload.fields` | field | — | public | not declared | — | `src/nova/notifications/objects/instance.py:L798–L800` |
| `InstanceExistsPayload.__init__` | method | (self, context, instance, audit_period) | public | not declared | 1/3 | `src/nova/notifications/objects/instance.py:L802–L804` |
| `InstanceExistsNotification` | class | — | exported | not declared | — | `src/nova/notifications/objects/instance.py:L809–L815` |
| `InstanceExistsNotification.VERSION` | constant | — | public | not declared | — | `src/nova/notifications/objects/instance.py:L811–L811` |
| `InstanceExistsNotification.fields` | field | — | public | not declared | — | `src/nova/notifications/objects/instance.py:L813–L815` |
| `IpPayload.from_network_info` | classmethod | — | public | not declared | — | `src/nova/notifications/objects/instance.py:L420–L437` |
| `BlockDevicePayload.from_instance` | classmethod | — | public | not declared | — | `src/nova/notifications/objects/instance.py:L480–L492` |
| `BlockDevicePayload.from_bdms` | classmethod | — | public | not declared | — | `src/nova/notifications/objects/instance.py:L494–L503` |
| `SharePayload.from_instance` | classmethod | — | public | not declared | — | `src/nova/notifications/objects/instance.py:L532–L541` |
| `SharePayload.from_shares` | classmethod | — | public | not declared | — | `src/nova/notifications/objects/instance.py:L543–L548` |

## Dependencies

- `import nova.conf` (src/nova/notifications/objects/instance.py:L13)
- `nova.notifications.objects`: imports `base` (src/nova/notifications/objects/instance.py:L14)
- `nova.notifications.objects`: imports `flavor as flavor_payload` (src/nova/notifications/objects/instance.py:L15)
- `nova.notifications.objects`: imports `keypair as keypair_payload` (src/nova/notifications/objects/instance.py:L16)
- `nova.objects`: imports `base as nova_base` (src/nova/notifications/objects/instance.py:L17)
- `nova.objects`: imports `fields` (src/nova/notifications/objects/instance.py:L18)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/notifications/objects/instance.py:L21)
- **global-mutation**: SCHEMA = { (src/nova/notifications/objects/instance.py:L26)
- **global-mutation**: VERSION = '1.9' (src/nova/notifications/objects/instance.py:L73)
- **global-mutation**: VERSION = '1.9' (src/nova/notifications/objects/instance.py:L158)
- **global-mutation**: VERSION = '1.7' (src/nova/notifications/objects/instance.py:L182)
- **global-mutation**: VERSION = '1.0' (src/nova/notifications/objects/instance.py:L198)
- **global-mutation**: VERSION = '1.9' (src/nova/notifications/objects/instance.py:L225)
- **global-mutation**: VERSION = '1.13' (src/nova/notifications/objects/instance.py:L262)
- **global-mutation**: VERSION = '1.4' (src/nova/notifications/objects/instance.py:L297)
- **global-mutation**: VERSION = '2.1' (src/nova/notifications/objects/instance.py:L325)
- **global-mutation**: VERSION = '1.4' (src/nova/notifications/objects/instance.py:L352)
- **global-mutation**: VERSION = '1.10' (src/nova/notifications/objects/instance.py:L378)
- **global-mutation**: VERSION = '1.0' (src/nova/notifications/objects/instance.py:L398)
- **global-mutation**: VERSION = '1.0' (src/nova/notifications/objects/instance.py:L443)
- **global-mutation**: VERSION = '1.0' (src/nova/notifications/objects/instance.py:L458)
- **global-mutation**: SCHEMA = { (src/nova/notifications/objects/instance.py:L460)
- **global-mutation**: VERSION = '1.0' (src/nova/notifications/objects/instance.py:L509)
- **global-mutation**: SCHEMA = { (src/nova/notifications/objects/instance.py:L511)
- **global-mutation**: VERSION = '1.0' (src/nova/notifications/objects/instance.py:L554)
- **global-mutation**: VERSION = '1.0' (src/nova/notifications/objects/instance.py:L639)
- **global-mutation**: VERSION = '1.0' (src/nova/notifications/objects/instance.py:L650)
- **global-mutation**: VERSION = '1.0' (src/nova/notifications/objects/instance.py:L663)
- **global-mutation**: VERSION = '1.0' (src/nova/notifications/objects/instance.py:L678)
- **global-mutation**: VERSION = '1.0' (src/nova/notifications/objects/instance.py:L694)
- **global-mutation**: VERSION = '1.0' (src/nova/notifications/objects/instance.py:L707)
- **global-mutation**: VERSION = '1.0' (src/nova/notifications/objects/instance.py:L719)
- **global-mutation**: VERSION = '1.0' (src/nova/notifications/objects/instance.py:L731)
- **global-mutation**: VERSION = '1.0' (src/nova/notifications/objects/instance.py:L743)
- **global-mutation**: VERSION = '1.0' (src/nova/notifications/objects/instance.py:L757)
- **global-mutation**: VERSION = '1.10' (src/nova/notifications/objects/instance.py:L776)
- **global-mutation**: VERSION = '2.1' (src/nova/notifications/objects/instance.py:L797)
- **global-mutation**: VERSION = '1.0' (src/nova/notifications/objects/instance.py:L811)

## Security Surface

- **sink** (`db-write`): @base.notification_sample('instance-update.json') (src/nova/notifications/objects/instance.py:L646)

