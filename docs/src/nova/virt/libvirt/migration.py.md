# src/nova/virt/libvirt/migration.py

## Overview

This file implements the `migration` module, defining 2 constants, 32 functions, 1 variable, 11 imports, 2 side effects, 10 security surface entries.

Lines: total 908, code 627, comment 113, blank 168

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `libvirt` | variable | — | exported | not declared | — | `src/nova/virt/libvirt/migration.py:L35–L35` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/migration.py:L37–L37` |
| `CONF` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/migration.py:L38–L38` |
| `graphics_listen_addrs` | function | (migrate_data) | exported | `listen_addrs` (src/nova/virt/libvirt/migration.py:L52) | 5/11 | `src/nova/virt/libvirt/migration.py:L41–L52` |
| `get_updated_guest_xml` | function | (instance, guest, migrate_data, get_volume_config, get_vif_config=None, new_resources=None) | exported | `etree.tostring(xml_doc, encoding='unicode')` (src/nova/virt/libvirt/migration.py:L98) | 10/34 | `src/nova/virt/libvirt/migration.py:L55–L98` |
| `_update_quota_xml` | function | (instance, xml_doc) | unexported | `xml_doc` (src/nova/virt/libvirt/migration.py:L110) | 5/9 | `src/nova/virt/libvirt/migration.py:L101–L110` |
| `_update_device_resources_xml` | function | (xml_doc, new_resources) | unexported | `xml_doc` (src/nova/virt/libvirt/migration.py:L123) | 4/9 | `src/nova/virt/libvirt/migration.py:L113–L123` |
| `_update_vpmems_xml` | function | (xml_doc, vpmems) | unexported | `xml_doc` (src/nova/virt/libvirt/migration.py:L132) | 3/7 | `src/nova/virt/libvirt/migration.py:L126–L132` |
| `_update_mdev_xml` | function | (xml_doc, target_mdevs) | unexported | `xml_doc` (src/nova/virt/libvirt/migration.py:L154) | 6/18 | `src/nova/virt/libvirt/migration.py:L135–L154` |
| `_update_pci_dev_xml` | function | (xml_doc, pci_dev_map_src_dst) | unexported | `xml_doc` (src/nova/virt/libvirt/migration.py:L171) | 3/12 | `src/nova/virt/libvirt/migration.py:L157–L171` |
| `_get_pci_address_fields_with_prefix` | function | (addr) | unexported | `(f"0x{domain}", f"0x{bus}", f"0x{slot}", f"0x{func}")` (src/nova/virt/libvirt/migration.py:L176) | 1/3 | `src/nova/virt/libvirt/migration.py:L174–L176` |
| `_update_hostdev_address` | function | (hostdevs, src_fields, dst_fields) | unexported | `True` (src/nova/virt/libvirt/migration.py:L197); `False` (src/nova/virt/libvirt/migration.py:L199) | 5/17 | `src/nova/virt/libvirt/migration.py:L179–L199` |
| `_address_matches` | function | (address_tag, domain, bus, slot, function) | unexported | `( address_tag.get('domain') == domain and address_tag.get('bus') == bus and address_tag.get('slot') == slot and address_tag.get('function') == function )` (src/nova/virt/libvirt/migration.py:L203) | 4/7 | `src/nova/virt/libvirt/migration.py:L202–L208` |
| `_set_address_fields` | function | (address_tag, domain, bus, slot, function) | unexported | not declared | 1/5 | `src/nova/virt/libvirt/migration.py:L211–L215` |
| `_raise_hostdev_not_found_exception` | function | (xml_doc, src_addr) | unexported | not declared | 1/8 | `src/nova/virt/libvirt/migration.py:L218–L225` |
| `_update_cpu_shared_set_xml` | function | (xml_doc, migrate_data) | unexported | `xml_doc` (src/nova/virt/libvirt/migration.py:L238) | 1/9 | `src/nova/virt/libvirt/migration.py:L228–L238` |
| `_remove_cpu_shared_set_xml` | function | (xml_doc, migrate_data) | unexported | `xml_doc` (src/nova/virt/libvirt/migration.py:L253) | 3/11 | `src/nova/virt/libvirt/migration.py:L241–L253` |
| `_update_numa_xml` | function | (xml_doc, migrate_data) | unexported | `xml_doc` (src/nova/virt/libvirt/migration.py:L315) | 10/40 | `src/nova/virt/libvirt/migration.py:L256–L315` |
| `_update_graphics_xml` | function | (xml_doc, migrate_data) | unexported | `xml_doc` (src/nova/virt/libvirt/migration.py:L330) | 5/11 | `src/nova/virt/libvirt/migration.py:L318–L330` |
| `_update_serial_xml` | function | (xml_doc, migrate_data) | unexported | `xml_doc` (src/nova/virt/libvirt/migration.py:L360) | 3/9 | `src/nova/virt/libvirt/migration.py:L333–L360` |
| `_update_serial_xml.set_listen_addr_and_port` | function | (source, listen_addr, serial_listen_ports) | public | not declared | — | `src/nova/virt/libvirt/migration.py:L337–L350` |
| `_update_rbd_xml` | function | (xml_doc, migrate_data) | unexported | `xml_doc` (src/nova/virt/libvirt/migration.py:L374); `xml_doc` (src/nova/virt/libvirt/migration.py:L413) | 11/26 | `src/nova/virt/libvirt/migration.py:L363–L413` |
| `_update_volume_xml` | function | (xml_doc, migrate_data, instance, get_volume_config) | unexported | `xml_doc` (src/nova/virt/libvirt/migration.py:L470) | 15/38 | `src/nova/virt/libvirt/migration.py:L416–L470` |
| `_update_perf_events_xml` | function | (xml_doc, migrate_data) | unexported | `xml_doc` (src/nova/virt/libvirt/migration.py:L494); `xml_doc` (src/nova/virt/libvirt/migration.py:L504) | 7/21 | `src/nova/virt/libvirt/migration.py:L473–L504` |
| `_update_memory_backing_xml` | function | (xml_doc, migrate_data) | unexported | `xml_doc` (src/nova/virt/libvirt/migration.py:L540); `xml_doc` (src/nova/virt/libvirt/migration.py:L551) | 7/24 | `src/nova/virt/libvirt/migration.py:L507–L551` |
| `_update_vif_xml` | function | (xml_doc, migrate_data, get_vif_config) | unexported | `xml_doc` (src/nova/virt/libvirt/migration.py:L618) | 9/35 | `src/nova/virt/libvirt/migration.py:L554–L618` |
| `find_job_type` | function | (guest, instance, logging_ok=True) | exported | `libvirt.VIR_DOMAIN_JOB_FAILED` (src/nova/virt/libvirt/migration.py:L645); `libvirt.VIR_DOMAIN_JOB_COMPLETED` (src/nova/virt/libvirt/migration.py:L649); `libvirt.VIR_DOMAIN_JOB_COMPLETED` (src/nova/virt/libvirt/migration.py:L656); `libvirt.VIR_DOMAIN_JOB_FAILED` (src/nova/virt/libvirt/migration.py:L660) | 4/22 | `src/nova/virt/libvirt/migration.py:L621–L660` |
| `find_job_type._log` | function | (func, msg, *args, **kwargs) | private | not declared | — | `src/nova/virt/libvirt/migration.py:L637–L639` |
| `should_trigger_timeout_action` | function | (instance, elapsed, completion_timeout, migration_status) | exported | `False` (src/nova/virt/libvirt/migration.py:L682); `False` (src/nova/virt/libvirt/migration.py:L685); `True` (src/nova/virt/libvirt/migration.py:L690); `False` (src/nova/virt/libvirt/migration.py:L692) | 4/11 | `src/nova/virt/libvirt/migration.py:L663–L692` |
| `update_downtime` | function | (guest, instance, olddowntime, downtime_steps, elapsed) | exported | `olddowntime` (src/nova/virt/libvirt/migration.py:L729); `olddowntime` (src/nova/virt/libvirt/migration.py:L734); `thisstep[1]` (src/nova/virt/libvirt/migration.py:L747) | 6/28 | `src/nova/virt/libvirt/migration.py:L695–L747` |
| `save_stats` | function | (instance, migration, info, remaining) | exported | not declared | 1/10 | `src/nova/virt/libvirt/migration.py:L750–L773` |
| `trigger_postcopy_switch` | function | (guest, instance, migration) | exported | not declared | 2/11 | `src/nova/virt/libvirt/migration.py:L776–L789` |
| `run_tasks` | function | (guest, instance, active_migrations, on_migration_failure, migration, is_post_copy_enabled) | exported | not declared | 6/23 | `src/nova/virt/libvirt/migration.py:L792–L833` |
| `run_recover_tasks` | function | (host, guest, instance, on_migration_failure) | exported | not declared | 5/15 | `src/nova/virt/libvirt/migration.py:L836–L868` |
| `downtime_steps` | function | (data_gb) | exported | not declared | 2/9 | `src/nova/virt/libvirt/migration.py:L871–L908` |

