# src/nova/compute/share_management.py

## Overview

This file implements the `share_management` module, defining 1 class, 2 constants, 4 functions, 24 methods, 3 staticmethods, 12 imports, 2 side effects, 2 security surface entries.

Lines: total 763, code 598, comment 89, blank 76

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/compute/share_management.py:L31–L31` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/compute/share_management.py:L32–L32` |
| `share_synchronized` | function | (fn) | exported | `wrapper` (src/nova/compute/share_management.py:L48) | 1/4 | `src/nova/compute/share_management.py:L35–L48` |
| `share_synchronized.wrapper` | function | (self, context, instance, share_mapping, *args, **kwargs) | public | `_inner()` (src/nova/compute/share_management.py:L47) | — | `src/nova/compute/share_management.py:L42–L47` |
| `share_synchronized.wrapper._inner` | function | — | private | `fn(self, context, instance, share_mapping, *args, **kwargs)` (src/nova/compute/share_management.py:L45) | — | `src/nova/compute/share_management.py:L44–L46` |
| `ShareManager` | class | — | exported | not declared | — | `src/nova/compute/share_management.py:L51–L763` |
| `ShareManager.__init__` | method | (self, manila_api, compute_driver) | public | not declared | 1/3 | `src/nova/compute/share_management.py:L54–L56` |
| `ShareManager._set_instance_error_state` | method | (self, instance) | private | not declared | 2/8 | `src/nova/compute/share_management.py:L58–L65` |
| `ShareManager.get_share_info` | method | (self, context, instance, check_status=True) | public | `share_info` (src/nova/compute/share_management.py:L103) | 6/33 | `src/nova/compute/share_management.py:L67–L103` |
| `ShareManager._apply_access_policy` | method | (self, context, share_mapping) | private | not declared | 1/11 | `src/nova/compute/share_management.py:L105–L117` |
| `ShareManager._wait_for_access_policy` | method | (self, context, share_mapping) | private | `` (src/nova/compute/share_management.py:L133) | 3/26 | `src/nova/compute/share_management.py:L119–L145` |
| `ShareManager.allow_share` | method | (self, context, instance, share_mapping) | public | not declared | 4/79 | `src/nova/compute/share_management.py:L148–L230` |
| `ShareManager.deny_share` | method | (self, context, instance, share_mapping) | public | not declared | 5/75 | `src/nova/compute/share_management.py:L233–L315` |
| `ShareManager._filter_mappings_to_host` | method | (context, share_mappings, host, keep_uuid) | private | `[ sm for sm in share_mappings if sm.instance_uuid in same_host_uuids ]` (src/nova/compute/share_management.py:L339) | 7/14 | `src/nova/compute/share_management.py:L318–L342` |
| `ShareManager.check_share_usage` | method | (self, context, instance, share_mapping) | public | `not all( ( ( sm.instance_uuid == instance_uuid and sm.status in ( fields.ShareMappingStatus.INACTIVE, fields.ShareMappingStatus.ERROR, ) ) or sm.status == fields.ShareMappingStatus.DETACHING ) for sm ` (src/nova/compute/share_management.py:L390) | 8/32 | `src/nova/compute/share_management.py:L344–L402` |
| `ShareManager.mount_all` | method | (self, context, instance, share_info) | public | not declared | 3/10 | `src/nova/compute/share_management.py:L404–L413` |
| `ShareManager.umount_all` | method | (self, context, instance, share_info) | public | not declared | 2/3 | `src/nova/compute/share_management.py:L415–L417` |
| `ShareManager.cleanup_shares_after_migration` | method | (self, context, instance, migration, reason) | public | `` (src/nova/compute/share_management.py:L427); `` (src/nova/compute/share_management.py:L429) | 3/10 | `src/nova/compute/share_management.py:L419–L432` |
| `ShareManager.umount_and_revoke_all` | method | (self, context, instance, share_info, reason) | public | not declared | 5/17 | `src/nova/compute/share_management.py:L434–L456` |
| `ShareManager.mount` | method | (self, context, instance, share_mapping) | public | not declared | 4/19 | `src/nova/compute/share_management.py:L459–L480` |
| `ShareManager.umount` | method | (self, context, instance, share_mapping) | public | `self.driver.umount_share(context, instance, share_mapping)` (src/nova/compute/share_management.py:L491) | 3/14 | `src/nova/compute/share_management.py:L483–L499` |
| `ShareManager.grant_access` | method | (self, context, share_mapping) | public | `` (src/nova/compute/share_management.py:L523) | 2/15 | `src/nova/compute/share_management.py:L501–L526` |
| `ShareManager.revoke_access` | method | (self, context, share_mapping) | public | `` (src/nova/compute/share_management.py:L570) | 6/39 | `src/nova/compute/share_management.py:L528–L586` |
| `ShareManager.reconcile_stale_share_access` | method | (self, context) | public | `` (src/nova/compute/share_management.py:L591); `` (src/nova/compute/share_management.py:L605) | 9/31 | `src/nova/compute/share_management.py:L588–L632` |
| `ShareManager._reconcile_share` | method | (self, context, share_id) | private | not declared | 1/4 | `src/nova/compute/share_management.py:L634–L676` |
| `ShareManager._reconcile_share._locked` | function | — | private | `` (src/nova/compute/share_management.py:L646); `` (src/nova/compute/share_management.py:L665) | — | `src/nova/compute/share_management.py:L636–L674` |
| `ShareManager._reconcile_cephfs_rules` | method | (self, context, share_id, mappings, instances, rules) | private | not declared | 7/18 | `src/nova/compute/share_management.py:L678–L700` |
| `ShareManager._reconcile_nfs_rules` | method | (self, context, share_id, mappings, instances, rules) | private | `` (src/nova/compute/share_management.py:L708); `` (src/nova/compute/share_management.py:L715); `` (src/nova/compute/share_management.py:L725) | 10/21 | `src/nova/compute/share_management.py:L702–L730` |
| `ShareManager._revoke` | method | (self, context, share_id, access_type, access_to) | private | not declared | 3/15 | `src/nova/compute/share_management.py:L732–L747` |
| `ShareManager._instance_in_transit` | method | (instance) | private | `( instance.task_state is not None or instance.vm_state == vm_states.RESIZED )` (src/nova/compute/share_management.py:L755) | 2/5 | `src/nova/compute/share_management.py:L750–L758` |
| `ShareManager.set_mapping_status` | method | (share_mapping, status) | public | not declared | 1/3 | `src/nova/compute/share_management.py:L761–L763` |
| `ShareManager._filter_mappings_to_host` | staticmethod | — | private | not declared | — | `src/nova/compute/share_management.py:L317–L342` |
| `ShareManager._instance_in_transit` | staticmethod | — | private | not declared | — | `src/nova/compute/share_management.py:L749–L758` |
| `ShareManager.set_mapping_status` | staticmethod | — | public | not declared | — | `src/nova/compute/share_management.py:L760–L763` |

