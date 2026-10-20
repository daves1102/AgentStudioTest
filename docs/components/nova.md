# Component: nova

## Overview

The `nova` component encompasses the core OpenStack Compute service subsystems extracted across five batches: the REST API layer (`api/`), accelerator integration (`accelerator/`), CLI entry points (`cmd/`), compute service (`compute/`), conductor service (`conductor/`), configuration layer (`conf/`), console subsystem (`console/`), exception and internationalisation utilities (`exception.py`, `i18n.py`, `service_auth.py`, `utils.py`), the versioned object layer (`objects/`), the database access layer (`db/`), the network integration layer (`network/`), and the scheduler subsystem (`scheduler/`). All 433 files are classified as component `nova`; no other component exists in the current KB.

**Batch provenance** — batch 1 (`6d56e5a`, 2026-10-16): 2 files; batch 2 (`733c73`, 2026-10-19): 53 files; batch 3 (`868bfe40`, 2026-10-19): 67 files; batch 4 (`caa20451`, 2026-10-20): 205 files; batch 5 (`f56908d5`, 2026-10-20): 106 files.

Subsystem responsibilities:
- **api/** — WSGI framework, request dispatch, authentication middleware, API versioning, metadata service, and OpenStack Compute REST API (servers, flavors, keypairs, etc.) including JSON schema validation and view serialisers.
- **accelerator/** — HTTP client façade for the Cyborg accelerator API.
- **cmd/** — CLI entry points: `nova-api`, `nova-compute`, `nova-conductor`, `nova-scheduler`, `nova-manage`, `nova-novncproxy`, `nova-serialproxy`, `nova-spicehtml5proxy`, `nova-status`.
- **compute/** — Core compute service API (`compute/api.py`) and compute manager (`compute/manager.py`) handling instance lifecycle.
- **conductor/** — Conductor service manager (`conductor/manager.py`) coordinating cross-service operations.
- **conf/** — oslo.config option declarations for all Nova services and sub-systems.
- **console/** — VNC/RFB, serial, and SPICE console proxy infrastructure.
- **exception.py / i18n.py** — Exception class hierarchy and internationalisation factory.
- **service_auth.py / utils.py** — Service-token authentication helpers and general utilities.
- **objects/** — oslo.versionedobjects-based domain model for all Nova entities.
- **db/api/** and **db/main/** — Alembic-managed API and main database schemas with SQLAlchemy query API.
- **network/** — Neutron integration, network model, os-vif utilities, and security group API.
- **scheduler/** — Placement-aware scheduling: host manager, filters, weighers, RPC client, and Placement report client.

Source: `.aee/intake-summary.md` (batch f56908d5); `.aee/link-summary.md`.

---

## File Inventory

All 433 KB records. LOC figures from each record's `lines` block. Source: `.aee/kb/src/nova/**/*.json`.

| File | Total | Code | Comment | Blank |
|---|---|---|---|---|
| `accelerator/__init__.py` | 0 | 0 | 0 | 0 |
| `accelerator/cyborg.py` | 419 | 324 | 26 | 69 |
| `api/__init__.py` | 0 | 0 | 0 | 0 |
| `api/auth.py` | 101 | 62 | 16 | 23 |
| `api/compute_req_id.py` | 36 | 13 | 14 | 9 |
| `api/metadata/__init__.py` | 22 | 7 | 13 | 2 |
| `api/metadata/base.py` | 746 | 535 | 74 | 137 |
| `api/metadata/handler.py` | 338 | 245 | 42 | 51 |
| `api/metadata/password.py` | 88 | 56 | 17 | 15 |
| `api/metadata/vendordata.py` | 30 | 10 | 15 | 5 |
| `api/metadata/vendordata_dynamic.py` | 133 | 84 | 22 | 27 |
| `api/metadata/vendordata_json.py` | 56 | 33 | 14 | 9 |
| `api/openstack/__init__.py` | 226 | 158 | 33 | 35 |
| `api/openstack/api_version_request.py` | 441 | 357 | 44 | 40 |
| `api/openstack/common.py` | 554 | 437 | 29 | 88 |
| `api/openstack/compute/__init__.py` | 21 | 1 | 19 | 1 |
| `api/openstack/compute/admin_actions.py` | 91 | 65 | 15 | 11 |
| `api/openstack/compute/admin_password.py` | 61 | 38 | 16 | 7 |
| `api/openstack/compute/agents.py` | 60 | 37 | 13 | 10 |
| `api/openstack/compute/aggregates.py` | 325 | 246 | 33 | 46 |
| `api/openstack/compute/assisted_volume_snapshots.py` | 98 | 62 | 23 | 13 |
| `api/openstack/compute/attach_interfaces.py` | 243 | 189 | 24 | 30 |
| `api/openstack/compute/availability_zone.py` | 128 | 94 | 16 | 18 |
| `api/openstack/compute/baremetal_nodes.py` | 148 | 106 | 20 | 22 |
| `api/openstack/compute/cells.py` | 98 | 68 | 15 | 15 |
| `api/openstack/compute/certificates.py` | 47 | 27 | 13 | 7 |
| `api/openstack/compute/cloudpipe.py` | 56 | 34 | 13 | 9 |
| `api/openstack/compute/console_auth_tokens.py` | 102 | 62 | 23 | 17 |
| `api/openstack/compute/console_output.py` | 73 | 39 | 24 | 10 |
| `api/openstack/compute/consoles.py` | 62 | 38 | 14 | 10 |
| `api/openstack/compute/create_backup.py` | 96 | 63 | 18 | 15 |
| `api/openstack/compute/deferred_delete.py` | 71 | 50 | 14 | 7 |
| `api/openstack/compute/evacuate.py` | 177 | 132 | 21 | 24 |
| `api/openstack/compute/extension_info.py` | 891 | 859 | 18 | 14 |
| `api/openstack/compute/fixed_ips.py` | 53 | 32 | 13 | 8 |
| `api/openstack/compute/flavor_access.py` | 123 | 80 | 21 | 22 |
| `api/openstack/compute/flavors.py` | 254 | 191 | 30 | 33 |
| `api/openstack/compute/flavors_extraspecs.py` | 149 | 111 | 23 | 15 |
| `api/openstack/compute/floating_ip_dns.py` | 76 | 50 | 13 | 13 |
| `api/openstack/compute/floating_ip_pools.py` | 54 | 32 | 13 | 9 |
| `api/openstack/compute/floating_ips.py` | 311 | 245 | 21 | 45 |
| `api/openstack/compute/floating_ips_bulk.py` | 58 | 36 | 13 | 9 |
| `api/openstack/compute/fping.py` | 46 | 24 | 15 | 7 |
| `api/openstack/compute/helpers.py` | 116 | 70 | 24 | 22 |
| `api/openstack/compute/hosts.py` | 303 | 258 | 18 | 27 |
| `api/openstack/compute/hypervisors.py` | 535 | 414 | 54 | 67 |
| `api/openstack/compute/image_metadata.py` | 141 | 111 | 14 | 16 |
| `api/openstack/compute/images.py` | 158 | 114 | 19 | 25 |
| `api/openstack/compute/instance_actions.py` | 215 | 154 | 35 | 26 |
| `api/openstack/compute/instance_usage_audit_log.py` | 118 | 92 | 16 | 10 |
| `api/openstack/compute/ips.py` | 63 | 41 | 14 | 8 |
| `api/openstack/compute/keypairs.py` | 225 | 167 | 23 | 35 |
| `api/openstack/compute/limits.py` | 76 | 47 | 17 | 12 |
| `api/openstack/compute/lock_server.py` | 67 | 47 | 14 | 6 |
| `api/openstack/compute/migrate_server.py` | 185 | 153 | 17 | 15 |
| `api/openstack/compute/migrations.py` | 221 | 154 | 47 | 20 |
| `api/openstack/compute/multinic.py` | 74 | 49 | 14 | 11 |
| `api/openstack/compute/networks.py` | 132 | 92 | 21 | 19 |
| `api/openstack/compute/networks_associate.py` | 54 | 34 | 11 | 9 |
| `api/openstack/compute/pause_server.py` | 78 | 58 | 14 | 6 |
| `api/openstack/compute/quota_classes.py` | 152 | 100 | 27 | 25 |
| `api/openstack/compute/quota_sets.py` | 257 | 180 | 45 | 32 |
| `api/openstack/compute/remote_consoles.py` | 186 | 147 | 19 | 20 |
| `api/openstack/compute/rescue.py` | 105 | 78 | 16 | 11 |
| `api/openstack/compute/routes.py` | 901 | 730 | 42 | 129 |
| `api/openstack/compute/schemas/__init__.py` | 0 | 0 | 0 | 0 |
| `api/openstack/compute/schemas/admin_actions.py` | 58 | 34 | 18 | 6 |
| `api/openstack/compute/schemas/admin_password.py` | 36 | 19 | 13 | 4 |
| `api/openstack/compute/schemas/agents.py` | 24 | 7 | 13 | 4 |
| `api/openstack/compute/schemas/aggregate_images.py` | 38 | 23 | 11 | 4 |
| `api/openstack/compute/schemas/aggregates.py` | 249 | 209 | 14 | 26 |
| `api/openstack/compute/schemas/assisted_volume_snapshots.py` | 90 | 66 | 17 | 7 |
| `api/openstack/compute/schemas/attach_interfaces.py` | 143 | 109 | 18 | 16 |
| `api/openstack/compute/schemas/availability_zone.py` | 85 | 65 | 13 | 7 |
| `api/openstack/compute/schemas/baremetal_nodes.py` | 96 | 72 | 13 | 11 |
| `api/openstack/compute/schemas/cells.py` | 34 | 17 | 13 | 4 |
| `api/openstack/compute/schemas/certificates.py` | 21 | 4 | 13 | 4 |
| `api/openstack/compute/schemas/cloudpipe.py` | 23 | 6 | 13 | 4 |
| `api/openstack/compute/schemas/console_auth_tokens.py` | 50 | 34 | 11 | 5 |
| `api/openstack/compute/schemas/console_output.py` | 45 | 26 | 17 | 2 |
| `api/openstack/compute/schemas/consoles.py` | 24 | 7 | 13 | 4 |
| `api/openstack/compute/schemas/create_backup.py` | 59 | 37 | 13 | 9 |
| `api/openstack/compute/schemas/deferred_delete.py` | 39 | 22 | 13 | 4 |
| `api/openstack/compute/schemas/evacuate.py` | 69 | 40 | 19 | 10 |
| `api/openstack/compute/schemas/extension_info.py` | 81 | 63 | 11 | 7 |
| `api/openstack/compute/schemas/fixed_ips.py` | 23 | 6 | 13 | 4 |
| `api/openstack/compute/schemas/flavor_access.py` | 90 | 65 | 15 | 10 |
| `api/openstack/compute/schemas/flavors.py` | 369 | 281 | 43 | 45 |
| `api/openstack/compute/schemas/flavors_extraspecs.py` | 85 | 48 | 23 | 14 |
| `api/openstack/compute/schemas/floating_ip_dns.py` | 24 | 7 | 13 | 4 |
| `api/openstack/compute/schemas/floating_ip_pools.py` | 41 | 26 | 11 | 4 |
| `api/openstack/compute/schemas/floating_ips.py` | 116 | 88 | 15 | 13 |
| `api/openstack/compute/schemas/floating_ips_bulk.py` | 25 | 8 | 13 | 4 |
| `api/openstack/compute/schemas/fping.py` | 20 | 4 | 13 | 3 |
| `api/openstack/compute/schemas/hosts.py` | 140 | 108 | 22 | 10 |
| `api/openstack/compute/schemas/hypervisors.py` | 367 | 293 | 41 | 33 |
| `api/openstack/compute/schemas/image_metadata.py` | 77 | 47 | 15 | 15 |
| `api/openstack/compute/schemas/images.py` | 231 | 195 | 24 | 12 |
| `api/openstack/compute/schemas/instance_actions.py` | 208 | 174 | 20 | 14 |
| `api/openstack/compute/schemas/instance_usage_audit_log.py` | 98 | 76 | 14 | 8 |
| `api/openstack/compute/schemas/ips.py` | 82 | 59 | 15 | 8 |
| `api/openstack/compute/schemas/keypairs.py` | 253 | 213 | 18 | 22 |
| `api/openstack/compute/schemas/limits.py` | 154 | 125 | 16 | 13 |
| `api/openstack/compute/schemas/lock_server.py` | 55 | 38 | 12 | 5 |
| `api/openstack/compute/schemas/migrate_server.py` | 82 | 54 | 15 | 13 |
| `api/openstack/compute/schemas/migrations.py` | 137 | 109 | 18 | 10 |
| `api/openstack/compute/schemas/multinic.py` | 59 | 40 | 13 | 6 |
| `api/openstack/compute/schemas/networks.py` | 103 | 79 | 17 | 7 |
| `api/openstack/compute/schemas/networks_associate.py` | 22 | 6 | 13 | 3 |
| `api/openstack/compute/schemas/pause_server.py` | 39 | 22 | 13 | 4 |
| `api/openstack/compute/schemas/quota_classes.py` | 164 | 130 | 18 | 16 |
| `api/openstack/compute/schemas/quota_sets.py` | 292 | 228 | 28 | 36 |
| `api/openstack/compute/schemas/remote_consoles.py` | 227 | 189 | 23 | 15 |
| `api/openstack/compute/schemas/rescue.py` | 56 | 36 | 15 | 5 |
| `api/openstack/compute/schemas/security_group_default_rules.py` | 24 | 7 | 13 | 4 |
| `api/openstack/compute/schemas/security_groups.py` | 254 | 203 | 26 | 25 |
| `api/openstack/compute/schemas/server_diagnostics.py` | 157 | 138 | 15 | 4 |
| `api/openstack/compute/schemas/server_external_events.py` | 142 | 116 | 15 | 11 |
| `api/openstack/compute/schemas/server_groups.py` | 231 | 182 | 22 | 27 |
| `api/openstack/compute/schemas/server_metadata.py` | 95 | 66 | 13 | 16 |
| `api/openstack/compute/schemas/server_migrations.py` | 150 | 118 | 14 | 18 |
| `api/openstack/compute/schemas/server_password.py` | 33 | 17 | 11 | 5 |
| `api/openstack/compute/schemas/server_shares.py` | 89 | 62 | 18 | 9 |
| `api/openstack/compute/schemas/server_tags.py` | 87 | 62 | 11 | 14 |
| `api/openstack/compute/schemas/server_topology.py` | 60 | 46 | 11 | 3 |
| `api/openstack/compute/schemas/servers.py` | 2123 | 1823 | 146 | 154 |
| `api/openstack/compute/schemas/services.py` | 200 | 158 | 23 | 19 |
| `api/openstack/compute/schemas/shelve.py` | 123 | 68 | 45 | 10 |
| `api/openstack/compute/schemas/simple_tenant_usage.py` | 185 | 141 | 29 | 15 |
| `api/openstack/compute/schemas/snapshots.py` | 140 | 112 | 15 | 13 |
| `api/openstack/compute/schemas/suspend_server.py` | 39 | 22 | 13 | 4 |
| `api/openstack/compute/schemas/tenant_networks.py` | 59 | 39 | 13 | 7 |
| `api/openstack/compute/schemas/versions.py` | 133 | 111 | 13 | 9 |
| `api/openstack/compute/schemas/virtual_interfaces.py` | 18 | 2 | 13 | 3 |
| `api/openstack/compute/schemas/volume_attachments.py` | 238 | 184 | 26 | 28 |
| `api/openstack/compute/schemas/volumes.py` | 215 | 180 | 19 | 16 |
| `api/openstack/compute/security_group_default_rules.py` | 58 | 36 | 13 | 9 |
| `api/openstack/compute/security_groups.py` | 468 | 376 | 29 | 63 |
| `api/openstack/compute/server_diagnostics.py` | 61 | 39 | 14 | 8 |
| `api/openstack/compute/server_external_events.py` | 161 | 116 | 21 | 24 |
| `api/openstack/compute/server_groups.py` | 283 | 205 | 51 | 27 |
| `api/openstack/compute/server_metadata.py` | 168 | 128 | 19 | 21 |
| `api/openstack/compute/server_migrations.py` | 216 | 158 | 32 | 26 |
| `api/openstack/compute/server_password.py` | 64 | 40 | 14 | 10 |
| `api/openstack/compute/server_shares.py` | 265 | 211 | 18 | 36 |
| `api/openstack/compute/server_tags.py` | 232 | 182 | 12 | 38 |
| `api/openstack/compute/server_topology.py` | 82 | 53 | 12 | 17 |
| `api/openstack/compute/servers.py` | 1639 | 1331 | 144 | 164 |
| `api/openstack/compute/services.py` | 504 | 347 | 91 | 66 |
| `api/openstack/compute/shelve.py` | 153 | 119 | 20 | 14 |
| `api/openstack/compute/simple_tenant_usage.py` | 369 | 269 | 40 | 60 |
| `api/openstack/compute/snapshots.py` | 157 | 117 | 15 | 25 |
| `api/openstack/compute/suspend_server.py` | 75 | 56 | 13 | 6 |
| `api/openstack/compute/tenant_networks.py` | 117 | 84 | 19 | 14 |
| `api/openstack/compute/versions.py` | 129 | 94 | 17 | 18 |
| `api/openstack/compute/versionsV21.py` | 38 | 18 | 14 | 6 |
| `api/openstack/compute/views/__init__.py` | 0 | 0 | 0 | 0 |
| `api/openstack/compute/views/flavors.py` | 113 | 76 | 17 | 20 |
| `api/openstack/compute/views/hypervisors.py` | 26 | 8 | 14 | 4 |
| `api/openstack/compute/views/images.py` | 167 | 129 | 15 | 23 |
| `api/openstack/compute/views/instance_actions.py` | 23 | 6 | 13 | 4 |
| `api/openstack/compute/views/ips.py` | 53 | 31 | 14 | 8 |
| `api/openstack/compute/views/keypairs.py` | 74 | 42 | 19 | 13 |
| `api/openstack/compute/views/limits.py` | 93 | 66 | 14 | 13 |
| `api/openstack/compute/views/migrations.py` | 24 | 6 | 13 | 5 |
| `api/openstack/compute/views/server_diagnostics.py` | 62 | 40 | 11 | 11 |
| `api/openstack/compute/views/server_shares.py` | 46 | 27 | 11 | 8 |
| `api/openstack/compute/views/server_tags.py` | 30 | 11 | 14 | 5 |
| `api/openstack/compute/views/servers.py` | 823 | 593 | 138 | 92 |
| `api/openstack/compute/views/usages.py` | 28 | 9 | 14 | 5 |
| `api/openstack/compute/views/versions.py` | 95 | 64 | 14 | 17 |
| `api/openstack/compute/virtual_interfaces.py` | 40 | 19 | 14 | 7 |
| `api/openstack/compute/volume_attachments.py` | 441 | 342 | 43 | 56 |
| `api/openstack/compute/volumes.py` | 222 | 156 | 28 | 38 |
| `api/openstack/compute/volumes_boot.py` | 231 | 202 | 11 | 18 |
| `api/openstack/identity.py` | 81 | 46 | 25 | 10 |
| `api/openstack/requestlog.py` | 98 | 63 | 18 | 17 |
| `api/openstack/urlmap.py` | 309 | 202 | 45 | 62 |
| `api/openstack/wsgi.py` | 937 | 637 | 107 | 193 |
| `api/openstack/wsgi_app.py` | 156 | 91 | 36 | 29 |
| `api/validation/__init__.py` | 452 | 298 | 78 | 76 |
| `api/validation/extra_specs/__init__.py` | 0 | 0 | 0 | 0 |
| `api/validation/extra_specs/accel.py` | 36 | 17 | 13 | 6 |
| `api/validation/extra_specs/aggregate_instance_extra_specs.py` | 72 | 47 | 15 | 10 |
| `api/validation/extra_specs/base.py` | 120 | 82 | 18 | 20 |
| `api/validation/extra_specs/capabilities.py` | 112 | 75 | 21 | 16 |
| `api/validation/extra_specs/hw.py` | 655 | 626 | 16 | 13 |
| `api/validation/extra_specs/hw_rng.py` | 57 | 37 | 14 | 6 |
| `api/validation/extra_specs/hw_video.py` | 39 | 19 | 14 | 6 |
| `api/validation/extra_specs/null.py` | 55 | 35 | 14 | 6 |
| `api/validation/extra_specs/os.py` | 42 | 21 | 15 | 6 |
| `api/validation/extra_specs/pci_passthrough.py` | 43 | 23 | 14 | 6 |
| `api/validation/extra_specs/quota.py` | 188 | 155 | 19 | 14 |
| `api/validation/extra_specs/resources.py` | 65 | 43 | 13 | 9 |
| `api/validation/extra_specs/traits.py` | 73 | 51 | 13 | 9 |
| `api/validation/extra_specs/validators.py` | 83 | 47 | 18 | 18 |
| `api/validation/extra_specs/vmware.py` | 48 | 29 | 13 | 6 |
| `api/validation/parameter_types.py` | 537 | 372 | 78 | 87 |
| `api/validation/response_types.py` | 70 | 51 | 12 | 7 |
| `api/validation/validators.py` | 346 | 235 | 55 | 56 |
| `api/wsgi.py` | 260 | 178 | 11 | 71 |
| `cmd/__init__.py` | 0 | 0 | 0 | 0 |
| `cmd/baseproxy.py` | 96 | 54 | 25 | 17 |
| `cmd/common.py` | 192 | 128 | 23 | 41 |
| `cmd/compute.py` | 80 | 44 | 27 | 9 |
| `cmd/conductor.py` | 53 | 28 | 15 | 10 |
| `cmd/manage.py` | 3858 | 2970 | 502 | 386 |
| `cmd/novncproxy.py` | 46 | 20 | 17 | 9 |
| `cmd/policy.py` | 192 | 138 | 21 | 33 |
| `cmd/scheduler.py` | 66 | 28 | 27 | 11 |
| `cmd/serialproxy.py` | 43 | 19 | 16 | 8 |
| `cmd/spicehtml5proxy.py` | 41 | 17 | 16 | 8 |
| `cmd/status.py` | 361 | 238 | 73 | 50 |
| `compute/__init__.py` | 0 | 0 | 0 | 0 |
| `compute/api.py` | 7124 | 5092 | 1165 | 867 |
| `compute/build_results.py` | 34 | 10 | 20 | 4 |
| `compute/claims.py` | 241 | 174 | 27 | 40 |
| `compute/flavors.py` | 210 | 127 | 42 | 41 |
| `compute/instance_actions.py` | 79 | 50 | 23 | 6 |
| `compute/instance_list.py` | 178 | 108 | 39 | 31 |
| `compute/manager.py` | 12137 | 8837 | 1993 | 1307 |
| `compute/migration_list.py` | 85 | 53 | 17 | 15 |
| `compute/monitors/__init__.py` | 93 | 52 | 30 | 11 |
| `compute/monitors/base.py` | 74 | 48 | 11 | 15 |
| `compute/monitors/cpu/__init__.py` | 0 | 0 | 0 | 0 |
| `compute/monitors/cpu/virt_driver.py` | 101 | 61 | 23 | 17 |
| `compute/multi_cell_list.py` | 454 | 279 | 109 | 66 |
| `compute/pci_placement_translator.py` | 793 | 524 | 158 | 111 |
| `compute/power_state.py` | 46 | 18 | 24 | 4 |
| `compute/provider_config.py` | 421 | 299 | 88 | 34 |
| `compute/provider_tree.py` | 794 | 617 | 64 | 113 |
| `compute/resource_tracker.py` | 2269 | 1527 | 481 | 261 |
| `compute/rpcapi.py` | 1738 | 1410 | 157 | 171 |
| `compute/share_management.py` | 763 | 598 | 89 | 76 |
| `compute/stats.py` | 155 | 97 | 27 | 31 |
| `compute/task_states.py` | 132 | 59 | 41 | 32 |
| `compute/utils.py` | 1678 | 1287 | 130 | 261 |
| `compute/vm_states.py` | 88 | 34 | 29 | 25 |
| `conductor/__init__.py` | 20 | 3 | 13 | 4 |
| `conductor/api.py` | 198 | 144 | 28 | 26 |
| `conductor/manager.py` | 2393 | 1721 | 467 | 205 |
| `conductor/rpcapi.py` | 517 | 447 | 23 | 47 |
| `conductor/tasks/__init__.py` | 0 | 0 | 0 | 0 |
| `conductor/tasks/base.py` | 54 | 33 | 11 | 10 |
| `conductor/tasks/cross_cell_migrate.py` | 1471 | 987 | 305 | 179 |
| `conductor/tasks/live_migrate.py` | 615 | 414 | 124 | 77 |
| `conductor/tasks/migrate.py` | 410 | 253 | 112 | 45 |
| `conf/__init__.py` | 114 | 92 | 17 | 5 |
| `conf/api.py` | 409 | 338 | 14 | 57 |
| `conf/availability_zone.py` | 71 | 39 | 15 | 17 |
| `conf/base.py` | 215 | 169 | 19 | 27 |
| `conf/cache.py` | 27 | 5 | 17 | 5 |
| `conf/cinder.py` | 133 | 91 | 14 | 28 |
| `conf/compute.py` | 1600 | 1258 | 30 | 312 |
| `conf/conductor.py` | 62 | 38 | 14 | 10 |
| `conf/configdrive.py` | 98 | 65 | 13 | 20 |
| `conf/console.py` | 93 | 60 | 16 | 17 |
| `conf/consoleauth.py` | 56 | 32 | 15 | 9 |
| `conf/cyborg.py` | 43 | 21 | 13 | 9 |
| `conf/database.py` | 65 | 32 | 21 | 12 |
| `conf/devices.py` | 119 | 75 | 15 | 29 |
| `conf/ephemeral_storage.py` | 74 | 46 | 15 | 13 |
| `conf/glance.py` | 219 | 164 | 15 | 40 |
| `conf/guestfs.py` | 58 | 33 | 14 | 11 |
| `conf/imagecache.py` | 107 | 80 | 11 | 16 |
| `conf/ironic.py` | 132 | 102 | 15 | 15 |
| `conf/key_manager.py` | 64 | 28 | 27 | 9 |
| `conf/keystone.py` | 44 | 23 | 12 | 9 |
| `conf/libvirt.py` | 1716 | 1398 | 24 | 294 |
| `conf/manila.py` | 58 | 34 | 11 | 13 |
| `conf/mks.py` | 64 | 36 | 14 | 14 |
| `conf/netconf.py` | 108 | 63 | 20 | 25 |
| `conf/neutron.py` | 178 | 123 | 20 | 35 |
| `conf/notifications.py` | 127 | 97 | 15 | 15 |
| `conf/novnc.py` | 78 | 50 | 14 | 14 |
| `conf/opts.py` | 79 | 51 | 14 | 14 |
| `conf/paths.py` | 78 | 42 | 16 | 20 |
| `conf/pci.py` | 388 | 305 | 15 | 68 |
| `conf/placement.py` | 42 | 21 | 11 | 10 |
| `conf/quota.py` | 372 | 288 | 18 | 66 |
| `conf/rpc.py` | 52 | 26 | 14 | 12 |
| `conf/scheduler.py` | 1067 | 783 | 20 | 264 |
| `conf/serial_console.py` | 127 | 86 | 15 | 26 |
| `conf/service.py` | 91 | 54 | 19 | 18 |
| `conf/service_token.py` | 63 | 42 | 11 | 10 |
| `conf/servicegroup.py` | 48 | 25 | 14 | 9 |
| `conf/spice.py` | 245 | 189 | 14 | 42 |
| `conf/upgrade_levels.py` | 108 | 72 | 15 | 21 |
| `conf/utils.py` | 91 | 55 | 21 | 15 |
| `conf/vendordata.py` | 42 | 22 | 14 | 6 |
| `conf/vmware.py` | 302 | 230 | 16 | 56 |
| `conf/vnc.py` | 199 | 140 | 14 | 45 |
| `conf/workarounds.py` | 449 | 360 | 14 | 75 |
| `conf/wsgi.py` | 80 | 51 | 14 | 15 |
| `conf/zvm.py` | 86 | 56 | 13 | 17 |
| `console/__init__.py` | 21 | 8 | 11 | 2 |
| `console/rfb/__init__.py` | 0 | 0 | 0 | 0 |
| `console/rfb/auth.py` | 65 | 38 | 13 | 14 |
| `console/rfb/authnone.py` | 24 | 6 | 13 | 5 |
| `console/rfb/auths.py` | 53 | 27 | 13 | 13 |
| `console/rfb/authvencrypt.py` | 162 | 109 | 22 | 31 |
| `console/securityproxy/__init__.py` | 0 | 0 | 0 | 0 |
| `console/securityproxy/base.py` | 44 | 21 | 14 | 9 |
| `console/securityproxy/rfb.py` | 221 | 147 | 32 | 42 |
| `console/serial.py` | 90 | 53 | 16 | 21 |
| `console/type.py` | 46 | 21 | 13 | 12 |
| `console/websocketproxy.py` | 332 | 221 | 56 | 55 |
| `db/__init__.py` | 0 | 0 | 0 | 0 |
| `db/api/__init__.py` | 0 | 0 | 0 | 0 |
| `db/api/api.py` | 50 | 23 | 14 | 13 |
| `db/api/migrations/env.py` | 123 | 80 | 17 | 26 |
| `db/api/migrations/versions/b30f573d3377_remove_unused_build_requests_columns.py` | 45 | 27 | 12 | 6 |
| `db/api/migrations/versions/cdeec0c85668_drop_legacy_migrate_version_table.py` | 36 | 17 | 12 | 7 |
| `db/api/migrations/versions/d67eeaabee36_initial_version.py` | 603 | 544 | 16 | 43 |
| `db/api/models.py` | 495 | 371 | 29 | 95 |
| `db/constants.py` | 25 | 4 | 19 | 2 |
| `db/main/__init__.py` | 0 | 0 | 0 | 0 |
| `db/main/api.py` | 4967 | 3535 | 473 | 959 |
| `db/main/migrations/env.py` | 129 | 82 | 20 | 27 |
| `db/main/migrations/versions/13863f4e1612_create_share_mapping_table.py` | 64 | 43 | 12 | 9 |
| `db/main/migrations/versions/16f1fbcab42b_resolve_shadow_table_diffs.py` | 64 | 29 | 20 | 15 |
| `db/main/migrations/versions/1acf2c98e646_add_compute_id_to_instance.py` | 49 | 29 | 12 | 8 |
| `db/main/migrations/versions/1b91788ec3a6_drop_legacy_migrate_version_table.py` | 36 | 17 | 12 | 7 |
| `db/main/migrations/versions/2903cd72dc14_add_tls_port_to_console_auth_tokens.py` | 33 | 14 | 12 | 7 |
| `db/main/migrations/versions/8f2f1571d55b_initial_version.py` | 1629 | 1436 | 88 | 105 |
| `db/main/migrations/versions/960aac0e09ea_de_duplicate_indexes_in_instances__.py` | 35 | 15 | 12 | 8 |
| `db/main/migrations/versions/ab450ba04102_db_add_indexes_for_source_dest_.py` | 40 | 22 | 12 | 6 |
| `db/main/migrations/versions/ccb0fa1a2252_add_encryption_fields_to_.py` | 59 | 41 | 12 | 6 |
| `db/main/migrations/versions/d60bddf7a903_add_constraint_instance_share_avoid_.py` | 75 | 56 | 12 | 7 |
| `db/main/models.py` | 1238 | 900 | 152 | 186 |
| `db/migration.py` | 108 | 51 | 30 | 27 |
| `db/types.py` | 87 | 48 | 21 | 18 |
| `db/utils.py` | 156 | 108 | 19 | 29 |
| `exception.py` | 2682 | 1525 | 50 | 1107 |
| `i18n.py` | 36 | 11 | 14 | 11 |
| `network/__init__.py` | 0 | 0 | 0 | 0 |
| `network/constants.py` | 52 | 20 | 20 | 12 |
| `network/model.py` | 633 | 423 | 83 | 127 |
| `network/neutron.py` | 3989 | 2876 | 648 | 465 |
| `network/os_vif_util.py` | 551 | 396 | 41 | 114 |
| `network/security_group_api.py` | 709 | 524 | 78 | 107 |
| `objects/__init__.py` | 122 | 95 | 22 | 5 |
| `objects/aggregate.py` | 597 | 460 | 35 | 102 |
| `objects/base.py` | 443 | 322 | 48 | 73 |
| `objects/block_device.py` | 504 | 356 | 82 | 66 |
| `objects/build_request.py` | 474 | 326 | 91 | 57 |
| `objects/cell_mapping.py` | 300 | 228 | 23 | 49 |
| `objects/compute_node.py` | 561 | 373 | 129 | 59 |
| `objects/console_auth_token.py` | 225 | 149 | 40 | 36 |
| `objects/diagnostics.py` | 179 | 127 | 19 | 33 |
| `objects/ec2.py` | 249 | 186 | 17 | 46 |
| `objects/external_event.py` | 82 | 39 | 28 | 15 |
| `objects/fields.py` | 1469 | 957 | 94 | 418 |
| `objects/flavor.py` | 677 | 516 | 59 | 102 |
| `objects/host_mapping.py` | 295 | 223 | 27 | 45 |
| `objects/hv_spec.py` | 55 | 27 | 19 | 9 |
| `objects/image_meta.py` | 812 | 408 | 259 | 145 |
| `objects/instance.py` | 1715 | 1296 | 208 | 211 |
| `objects/instance_action.py` | 300 | 220 | 47 | 33 |
| `objects/instance_fault.py` | 113 | 74 | 22 | 17 |
| `objects/instance_group.py` | 601 | 439 | 80 | 82 |
| `objects/instance_info_cache.py` | 121 | 72 | 30 | 19 |
| `objects/instance_mapping.py` | 473 | 352 | 68 | 53 |
| `objects/instance_numa.py` | 389 | 259 | 80 | 50 |
| `objects/instance_pci_requests.py` | 177 | 125 | 32 | 20 |
| `objects/keypair.py` | 208 | 143 | 27 | 38 |
| `objects/migrate_data.py` | 463 | 294 | 113 | 56 |
| `objects/migration.py` | 338 | 249 | 48 | 41 |
| `objects/migration_context.py` | 140 | 105 | 16 | 19 |
| `objects/monitor_metric.py` | 119 | 67 | 31 | 21 |
| `objects/network_metadata.py` | 50 | 30 | 14 | 6 |
| `objects/network_request.py` | 123 | 77 | 25 | 21 |
| `objects/numa.py` | 296 | 208 | 36 | 52 |
| `objects/pci_device.py` | 655 | 466 | 108 | 81 |
| `objects/pci_device_pool.py` | 109 | 68 | 27 | 14 |
| `objects/quotas.py` | 665 | 504 | 85 | 76 |
| `objects/request_spec.py` | 1565 | 1049 | 344 | 172 |
| `objects/resource.py` | 118 | 63 | 32 | 23 |
| `objects/security_group.py` | 190 | 132 | 29 | 29 |
| `objects/selection.py` | 115 | 71 | 33 | 11 |
| `objects/service.py` | 768 | 426 | 274 | 68 |
| `objects/share_mapping.py` | 259 | 201 | 26 | 32 |
| `objects/tag.py` | 85 | 54 | 15 | 16 |
| `objects/task_log.py` | 89 | 64 | 13 | 12 |
| `objects/trusted_certs.py` | 41 | 22 | 12 | 7 |
| `objects/vcpu_model.py` | 72 | 46 | 12 | 14 |
| `objects/virt_cpu_topology.py` | 45 | 24 | 14 | 7 |
| `objects/virt_device_metadata.py` | 165 | 110 | 16 | 39 |
| `objects/virtual_interface.py` | 338 | 232 | 62 | 44 |
| `objects/volume_usage.py` | 104 | 78 | 13 | 13 |
| `scheduler/__init__.py` | 22 | 7 | 13 | 2 |
| `scheduler/client/__init__.py` | 0 | 0 | 0 | 0 |
| `scheduler/client/query.py` | 95 | 64 | 14 | 17 |
| `scheduler/client/report.py` | 2688 | 1993 | 422 | 273 |
| `scheduler/filters/__init__.py` | 108 | 62 | 28 | 18 |
| `scheduler/filters/affinity_filter.py` | 165 | 95 | 36 | 34 |
| `scheduler/filters/aggregate_image_properties_isolation.py` | 83 | 52 | 18 | 13 |
| `scheduler/filters/aggregate_instance_extra_specs.py` | 80 | 47 | 19 | 14 |
| `scheduler/filters/aggregate_multitenancy_isolation.py` | 59 | 32 | 15 | 12 |
| `scheduler/filters/all_hosts_filter.py` | 29 | 7 | 15 | 7 |
| `scheduler/filters/compute_capabilities_filter.py` | 123 | 82 | 25 | 16 |
| `scheduler/filters/compute_filter.py` | 48 | 24 | 15 | 9 |
| `scheduler/filters/extra_specs_ops.py` | 67 | 39 | 19 | 9 |
| `scheduler/filters/image_props_filter.py` | 129 | 84 | 21 | 24 |
| `scheduler/filters/io_ops_filter.py` | 70 | 41 | 14 | 15 |
| `scheduler/filters/isolated_hosts_filter.py` | 72 | 36 | 23 | 13 |
| `scheduler/filters/json_filter.py` | 149 | 107 | 18 | 24 |
| `scheduler/filters/metrics_filter.py` | 54 | 30 | 14 | 10 |
| `scheduler/filters/num_instances_filter.py` | 68 | 39 | 14 | 15 |
| `scheduler/filters/numa_topology_filter.py` | 132 | 86 | 25 | 21 |
| `scheduler/filters/pci_passthrough_filter.py` | 74 | 42 | 14 | 18 |
| `scheduler/filters/type_filter.py` | 41 | 16 | 17 | 8 |
| `scheduler/filters/utils.py` | 82 | 52 | 14 | 16 |
| `scheduler/host_manager.py` | 976 | 724 | 120 | 132 |
| `scheduler/manager.py` | 838 | 511 | 225 | 102 |
| `scheduler/request_filter.py` | 633 | 463 | 61 | 109 |
| `scheduler/rpcapi.py` | 185 | 137 | 17 | 31 |
| `scheduler/utils.py` | 1560 | 1064 | 255 | 241 |
| `scheduler/weights/__init__.py` | 48 | 22 | 14 | 12 |
| `scheduler/weights/affinity.py` | 76 | 42 | 14 | 20 |
| `scheduler/weights/compute.py` | 36 | 18 | 12 | 6 |
| `scheduler/weights/cpu.py` | 46 | 24 | 14 | 8 |
| `scheduler/weights/cross_cell.py` | 63 | 37 | 19 | 7 |
| `scheduler/weights/disk.py` | 42 | 21 | 14 | 7 |
| `scheduler/weights/hypervisor_version.py` | 39 | 19 | 12 | 8 |
| `scheduler/weights/image_props.py` | 115 | 69 | 29 | 17 |
| `scheduler/weights/io_ops.py` | 44 | 23 | 14 | 7 |
| `scheduler/weights/metrics.py` | 77 | 43 | 20 | 14 |
| `scheduler/weights/num_instances.py` | 41 | 22 | 11 | 8 |
| `scheduler/weights/pci.py` | 68 | 29 | 27 | 12 |
| `scheduler/weights/ram.py` | 42 | 21 | 14 | 7 |
| `service_auth.py` | 104 | 63 | 16 | 25 |
| `utils.py` | 1209 | 829 | 155 | 225 |
| **TOTAL** | **133,109** | **95,464** | | |


### Top 5 Functions by Cyclomatic Complexity

Taken from the `ccn` field of each KB symbol record.

| CCN | Function | File |
|---|---|---|
| 50 | `show` | `api/openstack/compute/views/servers.py` |
| 43 | `_validate_bdm` | `compute/api.py` |
| 42 | `obj_make_compatible` | `objects/image_meta.py` |
| 40 | `_init_instance` | `compute/manager.py` |
| 37 | `_get_servers` | `api/openstack/compute/servers.py` |

---

## Defined Symbols

Across all 433 KB records the component defines **9,479 symbols** in total. Source: `symbols` arrays in `.aee/kb/src/nova/**/*.json`.

| Kind | Count |
|---|---|
| method | 3,071 |
| variable | 1,368 |
| field | 1,307 |
| constant | 1,297 |
| class | 1,123 |
| function | 1,100 |
| property | 104 |
| staticmethod | 91 |
| classmethod | 11 |
| import | 7 |

Selected key symbols by subsystem:

**api/**
- `api/openstack/compute/routes.py` (901 lines): URL routing table mapping HTTP method + path to controller classes.
- `api/openstack/wsgi.py` (937 lines): `Controller` base, `Application`, `ResourceExceptionHandler`, request/response serialisation.
- `api/openstack/compute/servers.py` (1,639 lines): `ServersController` with `create`, `show`, `index`, `_get_servers` (CCN 37).
- `api/openstack/compute/views/servers.py` (823 lines): `ViewBuilder.show` (CCN 50) serialising instances to REST responses.
- `api/openstack/compute/schemas/servers.py` (2,123 lines): JSON schema constants for server create/update/action.
- `api/validation/__init__.py` (452 lines): `schema` decorator factory for request body validation.

**cmd/**
- `cmd/manage.py`: `ManageCommands` class with sub-commands for database migrations, user management, floating-IP allocation, and cell operations.
- `cmd/baseproxy.py`: shared console proxy startup logic.
- `cmd/policy.py`: policy rule checker accepting OS_ROLES, OS_USER_ID, OS_TENANT_ID from environment.
- Nine service launcher scripts (`cmd/api.py`, `cmd/compute.py`, `cmd/conductor.py`, `cmd/scheduler.py`, `cmd/novncproxy.py`, `cmd/serialproxy.py`, `cmd/spicehtml5proxy.py`, `cmd/status.py`): each calls `config.parse_args(sys.argv)` as their primary entry point.

**compute/**
- `compute/api.py`: class `API` — the public compute service interface (instance CRUD, live migration, resize, shelve, snapshot, power operations). CCN-43 function `_validate_bdm`.
- `compute/manager.py`: class `ComputeManager` — per-hypervisor service process implementing all instance lifecycle operations. CCN-40 function `_init_instance`.

**conductor/**
- `conductor/manager.py`: class `ConductorManager` coordinating multi-node operations (build instance, migrate, evacuate, unshelve). 18 db-write sinks.

**conf/**
- One `cfg.OptGroup` + `cfg.Opt` declaration file per Nova sub-system (e.g. `conf/compute.py`, `conf/scheduler.py`, `conf/database.py`); each defines the `nova.conf` option namespace consumed by all other sub-systems.

**console/**
- `console/websocketproxy.py`: WebSocket proxy base used by noVNC, SPICE, and serial console.
- `console/securityproxy/rfb.py` and `console/rfb/auths.py`: RFB (VNC) protocol security-handshake handlers.
- `console/serial.py`: serial console proxy; `network-socket` entry point at `L83`.

**accelerator/**
- Class `_CyborgClient` (`accelerator/cyborg.py:L118-L419`): 14 HTTP-wrapper methods for Cyborg API.
- Function `get_client` (`accelerator/cyborg.py:L53-L65`): lazily-created `_CyborgClient` factory.

**exception.py**
- 1,297 constant symbols (Nova exception class hierarchy, `exception.py:L27-L2682`).
- Class `ConvertedException` (`exception.py:L35`): bridges `webob.exc.WSGIHTTPException` into nova hierarchy.

**objects/**
- 45 domain-object classes (`Instance`, `Flavor`, `ComputeNode`, `Migration`, `RequestSpec`, `InstanceGroup`, `PciDevice`, `Aggregate`, `Service`, etc.).
- `objects/base.py`: `NovaObject` and `NovaObjectDictCompat` base classes.
- `objects/fields.py` (1,469 lines): 1,307 field-type classes.
- `objects/__init__.py` (122 lines): OVO registry import hub.

**network/**
- `network/neutron.py` (3,989 lines): `API` class — Neutron client for all port, network, security group, and floating-IP operations.
- `network/model.py` (633 lines): `NetworkInfo`, `Network`, `Subnet`, `FixedIP`, `FloatingIP`, `VIF` data-model classes.
- `network/security_group_api.py` (709 lines): `SecurityGroupAPI` delegating to Neutron.
- `network/os_vif_util.py` (551 lines): conversion between Nova VIF objects and os-vif plug-in descriptors.

**db/api/** and **db/main/**
- `db/api/models.py`: 23 SQLAlchemy ORM model classes for the API database.
- `db/main/models.py`: ORM models for the main database.
- `db/main/api.py` (4,967 lines, 3,535 LOC): 526+ module-level query functions.
- `db/migration.py`: `db_sync`, `db_version`, `db_initial_version` (`db/migration.py:L1-L108`).

**scheduler/**
- `scheduler/manager.py`: `SchedulerManager` orchestrating host selection via `select_destinations`.
- `scheduler/client/report.py` (2,688 lines): `SchedulerReportClient` managing Placement resource-provider records.
- `scheduler/filters/__init__.py`: abstract `BaseHostFilter`; 14 concrete filter subclasses.
- `scheduler/weights/__init__.py`: abstract `BaseHostWeigher`; 12 concrete weigher subclasses.
- `scheduler/utils.py` (1,560 lines): helper functions including `resources_from_request_spec` (CCN 27).

---

## External Dependencies

All non-`nova` modules imported across the 433 KB records. Source: `dependencies` arrays in `.aee/kb/src/nova/**/*.json`.

| Package | Files importing |
|---|---|
| `oslo_utils` | 130 |
| `oslo_log` | 106 |
| `webob` | 86 |
| `copy` | 69 |
| `oslo_config` | 61 |
| `sqlalchemy` | 59 |
| `oslo_serialization` | 43 |
| `oslo_db` | 30 |
| `keystoneauth1` | 26 |
| `collections` | 25 |
| `functools` | 24 |
| `alembic` | 18 |
| `re` | 17 |
| `sys` | 15 |
| `os` | 14 |
| `oslo_messaging` | 13 |
| `typing` | 11 |
| `itertools` | 10 |
| `urllib` | 10 |
| `oslo_reports` | 10 |

Additional packages used by fewer files: `cursive`, `eventlet`, `greenlet`, `hashlib`, `jsonschema`, `netaddr`, `openstack`, `os_resource_classes`, `os_service_types`, `os_traits`, `oslo_concurrency`, `oslo_i18n`, `oslo_middleware`, `oslo_service`, `oslo_versionedobjects`, `osc_lib`, `retrying`, and standard-library modules. Total unique external packages: 90.

---

## Side Effects

1,858 side-effect records across 284 files. Source: `sideEffects` arrays in `.aee/kb/src/nova/**/*.json`.

| Kind | Count | Primary subsystem |
|---|---|---|
| global-mutation | 1,303 | compute/ (350+), objects/ (649), api/ (175+), scheduler/ (89), conf/ (60+) |
| network | 527 | api/ (200+), objects/ (108), network/ (80+), compute/ (50+), db/ (42), scheduler/ (6), accelerator/ (7) |
| file-io | 26 | cmd/ (12), core utils (4), compute/ (6), db/ (2), api/ (2) |
| syscall | 2 | console/ (2) |

Representative entries:
- `cmd/compute.py:L49` — `cli-args` (entry point): `config.parse_args(sys.argv)` processes command-line flags.
- `compute/api.py` — 350+ `global-mutation` entries recording instance state changes.
- `compute/manager.py` — 50+ `network` entries: RPC calls to conductor, scheduler, and network services.
- `console/serial.py:L83` — `network-socket` (entry point): raw socket opened for serial console connection.
- `network/neutron.py` — 80+ `network` side effects: Neutron REST API calls.
- `conf/compute.py` — oslo.config option declarations registered at module import time (global-mutation).
- `db/main/api.py` — 46 `network`-class entries: SQLAlchemy session operations.
- `accelerator/cyborg.py:L153-L154` — `network`: HTTP GET to Cyborg `/device_profiles`.

---

## Component Diagram

All 1,536 file edges are intra-component (`crossComponent: false`). No cross-component seams exist. Source: `.aee/link-graph.json` (batch f56908d5).

```mermaid
graph LR
    accelerator-cyborg-py["accelerator/cyborg.py"]
    api-auth-py["api/auth.py"]
    api-metadata-base-py["api/metadata/base.py"]
    api-metadata-handler-py["api/metadata/handler.py"]
    api-metadata-password-py["api/metadata/password.py"]
    api-metadata-vendordata-dynamic-py["api/metadata/vendordata_dynamic.py"]
    api-metadata-vendordata-json-py["api/metadata/vendordata_json.py"]
    api-metadata-vendordata-py["api/metadata/vendordata.py"]
    api-openstack-api-version-request-py["api/openstack/api_version_request.py"]
    api-openstack-common-py["api/openstack/common.py"]
    api-openstack-compute-admin-actions-py["api/openstack/compute/admin_actions.py"]
    api-openstack-compute-admin-password-py["api/openstack/compute/admin_password.py"]
    api-openstack-compute-agents-py["api/openstack/compute/agents.py"]
    api-openstack-compute-aggregates-py["api/openstack/compute/aggregates.py"]
    api-openstack-compute-assisted-volume-snapshots-py["api/openstack/compute/assisted_volume_snapshots.py"]
    api-openstack-compute-attach-interfaces-py["api/openstack/compute/attach_interfaces.py"]
    api-openstack-compute-availability-zone-py["api/openstack/compute/availability_zone.py"]
    api-openstack-compute-baremetal-nodes-py["api/openstack/compute/baremetal_nodes.py"]
    api-openstack-compute-cells-py["api/openstack/compute/cells.py"]
    api-openstack-compute-certificates-py["api/openstack/compute/certificates.py"]
    api-openstack-compute-cloudpipe-py["api/openstack/compute/cloudpipe.py"]
    api-openstack-compute-console-auth-tokens-py["api/openstack/compute/console_auth_tokens.py"]
    api-openstack-compute-console-output-py["api/openstack/compute/console_output.py"]
    api-openstack-compute-consoles-py["api/openstack/compute/consoles.py"]
    api-openstack-compute-create-backup-py["api/openstack/compute/create_backup.py"]
    api-openstack-compute-deferred-delete-py["api/openstack/compute/deferred_delete.py"]
    api-openstack-compute-evacuate-py["api/openstack/compute/evacuate.py"]
    api-openstack-compute-extension-info-py["api/openstack/compute/extension_info.py"]
    api-openstack-compute-fixed-ips-py["api/openstack/compute/fixed_ips.py"]
    api-openstack-compute-flavor-access-py["api/openstack/compute/flavor_access.py"]
    api-openstack-compute-flavors-extraspecs-py["api/openstack/compute/flavors_extraspecs.py"]
    api-openstack-compute-flavors-py["api/openstack/compute/flavors.py"]
    api-openstack-compute-floating-ip-dns-py["api/openstack/compute/floating_ip_dns.py"]
    api-openstack-compute-floating-ip-pools-py["api/openstack/compute/floating_ip_pools.py"]
    api-openstack-compute-floating-ips-bulk-py["api/openstack/compute/floating_ips_bulk.py"]
    api-openstack-compute-floating-ips-py["api/openstack/compute/floating_ips.py"]
    api-openstack-compute-fping-py["api/openstack/compute/fping.py"]
    api-openstack-compute-helpers-py["api/openstack/compute/helpers.py"]
    api-openstack-compute-hosts-py["api/openstack/compute/hosts.py"]
    api-openstack-compute-hypervisors-py["api/openstack/compute/hypervisors.py"]
    api-openstack-compute-image-metadata-py["api/openstack/compute/image_metadata.py"]
    api-openstack-compute-images-py["api/openstack/compute/images.py"]
    api-openstack-compute-init["api/openstack/compute/__init__.py"]
    api-openstack-compute-instance-actions-py["api/openstack/compute/instance_actions.py"]
    api-openstack-compute-instance-usage-audit-log-py["api/openstack/compute/instance_usage_audit_log.py"]
    api-openstack-compute-ips-py["api/openstack/compute/ips.py"]
    api-openstack-compute-keypairs-py["api/openstack/compute/keypairs.py"]
    api-openstack-compute-limits-py["api/openstack/compute/limits.py"]
    api-openstack-compute-lock-server-py["api/openstack/compute/lock_server.py"]
    api-openstack-compute-migrate-server-py["api/openstack/compute/migrate_server.py"]
    api-openstack-compute-migrations-py["api/openstack/compute/migrations.py"]
    api-openstack-compute-multinic-py["api/openstack/compute/multinic.py"]
    api-openstack-compute-networks-associate-py["api/openstack/compute/networks_associate.py"]
    api-openstack-compute-networks-py["api/openstack/compute/networks.py"]
    api-openstack-compute-pause-server-py["api/openstack/compute/pause_server.py"]
    api-openstack-compute-quota-classes-py["api/openstack/compute/quota_classes.py"]
    api-openstack-compute-quota-sets-py["api/openstack/compute/quota_sets.py"]
    api-openstack-compute-remote-consoles-py["api/openstack/compute/remote_consoles.py"]
    api-openstack-compute-rescue-py["api/openstack/compute/rescue.py"]
    api-openstack-compute-routes-py["api/openstack/compute/routes.py"]
    api-openstack-compute-schemas-admin-actions-py["api/openstack/compute/schemas/admin_actions.py"]
    api-openstack-compute-schemas-admin-password-py["api/openstack/compute/schemas/admin_password.py"]
    api-openstack-compute-schemas-agents-py["api/openstack/compute/schemas/agents.py"]
    api-openstack-compute-schemas-aggregate-images-py["api/openstack/compute/schemas/aggregate_images.py"]
    api-openstack-compute-schemas-aggregates-py["api/openstack/compute/schemas/aggregates.py"]
    api-openstack-compute-schemas-assisted-volume-snapshots-py["api/openstack/compute/schemas/assisted_volume_snapshots.py"]
    api-openstack-compute-schemas-attach-interfaces-py["api/openstack/compute/schemas/attach_interfaces.py"]
    api-openstack-compute-schemas-availability-zone-py["api/openstack/compute/schemas/availability_zone.py"]
    api-openstack-compute-schemas-baremetal-nodes-py["api/openstack/compute/schemas/baremetal_nodes.py"]
    api-openstack-compute-schemas-cells-py["api/openstack/compute/schemas/cells.py"]
    api-openstack-compute-schemas-certificates-py["api/openstack/compute/schemas/certificates.py"]
    api-openstack-compute-schemas-cloudpipe-py["api/openstack/compute/schemas/cloudpipe.py"]
    api-openstack-compute-schemas-console-auth-tokens-py["api/openstack/compute/schemas/console_auth_tokens.py"]
    api-openstack-compute-schemas-console-output-py["api/openstack/compute/schemas/console_output.py"]
    api-openstack-compute-schemas-consoles-py["api/openstack/compute/schemas/consoles.py"]
    api-openstack-compute-schemas-create-backup-py["api/openstack/compute/schemas/create_backup.py"]
    api-openstack-compute-schemas-deferred-delete-py["api/openstack/compute/schemas/deferred_delete.py"]
    api-openstack-compute-schemas-evacuate-py["api/openstack/compute/schemas/evacuate.py"]
    api-openstack-compute-schemas-extension-info-py["api/openstack/compute/schemas/extension_info.py"]
    api-openstack-compute-schemas-fixed-ips-py["api/openstack/compute/schemas/fixed_ips.py"]
    api-openstack-compute-schemas-flavor-access-py["api/openstack/compute/schemas/flavor_access.py"]
    api-openstack-compute-schemas-flavors-extraspecs-py["api/openstack/compute/schemas/flavors_extraspecs.py"]
    api-openstack-compute-schemas-flavors-py["api/openstack/compute/schemas/flavors.py"]
    api-openstack-compute-schemas-floating-ip-dns-py["api/openstack/compute/schemas/floating_ip_dns.py"]
    api-openstack-compute-schemas-floating-ip-pools-py["api/openstack/compute/schemas/floating_ip_pools.py"]
    api-openstack-compute-schemas-floating-ips-bulk-py["api/openstack/compute/schemas/floating_ips_bulk.py"]
    api-openstack-compute-schemas-floating-ips-py["api/openstack/compute/schemas/floating_ips.py"]
    api-openstack-compute-schemas-fping-py["api/openstack/compute/schemas/fping.py"]
    api-openstack-compute-schemas-hosts-py["api/openstack/compute/schemas/hosts.py"]
    api-openstack-compute-schemas-hypervisors-py["api/openstack/compute/schemas/hypervisors.py"]
    api-openstack-compute-schemas-image-metadata-py["api/openstack/compute/schemas/image_metadata.py"]
    api-openstack-compute-schemas-images-py["api/openstack/compute/schemas/images.py"]
    api-openstack-compute-schemas-instance-actions-py["api/openstack/compute/schemas/instance_actions.py"]
    api-openstack-compute-schemas-instance-usage-audit-log-py["api/openstack/compute/schemas/instance_usage_audit_log.py"]
    api-openstack-compute-schemas-ips-py["api/openstack/compute/schemas/ips.py"]
    api-openstack-compute-schemas-keypairs-py["api/openstack/compute/schemas/keypairs.py"]
    api-openstack-compute-schemas-limits-py["api/openstack/compute/schemas/limits.py"]
    api-openstack-compute-schemas-lock-server-py["api/openstack/compute/schemas/lock_server.py"]
    api-openstack-compute-schemas-migrate-server-py["api/openstack/compute/schemas/migrate_server.py"]
    api-openstack-compute-schemas-migrations-py["api/openstack/compute/schemas/migrations.py"]
    api-openstack-compute-schemas-multinic-py["api/openstack/compute/schemas/multinic.py"]
    api-openstack-compute-schemas-networks-associate-py["api/openstack/compute/schemas/networks_associate.py"]
    api-openstack-compute-schemas-networks-py["api/openstack/compute/schemas/networks.py"]
    api-openstack-compute-schemas-pause-server-py["api/openstack/compute/schemas/pause_server.py"]
    api-openstack-compute-schemas-quota-classes-py["api/openstack/compute/schemas/quota_classes.py"]
    api-openstack-compute-schemas-quota-sets-py["api/openstack/compute/schemas/quota_sets.py"]
    api-openstack-compute-schemas-remote-consoles-py["api/openstack/compute/schemas/remote_consoles.py"]
    api-openstack-compute-schemas-rescue-py["api/openstack/compute/schemas/rescue.py"]
    api-openstack-compute-schemas-security-group-default-rules-py["api/openstack/compute/schemas/security_group_default_rules.py"]
    api-openstack-compute-schemas-security-groups-py["api/openstack/compute/schemas/security_groups.py"]
    api-openstack-compute-schemas-server-diagnostics-py["api/openstack/compute/schemas/server_diagnostics.py"]
    api-openstack-compute-schemas-server-external-events-py["api/openstack/compute/schemas/server_external_events.py"]
    api-openstack-compute-schemas-server-groups-py["api/openstack/compute/schemas/server_groups.py"]
    api-openstack-compute-schemas-server-metadata-py["api/openstack/compute/schemas/server_metadata.py"]
    api-openstack-compute-schemas-server-migrations-py["api/openstack/compute/schemas/server_migrations.py"]
    api-openstack-compute-schemas-server-password-py["api/openstack/compute/schemas/server_password.py"]
    api-openstack-compute-schemas-server-shares-py["api/openstack/compute/schemas/server_shares.py"]
    api-openstack-compute-schemas-server-tags-py["api/openstack/compute/schemas/server_tags.py"]
    api-openstack-compute-schemas-server-topology-py["api/openstack/compute/schemas/server_topology.py"]
    api-openstack-compute-schemas-servers-py["api/openstack/compute/schemas/servers.py"]
    api-openstack-compute-schemas-services-py["api/openstack/compute/schemas/services.py"]
    api-openstack-compute-schemas-shelve-py["api/openstack/compute/schemas/shelve.py"]
    api-openstack-compute-schemas-simple-tenant-usage-py["api/openstack/compute/schemas/simple_tenant_usage.py"]
    api-openstack-compute-schemas-snapshots-py["api/openstack/compute/schemas/snapshots.py"]
    api-openstack-compute-schemas-suspend-server-py["api/openstack/compute/schemas/suspend_server.py"]
    api-openstack-compute-schemas-tenant-networks-py["api/openstack/compute/schemas/tenant_networks.py"]
    api-openstack-compute-schemas-versions-py["api/openstack/compute/schemas/versions.py"]
    api-openstack-compute-schemas-virtual-interfaces-py["api/openstack/compute/schemas/virtual_interfaces.py"]
    api-openstack-compute-schemas-volume-attachments-py["api/openstack/compute/schemas/volume_attachments.py"]
    api-openstack-compute-schemas-volumes-py["api/openstack/compute/schemas/volumes.py"]
    api-openstack-compute-security-group-default-rules-py["api/openstack/compute/security_group_default_rules.py"]
    api-openstack-compute-security-groups-py["api/openstack/compute/security_groups.py"]
    api-openstack-compute-server-diagnostics-py["api/openstack/compute/server_diagnostics.py"]
    api-openstack-compute-server-external-events-py["api/openstack/compute/server_external_events.py"]
    api-openstack-compute-server-groups-py["api/openstack/compute/server_groups.py"]
    api-openstack-compute-server-metadata-py["api/openstack/compute/server_metadata.py"]
    api-openstack-compute-server-migrations-py["api/openstack/compute/server_migrations.py"]
    api-openstack-compute-server-password-py["api/openstack/compute/server_password.py"]
    api-openstack-compute-server-shares-py["api/openstack/compute/server_shares.py"]
    api-openstack-compute-server-tags-py["api/openstack/compute/server_tags.py"]
    api-openstack-compute-server-topology-py["api/openstack/compute/server_topology.py"]
    api-openstack-compute-servers-py["api/openstack/compute/servers.py"]
    api-openstack-compute-services-py["api/openstack/compute/services.py"]
    api-openstack-compute-shelve-py["api/openstack/compute/shelve.py"]
    api-openstack-compute-simple-tenant-usage-py["api/openstack/compute/simple_tenant_usage.py"]
    api-openstack-compute-snapshots-py["api/openstack/compute/snapshots.py"]
    api-openstack-compute-suspend-server-py["api/openstack/compute/suspend_server.py"]
    api-openstack-compute-tenant-networks-py["api/openstack/compute/tenant_networks.py"]
    api-openstack-compute-versions-py["api/openstack/compute/versions.py"]
    api-openstack-compute-versionsV21-py["api/openstack/compute/versionsV21.py"]
    api-openstack-compute-views-flavors-py["api/openstack/compute/views/flavors.py"]
    api-openstack-compute-views-hypervisors-py["api/openstack/compute/views/hypervisors.py"]
    api-openstack-compute-views-images-py["api/openstack/compute/views/images.py"]
    api-openstack-compute-views-instance-actions-py["api/openstack/compute/views/instance_actions.py"]
    api-openstack-compute-views-ips-py["api/openstack/compute/views/ips.py"]
    api-openstack-compute-views-keypairs-py["api/openstack/compute/views/keypairs.py"]
    api-openstack-compute-views-limits-py["api/openstack/compute/views/limits.py"]
    api-openstack-compute-views-migrations-py["api/openstack/compute/views/migrations.py"]
    api-openstack-compute-views-server-diagnostics-py["api/openstack/compute/views/server_diagnostics.py"]
    api-openstack-compute-views-server-shares-py["api/openstack/compute/views/server_shares.py"]
    api-openstack-compute-views-server-tags-py["api/openstack/compute/views/server_tags.py"]
    api-openstack-compute-views-servers-py["api/openstack/compute/views/servers.py"]
    api-openstack-compute-views-usages-py["api/openstack/compute/views/usages.py"]
    api-openstack-compute-views-versions-py["api/openstack/compute/views/versions.py"]
    api-openstack-compute-virtual-interfaces-py["api/openstack/compute/virtual_interfaces.py"]
    api-openstack-compute-volume-attachments-py["api/openstack/compute/volume_attachments.py"]
    api-openstack-compute-volumes-boot-py["api/openstack/compute/volumes_boot.py"]
    api-openstack-compute-volumes-py["api/openstack/compute/volumes.py"]
    api-openstack-identity-py["api/openstack/identity.py"]
    api-openstack-init["api/openstack/__init__.py"]
    api-openstack-requestlog-py["api/openstack/requestlog.py"]
    api-openstack-urlmap-py["api/openstack/urlmap.py"]
    api-openstack-wsgi-app-py["api/openstack/wsgi_app.py"]
    api-openstack-wsgi-py["api/openstack/wsgi.py"]
    api-validation-extra-specs-accel-py["api/validation/extra_specs/accel.py"]
    api-validation-extra-specs-aggregate-instance-extra-specs-py["api/validation/extra_specs/aggregate_instance_extra_specs.py"]
    api-validation-extra-specs-base-py["api/validation/extra_specs/base.py"]
    api-validation-extra-specs-capabilities-py["api/validation/extra_specs/capabilities.py"]
    api-validation-extra-specs-hw-py["api/validation/extra_specs/hw.py"]
    api-validation-extra-specs-hw-rng-py["api/validation/extra_specs/hw_rng.py"]
    api-validation-extra-specs-hw-video-py["api/validation/extra_specs/hw_video.py"]
    api-validation-extra-specs-null-py["api/validation/extra_specs/null.py"]
    api-validation-extra-specs-os-py["api/validation/extra_specs/os.py"]
    api-validation-extra-specs-pci-passthrough-py["api/validation/extra_specs/pci_passthrough.py"]
    api-validation-extra-specs-quota-py["api/validation/extra_specs/quota.py"]
    api-validation-extra-specs-resources-py["api/validation/extra_specs/resources.py"]
    api-validation-extra-specs-traits-py["api/validation/extra_specs/traits.py"]
    api-validation-extra-specs-validators-py["api/validation/extra_specs/validators.py"]
    api-validation-extra-specs-vmware-py["api/validation/extra_specs/vmware.py"]
    api-validation-init["api/validation/__init__.py"]
    api-validation-parameter-types-py["api/validation/parameter_types.py"]
    api-validation-response-types-py["api/validation/response_types.py"]
    api-validation-validators-py["api/validation/validators.py"]
    api-wsgi-py["api/wsgi.py"]
    cmd-baseproxy-py["cmd/baseproxy.py"]
    cmd-common-py["cmd/common.py"]
    cmd-compute-py["cmd/compute.py"]
    cmd-conductor-py["cmd/conductor.py"]
    cmd-manage-py["cmd/manage.py"]
    cmd-novncproxy-py["cmd/novncproxy.py"]
    cmd-policy-py["cmd/policy.py"]
    cmd-scheduler-py["cmd/scheduler.py"]
    cmd-serialproxy-py["cmd/serialproxy.py"]
    cmd-spicehtml5proxy-py["cmd/spicehtml5proxy.py"]
    cmd-status-py["cmd/status.py"]
    compute-api-py["compute/api.py"]
    compute-build-results-py["compute/build_results.py"]
    compute-claims-py["compute/claims.py"]
    compute-flavors-py["compute/flavors.py"]
    compute-instance-actions-py["compute/instance_actions.py"]
    compute-instance-list-py["compute/instance_list.py"]
    compute-manager-py["compute/manager.py"]
    compute-migration-list-py["compute/migration_list.py"]
    compute-monitors-base-py["compute/monitors/base.py"]
    compute-monitors-cpu-virt-driver-py["compute/monitors/cpu/virt_driver.py"]
    compute-monitors-init["compute/monitors/__init__.py"]
    compute-multi-cell-list-py["compute/multi_cell_list.py"]
    compute-pci-placement-translator-py["compute/pci_placement_translator.py"]
    compute-power-state-py["compute/power_state.py"]
    compute-provider-config-py["compute/provider_config.py"]
    compute-provider-tree-py["compute/provider_tree.py"]
    compute-resource-tracker-py["compute/resource_tracker.py"]
    compute-rpcapi-py["compute/rpcapi.py"]
    compute-share-management-py["compute/share_management.py"]
    compute-stats-py["compute/stats.py"]
    compute-task-states-py["compute/task_states.py"]
    compute-utils-py["compute/utils.py"]
    compute-vm-states-py["compute/vm_states.py"]
    conductor-api-py["conductor/api.py"]
    conductor-init["conductor/__init__.py"]
    conductor-manager-py["conductor/manager.py"]
    conductor-rpcapi-py["conductor/rpcapi.py"]
    conductor-tasks-base-py["conductor/tasks/base.py"]
    conductor-tasks-cross-cell-migrate-py["conductor/tasks/cross_cell_migrate.py"]
    conductor-tasks-live-migrate-py["conductor/tasks/live_migrate.py"]
    conductor-tasks-migrate-py["conductor/tasks/migrate.py"]
    conf-api-py["conf/api.py"]
    conf-availability-zone-py["conf/availability_zone.py"]
    conf-base-py["conf/base.py"]
    conf-cache-py["conf/cache.py"]
    conf-cinder-py["conf/cinder.py"]
    conf-compute-py["conf/compute.py"]
    conf-conductor-py["conf/conductor.py"]
    conf-configdrive-py["conf/configdrive.py"]
    conf-console-py["conf/console.py"]
    conf-consoleauth-py["conf/consoleauth.py"]
    conf-cyborg-py["conf/cyborg.py"]
    conf-database-py["conf/database.py"]
    conf-devices-py["conf/devices.py"]
    conf-ephemeral-storage-py["conf/ephemeral_storage.py"]
    conf-glance-py["conf/glance.py"]
    conf-guestfs-py["conf/guestfs.py"]
    conf-imagecache-py["conf/imagecache.py"]
    conf-init["conf/__init__.py"]
    conf-ironic-py["conf/ironic.py"]
    conf-key-manager-py["conf/key_manager.py"]
    conf-keystone-py["conf/keystone.py"]
    conf-libvirt-py["conf/libvirt.py"]
    conf-manila-py["conf/manila.py"]
    conf-mks-py["conf/mks.py"]
    conf-netconf-py["conf/netconf.py"]
    conf-neutron-py["conf/neutron.py"]
    conf-notifications-py["conf/notifications.py"]
    conf-novnc-py["conf/novnc.py"]
    conf-paths-py["conf/paths.py"]
    conf-pci-py["conf/pci.py"]
    conf-placement-py["conf/placement.py"]
    conf-quota-py["conf/quota.py"]
    conf-rpc-py["conf/rpc.py"]
    conf-scheduler-py["conf/scheduler.py"]
    conf-serial-console-py["conf/serial_console.py"]
    conf-service-py["conf/service.py"]
    conf-service-token-py["conf/service_token.py"]
    conf-servicegroup-py["conf/servicegroup.py"]
    conf-spice-py["conf/spice.py"]
    conf-upgrade-levels-py["conf/upgrade_levels.py"]
    conf-utils-py["conf/utils.py"]
    conf-vendordata-py["conf/vendordata.py"]
    conf-vmware-py["conf/vmware.py"]
    conf-vnc-py["conf/vnc.py"]
    conf-workarounds-py["conf/workarounds.py"]
    conf-wsgi-py["conf/wsgi.py"]
    conf-zvm-py["conf/zvm.py"]
    console-rfb-auth-py["console/rfb/auth.py"]
    console-rfb-authnone-py["console/rfb/authnone.py"]
    console-rfb-auths-py["console/rfb/auths.py"]
    console-rfb-authvencrypt-py["console/rfb/authvencrypt.py"]
    console-securityproxy-base-py["console/securityproxy/base.py"]
    console-securityproxy-rfb-py["console/securityproxy/rfb.py"]
    console-serial-py["console/serial.py"]
    console-websocketproxy-py["console/websocketproxy.py"]
    db-api-api-py["db/api/api.py"]
    db-api-migrations-env-py["db/api/migrations/env.py"]
    db-api-migrations-versions-d67eeaabee36-initial-version-py["db/api/migrations/versions/d67eeaabee36_initial_version.py"]
    db-api-models-py["db/api/models.py"]
    db-constants-py["db/constants.py"]
    db-main-api-py["db/main/api.py"]
    db-main-migrations-env-py["db/main/migrations/env.py"]
    db-main-migrations-versions-8f2f1571d55b-initial-version-py["db/main/migrations/versions/8f2f1571d55b_initial_version.py"]
    db-main-models-py["db/main/models.py"]
    db-migration-py["db/migration.py"]
    db-types-py["db/types.py"]
    db-utils-py["db/utils.py"]
    exception-py["exception.py"]
    i18n-py["i18n.py"]
    network-constants-py["network/constants.py"]
    network-model-py["network/model.py"]
    network-neutron-py["network/neutron.py"]
    network-os-vif-util-py["network/os_vif_util.py"]
    network-security-group-api-py["network/security_group_api.py"]
    objects-aggregate-py["objects/aggregate.py"]
    objects-base-py["objects/base.py"]
    objects-block-device-py["objects/block_device.py"]
    objects-build-request-py["objects/build_request.py"]
    objects-cell-mapping-py["objects/cell_mapping.py"]
    objects-compute-node-py["objects/compute_node.py"]
    objects-console-auth-token-py["objects/console_auth_token.py"]
    objects-diagnostics-py["objects/diagnostics.py"]
    objects-ec2-py["objects/ec2.py"]
    objects-external-event-py["objects/external_event.py"]
    objects-fields-py["objects/fields.py"]
    objects-flavor-py["objects/flavor.py"]
    objects-host-mapping-py["objects/host_mapping.py"]
    objects-hv-spec-py["objects/hv_spec.py"]
    objects-image-meta-py["objects/image_meta.py"]
    objects-init["objects/__init__.py"]
    objects-instance-action-py["objects/instance_action.py"]
    objects-instance-fault-py["objects/instance_fault.py"]
    objects-instance-group-py["objects/instance_group.py"]
    objects-instance-info-cache-py["objects/instance_info_cache.py"]
    objects-instance-mapping-py["objects/instance_mapping.py"]
    objects-instance-numa-py["objects/instance_numa.py"]
    objects-instance-pci-requests-py["objects/instance_pci_requests.py"]
    objects-instance-py["objects/instance.py"]
    objects-keypair-py["objects/keypair.py"]
    objects-migrate-data-py["objects/migrate_data.py"]
    objects-migration-context-py["objects/migration_context.py"]
    objects-migration-py["objects/migration.py"]
    objects-monitor-metric-py["objects/monitor_metric.py"]
    objects-network-metadata-py["objects/network_metadata.py"]
    objects-network-request-py["objects/network_request.py"]
    objects-numa-py["objects/numa.py"]
    objects-pci-device-pool-py["objects/pci_device_pool.py"]
    objects-pci-device-py["objects/pci_device.py"]
    objects-quotas-py["objects/quotas.py"]
    objects-request-spec-py["objects/request_spec.py"]
    objects-resource-py["objects/resource.py"]
    objects-security-group-py["objects/security_group.py"]
    objects-selection-py["objects/selection.py"]
    objects-service-py["objects/service.py"]
    objects-share-mapping-py["objects/share_mapping.py"]
    objects-tag-py["objects/tag.py"]
    objects-task-log-py["objects/task_log.py"]
    objects-trusted-certs-py["objects/trusted_certs.py"]
    objects-vcpu-model-py["objects/vcpu_model.py"]
    objects-virt-cpu-topology-py["objects/virt_cpu_topology.py"]
    objects-virt-device-metadata-py["objects/virt_device_metadata.py"]
    objects-virtual-interface-py["objects/virtual_interface.py"]
    objects-volume-usage-py["objects/volume_usage.py"]
    scheduler-client-query-py["scheduler/client/query.py"]
    scheduler-client-report-py["scheduler/client/report.py"]
    scheduler-filters-affinity-filter-py["scheduler/filters/affinity_filter.py"]
    scheduler-filters-aggregate-image-properties-isolation-py["scheduler/filters/aggregate_image_properties_isolation.py"]
    scheduler-filters-aggregate-instance-extra-specs-py["scheduler/filters/aggregate_instance_extra_specs.py"]
    scheduler-filters-aggregate-multitenancy-isolation-py["scheduler/filters/aggregate_multitenancy_isolation.py"]
    scheduler-filters-all-hosts-filter-py["scheduler/filters/all_hosts_filter.py"]
    scheduler-filters-compute-capabilities-filter-py["scheduler/filters/compute_capabilities_filter.py"]
    scheduler-filters-compute-filter-py["scheduler/filters/compute_filter.py"]
    scheduler-filters-extra-specs-ops-py["scheduler/filters/extra_specs_ops.py"]
    scheduler-filters-image-props-filter-py["scheduler/filters/image_props_filter.py"]
    scheduler-filters-init["scheduler/filters/__init__.py"]
    scheduler-filters-io-ops-filter-py["scheduler/filters/io_ops_filter.py"]
    scheduler-filters-isolated-hosts-filter-py["scheduler/filters/isolated_hosts_filter.py"]
    scheduler-filters-json-filter-py["scheduler/filters/json_filter.py"]
    scheduler-filters-metrics-filter-py["scheduler/filters/metrics_filter.py"]
    scheduler-filters-num-instances-filter-py["scheduler/filters/num_instances_filter.py"]
    scheduler-filters-numa-topology-filter-py["scheduler/filters/numa_topology_filter.py"]
    scheduler-filters-pci-passthrough-filter-py["scheduler/filters/pci_passthrough_filter.py"]
    scheduler-filters-type-filter-py["scheduler/filters/type_filter.py"]
    scheduler-filters-utils-py["scheduler/filters/utils.py"]
    scheduler-host-manager-py["scheduler/host_manager.py"]
    scheduler-manager-py["scheduler/manager.py"]
    scheduler-request-filter-py["scheduler/request_filter.py"]
    scheduler-rpcapi-py["scheduler/rpcapi.py"]
    scheduler-utils-py["scheduler/utils.py"]
    scheduler-weights-affinity-py["scheduler/weights/affinity.py"]
    scheduler-weights-compute-py["scheduler/weights/compute.py"]
    scheduler-weights-cpu-py["scheduler/weights/cpu.py"]
    scheduler-weights-cross-cell-py["scheduler/weights/cross_cell.py"]
    scheduler-weights-disk-py["scheduler/weights/disk.py"]
    scheduler-weights-hypervisor-version-py["scheduler/weights/hypervisor_version.py"]
    scheduler-weights-image-props-py["scheduler/weights/image_props.py"]
    scheduler-weights-init["scheduler/weights/__init__.py"]
    scheduler-weights-io-ops-py["scheduler/weights/io_ops.py"]
    scheduler-weights-metrics-py["scheduler/weights/metrics.py"]
    scheduler-weights-num-instances-py["scheduler/weights/num_instances.py"]
    scheduler-weights-pci-py["scheduler/weights/pci.py"]
    scheduler-weights-ram-py["scheduler/weights/ram.py"]
    service-auth-py["service_auth.py"]
    utils-py["utils.py"]
    accelerator-cyborg-py -->|4| exception-py
    accelerator-cyborg-py -->|2| i18n-py
    accelerator-cyborg-py -->|2| objects-init
    accelerator-cyborg-py -->|2| scheduler-utils-py
    accelerator-cyborg-py -->|2| service-auth-py
    accelerator-cyborg-py -->|2| utils-py
    api-auth-py -->|2| api-wsgi-py
    api-auth-py --> conf-init
    api-auth-py -->|2| i18n-py
    api-metadata-base-py -->|2| api-metadata-password-py
    api-metadata-base-py -->|2| api-metadata-vendordata-dynamic-py
    api-metadata-base-py -->|2| api-metadata-vendordata-json-py
    api-metadata-base-py --> conf-init
    api-metadata-base-py --> exception-py
    api-metadata-base-py -->|2| network-neutron-py
    api-metadata-base-py -->|2| network-security-group-api-py
    api-metadata-base-py -->|4| objects-init
    api-metadata-base-py --> objects-virt-device-metadata-py
    api-metadata-base-py -->|2| utils-py
    api-metadata-handler-py -->|4| api-metadata-base-py
    api-metadata-handler-py -->|2| api-wsgi-py
    api-metadata-handler-py --> conf-init
    api-metadata-handler-py -->|2| exception-py
    api-metadata-handler-py -->|2| i18n-py
    api-metadata-handler-py -->|2| network-neutron-py
    api-metadata-password-py --> conf-init
    api-metadata-password-py --> exception-py
    api-metadata-password-py -->|2| i18n-py
    api-metadata-password-py -->|3| objects-init
    api-metadata-password-py -->|2| utils-py
    api-metadata-vendordata-dynamic-py -->|2| api-metadata-vendordata-py
    api-metadata-vendordata-dynamic-py --> conf-init
    api-metadata-vendordata-dynamic-py -->|3| service-auth-py
    api-metadata-vendordata-json-py -->|2| api-metadata-vendordata-py
    api-metadata-vendordata-json-py --> conf-init
    api-openstack-api-version-request-py --> api-openstack-wsgi-py
    api-openstack-api-version-request-py -->|2| exception-py
    api-openstack-api-version-request-py -->|2| i18n-py
    api-openstack-common-py -->|2| api-openstack-api-version-request-py
    api-openstack-common-py -->|2| compute-task-states-py
    api-openstack-common-py -->|2| compute-vm-states-py
    api-openstack-common-py --> conf-init
    api-openstack-common-py -->|2| exception-py
    api-openstack-common-py -->|2| i18n-py
    api-openstack-common-py -->|2| objects-init
    api-openstack-common-py -->|2| utils-py
    api-openstack-compute-admin-actions-py -->|2| api-openstack-common-py
    api-openstack-compute-admin-actions-py --> api-openstack-compute-schemas-admin-actions-py
    api-openstack-compute-admin-actions-py -->|6| api-openstack-wsgi-py
    api-openstack-compute-admin-actions-py -->|3| api-validation-init
    api-openstack-compute-admin-actions-py -->|2| compute-api-py
    api-openstack-compute-admin-actions-py --> compute-instance-actions-py
    api-openstack-compute-admin-actions-py --> compute-vm-states-py
    api-openstack-compute-admin-actions-py --> exception-py
    api-openstack-compute-admin-actions-py -->|2| objects-init
    api-openstack-compute-admin-password-py -->|4| api-openstack-common-py
    api-openstack-compute-admin-password-py --> api-openstack-compute-schemas-admin-password-py
    api-openstack-compute-admin-password-py -->|5| api-openstack-wsgi-py
    api-openstack-compute-admin-password-py -->|3| api-validation-init
    api-openstack-compute-admin-password-py -->|2| compute-api-py
    api-openstack-compute-admin-password-py --> exception-py
    api-openstack-compute-admin-password-py -->|2| i18n-py
    api-openstack-compute-agents-py --> api-openstack-compute-schemas-agents-py
    api-openstack-compute-agents-py -->|4| api-openstack-wsgi-py
    api-openstack-compute-agents-py -->|4| api-validation-init
    api-openstack-compute-aggregates-py -->|2| api-openstack-api-version-request-py
    api-openstack-compute-aggregates-py -->|2| api-openstack-common-py
    api-openstack-compute-aggregates-py --> api-openstack-compute-schemas-aggregate-images-py
    api-openstack-compute-aggregates-py --> api-openstack-compute-schemas-aggregates-py
    api-openstack-compute-aggregates-py -->|6| api-openstack-wsgi-py
    api-openstack-compute-aggregates-py -->|4| api-validation-init
    api-openstack-compute-aggregates-py -->|2| compute-api-py
    api-openstack-compute-aggregates-py -->|2| conductor-api-py
    api-openstack-compute-aggregates-py --> exception-py
    api-openstack-compute-aggregates-py -->|2| i18n-py
    api-openstack-compute-aggregates-py -->|2| utils-py
    api-openstack-compute-assisted-volume-snapshots-py --> api-openstack-compute-schemas-assisted-volume-snapshots-py
    api-openstack-compute-assisted-volume-snapshots-py -->|4| api-openstack-wsgi-py
    api-openstack-compute-assisted-volume-snapshots-py -->|4| api-validation-init
    api-openstack-compute-assisted-volume-snapshots-py -->|2| compute-api-py
    api-openstack-compute-assisted-volume-snapshots-py --> exception-py
    api-openstack-compute-attach-interfaces-py -->|2| api-openstack-api-version-request-py
    api-openstack-compute-attach-interfaces-py -->|4| api-openstack-common-py
    api-openstack-compute-attach-interfaces-py --> api-openstack-compute-schemas-attach-interfaces-py
    api-openstack-compute-attach-interfaces-py -->|4| api-openstack-wsgi-py
    api-openstack-compute-attach-interfaces-py -->|4| api-validation-init
    api-openstack-compute-attach-interfaces-py -->|2| compute-api-py
    api-openstack-compute-attach-interfaces-py --> exception-py
    api-openstack-compute-attach-interfaces-py -->|2| i18n-py
    api-openstack-compute-attach-interfaces-py -->|2| network-neutron-py
    api-openstack-compute-attach-interfaces-py -->|3| objects-init
    api-openstack-compute-availability-zone-py --> api-openstack-compute-schemas-availability-zone-py
    api-openstack-compute-availability-zone-py -->|3| api-openstack-wsgi-py
    api-openstack-compute-availability-zone-py -->|3| api-validation-init
    api-openstack-compute-availability-zone-py -->|2| compute-api-py
    api-openstack-compute-availability-zone-py --> conf-init
    api-openstack-compute-baremetal-nodes-py --> api-openstack-api-version-request-py
    api-openstack-compute-baremetal-nodes-py --> api-openstack-compute-schemas-baremetal-nodes-py
    api-openstack-compute-baremetal-nodes-py -->|5| api-openstack-wsgi-py
    api-openstack-compute-baremetal-nodes-py -->|4| api-validation-init
    api-openstack-compute-baremetal-nodes-py --> conf-init
    api-openstack-compute-baremetal-nodes-py -->|2| i18n-py
    api-openstack-compute-baremetal-nodes-py -->|2| utils-py
    api-openstack-compute-cells-py --> api-openstack-compute-schemas-cells-py
    api-openstack-compute-cells-py -->|4| api-openstack-wsgi-py
    api-openstack-compute-cells-py -->|4| api-validation-init
    api-openstack-compute-certificates-py --> api-openstack-compute-schemas-certificates-py
    api-openstack-compute-certificates-py -->|4| api-openstack-wsgi-py
    api-openstack-compute-certificates-py -->|4| api-validation-init
    api-openstack-compute-cloudpipe-py --> api-openstack-compute-schemas-cloudpipe-py
    api-openstack-compute-cloudpipe-py -->|4| api-openstack-wsgi-py
    api-openstack-compute-cloudpipe-py -->|4| api-validation-init
    api-openstack-compute-console-auth-tokens-py -->|2| api-openstack-api-version-request-py
    api-openstack-compute-console-auth-tokens-py --> api-openstack-compute-schemas-console-auth-tokens-py
    api-openstack-compute-console-auth-tokens-py -->|3| api-openstack-wsgi-py
    api-openstack-compute-console-auth-tokens-py -->|3| api-validation-init
    api-openstack-compute-console-auth-tokens-py --> conf-init
    api-openstack-compute-console-auth-tokens-py -->|2| i18n-py
    api-openstack-compute-console-auth-tokens-py --> objects-init
    api-openstack-compute-console-output-py -->|3| api-openstack-common-py
    api-openstack-compute-console-output-py --> api-openstack-compute-schemas-console-output-py
    api-openstack-compute-console-output-py -->|4| api-openstack-wsgi-py
    api-openstack-compute-console-output-py -->|3| api-validation-init
    api-openstack-compute-console-output-py -->|2| compute-api-py
    api-openstack-compute-console-output-py --> exception-py
    api-openstack-compute-consoles-py --> api-openstack-compute-schemas-consoles-py
    api-openstack-compute-consoles-py -->|4| api-openstack-wsgi-py
    api-openstack-compute-consoles-py -->|4| api-validation-init
    api-openstack-compute-create-backup-py -->|2| api-openstack-api-version-request-py
    api-openstack-compute-create-backup-py -->|6| api-openstack-common-py
    api-openstack-compute-create-backup-py --> api-openstack-compute-schemas-create-backup-py
    api-openstack-compute-create-backup-py -->|5| api-openstack-wsgi-py
    api-openstack-compute-create-backup-py -->|3| api-validation-init
    api-openstack-compute-create-backup-py -->|2| compute-api-py
    api-openstack-compute-create-backup-py --> exception-py
    api-openstack-compute-deferred-delete-py -->|3| api-openstack-common-py
    api-openstack-compute-deferred-delete-py --> api-openstack-compute-schemas-deferred-delete-py
    api-openstack-compute-deferred-delete-py -->|5| api-openstack-wsgi-py
    api-openstack-compute-deferred-delete-py -->|3| api-validation-init
    api-openstack-compute-deferred-delete-py -->|2| compute-api-py
    api-openstack-compute-deferred-delete-py --> exception-py
    api-openstack-compute-evacuate-py -->|2| api-openstack-api-version-request-py
    api-openstack-compute-evacuate-py -->|3| api-openstack-common-py
    api-openstack-compute-evacuate-py --> api-openstack-compute-schemas-evacuate-py
    api-openstack-compute-evacuate-py -->|4| api-openstack-wsgi-py
    api-openstack-compute-evacuate-py -->|3| api-validation-init
    api-openstack-compute-evacuate-py -->|3| compute-api-py
    api-openstack-compute-evacuate-py --> compute-vm-states-py
    api-openstack-compute-evacuate-py --> conf-init
    api-openstack-compute-evacuate-py -->|2| exception-py
    api-openstack-compute-evacuate-py -->|2| i18n-py
    api-openstack-compute-evacuate-py -->|2| objects-init
    api-openstack-compute-evacuate-py -->|2| utils-py
    api-openstack-compute-extension-info-py --> api-openstack-compute-schemas-extension-info-py
    api-openstack-compute-extension-info-py -->|3| api-openstack-wsgi-py
    api-openstack-compute-extension-info-py -->|3| api-validation-init
    api-openstack-compute-fixed-ips-py --> api-openstack-compute-schemas-fixed-ips-py
    api-openstack-compute-fixed-ips-py -->|5| api-openstack-wsgi-py
    api-openstack-compute-fixed-ips-py -->|4| api-validation-init
    api-openstack-compute-flavor-access-py -->|2| api-openstack-api-version-request-py
    api-openstack-compute-flavor-access-py -->|2| api-openstack-common-py
    api-openstack-compute-flavor-access-py --> api-openstack-compute-schemas-flavor-access-py
    api-openstack-compute-flavor-access-py -->|2| api-openstack-identity-py
    api-openstack-compute-flavor-access-py -->|4| api-openstack-wsgi-py
    api-openstack-compute-flavor-access-py -->|4| api-validation-init
    api-openstack-compute-flavor-access-py --> exception-py
    api-openstack-compute-flavor-access-py -->|2| i18n-py
    api-openstack-compute-flavors-extraspecs-py -->|2| api-openstack-api-version-request-py
    api-openstack-compute-flavors-extraspecs-py -->|2| api-openstack-common-py
    api-openstack-compute-flavors-extraspecs-py --> api-openstack-compute-schemas-flavors-extraspecs-py
    api-openstack-compute-flavors-extraspecs-py -->|3| api-openstack-wsgi-py
    api-openstack-compute-flavors-extraspecs-py -->|2| api-validation-extra-specs-validators-py
    api-openstack-compute-flavors-extraspecs-py -->|4| api-validation-init
    api-openstack-compute-flavors-extraspecs-py --> exception-py
    api-openstack-compute-flavors-extraspecs-py -->|2| i18n-py
    api-openstack-compute-flavors-extraspecs-py -->|2| utils-py
    api-openstack-compute-flavors-py -->|2| api-openstack-api-version-request-py
    api-openstack-compute-flavors-py -->|2| api-openstack-common-py
    api-openstack-compute-flavors-py --> api-openstack-compute-schemas-flavors-py
    api-openstack-compute-flavors-py --> api-openstack-compute-views-flavors-py
    api-openstack-compute-flavors-py -->|5| api-openstack-wsgi-py
    api-openstack-compute-flavors-py -->|4| api-validation-init
    api-openstack-compute-flavors-py -->|3| compute-flavors-py
    api-openstack-compute-flavors-py --> exception-py
    api-openstack-compute-flavors-py -->|2| i18n-py
    api-openstack-compute-flavors-py -->|4| objects-init
    api-openstack-compute-flavors-py -->|2| utils-py
    api-openstack-compute-floating-ip-dns-py --> api-openstack-compute-schemas-floating-ip-dns-py
    api-openstack-compute-floating-ip-dns-py -->|4| api-openstack-wsgi-py
    api-openstack-compute-floating-ip-dns-py -->|4| api-validation-init
    api-openstack-compute-floating-ip-pools-py --> api-openstack-api-version-request-py
    api-openstack-compute-floating-ip-pools-py --> api-openstack-compute-schemas-floating-ip-pools-py
    api-openstack-compute-floating-ip-pools-py -->|4| api-openstack-wsgi-py
    api-openstack-compute-floating-ip-pools-py -->|3| api-validation-init
    api-openstack-compute-floating-ip-pools-py -->|2| network-neutron-py
    api-openstack-compute-floating-ips-bulk-py --> api-openstack-compute-schemas-floating-ips-bulk-py
    api-openstack-compute-floating-ips-bulk-py -->|4| api-openstack-wsgi-py
    api-openstack-compute-floating-ips-bulk-py -->|4| api-validation-init
    api-openstack-compute-floating-ips-py --> api-openstack-api-version-request-py
    api-openstack-compute-floating-ips-py -->|2| api-openstack-common-py
    api-openstack-compute-floating-ips-py --> api-openstack-compute-schemas-floating-ips-py
    api-openstack-compute-floating-ips-py -->|6| api-openstack-wsgi-py
    api-openstack-compute-floating-ips-py -->|4| api-validation-init
    api-openstack-compute-floating-ips-py -->|2| compute-api-py
    api-openstack-compute-floating-ips-py --> exception-py
    api-openstack-compute-floating-ips-py -->|2| i18n-py
    api-openstack-compute-floating-ips-py -->|2| network-neutron-py
    api-openstack-compute-fping-py --> api-openstack-compute-schemas-fping-py
    api-openstack-compute-fping-py -->|4| api-openstack-wsgi-py
    api-openstack-compute-fping-py -->|3| api-validation-init
    api-openstack-compute-helpers-py -->|2| i18n-py
    api-openstack-compute-hosts-py -->|2| api-openstack-common-py
    api-openstack-compute-hosts-py --> api-openstack-compute-schemas-hosts-py
    api-openstack-compute-hosts-py -->|4| api-openstack-wsgi-py
    api-openstack-compute-hosts-py -->|4| api-validation-init
    api-openstack-compute-hosts-py -->|2| compute-api-py
    api-openstack-compute-hosts-py --> exception-py
    api-openstack-compute-hosts-py -->|3| objects-init
    api-openstack-compute-hypervisors-py -->|2| api-openstack-api-version-request-py
    api-openstack-compute-hypervisors-py -->|3| api-openstack-common-py
    api-openstack-compute-hypervisors-py --> api-openstack-compute-schemas-hypervisors-py
    api-openstack-compute-hypervisors-py --> api-openstack-compute-views-hypervisors-py
    api-openstack-compute-hypervisors-py -->|4| api-openstack-wsgi-py
    api-openstack-compute-hypervisors-py -->|3| api-validation-init
    api-openstack-compute-hypervisors-py -->|2| compute-api-py
    api-openstack-compute-hypervisors-py --> exception-py
    api-openstack-compute-hypervisors-py -->|2| i18n-py
    api-openstack-compute-hypervisors-py -->|2| utils-py
    api-openstack-compute-image-metadata-py -->|2| api-openstack-common-py
    api-openstack-compute-image-metadata-py --> api-openstack-compute-schemas-image-metadata-py
    api-openstack-compute-image-metadata-py -->|5| api-openstack-wsgi-py
    api-openstack-compute-image-metadata-py -->|4| api-validation-init
    api-openstack-compute-image-metadata-py --> exception-py
    api-openstack-compute-image-metadata-py -->|2| i18n-py
    api-openstack-compute-images-py --> api-openstack-api-version-request-py
    api-openstack-compute-images-py -->|2| api-openstack-common-py
    api-openstack-compute-images-py --> api-openstack-compute-schemas-images-py
    api-openstack-compute-images-py --> api-openstack-compute-views-images-py
    api-openstack-compute-images-py -->|5| api-openstack-wsgi-py
    api-openstack-compute-images-py -->|3| api-validation-init
    api-openstack-compute-images-py --> exception-py
    api-openstack-compute-images-py -->|2| i18n-py
    api-openstack-compute-init --> api-openstack-compute-routes-py
    api-openstack-compute-instance-actions-py -->|2| api-openstack-api-version-request-py
    api-openstack-compute-instance-actions-py -->|3| api-openstack-common-py
    api-openstack-compute-instance-actions-py --> api-openstack-compute-schemas-instance-actions-py
    api-openstack-compute-instance-actions-py --> api-openstack-compute-views-instance-actions-py
    api-openstack-compute-instance-actions-py -->|3| api-openstack-wsgi-py
    api-openstack-compute-instance-actions-py -->|3| api-validation-init
    api-openstack-compute-instance-actions-py -->|3| compute-api-py
    api-openstack-compute-instance-actions-py --> exception-py
    api-openstack-compute-instance-actions-py -->|2| i18n-py
    api-openstack-compute-instance-actions-py -->|3| utils-py
    api-openstack-compute-instance-usage-audit-log-py --> api-openstack-compute-schemas-instance-usage-audit-log-py
    api-openstack-compute-instance-usage-audit-log-py -->|3| api-openstack-wsgi-py
    api-openstack-compute-instance-usage-audit-log-py -->|3| api-validation-init
    api-openstack-compute-instance-usage-audit-log-py -->|2| compute-api-py
    api-openstack-compute-instance-usage-audit-log-py --> compute-rpcapi-py
    api-openstack-compute-instance-usage-audit-log-py -->|2| i18n-py
    api-openstack-compute-instance-usage-audit-log-py -->|2| utils-py
    api-openstack-compute-ips-py -->|3| api-openstack-common-py
    api-openstack-compute-ips-py --> api-openstack-compute-schemas-ips-py
    api-openstack-compute-ips-py --> api-openstack-compute-views-ips-py
    api-openstack-compute-ips-py -->|3| api-openstack-wsgi-py
    api-openstack-compute-ips-py -->|3| api-validation-init
    api-openstack-compute-ips-py -->|2| compute-api-py
    api-openstack-compute-ips-py -->|2| i18n-py
    api-openstack-compute-keypairs-py -->|2| api-openstack-api-version-request-py
    api-openstack-compute-keypairs-py -->|3| api-openstack-common-py
    api-openstack-compute-keypairs-py --> api-openstack-compute-schemas-keypairs-py
    api-openstack-compute-keypairs-py --> api-openstack-compute-views-keypairs-py
    api-openstack-compute-keypairs-py -->|4| api-openstack-wsgi-py
    api-openstack-compute-keypairs-py -->|4| api-validation-init
    api-openstack-compute-keypairs-py -->|2| compute-api-py
    api-openstack-compute-keypairs-py --> exception-py
    api-openstack-compute-keypairs-py --> objects-keypair-py
    api-openstack-compute-limits-py -->|2| api-openstack-api-version-request-py
    api-openstack-compute-limits-py --> api-openstack-compute-schemas-limits-py
    api-openstack-compute-limits-py -->|2| api-openstack-compute-views-limits-py
    api-openstack-compute-limits-py -->|3| api-openstack-wsgi-py
    api-openstack-compute-limits-py -->|3| api-validation-init
    api-openstack-compute-lock-server-py -->|2| api-openstack-api-version-request-py
    api-openstack-compute-lock-server-py -->|2| api-openstack-common-py
    api-openstack-compute-lock-server-py --> api-openstack-compute-schemas-lock-server-py
    api-openstack-compute-lock-server-py -->|5| api-openstack-wsgi-py
    api-openstack-compute-lock-server-py -->|3| api-validation-init
    api-openstack-compute-lock-server-py -->|2| compute-api-py
    api-openstack-compute-migrate-server-py -->|2| api-openstack-api-version-request-py
    api-openstack-compute-migrate-server-py -->|3| api-openstack-common-py
    api-openstack-compute-migrate-server-py --> api-openstack-compute-schemas-migrate-server-py
    api-openstack-compute-migrate-server-py -->|5| api-openstack-wsgi-py
    api-openstack-compute-migrate-server-py -->|3| api-validation-init
    api-openstack-compute-migrate-server-py -->|2| compute-api-py
    api-openstack-compute-migrate-server-py --> exception-py
    api-openstack-compute-migrate-server-py -->|2| i18n-py
    api-openstack-compute-migrations-py -->|2| api-openstack-api-version-request-py
    api-openstack-compute-migrations-py -->|2| api-openstack-common-py
    api-openstack-compute-migrations-py --> api-openstack-compute-schemas-migrations-py
    api-openstack-compute-migrations-py --> api-openstack-compute-views-migrations-py
    api-openstack-compute-migrations-py -->|3| api-openstack-wsgi-py
    api-openstack-compute-migrations-py -->|3| api-validation-init
    api-openstack-compute-migrations-py -->|2| compute-api-py
    api-openstack-compute-migrations-py --> exception-py
    api-openstack-compute-migrations-py -->|2| i18n-py
    api-openstack-compute-migrations-py -->|2| objects-base-py
    api-openstack-compute-migrations-py --> objects-fields-py
    api-openstack-compute-multinic-py -->|2| api-openstack-common-py
    api-openstack-compute-multinic-py --> api-openstack-compute-schemas-multinic-py
    api-openstack-compute-multinic-py -->|6| api-openstack-wsgi-py
    api-openstack-compute-multinic-py -->|3| api-validation-init
    api-openstack-compute-multinic-py -->|2| compute-api-py
    api-openstack-compute-multinic-py --> exception-py
    api-openstack-compute-networks-associate-py --> api-openstack-compute-schemas-networks-associate-py
    api-openstack-compute-networks-associate-py -->|5| api-openstack-wsgi-py
    api-openstack-compute-networks-associate-py -->|3| api-validation-init
    api-openstack-compute-networks-py --> api-openstack-api-version-request-py
    api-openstack-compute-networks-py --> api-openstack-compute-schemas-networks-py
    api-openstack-compute-networks-py -->|6| api-openstack-wsgi-py
    api-openstack-compute-networks-py -->|4| api-validation-init
    api-openstack-compute-networks-py --> exception-py
    api-openstack-compute-networks-py -->|2| i18n-py
    api-openstack-compute-networks-py -->|2| network-neutron-py
    api-openstack-compute-pause-server-py -->|4| api-openstack-common-py
    api-openstack-compute-pause-server-py --> api-openstack-compute-schemas-pause-server-py
    api-openstack-compute-pause-server-py -->|5| api-openstack-wsgi-py
    api-openstack-compute-pause-server-py -->|3| api-validation-init
    api-openstack-compute-pause-server-py -->|2| compute-api-py
    api-openstack-compute-pause-server-py --> exception-py
    api-openstack-compute-quota-classes-py -->|2| api-openstack-api-version-request-py
    api-openstack-compute-quota-classes-py --> api-openstack-compute-schemas-quota-classes-py
    api-openstack-compute-quota-classes-py -->|3| api-openstack-wsgi-py
    api-openstack-compute-quota-classes-py -->|4| api-validation-init
    api-openstack-compute-quota-classes-py --> exception-py
    api-openstack-compute-quota-classes-py -->|3| objects-init
    api-openstack-compute-quota-classes-py -->|2| utils-py
    api-openstack-compute-quota-sets-py -->|2| api-openstack-api-version-request-py
    api-openstack-compute-quota-sets-py --> api-openstack-compute-schemas-quota-sets-py
    api-openstack-compute-quota-sets-py -->|2| api-openstack-identity-py
    api-openstack-compute-quota-sets-py -->|5| api-openstack-wsgi-py
    api-openstack-compute-quota-sets-py -->|4| api-validation-init
    api-openstack-compute-quota-sets-py --> conf-init
    api-openstack-compute-quota-sets-py --> exception-py
    api-openstack-compute-quota-sets-py -->|2| i18n-py
    api-openstack-compute-quota-sets-py -->|5| objects-init
    api-openstack-compute-remote-consoles-py -->|4| api-openstack-common-py
    api-openstack-compute-remote-consoles-py --> api-openstack-compute-schemas-remote-consoles-py
    api-openstack-compute-remote-consoles-py -->|6| api-openstack-wsgi-py
    api-openstack-compute-remote-consoles-py -->|3| api-validation-init
    api-openstack-compute-remote-consoles-py -->|2| compute-api-py
    api-openstack-compute-remote-consoles-py --> exception-py
    api-openstack-compute-rescue-py -->|2| api-openstack-api-version-request-py
    api-openstack-compute-rescue-py -->|3| api-openstack-common-py
    api-openstack-compute-rescue-py --> api-openstack-compute-schemas-rescue-py
    api-openstack-compute-rescue-py -->|5| api-openstack-wsgi-py
    api-openstack-compute-rescue-py -->|3| api-validation-init
    api-openstack-compute-rescue-py -->|2| compute-api-py
    api-openstack-compute-rescue-py --> conf-init
    api-openstack-compute-rescue-py --> exception-py
    api-openstack-compute-rescue-py -->|2| utils-py
    api-openstack-compute-routes-py --> api-openstack-compute-admin-actions-py
    api-openstack-compute-routes-py --> api-openstack-compute-admin-password-py
    api-openstack-compute-routes-py --> api-openstack-compute-agents-py
    api-openstack-compute-routes-py --> api-openstack-compute-aggregates-py
    api-openstack-compute-routes-py --> api-openstack-compute-assisted-volume-snapshots-py
    api-openstack-compute-routes-py --> api-openstack-compute-attach-interfaces-py
    api-openstack-compute-routes-py --> api-openstack-compute-availability-zone-py
    api-openstack-compute-routes-py --> api-openstack-compute-baremetal-nodes-py
    api-openstack-compute-routes-py --> api-openstack-compute-cells-py
    api-openstack-compute-routes-py --> api-openstack-compute-certificates-py
    api-openstack-compute-routes-py --> api-openstack-compute-cloudpipe-py
    api-openstack-compute-routes-py --> api-openstack-compute-console-auth-tokens-py
    api-openstack-compute-routes-py --> api-openstack-compute-console-output-py
    api-openstack-compute-routes-py --> api-openstack-compute-consoles-py
    api-openstack-compute-routes-py --> api-openstack-compute-create-backup-py
    api-openstack-compute-routes-py --> api-openstack-compute-deferred-delete-py
    api-openstack-compute-routes-py --> api-openstack-compute-evacuate-py
    api-openstack-compute-routes-py --> api-openstack-compute-extension-info-py
    api-openstack-compute-routes-py --> api-openstack-compute-fixed-ips-py
    api-openstack-compute-routes-py --> api-openstack-compute-flavor-access-py
    api-openstack-compute-routes-py --> api-openstack-compute-flavors-extraspecs-py
    api-openstack-compute-routes-py --> api-openstack-compute-flavors-py
    api-openstack-compute-routes-py --> api-openstack-compute-floating-ip-dns-py
    api-openstack-compute-routes-py --> api-openstack-compute-floating-ip-pools-py
    api-openstack-compute-routes-py --> api-openstack-compute-floating-ips-bulk-py
    api-openstack-compute-routes-py --> api-openstack-compute-floating-ips-py
    api-openstack-compute-routes-py --> api-openstack-compute-fping-py
    api-openstack-compute-routes-py --> api-openstack-compute-hosts-py
    api-openstack-compute-routes-py --> api-openstack-compute-hypervisors-py
    api-openstack-compute-routes-py --> api-openstack-compute-image-metadata-py
    api-openstack-compute-routes-py --> api-openstack-compute-images-py
    api-openstack-compute-routes-py --> api-openstack-compute-instance-actions-py
    api-openstack-compute-routes-py --> api-openstack-compute-instance-usage-audit-log-py
    api-openstack-compute-routes-py --> api-openstack-compute-ips-py
    api-openstack-compute-routes-py --> api-openstack-compute-keypairs-py
    api-openstack-compute-routes-py --> api-openstack-compute-limits-py
    api-openstack-compute-routes-py --> api-openstack-compute-lock-server-py
    api-openstack-compute-routes-py --> api-openstack-compute-migrate-server-py
    api-openstack-compute-routes-py --> api-openstack-compute-migrations-py
    api-openstack-compute-routes-py --> api-openstack-compute-multinic-py
    api-openstack-compute-routes-py --> api-openstack-compute-networks-associate-py
    api-openstack-compute-routes-py --> api-openstack-compute-networks-py
    api-openstack-compute-routes-py --> api-openstack-compute-pause-server-py
    api-openstack-compute-routes-py --> api-openstack-compute-quota-classes-py
    api-openstack-compute-routes-py --> api-openstack-compute-quota-sets-py
    api-openstack-compute-routes-py --> api-openstack-compute-remote-consoles-py
    api-openstack-compute-routes-py --> api-openstack-compute-rescue-py
    api-openstack-compute-routes-py --> api-openstack-compute-security-group-default-rules-py
    api-openstack-compute-routes-py --> api-openstack-compute-security-groups-py
    api-openstack-compute-routes-py --> api-openstack-compute-server-diagnostics-py
    api-openstack-compute-routes-py --> api-openstack-compute-server-external-events-py
    api-openstack-compute-routes-py --> api-openstack-compute-server-groups-py
    api-openstack-compute-routes-py --> api-openstack-compute-server-metadata-py
    api-openstack-compute-routes-py --> api-openstack-compute-server-migrations-py
    api-openstack-compute-routes-py --> api-openstack-compute-server-password-py
    api-openstack-compute-routes-py --> api-openstack-compute-server-shares-py
    api-openstack-compute-routes-py --> api-openstack-compute-server-tags-py
    api-openstack-compute-routes-py --> api-openstack-compute-server-topology-py
    api-openstack-compute-routes-py --> api-openstack-compute-servers-py
    api-openstack-compute-routes-py --> api-openstack-compute-services-py
    api-openstack-compute-routes-py --> api-openstack-compute-shelve-py
    api-openstack-compute-routes-py --> api-openstack-compute-simple-tenant-usage-py
    api-openstack-compute-routes-py --> api-openstack-compute-snapshots-py
    api-openstack-compute-routes-py --> api-openstack-compute-suspend-server-py
    api-openstack-compute-routes-py --> api-openstack-compute-tenant-networks-py
    api-openstack-compute-routes-py --> api-openstack-compute-versionsV21-py
    api-openstack-compute-routes-py --> api-openstack-compute-virtual-interfaces-py
    api-openstack-compute-routes-py --> api-openstack-compute-volume-attachments-py
    api-openstack-compute-routes-py --> api-openstack-compute-volumes-boot-py
    api-openstack-compute-routes-py --> api-openstack-compute-volumes-py
    api-openstack-compute-routes-py -->|2| api-openstack-init
    api-openstack-compute-routes-py -->|2| api-openstack-wsgi-py
    api-openstack-compute-routes-py -->|2| api-wsgi-py
    api-openstack-compute-schemas-admin-password-py --> api-validation-parameter-types-py
    api-openstack-compute-schemas-aggregate-images-py --> api-validation-parameter-types-py
    api-openstack-compute-schemas-aggregates-py --> api-validation-parameter-types-py
    api-openstack-compute-schemas-assisted-volume-snapshots-py -->|2| api-validation-parameter-types-py
    api-openstack-compute-schemas-attach-interfaces-py --> api-validation-parameter-types-py
    api-openstack-compute-schemas-create-backup-py --> api-validation-parameter-types-py
    api-openstack-compute-schemas-evacuate-py --> api-validation-parameter-types-py
    api-openstack-compute-schemas-flavor-access-py --> api-validation-parameter-types-py
    api-openstack-compute-schemas-flavors-extraspecs-py --> api-validation-parameter-types-py
    api-openstack-compute-schemas-flavors-py -->|2| api-validation-parameter-types-py
    api-openstack-compute-schemas-floating-ips-py --> api-validation-parameter-types-py
    api-openstack-compute-schemas-hosts-py -->|2| api-validation-parameter-types-py
    api-openstack-compute-schemas-hypervisors-py -->|2| api-validation-parameter-types-py
    api-openstack-compute-schemas-hypervisors-py --> api-validation-response-types-py
    api-openstack-compute-schemas-image-metadata-py --> api-validation-parameter-types-py
    api-openstack-compute-schemas-image-metadata-py --> api-validation-response-types-py
    api-openstack-compute-schemas-images-py -->|2| api-validation-parameter-types-py
    api-openstack-compute-schemas-images-py --> api-validation-response-types-py
    api-openstack-compute-schemas-instance-actions-py -->|2| api-validation-parameter-types-py
    api-openstack-compute-schemas-instance-actions-py --> api-validation-response-types-py
    api-openstack-compute-schemas-keypairs-py -->|2| api-validation-parameter-types-py
    api-openstack-compute-schemas-keypairs-py --> api-validation-response-types-py
    api-openstack-compute-schemas-limits-py --> api-validation-parameter-types-py
    api-openstack-compute-schemas-migrate-server-py --> api-validation-parameter-types-py
    api-openstack-compute-schemas-migrations-py -->|2| api-validation-parameter-types-py
    api-openstack-compute-schemas-migrations-py --> api-validation-response-types-py
    api-openstack-compute-schemas-multinic-py --> api-validation-parameter-types-py
    api-openstack-compute-schemas-quota-classes-py --> api-openstack-compute-schemas-quota-sets-py
    api-openstack-compute-schemas-quota-sets-py -->|2| api-validation-parameter-types-py
    api-openstack-compute-schemas-rescue-py --> api-validation-parameter-types-py
    api-openstack-compute-schemas-security-groups-py -->|2| api-validation-parameter-types-py
    api-openstack-compute-schemas-server-external-events-py --> objects-external-event-py
    api-openstack-compute-schemas-server-groups-py -->|2| api-validation-parameter-types-py
    api-openstack-compute-schemas-server-metadata-py --> api-validation-parameter-types-py
    api-openstack-compute-schemas-server-metadata-py --> api-validation-response-types-py
    api-openstack-compute-schemas-server-migrations-py --> api-validation-parameter-types-py
    api-openstack-compute-schemas-server-shares-py --> api-validation-parameter-types-py
    api-openstack-compute-schemas-server-tags-py --> api-validation-parameter-types-py
    api-openstack-compute-schemas-server-tags-py --> objects-instance-py
    api-openstack-compute-schemas-servers-py -->|2| api-validation-parameter-types-py
    api-openstack-compute-schemas-servers-py --> api-validation-response-types-py
    api-openstack-compute-schemas-servers-py --> objects-instance-py
    api-openstack-compute-schemas-services-py --> api-validation-parameter-types-py
    api-openstack-compute-schemas-shelve-py --> api-validation-parameter-types-py
    api-openstack-compute-schemas-simple-tenant-usage-py -->|2| api-validation-parameter-types-py
    api-openstack-compute-schemas-simple-tenant-usage-py --> api-validation-response-types-py
    api-openstack-compute-schemas-simple-tenant-usage-py --> compute-vm-states-py
    api-openstack-compute-schemas-snapshots-py -->|2| api-validation-parameter-types-py
    api-openstack-compute-schemas-volume-attachments-py -->|2| api-validation-parameter-types-py
    api-openstack-compute-schemas-volumes-py -->|2| api-validation-parameter-types-py
    api-openstack-compute-schemas-volumes-py --> api-validation-response-types-py
    api-openstack-compute-security-group-default-rules-py --> api-openstack-compute-schemas-security-group-default-rules-py
    api-openstack-compute-security-group-default-rules-py -->|4| api-openstack-wsgi-py
    api-openstack-compute-security-group-default-rules-py -->|4| api-validation-init
    api-openstack-compute-security-groups-py --> api-openstack-api-version-request-py
    api-openstack-compute-security-groups-py -->|3| api-openstack-common-py
    api-openstack-compute-security-groups-py --> api-openstack-compute-schemas-security-groups-py
    api-openstack-compute-security-groups-py -->|6| api-openstack-wsgi-py
    api-openstack-compute-security-groups-py -->|4| api-validation-init
    api-openstack-compute-security-groups-py -->|2| compute-api-py
    api-openstack-compute-security-groups-py --> exception-py
    api-openstack-compute-security-groups-py -->|2| i18n-py
    api-openstack-compute-security-groups-py -->|16| network-security-group-api-py
    api-openstack-compute-server-diagnostics-py -->|2| api-openstack-api-version-request-py
    api-openstack-compute-server-diagnostics-py -->|4| api-openstack-common-py
    api-openstack-compute-server-diagnostics-py --> api-openstack-compute-schemas-server-diagnostics-py
    api-openstack-compute-server-diagnostics-py --> api-openstack-compute-views-server-diagnostics-py
    api-openstack-compute-server-diagnostics-py -->|3| api-openstack-wsgi-py
    api-openstack-compute-server-diagnostics-py -->|3| api-validation-init
    api-openstack-compute-server-diagnostics-py -->|2| compute-api-py
    api-openstack-compute-server-diagnostics-py --> exception-py
    api-openstack-compute-server-external-events-py --> api-openstack-compute-schemas-server-external-events-py
    api-openstack-compute-server-external-events-py -->|5| api-openstack-wsgi-py
    api-openstack-compute-server-external-events-py -->|3| api-validation-init
    api-openstack-compute-server-external-events-py -->|2| compute-api-py
    api-openstack-compute-server-external-events-py -->|4| objects-init
    api-openstack-compute-server-groups-py -->|2| api-openstack-api-version-request-py
    api-openstack-compute-server-groups-py -->|2| api-openstack-common-py
    api-openstack-compute-server-groups-py --> api-openstack-compute-schemas-server-groups-py
    api-openstack-compute-server-groups-py -->|4| api-openstack-wsgi-py
    api-openstack-compute-server-groups-py -->|4| api-validation-init
    api-openstack-compute-server-groups-py --> conf-init
    api-openstack-compute-server-groups-py --> exception-py
    api-openstack-compute-server-groups-py -->|2| i18n-py
    api-openstack-compute-server-groups-py -->|8| objects-init
    api-openstack-compute-server-groups-py -->|2| objects-service-py
    api-openstack-compute-server-metadata-py -->|3| api-openstack-common-py
    api-openstack-compute-server-metadata-py --> api-openstack-compute-schemas-server-metadata-py
    api-openstack-compute-server-metadata-py -->|4| api-openstack-wsgi-py
    api-openstack-compute-server-metadata-py -->|4| api-validation-init
    api-openstack-compute-server-metadata-py -->|2| compute-api-py
    api-openstack-compute-server-metadata-py --> exception-py
    api-openstack-compute-server-metadata-py -->|2| i18n-py
    api-openstack-compute-server-migrations-py -->|2| api-openstack-api-version-request-py
    api-openstack-compute-server-migrations-py -->|3| api-openstack-common-py
    api-openstack-compute-server-migrations-py --> api-openstack-compute-schemas-server-migrations-py
    api-openstack-compute-server-migrations-py -->|6| api-openstack-wsgi-py
    api-openstack-compute-server-migrations-py -->|4| api-validation-init
    api-openstack-compute-server-migrations-py -->|2| compute-api-py
    api-openstack-compute-server-migrations-py --> exception-py
    api-openstack-compute-server-migrations-py -->|2| i18n-py
    api-openstack-compute-server-password-py -->|3| api-metadata-password-py
    api-openstack-compute-server-password-py -->|2| api-openstack-common-py
    api-openstack-compute-server-password-py --> api-openstack-compute-schemas-server-password-py
    api-openstack-compute-server-password-py -->|4| api-openstack-wsgi-py
    api-openstack-compute-server-password-py -->|3| api-validation-init
    api-openstack-compute-server-password-py -->|2| compute-api-py
    api-openstack-compute-server-shares-py -->|3| api-openstack-common-py
    api-openstack-compute-server-shares-py --> api-openstack-compute-schemas-server-shares-py
    api-openstack-compute-server-shares-py --> api-openstack-compute-views-server-shares-py
    api-openstack-compute-server-shares-py -->|5| api-openstack-wsgi-py
    api-openstack-compute-server-shares-py -->|4| api-validation-init
    api-openstack-compute-server-shares-py -->|2| compute-api-py
    api-openstack-compute-server-shares-py --> compute-vm-states-py
    api-openstack-compute-server-shares-py -->|6| exception-py
    api-openstack-compute-server-shares-py --> objects-fields-py
    api-openstack-compute-server-shares-py -->|5| objects-init
    api-openstack-compute-server-tags-py -->|3| api-openstack-common-py
    api-openstack-compute-server-tags-py --> api-openstack-compute-schemas-server-tags-py
    api-openstack-compute-server-tags-py --> api-openstack-compute-views-server-tags-py
    api-openstack-compute-server-tags-py -->|5| api-openstack-wsgi-py
    api-openstack-compute-server-tags-py -->|4| api-validation-init
    api-openstack-compute-server-tags-py --> api-validation-parameter-types-py
    api-openstack-compute-server-tags-py -->|2| compute-api-py
    api-openstack-compute-server-tags-py --> compute-vm-states-py
    api-openstack-compute-server-tags-py -->|2| exception-py
    api-openstack-compute-server-tags-py -->|2| i18n-py
    api-openstack-compute-server-tags-py -->|9| objects-init
    api-openstack-compute-server-topology-py -->|2| api-openstack-common-py
    api-openstack-compute-server-topology-py --> api-openstack-compute-schemas-server-topology-py
    api-openstack-compute-server-topology-py -->|4| api-openstack-wsgi-py
    api-openstack-compute-server-topology-py -->|3| api-validation-init
    api-openstack-compute-server-topology-py -->|2| compute-api-py
    api-openstack-compute-servers-py -->|2| api-openstack-api-version-request-py
    api-openstack-compute-servers-py -->|13| api-openstack-common-py
    api-openstack-compute-servers-py -->|3| api-openstack-compute-helpers-py
    api-openstack-compute-servers-py -->|2| api-openstack-compute-schemas-servers-py
    api-openstack-compute-servers-py --> api-openstack-compute-views-servers-py
    api-openstack-compute-servers-py -->|7| api-openstack-wsgi-py
    api-openstack-compute-servers-py -->|4| api-validation-init
    api-openstack-compute-servers-py -->|2| compute-api-py
    api-openstack-compute-servers-py -->|2| compute-flavors-py
    api-openstack-compute-servers-py -->|2| compute-utils-py
    api-openstack-compute-servers-py --> conf-init
    api-openstack-compute-servers-py --> exception-py
    api-openstack-compute-servers-py -->|2| i18n-py
    api-openstack-compute-servers-py -->|9| objects-init
    api-openstack-compute-servers-py -->|2| utils-py
    api-openstack-compute-services-py -->|2| api-openstack-api-version-request-py
    api-openstack-compute-services-py --> api-openstack-compute-schemas-services-py
    api-openstack-compute-services-py -->|4| api-openstack-wsgi-py
    api-openstack-compute-services-py -->|4| api-validation-init
    api-openstack-compute-services-py -->|3| compute-api-py
    api-openstack-compute-services-py --> exception-py
    api-openstack-compute-services-py -->|2| i18n-py
    api-openstack-compute-services-py -->|6| objects-init
    api-openstack-compute-services-py -->|2| scheduler-client-report-py
    api-openstack-compute-services-py -->|2| utils-py
    api-openstack-compute-shelve-py -->|2| api-openstack-api-version-request-py
    api-openstack-compute-shelve-py -->|3| api-openstack-common-py
    api-openstack-compute-shelve-py --> api-openstack-compute-schemas-shelve-py
    api-openstack-compute-shelve-py -->|5| api-openstack-wsgi-py
    api-openstack-compute-shelve-py -->|3| api-validation-init
    api-openstack-compute-shelve-py -->|2| compute-api-py
    api-openstack-compute-shelve-py --> exception-py
    api-openstack-compute-simple-tenant-usage-py -->|2| api-openstack-api-version-request-py
    api-openstack-compute-simple-tenant-usage-py -->|2| api-openstack-common-py
    api-openstack-compute-simple-tenant-usage-py --> api-openstack-compute-schemas-simple-tenant-usage-py
    api-openstack-compute-simple-tenant-usage-py --> api-openstack-compute-views-usages-py
    api-openstack-compute-simple-tenant-usage-py -->|3| api-openstack-wsgi-py
    api-openstack-compute-simple-tenant-usage-py -->|3| api-validation-init
    api-openstack-compute-simple-tenant-usage-py --> conf-init
    api-openstack-compute-simple-tenant-usage-py -->|3| exception-py
    api-openstack-compute-simple-tenant-usage-py -->|2| i18n-py
    api-openstack-compute-simple-tenant-usage-py -->|4| objects-init
    api-openstack-compute-snapshots-py --> api-openstack-api-version-request-py
    api-openstack-compute-snapshots-py -->|2| api-openstack-common-py
    api-openstack-compute-snapshots-py --> api-openstack-compute-schemas-snapshots-py
    api-openstack-compute-snapshots-py -->|5| api-openstack-wsgi-py
    api-openstack-compute-snapshots-py -->|4| api-validation-init
    api-openstack-compute-snapshots-py --> exception-py
    api-openstack-compute-suspend-server-py -->|3| api-openstack-common-py
    api-openstack-compute-suspend-server-py --> api-openstack-compute-schemas-suspend-server-py
    api-openstack-compute-suspend-server-py -->|5| api-openstack-wsgi-py
    api-openstack-compute-suspend-server-py -->|3| api-validation-init
    api-openstack-compute-suspend-server-py -->|2| compute-api-py
    api-openstack-compute-suspend-server-py --> exception-py
    api-openstack-compute-tenant-networks-py --> api-openstack-api-version-request-py
    api-openstack-compute-tenant-networks-py --> api-openstack-compute-schemas-tenant-networks-py
    api-openstack-compute-tenant-networks-py -->|5| api-openstack-wsgi-py
    api-openstack-compute-tenant-networks-py -->|4| api-validation-init
    api-openstack-compute-tenant-networks-py --> conf-init
    api-openstack-compute-tenant-networks-py --> exception-py
    api-openstack-compute-tenant-networks-py -->|2| i18n-py
    api-openstack-compute-tenant-networks-py -->|2| network-neutron-py
    api-openstack-compute-versions-py --> api-openstack-api-version-request-py
    api-openstack-compute-versions-py --> api-openstack-compute-schemas-versions-py
    api-openstack-compute-versions-py -->|2| api-openstack-compute-views-versions-py
    api-openstack-compute-versions-py -->|3| api-openstack-wsgi-py
    api-openstack-compute-versions-py -->|3| api-validation-init
    api-openstack-compute-versionsV21-py --> api-openstack-compute-schemas-versions-py
    api-openstack-compute-versionsV21-py --> api-openstack-compute-versions-py
    api-openstack-compute-versionsV21-py -->|2| api-openstack-compute-views-versions-py
    api-openstack-compute-versionsV21-py -->|3| api-openstack-wsgi-py
    api-openstack-compute-versionsV21-py -->|3| api-validation-init
    api-openstack-compute-views-flavors-py -->|2| api-openstack-api-version-request-py
    api-openstack-compute-views-flavors-py -->|2| api-openstack-common-py
    api-openstack-compute-views-hypervisors-py -->|2| api-openstack-common-py
    api-openstack-compute-views-images-py -->|2| api-openstack-common-py
    api-openstack-compute-views-images-py -->|2| utils-py
    api-openstack-compute-views-instance-actions-py -->|2| api-openstack-common-py
    api-openstack-compute-views-ips-py -->|2| api-openstack-common-py
    api-openstack-compute-views-keypairs-py -->|2| api-openstack-common-py
    api-openstack-compute-views-migrations-py -->|2| api-openstack-common-py
    api-openstack-compute-views-server-diagnostics-py -->|2| api-openstack-common-py
    api-openstack-compute-views-server-shares-py -->|2| api-openstack-common-py
    api-openstack-compute-views-server-shares-py -->|2| api-openstack-compute-views-servers-py
    api-openstack-compute-views-server-tags-py -->|2| api-openstack-common-py
    api-openstack-compute-views-server-tags-py -->|2| api-openstack-compute-views-servers-py
    api-openstack-compute-views-servers-py -->|2| api-openstack-api-version-request-py
    api-openstack-compute-views-servers-py -->|5| api-openstack-common-py
    api-openstack-compute-views-servers-py -->|2| api-openstack-compute-views-flavors-py
    api-openstack-compute-views-servers-py -->|2| api-openstack-compute-views-images-py
    api-openstack-compute-views-servers-py -->|2| api-openstack-compute-views-ips-py
    api-openstack-compute-views-servers-py -->|2| compute-api-py
    api-openstack-compute-views-servers-py --> compute-vm-states-py
    api-openstack-compute-views-servers-py --> exception-py
    api-openstack-compute-views-servers-py -->|2| network-security-group-api-py
    api-openstack-compute-views-servers-py --> objects-fields-py
    api-openstack-compute-views-servers-py -->|9| objects-init
    api-openstack-compute-views-servers-py --> objects-virtual-interface-py
    api-openstack-compute-views-servers-py -->|3| utils-py
    api-openstack-compute-views-usages-py -->|2| api-openstack-common-py
    api-openstack-compute-views-versions-py -->|3| api-openstack-common-py
    api-openstack-compute-virtual-interfaces-py --> api-openstack-compute-schemas-virtual-interfaces-py
    api-openstack-compute-virtual-interfaces-py -->|4| api-openstack-wsgi-py
    api-openstack-compute-virtual-interfaces-py -->|3| api-validation-init
    api-openstack-compute-volume-attachments-py -->|2| api-openstack-api-version-request-py
    api-openstack-compute-volume-attachments-py -->|5| api-openstack-common-py
    api-openstack-compute-volume-attachments-py --> api-openstack-compute-schemas-volume-attachments-py
    api-openstack-compute-volume-attachments-py -->|4| api-openstack-wsgi-py
    api-openstack-compute-volume-attachments-py -->|4| api-validation-init
    api-openstack-compute-volume-attachments-py -->|2| compute-api-py
    api-openstack-compute-volume-attachments-py --> compute-vm-states-py
    api-openstack-compute-volume-attachments-py -->|2| exception-py
    api-openstack-compute-volume-attachments-py -->|2| i18n-py
    api-openstack-compute-volume-attachments-py -->|3| objects-init
    api-openstack-compute-volumes-boot-py --> api-openstack-compute-schemas-servers-py
    api-openstack-compute-volumes-boot-py -->|2| api-openstack-compute-servers-py
    api-openstack-compute-volumes-boot-py -->|5| api-openstack-wsgi-py
    api-openstack-compute-volumes-boot-py -->|4| api-validation-init
    api-openstack-compute-volumes-py --> api-openstack-api-version-request-py
    api-openstack-compute-volumes-py -->|2| api-openstack-common-py
    api-openstack-compute-volumes-py --> api-openstack-compute-schemas-volumes-py
    api-openstack-compute-volumes-py -->|6| api-openstack-wsgi-py
    api-openstack-compute-volumes-py -->|4| api-validation-init
    api-openstack-compute-volumes-py --> exception-py
    api-openstack-identity-py -->|2| i18n-py
    api-openstack-identity-py -->|2| utils-py
    api-openstack-init -->|2| api-openstack-wsgi-py
    api-openstack-init -->|2| api-wsgi-py
    api-openstack-init --> conf-init
    api-openstack-init -->|2| i18n-py
    api-openstack-requestlog-py --> api-openstack-wsgi-py
    api-openstack-requestlog-py -->|2| api-wsgi-py
    api-openstack-requestlog-py --> conf-init
    api-openstack-urlmap-py -->|2| api-openstack-wsgi-py
    api-openstack-wsgi-app-py --> exception-py
    api-openstack-wsgi-app-py -->|4| objects-init
    api-openstack-wsgi-app-py -->|4| utils-py
    api-openstack-wsgi-py -->|4| api-openstack-api-version-request-py
    api-openstack-wsgi-py -->|3| api-wsgi-py
    api-openstack-wsgi-py -->|6| exception-py
    api-openstack-wsgi-py -->|5| i18n-py
    api-validation-extra-specs-accel-py -->|2| api-validation-extra-specs-base-py
    api-validation-extra-specs-aggregate-instance-extra-specs-py -->|2| api-validation-extra-specs-base-py
    api-validation-extra-specs-base-py -->|2| exception-py
    api-validation-extra-specs-capabilities-py -->|2| api-validation-extra-specs-base-py
    api-validation-extra-specs-hw-py -->|2| api-validation-extra-specs-base-py
    api-validation-extra-specs-hw-py --> objects-fields-py
    api-validation-extra-specs-hw-rng-py -->|2| api-validation-extra-specs-base-py
    api-validation-extra-specs-hw-video-py -->|2| api-validation-extra-specs-base-py
    api-validation-extra-specs-null-py -->|2| api-validation-extra-specs-base-py
    api-validation-extra-specs-os-py -->|2| api-validation-extra-specs-base-py
    api-validation-extra-specs-pci-passthrough-py -->|2| api-validation-extra-specs-base-py
    api-validation-extra-specs-quota-py -->|2| api-validation-extra-specs-base-py
    api-validation-extra-specs-resources-py -->|2| api-validation-extra-specs-base-py
    api-validation-extra-specs-traits-py -->|2| api-validation-extra-specs-base-py
    api-validation-extra-specs-validators-py --> api-validation-extra-specs-base-py
    api-validation-extra-specs-validators-py -->|2| exception-py
    api-validation-extra-specs-vmware-py -->|2| api-validation-extra-specs-base-py
    api-validation-init -->|2| api-openstack-api-version-request-py
    api-validation-init -->|2| api-openstack-wsgi-py
    api-validation-init -->|2| api-validation-validators-py
    api-validation-init --> conf-init
    api-validation-init -->|2| exception-py
    api-validation-init -->|2| i18n-py
    api-validation-parameter-types-py -->|2| i18n-py
    api-validation-parameter-types-py --> objects-tag-py
    api-validation-validators-py --> api-validation-parameter-types-py
    api-validation-validators-py -->|3| exception-py
    api-validation-validators-py -->|2| i18n-py
    api-wsgi-py --> conf-init
    api-wsgi-py -->|3| exception-py
    api-wsgi-py -->|2| i18n-py
    cmd-baseproxy-py --> conf-init
    cmd-baseproxy-py -->|2| conf-novnc-py
    cmd-baseproxy-py -->|2| console-websocketproxy-py
    cmd-baseproxy-py -->|2| objects-init
    cmd-common-py --> conf-init
    cmd-common-py --> db-main-api-py
    cmd-common-py -->|2| exception-py
    cmd-common-py -->|2| i18n-py
    cmd-compute-py --> compute-rpcapi-py
    cmd-compute-py -->|2| conductor-rpcapi-py
    cmd-compute-py --> conf-init
    cmd-compute-py --> db-main-api-py
    cmd-compute-py --> objects-base-py
    cmd-compute-py -->|3| objects-init
    cmd-compute-py -->|3| utils-py
    cmd-conductor-py --> conductor-rpcapi-py
    cmd-conductor-py --> conf-init
    cmd-conductor-py -->|3| objects-init
    cmd-manage-py -->|3| cmd-common-py
    cmd-manage-py -->|3| compute-api-py
    cmd-manage-py --> compute-instance-actions-py
    cmd-manage-py -->|2| compute-instance-list-py
    cmd-manage-py -->|2| compute-rpcapi-py
    cmd-manage-py -->|2| conf-init
    cmd-manage-py -->|2| conf-utils-py
    cmd-manage-py --> db-constants-py
    cmd-manage-py -->|3| db-main-api-py
    cmd-manage-py -->|3| db-migration-py
    cmd-manage-py -->|15| exception-py
    cmd-manage-py -->|2| i18n-py
    cmd-manage-py --> network-constants-py
    cmd-manage-py -->|4| network-neutron-py
    cmd-manage-py --> objects-block-device-py
    cmd-manage-py --> objects-compute-node-py
    cmd-manage-py --> objects-fields-py
    cmd-manage-py -->|2| objects-host-mapping-py
    cmd-manage-py -->|40| objects-init
    cmd-manage-py --> objects-instance-mapping-py
    cmd-manage-py --> objects-instance-py
    cmd-manage-py --> objects-pci-device-py
    cmd-manage-py --> objects-quotas-py
    cmd-manage-py --> objects-virtual-interface-py
    cmd-manage-py -->|2| scheduler-client-report-py
    cmd-manage-py -->|4| scheduler-utils-py
    cmd-manage-py -->|4| utils-py
    cmd-novncproxy-py -->|2| cmd-baseproxy-py
    cmd-novncproxy-py --> conf-init
    cmd-novncproxy-py -->|2| conf-vnc-py
    cmd-novncproxy-py -->|2| console-securityproxy-rfb-py
    cmd-policy-py -->|4| cmd-common-py
    cmd-policy-py --> conf-init
    cmd-policy-py -->|2| db-main-api-py
    cmd-policy-py -->|2| exception-py
    cmd-policy-py -->|2| i18n-py
    cmd-policy-py -->|2| utils-py
    cmd-scheduler-py --> conf-init
    cmd-scheduler-py -->|3| objects-init
    cmd-scheduler-py --> scheduler-rpcapi-py
    cmd-serialproxy-py -->|2| cmd-baseproxy-py
    cmd-serialproxy-py --> conf-init
    cmd-serialproxy-py -->|2| conf-serial-console-py
    cmd-spicehtml5proxy-py -->|2| cmd-baseproxy-py
    cmd-spicehtml5proxy-py --> conf-init
    cmd-spicehtml5proxy-py -->|2| conf-spice-py
    cmd-status-py -->|3| cmd-common-py
    cmd-status-py --> conf-init
    cmd-status-py -->|2| db-api-api-py
    cmd-status-py -->|2| db-main-api-py
    cmd-status-py --> exception-py
    cmd-status-py -->|2| i18n-py
    cmd-status-py -->|2| objects-cell-mapping-py
    cmd-status-py --> objects-image-meta-py
    cmd-status-py --> objects-instance-py
    cmd-status-py -->|4| utils-py
    compute-api-py -->|3| accelerator-cyborg-py
    compute-api-py -->|2| compute-flavors-py
    compute-api-py --> compute-instance-actions-py
    compute-api-py -->|2| compute-instance-list-py
    compute-api-py -->|2| compute-migration-list-py
    compute-api-py --> compute-power-state-py
    compute-api-py -->|2| compute-rpcapi-py
    compute-api-py --> compute-task-states-py
    compute-api-py -->|23| compute-utils-py
    compute-api-py --> compute-vm-states-py
    compute-api-py -->|2| conductor-init
    compute-api-py --> conf-init
    compute-api-py --> db-api-api-py
    compute-api-py -->|4| db-main-api-py
    compute-api-py -->|87| exception-py
    compute-api-py -->|2| i18n-py
    compute-api-py --> network-constants-py
    compute-api-py -->|2| network-model-py
    compute-api-py -->|2| network-neutron-py
    compute-api-py -->|3| network-security-group-api-py
    compute-api-py -->|2| objects-block-device-py
    compute-api-py --> objects-external-event-py
    compute-api-py -->|2| objects-fields-py
    compute-api-py -->|2| objects-image-meta-py
    compute-api-py -->|77| objects-init
    compute-api-py --> objects-keypair-py
    compute-api-py -->|2| objects-quotas-py
    compute-api-py -->|2| objects-service-py
    compute-api-py -->|2| scheduler-client-query-py
    compute-api-py -->|2| scheduler-client-report-py
    compute-api-py -->|3| scheduler-utils-py
    compute-api-py -->|10| utils-py
    compute-claims-py -->|2| exception-py
    compute-claims-py -->|2| i18n-py
    compute-claims-py -->|3| objects-init
    compute-flavors-py --> conf-init
    compute-flavors-py --> db-constants-py
    compute-flavors-py -->|2| exception-py
    compute-flavors-py -->|2| i18n-py
    compute-flavors-py -->|3| objects-init
    compute-flavors-py -->|3| utils-py
    compute-instance-list-py -->|3| compute-multi-cell-list-py
    compute-instance-list-py --> conf-init
    compute-instance-list-py -->|4| db-main-api-py
    compute-instance-list-py -->|2| exception-py
    compute-instance-list-py -->|4| objects-init
    compute-instance-list-py -->|3| objects-instance-py
    compute-manager-py -->|2| accelerator-cyborg-py
    compute-manager-py -->|2| compute-api-py
    compute-manager-py --> compute-build-results-py
    compute-manager-py --> compute-claims-py
    compute-manager-py --> compute-power-state-py
    compute-manager-py -->|2| compute-resource-tracker-py
    compute-manager-py -->|3| compute-rpcapi-py
    compute-manager-py -->|2| compute-share-management-py
    compute-manager-py --> compute-task-states-py
    compute-manager-py -->|29| compute-utils-py
    compute-manager-py --> compute-vm-states-py
    compute-manager-py -->|2| conductor-init
    compute-manager-py -->|6| conf-init
    compute-manager-py -->|42| exception-py
    compute-manager-py -->|2| i18n-py
    compute-manager-py -->|4| network-model-py
    compute-manager-py -->|3| network-neutron-py
    compute-manager-py -->|2| objects-base-py
    compute-manager-py --> objects-external-event-py
    compute-manager-py -->|2| objects-fields-py
    compute-manager-py -->|42| objects-init
    compute-manager-py --> objects-instance-py
    compute-manager-py -->|2| objects-migrate-data-py
    compute-manager-py --> objects-service-py
    compute-manager-py -->|2| scheduler-client-query-py
    compute-manager-py -->|2| scheduler-client-report-py
    compute-manager-py -->|3| scheduler-utils-py
    compute-manager-py -->|11| utils-py
    compute-migration-list-py -->|3| compute-multi-cell-list-py
    compute-migration-list-py -->|3| db-main-api-py
    compute-migration-list-py -->|2| exception-py
    compute-migration-list-py -->|2| objects-base-py
    compute-migration-list-py -->|2| objects-init
    compute-monitors-base-py --> objects-fields-py
    compute-monitors-cpu-virt-driver-py -->|2| compute-monitors-base-py
    compute-monitors-cpu-virt-driver-py --> conf-init
    compute-monitors-cpu-virt-driver-py -->|2| exception-py
    compute-monitors-cpu-virt-driver-py -->|2| objects-init
    compute-monitors-init --> conf-init
    compute-multi-cell-list-py --> conf-init
    compute-multi-cell-list-py -->|3| exception-py
    compute-multi-cell-list-py -->|2| i18n-py
    compute-pci-placement-translator-py -->|11| compute-provider-tree-py
    compute-pci-placement-translator-py --> conf-init
    compute-pci-placement-translator-py -->|5| exception-py
    compute-pci-placement-translator-py -->|2| i18n-py
    compute-pci-placement-translator-py --> objects-fields-py
    compute-pci-placement-translator-py --> objects-pci-device-py
    compute-power-state-py -->|2| objects-fields-py
    compute-provider-config-py -->|2| exception-py
    compute-provider-config-py -->|2| i18n-py
    compute-provider-tree-py -->|2| i18n-py
    compute-resource-tracker-py -->|3| compute-claims-py
    compute-resource-tracker-py -->|2| compute-monitors-init
    compute-resource-tracker-py -->|2| compute-pci-placement-translator-py
    compute-resource-tracker-py -->|2| compute-provider-config-py
    compute-resource-tracker-py --> compute-stats-py
    compute-resource-tracker-py --> compute-task-states-py
    compute-resource-tracker-py -->|3| compute-utils-py
    compute-resource-tracker-py -->|2| compute-vm-states-py
    compute-resource-tracker-py --> conf-init
    compute-resource-tracker-py -->|9| exception-py
    compute-resource-tracker-py -->|2| i18n-py
    compute-resource-tracker-py -->|3| objects-base-py
    compute-resource-tracker-py --> objects-fields-py
    compute-resource-tracker-py -->|14| objects-init
    compute-resource-tracker-py -->|2| objects-migration-py
    compute-resource-tracker-py -->|2| scheduler-client-report-py
    compute-resource-tracker-py -->|3| utils-py
    compute-rpcapi-py --> conf-init
    compute-rpcapi-py -->|7| exception-py
    compute-rpcapi-py -->|2| i18n-py
    compute-rpcapi-py -->|3| objects-base-py
    compute-rpcapi-py -->|2| objects-init
    compute-rpcapi-py -->|2| objects-service-py
    compute-share-management-py -->|2| compute-utils-py
    compute-share-management-py --> compute-vm-states-py
    compute-share-management-py --> conf-init
    compute-share-management-py -->|4| exception-py
    compute-share-management-py --> objects-fields-py
    compute-share-management-py -->|8| objects-init
    compute-share-management-py -->|2| utils-py
    compute-stats-py --> compute-task-states-py
    compute-stats-py -->|2| compute-vm-states-py
    compute-stats-py -->|2| i18n-py
    compute-task-states-py --> objects-fields-py
    compute-utils-py -->|2| accelerator-cyborg-py
    compute-utils-py --> compute-power-state-py
    compute-utils-py --> compute-task-states-py
    compute-utils-py --> compute-vm-states-py
    compute-utils-py --> conf-init
    compute-utils-py -->|7| exception-py
    compute-utils-py --> objects-fields-py
    compute-utils-py -->|9| objects-init
    compute-utils-py -->|5| utils-py
    compute-vm-states-py --> compute-task-states-py
    compute-vm-states-py --> objects-fields-py
    conductor-api-py -->|3| conductor-rpcapi-py
    conductor-api-py --> conf-init
    conductor-init --> conductor-api-py
    conductor-manager-py -->|3| accelerator-cyborg-py
    conductor-manager-py --> compute-instance-actions-py
    conductor-manager-py -->|2| compute-rpcapi-py
    conductor-manager-py --> compute-task-states-py
    conductor-manager-py -->|14| compute-utils-py
    conductor-manager-py --> compute-vm-states-py
    conductor-manager-py -->|3| conductor-tasks-cross-cell-migrate-py
    conductor-manager-py -->|2| conductor-tasks-live-migrate-py
    conductor-manager-py -->|2| conductor-tasks-migrate-py
    conductor-manager-py -->|8| exception-py
    conductor-manager-py -->|2| i18n-py
    conductor-manager-py -->|2| network-neutron-py
    conductor-manager-py -->|2| objects-base-py
    conductor-manager-py --> objects-fields-py
    conductor-manager-py -->|27| objects-init
    conductor-manager-py -->|2| scheduler-client-query-py
    conductor-manager-py -->|2| scheduler-client-report-py
    conductor-manager-py -->|9| scheduler-utils-py
    conductor-manager-py -->|2| utils-py
    conductor-rpcapi-py --> conf-init
    conductor-rpcapi-py -->|4| exception-py
    conductor-rpcapi-py -->|2| i18n-py
    conductor-rpcapi-py -->|3| objects-base-py
    conductor-tasks-cross-cell-migrate-py --> compute-instance-actions-py
    conductor-tasks-cross-cell-migrate-py --> compute-power-state-py
    conductor-tasks-cross-cell-migrate-py --> compute-task-states-py
    conductor-tasks-cross-cell-migrate-py -->|6| compute-utils-py
    conductor-tasks-cross-cell-migrate-py --> compute-vm-states-py
    conductor-tasks-cross-cell-migrate-py -->|2| conductor-tasks-base-py
    conductor-tasks-cross-cell-migrate-py --> conf-init
    conductor-tasks-cross-cell-migrate-py -->|3| exception-py
    conductor-tasks-cross-cell-migrate-py -->|2| i18n-py
    conductor-tasks-cross-cell-migrate-py --> network-constants-py
    conductor-tasks-cross-cell-migrate-py -->|2| network-neutron-py
    conductor-tasks-cross-cell-migrate-py --> objects-fields-py
    conductor-tasks-cross-cell-migrate-py -->|18| objects-init
    conductor-tasks-cross-cell-migrate-py -->|2| scheduler-utils-py
    conductor-tasks-live-migrate-py --> compute-power-state-py
    conductor-tasks-live-migrate-py -->|3| compute-utils-py
    conductor-tasks-live-migrate-py -->|2| conductor-tasks-base-py
    conductor-tasks-live-migrate-py -->|3| conductor-tasks-migrate-py
    conductor-tasks-live-migrate-py --> conf-init
    conductor-tasks-live-migrate-py -->|9| exception-py
    conductor-tasks-live-migrate-py -->|2| i18n-py
    conductor-tasks-live-migrate-py -->|2| network-neutron-py
    conductor-tasks-live-migrate-py --> objects-fields-py
    conductor-tasks-live-migrate-py -->|9| objects-init
    conductor-tasks-live-migrate-py -->|4| scheduler-utils-py
    conductor-tasks-migrate-py -->|2| compute-utils-py
    conductor-tasks-migrate-py -->|2| conductor-tasks-base-py
    conductor-tasks-migrate-py -->|2| conductor-tasks-cross-cell-migrate-py
    conductor-tasks-migrate-py -->|3| exception-py
    conductor-tasks-migrate-py -->|2| i18n-py
    conductor-tasks-migrate-py -->|6| objects-init
    conductor-tasks-migrate-py -->|2| scheduler-client-report-py
    conductor-tasks-migrate-py -->|6| scheduler-utils-py
    conf-compute-py -->|3| conf-paths-py
    conf-cyborg-py -->|3| conf-utils-py
    conf-glance-py -->|3| conf-utils-py
    conf-init -->|2| conf-api-py
    conf-init -->|2| conf-availability-zone-py
    conf-init -->|2| conf-base-py
    conf-init -->|2| conf-cache-py
    conf-init -->|2| conf-cinder-py
    conf-init -->|2| conf-compute-py
    conf-init -->|2| conf-conductor-py
    conf-init -->|2| conf-configdrive-py
    conf-init -->|2| conf-console-py
    conf-init -->|2| conf-consoleauth-py
    conf-init -->|2| conf-cyborg-py
    conf-init -->|2| conf-database-py
    conf-init -->|2| conf-devices-py
    conf-init -->|2| conf-ephemeral-storage-py
    conf-init -->|2| conf-glance-py
    conf-init -->|2| conf-guestfs-py
    conf-init -->|2| conf-imagecache-py
    conf-init -->|2| conf-ironic-py
    conf-init -->|2| conf-key-manager-py
    conf-init -->|2| conf-keystone-py
    conf-init -->|2| conf-libvirt-py
    conf-init -->|2| conf-manila-py
    conf-init -->|2| conf-mks-py
    conf-init -->|2| conf-netconf-py
    conf-init -->|2| conf-neutron-py
    conf-init -->|2| conf-notifications-py
    conf-init -->|2| conf-novnc-py
    conf-init -->|2| conf-paths-py
    conf-init -->|2| conf-pci-py
    conf-init -->|2| conf-placement-py
    conf-init -->|2| conf-quota-py
    conf-init -->|2| conf-rpc-py
    conf-init -->|2| conf-scheduler-py
    conf-init -->|2| conf-serial-console-py
    conf-init -->|2| conf-service-py
    conf-init -->|2| conf-service-token-py
    conf-init -->|2| conf-servicegroup-py
    conf-init -->|2| conf-spice-py
    conf-init -->|2| conf-upgrade-levels-py
    conf-init -->|2| conf-vendordata-py
    conf-init -->|2| conf-vmware-py
    conf-init -->|2| conf-vnc-py
    conf-init -->|2| conf-workarounds-py
    conf-init -->|2| conf-wsgi-py
    conf-init -->|2| conf-zvm-py
    conf-ironic-py -->|3| conf-utils-py
    conf-keystone-py -->|3| conf-utils-py
    conf-libvirt-py -->|2| conf-paths-py
    conf-manila-py -->|2| conf-utils-py
    conf-neutron-py -->|3| conf-utils-py
    conf-placement-py -->|3| conf-utils-py
    conf-zvm-py -->|2| conf-paths-py
    console-rfb-authnone-py -->|2| console-rfb-auth-py
    console-rfb-auths-py --> console-rfb-authnone-py
    console-rfb-auths-py --> console-rfb-authvencrypt-py
    console-rfb-auths-py -->|2| exception-py
    console-rfb-authvencrypt-py -->|2| console-rfb-auth-py
    console-rfb-authvencrypt-py -->|2| exception-py
    console-rfb-authvencrypt-py -->|2| i18n-py
    console-securityproxy-rfb-py -->|2| console-rfb-auth-py
    console-securityproxy-rfb-py -->|2| console-rfb-auths-py
    console-securityproxy-rfb-py -->|2| console-securityproxy-base-py
    console-securityproxy-rfb-py -->|3| exception-py
    console-securityproxy-rfb-py -->|2| i18n-py
    console-serial-py --> conf-init
    console-serial-py -->|3| exception-py
    console-serial-py -->|2| utils-py
    console-websocketproxy-py -->|2| compute-rpcapi-py
    console-websocketproxy-py --> conf-init
    console-websocketproxy-py -->|4| exception-py
    console-websocketproxy-py -->|2| i18n-py
    console-websocketproxy-py -->|3| objects-init
    console-websocketproxy-py -->|3| utils-py
    db-api-api-py --> conf-init
    db-api-migrations-env-py --> db-api-models-py
    db-api-migrations-versions-d67eeaabee36-initial-version-py -->|2| db-types-py
    db-api-migrations-versions-d67eeaabee36-initial-version-py --> objects-keypair-py
    db-api-models-py -->|2| db-types-py
    db-main-api-py --> compute-task-states-py
    db-main-api-py --> compute-vm-states-py
    db-main-api-py -->|3| conf-init
    db-main-api-py -->|46| db-main-models-py
    db-main-api-py -->|4| db-utils-py
    db-main-api-py -->|36| exception-py
    db-main-api-py -->|2| i18n-py
    db-main-api-py -->|2| objects-init
    db-main-migrations-env-py --> db-main-models-py
    db-main-migrations-versions-8f2f1571d55b-initial-version-py -->|2| db-types-py
    db-main-migrations-versions-8f2f1571d55b-initial-version-py --> objects-keypair-py
    db-main-models-py -->|4| db-types-py
    db-migration-py -->|2| db-api-api-py
    db-migration-py -->|2| db-main-api-py
    db-migration-py -->|2| exception-py
    db-types-py -->|3| utils-py
    db-utils-py -->|2| exception-py
    db-utils-py -->|2| i18n-py
    exception-py -->|2| i18n-py
    network-model-py -->|2| exception-py
    network-model-py -->|2| i18n-py
    network-neutron-py -->|4| accelerator-cyborg-py
    network-neutron-py -->|2| compute-utils-py
    network-neutron-py --> conf-init
    network-neutron-py -->|46| exception-py
    network-neutron-py -->|2| i18n-py
    network-neutron-py --> network-constants-py
    network-neutron-py -->|9| network-model-py
    network-neutron-py --> objects-fields-py
    network-neutron-py -->|16| objects-init
    network-neutron-py -->|4| service-auth-py
    network-neutron-py -->|3| utils-py
    network-os-vif-util-py -->|3| exception-py
    network-os-vif-util-py -->|2| i18n-py
    network-os-vif-util-py --> network-model-py
    network-security-group-api-py -->|11| exception-py
    network-security-group-api-py -->|2| i18n-py
    network-security-group-api-py -->|2| network-neutron-py
    network-security-group-api-py -->|3| objects-security-group-py
    objects-aggregate-py -->|3| compute-utils-py
    objects-aggregate-py -->|2| db-api-api-py
    objects-aggregate-py -->|6| db-api-models-py
    objects-aggregate-py -->|8| exception-py
    objects-aggregate-py -->|2| i18n-py
    objects-aggregate-py -->|5| objects-base-py
    objects-aggregate-py -->|7| objects-fields-py
    objects-aggregate-py -->|2| objects-init
    objects-base-py -->|2| conductor-init
    objects-base-py -->|2| exception-py
    objects-base-py -->|3| objects-fields-py
    objects-base-py --> objects-init
    objects-base-py -->|2| utils-py
    objects-block-device-py -->|10| db-main-api-py
    objects-block-device-py -->|2| db-main-models-py
    objects-block-device-py -->|8| exception-py
    objects-block-device-py -->|2| i18n-py
    objects-block-device-py -->|8| objects-base-py
    objects-block-device-py -->|12| objects-fields-py
    objects-block-device-py -->|5| objects-init
    objects-build-request-py --> db-api-api-py
    objects-build-request-py -->|2| db-api-models-py
    objects-build-request-py -->|2| db-utils-py
    objects-build-request-py -->|4| exception-py
    objects-build-request-py -->|4| objects-base-py
    objects-build-request-py -->|7| objects-fields-py
    objects-build-request-py -->|7| objects-init
    objects-cell-mapping-py --> conf-init
    objects-cell-mapping-py --> db-api-api-py
    objects-cell-mapping-py -->|3| db-api-models-py
    objects-cell-mapping-py -->|2| exception-py
    objects-cell-mapping-py -->|5| objects-base-py
    objects-cell-mapping-py -->|6| objects-fields-py
    objects-compute-node-py --> conf-init
    objects-compute-node-py -->|16| db-main-api-py
    objects-compute-node-py -->|2| db-main-models-py
    objects-compute-node-py -->|5| exception-py
    objects-compute-node-py -->|5| objects-base-py
    objects-compute-node-py -->|9| objects-fields-py
    objects-compute-node-py -->|5| objects-init
    objects-compute-node-py -->|2| objects-pci-device-pool-py
    objects-console-auth-token-py -->|6| db-main-api-py
    objects-console-auth-token-py -->|4| exception-py
    objects-console-auth-token-py -->|2| i18n-py
    objects-console-auth-token-py -->|3| objects-base-py
    objects-console-auth-token-py -->|4| objects-fields-py
    objects-console-auth-token-py -->|2| utils-py
    objects-diagnostics-py -->|3| objects-base-py
    objects-diagnostics-py -->|9| objects-fields-py
    objects-ec2-py -->|7| db-main-api-py
    objects-ec2-py -->|2| exception-py
    objects-ec2-py -->|3| objects-base-py
    objects-ec2-py -->|4| objects-fields-py
    objects-external-event-py -->|2| objects-base-py
    objects-external-event-py -->|5| objects-fields-py
    objects-fields-py -->|4| exception-py
    objects-fields-py -->|2| i18n-py
    objects-fields-py -->|3| network-model-py
    objects-flavor-py --> conf-init
    objects-flavor-py --> db-api-api-py
    objects-flavor-py -->|7| db-api-models-py
    objects-flavor-py -->|2| db-utils-py
    objects-flavor-py -->|11| exception-py
    objects-flavor-py -->|6| objects-base-py
    objects-flavor-py -->|8| objects-fields-py
    objects-host-mapping-py -->|2| db-api-api-py
    objects-host-mapping-py -->|2| db-api-models-py
    objects-host-mapping-py -->|3| exception-py
    objects-host-mapping-py -->|2| i18n-py
    objects-host-mapping-py -->|5| objects-base-py
    objects-host-mapping-py -->|3| objects-cell-mapping-py
    objects-host-mapping-py -->|5| objects-fields-py
    objects-host-mapping-py -->|6| objects-init
    objects-hv-spec-py -->|2| objects-base-py
    objects-hv-spec-py -->|4| objects-fields-py
    objects-image-meta-py --> network-model-py
    objects-image-meta-py -->|4| objects-base-py
    objects-image-meta-py -->|41| objects-fields-py
    objects-image-meta-py -->|2| objects-init
    objects-image-meta-py -->|3| utils-py
    objects-init --> objects-aggregate-py
    objects-init --> objects-block-device-py
    objects-init --> objects-build-request-py
    objects-init --> objects-cell-mapping-py
    objects-init --> objects-compute-node-py
    objects-init --> objects-console-auth-token-py
    objects-init --> objects-diagnostics-py
    objects-init --> objects-ec2-py
    objects-init --> objects-external-event-py
    objects-init --> objects-flavor-py
    objects-init --> objects-host-mapping-py
    objects-init --> objects-hv-spec-py
    objects-init --> objects-image-meta-py
    objects-init --> objects-instance-action-py
    objects-init --> objects-instance-fault-py
    objects-init --> objects-instance-group-py
    objects-init --> objects-instance-info-cache-py
    objects-init --> objects-instance-mapping-py
    objects-init --> objects-instance-numa-py
    objects-init --> objects-instance-pci-requests-py
    objects-init --> objects-instance-py
    objects-init --> objects-keypair-py
    objects-init --> objects-migrate-data-py
    objects-init --> objects-migration-context-py
    objects-init --> objects-migration-py
    objects-init --> objects-monitor-metric-py
    objects-init --> objects-network-metadata-py
    objects-init --> objects-network-request-py
    objects-init --> objects-numa-py
    objects-init --> objects-pci-device-pool-py
    objects-init --> objects-pci-device-py
    objects-init --> objects-quotas-py
    objects-init --> objects-request-spec-py
    objects-init --> objects-resource-py
    objects-init --> objects-security-group-py
    objects-init --> objects-selection-py
    objects-init --> objects-service-py
    objects-init --> objects-share-mapping-py
    objects-init --> objects-tag-py
    objects-init --> objects-task-log-py
    objects-init --> objects-trusted-certs-py
    objects-init --> objects-vcpu-model-py
    objects-init --> objects-virt-cpu-topology-py
    objects-init --> objects-virt-device-metadata-py
    objects-init --> objects-virtual-interface-py
    objects-init --> objects-volume-usage-py
    objects-instance-action-py -->|2| compute-utils-py
    objects-instance-action-py -->|9| db-main-api-py
    objects-instance-action-py -->|2| exception-py
    objects-instance-action-py -->|6| objects-base-py
    objects-instance-action-py -->|6| objects-fields-py
    objects-instance-fault-py -->|3| db-main-api-py
    objects-instance-fault-py -->|2| exception-py
    objects-instance-fault-py -->|6| objects-base-py
    objects-instance-fault-py -->|5| objects-fields-py
    objects-instance-group-py -->|4| compute-utils-py
    objects-instance-group-py --> db-api-api-py
    objects-instance-group-py -->|4| db-api-models-py
    objects-instance-group-py -->|5| exception-py
    objects-instance-group-py -->|6| objects-base-py
    objects-instance-group-py -->|7| objects-fields-py
    objects-instance-group-py -->|2| objects-init
    objects-instance-info-cache-py -->|4| db-main-api-py
    objects-instance-info-cache-py -->|3| exception-py
    objects-instance-info-cache-py -->|3| objects-base-py
    objects-instance-info-cache-py -->|3| objects-fields-py
    objects-instance-mapping-py --> db-api-api-py
    objects-instance-mapping-py -->|4| db-api-models-py
    objects-instance-mapping-py -->|3| exception-py
    objects-instance-mapping-py -->|2| i18n-py
    objects-instance-mapping-py -->|5| objects-base-py
    objects-instance-mapping-py -->|3| objects-cell-mapping-py
    objects-instance-mapping-py -->|7| objects-fields-py
    objects-instance-mapping-py -->|3| objects-init
    objects-instance-mapping-py --> objects-virtual-interface-py
    objects-instance-numa-py -->|3| db-main-api-py
    objects-instance-numa-py -->|3| exception-py
    objects-instance-numa-py -->|5| objects-base-py
    objects-instance-numa-py -->|11| objects-fields-py
    objects-instance-pci-requests-py -->|2| db-main-api-py
    objects-instance-pci-requests-py -->|2| objects-base-py
    objects-instance-pci-requests-py -->|8| objects-fields-py
    objects-instance-py --> compute-task-states-py
    objects-instance-py --> compute-vm-states-py
    objects-instance-py -->|20| db-main-api-py
    objects-instance-py -->|3| db-main-models-py
    objects-instance-py -->|4| exception-py
    objects-instance-py -->|2| i18n-py
    objects-instance-py -->|2| network-model-py
    objects-instance-py -->|7| objects-base-py
    objects-instance-py -->|12| objects-fields-py
    objects-instance-py -->|33| objects-init
    objects-instance-py -->|5| utils-py
    objects-keypair-py --> db-api-api-py
    objects-keypair-py -->|2| db-api-models-py
    objects-keypair-py -->|5| exception-py
    objects-keypair-py -->|6| objects-base-py
    objects-keypair-py -->|4| objects-fields-py
    objects-migrate-data-py -->|2| exception-py
    objects-migrate-data-py -->|3| objects-base-py
    objects-migrate-data-py -->|15| objects-fields-py
    objects-migration-context-py -->|2| db-main-api-py
    objects-migration-context-py -->|2| exception-py
    objects-migration-context-py -->|3| objects-base-py
    objects-migration-context-py -->|4| objects-fields-py
    objects-migration-context-py -->|2| objects-init
    objects-migration-py -->|12| db-main-api-py
    objects-migration-py -->|2| exception-py
    objects-migration-py -->|2| i18n-py
    objects-migration-py -->|5| objects-base-py
    objects-migration-py -->|7| objects-fields-py
    objects-migration-py -->|3| objects-init
    objects-monitor-metric-py -->|3| objects-base-py
    objects-monitor-metric-py -->|7| objects-fields-py
    objects-monitor-metric-py -->|2| utils-py
    objects-network-metadata-py -->|2| objects-base-py
    objects-network-metadata-py -->|3| objects-fields-py
    objects-network-request-py -->|3| objects-base-py
    objects-network-request-py -->|5| objects-fields-py
    objects-numa-py -->|6| exception-py
    objects-numa-py -->|3| objects-base-py
    objects-numa-py -->|7| objects-fields-py
    objects-pci-device-pool-py -->|4| objects-base-py
    objects-pci-device-pool-py -->|5| objects-fields-py
    objects-pci-device-pool-py -->|4| objects-init
    objects-pci-device-py -->|9| db-main-api-py
    objects-pci-device-py -->|2| db-main-models-py
    objects-pci-device-py -->|5| exception-py
    objects-pci-device-py -->|7| objects-base-py
    objects-pci-device-py -->|8| objects-fields-py
    objects-quotas-py --> db-api-api-py
    objects-quotas-py -->|4| db-api-models-py
    objects-quotas-py -->|13| db-main-api-py
    objects-quotas-py --> db-main-models-py
    objects-quotas-py --> db-utils-py
    objects-quotas-py -->|6| exception-py
    objects-quotas-py -->|2| objects-base-py
    objects-quotas-py -->|3| objects-fields-py
    objects-request-spec-py -->|3| compute-pci-placement-translator-py
    objects-request-spec-py --> conf-init
    objects-request-spec-py --> db-api-api-py
    objects-request-spec-py -->|3| db-api-models-py
    objects-request-spec-py -->|3| exception-py
    objects-request-spec-py -->|4| objects-base-py
    objects-request-spec-py -->|13| objects-fields-py
    objects-request-spec-py -->|16| objects-init
    objects-request-spec-py --> objects-instance-py
    objects-resource-py -->|2| db-main-api-py
    objects-resource-py -->|4| objects-base-py
    objects-resource-py -->|7| objects-fields-py
    objects-security-group-py -->|8| db-main-api-py
    objects-security-group-py --> db-main-models-py
    objects-security-group-py -->|5| objects-base-py
    objects-security-group-py -->|5| objects-fields-py
    objects-security-group-py -->|3| objects-init
    objects-selection-py --> conf-init
    objects-selection-py -->|2| objects-base-py
    objects-selection-py -->|2| objects-init
    objects-selection-py -->|2| scheduler-filters-utils-py
    objects-service-py -->|15| db-main-api-py
    objects-service-py -->|6| exception-py
    objects-service-py -->|7| objects-base-py
    objects-service-py -->|8| objects-fields-py
    objects-service-py -->|2| objects-init
    objects-share-mapping-py --> conf-init
    objects-share-mapping-py -->|9| db-main-api-py
    objects-share-mapping-py -->|4| exception-py
    objects-share-mapping-py -->|5| objects-base-py
    objects-share-mapping-py -->|7| objects-fields-py
    objects-tag-py -->|7| db-main-api-py
    objects-tag-py -->|4| objects-base-py
    objects-tag-py -->|3| objects-fields-py
    objects-task-log-py -->|5| db-main-api-py
    objects-task-log-py -->|5| objects-base-py
    objects-task-log-py -->|5| objects-fields-py
    objects-trusted-certs-py -->|2| db-main-api-py
    objects-trusted-certs-py -->|2| objects-base-py
    objects-trusted-certs-py -->|2| objects-fields-py
    objects-vcpu-model-py -->|2| db-main-api-py
    objects-vcpu-model-py -->|2| objects-base-py
    objects-vcpu-model-py -->|8| objects-fields-py
    objects-virt-cpu-topology-py -->|2| objects-base-py
    objects-virt-cpu-topology-py -->|2| objects-fields-py
    objects-virt-device-metadata-py -->|2| db-main-api-py
    objects-virt-device-metadata-py -->|2| objects-base-py
    objects-virt-device-metadata-py -->|13| objects-fields-py
    objects-virtual-interface-py --> db-api-api-py
    objects-virtual-interface-py -->|11| db-main-api-py
    objects-virtual-interface-py --> db-main-models-py
    objects-virtual-interface-py -->|2| exception-py
    objects-virtual-interface-py -->|5| objects-base-py
    objects-virtual-interface-py -->|5| objects-fields-py
    objects-virtual-interface-py -->|6| objects-init
    objects-volume-usage-py -->|2| db-main-api-py
    objects-volume-usage-py -->|3| objects-base-py
    objects-volume-usage-py -->|5| objects-fields-py
    scheduler-client-query-py -->|2| scheduler-rpcapi-py
    scheduler-client-report-py -->|2| compute-provider-tree-py
    scheduler-client-report-py --> conf-init
    scheduler-client-report-py -->|24| exception-py
    scheduler-client-report-py -->|2| i18n-py
    scheduler-client-report-py --> objects-fields-py
    scheduler-client-report-py -->|3| objects-init
    scheduler-client-report-py -->|2| utils-py
    scheduler-filters-affinity-filter-py -->|2| scheduler-filters-init
    scheduler-filters-affinity-filter-py -->|2| scheduler-filters-utils-py
    scheduler-filters-aggregate-image-properties-isolation-py --> conf-init
    scheduler-filters-aggregate-image-properties-isolation-py -->|2| scheduler-filters-init
    scheduler-filters-aggregate-image-properties-isolation-py -->|2| scheduler-filters-utils-py
    scheduler-filters-aggregate-instance-extra-specs-py -->|2| scheduler-filters-extra-specs-ops-py
    scheduler-filters-aggregate-instance-extra-specs-py -->|2| scheduler-filters-init
    scheduler-filters-aggregate-instance-extra-specs-py -->|2| scheduler-filters-utils-py
    scheduler-filters-aggregate-multitenancy-isolation-py -->|2| scheduler-filters-init
    scheduler-filters-aggregate-multitenancy-isolation-py -->|2| scheduler-filters-utils-py
    scheduler-filters-all-hosts-filter-py -->|2| scheduler-filters-init
    scheduler-filters-compute-capabilities-filter-py -->|2| scheduler-filters-extra-specs-ops-py
    scheduler-filters-compute-capabilities-filter-py -->|2| scheduler-filters-init
    scheduler-filters-compute-filter-py -->|2| scheduler-filters-init
    scheduler-filters-image-props-filter-py --> conf-init
    scheduler-filters-image-props-filter-py -->|4| objects-fields-py
    scheduler-filters-image-props-filter-py -->|2| scheduler-filters-init
    scheduler-filters-init -->|2| scheduler-utils-py
    scheduler-filters-io-ops-filter-py --> conf-init
    scheduler-filters-io-ops-filter-py -->|2| scheduler-filters-init
    scheduler-filters-io-ops-filter-py -->|3| scheduler-filters-utils-py
    scheduler-filters-isolated-hosts-filter-py --> conf-init
    scheduler-filters-isolated-hosts-filter-py -->|2| scheduler-filters-init
    scheduler-filters-json-filter-py -->|2| scheduler-filters-init
    scheduler-filters-metrics-filter-py --> conf-init
    scheduler-filters-metrics-filter-py -->|2| scheduler-filters-init
    scheduler-filters-metrics-filter-py -->|2| scheduler-utils-py
    scheduler-filters-num-instances-filter-py --> conf-init
    scheduler-filters-num-instances-filter-py -->|2| scheduler-filters-init
    scheduler-filters-num-instances-filter-py -->|3| scheduler-filters-utils-py
    scheduler-filters-numa-topology-filter-py --> objects-fields-py
    scheduler-filters-numa-topology-filter-py -->|2| objects-init
    scheduler-filters-numa-topology-filter-py -->|3| scheduler-filters-init
    scheduler-filters-pci-passthrough-filter-py -->|3| scheduler-filters-init
    scheduler-filters-type-filter-py -->|2| scheduler-filters-init
    scheduler-filters-type-filter-py -->|2| scheduler-filters-utils-py
    scheduler-host-manager-py --> conf-init
    scheduler-host-manager-py -->|2| exception-py
    scheduler-host-manager-py -->|16| objects-init
    scheduler-host-manager-py -->|2| scheduler-filters-init
    scheduler-host-manager-py -->|2| scheduler-weights-init
    scheduler-host-manager-py -->|4| utils-py
    scheduler-manager-py -->|2| compute-utils-py
    scheduler-manager-py --> conf-init
    scheduler-manager-py -->|2| exception-py
    scheduler-manager-py -->|2| i18n-py
    scheduler-manager-py --> objects-fields-py
    scheduler-manager-py -->|2| objects-host-mapping-py
    scheduler-manager-py -->|4| objects-init
    scheduler-manager-py -->|2| objects-service-py
    scheduler-manager-py -->|2| scheduler-client-report-py
    scheduler-manager-py -->|2| scheduler-host-manager-py
    scheduler-manager-py -->|2| scheduler-request-filter-py
    scheduler-manager-py -->|4| scheduler-utils-py
    scheduler-request-filter-py --> conf-init
    scheduler-request-filter-py -->|2| exception-py
    scheduler-request-filter-py -->|2| i18n-py
    scheduler-request-filter-py -->|2| network-neutron-py
    scheduler-request-filter-py -->|5| objects-init
    scheduler-request-filter-py -->|2| scheduler-client-report-py
    scheduler-request-filter-py -->|4| scheduler-utils-py
    scheduler-rpcapi-py --> conf-init
    scheduler-rpcapi-py -->|2| exception-py
    scheduler-rpcapi-py -->|2| objects-base-py
    scheduler-utils-py -->|3| compute-flavors-py
    scheduler-utils-py -->|5| compute-utils-py
    scheduler-utils-py --> conf-init
    scheduler-utils-py -->|7| exception-py
    scheduler-utils-py -->|2| i18n-py
    scheduler-utils-py -->|2| objects-base-py
    scheduler-utils-py --> objects-fields-py
    scheduler-utils-py -->|7| objects-init
    scheduler-utils-py --> objects-instance-py
    scheduler-utils-py --> scheduler-client-report-py
    scheduler-utils-py -->|3| scheduler-filters-utils-py
    scheduler-weights-affinity-py -->|2| scheduler-utils-py
    scheduler-weights-affinity-py -->|2| scheduler-weights-init
    scheduler-weights-compute-py --> conf-init
    scheduler-weights-compute-py -->|2| scheduler-utils-py
    scheduler-weights-compute-py -->|2| scheduler-weights-init
    scheduler-weights-cpu-py --> conf-init
    scheduler-weights-cpu-py -->|2| scheduler-utils-py
    scheduler-weights-cpu-py -->|2| scheduler-weights-init
    scheduler-weights-cross-cell-py --> conf-init
    scheduler-weights-cross-cell-py -->|2| scheduler-utils-py
    scheduler-weights-cross-cell-py -->|2| scheduler-weights-init
    scheduler-weights-disk-py --> conf-init
    scheduler-weights-disk-py -->|2| scheduler-utils-py
    scheduler-weights-disk-py -->|2| scheduler-weights-init
    scheduler-weights-hypervisor-version-py --> conf-init
    scheduler-weights-hypervisor-version-py -->|2| scheduler-utils-py
    scheduler-weights-hypervisor-version-py -->|2| scheduler-weights-init
    scheduler-weights-image-props-py --> conf-init
    scheduler-weights-image-props-py --> exception-py
    scheduler-weights-image-props-py -->|3| objects-init
    scheduler-weights-image-props-py -->|3| scheduler-utils-py
    scheduler-weights-image-props-py -->|2| scheduler-weights-init
    scheduler-weights-io-ops-py --> conf-init
    scheduler-weights-io-ops-py -->|2| scheduler-utils-py
    scheduler-weights-io-ops-py -->|2| scheduler-weights-init
    scheduler-weights-metrics-py --> conf-init
    scheduler-weights-metrics-py -->|2| exception-py
    scheduler-weights-metrics-py -->|3| scheduler-utils-py
    scheduler-weights-metrics-py -->|2| scheduler-weights-init
    scheduler-weights-num-instances-py --> conf-init
    scheduler-weights-num-instances-py -->|2| scheduler-utils-py
    scheduler-weights-num-instances-py -->|2| scheduler-weights-init
    scheduler-weights-pci-py --> conf-init
    scheduler-weights-pci-py -->|2| scheduler-utils-py
    scheduler-weights-pci-py -->|2| scheduler-weights-init
    scheduler-weights-ram-py --> conf-init
    scheduler-weights-ram-py -->|2| scheduler-utils-py
    scheduler-weights-ram-py -->|2| scheduler-weights-init
    service-auth-py --> conf-init
    utils-py --> conf-init
    utils-py -->|5| exception-py
    utils-py -->|2| i18n-py
    utils-py -->|3| objects-service-py