## Dependencies

- `collections`: imports `deque` (src/nova/virt/libvirt/migration.py:L17)
- `lxml`: imports `etree` (src/nova/virt/libvirt/migration.py:L19)
- `oslo_log`: imports `log as logging` (src/nova/virt/libvirt/migration.py:L20)
- `nova.compute`: imports `power_state` (src/nova/virt/libvirt/migration.py:L22)
- `import nova.conf` (src/nova/virt/libvirt/migration.py:L23)
- `nova`: imports `exception` (src/nova/virt/libvirt/migration.py:L24)
- `nova`: imports `objects` (src/nova/virt/libvirt/migration.py:L25)
- `nova.storage`: imports `rbd_utils` (src/nova/virt/libvirt/migration.py:L26)
- `nova.virt`: imports `hardware` (src/nova/virt/libvirt/migration.py:L27)
- `nova.virt.libvirt`: imports `config as vconfig` (src/nova/virt/libvirt/migration.py:L28)
- `import libvirt` (src/nova/virt/libvirt/migration.py:L33)

## Side Effects

- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/virt/libvirt/migration.py:L37)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/virt/libvirt/migration.py:L38)

## Security Surface

- **sink** (`db-write`): """Update XML for rbd disk drives (ephemeral, root disk and config drive) (src/nova/virt/libvirt/migration.py:L364)
- **sink** (`db-write`): """Update XML using device information of destination host.""" (src/nova/virt/libvirt/migration.py:L417)
- **sink** (`db-write`): disk_dev.insert(cnt, item_dst) (src/nova/virt/libvirt/migration.py:L461)
- **sink** (`db-write`): disk_dev.insert(cnt, item_dst) (src/nova/virt/libvirt/migration.py:L469)
- **sink** (`db-write`): """Update XML by the supported events of destination host.""" (src/nova/virt/libvirt/migration.py:L474)
- **sink** (`db-write`): """Update libvirt domain XML for file-backed memory (src/nova/virt/libvirt/migration.py:L508)
- **sink** (`db-write`): interface_dev.insert(index, dest_interface_subelem) (src/nova/virt/libvirt/migration.py:L614)
- **sink** (`db-write`): interface_dev.insert(index + 1, address) (src/nova/virt/libvirt/migration.py:L616)
- **sink** (`db-write`): """Update max downtime if needed (src/nova/virt/libvirt/migration.py:L698)
- **sink** (`db-write`): Update the migration and instance objects with (src/nova/virt/libvirt/migration.py:L758)

