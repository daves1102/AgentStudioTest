# src/nova/conductor/rpcapi.py

## Overview

This file implements the `rpcapi` module, defining 2 classs, 3 constants, 16 methods, 9 imports, 38 side effects, 1 security surface entry.

Lines: total 517, code 447, comment 23, blank 47

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/conductor/rpcapi.py:L29–L29` |
| `RPC_TOPIC` | constant | — | exported | not declared | — | `src/nova/conductor/rpcapi.py:L30–L30` |
| `ConductorAPI` | class | — | exported | not declared | — | `src/nova/conductor/rpcapi.py:L34–L253` |
| `ConductorAPI.VERSION_ALIASES` | constant | — | public | not declared | — | `src/nova/conductor/rpcapi.py:L203–L213` |
| `ConductorAPI.__init__` | method | (self) | public | not declared | 1/9 | `src/nova/conductor/rpcapi.py:L215–L223` |
| `ConductorAPI.object_class_action` | method | (self, context, objname, objmethod, objver, args, kwargs) | public | `self.object_class_action_versions(context, objname, objmethod, versions, args, kwargs)` (src/nova/conductor/rpcapi.py:L231) | 1/8 | `src/nova/conductor/rpcapi.py:L228–L235` |
| `ConductorAPI.object_class_action_versions` | method | (self, context, objname, objmethod, object_versions, args, kwargs) | public | `cctxt.call(context, 'object_class_action_versions', objname=objname, objmethod=objmethod, object_versions=object_versions, args=args, kwargs=kwargs)` (src/nova/conductor/rpcapi.py:L240) | 1/7 | `src/nova/conductor/rpcapi.py:L237–L243` |
| `ConductorAPI.object_action` | method | (self, context, objinst, objmethod, args, kwargs) | public | `cctxt.call(context, 'object_action', objinst=objinst, objmethod=objmethod, args=args, kwargs=kwargs)` (src/nova/conductor/rpcapi.py:L247) | 1/4 | `src/nova/conductor/rpcapi.py:L245–L248` |
| `ConductorAPI.object_backport_versions` | method | (self, context, objinst, object_versions) | public | `cctxt.call(context, 'object_backport_versions', objinst=objinst, object_versions=object_versions)` (src/nova/conductor/rpcapi.py:L252) | 1/4 | `src/nova/conductor/rpcapi.py:L250–L253` |
| `ComputeTaskAPI` | class | — | exported | not declared | — | `src/nova/conductor/rpcapi.py:L257–L517` |
| `ComputeTaskAPI.__init__` | method | (self) | public | not declared | 1/7 | `src/nova/conductor/rpcapi.py:L294–L300` |
| `ComputeTaskAPI.live_migrate_instance` | method | (self, context, instance, scheduler_hint, block_migration, disk_over_commit, request_spec) | public | not declared | 1/10 | `src/nova/conductor/rpcapi.py:L302–L311` |
| `ComputeTaskAPI.migrate_server` | method | (self, context, instance, scheduler_hint, live, rebuild, flavor, block_migration, disk_over_commit, reservations=None, clean_shutdown=True, request_spec=None, host_list=None, do_cast=False) | public | `cctxt.cast(context, 'migrate_server', **kw)` (src/nova/conductor/rpcapi.py:L352); `cctxt.call(context, 'migrate_server', **kw)` (src/nova/conductor/rpcapi.py:L353) | 7/37 | `src/nova/conductor/rpcapi.py:L317–L353` |
| `ComputeTaskAPI.build_instances` | method | (self, context, instances, image, filter_properties, admin_password, injected_files, requested_networks, security_groups, block_device_mapping, legacy_bdm=True, request_spec=None, host_lists=None) | public | not declared | 7/38 | `src/nova/conductor/rpcapi.py:L355–L393` |
| `ComputeTaskAPI.schedule_and_build_instances` | method | (self, context, build_requests, request_specs, image, admin_password, injected_files, requested_networks, block_device_mapping, tags=None) | public | not declared | 2/20 | `src/nova/conductor/rpcapi.py:L395–L416` |
| `ComputeTaskAPI.unshelve_instance` | method | (self, context, instance, request_spec=None) | public | not declared | 2/10 | `src/nova/conductor/rpcapi.py:L418–L427` |
| `ComputeTaskAPI.rebuild_instance` | method | (self, ctxt, instance, new_pass, injected_files, image_ref, orig_image_ref, orig_sys_metadata, bdms, recreate=False, on_shared_storage=False, host=None, preserve_ephemeral=False, request_spec=None, reimage_boot_volume=False, target_state=None) | public | not declared | 6/41 | `src/nova/conductor/rpcapi.py:L429–L469` |
| `ComputeTaskAPI.cache_images` | method | (self, ctxt, aggregate, image_ids) | public | not declared | 2/8 | `src/nova/conductor/rpcapi.py:L471–L478` |
| `ComputeTaskAPI.confirm_snapshot_based_resize` | method | (self, ctxt, instance, migration, do_cast=True) | public | `cctxt.cast(ctxt, 'confirm_snapshot_based_resize', **kw)` (src/nova/conductor/rpcapi.py:L488); `cctxt.call(ctxt, 'confirm_snapshot_based_resize', **kw)` (src/nova/conductor/rpcapi.py:L489) | 3/10 | `src/nova/conductor/rpcapi.py:L480–L489` |
| `ComputeTaskAPI.revert_snapshot_based_resize` | method | (self, ctxt, instance, migration) | public | not declared | 2/7 | `src/nova/conductor/rpcapi.py:L491–L497` |
| `ComputeTaskAPI.attach_volume` | method | (self, ctxt, instance, volume, device, disk_bus, device_type, tag=None, supports_multiattach=False, delete_on_termination=False, do_cast=False) | public | `cctxt.cast(ctxt, 'attach_volume', **kw)` (src/nova/conductor/rpcapi.py:L511); `cctxt.call(ctxt, 'attach_volume', **kw)` (src/nova/conductor/rpcapi.py:L517) | 3/17 | `src/nova/conductor/rpcapi.py:L499–L517` |

## Dependencies

- `import oslo_messaging as messaging` (src/nova/conductor/rpcapi.py:L18)
- `oslo_serialization`: imports `jsonutils` (src/nova/conductor/rpcapi.py:L19)
- `oslo_versionedobjects`: imports `base as ovo_base` (src/nova/conductor/rpcapi.py:L20)
- `import nova.conf` (src/nova/conductor/rpcapi.py:L22)
- `nova`: imports `exception` (src/nova/conductor/rpcapi.py:L23)
- `nova.i18n`: imports `_` (src/nova/conductor/rpcapi.py:L24)
- `nova.objects`: imports `base as objects_base` (src/nova/conductor/rpcapi.py:L25)
- `nova`: imports `profiler` (src/nova/conductor/rpcapi.py:L26)
- `nova`: imports `rpc` (src/nova/conductor/rpcapi.py:L27)

## Side Effects

- **network**: self.client = rpc.get_client(target, (src/nova/conductor/rpcapi.py:L221)
- **network**: cctxt = self.client.prepare() (src/nova/conductor/rpcapi.py:L239)
- **network**: cctxt = self.client.prepare() (src/nova/conductor/rpcapi.py:L246)
- **network**: cctxt = self.client.prepare() (src/nova/conductor/rpcapi.py:L251)
- **network**: self.client = rpc.get_client(target, serializer=serializer) (src/nova/conductor/rpcapi.py:L300)
- **network**: cctxt = self.client.prepare(version=version) (src/nova/conductor/rpcapi.py:L310)
- **network**: if not self.client.can_send_version(version): (src/nova/conductor/rpcapi.py:L331)
- **network**: if not self.client.can_send_version(version): (src/nova/conductor/rpcapi.py:L334)
- **network**: if not self.client.can_send_version(version): (src/nova/conductor/rpcapi.py:L337)
- **network**: if not self.client.can_send_version(version): (src/nova/conductor/rpcapi.py:L340)
- **network**: if not self.client.can_send_version(version): (src/nova/conductor/rpcapi.py:L343)
- **network**: cctxt = self.client.prepare( (src/nova/conductor/rpcapi.py:L347)
- **network**: if not self.client.can_send_version(version): (src/nova/conductor/rpcapi.py:L369)
- **network**: if not self.client.can_send_version(version): (src/nova/conductor/rpcapi.py:L372)
- **network**: if not self.client.can_send_version(version): (src/nova/conductor/rpcapi.py:L375)
- **network**: if not self.client.can_send_version(version): (src/nova/conductor/rpcapi.py:L382)
- **network**: if not self.client.can_send_version('1.7'): (src/nova/conductor/rpcapi.py:L386)
- **network**: cctxt = self.client.prepare(version=version) (src/nova/conductor/rpcapi.py:L392)
- **network**: if not self.client.can_send_version(version): (src/nova/conductor/rpcapi.py:L411)
- **network**: cctxt = self.client.prepare(version=version) (src/nova/conductor/rpcapi.py:L415)
- **network**: if not self.client.can_send_version(version): (src/nova/conductor/rpcapi.py:L423)
- **network**: cctxt = self.client.prepare(version=version) (src/nova/conductor/rpcapi.py:L426)
- **network**: if not self.client.can_send_version(version): (src/nova/conductor/rpcapi.py:L450)
- **network**: if not self.client.can_send_version(version): (src/nova/conductor/rpcapi.py:L457)
- **network**: if not self.client.can_send_version(version): (src/nova/conductor/rpcapi.py:L465)
- **network**: cctxt = self.client.prepare(version=version) (src/nova/conductor/rpcapi.py:L468)
- **network**: if not self.client.can_send_version(version): (src/nova/conductor/rpcapi.py:L473)
- **network**: cctxt = self.client.prepare(version=version) (src/nova/conductor/rpcapi.py:L476)
- **network**: if not self.client.can_send_version(version): (src/nova/conductor/rpcapi.py:L483)
- **network**: cctxt = self.client.prepare(version=version) (src/nova/conductor/rpcapi.py:L486)
- **network**: if not self.client.can_send_version(version): (src/nova/conductor/rpcapi.py:L493)
- **network**: cctxt = self.client.prepare(version=version) (src/nova/conductor/rpcapi.py:L496)
- **network**: if not self.client.can_send_version(version): (src/nova/conductor/rpcapi.py:L503)
- **network**: cctxt = self.client.prepare(version=version) (src/nova/conductor/rpcapi.py:L510)
- **network**: cctxt = self.client.prepare( (src/nova/conductor/rpcapi.py:L514)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/conductor/rpcapi.py:L29)
- **global-mutation**: RPC_TOPIC = 'conductor' (src/nova/conductor/rpcapi.py:L30)
- **global-mutation**: VERSION_ALIASES = { (src/nova/conductor/rpcapi.py:L203)

## Security Surface

- **sink** (`db-write`): kwargs.update({'block_device_mapping': bdm_p, (src/nova/conductor/rpcapi.py:L389)

