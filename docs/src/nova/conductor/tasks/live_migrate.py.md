# src/nova/conductor/tasks/live_migrate.py

## Overview

This file implements the `live_migrate` module, defining 1 class, 2 constants, 2 functions, 23 methods, 15 imports, 2 side effects, 1 security surface entry.

Lines: total 615, code 414, comment 124, blank 77

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/conductor/tasks/live_migrate.py:L30–L30` |
| `CONF` | constant | — | exported | not declared | — | `src/nova/conductor/tasks/live_migrate.py:L31–L31` |
| `supports_vif_related_pci_allocations` | function | (context, host) | exported | `svc.version >= 36` (src/nova/conductor/tasks/live_migrate.py:L44) | 1/3 | `src/nova/conductor/tasks/live_migrate.py:L34–L44` |
| `supports_vpmem_live_migration` | function | (context) | exported | `objects.Service.get_minimum_version(context, 'nova-compute') >= 51` (src/nova/conductor/tasks/live_migrate.py:L55) | 1/2 | `src/nova/conductor/tasks/live_migrate.py:L47–L55` |
| `LiveMigrationTask` | class | — | exported | not declared | — | `src/nova/conductor/tasks/live_migrate.py:L58–L615` |
| `LiveMigrationTask.__init__` | method | (self, context, instance, destination, block_migration, disk_over_commit, migration, compute_rpcapi, servicegroup_api, query_client, report_client, request_spec=None) | public | not declared | 1/20 | `src/nova/conductor/tasks/live_migrate.py:L59–L79` |
| `LiveMigrationTask._execute` | method | (self) | private | `self.compute_rpcapi.live_migration(self.context, host=self.source, instance=self.instance, dest=self.destination, block_migration=self.block_migration, migration=self.migration, migrate_data=self.migr` (src/nova/conductor/tasks/live_migrate.py:L154) | 3/42 | `src/nova/conductor/tasks/live_migrate.py:L81–L160` |
| `LiveMigrationTask.rollback` | method | (self, ex) | public | not declared | 2/6 | `src/nova/conductor/tasks/live_migrate.py:L162–L172` |
| `LiveMigrationTask._check_instance_is_active` | method | (self) | private | not declared | 2/8 | `src/nova/conductor/tasks/live_migrate.py:L174–L181` |
| `LiveMigrationTask._check_instance_has_no_numa` | method | (self) | private | `` (src/nova/conductor/tasks/live_migrate.py:L188); `` (src/nova/conductor/tasks/live_migrate.py:L198); `` (src/nova/conductor/tasks/live_migrate.py:L204) | 5/30 | `src/nova/conductor/tasks/live_migrate.py:L183–L225` |
| `LiveMigrationTask._check_can_migrate_pci` | method | (self, src_host, dest_host) | private | `` (src/nova/conductor/tasks/live_migrate.py:L241); `` (src/nova/conductor/tasks/live_migrate.py:L262) | 10/29 | `src/nova/conductor/tasks/live_migrate.py:L227–L278` |
| `LiveMigrationTask._check_can_migrate_specific_resources` | method | (self) | private | `` (src/nova/conductor/tasks/live_migrate.py:L288) | 6/12 | `src/nova/conductor/tasks/live_migrate.py:L280–L299` |
| `LiveMigrationTask._check_host_is_up` | method | (self, host) | private | not declared | 2/4 | `src/nova/conductor/tasks/live_migrate.py:L301–L305` |
| `LiveMigrationTask._check_requested_destination` | method | (self) | private | not declared | 2/8 | `src/nova/conductor/tasks/live_migrate.py:L307–L324` |
| `LiveMigrationTask._check_destination_is_not_source` | method | (self) | private | not declared | 2/4 | `src/nova/conductor/tasks/live_migrate.py:L326–L329` |
| `LiveMigrationTask._check_destination_has_enough_memory` | method | (self) | private | not declared | 3/16 | `src/nova/conductor/tasks/live_migrate.py:L331–L351` |
| `LiveMigrationTask._get_compute_info` | method | (self, host) | private | `objects.ComputeNode.get_first_node_by_host_for_old_compat( self.context, host)` (src/nova/conductor/tasks/live_migrate.py:L354) | 1/3 | `src/nova/conductor/tasks/live_migrate.py:L353–L355` |
| `LiveMigrationTask._check_compatible_with_source_hypervisor` | method | (self, destination) | private | `source_info, destination_info` (src/nova/conductor/tasks/live_migrate.py:L371) | 4/13 | `src/nova/conductor/tasks/live_migrate.py:L357–L371` |
| `LiveMigrationTask._call_livem_checks_on_host` | method | (self, destination, provider_mapping) | private | not declared | 3/17 | `src/nova/conductor/tasks/live_migrate.py:L373–L391` |
| `LiveMigrationTask._get_port_profile_from_provider_mapping` | method | (self, port_id, provider_mappings) | private | `{'allocation': allocation}` (src/nova/conductor/tasks/live_migrate.py:L399); `{}` (src/nova/conductor/tasks/live_migrate.py:L401) | 2/9 | `src/nova/conductor/tasks/live_migrate.py:L393–L401` |
| `LiveMigrationTask._bind_ports_on_destination` | method | (self, destination, provider_mappings) | private | `bindings` (src/nova/conductor/tasks/live_migrate.py:L436) | 5/19 | `src/nova/conductor/tasks/live_migrate.py:L403–L436` |
| `LiveMigrationTask._update_migrate_vifs_from_bindings` | method | (self, migrate_vifs, bindings) | private | not declared | 4/9 | `src/nova/conductor/tasks/live_migrate.py:L438–L446` |
| `LiveMigrationTask._get_source_cell_mapping` | method | (self) | private | `objects.InstanceMapping.get_by_instance_uuid( self.context, self.instance.uuid).cell_mapping` (src/nova/conductor/tasks/live_migrate.py:L456) | 2/8 | `src/nova/conductor/tasks/live_migrate.py:L448–L461` |
| `LiveMigrationTask._get_destination_cell_mapping` | method | (self) | private | `objects.HostMapping.get_by_host( self.context, self.destination).cell_mapping` (src/nova/conductor/tasks/live_migrate.py:L471) | 2/8 | `src/nova/conductor/tasks/live_migrate.py:L463–L476` |
| `LiveMigrationTask._get_request_spec_for_select_destinations` | method | (self, attempted_hosts=None) | private | `request_spec` (src/nova/conductor/tasks/live_migrate.py:L531) | 3/25 | `src/nova/conductor/tasks/live_migrate.py:L478–L531` |
| `LiveMigrationTask._find_destination` | method | (self) | private | `(selection.service_host, selection.nodename, selection.limits)` (src/nova/conductor/tasks/live_migrate.py:L588) | 5/35 | `src/nova/conductor/tasks/live_migrate.py:L533–L588` |
| `LiveMigrationTask._remove_host_allocations` | method | (self, compute_node_uuid) | private | not declared | 1/3 | `src/nova/conductor/tasks/live_migrate.py:L590–L600` |
| `LiveMigrationTask._check_not_over_max_retries` | method | (self, attempted_hosts) | private | `` (src/nova/conductor/tasks/live_migrate.py:L604) | 4/13 | `src/nova/conductor/tasks/live_migrate.py:L602–L615` |

## Dependencies

- `oslo_log`: imports `log as logging` (src/nova/conductor/tasks/live_migrate.py:L13)
- `import oslo_messaging as messaging` (src/nova/conductor/tasks/live_migrate.py:L14)
- `oslo_utils`: imports `excutils` (src/nova/conductor/tasks/live_migrate.py:L15)
- `nova`: imports `availability_zones` (src/nova/conductor/tasks/live_migrate.py:L17)
- `nova.compute`: imports `power_state` (src/nova/conductor/tasks/live_migrate.py:L18)
- `nova.compute`: imports `utils as compute_utils` (src/nova/conductor/tasks/live_migrate.py:L19)
- `nova.conductor.tasks`: imports `base` (src/nova/conductor/tasks/live_migrate.py:L20)
- `nova.conductor.tasks`: imports `migrate` (src/nova/conductor/tasks/live_migrate.py:L21)
- `import nova.conf` (src/nova/conductor/tasks/live_migrate.py:L22)
- `nova`: imports `exception` (src/nova/conductor/tasks/live_migrate.py:L23)
- `nova.i18n`: imports `_` (src/nova/conductor/tasks/live_migrate.py:L24)
- `nova.network`: imports `neutron` (src/nova/conductor/tasks/live_migrate.py:L25)
- `nova`: imports `objects` (src/nova/conductor/tasks/live_migrate.py:L26)
- `nova.objects`: imports `fields as obj_fields` (src/nova/conductor/tasks/live_migrate.py:L27)
- `nova.scheduler`: imports `utils as scheduler_utils` (src/nova/conductor/tasks/live_migrate.py:L28)

## Side Effects

- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/conductor/tasks/live_migrate.py:L30)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/conductor/tasks/live_migrate.py:L31)

## Security Surface

- **sink** (`db-write`): profile.update( (src/nova/conductor/tasks/live_migrate.py:L423)

