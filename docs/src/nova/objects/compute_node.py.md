# src/nova/objects/compute_node.py

## Overview

This file implements the `compute_node` module, defining 2 classs, 3 constants, 2 fields, 2 functions, 28 methods, 1 variable, 14 imports, 6 side effects.

Lines: total 561, code 373, comment 129, blank 59

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/objects/compute_node.py:L31–L31` |
| `__all__` | variable | — | unexported | not declared | — | `src/nova/objects/compute_node.py:L33–L36` |
| `ComputeNode` | class | — | exported | not declared | — | `src/nova/objects/compute_node.py:L40–L418` |
| `ComputeNode.VERSION` | constant | — | public | not declared | — | `src/nova/objects/compute_node.py:L61–L61` |
| `ComputeNode.fields` | field | — | public | not declared | — | `src/nova/objects/compute_node.py:L63–L103` |
| `ComputeNode.obj_make_compatible` | method | (self, primitive, target_version) | public | not declared | 25/36 | `src/nova/objects/compute_node.py:L105–L147` |
| `ComputeNode._host_from_db_object` | method | (compute, db_compute) | private | `` (src/nova/objects/compute_node.py:L165) | 9/18 | `src/nova/objects/compute_node.py:L150–L176` |
| `ComputeNode._from_db_object` | method | (context, compute, db_compute) | private | `compute` (src/nova/objects/compute_node.py:L253) | 15/44 | `src/nova/objects/compute_node.py:L179–L253` |
| `ComputeNode.get_by_id` | method | (cls, context, compute_id) | public | `cls._from_db_object(context, cls(), db_compute)` (src/nova/objects/compute_node.py:L259) | 1/3 | `src/nova/objects/compute_node.py:L257–L259` |
| `ComputeNode.get_by_uuid` | method | (cls, context, compute_uuid) | public | `nodes[0]` (src/nova/objects/compute_node.py:L268) | 2/5 | `src/nova/objects/compute_node.py:L263–L268` |
| `ComputeNode.get_by_service_id` | method | (cls, context, service_id) | public | `cls._from_db_object(context, cls(), db_compute)` (src/nova/objects/compute_node.py:L279) | 1/4 | `src/nova/objects/compute_node.py:L274–L279` |
| `ComputeNode.get_by_host_and_nodename` | method | (cls, context, host, nodename) | public | `cls._from_db_object(context, cls(), db_compute)` (src/nova/objects/compute_node.py:L286) | 1/4 | `src/nova/objects/compute_node.py:L283–L286` |
| `ComputeNode.get_by_nodename` | method | (cls, context, hypervisor_hostname) | public | `cls._from_db_object(context, cls(), db_compute)` (src/nova/objects/compute_node.py:L298) | 1/4 | `src/nova/objects/compute_node.py:L290–L298` |
| `ComputeNode.get_first_node_by_host_for_old_compat` | method | (cls, context, host, use_slave=False) | public | `computes[0]` (src/nova/objects/compute_node.py:L310) | 1/4 | `src/nova/objects/compute_node.py:L303–L310` |
| `ComputeNode._convert_stats_to_db_format` | method | (updates) | private | not declared | 2/4 | `src/nova/objects/compute_node.py:L313–L316` |
| `ComputeNode._convert_host_ip_to_db_format` | method | (updates) | private | not declared | 2/4 | `src/nova/objects/compute_node.py:L319–L322` |
| `ComputeNode._convert_supported_instances_to_db_format` | method | (updates) | private | not declared | 3/5 | `src/nova/objects/compute_node.py:L325–L329` |
| `ComputeNode._convert_pci_stats_to_db_format` | method | (updates) | private | not declared | 3/6 | `src/nova/objects/compute_node.py:L332–L337` |
| `ComputeNode.create` | method | (self) | public | not declared | 4/19 | `src/nova/objects/compute_node.py:L340–L360` |
| `ComputeNode.save` | method | (self, prune_stats=False) | public | not declared | 1/9 | `src/nova/objects/compute_node.py:L363–L374` |
| `ComputeNode.destroy` | method | (self) | public | not declared | 4/11 | `src/nova/objects/compute_node.py:L377–L391` |
| `ComputeNode.update_from_virt_driver` | method | (self, resources) | public | not declared | 8/17 | `src/nova/objects/compute_node.py:L393–L418` |
| `ComputeNodeList` | class | — | exported | not declared | — | `src/nova/objects/compute_node.py:L422–L525` |
| `ComputeNodeList.VERSION` | constant | — | public | not declared | — | `src/nova/objects/compute_node.py:L442–L442` |
| `ComputeNodeList.fields` | field | — | public | not declared | — | `src/nova/objects/compute_node.py:L443–L445` |
| `ComputeNodeList.get_all` | method | (cls, context) | public | `base.obj_make_list(context, cls(context), db_computes)` (src/nova/objects/compute_node.py:L451) | 1/3 | `src/nova/objects/compute_node.py:L449–L451` |
| `ComputeNodeList.get_all_by_not_mapped` | method | (cls, context, mapped_less_than) | public | `base.obj_make_list(context, cls(context), db_computes)` (src/nova/objects/compute_node.py:L459) | 1/4 | `src/nova/objects/compute_node.py:L455–L459` |
| `ComputeNodeList.get_by_pagination` | method | (cls, context, limit=None, marker=None) | public | `base.obj_make_list(context, cls(context), db_computes)` (src/nova/objects/compute_node.py:L466) | 1/4 | `src/nova/objects/compute_node.py:L463–L466` |
| `ComputeNodeList.get_by_hypervisor` | method | (cls, context, hypervisor_match) | public | `base.obj_make_list(context, cls(context), db_computes)` (src/nova/objects/compute_node.py:L473) | 1/4 | `src/nova/objects/compute_node.py:L470–L473` |
| `ComputeNodeList._get_by_service` | method | (cls, context, service_id, use_slave=False) | private | `base.obj_make_list(context, cls(context), db_computes)` (src/nova/objects/compute_node.py:L487) | 2/7 | `src/nova/objects/compute_node.py:L479–L487` |
| `ComputeNodeList._db_compute_node_get_all_by_host` | method | (context, host, use_slave=False) | private | `db.compute_node_get_all_by_host(context, host)` (src/nova/objects/compute_node.py:L492) | 1/2 | `src/nova/objects/compute_node.py:L491–L492` |
| `ComputeNodeList.get_all_by_host` | method | (cls, context, host, use_slave=False) | public | `base.obj_make_list(context, cls(context), db_computes)` (src/nova/objects/compute_node.py:L499) | 1/4 | `src/nova/objects/compute_node.py:L496–L499` |
| `ComputeNodeList._db_compute_node_get_all_by_uuids` | method | (context, compute_uuids) | private | `db_computes` (src/nova/objects/compute_node.py:L506) | 1/4 | `src/nova/objects/compute_node.py:L503–L506` |
| `ComputeNodeList.get_all_by_uuids` | method | (cls, context, compute_uuids) | public | `base.obj_make_list(context, cls(context), db_computes)` (src/nova/objects/compute_node.py:L513) | 1/4 | `src/nova/objects/compute_node.py:L510–L513` |
| `ComputeNodeList._db_compute_node_get_by_hv_type` | method | (context, hv_type) | private | `db_computes` (src/nova/objects/compute_node.py:L520) | 1/4 | `src/nova/objects/compute_node.py:L517–L520` |
| `ComputeNodeList.get_by_hypervisor_type` | method | (cls, context, hv_type) | public | `base.obj_make_list(context, cls(context), db_computes)` (src/nova/objects/compute_node.py:L525) | 1/3 | `src/nova/objects/compute_node.py:L523–L525` |
| `_get_node_empty_ratio` | function | (context, max_count) | unexported | `context.session.query(models.ComputeNode).filter(sa.or_( models.ComputeNode.ram_allocation_ratio == '0.0', models.ComputeNode.cpu_allocation_ratio == '0.0', models.ComputeNode.disk_allocation_ratio ==` (src/nova/objects/compute_node.py:L533) | 1/9 | `src/nova/objects/compute_node.py:L528–L540` |
| `migrate_empty_ratio` | function | (context, max_count) | exported | `found, done` (src/nova/objects/compute_node.py:L561) | 5/13 | `src/nova/objects/compute_node.py:L544–L561` |

## Dependencies

- `oslo_db`: imports `exception as db_exc` (src/nova/objects/compute_node.py:L15)
- `oslo_serialization`: imports `jsonutils` (src/nova/objects/compute_node.py:L16)
- `oslo_utils`: imports `uuidutils` (src/nova/objects/compute_node.py:L17)
- `oslo_utils`: imports `versionutils` (src/nova/objects/compute_node.py:L18)
- `import sqlalchemy as sa` (src/nova/objects/compute_node.py:L19)
- `sqlalchemy`: imports `sql` (src/nova/objects/compute_node.py:L20)
- `import nova.conf` (src/nova/objects/compute_node.py:L22)
- `nova.db.main`: imports `api as db` (src/nova/objects/compute_node.py:L23)
- `nova.db.main`: imports `models` (src/nova/objects/compute_node.py:L24)
- `nova`: imports `exception` (src/nova/objects/compute_node.py:L25)
- `nova`: imports `objects` (src/nova/objects/compute_node.py:L26)
- `nova.objects`: imports `base` (src/nova/objects/compute_node.py:L27)
- `nova.objects`: imports `fields` (src/nova/objects/compute_node.py:L28)
- `nova.objects`: imports `pci_device_pool` (src/nova/objects/compute_node.py:L29)

## Side Effects

- **network**: db_computes = context.session.query(models.ComputeNode).filter( (src/nova/objects/compute_node.py:L518)
- **network**: return context.session.query(models.ComputeNode).filter(sa.or_( (src/nova/objects/compute_node.py:L533)
- **network**: context.session.add(cn) (src/nova/objects/compute_node.py:L559)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/objects/compute_node.py:L31)
- **global-mutation**: VERSION = '1.19' (src/nova/objects/compute_node.py:L61)
- **global-mutation**: VERSION = '1.17' (src/nova/objects/compute_node.py:L442)