```

---

## Local Data Flow

Source: `securitySurface` arrays in `.aee/kb/src/nova/**/*.json`.

**Entry points (53 total):**

| File | Line | Category | Description |
|---|---|---|---|
| `accelerator/cyborg.py` | L56 | http-param | `context` carries caller auth/session state into `_CyborgClient.__init__` |
| `accelerator/cyborg.py` | L88 | http-param | `dp_name` forwarded to Cyborg API in `_get_device_profile_list` |
| `accelerator/cyborg.py` | L255 | http-param | `bindings` dict serialised as RFC 6902 JSON patch body in `bind_arqs` |
| `accelerator/cyborg.py` | L291 | http-param | `instance_uuid` used as Cyborg API query parameter in `get_arqs_for_instance` |
| `accelerator/cyborg.py` | L337 | http-param | `arq_uuid` interpolated into Cyborg API URL path in `get_arq_by_uuid` |
| `api/auth.py` | L55 | http-param | `@webob.dec.wsgify` — inbound WSGI request enters auth middleware |
| `api/openstack/__init__.py` | L91 | http-param | `@webob.dec.wsgify` — request enters API router |
| `api/openstack/common.py` | L155 | http-param | `request.params` — query parameters read for filtering |
| `api/openstack/common.py` | L189 | http-param | `request.GET['limit']` — limit parameter from query string |
| `cmd/common.py` | L135 | cli-args | argparse flag declaration |
| `cmd/compute.py` | L49 | cli-args | `config.parse_args(sys.argv)` — CLI args parsed |
| `cmd/conductor.py` | L39 | cli-args | `config.parse_args(sys.argv)` |
| `cmd/manage.py` | L3821 | cli-args | `config.parse_args(sys.argv)` |
| `cmd/policy.py` | L48 | env | `os.environ.get('OS_ROLES')` |
| `cmd/policy.py` | L53 | env | `os.environ.get('OS_USER_ID')` |
| `cmd/policy.py` | L58 | env | `os.environ.get('OS_TENANT_ID')` |
| `console/serial.py` | L83 | network-socket | raw socket opened for serial console connection |
| `exception.py` | L27 | http-param | `import webob.exc` — webob exception types enter nova hierarchy |
| `exception.py` | L35 | http-param | `ConvertedException(webob.exc.WSGIHTTPException)` |

(34 further entry points exist in `api/` controller and `cmd/` launcher files; all are `http-param` or `cli-args` category. Source: `.aee/kb/src/nova/api/**/*.json`, `.aee/kb/src/nova/cmd/**/*.json:securitySurface`.)

**Sinks (709 total):**

| Category | Count | Primary files |
|---|---|---|
| db-write | 700 | `db/main/api.py`, `compute/api.py`, `compute/manager.py`, `conductor/manager.py`, `api/openstack/compute/servers.py`, `network/neutron.py`, `scheduler/client/query.py` |
| network-send | 7 | `accelerator/cyborg.py` |
| file-write | 2 | `cmd/baseproxy.py` |

**Data flow paths:**

1. **CLI entry points → service startup.** Each `cmd/*.py` launcher calls `config.parse_args(sys.argv)` as its primary entry point (`cli-args` category), loading oslo.config options from `conf/*.py` declarations and command-line arguments. No database or network sink is reached within the `cmd/` layer itself; control passes to service managers (unresolved `nova.service` in current KB). Source: `.aee/kb/src/nova/cmd/**/*.json:securitySurface`.

2. **API layer → downstream services.** Inbound HTTP requests enter at `@webob.dec.wsgify`-decorated callables in `api/auth.py` and `api/openstack/__init__.py`. Request bodies and query parameters are validated by `api/validation/__init__.py` before being passed to controller action methods, which invoke `compute/api.py` (`API` class) and object-layer methods resolving to SQLAlchemy writes via `db/main/api.py`. Source: link-graph edges `api-openstack-compute-*` → `compute-*`, `objects-*`, `db-main-api-py`.

3. **Compute API → instance lifecycle (db-write).** `compute/api.py` (`_validate_bdm`, CCN 43) and `compute/manager.py` (`_init_instance`, CCN 40) issue 105 `db-write` sinks for instance state transitions, block-device mappings, and task-state updates. Source: `.aee/kb/src/nova/compute/api.py.json:securitySurface`.

4. **Accelerator → Cyborg HTTP.** Parameters enter at `accelerator/cyborg.py:L56/L88/L255/L291/L337` and reach network-send sinks at `L153-L154` (GET `/device_profiles`), `L205` (POST `/accelerator_requests`), `L282-L283` (PATCH), `L317` (GET `?instance=<value>`), `L377` (GET `/<arq_uuid>`). Source: `.aee/kb/src/nova/accelerator/cyborg.py.json:securitySurface`.

5. **Objects → db/main/api.py.** Domain-object methods pass field values through OVO serialisation in `objects/base.py` before reaching SQLAlchemy write functions in `db/main/api.py`. Source: link-graph edges `objects-*` → `db-main-api-py`.

6. **Network → Neutron HTTP.** `network/neutron.py` issues REST calls (26 `db-write`-category sinks, 80+ `network` side effects) for port, security group, and floating-IP operations. Source: `.aee/kb/src/nova/network/neutron.py.json:securitySurface` and `sideEffects`.

7. **Scheduler → Placement HTTP.** `scheduler/client/report.py` issues GET/PUT/POST to the Placement API at `L279` and `L2358`. Source: `.aee/kb/src/nova/scheduler/client/report.py.json:securitySurface`.

8. **Console → network socket.** `console/serial.py:L83` opens a raw TCP socket (`network-socket` entry point) for serial console proxying; no further sink is recorded in the current KB. Source: `.aee/kb/src/nova/console/serial.py.json:securitySurface`.

**Privileges (62 entries):** All privilege entries have category `crypto-key` originating from `keystoneauth1` imports in `scheduler/client/report.py`, `service_auth.py`, `api/auth.py`, `network/neutron.py`, `compute/manager.py`, and `conductor/manager.py`. Source: `securitySurface` arrays in those KB records.

No untrusted-input sanitisation steps are recorded in any `securitySurface` entry across the 433 KB records.

---

## Cross-Component Interfaces

The link graph records **0 cross-component file edges** and **0 cross-component seams**. All 1,536 file edges are intra-component. The link summary notes 302 unresolved imports: bare `nova` (149 refs), `nova.policies` (60), `nova.virt` (23), `nova.notifications.objects` (17), `nova.pci` (13), `nova.limit` (10), `nova.image` (9), `nova.volume` (9), `nova.context` (3), `nova.share` (3), `nova.virt.libvirt` (2), and `nova.notifications`, `nova.quota`, `nova.policy`, `nova.virt.node` (1 each). Resolved in this batch vs. prior: `nova.conf` (was 53 refs) and `nova.compute` (was 66 refs) are now fully in the KB. Source: `.aee/link-summary.md`.
