# src/nova/api/openstack/compute/routes.py

## Overview

This file implements the `routes` module, defining 1 class, 1 classmethod, 1 constant, 1 function, 2 methods, 59 variables, 74 imports, 72 side effects, 20 security surface entries.

Lines: total 901, code 730, comment 42, blank 129

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `_create_controller` | function | (main_controller, action_controller_list) | unexported | `controller` (src/nova/api/openstack/compute/routes.py:L102) | 2/5 | `src/nova/api/openstack/compute/routes.py:L94–L102` |
| `agents_controller` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/routes.py:L105–L106` |
| `aggregates_controller` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/routes.py:L109–L110` |
| `assisted_volume_snapshots_controller` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/routes.py:L113–L115` |
| `availability_zone_controller` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/routes.py:L118–L119` |
| `baremetal_nodes_controller` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/routes.py:L122–L123` |
| `cells_controller` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/routes.py:L126–L127` |
| `certificates_controller` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/routes.py:L130–L131` |
| `cloudpipe_controller` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/routes.py:L134–L135` |
| `extensions_controller` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/routes.py:L138–L139` |
| `fixed_ips_controller` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/routes.py:L142–L143` |
| `flavor_controller` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/routes.py:L146–L151` |
| `flavor_access_controller` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/routes.py:L154–L155` |
| `flavor_extraspec_controller` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/routes.py:L158–L159` |
| `floating_ip_dns_controller` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/routes.py:L162–L163` |
| `floating_ip_dnsentry_controller` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/routes.py:L166–L167` |
| `floating_ip_pools_controller` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/routes.py:L170–L171` |
| `floating_ips_controller` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/routes.py:L174–L175` |
| `floating_ips_bulk_controller` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/routes.py:L178–L179` |
| `fping_controller` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/routes.py:L182–L183` |
| `hosts_controller` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/routes.py:L186–L187` |
| `hypervisors_controller` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/routes.py:L190–L191` |
| `images_controller` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/routes.py:L194–L195` |
| `image_metadata_controller` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/routes.py:L198–L199` |
| `instance_actions_controller` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/routes.py:L202–L203` |
| `instance_usage_audit_log_controller` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/routes.py:L206–L207` |
| `ips_controller` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/routes.py:L210–L211` |
| `keypairs_controller` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/routes.py:L214–L215` |
| `limits_controller` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/routes.py:L218–L219` |
| `migrations_controller` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/routes.py:L222–L223` |
| `networks_controller` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/routes.py:L226–L228` |
| `quota_classes_controller` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/routes.py:L231–L232` |
| `quota_set_controller` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/routes.py:L235–L236` |
| `security_group_controller` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/routes.py:L239–L240` |
| `security_group_default_rules_controller` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/routes.py:L243–L244` |
| `security_group_rules_controller` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/routes.py:L247–L248` |
| `server_controller` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/routes.py:L251–L271` |
| `console_auth_tokens_controller` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/routes.py:L274–L275` |
| `consoles_controller` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/routes.py:L278–L279` |
| `server_diagnostics_controller` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/routes.py:L282–L283` |
| `server_external_events_controller` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/routes.py:L286–L287` |
| `server_groups_controller` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/routes.py:L290–L291` |
| `server_metadata_controller` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/routes.py:L294–L295` |
| `server_migrations_controller` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/routes.py:L298–L299` |
| `server_os_interface_controller` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/routes.py:L302–L303` |
| `server_password_controller` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/routes.py:L306–L307` |
| `server_remote_consoles_controller` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/routes.py:L310–L311` |
| `server_security_groups_controller` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/routes.py:L314–L315` |
| `server_shares_controller` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/routes.py:L317–L318` |
| `server_tags_controller` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/routes.py:L320–L321` |
| `server_topology_controller` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/routes.py:L323–L324` |
| `server_volume_attachments_controller` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/routes.py:L326–L327` |
| `services_controller` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/routes.py:L330–L331` |
| `simple_tenant_usage_controller` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/routes.py:L334–L335` |
| `snapshots_controller` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/routes.py:L338–L339` |
| `tenant_networks_controller` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/routes.py:L342–L343` |
| `version_controller` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/routes.py:L346–L347` |
| `virtual_interfaces_controller` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/routes.py:L350–L351` |
| `volumes_controller` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/routes.py:L354–L355` |
| `volumes_boot_controller` | variable | — | exported | not declared | — | `src/nova/api/openstack/compute/routes.py:L358–L359` |
| `ROUTE_LIST` | constant | — | exported | not declared | — | `src/nova/api/openstack/compute/routes.py:L377–L857` |
| `APIRouterV21` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/routes.py:L860–L901` |
| `APIRouterV21.__init__` | method | (self, custom_routes=None) | public | not declared | 5/12 | `src/nova/api/openstack/compute/routes.py:L866–L893` |
| `APIRouterV21.factory` | method | (cls, global_config, **local_config) | public | `cls()` (src/nova/api/openstack/compute/routes.py:L901) | 1/2 | `src/nova/api/openstack/compute/routes.py:L896–L901` |
| `APIRouterV21.factory` | classmethod | — | public | not declared | — | `src/nova/api/openstack/compute/routes.py:L895–L901` |

## Dependencies

- `import functools` (src/nova/api/openstack/compute/routes.py:L17)
- `import nova.api.openstack` (src/nova/api/openstack/compute/routes.py:L19)
- `nova.api.openstack.compute`: imports `admin_actions` (src/nova/api/openstack/compute/routes.py:L20)
- `nova.api.openstack.compute`: imports `admin_password` (src/nova/api/openstack/compute/routes.py:L21)
- `nova.api.openstack.compute`: imports `agents` (src/nova/api/openstack/compute/routes.py:L22)
- `nova.api.openstack.compute`: imports `aggregates` (src/nova/api/openstack/compute/routes.py:L23)
- `nova.api.openstack.compute`: imports `assisted_volume_snapshots` (src/nova/api/openstack/compute/routes.py:L24)
- `nova.api.openstack.compute`: imports `attach_interfaces` (src/nova/api/openstack/compute/routes.py:L25)
- `nova.api.openstack.compute`: imports `availability_zone` (src/nova/api/openstack/compute/routes.py:L26)
- `nova.api.openstack.compute`: imports `baremetal_nodes` (src/nova/api/openstack/compute/routes.py:L27)
- `nova.api.openstack.compute`: imports `cells` (src/nova/api/openstack/compute/routes.py:L28)
- `nova.api.openstack.compute`: imports `certificates` (src/nova/api/openstack/compute/routes.py:L29)
- `nova.api.openstack.compute`: imports `cloudpipe` (src/nova/api/openstack/compute/routes.py:L30)
- `nova.api.openstack.compute`: imports `console_auth_tokens` (src/nova/api/openstack/compute/routes.py:L31)
- `nova.api.openstack.compute`: imports `console_output` (src/nova/api/openstack/compute/routes.py:L32)
- `nova.api.openstack.compute`: imports `consoles` (src/nova/api/openstack/compute/routes.py:L33)
- `nova.api.openstack.compute`: imports `create_backup` (src/nova/api/openstack/compute/routes.py:L34)
- `nova.api.openstack.compute`: imports `deferred_delete` (src/nova/api/openstack/compute/routes.py:L35)
- `nova.api.openstack.compute`: imports `evacuate` (src/nova/api/openstack/compute/routes.py:L36)
- `nova.api.openstack.compute`: imports `extension_info` (src/nova/api/openstack/compute/routes.py:L37)
- `nova.api.openstack.compute`: imports `fixed_ips` (src/nova/api/openstack/compute/routes.py:L38)
- `nova.api.openstack.compute`: imports `flavor_access` (src/nova/api/openstack/compute/routes.py:L39)
- `nova.api.openstack.compute`: imports `flavors` (src/nova/api/openstack/compute/routes.py:L40)
- `nova.api.openstack.compute`: imports `flavors_extraspecs` (src/nova/api/openstack/compute/routes.py:L41)
- `nova.api.openstack.compute`: imports `floating_ip_dns` (src/nova/api/openstack/compute/routes.py:L42)
- `nova.api.openstack.compute`: imports `floating_ip_pools` (src/nova/api/openstack/compute/routes.py:L43)
- `nova.api.openstack.compute`: imports `floating_ips` (src/nova/api/openstack/compute/routes.py:L44)
- `nova.api.openstack.compute`: imports `floating_ips_bulk` (src/nova/api/openstack/compute/routes.py:L45)
- `nova.api.openstack.compute`: imports `fping` (src/nova/api/openstack/compute/routes.py:L46)
- `nova.api.openstack.compute`: imports `hosts` (src/nova/api/openstack/compute/routes.py:L47)
- `nova.api.openstack.compute`: imports `hypervisors` (src/nova/api/openstack/compute/routes.py:L48)
- `nova.api.openstack.compute`: imports `image_metadata` (src/nova/api/openstack/compute/routes.py:L49)
- `nova.api.openstack.compute`: imports `images` (src/nova/api/openstack/compute/routes.py:L50)
- `nova.api.openstack.compute`: imports `instance_actions` (src/nova/api/openstack/compute/routes.py:L51)
- `nova.api.openstack.compute`: imports `instance_usage_audit_log` (src/nova/api/openstack/compute/routes.py:L52)
- `nova.api.openstack.compute`: imports `ips` (src/nova/api/openstack/compute/routes.py:L53)
- `nova.api.openstack.compute`: imports `keypairs` (src/nova/api/openstack/compute/routes.py:L54)
- `nova.api.openstack.compute`: imports `limits` (src/nova/api/openstack/compute/routes.py:L55)
- `nova.api.openstack.compute`: imports `lock_server` (src/nova/api/openstack/compute/routes.py:L56)
- `nova.api.openstack.compute`: imports `migrate_server` (src/nova/api/openstack/compute/routes.py:L57)
- `nova.api.openstack.compute`: imports `migrations` (src/nova/api/openstack/compute/routes.py:L58)
- `nova.api.openstack.compute`: imports `multinic` (src/nova/api/openstack/compute/routes.py:L59)
- `nova.api.openstack.compute`: imports `networks` (src/nova/api/openstack/compute/routes.py:L60)
- `nova.api.openstack.compute`: imports `networks_associate` (src/nova/api/openstack/compute/routes.py:L61)
- `nova.api.openstack.compute`: imports `pause_server` (src/nova/api/openstack/compute/routes.py:L62)
- `nova.api.openstack.compute`: imports `quota_classes` (src/nova/api/openstack/compute/routes.py:L63)
- `nova.api.openstack.compute`: imports `quota_sets` (src/nova/api/openstack/compute/routes.py:L64)
- `nova.api.openstack.compute`: imports `remote_consoles` (src/nova/api/openstack/compute/routes.py:L65)
- `nova.api.openstack.compute`: imports `rescue` (src/nova/api/openstack/compute/routes.py:L66)
- `nova.api.openstack.compute`: imports `security_group_default_rules` (src/nova/api/openstack/compute/routes.py:L67)
- `nova.api.openstack.compute`: imports `security_groups` (src/nova/api/openstack/compute/routes.py:L68)
- `nova.api.openstack.compute`: imports `server_diagnostics` (src/nova/api/openstack/compute/routes.py:L69)
- `nova.api.openstack.compute`: imports `server_external_events` (src/nova/api/openstack/compute/routes.py:L70)
- `nova.api.openstack.compute`: imports `server_groups` (src/nova/api/openstack/compute/routes.py:L71)
- `nova.api.openstack.compute`: imports `server_metadata` (src/nova/api/openstack/compute/routes.py:L72)
- `nova.api.openstack.compute`: imports `server_migrations` (src/nova/api/openstack/compute/routes.py:L73)
- `nova.api.openstack.compute`: imports `server_password` (src/nova/api/openstack/compute/routes.py:L74)
- `nova.api.openstack.compute`: imports `server_shares` (src/nova/api/openstack/compute/routes.py:L75)
- `nova.api.openstack.compute`: imports `server_tags` (src/nova/api/openstack/compute/routes.py:L76)
- `nova.api.openstack.compute`: imports `server_topology` (src/nova/api/openstack/compute/routes.py:L77)
- `nova.api.openstack.compute`: imports `servers` (src/nova/api/openstack/compute/routes.py:L78)
- `nova.api.openstack.compute`: imports `services` (src/nova/api/openstack/compute/routes.py:L79)
- `nova.api.openstack.compute`: imports `shelve` (src/nova/api/openstack/compute/routes.py:L80)
- `nova.api.openstack.compute`: imports `simple_tenant_usage` (src/nova/api/openstack/compute/routes.py:L81)
- `nova.api.openstack.compute`: imports `snapshots` (src/nova/api/openstack/compute/routes.py:L82)
- `nova.api.openstack.compute`: imports `suspend_server` (src/nova/api/openstack/compute/routes.py:L83)
- `nova.api.openstack.compute`: imports `tenant_networks` (src/nova/api/openstack/compute/routes.py:L84)
- `nova.api.openstack.compute`: imports `versionsV21` (src/nova/api/openstack/compute/routes.py:L85)
- `nova.api.openstack.compute`: imports `virtual_interfaces` (src/nova/api/openstack/compute/routes.py:L86)
- `nova.api.openstack.compute`: imports `volume_attachments` (src/nova/api/openstack/compute/routes.py:L87)
- `nova.api.openstack.compute`: imports `volumes` (src/nova/api/openstack/compute/routes.py:L88)
- `nova.api.openstack.compute`: imports `volumes_boot` (src/nova/api/openstack/compute/routes.py:L89)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/openstack/compute/routes.py:L90)
- `nova.api`: imports `wsgi as base_wsgi` (src/nova/api/openstack/compute/routes.py:L91)

## Side Effects

- **network**: from nova.api.openstack.compute import admin_actions (src/nova/api/openstack/compute/routes.py:L20)
- **network**: from nova.api.openstack.compute import admin_password (src/nova/api/openstack/compute/routes.py:L21)
- **network**: from nova.api.openstack.compute import agents (src/nova/api/openstack/compute/routes.py:L22)
- **network**: from nova.api.openstack.compute import aggregates (src/nova/api/openstack/compute/routes.py:L23)
- **network**: from nova.api.openstack.compute import assisted_volume_snapshots (src/nova/api/openstack/compute/routes.py:L24)
- **network**: from nova.api.openstack.compute import attach_interfaces (src/nova/api/openstack/compute/routes.py:L25)
- **network**: from nova.api.openstack.compute import availability_zone (src/nova/api/openstack/compute/routes.py:L26)
- **network**: from nova.api.openstack.compute import baremetal_nodes (src/nova/api/openstack/compute/routes.py:L27)
- **network**: from nova.api.openstack.compute import cells (src/nova/api/openstack/compute/routes.py:L28)
- **network**: from nova.api.openstack.compute import certificates (src/nova/api/openstack/compute/routes.py:L29)
- **network**: from nova.api.openstack.compute import cloudpipe (src/nova/api/openstack/compute/routes.py:L30)
- **network**: from nova.api.openstack.compute import console_auth_tokens (src/nova/api/openstack/compute/routes.py:L31)
- **network**: from nova.api.openstack.compute import console_output (src/nova/api/openstack/compute/routes.py:L32)
- **network**: from nova.api.openstack.compute import consoles (src/nova/api/openstack/compute/routes.py:L33)
- **network**: from nova.api.openstack.compute import create_backup (src/nova/api/openstack/compute/routes.py:L34)
- **network**: from nova.api.openstack.compute import deferred_delete (src/nova/api/openstack/compute/routes.py:L35)
- **network**: from nova.api.openstack.compute import evacuate (src/nova/api/openstack/compute/routes.py:L36)
- **network**: from nova.api.openstack.compute import extension_info (src/nova/api/openstack/compute/routes.py:L37)
- **network**: from nova.api.openstack.compute import fixed_ips (src/nova/api/openstack/compute/routes.py:L38)
- **network**: from nova.api.openstack.compute import flavor_access (src/nova/api/openstack/compute/routes.py:L39)
- **network**: from nova.api.openstack.compute import flavors (src/nova/api/openstack/compute/routes.py:L40)
- **network**: from nova.api.openstack.compute import flavors_extraspecs (src/nova/api/openstack/compute/routes.py:L41)
- **network**: from nova.api.openstack.compute import floating_ip_dns (src/nova/api/openstack/compute/routes.py:L42)
- **network**: from nova.api.openstack.compute import floating_ip_pools (src/nova/api/openstack/compute/routes.py:L43)
- **network**: from nova.api.openstack.compute import floating_ips (src/nova/api/openstack/compute/routes.py:L44)
- **network**: from nova.api.openstack.compute import floating_ips_bulk (src/nova/api/openstack/compute/routes.py:L45)
- **network**: from nova.api.openstack.compute import fping (src/nova/api/openstack/compute/routes.py:L46)
- **network**: from nova.api.openstack.compute import hosts (src/nova/api/openstack/compute/routes.py:L47)
- **network**: from nova.api.openstack.compute import hypervisors (src/nova/api/openstack/compute/routes.py:L48)
- **network**: from nova.api.openstack.compute import image_metadata (src/nova/api/openstack/compute/routes.py:L49)
- **network**: from nova.api.openstack.compute import images (src/nova/api/openstack/compute/routes.py:L50)
- **network**: from nova.api.openstack.compute import instance_actions (src/nova/api/openstack/compute/routes.py:L51)
- **network**: from nova.api.openstack.compute import instance_usage_audit_log (src/nova/api/openstack/compute/routes.py:L52)
- **network**: from nova.api.openstack.compute import ips (src/nova/api/openstack/compute/routes.py:L53)
- **network**: from nova.api.openstack.compute import keypairs (src/nova/api/openstack/compute/routes.py:L54)
- **network**: from nova.api.openstack.compute import limits (src/nova/api/openstack/compute/routes.py:L55)
- **network**: from nova.api.openstack.compute import lock_server (src/nova/api/openstack/compute/routes.py:L56)
- **network**: from nova.api.openstack.compute import migrate_server (src/nova/api/openstack/compute/routes.py:L57)
- **network**: from nova.api.openstack.compute import migrations (src/nova/api/openstack/compute/routes.py:L58)
- **network**: from nova.api.openstack.compute import multinic (src/nova/api/openstack/compute/routes.py:L59)
- **network**: from nova.api.openstack.compute import networks (src/nova/api/openstack/compute/routes.py:L60)
- **network**: from nova.api.openstack.compute import networks_associate (src/nova/api/openstack/compute/routes.py:L61)
- **network**: from nova.api.openstack.compute import pause_server (src/nova/api/openstack/compute/routes.py:L62)
- **network**: from nova.api.openstack.compute import quota_classes (src/nova/api/openstack/compute/routes.py:L63)
- **network**: from nova.api.openstack.compute import quota_sets (src/nova/api/openstack/compute/routes.py:L64)
- **network**: from nova.api.openstack.compute import remote_consoles (src/nova/api/openstack/compute/routes.py:L65)
- **network**: from nova.api.openstack.compute import rescue (src/nova/api/openstack/compute/routes.py:L66)
- **network**: from nova.api.openstack.compute import security_group_default_rules (src/nova/api/openstack/compute/routes.py:L67)
- **network**: from nova.api.openstack.compute import security_groups (src/nova/api/openstack/compute/routes.py:L68)
- **network**: from nova.api.openstack.compute import server_diagnostics (src/nova/api/openstack/compute/routes.py:L69)
- **network**: from nova.api.openstack.compute import server_external_events (src/nova/api/openstack/compute/routes.py:L70)
- **network**: from nova.api.openstack.compute import server_groups (src/nova/api/openstack/compute/routes.py:L71)
- **network**: from nova.api.openstack.compute import server_metadata (src/nova/api/openstack/compute/routes.py:L72)
- **network**: from nova.api.openstack.compute import server_migrations (src/nova/api/openstack/compute/routes.py:L73)
- **network**: from nova.api.openstack.compute import server_password (src/nova/api/openstack/compute/routes.py:L74)
- **network**: from nova.api.openstack.compute import server_shares (src/nova/api/openstack/compute/routes.py:L75)
- **network**: from nova.api.openstack.compute import server_tags (src/nova/api/openstack/compute/routes.py:L76)
- **network**: from nova.api.openstack.compute import server_topology (src/nova/api/openstack/compute/routes.py:L77)
- **network**: from nova.api.openstack.compute import servers (src/nova/api/openstack/compute/routes.py:L78)
- **network**: from nova.api.openstack.compute import services (src/nova/api/openstack/compute/routes.py:L79)
- **network**: from nova.api.openstack.compute import shelve (src/nova/api/openstack/compute/routes.py:L80)
- **network**: from nova.api.openstack.compute import simple_tenant_usage (src/nova/api/openstack/compute/routes.py:L81)
- **network**: from nova.api.openstack.compute import snapshots (src/nova/api/openstack/compute/routes.py:L82)
- **network**: from nova.api.openstack.compute import suspend_server (src/nova/api/openstack/compute/routes.py:L83)
- **network**: from nova.api.openstack.compute import tenant_networks (src/nova/api/openstack/compute/routes.py:L84)
- **network**: from nova.api.openstack.compute import versionsV21 (src/nova/api/openstack/compute/routes.py:L85)
- **network**: from nova.api.openstack.compute import virtual_interfaces (src/nova/api/openstack/compute/routes.py:L86)
- **network**: from nova.api.openstack.compute import volume_attachments (src/nova/api/openstack/compute/routes.py:L87)
- **network**: from nova.api.openstack.compute import volumes (src/nova/api/openstack/compute/routes.py:L88)
- **network**: from nova.api.openstack.compute import volumes_boot (src/nova/api/openstack/compute/routes.py:L89)
- **network**: super(APIRouterV21, self).__init__(nova.api.openstack.ProjectMapper()) (src/nova/api/openstack/compute/routes.py:L871)
- **global-mutation**: ROUTE_LIST = ( (src/nova/api/openstack/compute/routes.py:L377)

## Security Surface

- **sink** (`db-write`): 'PUT': [flavor_controller, 'update'], (src/nova/api/openstack/compute/routes.py:L403)
- **sink** (`db-write`): 'PUT': [flavor_extraspec_controller, 'update'], (src/nova/api/openstack/compute/routes.py:L415)
- **sink** (`db-write`): 'PUT': [image_metadata_controller, 'update'], (src/nova/api/openstack/compute/routes.py:L438)
- **sink** (`db-write`): 'PUT': [agents_controller, 'update'], (src/nova/api/openstack/compute/routes.py:L449)
- **sink** (`db-write`): 'PUT': [aggregates_controller, 'update'], (src/nova/api/openstack/compute/routes.py:L458)
- **sink** (`db-write`): 'PUT': [cells_controller, 'update'], (src/nova/api/openstack/compute/routes.py:L508)
- **sink** (`db-write`): 'PUT': [cloudpipe_controller, 'update'] (src/nova/api/openstack/compute/routes.py:L525)
- **sink** (`db-write`): 'PUT': [floating_ip_dns_controller, 'update'], (src/nova/api/openstack/compute/routes.py:L540)
- **sink** (`db-write`): 'PUT': [floating_ip_dnsentry_controller, 'update'], (src/nova/api/openstack/compute/routes.py:L545)
- **sink** (`db-write`): 'PUT': [floating_ips_bulk_controller, 'update'] (src/nova/api/openstack/compute/routes.py:L565)
- **sink** (`db-write`): 'PUT': [hosts_controller, 'update'] (src/nova/api/openstack/compute/routes.py:L578)
- **sink** (`db-write`): 'PUT': [quota_classes_controller, 'update'] (src/nova/api/openstack/compute/routes.py:L643)
- **sink** (`db-write`): 'PUT': [quota_set_controller, 'update'], (src/nova/api/openstack/compute/routes.py:L647)
- **sink** (`db-write`): 'PUT': [security_group_controller, 'update'], (src/nova/api/openstack/compute/routes.py:L676)
- **sink** (`db-write`): 'PUT': [services_controller, 'update'], (src/nova/api/openstack/compute/routes.py:L694)
- **sink** (`db-write`): 'PUT': [volumes_boot_controller, 'update'], (src/nova/api/openstack/compute/routes.py:L742)
- **sink** (`db-write`): 'PUT': [server_controller, 'update'], (src/nova/api/openstack/compute/routes.py:L757)
- **sink** (`db-write`): 'PUT': [server_metadata_controller, 'update'], (src/nova/api/openstack/compute/routes.py:L787)
- **sink** (`db-write`): 'PUT': [server_volume_attachments_controller, 'update'], (src/nova/api/openstack/compute/routes.py:L827)
- **sink** (`db-write`): 'PUT': [server_tags_controller, 'update'], (src/nova/api/openstack/compute/routes.py:L851)

