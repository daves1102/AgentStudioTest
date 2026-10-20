# src/nova/conductor/api.py

## Overview

This file implements the `api` module, defining 2 classs, 2 constants, 14 methods, 6 imports, 2 side effects.

Lines: total 198, code 144, comment 28, blank 26

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/conductor/api.py:L25–L25` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/conductor/api.py:L27–L27` |
| `API` | class | — | exported | not declared | — | `src/nova/conductor/api.py:L30–L79` |
| `API.__init__` | method | (self) | public | not declared | 1/3 | `src/nova/conductor/api.py:L33–L35` |
| `API.object_backport_versions` | method | (self, context, objinst, object_versions) | public | `self.conductor_rpcapi.object_backport_versions(context, objinst, object_versions)` (src/nova/conductor/api.py:L38) | 1/3 | `src/nova/conductor/api.py:L37–L39` |
| `API.wait_until_ready` | method | (self, context, early_timeout=10, early_attempts=10) | public | not declared | 5/22 | `src/nova/conductor/api.py:L41–L79` |
| `ComputeTaskAPI` | class | — | exported | not declared | — | `src/nova/conductor/api.py:L82–L198` |
| `ComputeTaskAPI.__init__` | method | (self) | public | not declared | 1/3 | `src/nova/conductor/api.py:L85–L87` |
| `ComputeTaskAPI.resize_instance` | method | (self, context, instance, scheduler_hint, flavor, reservations=None, clean_shutdown=True, request_spec=None, host_list=None, do_cast=False) | public | not declared | 1/9 | `src/nova/conductor/api.py:L91–L99` |
| `ComputeTaskAPI.live_migrate_instance` | method | (self, context, instance, host_name, block_migration, disk_over_commit, request_spec=None, async_=False) | public | not declared | 2/13 | `src/nova/conductor/api.py:L101–L113` |
| `ComputeTaskAPI.build_instances` | method | (self, context, instances, image, filter_properties, admin_password, injected_files, requested_networks, security_groups, block_device_mapping, legacy_bdm=True, request_spec=None, host_lists=None) | public | not declared | 1/13 | `src/nova/conductor/api.py:L115–L127` |
| `ComputeTaskAPI.schedule_and_build_instances` | method | (self, context, build_requests, request_spec, image, admin_password, injected_files, requested_networks, block_device_mapping, tags=None) | public | not declared | 1/9 | `src/nova/conductor/api.py:L129–L137` |
| `ComputeTaskAPI.unshelve_instance` | method | (self, context, instance, request_spec=None) | public | not declared | 1/3 | `src/nova/conductor/api.py:L139–L141` |
| `ComputeTaskAPI.rebuild_instance` | method | (self, context, instance, orig_image_ref, image_ref, injected_files, new_pass, orig_sys_metadata, bdms, recreate=False, on_shared_storage=False, preserve_ephemeral=False, host=None, request_spec=None, reimage_boot_volume=False, target_state=None) | public | not declared | 1/21 | `src/nova/conductor/api.py:L143–L163` |
| `ComputeTaskAPI.cache_images` | method | (self, context, aggregate, image_ids) | public | not declared | 2/5 | `src/nova/conductor/api.py:L165–L180` |
| `ComputeTaskAPI.confirm_snapshot_based_resize` | method | (self, ctxt, instance, migration, do_cast=True) | public | not declared | 1/4 | `src/nova/conductor/api.py:L182–L185` |
| `ComputeTaskAPI.revert_snapshot_based_resize` | method | (self, ctxt, instance, migration) | public | not declared | 1/4 | `src/nova/conductor/api.py:L187–L190` |
| `ComputeTaskAPI.attach_volume` | method | (self, ctxt, instance, volume, device, disk_bus, device_type, tag=None, supports_multiattach=False, delete_on_termination=False, do_cast=False) | public | `self.conductor_compute_rpcapi.attach_volume(ctxt, instance, volume, device, disk_bus, device_type, tag=tag, supports_multiattach=supports_multiattach, delete_on_termination=delete_on_termination, do_c` (src/nova/conductor/api.py:L195) | 1/7 | `src/nova/conductor/api.py:L192–L198` |

## Dependencies

- `oslo_log`: imports `log as logging` (src/nova/conductor/api.py:L17)
- `import oslo_messaging as messaging` (src/nova/conductor/api.py:L18)
- `nova`: imports `baserpc` (src/nova/conductor/api.py:L20)
- `nova.conductor`: imports `rpcapi` (src/nova/conductor/api.py:L21)
- `import nova.conf` (src/nova/conductor/api.py:L22)
- `nova.image`: imports `glance` (src/nova/conductor/api.py:L23)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/conductor/api.py:L25)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/conductor/api.py:L27)