## Dependencies

- `import functools` (src/nova/compute/share_management.py:L16)
- `import time` (src/nova/compute/share_management.py:L17)
- `keystoneauth1`: imports `exceptions as keystone_exception` (src/nova/compute/share_management.py:L19)
- `openstack`: imports `exceptions as sdk_exc` (src/nova/compute/share_management.py:L20)
- `oslo_log`: imports `log as logging` (src/nova/compute/share_management.py:L21)
- `nova.compute`: imports `utils as compute_utils` (src/nova/compute/share_management.py:L23)
- `nova.compute`: imports `vm_states` (src/nova/compute/share_management.py:L24)
- `import nova.conf` (src/nova/compute/share_management.py:L25)
- `nova`: imports `exception` (src/nova/compute/share_management.py:L26)
- `nova`: imports `objects` (src/nova/compute/share_management.py:L27)
- `nova.objects`: imports `fields` (src/nova/compute/share_management.py:L28)
- `nova`: imports `utils` (src/nova/compute/share_management.py:L29)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/compute/share_management.py:L31)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/compute/share_management.py:L32)

## Security Surface

- **privilege** (`crypto-key`): from keystoneauth1 import exceptions as keystone_exception (src/nova/compute/share_management.py:L19)
- **sink** (`db-write`): same_host_uuids.update(inst.uuid for inst in others) (src/nova/compute/share_management.py:L338)

