# Component: nova

## Overview

The `nova` component encompasses the core OpenStack Compute service subsystems extracted across six batches: the REST API layer (`api/`), accelerator integration (`accelerator/`), CLI entry points (`cmd/`), compute service (`compute/`), conductor service (`conductor/`), configuration layer (`conf/`), console subsystem (`console/`), exception and internationalisation utilities (`exception.py`, `i18n.py`, `service_auth.py`, `utils.py`), code-style enforcement (`hacking/`), Glance image client (`image/`), key-manager wrapper (`keymgr/`), quota-limit enforcement (`limit/`), the versioned object layer (`objects/`), the database access layer (`db/`), the network integration layer (`network/`), and the scheduler subsystem (`scheduler/`). All 443 files are classified as component `nova`; no other component exists in the current KB.

**Batch provenance** — batch 1 (`6d56e5a`, 2026-10-16): 2 files; batch 2 (`733c73`, 2026-10-19): 53 files; batch 3 (`868bfe40`, 2026-10-19): 67 files; batch 4 (`caa20451`, 2026-10-20): 205 files; batch 5 (`f56908d5`, 2026-10-20): 106 files; batch 6 (`c7012ab2`, 2026-10-20): 10 files.

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
- **hacking/** — pep8/hacking lint-check plug-ins for Nova-specific style rules (`hacking/checks.py`).
- **image/** — Glance image service client: HTTP session management, image download with signature verification, image metadata conversion (`image/glance.py`).
- **keymgr/** — oslo.castellan key-manager wrapper for encryption-key storage (`keymgr/conf_key_mgr.py`).
- **limit/** — oslo_limit–based quota enforcement: API-side limits (`limit/local.py`), Placement-side limits (`limit/placement.py`), and unified-limit detection utilities (`limit/utils.py`).
- **objects/** — oslo.versionedobjects-based domain model for all Nova entities.
- **db/api/** and **db/main/** — Alembic-managed API and main database schemas with SQLAlchemy query API.
- **network/** — Neutron integration, network model, os-vif utilities, and security group API.
- **scheduler/** — Placement-aware scheduling: host manager, filters, weighers, RPC client, and Placement report client.

Source: `.aee/intake-summary.md` (batch c7012ab2); `.aee/link-summary.md`.

---

## File Inventory

All 443 KB records. LOC figures from each record's `lines` block. Source: `.aee/kb/src/nova/**/*.json`.

| File | LOC (total) | LOC (code) | Component |
|---|---|---|---|
| `accelerator/__init__.py` | 0 | 0 | nova |
| `accelerator/cyborg.py` | 419 | 324 | nova |
| `api/__init__.py` | 0 | 0 | nova |
| `api/auth.py` | 101 | 62 | nova |
| `api/compute_req_id.py` | 36 | 13 | nova |
| `api/metadata/__init__.py` | 22 | 7 | nova |
| `api/metadata/base.py` | 746 | 535 | nova |
| `api/metadata/handler.py` | 338 | 245 | nova |
| `api/metadata/password.py` | 88 | 56 | nova |
| `api/metadata/vendordata.py` | 30 | 10 | nova |
| `api/metadata/vendordata_dynamic.py` | 133 | 84 | nova |
| `api/metadata/vendordata_json.py` | 56 | 33 | nova |
| `api/openstack/__init__.py` | 226 | 158 | nova |
| `api/openstack/api_version_request.py` | 441 | 357 | nova |
| `api/openstack/common.py` | 554 | 437 | nova |
| `api/openstack/compute/__init__.py` | 21 | 1 | nova |
| `api/openstack/compute/admin_actions.py` | 91 | 65 | nova |
| `api/openstack/compute/admin_password.py` | 61 | 38 | nova |
| `api/openstack/compute/agents.py` | 60 | 37 | nova |
| `api/openstack/compute/aggregates.py` | 325 | 246 | nova |
| `api/openstack/compute/assisted_volume_snapshots.py` | 98 | 62 | nova |
| `api/openstack/compute/attach_interfaces.py` | 243 | 189 | nova |
| `api/openstack/compute/availability_zone.py` | 128 | 94 | nova |
| `api/openstack/compute/baremetal_nodes.py` | 148 | 106 | nova |
| `api/openstack/compute/cells.py` | 98 | 68 | nova |
| `api/openstack/compute/certificates.py` | 47 | 27 | nova |
| `api/openstack/compute/cloudpipe.py` | 56 | 34 | nova |
| `api/openstack/compute/console_auth_tokens.py` | 102 | 62 | nova |
| `api/openstack/compute/console_output.py` | 73 | 39 | nova |
| `api/openstack/compute/consoles.py` | 62 | 38 | nova |
| `api/openstack/compute/create_backup.py` | 96 | 63 | nova |
| `api/openstack/compute/deferred_delete.py` | 71 | 50 | nova |
| `api/openstack/compute/evacuate.py` | 177 | 132 | nova |
| `api/openstack/compute/extension_info.py` | 891 | 859 | nova |
| `api/openstack/compute/fixed_ips.py` | 53 | 32 | nova |
| `api/openstack/compute/flavor_access.py` | 123 | 80 | nova |
| `api/openstack/compute/flavors.py` | 254 | 191 | nova |
| `api/openstack/compute/flavors_extraspecs.py` | 149 | 111 | nova |
| `api/openstack/compute/floating_ip_dns.py` | 76 | 50 | nova |
| `api/openstack/compute/floating_ip_pools.py` | 54 | 32 | nova |
| `api/openstack/compute/floating_ips.py` | 311 | 245 | nova |
| `api/openstack/compute/floating_ips_bulk.py` | 58 | 36 | nova |
| `api/openstack/compute/fping.py` | 46 | 24 | nova |
| `api/openstack/compute/helpers.py` | 116 | 70 | nova |
| `api/openstack/compute/hosts.py` | 303 | 258 | nova |
| `api/openstack/compute/hypervisors.py` | 535 | 414 | nova |
| `api/openstack/compute/image_metadata.py` | 141 | 111 | nova |
| `api/openstack/compute/images.py` | 158 | 114 | nova |
| `api/openstack/compute/instance_actions.py` | 215 | 154 | nova |
| `api/openstack/compute/instance_usage_audit_log.py` | 118 | 92 | nova |
| `api/openstack/compute/ips.py` | 63 | 41 | nova |
| `api/openstack/compute/keypairs.py` | 225 | 167 | nova |
| `api/openstack/compute/limits.py` | 76 | 47 | nova |
| `api/openstack/compute/lock_server.py` | 67 | 47 | nova |
| `api/openstack/compute/migrate_server.py` | 185 | 153 | nova |
| `api/openstack/compute/migrations.py` | 221 | 154 | nova |
| `api/openstack/compute/multinic.py` | 74 | 49 | nova |
| `api/openstack/compute/networks.py` | 132 | 92 | nova |
| `api/openstack/compute/networks_associate.py` | 54 | 34 | nova |
| `api/openstack/compute/pause_server.py` | 78 | 58 | nova |
| `api/openstack/compute/quota_classes.py` | 152 | 100 | nova |
| `api/openstack/compute/quota_sets.py` | 257 | 180 | nova |
| `api/openstack/compute/remote_consoles.py` | 186 | 147 | nova |
| `api/openstack/compute/rescue.py` | 105 | 78 | nova |
| `api/openstack/compute/routes.py` | 901 | 730 | nova |
| `api/openstack/compute/schemas/__init__.py` | 0 | 0 | nova |
| `api/openstack/compute/schemas/admin_actions.py` | 58 | 34 | nova |
| `api/openstack/compute/schemas/admin_password.py` | 36 | 19 | nova |
| `api/openstack/compute/schemas/agents.py` | 24 | 7 | nova |
| `api/openstack/compute/schemas/aggregate_images.py` | 38 | 23 | nova |
| `api/openstack/compute/schemas/aggregates.py` | 249 | 209 | nova |
| `api/openstack/compute/schemas/assisted_volume_snapshots.py` | 90 | 66 | nova |
| `api/openstack/compute/schemas/attach_interfaces.py` | 143 | 109 | nova |
| `api/openstack/compute/schemas/availability_zone.py` | 85 | 65 | nova |
| `api/openstack/compute/schemas/baremetal_nodes.py` | 96 | 72 | nova |
| `api/openstack/compute/schemas/cells.py` | 34 | 17 | nova |
| `api/openstack/compute/schemas/certificates.py` | 21 | 4 | nova |
| `api/openstack/compute/schemas/cloudpipe.py` | 23 | 6 | nova |
| `api/openstack/compute/schemas/console_auth_tokens.py` | 50 | 34 | nova |
| `api/openstack/compute/schemas/console_output.py` | 45 | 26 | nova |
| `api/openstack/compute/schemas/consoles.py` | 24 | 7 | nova |
| `api/openstack/compute/schemas/create_backup.py` | 59 | 37 | nova |
| `api/openstack/compute/schemas/deferred_delete.py` | 39 | 22 | nova |
| `api/openstack/compute/schemas/evacuate.py` | 69 | 40 | nova |
| `api/openstack/compute/schemas/extension_info.py` | 81 | 63 | nova |
| `api/openstack/compute/schemas/fixed_ips.py` | 23 | 6 | nova |
| `api/openstack/compute/schemas/flavor_access.py` | 90 | 65 | nova |
| `api/openstack/compute/schemas/flavors.py` | 369 | 281 | nova |
| `api/openstack/compute/schemas/flavors_extraspecs.py` | 85 | 48 | nova |
| `api/openstack/compute/schemas/floating_ip_dns.py` | 24 | 7 | nova |
| `api/openstack/compute/schemas/floating_ip_pools.py` | 41 | 26 | nova |
| `api/openstack/compute/schemas/floating_ips.py` | 116 | 88 | nova |
| `api/openstack/compute/schemas/floating_ips_bulk.py` | 25 | 8 | nova |
| `api/openstack/compute/schemas/fping.py` | 20 | 4 | nova |
| `api/openstack/compute/schemas/hosts.py` | 140 | 108 | nova |
| `api/openstack/compute/schemas/hypervisors.py` | 367 | 293 | nova |
| `api/openstack/compute/schemas/image_metadata.py` | 77 | 47 | nova |
| `api/openstack/compute/schemas/images.py` | 231 | 195 | nova |
| `api/openstack/compute/schemas/instance_actions.py` | 208 | 174 | nova |
| `api/openstack/compute/schemas/instance_usage_audit_log.py` | 98 | 76 | nova |
| `api/openstack/compute/schemas/ips.py` | 82 | 59 | nova |
| `api/openstack/compute/schemas/keypairs.py` | 253 | 213 | nova |
| `api/openstack/compute/schemas/limits.py` | 154 | 125 | nova |
| `api/openstack/compute/schemas/lock_server.py` | 55 | 38 | nova |
| `api/openstack/compute/schemas/migrate_server.py` | 82 | 54 | nova |
| `api/openstack/compute/schemas/migrations.py` | 137 | 109 | nova |
| `api/openstack/compute/schemas/multinic.py` | 59 | 40 | nova |
| `api/openstack/compute/schemas/networks.py` | 103 | 79 | nova |
| `api/openstack/compute/schemas/networks_associate.py` | 22 | 6 | nova |
| `api/openstack/compute/schemas/pause_server.py` | 39 | 22 | nova |
| `api/openstack/compute/schemas/quota_classes.py` | 164 | 130 | nova |
| `api/openstack/compute/schemas/quota_sets.py` | 292 | 228 | nova |
| `api/openstack/compute/schemas/remote_consoles.py` | 227 | 189 | nova |
| `api/openstack/compute/schemas/rescue.py` | 56 | 36 | nova |
| `api/openstack/compute/schemas/security_group_default_rules.py` | 24 | 7 | nova |
| `api/openstack/compute/schemas/security_groups.py` | 254 | 203 | nova |
| `api/openstack/compute/schemas/server_diagnostics.py` | 157 | 138 | nova |
| `api/openstack/compute/schemas/server_external_events.py` | 142 | 116 | nova |
| `api/openstack/compute/schemas/server_groups.py` | 231 | 182 | nova |
| `api/openstack/compute/schemas/server_metadata.py` | 95 | 66 | nova |
| `api/openstack/compute/schemas/server_migrations.py` | 150 | 118 | nova |
| `api/openstack/compute/schemas/server_password.py` | 33 | 17 | nova |
| `api/openstack/compute/schemas/server_shares.py` | 89 | 62 | nova |
| `api/openstack/compute/schemas/server_tags.py` | 87 | 62 | nova |
| `api/openstack/compute/schemas/server_topology.py` | 60 | 46 | nova |
| `api/openstack/compute/schemas/servers.py` | 2123 | 1823 | nova |
| `api/openstack/compute/schemas/services.py` | 200 | 158 | nova |
| `api/openstack/compute/schemas/shelve.py` | 123 | 68 | nova |
| `api/openstack/compute/schemas/simple_tenant_usage.py` | 185 | 141 | nova |
| `api/openstack/compute/schemas/snapshots.py` | 140 | 112 | nova |
| `api/openstack/compute/schemas/suspend_server.py` | 39 | 22 | nova |
| `api/openstack/compute/schemas/tenant_networks.py` | 59 | 39 | nova |
| `api/openstack/compute/schemas/versions.py` | 133 | 111 | nova |
| `api/openstack/compute/schemas/virtual_interfaces.py` | 18 | 2 | nova |
| `api/openstack/compute/schemas/volume_attachments.py` | 238 | 184 | nova |
| `api/openstack/compute/schemas/volumes.py` | 215 | 180 | nova |
| `api/openstack/compute/security_group_default_rules.py` | 58 | 36 | nova |
| `api/openstack/compute/security_groups.py` | 468 | 376 | nova |
| `api/openstack/compute/server_diagnostics.py` | 61 | 39 | nova |
| `api/openstack/compute/server_external_events.py` | 161 | 116 | nova |
| `api/openstack/compute/server_groups.py` | 283 | 205 | nova |
| `api/openstack/compute/server_metadata.py` | 168 | 128 | nova |
| `api/openstack/compute/server_migrations.py` | 216 | 158 | nova |
| `api/openstack/compute/server_password.py` | 64 | 40 | nova |
| `api/openstack/compute/server_shares.py` | 265 | 211 | nova |
| `api/openstack/compute/server_tags.py` | 232 | 182 | nova |
| `api/openstack/compute/server_topology.py` | 82 | 53 | nova |
| `api/openstack/compute/servers.py` | 1639 | 1331 | nova |
| `api/openstack/compute/services.py` | 504 | 347 | nova |
| `api/openstack/compute/shelve.py` | 153 | 119 | nova |
| `api/openstack/compute/simple_tenant_usage.py` | 369 | 269 | nova |
| `api/openstack/compute/snapshots.py` | 157 | 117 | nova |
| `api/openstack/compute/suspend_server.py` | 75 | 56 | nova |
| `api/openstack/compute/tenant_networks.py` | 117 | 84 | nova |
| `api/openstack/compute/versions.py` | 129 | 94 | nova |
| `api/openstack/compute/versionsV21.py` | 38 | 18 | nova |
| `api/openstack/compute/views/__init__.py` | 0 | 0 | nova |
| `api/openstack/compute/views/flavors.py` | 113 | 76 | nova |
| `api/openstack/compute/views/hypervisors.py` | 26 | 8 | nova |
| `api/openstack/compute/views/images.py` | 167 | 129 | nova |
| `api/openstack/compute/views/instance_actions.py` | 23 | 6 | nova |
| `api/openstack/compute/views/ips.py` | 53 | 31 | nova |
| `api/openstack/compute/views/keypairs.py` | 74 | 42 | nova |
| `api/openstack/compute/views/limits.py` | 93 | 66 | nova |
| `api/openstack/compute/views/migrations.py` | 24 | 6 | nova |
| `api/openstack/compute/views/server_diagnostics.py` | 62 | 40 | nova |
| `api/openstack/compute/views/server_shares.py` | 46 | 27 | nova |
| `api/openstack/compute/views/server_tags.py` | 30 | 11 | nova |
| `api/openstack/compute/views/servers.py` | 823 | 593 | nova |
| `api/openstack/compute/views/usages.py` | 28 | 9 | nova |
| `api/openstack/compute/views/versions.py` | 95 | 64 | nova |
| `api/openstack/compute/virtual_interfaces.py` | 40 | 19 | nova |
| `api/openstack/compute/volume_attachments.py` | 441 | 342 | nova |
| `api/openstack/compute/volumes.py` | 222 | 156 | nova |
| `api/openstack/compute/volumes_boot.py` | 231 | 202 | nova |
| `api/openstack/identity.py` | 81 | 46 | nova |
| `api/openstack/requestlog.py` | 98 | 63 | nova |
| `api/openstack/urlmap.py` | 309 | 202 | nova |
| `api/openstack/wsgi.py` | 937 | 637 | nova |
| `api/openstack/wsgi_app.py` | 156 | 91 | nova |
| `api/validation/__init__.py` | 452 | 298 | nova |
| `api/validation/extra_specs/__init__.py` | 0 | 0 | nova |
| `api/validation/extra_specs/accel.py` | 36 | 17 | nova |
| `api/validation/extra_specs/aggregate_instance_extra_specs.py` | 72 | 47 | nova |
| `api/validation/extra_specs/base.py` | 120 | 82 | nova |
| `api/validation/extra_specs/capabilities.py` | 112 | 75 | nova |
| `api/validation/extra_specs/hw.py` | 655 | 626 | nova |
| `api/validation/extra_specs/hw_rng.py` | 57 | 37 | nova |
| `api/validation/extra_specs/hw_video.py` | 39 | 19 | nova |
| `api/validation/extra_specs/null.py` | 55 | 35 | nova |
| `api/validation/extra_specs/os.py` | 42 | 21 | nova |
| `api/validation/extra_specs/pci_passthrough.py` | 43 | 23 | nova |
| `api/validation/extra_specs/quota.py` | 188 | 155 | nova |
| `api/validation/extra_specs/resources.py` | 65 | 43 | nova |
| `api/validation/extra_specs/traits.py` | 73 | 51 | nova |
| `api/validation/extra_specs/validators.py` | 83 | 47 | nova |
| `api/validation/extra_specs/vmware.py` | 48 | 29 | nova |
| `api/validation/parameter_types.py` | 537 | 372 | nova |
| `api/validation/response_types.py` | 70 | 51 | nova |
| `api/validation/validators.py` | 346 | 235 | nova |
| `api/wsgi.py` | 260 | 178 | nova |
| `cmd/__init__.py` | 0 | 0 | nova |
| `cmd/baseproxy.py` | 96 | 54 | nova |
| `cmd/common.py` | 192 | 128 | nova |
| `cmd/compute.py` | 80 | 44 | nova |
| `cmd/conductor.py` | 53 | 28 | nova |
| `cmd/manage.py` | 3858 | 2970 | nova |
| `cmd/novncproxy.py` | 46 | 20 | nova |
| `cmd/policy.py` | 192 | 138 | nova |
| `cmd/scheduler.py` | 66 | 28 | nova |
| `cmd/serialproxy.py` | 43 | 19 | nova |
| `cmd/spicehtml5proxy.py` | 41 | 17 | nova |
| `cmd/status.py` | 361 | 238 | nova |
| `compute/__init__.py` | 0 | 0 | nova |
| `compute/api.py` | 7124 | 5092 | nova |
| `compute/build_results.py` | 34 | 10 | nova |
| `compute/claims.py` | 241 | 174 | nova |
| `compute/flavors.py` | 210 | 127 | nova |
| `compute/instance_actions.py` | 79 | 50 | nova |
| `compute/instance_list.py` | 178 | 108 | nova |
| `compute/manager.py` | 12137 | 8837 | nova |
| `compute/migration_list.py` | 85 | 53 | nova |
| `compute/monitors/__init__.py` | 93 | 52 | nova |
| `compute/monitors/base.py` | 74 | 48 | nova |
| `compute/monitors/cpu/__init__.py` | 0 | 0 | nova |
| `compute/monitors/cpu/virt_driver.py` | 101 | 61 | nova |
| `compute/multi_cell_list.py` | 454 | 279 | nova |
| `compute/pci_placement_translator.py` | 793 | 524 | nova |
| `compute/power_state.py` | 46 | 18 | nova |
| `compute/provider_config.py` | 421 | 299 | nova |
| `compute/provider_tree.py` | 794 | 617 | nova |
| `compute/resource_tracker.py` | 2269 | 1527 | nova |
| `compute/rpcapi.py` | 1738 | 1410 | nova |
| `compute/share_management.py` | 763 | 598 | nova |
| `compute/stats.py` | 155 | 97 | nova |
| `compute/task_states.py` | 132 | 59 | nova |
| `compute/utils.py` | 1678 | 1287 | nova |
| `compute/vm_states.py` | 88 | 34 | nova |
| `conductor/__init__.py` | 20 | 3 | nova |
| `conductor/api.py` | 198 | 144 | nova |
| `conductor/manager.py` | 2393 | 1721 | nova |
| `conductor/rpcapi.py` | 517 | 447 | nova |
| `conductor/tasks/__init__.py` | 0 | 0 | nova |
| `conductor/tasks/base.py` | 54 | 33 | nova |
| `conductor/tasks/cross_cell_migrate.py` | 1471 | 987 | nova |
| `conductor/tasks/live_migrate.py` | 615 | 414 | nova |
| `conductor/tasks/migrate.py` | 410 | 253 | nova |
| `conf/__init__.py` | 114 | 92 | nova |
| `conf/api.py` | 409 | 338 | nova |
| `conf/availability_zone.py` | 71 | 39 | nova |
| `conf/base.py` | 215 | 169 | nova |
| `conf/cache.py` | 27 | 5 | nova |
| `conf/cinder.py` | 133 | 91 | nova |
| `conf/compute.py` | 1600 | 1258 | nova |
| `conf/conductor.py` | 62 | 38 | nova |
| `conf/configdrive.py` | 98 | 65 | nova |
| `conf/console.py` | 93 | 60 | nova |
| `conf/consoleauth.py` | 56 | 32 | nova |
| `conf/cyborg.py` | 43 | 21 | nova |
| `conf/database.py` | 65 | 32 | nova |
| `conf/devices.py` | 119 | 75 | nova |
| `conf/ephemeral_storage.py` | 74 | 46 | nova |
| `conf/glance.py` | 219 | 164 | nova |
| `conf/guestfs.py` | 58 | 33 | nova |
| `conf/imagecache.py` | 107 | 80 | nova |
| `conf/ironic.py` | 132 | 102 | nova |
| `conf/key_manager.py` | 64 | 28 | nova |
| `conf/keystone.py` | 44 | 23 | nova |
| `conf/libvirt.py` | 1716 | 1398 | nova |
| `conf/manila.py` | 58 | 34 | nova |
| `conf/mks.py` | 64 | 36 | nova |
| `conf/netconf.py` | 108 | 63 | nova |
| `conf/neutron.py` | 178 | 123 | nova |
| `conf/notifications.py` | 127 | 97 | nova |
| `conf/novnc.py` | 78 | 50 | nova |
| `conf/opts.py` | 79 | 51 | nova |
| `conf/paths.py` | 78 | 42 | nova |
| `conf/pci.py` | 388 | 305 | nova |
| `conf/placement.py` | 42 | 21 | nova |
| `conf/quota.py` | 372 | 288 | nova |
| `conf/rpc.py` | 52 | 26 | nova |
| `conf/scheduler.py` | 1067 | 783 | nova |
| `conf/serial_console.py` | 127 | 86 | nova |
| `conf/service.py` | 91 | 54 | nova |
| `conf/service_token.py` | 63 | 42 | nova |
| `conf/servicegroup.py` | 48 | 25 | nova |
| `conf/spice.py` | 245 | 189 | nova |
| `conf/upgrade_levels.py` | 108 | 72 | nova |
| `conf/utils.py` | 91 | 55 | nova |
| `conf/vendordata.py` | 42 | 22 | nova |
| `conf/vmware.py` | 302 | 230 | nova |
| `conf/vnc.py` | 199 | 140 | nova |
| `conf/workarounds.py` | 449 | 360 | nova |
| `conf/wsgi.py` | 80 | 51 | nova |
| `conf/zvm.py` | 86 | 56 | nova |
| `console/__init__.py` | 21 | 8 | nova |
| `console/rfb/__init__.py` | 0 | 0 | nova |
| `console/rfb/auth.py` | 65 | 38 | nova |
| `console/rfb/authnone.py` | 24 | 6 | nova |
| `console/rfb/auths.py` | 53 | 27 | nova |
| `console/rfb/authvencrypt.py` | 162 | 109 | nova |
| `console/securityproxy/__init__.py` | 0 | 0 | nova |
| `console/securityproxy/base.py` | 44 | 21 | nova |
| `console/securityproxy/rfb.py` | 221 | 147 | nova |
| `console/serial.py` | 90 | 53 | nova |
| `console/type.py` | 46 | 21 | nova |
| `console/websocketproxy.py` | 332 | 221 | nova |
| `db/__init__.py` | 0 | 0 | nova |
| `db/api/__init__.py` | 0 | 0 | nova |
| `db/api/api.py` | 50 | 23 | nova |
| `db/api/migrations/env.py` | 123 | 80 | nova |
| `db/api/migrations/versions/b30f573d3377_remove_unused_build_requests_columns.py` | 45 | 27 | nova |
| `db/api/migrations/versions/cdeec0c85668_drop_legacy_migrate_version_table.py` | 36 | 17 | nova |
| `db/api/migrations/versions/d67eeaabee36_initial_version.py` | 603 | 544 | nova |
| `db/api/models.py` | 495 | 371 | nova |
| `db/constants.py` | 25 | 4 | nova |
| `db/main/__init__.py` | 0 | 0 | nova |
| `db/main/api.py` | 4967 | 3535 | nova |
| `db/main/migrations/env.py` | 129 | 82 | nova |
| `db/main/migrations/versions/13863f4e1612_create_share_mapping_table.py` | 64 | 43 | nova |
| `db/main/migrations/versions/16f1fbcab42b_resolve_shadow_table_diffs.py` | 64 | 29 | nova |
| `db/main/migrations/versions/1acf2c98e646_add_compute_id_to_instance.py` | 49 | 29 | nova |
| `db/main/migrations/versions/1b91788ec3a6_drop_legacy_migrate_version_table.py` | 36 | 17 | nova |
| `db/main/migrations/versions/2903cd72dc14_add_tls_port_to_console_auth_tokens.py` | 33 | 14 | nova |
| `db/main/migrations/versions/8f2f1571d55b_initial_version.py` | 1629 | 1436 | nova |
| `db/main/migrations/versions/960aac0e09ea_de_duplicate_indexes_in_instances__.py` | 35 | 15 | nova |
| `db/main/migrations/versions/ab450ba04102_db_add_indexes_for_source_dest_.py` | 40 | 22 | nova |
| `db/main/migrations/versions/ccb0fa1a2252_add_encryption_fields_to_.py` | 59 | 41 | nova |
| `db/main/migrations/versions/d60bddf7a903_add_constraint_instance_share_avoid_.py` | 75 | 56 | nova |
| `db/main/models.py` | 1238 | 900 | nova |
| `db/migration.py` | 108 | 51 | nova |
| `db/types.py` | 87 | 48 | nova |
| `db/utils.py` | 156 | 108 | nova |
| `exception.py` | 2682 | 1525 | nova |
| `hacking/__init__.py` | 0 | 0 | nova |
| `hacking/checks.py` | 1140 | 817 | nova |
| `i18n.py` | 36 | 11 | nova |
| `image/__init__.py` | 0 | 0 | nova |
| `image/glance.py` | 1248 | 919 | nova |
| `keymgr/__init__.py` | 0 | 0 | nova |
| `keymgr/conf_key_mgr.py` | 141 | 95 | nova |
| `limit/__init__.py` | 0 | 0 | nova |
| `limit/local.py` | 236 | 162 | nova |
| `limit/placement.py` | 239 | 164 | nova |
| `limit/utils.py` | 181 | 95 | nova |
| `network/__init__.py` | 0 | 0 | nova |
| `network/constants.py` | 52 | 20 | nova |
| `network/model.py` | 633 | 423 | nova |
| `network/neutron.py` | 3989 | 2876 | nova |
| `network/os_vif_util.py` | 551 | 396 | nova |
| `network/security_group_api.py` | 709 | 524 | nova |
| `objects/__init__.py` | 122 | 95 | nova |
| `objects/aggregate.py` | 597 | 460 | nova |
| `objects/base.py` | 443 | 322 | nova |
| `objects/block_device.py` | 504 | 356 | nova |
| `objects/build_request.py` | 474 | 326 | nova |
| `objects/cell_mapping.py` | 300 | 228 | nova |
| `objects/compute_node.py` | 561 | 373 | nova |
| `objects/console_auth_token.py` | 225 | 149 | nova |
| `objects/diagnostics.py` | 179 | 127 | nova |
| `objects/ec2.py` | 249 | 186 | nova |
| `objects/external_event.py` | 82 | 39 | nova |
| `objects/fields.py` | 1469 | 957 | nova |
| `objects/flavor.py` | 677 | 516 | nova |
| `objects/host_mapping.py` | 295 | 223 | nova |
| `objects/hv_spec.py` | 55 | 27 | nova |
| `objects/image_meta.py` | 812 | 408 | nova |
| `objects/instance.py` | 1715 | 1296 | nova |
| `objects/instance_action.py` | 300 | 220 | nova |
| `objects/instance_fault.py` | 113 | 74 | nova |
| `objects/instance_group.py` | 601 | 439 | nova |
| `objects/instance_info_cache.py` | 121 | 72 | nova |
| `objects/instance_mapping.py` | 473 | 352 | nova |
| `objects/instance_numa.py` | 389 | 259 | nova |
| `objects/instance_pci_requests.py` | 177 | 125 | nova |
| `objects/keypair.py` | 208 | 143 | nova |
| `objects/migrate_data.py` | 463 | 294 | nova |
| `objects/migration.py` | 338 | 249 | nova |
| `objects/migration_context.py` | 140 | 105 | nova |
| `objects/monitor_metric.py` | 119 | 67 | nova |
| `objects/network_metadata.py` | 50 | 30 | nova |
| `objects/network_request.py` | 123 | 77 | nova |
| `objects/numa.py` | 296 | 208 | nova |
| `objects/pci_device.py` | 655 | 466 | nova |
| `objects/pci_device_pool.py` | 109 | 68 | nova |
| `objects/quotas.py` | 665 | 504 | nova |
| `objects/request_spec.py` | 1565 | 1049 | nova |
| `objects/resource.py` | 118 | 63 | nova |
| `objects/security_group.py` | 190 | 132 | nova |
| `objects/selection.py` | 115 | 71 | nova |
| `objects/service.py` | 768 | 426 | nova |
| `objects/share_mapping.py` | 259 | 201 | nova |
| `objects/tag.py` | 85 | 54 | nova |
| `objects/task_log.py` | 89 | 64 | nova |
| `objects/trusted_certs.py` | 41 | 22 | nova |
| `objects/vcpu_model.py` | 72 | 46 | nova |
| `objects/virt_cpu_topology.py` | 45 | 24 | nova |
| `objects/virt_device_metadata.py` | 165 | 110 | nova |
| `objects/virtual_interface.py` | 338 | 232 | nova |
| `objects/volume_usage.py` | 104 | 78 | nova |
| `scheduler/__init__.py` | 22 | 7 | nova |
| `scheduler/client/__init__.py` | 0 | 0 | nova |
| `scheduler/client/query.py` | 95 | 64 | nova |
| `scheduler/client/report.py` | 2688 | 1993 | nova |
| `scheduler/filters/__init__.py` | 108 | 62 | nova |
| `scheduler/filters/affinity_filter.py` | 165 | 95 | nova |
| `scheduler/filters/aggregate_image_properties_isolation.py` | 83 | 52 | nova |
| `scheduler/filters/aggregate_instance_extra_specs.py` | 80 | 47 | nova |
| `scheduler/filters/aggregate_multitenancy_isolation.py` | 59 | 32 | nova |
| `scheduler/filters/all_hosts_filter.py` | 29 | 7 | nova |
| `scheduler/filters/compute_capabilities_filter.py` | 123 | 82 | nova |
| `scheduler/filters/compute_filter.py` | 48 | 24 | nova |
| `scheduler/filters/extra_specs_ops.py` | 67 | 39 | nova |
| `scheduler/filters/image_props_filter.py` | 129 | 84 | nova |
| `scheduler/filters/io_ops_filter.py` | 70 | 41 | nova |
| `scheduler/filters/isolated_hosts_filter.py` | 72 | 36 | nova |
| `scheduler/filters/json_filter.py` | 149 | 107 | nova |
| `scheduler/filters/metrics_filter.py` | 54 | 30 | nova |
| `scheduler/filters/num_instances_filter.py` | 68 | 39 | nova |
| `scheduler/filters/numa_topology_filter.py` | 132 | 86 | nova |
| `scheduler/filters/pci_passthrough_filter.py` | 74 | 42 | nova |
| `scheduler/filters/type_filter.py` | 41 | 16 | nova |
| `scheduler/filters/utils.py` | 82 | 52 | nova |
| `scheduler/host_manager.py` | 976 | 724 | nova |
| `scheduler/manager.py` | 838 | 511 | nova |
| `scheduler/request_filter.py` | 633 | 463 | nova |
| `scheduler/rpcapi.py` | 185 | 137 | nova |
| `scheduler/utils.py` | 1560 | 1064 | nova |
| `scheduler/weights/__init__.py` | 48 | 22 | nova |
| `scheduler/weights/affinity.py` | 76 | 42 | nova |
| `scheduler/weights/compute.py` | 36 | 18 | nova |
| `scheduler/weights/cpu.py` | 46 | 24 | nova |
| `scheduler/weights/cross_cell.py` | 63 | 37 | nova |
| `scheduler/weights/disk.py` | 42 | 21 | nova |
| `scheduler/weights/hypervisor_version.py` | 39 | 19 | nova |
| `scheduler/weights/image_props.py` | 115 | 69 | nova |
| `scheduler/weights/io_ops.py` | 44 | 23 | nova |
| `scheduler/weights/metrics.py` | 77 | 43 | nova |
| `scheduler/weights/num_instances.py` | 41 | 22 | nova |
| `scheduler/weights/pci.py` | 68 | 29 | nova |
| `scheduler/weights/ram.py` | 42 | 21 | nova |
| `service_auth.py` | 104 | 63 | nova |
| `utils.py` | 1209 | 829 | nova |
| **Total (443 files)** | **136,294** | **97,716** | nova |

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

Across all 443 KB records the component defines **9,730 symbols** in total. Source: `symbols` arrays in `.aee/kb/src/nova/**/*.json`.

| Kind | Count |
|---|---|
| method | 3,125 |
| variable | 1,420 |
| constant | 1,326 |
| field | 1,314 |
| function | 1,198 |
| class | 1,132 |
| property | 104 |
| staticmethod | 93 |
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

**hacking/**
- `hacking/checks.py` (817 LOC, 121 symbols): 50 AST-visitor functions implementing Nova pep8/hacking rules; classes `CheckForStrUnicode`, `CheckForTransAdd`, `CheckForLogLevels`, `CheckForAssertIsNoneNone` (`hacking/checks.py.json`).

**image/**
- `image/glance.py` (919 LOC, 68 symbols): classes `GlanceClientWrapper` (session management, retry logic) and `GlanceImageServiceV2` (image CRUD). Method `_verify_and_write` (CCN 17) streams image data and verifies cryptographic signatures. Function `_convert_to_v2` (CCN 13) maps legacy image metadata to Glance v2 schema. Source: `.aee/kb/src/nova/image/glance.py.json`.

**keymgr/**
- `keymgr/conf_key_mgr.py` (95 LOC, 12 symbols): class `ConfKeyManager` backed by oslo.castellan; methods `get`, `store`. Source: `.aee/kb/src/nova/keymgr/conf_key_mgr.py.json`.

**limit/**
- `limit/local.py` (162 LOC, 24 symbols): functions `enforce_api_limit` (CCN 6), `enforce_db_limit` (CCN 7); uses `oslo_limit.limit.Enforcer`. Source: `.aee/kb/src/nova/limit/local.py.json`.
- `limit/placement.py` (164 LOC, 13 symbols): function `enforce_num_instances_and_resources` (CCN 10), `_get_usage` (CCN 16); integrates with `os_resource_classes`. Source: `.aee/kb/src/nova/limit/placement.py.json`.
- `limit/utils.py` (95 LOC, 13 symbols): function `should_enforce` (CCN 12), class `LimitEnforcementWrapper`; queries Keystone via `openstack` SDK. Source: `.aee/kb/src/nova/limit/utils.py.json`.

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

All non-`nova` modules imported across the 443 KB records. Source: `dependencies` arrays in `.aee/kb/src/nova/**/*.json`.

| Package | Files importing |
|---|---|
| `oslo_utils` | 132 |
| `oslo_log` | 111 |
| `webob` | 86 |
| `copy` | 70 |
| `oslo_config` | 61 |
| `sqlalchemy` | 59 |
| `oslo_serialization` | 44 |
| `oslo_db` | 30 |
| `keystoneauth1` | 26 |
| `functools` | 25 |
| `collections` | 25 |
| `alembic` | 18 |
| `re` | 17 |
| `sys` | 15 |
| `os` | 14 |
| `oslo_messaging` | 13 |
| `typing` | 11 |
| `itertools` | 10 |
| `urllib` | 10 |
| `oslo_reports` | 10 |

Additional packages used by fewer files: `ast`, `binascii`, `castellan`, `cryptography`, `cursive`, `eventlet`, `glanceclient`, `greenlet`, `hacking`, `hashlib`, `inspect`, `jsonschema`, `netaddr`, `openstack`, `os_resource_classes`, `os_service_types`, `os_traits`, `oslo_concurrency`, `oslo_i18n`, `oslo_limit`, `oslo_middleware`, `oslo_service`, `oslo_versionedobjects`, `osc_lib`, `random`, `retrying`, `stat`, `time`, and standard-library modules. Total unique external packages: 95.

New packages added in batch 6: `glanceclient` (`image/glance.py`), `castellan` (`keymgr/conf_key_mgr.py`), `oslo_limit` (`limit/local.py`, `limit/placement.py`, `limit/utils.py`), `hacking` (`hacking/checks.py`), `cryptography` (`image/glance.py`), `cursive` (`image/glance.py`), `ast` (`hacking/checks.py`), `stat`, `time`, `random`, `inspect` (`image/glance.py`).

---

## Side Effects

1,938 side-effect records across 285+ files. Source: `sideEffects` arrays in `.aee/kb/src/nova/**/*.json`.

| Kind | Count | Primary subsystem |
|---|---|---|
| global-mutation | 1,334 | compute/ (350+), objects/ (649), api/ (175+), scheduler/ (89), conf/ (60+), limit/ (23), hacking/ (3), image/ (3) |
| network | 571 | api/ (200+), objects/ (108), network/ (80+), image/ (43), compute/ (50+), db/ (42), scheduler/ (6), accelerator/ (7) |
| file-io | 31 | cmd/ (12), image/ (3), core utils (4), compute/ (6), db/ (2), api/ (2), hacking/ (2) |
| syscall | 2 | console/ (2) |

Representative new entries (batch 6):
- `image/glance.py` — 43 `network` side effects: HTTP calls to Glance service via `GlanceClientWrapper`.
- `image/glance.py:L413, L429` — `file-io`: image data written to local file during download.
- `hacking/checks.py` — 3 `global-mutation`, 2 `file-io`: AST visitor class-state mutations and `os.path` reads.
- `limit/local.py` — 15 `global-mutation`: oslo_limit enforcer state updates.
- `limit/utils.py:L(limit/utils.py)` — 1 `network`: Keystone query via `openstack` SDK.

---

## Component Diagram

All 1,577 file edges are intra-component (`crossComponent: false`). No cross-component seams exist. Source: `.aee/link-graph.json` (batch c7012ab2).

```mermaid
graph LR
  accelerator-cyborg["cyborg.py"]
  api-auth["auth.py"]
  api-metadata-base["base.py"]
  api-metadata-handler["handler.py"]
  api-metadata-password["password.py"]
  api-metadata-vendordata["vendordata.py"]
  api-metadata-vendordata-dynamic["vendordata_dynamic.py"]
  api-metadata-vendordata-json["vendordata_json.py"]
  api-openstack-api-version-request["api_version_request.py"]
  api-openstack-common["common.py"]
  api-openstack-compute-admin-actions["admin_actions.py"]
  api-openstack-compute-admin-password["admin_password.py"]
  api-openstack-compute-agents["agents.py"]
  api-openstack-compute-aggregates["aggregates.py"]
  api-openstack-compute-assisted-volume-snapshots["assisted_volume_snapshots.py"]
  api-openstack-compute-attach-interfaces["attach_interfaces.py"]
  api-openstack-compute-availability-zone["availability_zone.py"]
  api-openstack-compute-baremetal-nodes["baremetal_nodes.py"]
  api-openstack-compute-cells["cells.py"]
  api-openstack-compute-certificates["certificates.py"]
  api-openstack-compute-cloudpipe["cloudpipe.py"]
  api-openstack-compute-console-auth-tokens["console_auth_tokens.py"]
  api-openstack-compute-console-output["console_output.py"]
  api-openstack-compute-consoles["consoles.py"]
  api-openstack-compute-create-backup["create_backup.py"]
  api-openstack-compute-deferred-delete["deferred_delete.py"]
  api-openstack-compute-evacuate["evacuate.py"]
  api-openstack-compute-extension-info["extension_info.py"]
  api-openstack-compute-fixed-ips["fixed_ips.py"]
  api-openstack-compute-flavor-access["flavor_access.py"]
  api-openstack-compute-flavors["flavors.py"]
  api-openstack-compute-flavors-extraspecs["flavors_extraspecs.py"]
  api-openstack-compute-floating-ip-dns["floating_ip_dns.py"]
  api-openstack-compute-floating-ip-pools["floating_ip_pools.py"]
  api-openstack-compute-floating-ips["floating_ips.py"]
  api-openstack-compute-floating-ips-bulk["floating_ips_bulk.py"]
  api-openstack-compute-fping["fping.py"]
  api-openstack-compute-helpers["helpers.py"]
  api-openstack-compute-hosts["hosts.py"]
  api-openstack-compute-hypervisors["hypervisors.py"]
  api-openstack-compute-image-metadata["image_metadata.py"]
  api-openstack-compute-images["images.py"]
  api-openstack-compute-init["__init__.py"]
  api-openstack-compute-instance-actions["instance_actions.py"]
  api-openstack-compute-instance-usage-audit-log["instance_usage_audit_log.py"]
  api-openstack-compute-ips["ips.py"]
  api-openstack-compute-keypairs["keypairs.py"]
  api-openstack-compute-limits["limits.py"]
  api-openstack-compute-lock-server["lock_server.py"]
  api-openstack-compute-migrate-server["migrate_server.py"]
  api-openstack-compute-migrations["migrations.py"]
  api-openstack-compute-multinic["multinic.py"]
  api-openstack-compute-networks["networks.py"]
  api-openstack-compute-networks-associate["networks_associate.py"]
  api-openstack-compute-pause-server["pause_server.py"]
  api-openstack-compute-quota-classes["quota_classes.py"]
  api-openstack-compute-quota-sets["quota_sets.py"]
  api-openstack-compute-remote-consoles["remote_consoles.py"]
  api-openstack-compute-rescue["rescue.py"]
  api-openstack-compute-routes["routes.py"]
  api-openstack-compute-schemas-admin-actions["admin_actions.py"]
  api-openstack-compute-schemas-admin-password["admin_password.py"]
  api-openstack-compute-schemas-agents["agents.py"]
  api-openstack-compute-schemas-aggregate-images["aggregate_images.py"]
  api-openstack-compute-schemas-aggregates["aggregates.py"]
  api-openstack-compute-schemas-assisted-volume-snapshots["assisted_volume_snapshots.py"]
  api-openstack-compute-schemas-attach-interfaces["attach_interfaces.py"]
  api-openstack-compute-schemas-availability-zone["availability_zone.py"]
  api-openstack-compute-schemas-baremetal-nodes["baremetal_nodes.py"]
  api-openstack-compute-schemas-cells["cells.py"]
  api-openstack-compute-schemas-certificates["certificates.py"]
  api-openstack-compute-schemas-cloudpipe["cloudpipe.py"]
  api-openstack-compute-schemas-console-auth-tokens["console_auth_tokens.py"]
  api-openstack-compute-schemas-console-output["console_output.py"]
  api-openstack-compute-schemas-consoles["consoles.py"]
  api-openstack-compute-schemas-create-backup["create_backup.py"]
  api-openstack-compute-schemas-deferred-delete["deferred_delete.py"]
  api-openstack-compute-schemas-evacuate["evacuate.py"]
  api-openstack-compute-schemas-extension-info["extension_info.py"]
  api-openstack-compute-schemas-fixed-ips["fixed_ips.py"]
  api-openstack-compute-schemas-flavor-access["flavor_access.py"]
  api-openstack-compute-schemas-flavors["flavors.py"]
  api-openstack-compute-schemas-flavors-extraspecs["flavors_extraspecs.py"]
  api-openstack-compute-schemas-floating-ip-dns["floating_ip_dns.py"]
  api-openstack-compute-schemas-floating-ip-pools["floating_ip_pools.py"]
  api-openstack-compute-schemas-floating-ips["floating_ips.py"]
  api-openstack-compute-schemas-floating-ips-bulk["floating_ips_bulk.py"]
  api-openstack-compute-schemas-fping["fping.py"]
  api-openstack-compute-schemas-hosts["hosts.py"]
  api-openstack-compute-schemas-hypervisors["hypervisors.py"]
  api-openstack-compute-schemas-image-metadata["image_metadata.py"]
  api-openstack-compute-schemas-images["images.py"]
  api-openstack-compute-schemas-instance-actions["instance_actions.py"]
  api-openstack-compute-schemas-instance-usage-audit-log["instance_usage_audit_log.py"]
  api-openstack-compute-schemas-ips["ips.py"]
  api-openstack-compute-schemas-keypairs["keypairs.py"]
  api-openstack-compute-schemas-limits["limits.py"]
  api-openstack-compute-schemas-lock-server["lock_server.py"]
  api-openstack-compute-schemas-migrate-server["migrate_server.py"]
  api-openstack-compute-schemas-migrations["migrations.py"]
  api-openstack-compute-schemas-multinic["multinic.py"]
  api-openstack-compute-schemas-networks["networks.py"]
  api-openstack-compute-schemas-networks-associate["networks_associate.py"]
  api-openstack-compute-schemas-pause-server["pause_server.py"]
  api-openstack-compute-schemas-quota-classes["quota_classes.py"]
  api-openstack-compute-schemas-quota-sets["quota_sets.py"]
  api-openstack-compute-schemas-remote-consoles["remote_consoles.py"]
  api-openstack-compute-schemas-rescue["rescue.py"]
  api-openstack-compute-schemas-security-group-default-rules["security_group_default_rules.py"]
  api-openstack-compute-schemas-security-groups["security_groups.py"]
  api-openstack-compute-schemas-server-diagnostics["server_diagnostics.py"]
  api-openstack-compute-schemas-server-external-events["server_external_events.py"]
  api-openstack-compute-schemas-server-groups["server_groups.py"]
  api-openstack-compute-schemas-server-metadata["server_metadata.py"]
  api-openstack-compute-schemas-server-migrations["server_migrations.py"]
  api-openstack-compute-schemas-server-password["server_password.py"]
  api-openstack-compute-schemas-server-shares["server_shares.py"]
  api-openstack-compute-schemas-server-tags["server_tags.py"]
  api-openstack-compute-schemas-server-topology["server_topology.py"]
  api-openstack-compute-schemas-servers["servers.py"]
  api-openstack-compute-schemas-services["services.py"]
  api-openstack-compute-schemas-shelve["shelve.py"]
  api-openstack-compute-schemas-simple-tenant-usage["simple_tenant_usage.py"]
  api-openstack-compute-schemas-snapshots["snapshots.py"]
  api-openstack-compute-schemas-suspend-server["suspend_server.py"]
  api-openstack-compute-schemas-tenant-networks["tenant_networks.py"]
  api-openstack-compute-schemas-versions["versions.py"]
  api-openstack-compute-schemas-virtual-interfaces["virtual_interfaces.py"]
  api-openstack-compute-schemas-volume-attachments["volume_attachments.py"]
  api-openstack-compute-schemas-volumes["volumes.py"]
  api-openstack-compute-security-group-default-rules["security_group_default_rules.py"]
  api-openstack-compute-security-groups["security_groups.py"]
  api-openstack-compute-server-diagnostics["server_diagnostics.py"]
  api-openstack-compute-server-external-events["server_external_events.py"]
  api-openstack-compute-server-groups["server_groups.py"]
  api-openstack-compute-server-metadata["server_metadata.py"]
  api-openstack-compute-server-migrations["server_migrations.py"]
  api-openstack-compute-server-password["server_password.py"]
  api-openstack-compute-server-shares["server_shares.py"]
  api-openstack-compute-server-tags["server_tags.py"]
  api-openstack-compute-server-topology["server_topology.py"]
  api-openstack-compute-servers["servers.py"]
  api-openstack-compute-services["services.py"]
  api-openstack-compute-shelve["shelve.py"]
  api-openstack-compute-simple-tenant-usage["simple_tenant_usage.py"]
  api-openstack-compute-snapshots["snapshots.py"]
  api-openstack-compute-suspend-server["suspend_server.py"]
  api-openstack-compute-tenant-networks["tenant_networks.py"]
  api-openstack-compute-versions["versions.py"]
  api-openstack-compute-versionsV21["versionsV21.py"]
  api-openstack-compute-views-flavors["flavors.py"]
  api-openstack-compute-views-hypervisors["hypervisors.py"]
  api-openstack-compute-views-images["images.py"]
  api-openstack-compute-views-instance-actions["instance_actions.py"]
  api-openstack-compute-views-ips["ips.py"]
  api-openstack-compute-views-keypairs["keypairs.py"]
  api-openstack-compute-views-limits["limits.py"]
  api-openstack-compute-views-migrations["migrations.py"]
  api-openstack-compute-views-server-diagnostics["server_diagnostics.py"]
  api-openstack-compute-views-server-shares["server_shares.py"]
  api-openstack-compute-views-server-tags["server_tags.py"]
  api-openstack-compute-views-servers["servers.py"]
  api-openstack-compute-views-usages["usages.py"]
  api-openstack-compute-views-versions["versions.py"]
  api-openstack-compute-virtual-interfaces["virtual_interfaces.py"]
  api-openstack-compute-volume-attachments["volume_attachments.py"]
  api-openstack-compute-volumes["volumes.py"]
  api-openstack-compute-volumes-boot["volumes_boot.py"]
  api-openstack-identity["identity.py"]
  api-openstack-init["__init__.py"]
  api-openstack-requestlog["requestlog.py"]
  api-openstack-urlmap["urlmap.py"]
  api-openstack-wsgi["wsgi.py"]
  api-openstack-wsgi-app["wsgi_app.py"]
  api-validation-extra-specs-accel["accel.py"]
  api-validation-extra-specs-aggregate-instance-extra-specs["aggregate_instance_extra_specs.py"]
  api-validation-extra-specs-base["base.py"]
  api-validation-extra-specs-capabilities["capabilities.py"]
  api-validation-extra-specs-hw["hw.py"]
  api-validation-extra-specs-hw-rng["hw_rng.py"]
  api-validation-extra-specs-hw-video["hw_video.py"]
  api-validation-extra-specs-null["null.py"]
  api-validation-extra-specs-os["os.py"]
  api-validation-extra-specs-pci-passthrough["pci_passthrough.py"]
  api-validation-extra-specs-quota["quota.py"]
  api-validation-extra-specs-resources["resources.py"]
  api-validation-extra-specs-traits["traits.py"]
  api-validation-extra-specs-validators["validators.py"]
  api-validation-extra-specs-vmware["vmware.py"]
  api-validation-init["__init__.py"]
  api-validation-parameter-types["parameter_types.py"]
  api-validation-response-types["response_types.py"]
  api-validation-validators["validators.py"]
  api-wsgi["wsgi.py"]
  cmd-baseproxy["baseproxy.py"]
  cmd-common["common.py"]
  cmd-compute["compute.py"]
  cmd-conductor["conductor.py"]
  cmd-manage["manage.py"]
  cmd-novncproxy["novncproxy.py"]
  cmd-policy["policy.py"]
  cmd-scheduler["scheduler.py"]
  cmd-serialproxy["serialproxy.py"]
  cmd-spicehtml5proxy["spicehtml5proxy.py"]
  cmd-status["status.py"]
  compute-api["api.py"]
  compute-build-results["build_results.py"]
  compute-claims["claims.py"]
  compute-flavors["flavors.py"]
  compute-instance-actions["instance_actions.py"]
  compute-instance-list["instance_list.py"]
  compute-manager["manager.py"]
  compute-migration-list["migration_list.py"]
  compute-monitors-base["base.py"]
  compute-monitors-cpu-virt-driver["virt_driver.py"]
  compute-monitors-init["__init__.py"]
  compute-multi-cell-list["multi_cell_list.py"]
  compute-pci-placement-translator["pci_placement_translator.py"]
  compute-power-state["power_state.py"]
  compute-provider-config["provider_config.py"]
  compute-provider-tree["provider_tree.py"]
  compute-resource-tracker["resource_tracker.py"]
  compute-rpcapi["rpcapi.py"]
  compute-share-management["share_management.py"]
  compute-stats["stats.py"]
  compute-task-states["task_states.py"]
  compute-utils["utils.py"]
  compute-vm-states["vm_states.py"]
  conductor-api["api.py"]
  conductor-init["__init__.py"]
  conductor-manager["manager.py"]
  conductor-rpcapi["rpcapi.py"]
  conductor-tasks-base["base.py"]
  conductor-tasks-cross-cell-migrate["cross_cell_migrate.py"]
  conductor-tasks-live-migrate["live_migrate.py"]
  conductor-tasks-migrate["migrate.py"]
  conf-api["api.py"]
  conf-availability-zone["availability_zone.py"]
  conf-base["base.py"]
  conf-cache["cache.py"]
  conf-cinder["cinder.py"]
  conf-compute["compute.py"]
  conf-conductor["conductor.py"]
  conf-configdrive["configdrive.py"]
  conf-console["console.py"]
  conf-consoleauth["consoleauth.py"]
  conf-cyborg["cyborg.py"]
  conf-database["database.py"]
  conf-devices["devices.py"]
  conf-ephemeral-storage["ephemeral_storage.py"]
  conf-glance["glance.py"]
  conf-guestfs["guestfs.py"]
  conf-imagecache["imagecache.py"]
  conf-init["__init__.py"]
  conf-ironic["ironic.py"]
  conf-key-manager["key_manager.py"]
  conf-keystone["keystone.py"]
  conf-libvirt["libvirt.py"]
  conf-manila["manila.py"]
  conf-mks["mks.py"]
  conf-netconf["netconf.py"]
  conf-neutron["neutron.py"]
  conf-notifications["notifications.py"]
  conf-novnc["novnc.py"]
  conf-paths["paths.py"]
  conf-pci["pci.py"]
  conf-placement["placement.py"]
  conf-quota["quota.py"]
  conf-rpc["rpc.py"]
  conf-scheduler["scheduler.py"]
  conf-serial-console["serial_console.py"]
  conf-service["service.py"]
  conf-service-token["service_token.py"]
  conf-servicegroup["servicegroup.py"]
  conf-spice["spice.py"]
  conf-upgrade-levels["upgrade_levels.py"]
  conf-utils["utils.py"]
  conf-vendordata["vendordata.py"]
  conf-vmware["vmware.py"]
  conf-vnc["vnc.py"]
  conf-workarounds["workarounds.py"]
  conf-wsgi["wsgi.py"]
  conf-zvm["zvm.py"]
  console-rfb-auth["auth.py"]
  console-rfb-authnone["authnone.py"]
  console-rfb-auths["auths.py"]
  console-rfb-authvencrypt["authvencrypt.py"]
  console-securityproxy-base["base.py"]
  console-securityproxy-rfb["rfb.py"]
  console-serial["serial.py"]
  console-websocketproxy["websocketproxy.py"]
  db-api-api["api.py"]
  db-api-migrations-env["env.py"]
  db-api-migrations-versions-d67eeaabee36-initial-version["d67eeaabee36_initial_version.py"]
  db-api-models["models.py"]
  db-constants["constants.py"]
  db-main-api["api.py"]
  db-main-migrations-env["env.py"]
  db-main-migrations-versions-8f2f1571d55b-initial-version["8f2f1571d55b_initial_version.py"]
  db-main-models["models.py"]
  db-migration["migration.py"]
  db-types["types.py"]
  db-utils["utils.py"]
  exception["exception.py"]
  hacking-checks["checks.py"]
  hacking-init["__init__.py"]
  i18n["i18n.py"]
  image-glance["glance.py"]
  keymgr-conf-key-mgr["conf_key_mgr.py"]
  limit-local["local.py"]
  limit-placement["placement.py"]
  limit-utils["utils.py"]
  network-constants["constants.py"]
  network-model["model.py"]
  network-neutron["neutron.py"]
  network-os-vif-util["os_vif_util.py"]
  network-security-group-api["security_group_api.py"]
  objects-aggregate["aggregate.py"]
  objects-base["base.py"]
  objects-block-device["block_device.py"]
  objects-build-request["build_request.py"]
  objects-cell-mapping["cell_mapping.py"]
  objects-compute-node["compute_node.py"]
  objects-console-auth-token["console_auth_token.py"]
  objects-diagnostics["diagnostics.py"]
  objects-ec2["ec2.py"]
  objects-external-event["external_event.py"]
  objects-fields["fields.py"]
  objects-flavor["flavor.py"]
  objects-host-mapping["host_mapping.py"]
  objects-hv-spec["hv_spec.py"]
  objects-image-meta["image_meta.py"]
  objects-init["__init__.py"]
  objects-instance["instance.py"]
  objects-instance-action["instance_action.py"]
  objects-instance-fault["instance_fault.py"]
  objects-instance-group["instance_group.py"]
  objects-instance-info-cache["instance_info_cache.py"]
  objects-instance-mapping["instance_mapping.py"]
  objects-instance-numa["instance_numa.py"]
  objects-instance-pci-requests["instance_pci_requests.py"]
  objects-keypair["keypair.py"]
  objects-migrate-data["migrate_data.py"]
  objects-migration["migration.py"]
  objects-migration-context["migration_context.py"]
  objects-monitor-metric["monitor_metric.py"]
  objects-network-metadata["network_metadata.py"]
  objects-network-request["network_request.py"]
  objects-numa["numa.py"]
  objects-pci-device["pci_device.py"]
  objects-pci-device-pool["pci_device_pool.py"]
  objects-quotas["quotas.py"]
  objects-request-spec["request_spec.py"]
  objects-resource["resource.py"]
  objects-security-group["security_group.py"]
  objects-selection["selection.py"]
  objects-service["service.py"]
  objects-share-mapping["share_mapping.py"]
  objects-tag["tag.py"]
  objects-task-log["task_log.py"]
  objects-trusted-certs["trusted_certs.py"]
  objects-vcpu-model["vcpu_model.py"]
  objects-virt-cpu-topology["virt_cpu_topology.py"]
  objects-virt-device-metadata["virt_device_metadata.py"]
  objects-virtual-interface["virtual_interface.py"]
  objects-volume-usage["volume_usage.py"]
  scheduler-client-query["query.py"]
  scheduler-client-report["report.py"]
  scheduler-filters-affinity-filter["affinity_filter.py"]
  scheduler-filters-aggregate-image-properties-isolation["aggregate_image_properties_isolation.py"]
  scheduler-filters-aggregate-instance-extra-specs["aggregate_instance_extra_specs.py"]
  scheduler-filters-aggregate-multitenancy-isolation["aggregate_multitenancy_isolation.py"]
  scheduler-filters-all-hosts-filter["all_hosts_filter.py"]
  scheduler-filters-compute-capabilities-filter["compute_capabilities_filter.py"]
  scheduler-filters-compute-filter["compute_filter.py"]
  scheduler-filters-extra-specs-ops["extra_specs_ops.py"]
  scheduler-filters-image-props-filter["image_props_filter.py"]
  scheduler-filters-init["__init__.py"]
  scheduler-filters-io-ops-filter["io_ops_filter.py"]
  scheduler-filters-isolated-hosts-filter["isolated_hosts_filter.py"]
  scheduler-filters-json-filter["json_filter.py"]
  scheduler-filters-metrics-filter["metrics_filter.py"]
  scheduler-filters-num-instances-filter["num_instances_filter.py"]
  scheduler-filters-numa-topology-filter["numa_topology_filter.py"]
  scheduler-filters-pci-passthrough-filter["pci_passthrough_filter.py"]
  scheduler-filters-type-filter["type_filter.py"]
  scheduler-filters-utils["utils.py"]
  scheduler-host-manager["host_manager.py"]
  scheduler-manager["manager.py"]
  scheduler-request-filter["request_filter.py"]
  scheduler-rpcapi["rpcapi.py"]
  scheduler-utils["utils.py"]
  scheduler-weights-affinity["affinity.py"]
  scheduler-weights-compute["compute.py"]
  scheduler-weights-cpu["cpu.py"]
  scheduler-weights-cross-cell["cross_cell.py"]
  scheduler-weights-disk["disk.py"]
  scheduler-weights-hypervisor-version["hypervisor_version.py"]
  scheduler-weights-image-props["image_props.py"]
  scheduler-weights-init["__init__.py"]
  scheduler-weights-io-ops["io_ops.py"]
  scheduler-weights-metrics["metrics.py"]
  scheduler-weights-num-instances["num_instances.py"]
  scheduler-weights-pci["pci.py"]
  scheduler-weights-ram["ram.py"]
  service-auth["service_auth.py"]
  utils["utils.py"]
  accelerator-cyborg --> exception
  accelerator-cyborg --> i18n
  accelerator-cyborg --> objects-init
  accelerator-cyborg --> scheduler-utils
  accelerator-cyborg --> service-auth
  accelerator-cyborg --> utils
  api-auth --> api-wsgi
  api-auth --> conf-init
  api-auth --> i18n
  api-metadata-base --> api-metadata-password
  api-metadata-base --> api-metadata-vendordata-dynamic
  api-metadata-base --> api-metadata-vendordata-json
  api-metadata-base --> conf-init
  api-metadata-base --> exception
  api-metadata-base --> network-neutron
  api-metadata-base --> network-security-group-api
  api-metadata-base --> objects-init
  api-metadata-base --> objects-virt-device-metadata
  api-metadata-base --> utils
  api-metadata-handler --> api-metadata-base
  api-metadata-handler --> api-wsgi
  api-metadata-handler --> conf-init
  api-metadata-handler --> exception
  api-metadata-handler --> i18n
  api-metadata-handler --> network-neutron
  api-metadata-password --> conf-init
  api-metadata-password --> exception
  api-metadata-password --> i18n
  api-metadata-password --> objects-init
  api-metadata-password --> utils
  api-metadata-vendordata-dynamic --> api-metadata-vendordata
  api-metadata-vendordata-dynamic --> conf-init
  api-metadata-vendordata-dynamic --> service-auth
  api-metadata-vendordata-json --> api-metadata-vendordata
  api-metadata-vendordata-json --> conf-init
  api-openstack-api-version-request --> api-openstack-wsgi
  api-openstack-api-version-request --> exception
  api-openstack-api-version-request --> i18n
  api-openstack-common --> api-openstack-api-version-request
  api-openstack-common --> compute-task-states
  api-openstack-common --> compute-vm-states
  api-openstack-common --> conf-init
  api-openstack-common --> exception
  api-openstack-common --> i18n
  api-openstack-common --> objects-init
  api-openstack-common --> utils
  api-openstack-compute-admin-actions --> api-openstack-common
  api-openstack-compute-admin-actions --> api-openstack-compute-schemas-admin-actions
  api-openstack-compute-admin-actions --> api-openstack-wsgi
  api-openstack-compute-admin-actions --> api-validation-init
  api-openstack-compute-admin-actions --> compute-api
  api-openstack-compute-admin-actions --> compute-instance-actions
  api-openstack-compute-admin-actions --> compute-vm-states
  api-openstack-compute-admin-actions --> exception
  api-openstack-compute-admin-actions --> objects-init
  api-openstack-compute-admin-password --> api-openstack-common
  api-openstack-compute-admin-password --> api-openstack-compute-schemas-admin-password
  api-openstack-compute-admin-password --> api-openstack-wsgi
  api-openstack-compute-admin-password --> api-validation-init
  api-openstack-compute-admin-password --> compute-api
  api-openstack-compute-admin-password --> exception
  api-openstack-compute-admin-password --> i18n
  api-openstack-compute-agents --> api-openstack-compute-schemas-agents
  api-openstack-compute-agents --> api-openstack-wsgi
  api-openstack-compute-agents --> api-validation-init
  api-openstack-compute-aggregates --> api-openstack-api-version-request
  api-openstack-compute-aggregates --> api-openstack-common
  api-openstack-compute-aggregates --> api-openstack-compute-schemas-aggregate-images
  api-openstack-compute-aggregates --> api-openstack-compute-schemas-aggregates
  api-openstack-compute-aggregates --> api-openstack-wsgi
  api-openstack-compute-aggregates --> api-validation-init
  api-openstack-compute-aggregates --> compute-api
  api-openstack-compute-aggregates --> conductor-api
  api-openstack-compute-aggregates --> exception
  api-openstack-compute-aggregates --> i18n
  api-openstack-compute-aggregates --> utils
  api-openstack-compute-assisted-volume-snapshots --> api-openstack-compute-schemas-assisted-volume-snapshots
  api-openstack-compute-assisted-volume-snapshots --> api-openstack-wsgi
  api-openstack-compute-assisted-volume-snapshots --> api-validation-init
  api-openstack-compute-assisted-volume-snapshots --> compute-api
  api-openstack-compute-assisted-volume-snapshots --> exception
  api-openstack-compute-attach-interfaces --> api-openstack-api-version-request
  api-openstack-compute-attach-interfaces --> api-openstack-common
  api-openstack-compute-attach-interfaces --> api-openstack-compute-schemas-attach-interfaces
  api-openstack-compute-attach-interfaces --> api-openstack-wsgi
  api-openstack-compute-attach-interfaces --> api-validation-init
  api-openstack-compute-attach-interfaces --> compute-api
  api-openstack-compute-attach-interfaces --> exception
  api-openstack-compute-attach-interfaces --> i18n
  api-openstack-compute-attach-interfaces --> network-neutron
  api-openstack-compute-attach-interfaces --> objects-init
  api-openstack-compute-availability-zone --> api-openstack-compute-schemas-availability-zone
  api-openstack-compute-availability-zone --> api-openstack-wsgi
  api-openstack-compute-availability-zone --> api-validation-init
  api-openstack-compute-availability-zone --> compute-api
  api-openstack-compute-availability-zone --> conf-init
  api-openstack-compute-baremetal-nodes --> api-openstack-api-version-request
  api-openstack-compute-baremetal-nodes --> api-openstack-compute-schemas-baremetal-nodes
  api-openstack-compute-baremetal-nodes --> api-openstack-wsgi
  api-openstack-compute-baremetal-nodes --> api-validation-init
  api-openstack-compute-baremetal-nodes --> conf-init
  api-openstack-compute-baremetal-nodes --> i18n
  api-openstack-compute-baremetal-nodes --> utils
  api-openstack-compute-cells --> api-openstack-compute-schemas-cells
  api-openstack-compute-cells --> api-openstack-wsgi
  api-openstack-compute-cells --> api-validation-init
  api-openstack-compute-certificates --> api-openstack-compute-schemas-certificates
  api-openstack-compute-certificates --> api-openstack-wsgi
  api-openstack-compute-certificates --> api-validation-init
  api-openstack-compute-cloudpipe --> api-openstack-compute-schemas-cloudpipe
  api-openstack-compute-cloudpipe --> api-openstack-wsgi
  api-openstack-compute-cloudpipe --> api-validation-init
  api-openstack-compute-console-auth-tokens --> api-openstack-api-version-request
  api-openstack-compute-console-auth-tokens --> api-openstack-compute-schemas-console-auth-tokens
  api-openstack-compute-console-auth-tokens --> api-openstack-wsgi
  api-openstack-compute-console-auth-tokens --> api-validation-init
  api-openstack-compute-console-auth-tokens --> conf-init
  api-openstack-compute-console-auth-tokens --> i18n
  api-openstack-compute-console-auth-tokens --> objects-init
  api-openstack-compute-console-output --> api-openstack-common
  api-openstack-compute-console-output --> api-openstack-compute-schemas-console-output
  api-openstack-compute-console-output --> api-openstack-wsgi
  api-openstack-compute-console-output --> api-validation-init
  api-openstack-compute-console-output --> compute-api
  api-openstack-compute-console-output --> exception
  api-openstack-compute-consoles --> api-openstack-compute-schemas-consoles
  api-openstack-compute-consoles --> api-openstack-wsgi
  api-openstack-compute-consoles --> api-validation-init
  api-openstack-compute-create-backup --> api-openstack-api-version-request
  api-openstack-compute-create-backup --> api-openstack-common
  api-openstack-compute-create-backup --> api-openstack-compute-schemas-create-backup
  api-openstack-compute-create-backup --> api-openstack-wsgi
  api-openstack-compute-create-backup --> api-validation-init
  api-openstack-compute-create-backup --> compute-api
  api-openstack-compute-create-backup --> exception
  api-openstack-compute-deferred-delete --> api-openstack-common
  api-openstack-compute-deferred-delete --> api-openstack-compute-schemas-deferred-delete
  api-openstack-compute-deferred-delete --> api-openstack-wsgi
  api-openstack-compute-deferred-delete --> api-validation-init
  api-openstack-compute-deferred-delete --> compute-api
  api-openstack-compute-deferred-delete --> exception
  api-openstack-compute-evacuate --> api-openstack-api-version-request
  api-openstack-compute-evacuate --> api-openstack-common
  api-openstack-compute-evacuate --> api-openstack-compute-schemas-evacuate
  api-openstack-compute-evacuate --> api-openstack-wsgi
  api-openstack-compute-evacuate --> api-validation-init
  api-openstack-compute-evacuate --> compute-api
  api-openstack-compute-evacuate --> compute-vm-states
  api-openstack-compute-evacuate --> conf-init
  api-openstack-compute-evacuate --> exception
  api-openstack-compute-evacuate --> i18n
  api-openstack-compute-evacuate --> objects-init
  api-openstack-compute-evacuate --> utils
  api-openstack-compute-extension-info --> api-openstack-compute-schemas-extension-info
  api-openstack-compute-extension-info --> api-openstack-wsgi
  api-openstack-compute-extension-info --> api-validation-init
  api-openstack-compute-fixed-ips --> api-openstack-compute-schemas-fixed-ips
  api-openstack-compute-fixed-ips --> api-openstack-wsgi
  api-openstack-compute-fixed-ips --> api-validation-init
  api-openstack-compute-flavor-access --> api-openstack-api-version-request
  api-openstack-compute-flavor-access --> api-openstack-common
  api-openstack-compute-flavor-access --> api-openstack-compute-schemas-flavor-access
  api-openstack-compute-flavor-access --> api-openstack-identity
  api-openstack-compute-flavor-access --> api-openstack-wsgi
  api-openstack-compute-flavor-access --> api-validation-init
  api-openstack-compute-flavor-access --> exception
  api-openstack-compute-flavor-access --> i18n
  api-openstack-compute-flavors --> api-openstack-api-version-request
  api-openstack-compute-flavors --> api-openstack-common
  api-openstack-compute-flavors --> api-openstack-compute-schemas-flavors
  api-openstack-compute-flavors --> api-openstack-compute-views-flavors
  api-openstack-compute-flavors --> api-openstack-wsgi
  api-openstack-compute-flavors --> api-validation-init
  api-openstack-compute-flavors --> compute-flavors
  api-openstack-compute-flavors --> exception
  api-openstack-compute-flavors --> i18n
  api-openstack-compute-flavors --> objects-init
  api-openstack-compute-flavors --> utils
  api-openstack-compute-flavors-extraspecs --> api-openstack-api-version-request
  api-openstack-compute-flavors-extraspecs --> api-openstack-common
  api-openstack-compute-flavors-extraspecs --> api-openstack-compute-schemas-flavors-extraspecs
  api-openstack-compute-flavors-extraspecs --> api-openstack-wsgi
  api-openstack-compute-flavors-extraspecs --> api-validation-extra-specs-validators
  api-openstack-compute-flavors-extraspecs --> api-validation-init
  api-openstack-compute-flavors-extraspecs --> exception
  api-openstack-compute-flavors-extraspecs --> i18n
  api-openstack-compute-flavors-extraspecs --> utils
  api-openstack-compute-floating-ip-dns --> api-openstack-compute-schemas-floating-ip-dns
  api-openstack-compute-floating-ip-dns --> api-openstack-wsgi
  api-openstack-compute-floating-ip-dns --> api-validation-init
  api-openstack-compute-floating-ip-pools --> api-openstack-api-version-request
  api-openstack-compute-floating-ip-pools --> api-openstack-compute-schemas-floating-ip-pools
  api-openstack-compute-floating-ip-pools --> api-openstack-wsgi
  api-openstack-compute-floating-ip-pools --> api-validation-init
  api-openstack-compute-floating-ip-pools --> network-neutron
  api-openstack-compute-floating-ips --> api-openstack-api-version-request
  api-openstack-compute-floating-ips --> api-openstack-common
  api-openstack-compute-floating-ips --> api-openstack-compute-schemas-floating-ips
  api-openstack-compute-floating-ips --> api-openstack-wsgi
  api-openstack-compute-floating-ips --> api-validation-init
  api-openstack-compute-floating-ips --> compute-api
  api-openstack-compute-floating-ips --> exception
  api-openstack-compute-floating-ips --> i18n
  api-openstack-compute-floating-ips --> network-neutron
  api-openstack-compute-floating-ips-bulk --> api-openstack-compute-schemas-floating-ips-bulk
  api-openstack-compute-floating-ips-bulk --> api-openstack-wsgi
  api-openstack-compute-floating-ips-bulk --> api-validation-init
  api-openstack-compute-fping --> api-openstack-compute-schemas-fping
  api-openstack-compute-fping --> api-openstack-wsgi
  api-openstack-compute-fping --> api-validation-init
  api-openstack-compute-helpers --> i18n
  api-openstack-compute-hosts --> api-openstack-common
  api-openstack-compute-hosts --> api-openstack-compute-schemas-hosts
  api-openstack-compute-hosts --> api-openstack-wsgi
  api-openstack-compute-hosts --> api-validation-init
  api-openstack-compute-hosts --> compute-api
  api-openstack-compute-hosts --> exception
  api-openstack-compute-hosts --> objects-init
  api-openstack-compute-hypervisors --> api-openstack-api-version-request
  api-openstack-compute-hypervisors --> api-openstack-common
  api-openstack-compute-hypervisors --> api-openstack-compute-schemas-hypervisors
  api-openstack-compute-hypervisors --> api-openstack-compute-views-hypervisors
  api-openstack-compute-hypervisors --> api-openstack-wsgi
  api-openstack-compute-hypervisors --> api-validation-init
  api-openstack-compute-hypervisors --> compute-api
  api-openstack-compute-hypervisors --> exception
  api-openstack-compute-hypervisors --> i18n
  api-openstack-compute-hypervisors --> utils
  api-openstack-compute-image-metadata --> api-openstack-common
  api-openstack-compute-image-metadata --> api-openstack-compute-schemas-image-metadata
  api-openstack-compute-image-metadata --> api-openstack-wsgi
  api-openstack-compute-image-metadata --> api-validation-init
  api-openstack-compute-image-metadata --> exception
  api-openstack-compute-image-metadata --> i18n
  api-openstack-compute-image-metadata --> image-glance
  api-openstack-compute-images --> api-openstack-api-version-request
  api-openstack-compute-images --> api-openstack-common
  api-openstack-compute-images --> api-openstack-compute-schemas-images
  api-openstack-compute-images --> api-openstack-compute-views-images
  api-openstack-compute-images --> api-openstack-wsgi
  api-openstack-compute-images --> api-validation-init
  api-openstack-compute-images --> exception
  api-openstack-compute-images --> i18n
  api-openstack-compute-images --> image-glance
  api-openstack-compute-init --> api-openstack-compute-routes
  api-openstack-compute-instance-actions --> api-openstack-api-version-request
  api-openstack-compute-instance-actions --> api-openstack-common
  api-openstack-compute-instance-actions --> api-openstack-compute-schemas-instance-actions
  api-openstack-compute-instance-actions --> api-openstack-compute-views-instance-actions
  api-openstack-compute-instance-actions --> api-openstack-wsgi
  api-openstack-compute-instance-actions --> api-validation-init
  api-openstack-compute-instance-actions --> compute-api
  api-openstack-compute-instance-actions --> exception
  api-openstack-compute-instance-actions --> i18n
  api-openstack-compute-instance-actions --> utils
  api-openstack-compute-instance-usage-audit-log --> api-openstack-compute-schemas-instance-usage-audit-log
  api-openstack-compute-instance-usage-audit-log --> api-openstack-wsgi
  api-openstack-compute-instance-usage-audit-log --> api-validation-init
  api-openstack-compute-instance-usage-audit-log --> compute-api
  api-openstack-compute-instance-usage-audit-log --> compute-rpcapi
  api-openstack-compute-instance-usage-audit-log --> i18n
  api-openstack-compute-instance-usage-audit-log --> utils
  api-openstack-compute-ips --> api-openstack-common
  api-openstack-compute-ips --> api-openstack-compute-schemas-ips
  api-openstack-compute-ips --> api-openstack-compute-views-ips
  api-openstack-compute-ips --> api-openstack-wsgi
  api-openstack-compute-ips --> api-validation-init
  api-openstack-compute-ips --> compute-api
  api-openstack-compute-ips --> i18n
  api-openstack-compute-keypairs --> api-openstack-api-version-request
  api-openstack-compute-keypairs --> api-openstack-common
  api-openstack-compute-keypairs --> api-openstack-compute-schemas-keypairs
  api-openstack-compute-keypairs --> api-openstack-compute-views-keypairs
  api-openstack-compute-keypairs --> api-openstack-wsgi
  api-openstack-compute-keypairs --> api-validation-init
  api-openstack-compute-keypairs --> compute-api
  api-openstack-compute-keypairs --> exception
  api-openstack-compute-keypairs --> objects-keypair
  api-openstack-compute-limits --> api-openstack-api-version-request
  api-openstack-compute-limits --> api-openstack-compute-schemas-limits
  api-openstack-compute-limits --> api-openstack-compute-views-limits
  api-openstack-compute-limits --> api-openstack-wsgi
  api-openstack-compute-limits --> api-validation-init
  api-openstack-compute-lock-server --> api-openstack-api-version-request
  api-openstack-compute-lock-server --> api-openstack-common
  api-openstack-compute-lock-server --> api-openstack-compute-schemas-lock-server
  api-openstack-compute-lock-server --> api-openstack-wsgi
  api-openstack-compute-lock-server --> api-validation-init
  api-openstack-compute-lock-server --> compute-api
  api-openstack-compute-migrate-server --> api-openstack-api-version-request
  api-openstack-compute-migrate-server --> api-openstack-common
  api-openstack-compute-migrate-server --> api-openstack-compute-schemas-migrate-server
  api-openstack-compute-migrate-server --> api-openstack-wsgi
  api-openstack-compute-migrate-server --> api-validation-init
  api-openstack-compute-migrate-server --> compute-api
  api-openstack-compute-migrate-server --> exception
  api-openstack-compute-migrate-server --> i18n
  api-openstack-compute-migrations --> api-openstack-api-version-request
  api-openstack-compute-migrations --> api-openstack-common
  api-openstack-compute-migrations --> api-openstack-compute-schemas-migrations
  api-openstack-compute-migrations --> api-openstack-compute-views-migrations
  api-openstack-compute-migrations --> api-openstack-wsgi
  api-openstack-compute-migrations --> api-validation-init
  api-openstack-compute-migrations --> compute-api
  api-openstack-compute-migrations --> exception
  api-openstack-compute-migrations --> i18n
  api-openstack-compute-migrations --> objects-base
  api-openstack-compute-migrations --> objects-fields
  api-openstack-compute-multinic --> api-openstack-common
  api-openstack-compute-multinic --> api-openstack-compute-schemas-multinic
  api-openstack-compute-multinic --> api-openstack-wsgi
  api-openstack-compute-multinic --> api-validation-init
  api-openstack-compute-multinic --> compute-api
  api-openstack-compute-multinic --> exception
  api-openstack-compute-networks --> api-openstack-api-version-request
  api-openstack-compute-networks --> api-openstack-compute-schemas-networks
  api-openstack-compute-networks --> api-openstack-wsgi
  api-openstack-compute-networks --> api-validation-init
  api-openstack-compute-networks --> exception
  api-openstack-compute-networks --> i18n
  api-openstack-compute-networks --> network-neutron
  api-openstack-compute-networks-associate --> api-openstack-compute-schemas-networks-associate
  api-openstack-compute-networks-associate --> api-openstack-wsgi
  api-openstack-compute-networks-associate --> api-validation-init
  api-openstack-compute-pause-server --> api-openstack-common
  api-openstack-compute-pause-server --> api-openstack-compute-schemas-pause-server
  api-openstack-compute-pause-server --> api-openstack-wsgi
  api-openstack-compute-pause-server --> api-validation-init
  api-openstack-compute-pause-server --> compute-api
  api-openstack-compute-pause-server --> exception
  api-openstack-compute-quota-classes --> api-openstack-api-version-request
  api-openstack-compute-quota-classes --> api-openstack-compute-schemas-quota-classes
  api-openstack-compute-quota-classes --> api-openstack-wsgi
  api-openstack-compute-quota-classes --> api-validation-init
  api-openstack-compute-quota-classes --> exception
  api-openstack-compute-quota-classes --> limit-utils
  api-openstack-compute-quota-classes --> objects-init
  api-openstack-compute-quota-classes --> utils
  api-openstack-compute-quota-sets --> api-openstack-api-version-request
  api-openstack-compute-quota-sets --> api-openstack-compute-schemas-quota-sets
  api-openstack-compute-quota-sets --> api-openstack-identity
  api-openstack-compute-quota-sets --> api-openstack-wsgi
  api-openstack-compute-quota-sets --> api-validation-init
  api-openstack-compute-quota-sets --> conf-init
  api-openstack-compute-quota-sets --> exception
  api-openstack-compute-quota-sets --> i18n
  api-openstack-compute-quota-sets --> limit-utils
  api-openstack-compute-quota-sets --> objects-init
  api-openstack-compute-remote-consoles --> api-openstack-common
  api-openstack-compute-remote-consoles --> api-openstack-compute-schemas-remote-consoles
  api-openstack-compute-remote-consoles --> api-openstack-wsgi
  api-openstack-compute-remote-consoles --> api-validation-init
  api-openstack-compute-remote-consoles --> compute-api
  api-openstack-compute-remote-consoles --> exception
  api-openstack-compute-rescue --> api-openstack-api-version-request
  api-openstack-compute-rescue --> api-openstack-common
  api-openstack-compute-rescue --> api-openstack-compute-schemas-rescue
  api-openstack-compute-rescue --> api-openstack-wsgi
  api-openstack-compute-rescue --> api-validation-init
  api-openstack-compute-rescue --> compute-api
  api-openstack-compute-rescue --> conf-init
  api-openstack-compute-rescue --> exception
  api-openstack-compute-rescue --> utils
  api-openstack-compute-routes --> api-openstack-compute-admin-actions
  api-openstack-compute-routes --> api-openstack-compute-admin-password
  api-openstack-compute-routes --> api-openstack-compute-agents
  api-openstack-compute-routes --> api-openstack-compute-aggregates
  api-openstack-compute-routes --> api-openstack-compute-assisted-volume-snapshots
  api-openstack-compute-routes --> api-openstack-compute-attach-interfaces
  api-openstack-compute-routes --> api-openstack-compute-availability-zone
  api-openstack-compute-routes --> api-openstack-compute-baremetal-nodes
  api-openstack-compute-routes --> api-openstack-compute-cells
  api-openstack-compute-routes --> api-openstack-compute-certificates
  api-openstack-compute-routes --> api-openstack-compute-cloudpipe
  api-openstack-compute-routes --> api-openstack-compute-console-auth-tokens
  api-openstack-compute-routes --> api-openstack-compute-console-output
  api-openstack-compute-routes --> api-openstack-compute-consoles
  api-openstack-compute-routes --> api-openstack-compute-create-backup
  api-openstack-compute-routes --> api-openstack-compute-deferred-delete
  api-openstack-compute-routes --> api-openstack-compute-evacuate
  api-openstack-compute-routes --> api-openstack-compute-extension-info
  api-openstack-compute-routes --> api-openstack-compute-fixed-ips
  api-openstack-compute-routes --> api-openstack-compute-flavor-access
  api-openstack-compute-routes --> api-openstack-compute-flavors
  api-openstack-compute-routes --> api-openstack-compute-flavors-extraspecs
  api-openstack-compute-routes --> api-openstack-compute-floating-ip-dns
  api-openstack-compute-routes --> api-openstack-compute-floating-ip-pools
  api-openstack-compute-routes --> api-openstack-compute-floating-ips
  api-openstack-compute-routes --> api-openstack-compute-floating-ips-bulk
  api-openstack-compute-routes --> api-openstack-compute-fping
  api-openstack-compute-routes --> api-openstack-compute-hosts
  api-openstack-compute-routes --> api-openstack-compute-hypervisors
  api-openstack-compute-routes --> api-openstack-compute-image-metadata
  api-openstack-compute-routes --> api-openstack-compute-images
  api-openstack-compute-routes --> api-openstack-compute-instance-actions
  api-openstack-compute-routes --> api-openstack-compute-instance-usage-audit-log
  api-openstack-compute-routes --> api-openstack-compute-ips
  api-openstack-compute-routes --> api-openstack-compute-keypairs
  api-openstack-compute-routes --> api-openstack-compute-limits
  api-openstack-compute-routes --> api-openstack-compute-lock-server
  api-openstack-compute-routes --> api-openstack-compute-migrate-server
  api-openstack-compute-routes --> api-openstack-compute-migrations
  api-openstack-compute-routes --> api-openstack-compute-multinic
  api-openstack-compute-routes --> api-openstack-compute-networks
  api-openstack-compute-routes --> api-openstack-compute-networks-associate
  api-openstack-compute-routes --> api-openstack-compute-pause-server
  api-openstack-compute-routes --> api-openstack-compute-quota-classes
  api-openstack-compute-routes --> api-openstack-compute-quota-sets
  api-openstack-compute-routes --> api-openstack-compute-remote-consoles
  api-openstack-compute-routes --> api-openstack-compute-rescue
  api-openstack-compute-routes --> api-openstack-compute-security-group-default-rules
  api-openstack-compute-routes --> api-openstack-compute-security-groups
  api-openstack-compute-routes --> api-openstack-compute-server-diagnostics
  api-openstack-compute-routes --> api-openstack-compute-server-external-events
  api-openstack-compute-routes --> api-openstack-compute-server-groups
  api-openstack-compute-routes --> api-openstack-compute-server-metadata
  api-openstack-compute-routes --> api-openstack-compute-server-migrations
  api-openstack-compute-routes --> api-openstack-compute-server-password
  api-openstack-compute-routes --> api-openstack-compute-server-shares
  api-openstack-compute-routes --> api-openstack-compute-server-tags
  api-openstack-compute-routes --> api-openstack-compute-server-topology
  api-openstack-compute-routes --> api-openstack-compute-servers
  api-openstack-compute-routes --> api-openstack-compute-services
  api-openstack-compute-routes --> api-openstack-compute-shelve
  api-openstack-compute-routes --> api-openstack-compute-simple-tenant-usage
  api-openstack-compute-routes --> api-openstack-compute-snapshots
  api-openstack-compute-routes --> api-openstack-compute-suspend-server
  api-openstack-compute-routes --> api-openstack-compute-tenant-networks
  api-openstack-compute-routes --> api-openstack-compute-versionsV21
  api-openstack-compute-routes --> api-openstack-compute-virtual-interfaces
  api-openstack-compute-routes --> api-openstack-compute-volume-attachments
  api-openstack-compute-routes --> api-openstack-compute-volumes
  api-openstack-compute-routes --> api-openstack-compute-volumes-boot
  api-openstack-compute-routes --> api-openstack-init
  api-openstack-compute-routes --> api-openstack-wsgi
  api-openstack-compute-routes --> api-wsgi
  api-openstack-compute-schemas-admin-password --> api-validation-parameter-types
  api-openstack-compute-schemas-aggregate-images --> api-validation-parameter-types
  api-openstack-compute-schemas-aggregates --> api-validation-parameter-types
  api-openstack-compute-schemas-assisted-volume-snapshots --> api-validation-parameter-types
  api-openstack-compute-schemas-attach-interfaces --> api-validation-parameter-types
  api-openstack-compute-schemas-create-backup --> api-validation-parameter-types
  api-openstack-compute-schemas-evacuate --> api-validation-parameter-types
  api-openstack-compute-schemas-flavor-access --> api-validation-parameter-types
  api-openstack-compute-schemas-flavors --> api-validation-parameter-types
  api-openstack-compute-schemas-flavors-extraspecs --> api-validation-parameter-types
  api-openstack-compute-schemas-floating-ips --> api-validation-parameter-types
  api-openstack-compute-schemas-hosts --> api-validation-parameter-types
  api-openstack-compute-schemas-hypervisors --> api-validation-parameter-types
  api-openstack-compute-schemas-hypervisors --> api-validation-response-types
  api-openstack-compute-schemas-image-metadata --> api-validation-parameter-types
  api-openstack-compute-schemas-image-metadata --> api-validation-response-types
  api-openstack-compute-schemas-images --> api-validation-parameter-types
  api-openstack-compute-schemas-images --> api-validation-response-types
  api-openstack-compute-schemas-instance-actions --> api-validation-parameter-types
  api-openstack-compute-schemas-instance-actions --> api-validation-response-types
  api-openstack-compute-schemas-keypairs --> api-validation-parameter-types
  api-openstack-compute-schemas-keypairs --> api-validation-response-types
  api-openstack-compute-schemas-limits --> api-validation-parameter-types
  api-openstack-compute-schemas-migrate-server --> api-validation-parameter-types
  api-openstack-compute-schemas-migrations --> api-validation-parameter-types
  api-openstack-compute-schemas-migrations --> api-validation-response-types
  api-openstack-compute-schemas-multinic --> api-validation-parameter-types
  api-openstack-compute-schemas-quota-classes --> api-openstack-compute-schemas-quota-sets
  api-openstack-compute-schemas-quota-sets --> api-validation-parameter-types
  api-openstack-compute-schemas-rescue --> api-validation-parameter-types
  api-openstack-compute-schemas-security-groups --> api-validation-parameter-types
  api-openstack-compute-schemas-server-external-events --> objects-external-event
  api-openstack-compute-schemas-server-groups --> api-validation-parameter-types
  api-openstack-compute-schemas-server-metadata --> api-validation-parameter-types
  api-openstack-compute-schemas-server-metadata --> api-validation-response-types
  api-openstack-compute-schemas-server-migrations --> api-validation-parameter-types
  api-openstack-compute-schemas-server-shares --> api-validation-parameter-types
  api-openstack-compute-schemas-server-tags --> api-validation-parameter-types
  api-openstack-compute-schemas-server-tags --> objects-instance
  api-openstack-compute-schemas-servers --> api-validation-parameter-types
  api-openstack-compute-schemas-servers --> api-validation-response-types
  api-openstack-compute-schemas-servers --> objects-instance
  api-openstack-compute-schemas-services --> api-validation-parameter-types
  api-openstack-compute-schemas-shelve --> api-validation-parameter-types
  api-openstack-compute-schemas-simple-tenant-usage --> api-validation-parameter-types
  api-openstack-compute-schemas-simple-tenant-usage --> api-validation-response-types
  api-openstack-compute-schemas-simple-tenant-usage --> compute-vm-states
  api-openstack-compute-schemas-snapshots --> api-validation-parameter-types
  api-openstack-compute-schemas-volume-attachments --> api-validation-parameter-types
  api-openstack-compute-schemas-volumes --> api-validation-parameter-types
  api-openstack-compute-schemas-volumes --> api-validation-response-types
  api-openstack-compute-security-group-default-rules --> api-openstack-compute-schemas-security-group-default-rules
  api-openstack-compute-security-group-default-rules --> api-openstack-wsgi
  api-openstack-compute-security-group-default-rules --> api-validation-init
  api-openstack-compute-security-groups --> api-openstack-api-version-request
  api-openstack-compute-security-groups --> api-openstack-common
  api-openstack-compute-security-groups --> api-openstack-compute-schemas-security-groups
  api-openstack-compute-security-groups --> api-openstack-wsgi
  api-openstack-compute-security-groups --> api-validation-init
  api-openstack-compute-security-groups --> compute-api
  api-openstack-compute-security-groups --> exception
  api-openstack-compute-security-groups --> i18n
  api-openstack-compute-security-groups --> network-security-group-api
  api-openstack-compute-server-diagnostics --> api-openstack-api-version-request
  api-openstack-compute-server-diagnostics --> api-openstack-common
  api-openstack-compute-server-diagnostics --> api-openstack-compute-schemas-server-diagnostics
  api-openstack-compute-server-diagnostics --> api-openstack-compute-views-server-diagnostics
  api-openstack-compute-server-diagnostics --> api-openstack-wsgi
  api-openstack-compute-server-diagnostics --> api-validation-init
  api-openstack-compute-server-diagnostics --> compute-api
  api-openstack-compute-server-diagnostics --> exception
  api-openstack-compute-server-external-events --> api-openstack-compute-schemas-server-external-events
  api-openstack-compute-server-external-events --> api-openstack-wsgi
  api-openstack-compute-server-external-events --> api-validation-init
  api-openstack-compute-server-external-events --> compute-api
  api-openstack-compute-server-external-events --> objects-init
  api-openstack-compute-server-groups --> api-openstack-api-version-request
  api-openstack-compute-server-groups --> api-openstack-common
  api-openstack-compute-server-groups --> api-openstack-compute-schemas-server-groups
  api-openstack-compute-server-groups --> api-openstack-wsgi
  api-openstack-compute-server-groups --> api-validation-init
  api-openstack-compute-server-groups --> conf-init
  api-openstack-compute-server-groups --> exception
  api-openstack-compute-server-groups --> i18n
  api-openstack-compute-server-groups --> limit-local
  api-openstack-compute-server-groups --> objects-init
  api-openstack-compute-server-groups --> objects-service
  api-openstack-compute-server-metadata --> api-openstack-common
  api-openstack-compute-server-metadata --> api-openstack-compute-schemas-server-metadata
  api-openstack-compute-server-metadata --> api-openstack-wsgi
  api-openstack-compute-server-metadata --> api-validation-init
  api-openstack-compute-server-metadata --> compute-api
  api-openstack-compute-server-metadata --> exception
  api-openstack-compute-server-metadata --> i18n
  api-openstack-compute-server-migrations --> api-openstack-api-version-request
  api-openstack-compute-server-migrations --> api-openstack-common
  api-openstack-compute-server-migrations --> api-openstack-compute-schemas-server-migrations
  api-openstack-compute-server-migrations --> api-openstack-wsgi
  api-openstack-compute-server-migrations --> api-validation-init
  api-openstack-compute-server-migrations --> compute-api
  api-openstack-compute-server-migrations --> exception
  api-openstack-compute-server-migrations --> i18n
  api-openstack-compute-server-password --> api-metadata-password
  api-openstack-compute-server-password --> api-openstack-common
  api-openstack-compute-server-password --> api-openstack-compute-schemas-server-password
  api-openstack-compute-server-password --> api-openstack-wsgi
  api-openstack-compute-server-password --> api-validation-init
  api-openstack-compute-server-password --> compute-api
  api-openstack-compute-server-shares --> api-openstack-common
  api-openstack-compute-server-shares --> api-openstack-compute-schemas-server-shares
  api-openstack-compute-server-shares --> api-openstack-compute-views-server-shares
  api-openstack-compute-server-shares --> api-openstack-wsgi
  api-openstack-compute-server-shares --> api-validation-init
  api-openstack-compute-server-shares --> compute-api
  api-openstack-compute-server-shares --> compute-vm-states
  api-openstack-compute-server-shares --> exception
  api-openstack-compute-server-shares --> objects-fields
  api-openstack-compute-server-shares --> objects-init
  api-openstack-compute-server-tags --> api-openstack-common
  api-openstack-compute-server-tags --> api-openstack-compute-schemas-server-tags
  api-openstack-compute-server-tags --> api-openstack-compute-views-server-tags
  api-openstack-compute-server-tags --> api-openstack-wsgi
  api-openstack-compute-server-tags --> api-validation-init
  api-openstack-compute-server-tags --> api-validation-parameter-types
  api-openstack-compute-server-tags --> compute-api
  api-openstack-compute-server-tags --> compute-vm-states
  api-openstack-compute-server-tags --> exception
  api-openstack-compute-server-tags --> i18n
  api-openstack-compute-server-tags --> objects-init
  api-openstack-compute-server-topology --> api-openstack-common
  api-openstack-compute-server-topology --> api-openstack-compute-schemas-server-topology
  api-openstack-compute-server-topology --> api-openstack-wsgi
  api-openstack-compute-server-topology --> api-validation-init
  api-openstack-compute-server-topology --> compute-api
  api-openstack-compute-servers --> api-openstack-api-version-request
  api-openstack-compute-servers --> api-openstack-common
  api-openstack-compute-servers --> api-openstack-compute-helpers
  api-openstack-compute-servers --> api-openstack-compute-schemas-servers
  api-openstack-compute-servers --> api-openstack-compute-views-servers
  api-openstack-compute-servers --> api-openstack-wsgi
  api-openstack-compute-servers --> api-validation-init
  api-openstack-compute-servers --> compute-api
  api-openstack-compute-servers --> compute-flavors
  api-openstack-compute-servers --> compute-utils
  api-openstack-compute-servers --> conf-init
  api-openstack-compute-servers --> exception
  api-openstack-compute-servers --> i18n
  api-openstack-compute-servers --> image-glance
  api-openstack-compute-servers --> objects-init
  api-openstack-compute-servers --> utils
  api-openstack-compute-services --> api-openstack-api-version-request
  api-openstack-compute-services --> api-openstack-compute-schemas-services
  api-openstack-compute-services --> api-openstack-wsgi
  api-openstack-compute-services --> api-validation-init
  api-openstack-compute-services --> compute-api
  api-openstack-compute-services --> exception
  api-openstack-compute-services --> i18n
  api-openstack-compute-services --> objects-init
  api-openstack-compute-services --> scheduler-client-report
  api-openstack-compute-services --> utils
  api-openstack-compute-shelve --> api-openstack-api-version-request
  api-openstack-compute-shelve --> api-openstack-common
  api-openstack-compute-shelve --> api-openstack-compute-schemas-shelve
  api-openstack-compute-shelve --> api-openstack-wsgi
  api-openstack-compute-shelve --> api-validation-init
  api-openstack-compute-shelve --> compute-api
  api-openstack-compute-shelve --> exception
  api-openstack-compute-simple-tenant-usage --> api-openstack-api-version-request
  api-openstack-compute-simple-tenant-usage --> api-openstack-common
  api-openstack-compute-simple-tenant-usage --> api-openstack-compute-schemas-simple-tenant-usage
  api-openstack-compute-simple-tenant-usage --> api-openstack-compute-views-usages
  api-openstack-compute-simple-tenant-usage --> api-openstack-wsgi
  api-openstack-compute-simple-tenant-usage --> api-validation-init
  api-openstack-compute-simple-tenant-usage --> conf-init
  api-openstack-compute-simple-tenant-usage --> exception
  api-openstack-compute-simple-tenant-usage --> i18n
  api-openstack-compute-simple-tenant-usage --> objects-init
  api-openstack-compute-snapshots --> api-openstack-api-version-request
  api-openstack-compute-snapshots --> api-openstack-common
  api-openstack-compute-snapshots --> api-openstack-compute-schemas-snapshots
  api-openstack-compute-snapshots --> api-openstack-wsgi
  api-openstack-compute-snapshots --> api-validation-init
  api-openstack-compute-snapshots --> exception
  api-openstack-compute-suspend-server --> api-openstack-common
  api-openstack-compute-suspend-server --> api-openstack-compute-schemas-suspend-server
  api-openstack-compute-suspend-server --> api-openstack-wsgi
  api-openstack-compute-suspend-server --> api-validation-init
  api-openstack-compute-suspend-server --> compute-api
  api-openstack-compute-suspend-server --> exception
  api-openstack-compute-tenant-networks --> api-openstack-api-version-request
  api-openstack-compute-tenant-networks --> api-openstack-compute-schemas-tenant-networks
  api-openstack-compute-tenant-networks --> api-openstack-wsgi
  api-openstack-compute-tenant-networks --> api-validation-init
  api-openstack-compute-tenant-networks --> conf-init
  api-openstack-compute-tenant-networks --> exception
  api-openstack-compute-tenant-networks --> i18n
  api-openstack-compute-tenant-networks --> network-neutron
  api-openstack-compute-versions --> api-openstack-api-version-request
  api-openstack-compute-versions --> api-openstack-compute-schemas-versions
  api-openstack-compute-versions --> api-openstack-compute-views-versions
  api-openstack-compute-versions --> api-openstack-wsgi
  api-openstack-compute-versions --> api-validation-init
  api-openstack-compute-versionsV21 --> api-openstack-compute-schemas-versions
  api-openstack-compute-versionsV21 --> api-openstack-compute-versions
  api-openstack-compute-versionsV21 --> api-openstack-compute-views-versions
  api-openstack-compute-versionsV21 --> api-openstack-wsgi
  api-openstack-compute-versionsV21 --> api-validation-init
  api-openstack-compute-views-flavors --> api-openstack-api-version-request
  api-openstack-compute-views-flavors --> api-openstack-common
  api-openstack-compute-views-hypervisors --> api-openstack-common
  api-openstack-compute-views-images --> api-openstack-common
  api-openstack-compute-views-images --> image-glance
  api-openstack-compute-views-images --> utils
  api-openstack-compute-views-instance-actions --> api-openstack-common
  api-openstack-compute-views-ips --> api-openstack-common
  api-openstack-compute-views-keypairs --> api-openstack-common
  api-openstack-compute-views-migrations --> api-openstack-common
  api-openstack-compute-views-server-diagnostics --> api-openstack-common
  api-openstack-compute-views-server-shares --> api-openstack-common
  api-openstack-compute-views-server-shares --> api-openstack-compute-views-servers
  api-openstack-compute-views-server-tags --> api-openstack-common
  api-openstack-compute-views-server-tags --> api-openstack-compute-views-servers
  api-openstack-compute-views-servers --> api-openstack-api-version-request
  api-openstack-compute-views-servers --> api-openstack-common
  api-openstack-compute-views-servers --> api-openstack-compute-views-flavors
  api-openstack-compute-views-servers --> api-openstack-compute-views-images
  api-openstack-compute-views-servers --> api-openstack-compute-views-ips
  api-openstack-compute-views-servers --> compute-api
  api-openstack-compute-views-servers --> compute-vm-states
  api-openstack-compute-views-servers --> exception
  api-openstack-compute-views-servers --> network-security-group-api
  api-openstack-compute-views-servers --> objects-fields
  api-openstack-compute-views-servers --> objects-init
  api-openstack-compute-views-servers --> objects-virtual-interface
  api-openstack-compute-views-servers --> utils
  api-openstack-compute-views-usages --> api-openstack-common
  api-openstack-compute-views-versions --> api-openstack-common
  api-openstack-compute-virtual-interfaces --> api-openstack-compute-schemas-virtual-interfaces
  api-openstack-compute-virtual-interfaces --> api-openstack-wsgi
  api-openstack-compute-virtual-interfaces --> api-validation-init
  api-openstack-compute-volume-attachments --> api-openstack-api-version-request
  api-openstack-compute-volume-attachments --> api-openstack-common
  api-openstack-compute-volume-attachments --> api-openstack-compute-schemas-volume-attachments
  api-openstack-compute-volume-attachments --> api-openstack-wsgi
  api-openstack-compute-volume-attachments --> api-validation-init
  api-openstack-compute-volume-attachments --> compute-api
  api-openstack-compute-volume-attachments --> compute-vm-states
  api-openstack-compute-volume-attachments --> exception
  api-openstack-compute-volume-attachments --> i18n
  api-openstack-compute-volume-attachments --> objects-init
  api-openstack-compute-volumes --> api-openstack-api-version-request
  api-openstack-compute-volumes --> api-openstack-common
  api-openstack-compute-volumes --> api-openstack-compute-schemas-volumes
  api-openstack-compute-volumes --> api-openstack-wsgi
  api-openstack-compute-volumes --> api-validation-init
  api-openstack-compute-volumes --> exception
  api-openstack-compute-volumes-boot --> api-openstack-compute-schemas-servers
  api-openstack-compute-volumes-boot --> api-openstack-compute-servers
  api-openstack-compute-volumes-boot --> api-openstack-wsgi
  api-openstack-compute-volumes-boot --> api-validation-init
  api-openstack-identity --> i18n
  api-openstack-identity --> utils
  api-openstack-init --> api-openstack-wsgi
  api-openstack-init --> api-wsgi
  api-openstack-init --> conf-init
  api-openstack-init --> i18n
  api-openstack-requestlog --> api-openstack-wsgi
  api-openstack-requestlog --> api-wsgi
  api-openstack-requestlog --> conf-init
  api-openstack-urlmap --> api-openstack-wsgi
  api-openstack-wsgi --> api-openstack-api-version-request
  api-openstack-wsgi --> api-wsgi
  api-openstack-wsgi --> exception
  api-openstack-wsgi --> i18n
  api-openstack-wsgi-app --> exception
  api-openstack-wsgi-app --> objects-init
  api-openstack-wsgi-app --> utils
  api-validation-extra-specs-accel --> api-validation-extra-specs-base
  api-validation-extra-specs-aggregate-instance-extra-specs --> api-validation-extra-specs-base
  api-validation-extra-specs-base --> exception
  api-validation-extra-specs-capabilities --> api-validation-extra-specs-base
  api-validation-extra-specs-hw --> api-validation-extra-specs-base
  api-validation-extra-specs-hw --> objects-fields
  api-validation-extra-specs-hw-rng --> api-validation-extra-specs-base
  api-validation-extra-specs-hw-video --> api-validation-extra-specs-base
  api-validation-extra-specs-null --> api-validation-extra-specs-base
  api-validation-extra-specs-os --> api-validation-extra-specs-base
  api-validation-extra-specs-pci-passthrough --> api-validation-extra-specs-base
  api-validation-extra-specs-quota --> api-validation-extra-specs-base
  api-validation-extra-specs-resources --> api-validation-extra-specs-base
  api-validation-extra-specs-traits --> api-validation-extra-specs-base
  api-validation-extra-specs-validators --> api-validation-extra-specs-base
  api-validation-extra-specs-validators --> exception
  api-validation-extra-specs-vmware --> api-validation-extra-specs-base
  api-validation-init --> api-openstack-api-version-request
  api-validation-init --> api-openstack-wsgi
  api-validation-init --> api-validation-validators
  api-validation-init --> conf-init
  api-validation-init --> exception
  api-validation-init --> i18n
  api-validation-parameter-types --> i18n
  api-validation-parameter-types --> objects-tag
  api-validation-validators --> api-validation-parameter-types
  api-validation-validators --> exception
  api-validation-validators --> i18n
  api-wsgi --> conf-init
  api-wsgi --> exception
  api-wsgi --> i18n
  cmd-baseproxy --> conf-init
  cmd-baseproxy --> conf-novnc
  cmd-baseproxy --> console-websocketproxy
  cmd-baseproxy --> objects-init
  cmd-common --> conf-init
  cmd-common --> db-main-api
  cmd-common --> exception
  cmd-common --> i18n
  cmd-compute --> compute-rpcapi
  cmd-compute --> conductor-rpcapi
  cmd-compute --> conf-init
  cmd-compute --> db-main-api
  cmd-compute --> objects-base
  cmd-compute --> objects-init
  cmd-compute --> utils
  cmd-conductor --> conductor-rpcapi
  cmd-conductor --> conf-init
  cmd-conductor --> objects-init
  cmd-manage --> cmd-common
  cmd-manage --> compute-api
  cmd-manage --> compute-instance-actions
  cmd-manage --> compute-instance-list
  cmd-manage --> compute-rpcapi
  cmd-manage --> conf-init
  cmd-manage --> conf-utils
  cmd-manage --> db-constants
  cmd-manage --> db-main-api
  cmd-manage --> db-migration
  cmd-manage --> exception
  cmd-manage --> i18n
  cmd-manage --> limit-local
  cmd-manage --> limit-placement
  cmd-manage --> network-constants
  cmd-manage --> network-neutron
  cmd-manage --> objects-block-device
  cmd-manage --> objects-compute-node
  cmd-manage --> objects-fields
  cmd-manage --> objects-host-mapping
  cmd-manage --> objects-init
  cmd-manage --> objects-instance
  cmd-manage --> objects-instance-mapping
  cmd-manage --> objects-pci-device
  cmd-manage --> objects-quotas
  cmd-manage --> objects-virtual-interface
  cmd-manage --> scheduler-client-report
  cmd-manage --> scheduler-utils
  cmd-manage --> utils
  cmd-novncproxy --> cmd-baseproxy
  cmd-novncproxy --> conf-init
  cmd-novncproxy --> conf-vnc
  cmd-novncproxy --> console-securityproxy-rfb
  cmd-policy --> cmd-common
  cmd-policy --> conf-init
  cmd-policy --> db-main-api
  cmd-policy --> exception
  cmd-policy --> i18n
  cmd-policy --> utils
  cmd-scheduler --> conf-init
  cmd-scheduler --> objects-init
  cmd-scheduler --> scheduler-rpcapi
  cmd-serialproxy --> cmd-baseproxy
  cmd-serialproxy --> conf-init
  cmd-serialproxy --> conf-serial-console
  cmd-spicehtml5proxy --> cmd-baseproxy
  cmd-spicehtml5proxy --> conf-init
  cmd-spicehtml5proxy --> conf-spice
  cmd-status --> cmd-common
  cmd-status --> conf-init
  cmd-status --> db-api-api
  cmd-status --> db-main-api
  cmd-status --> exception
  cmd-status --> i18n
  cmd-status --> objects-cell-mapping
  cmd-status --> objects-image-meta
  cmd-status --> objects-instance
  cmd-status --> utils
  compute-api --> accelerator-cyborg
  compute-api --> compute-flavors
  compute-api --> compute-instance-actions
  compute-api --> compute-instance-list
  compute-api --> compute-migration-list
  compute-api --> compute-power-state
  compute-api --> compute-rpcapi
  compute-api --> compute-task-states
  compute-api --> compute-utils
  compute-api --> compute-vm-states
  compute-api --> conductor-init
  compute-api --> conf-init
  compute-api --> db-api-api
  compute-api --> db-main-api
  compute-api --> exception
  compute-api --> i18n
  compute-api --> image-glance
  compute-api --> limit-local
  compute-api --> limit-placement
  compute-api --> limit-utils
  compute-api --> network-constants
  compute-api --> network-model
  compute-api --> network-neutron
  compute-api --> network-security-group-api
  compute-api --> objects-block-device
  compute-api --> objects-external-event
  compute-api --> objects-fields
  compute-api --> objects-image-meta
  compute-api --> objects-init
  compute-api --> objects-keypair
  compute-api --> objects-quotas
  compute-api --> objects-service
  compute-api --> scheduler-client-query
  compute-api --> scheduler-client-report
  compute-api --> scheduler-utils
  compute-api --> utils
  compute-claims --> exception
  compute-claims --> i18n
  compute-claims --> objects-init
  compute-flavors --> conf-init
  compute-flavors --> db-constants
  compute-flavors --> exception
  compute-flavors --> i18n
  compute-flavors --> objects-init
  compute-flavors --> utils
  compute-instance-list --> compute-multi-cell-list
  compute-instance-list --> conf-init
  compute-instance-list --> db-main-api
  compute-instance-list --> exception
  compute-instance-list --> objects-init
  compute-instance-list --> objects-instance
  compute-manager --> accelerator-cyborg
  compute-manager --> compute-api
  compute-manager --> compute-build-results
  compute-manager --> compute-claims
  compute-manager --> compute-power-state
  compute-manager --> compute-resource-tracker
  compute-manager --> compute-rpcapi
  compute-manager --> compute-share-management
  compute-manager --> compute-task-states
  compute-manager --> compute-utils
  compute-manager --> compute-vm-states
  compute-manager --> conductor-init
  compute-manager --> conf-init
  compute-manager --> exception
  compute-manager --> i18n
  compute-manager --> image-glance
  compute-manager --> network-model
  compute-manager --> network-neutron
  compute-manager --> objects-base
  compute-manager --> objects-external-event
  compute-manager --> objects-fields
  compute-manager --> objects-init
  compute-manager --> objects-instance
  compute-manager --> objects-migrate-data
  compute-manager --> objects-service
  compute-manager --> scheduler-client-query
  compute-manager --> scheduler-client-report
  compute-manager --> scheduler-utils
  compute-manager --> utils
  compute-migration-list --> compute-multi-cell-list
  compute-migration-list --> db-main-api
  compute-migration-list --> exception
  compute-migration-list --> objects-base
  compute-migration-list --> objects-init
  compute-monitors-base --> objects-fields
  compute-monitors-cpu-virt-driver --> compute-monitors-base
  compute-monitors-cpu-virt-driver --> conf-init
  compute-monitors-cpu-virt-driver --> exception
  compute-monitors-cpu-virt-driver --> objects-init
  compute-monitors-init --> conf-init
  compute-multi-cell-list --> conf-init
  compute-multi-cell-list --> exception
  compute-multi-cell-list --> i18n
  compute-pci-placement-translator --> compute-provider-tree
  compute-pci-placement-translator --> conf-init
  compute-pci-placement-translator --> exception
  compute-pci-placement-translator --> i18n
  compute-pci-placement-translator --> objects-fields
  compute-pci-placement-translator --> objects-pci-device
  compute-power-state --> objects-fields
  compute-provider-config --> exception
  compute-provider-config --> i18n
  compute-provider-tree --> i18n
  compute-resource-tracker --> compute-claims
  compute-resource-tracker --> compute-monitors-init
  compute-resource-tracker --> compute-pci-placement-translator
  compute-resource-tracker --> compute-provider-config
  compute-resource-tracker --> compute-stats
  compute-resource-tracker --> compute-task-states
  compute-resource-tracker --> compute-utils
  compute-resource-tracker --> compute-vm-states
  compute-resource-tracker --> conf-init
  compute-resource-tracker --> exception
  compute-resource-tracker --> i18n
  compute-resource-tracker --> objects-base
  compute-resource-tracker --> objects-fields
  compute-resource-tracker --> objects-init
  compute-resource-tracker --> objects-migration
  compute-resource-tracker --> scheduler-client-report
  compute-resource-tracker --> utils
  compute-rpcapi --> conf-init
  compute-rpcapi --> exception
  compute-rpcapi --> i18n
  compute-rpcapi --> objects-base
  compute-rpcapi --> objects-init
  compute-rpcapi --> objects-service
  compute-share-management --> compute-utils
  compute-share-management --> compute-vm-states
  compute-share-management --> conf-init
  compute-share-management --> exception
  compute-share-management --> objects-fields
  compute-share-management --> objects-init
  compute-share-management --> utils
  compute-stats --> compute-task-states
  compute-stats --> compute-vm-states
  compute-stats --> i18n
  compute-task-states --> objects-fields
  compute-utils --> accelerator-cyborg
  compute-utils --> compute-power-state
  compute-utils --> compute-task-states
  compute-utils --> compute-vm-states
  compute-utils --> conf-init
  compute-utils --> exception
  compute-utils --> objects-fields
  compute-utils --> objects-init
  compute-utils --> utils
  compute-vm-states --> compute-task-states
  compute-vm-states --> objects-fields
  conductor-api --> conductor-rpcapi
  conductor-api --> conf-init
  conductor-api --> image-glance
  conductor-init --> conductor-api
  conductor-manager --> accelerator-cyborg
  conductor-manager --> compute-instance-actions
  conductor-manager --> compute-rpcapi
  conductor-manager --> compute-task-states
  conductor-manager --> compute-utils
  conductor-manager --> compute-vm-states
  conductor-manager --> conductor-tasks-cross-cell-migrate
  conductor-manager --> conductor-tasks-live-migrate
  conductor-manager --> conductor-tasks-migrate
  conductor-manager --> exception
  conductor-manager --> i18n
  conductor-manager --> image-glance
  conductor-manager --> limit-placement
  conductor-manager --> limit-utils
  conductor-manager --> network-neutron
  conductor-manager --> objects-base
  conductor-manager --> objects-fields
  conductor-manager --> objects-init
  conductor-manager --> scheduler-client-query
  conductor-manager --> scheduler-client-report
  conductor-manager --> scheduler-utils
  conductor-manager --> utils
  conductor-rpcapi --> conf-init
  conductor-rpcapi --> exception
  conductor-rpcapi --> i18n
  conductor-rpcapi --> objects-base
  conductor-tasks-cross-cell-migrate --> compute-instance-actions
  conductor-tasks-cross-cell-migrate --> compute-power-state
  conductor-tasks-cross-cell-migrate --> compute-task-states
  conductor-tasks-cross-cell-migrate --> compute-utils
  conductor-tasks-cross-cell-migrate --> compute-vm-states
  conductor-tasks-cross-cell-migrate --> conductor-tasks-base
  conductor-tasks-cross-cell-migrate --> conf-init
  conductor-tasks-cross-cell-migrate --> exception
  conductor-tasks-cross-cell-migrate --> i18n
  conductor-tasks-cross-cell-migrate --> image-glance
  conductor-tasks-cross-cell-migrate --> network-constants
  conductor-tasks-cross-cell-migrate --> network-neutron
  conductor-tasks-cross-cell-migrate --> objects-fields
  conductor-tasks-cross-cell-migrate --> objects-init
  conductor-tasks-cross-cell-migrate --> scheduler-utils
  conductor-tasks-live-migrate --> compute-power-state
  conductor-tasks-live-migrate --> compute-utils
  conductor-tasks-live-migrate --> conductor-tasks-base
  conductor-tasks-live-migrate --> conductor-tasks-migrate
  conductor-tasks-live-migrate --> conf-init
  conductor-tasks-live-migrate --> exception
  conductor-tasks-live-migrate --> i18n
  conductor-tasks-live-migrate --> network-neutron
  conductor-tasks-live-migrate --> objects-fields
  conductor-tasks-live-migrate --> objects-init
  conductor-tasks-live-migrate --> scheduler-utils
  conductor-tasks-migrate --> compute-utils
  conductor-tasks-migrate --> conductor-tasks-base
  conductor-tasks-migrate --> conductor-tasks-cross-cell-migrate
  conductor-tasks-migrate --> exception
  conductor-tasks-migrate --> i18n
  conductor-tasks-migrate --> objects-init
  conductor-tasks-migrate --> scheduler-client-report
  conductor-tasks-migrate --> scheduler-utils
  conf-compute --> conf-paths
  conf-cyborg --> conf-utils
  conf-glance --> conf-utils
  conf-init --> conf-api
  conf-init --> conf-availability-zone
  conf-init --> conf-base
  conf-init --> conf-cache
  conf-init --> conf-cinder
  conf-init --> conf-compute
  conf-init --> conf-conductor
  conf-init --> conf-configdrive
  conf-init --> conf-console
  conf-init --> conf-consoleauth
  conf-init --> conf-cyborg
  conf-init --> conf-database
  conf-init --> conf-devices
  conf-init --> conf-ephemeral-storage
  conf-init --> conf-glance
  conf-init --> conf-guestfs
  conf-init --> conf-imagecache
  conf-init --> conf-ironic
  conf-init --> conf-key-manager
  conf-init --> conf-keystone
  conf-init --> conf-libvirt
  conf-init --> conf-manila
  conf-init --> conf-mks
  conf-init --> conf-netconf
  conf-init --> conf-neutron
  conf-init --> conf-notifications
  conf-init --> conf-novnc
  conf-init --> conf-paths
  conf-init --> conf-pci
  conf-init --> conf-placement
  conf-init --> conf-quota
  conf-init --> conf-rpc
  conf-init --> conf-scheduler
  conf-init --> conf-serial-console
  conf-init --> conf-service
  conf-init --> conf-service-token
  conf-init --> conf-servicegroup
  conf-init --> conf-spice
  conf-init --> conf-upgrade-levels
  conf-init --> conf-vendordata
  conf-init --> conf-vmware
  conf-init --> conf-vnc
  conf-init --> conf-workarounds
  conf-init --> conf-wsgi
  conf-init --> conf-zvm
  conf-ironic --> conf-utils
  conf-keystone --> conf-utils
  conf-libvirt --> conf-paths
  conf-manila --> conf-utils
  conf-neutron --> conf-utils
  conf-placement --> conf-utils
  conf-zvm --> conf-paths
  console-rfb-authnone --> console-rfb-auth
  console-rfb-auths --> console-rfb-authnone
  console-rfb-auths --> console-rfb-authvencrypt
  console-rfb-auths --> exception
  console-rfb-authvencrypt --> console-rfb-auth
  console-rfb-authvencrypt --> exception
  console-rfb-authvencrypt --> i18n
  console-securityproxy-rfb --> console-rfb-auth
  console-securityproxy-rfb --> console-rfb-auths
  console-securityproxy-rfb --> console-securityproxy-base
  console-securityproxy-rfb --> exception
  console-securityproxy-rfb --> i18n
  console-serial --> conf-init
  console-serial --> exception
  console-serial --> utils
  console-websocketproxy --> compute-rpcapi
  console-websocketproxy --> conf-init
  console-websocketproxy --> exception
  console-websocketproxy --> i18n
  console-websocketproxy --> objects-init
  console-websocketproxy --> utils
  db-api-api --> conf-init
  db-api-migrations-env --> db-api-models
  db-api-migrations-versions-d67eeaabee36-initial-version --> db-types
  db-api-migrations-versions-d67eeaabee36-initial-version --> objects-keypair
  db-api-models --> db-types
  db-main-api --> compute-task-states
  db-main-api --> compute-vm-states
  db-main-api --> conf-init
  db-main-api --> db-main-models
  db-main-api --> db-utils
  db-main-api --> exception
  db-main-api --> i18n
  db-main-api --> objects-init
  db-main-migrations-env --> db-main-models
  db-main-migrations-versions-8f2f1571d55b-initial-version --> db-types
  db-main-migrations-versions-8f2f1571d55b-initial-version --> objects-keypair
  db-main-models --> db-types
  db-migration --> db-api-api
  db-migration --> db-main-api
  db-migration --> exception
  db-types --> utils
  db-utils --> exception
  db-utils --> i18n
  exception --> i18n
  hacking-checks --> hacking-init
  image-glance --> conf-init
  image-glance --> exception
  image-glance --> objects-fields
  image-glance --> objects-init
  image-glance --> service-auth
  image-glance --> utils
  keymgr-conf-key-mgr --> conf-init
  keymgr-conf-key-mgr --> exception
  keymgr-conf-key-mgr --> i18n
  limit-local --> conf-init
  limit-local --> exception
  limit-local --> limit-utils
  limit-local --> objects-init
  limit-placement --> conf-init
  limit-placement --> exception
  limit-placement --> limit-utils
  limit-placement --> objects-init
  limit-placement --> scheduler-client-report
  limit-placement --> scheduler-utils
  limit-utils --> conf-init
  limit-utils --> utils
  network-model --> exception
  network-model --> i18n
  network-neutron --> accelerator-cyborg
  network-neutron --> compute-utils
  network-neutron --> conf-init
  network-neutron --> exception
  network-neutron --> i18n
  network-neutron --> network-constants
  network-neutron --> network-model
  network-neutron --> objects-fields
  network-neutron --> objects-init
  network-neutron --> service-auth
  network-neutron --> utils
  network-os-vif-util --> exception
  network-os-vif-util --> i18n
  network-os-vif-util --> network-model
  network-security-group-api --> exception
  network-security-group-api --> i18n
  network-security-group-api --> network-neutron
  network-security-group-api --> objects-security-group
  objects-aggregate --> compute-utils
  objects-aggregate --> db-api-api
  objects-aggregate --> db-api-models
  objects-aggregate --> exception
  objects-aggregate --> i18n
  objects-aggregate --> objects-base
  objects-aggregate --> objects-fields
  objects-aggregate --> objects-init
  objects-base --> conductor-init
  objects-base --> exception
  objects-base --> objects-fields
  objects-base --> objects-init
  objects-base --> utils
  objects-block-device --> db-main-api
  objects-block-device --> db-main-models
  objects-block-device --> exception
  objects-block-device --> i18n
  objects-block-device --> objects-base
  objects-block-device --> objects-fields
  objects-block-device --> objects-init
  objects-build-request --> db-api-api
  objects-build-request --> db-api-models
  objects-build-request --> db-utils
  objects-build-request --> exception
  objects-build-request --> objects-base
  objects-build-request --> objects-fields
  objects-build-request --> objects-init
  objects-cell-mapping --> conf-init
  objects-cell-mapping --> db-api-api
  objects-cell-mapping --> db-api-models
  objects-cell-mapping --> exception
  objects-cell-mapping --> objects-base
  objects-cell-mapping --> objects-fields
  objects-compute-node --> conf-init
  objects-compute-node --> db-main-api
  objects-compute-node --> db-main-models
  objects-compute-node --> exception
  objects-compute-node --> objects-base
  objects-compute-node --> objects-fields
  objects-compute-node --> objects-init
  objects-compute-node --> objects-pci-device-pool
  objects-console-auth-token --> db-main-api
  objects-console-auth-token --> exception
  objects-console-auth-token --> i18n
  objects-console-auth-token --> objects-base
  objects-console-auth-token --> objects-fields
  objects-console-auth-token --> utils
  objects-diagnostics --> objects-base
  objects-diagnostics --> objects-fields
  objects-ec2 --> db-main-api
  objects-ec2 --> exception
  objects-ec2 --> objects-base
  objects-ec2 --> objects-fields
  objects-external-event --> objects-base
  objects-external-event --> objects-fields
  objects-fields --> exception
  objects-fields --> i18n
  objects-fields --> network-model
  objects-flavor --> conf-init
  objects-flavor --> db-api-api
  objects-flavor --> db-api-models
  objects-flavor --> db-utils
  objects-flavor --> exception
  objects-flavor --> objects-base
  objects-flavor --> objects-fields
  objects-host-mapping --> db-api-api
  objects-host-mapping --> db-api-models
  objects-host-mapping --> exception
  objects-host-mapping --> i18n
  objects-host-mapping --> objects-base
  objects-host-mapping --> objects-cell-mapping
  objects-host-mapping --> objects-fields
  objects-host-mapping --> objects-init
  objects-hv-spec --> objects-base
  objects-hv-spec --> objects-fields
  objects-image-meta --> network-model
  objects-image-meta --> objects-base
  objects-image-meta --> objects-fields
  objects-image-meta --> objects-init
  objects-image-meta --> utils
  objects-init --> objects-aggregate
  objects-init --> objects-block-device
  objects-init --> objects-build-request
  objects-init --> objects-cell-mapping
  objects-init --> objects-compute-node
  objects-init --> objects-console-auth-token
  objects-init --> objects-diagnostics
  objects-init --> objects-ec2
  objects-init --> objects-external-event
  objects-init --> objects-flavor
  objects-init --> objects-host-mapping
  objects-init --> objects-hv-spec
  objects-init --> objects-image-meta
  objects-init --> objects-instance
  objects-init --> objects-instance-action
  objects-init --> objects-instance-fault
  objects-init --> objects-instance-group
  objects-init --> objects-instance-info-cache
  objects-init --> objects-instance-mapping
  objects-init --> objects-instance-numa
  objects-init --> objects-instance-pci-requests
  objects-init --> objects-keypair
  objects-init --> objects-migrate-data
  objects-init --> objects-migration
  objects-init --> objects-migration-context
  objects-init --> objects-monitor-metric
  objects-init --> objects-network-metadata
  objects-init --> objects-network-request
  objects-init --> objects-numa
  objects-init --> objects-pci-device
  objects-init --> objects-pci-device-pool
  objects-init --> objects-quotas
  objects-init --> objects-request-spec
  objects-init --> objects-resource
  objects-init --> objects-security-group
  objects-init --> objects-selection
  objects-init --> objects-service
  objects-init --> objects-share-mapping
  objects-init --> objects-tag
  objects-init --> objects-task-log
  objects-init --> objects-trusted-certs
  objects-init --> objects-vcpu-model
  objects-init --> objects-virt-cpu-topology
  objects-init --> objects-virt-device-metadata
  objects-init --> objects-virtual-interface
  objects-init --> objects-volume-usage
  objects-instance --> compute-task-states
  objects-instance --> compute-vm-states
  objects-instance --> db-main-api
  objects-instance --> db-main-models
  objects-instance --> exception
  objects-instance --> i18n
  objects-instance --> network-model
  objects-instance --> objects-base
  objects-instance --> objects-fields
  objects-instance --> objects-init
  objects-instance --> utils
  objects-instance-action --> compute-utils
  objects-instance-action --> db-main-api
  objects-instance-action --> exception
  objects-instance-action --> objects-base
  objects-instance-action --> objects-fields
  objects-instance-fault --> db-main-api
  objects-instance-fault --> exception
  objects-instance-fault --> objects-base
  objects-instance-fault --> objects-fields
  objects-instance-group --> compute-utils
  objects-instance-group --> db-api-api
  objects-instance-group --> db-api-models
  objects-instance-group --> exception
  objects-instance-group --> objects-base
  objects-instance-group --> objects-fields
  objects-instance-group --> objects-init
  objects-instance-info-cache --> db-main-api
  objects-instance-info-cache --> exception
  objects-instance-info-cache --> objects-base
  objects-instance-info-cache --> objects-fields
  objects-instance-mapping --> db-api-api
  objects-instance-mapping --> db-api-models
  objects-instance-mapping --> exception
  objects-instance-mapping --> i18n
  objects-instance-mapping --> objects-base
  objects-instance-mapping --> objects-cell-mapping
  objects-instance-mapping --> objects-fields
  objects-instance-mapping --> objects-init
  objects-instance-mapping --> objects-virtual-interface
  objects-instance-numa --> db-main-api
  objects-instance-numa --> exception
  objects-instance-numa --> objects-base
  objects-instance-numa --> objects-fields
  objects-instance-pci-requests --> db-main-api
  objects-instance-pci-requests --> objects-base
  objects-instance-pci-requests --> objects-fields
  objects-keypair --> db-api-api
  objects-keypair --> db-api-models
  objects-keypair --> exception
  objects-keypair --> objects-base
  objects-keypair --> objects-fields
  objects-migrate-data --> exception
  objects-migrate-data --> objects-base
  objects-migrate-data --> objects-fields
  objects-migration --> db-main-api
  objects-migration --> exception
  objects-migration --> i18n
  objects-migration --> objects-base
  objects-migration --> objects-fields
  objects-migration --> objects-init
  objects-migration-context --> db-main-api
  objects-migration-context --> exception
  objects-migration-context --> objects-base
  objects-migration-context --> objects-fields
  objects-migration-context --> objects-init
  objects-monitor-metric --> objects-base
  objects-monitor-metric --> objects-fields
  objects-monitor-metric --> utils
  objects-network-metadata --> objects-base
  objects-network-metadata --> objects-fields
  objects-network-request --> objects-base
  objects-network-request --> objects-fields
  objects-numa --> exception
  objects-numa --> objects-base
  objects-numa --> objects-fields
  objects-pci-device --> db-main-api
  objects-pci-device --> db-main-models
  objects-pci-device --> exception
  objects-pci-device --> objects-base
  objects-pci-device --> objects-fields
  objects-pci-device-pool --> objects-base
  objects-pci-device-pool --> objects-fields
  objects-pci-device-pool --> objects-init
  objects-quotas --> db-api-api
  objects-quotas --> db-api-models
  objects-quotas --> db-main-api
  objects-quotas --> db-main-models
  objects-quotas --> db-utils
  objects-quotas --> exception
  objects-quotas --> objects-base
  objects-quotas --> objects-fields
  objects-request-spec --> compute-pci-placement-translator
  objects-request-spec --> conf-init
  objects-request-spec --> db-api-api
  objects-request-spec --> db-api-models
  objects-request-spec --> exception
  objects-request-spec --> objects-base
  objects-request-spec --> objects-fields
  objects-request-spec --> objects-init
  objects-request-spec --> objects-instance
  objects-resource --> db-main-api
  objects-resource --> objects-base
  objects-resource --> objects-fields
  objects-security-group --> db-main-api
  objects-security-group --> db-main-models
  objects-security-group --> objects-base
  objects-security-group --> objects-fields
  objects-security-group --> objects-init
  objects-selection --> conf-init
  objects-selection --> objects-base
  objects-selection --> objects-init
  objects-selection --> scheduler-filters-utils
  objects-service --> db-main-api
  objects-service --> exception
  objects-service --> objects-base
  objects-service --> objects-fields
  objects-service --> objects-init
  objects-share-mapping --> conf-init
  objects-share-mapping --> db-main-api
  objects-share-mapping --> exception
  objects-share-mapping --> objects-base
  objects-share-mapping --> objects-fields
  objects-tag --> db-main-api
  objects-tag --> objects-base
  objects-tag --> objects-fields
  objects-task-log --> db-main-api
  objects-task-log --> objects-base
  objects-task-log --> objects-fields
  objects-trusted-certs --> db-main-api
  objects-trusted-certs --> objects-base
  objects-trusted-certs --> objects-fields
  objects-vcpu-model --> db-main-api
  objects-vcpu-model --> objects-base
  objects-vcpu-model --> objects-fields
  objects-virt-cpu-topology --> objects-base
  objects-virt-cpu-topology --> objects-fields
  objects-virt-device-metadata --> db-main-api
  objects-virt-device-metadata --> objects-base
  objects-virt-device-metadata --> objects-fields
  objects-virtual-interface --> db-api-api
  objects-virtual-interface --> db-main-api
  objects-virtual-interface --> db-main-models
  objects-virtual-interface --> exception
  objects-virtual-interface --> objects-base
  objects-virtual-interface --> objects-fields
  objects-virtual-interface --> objects-init
  objects-volume-usage --> db-main-api
  objects-volume-usage --> objects-base
  objects-volume-usage --> objects-fields
  scheduler-client-query --> scheduler-rpcapi
  scheduler-client-report --> compute-provider-tree
  scheduler-client-report --> conf-init
  scheduler-client-report --> exception
  scheduler-client-report --> i18n
  scheduler-client-report --> objects-fields
  scheduler-client-report --> objects-init
  scheduler-client-report --> utils
  scheduler-filters-affinity-filter --> scheduler-filters-init
  scheduler-filters-affinity-filter --> scheduler-filters-utils
  scheduler-filters-aggregate-image-properties-isolation --> conf-init
  scheduler-filters-aggregate-image-properties-isolation --> scheduler-filters-init
  scheduler-filters-aggregate-image-properties-isolation --> scheduler-filters-utils
  scheduler-filters-aggregate-instance-extra-specs --> scheduler-filters-extra-specs-ops
  scheduler-filters-aggregate-instance-extra-specs --> scheduler-filters-init
  scheduler-filters-aggregate-instance-extra-specs --> scheduler-filters-utils
  scheduler-filters-aggregate-multitenancy-isolation --> scheduler-filters-init
  scheduler-filters-aggregate-multitenancy-isolation --> scheduler-filters-utils
  scheduler-filters-all-hosts-filter --> scheduler-filters-init
  scheduler-filters-compute-capabilities-filter --> scheduler-filters-extra-specs-ops
  scheduler-filters-compute-capabilities-filter --> scheduler-filters-init
  scheduler-filters-compute-filter --> scheduler-filters-init
  scheduler-filters-image-props-filter --> conf-init
  scheduler-filters-image-props-filter --> objects-fields
  scheduler-filters-image-props-filter --> scheduler-filters-init
  scheduler-filters-init --> scheduler-utils
  scheduler-filters-io-ops-filter --> conf-init
  scheduler-filters-io-ops-filter --> scheduler-filters-init
  scheduler-filters-io-ops-filter --> scheduler-filters-utils
  scheduler-filters-isolated-hosts-filter --> conf-init
  scheduler-filters-isolated-hosts-filter --> scheduler-filters-init
  scheduler-filters-json-filter --> scheduler-filters-init
  scheduler-filters-metrics-filter --> conf-init
  scheduler-filters-metrics-filter --> scheduler-filters-init
  scheduler-filters-metrics-filter --> scheduler-utils
  scheduler-filters-num-instances-filter --> conf-init
  scheduler-filters-num-instances-filter --> scheduler-filters-init
  scheduler-filters-num-instances-filter --> scheduler-filters-utils
  scheduler-filters-numa-topology-filter --> objects-fields
  scheduler-filters-numa-topology-filter --> objects-init
  scheduler-filters-numa-topology-filter --> scheduler-filters-init
  scheduler-filters-pci-passthrough-filter --> scheduler-filters-init
  scheduler-filters-type-filter --> scheduler-filters-init
  scheduler-filters-type-filter --> scheduler-filters-utils
  scheduler-host-manager --> conf-init
  scheduler-host-manager --> exception
  scheduler-host-manager --> objects-init
  scheduler-host-manager --> scheduler-filters-init
  scheduler-host-manager --> scheduler-weights-init
  scheduler-host-manager --> utils
  scheduler-manager --> compute-utils
  scheduler-manager --> conf-init
  scheduler-manager --> exception
  scheduler-manager --> i18n
  scheduler-manager --> objects-fields
  scheduler-manager --> objects-host-mapping
  scheduler-manager --> objects-init
  scheduler-manager --> objects-service
  scheduler-manager --> scheduler-client-report
  scheduler-manager --> scheduler-host-manager
  scheduler-manager --> scheduler-request-filter
  scheduler-manager --> scheduler-utils
  scheduler-request-filter --> conf-init
  scheduler-request-filter --> exception
  scheduler-request-filter --> i18n
  scheduler-request-filter --> network-neutron
  scheduler-request-filter --> objects-init
  scheduler-request-filter --> scheduler-client-report
  scheduler-request-filter --> scheduler-utils
  scheduler-rpcapi --> conf-init
  scheduler-rpcapi --> exception
  scheduler-rpcapi --> objects-base
  scheduler-utils --> compute-flavors
  scheduler-utils --> compute-utils
  scheduler-utils --> conf-init
  scheduler-utils --> exception
  scheduler-utils --> i18n
  scheduler-utils --> objects-base
  scheduler-utils --> objects-fields
  scheduler-utils --> objects-init
  scheduler-utils --> objects-instance
  scheduler-utils --> scheduler-client-report
  scheduler-utils --> scheduler-filters-utils
  scheduler-weights-affinity --> scheduler-utils
  scheduler-weights-affinity --> scheduler-weights-init
  scheduler-weights-compute --> conf-init
  scheduler-weights-compute --> scheduler-utils
  scheduler-weights-compute --> scheduler-weights-init
  scheduler-weights-cpu --> conf-init
  scheduler-weights-cpu --> scheduler-utils
  scheduler-weights-cpu --> scheduler-weights-init
  scheduler-weights-cross-cell --> conf-init
  scheduler-weights-cross-cell --> scheduler-utils
  scheduler-weights-cross-cell --> scheduler-weights-init
  scheduler-weights-disk --> conf-init
  scheduler-weights-disk --> scheduler-utils
  scheduler-weights-disk --> scheduler-weights-init
  scheduler-weights-hypervisor-version --> conf-init
  scheduler-weights-hypervisor-version --> scheduler-utils
  scheduler-weights-hypervisor-version --> scheduler-weights-init
  scheduler-weights-image-props --> conf-init
  scheduler-weights-image-props --> exception
  scheduler-weights-image-props --> objects-init
  scheduler-weights-image-props --> scheduler-utils
  scheduler-weights-image-props --> scheduler-weights-init
  scheduler-weights-io-ops --> conf-init
  scheduler-weights-io-ops --> scheduler-utils
  scheduler-weights-io-ops --> scheduler-weights-init
  scheduler-weights-metrics --> conf-init
  scheduler-weights-metrics --> exception
  scheduler-weights-metrics --> scheduler-utils
  scheduler-weights-metrics --> scheduler-weights-init
  scheduler-weights-num-instances --> conf-init
  scheduler-weights-num-instances --> scheduler-utils
  scheduler-weights-num-instances --> scheduler-weights-init
  scheduler-weights-pci --> conf-init
  scheduler-weights-pci --> scheduler-utils
  scheduler-weights-pci --> scheduler-weights-init
  scheduler-weights-ram --> conf-init
  scheduler-weights-ram --> scheduler-utils
  scheduler-weights-ram --> scheduler-weights-init
  service-auth --> conf-init
  utils --> conf-init
  utils --> exception
  utils --> i18n
  utils --> objects-service
```

---

## Local Data Flow

Source: `securitySurface` arrays in `.aee/kb/src/nova/**/*.json`.

**Entry points (53 total — unchanged from batch 5):**

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

**Sinks (718 total — 9 added in batch 6):**

| Category | Count | Primary files |
|---|---|---|
| db-write | 709 | `db/main/api.py`, `compute/api.py`, `compute/manager.py`, `conductor/manager.py`, `api/openstack/compute/servers.py`, `network/neutron.py`, `scheduler/client/query.py`, `image/glance.py` (8 sinks), `limit/placement.py` (1 sink) |
| network-send | 7 | `accelerator/cyborg.py` |
| file-write | 2 | `image/glance.py:L413, L429` (image download to local file) |

New sinks from batch 6:
- `image/glance.py:L413` — `file-write`: `data = open(dst_path, 'wb')` (image download file open, `image/glance.py.json:securitySurface`)
- `image/glance.py:L429` — `file-write`: `data.write(chunk)` (image chunk written to local file, `image/glance.py.json:securitySurface`)
- `image/glance.py:L427, L675, L705, L1160, L1162, L1181` — `db-write`: Glance API calls (`update`, `session.update`) (`image/glance.py.json:securitySurface`)
- `limit/placement.py:L191` — `db-write`: `deltas.update(delta_updates)` (`limit/placement.py.json:securitySurface`)

**Data flow paths:**

1. **CLI entry points → service startup.** Each `cmd/*.py` launcher calls `config.parse_args(sys.argv)` as its primary entry point (`cli-args` category), loading oslo.config options from `conf/*.py` declarations. No database or network sink is reached within the `cmd/` layer itself; control passes to service managers. Source: `.aee/kb/src/nova/cmd/**/*.json:securitySurface`.

2. **API layer → downstream services.** Inbound HTTP requests enter at `@webob.dec.wsgify`-decorated callables in `api/auth.py` and `api/openstack/__init__.py`. Request bodies and query parameters are validated by `api/validation/__init__.py` before being passed to controller action methods, which invoke `compute/api.py` (`API` class) and object-layer methods resolving to SQLAlchemy writes via `db/main/api.py`. Source: link-graph edges `api-openstack-compute-*` → `compute-*`, `objects-*`, `db-main-api-py`.

3. **Compute API → instance lifecycle (db-write).** `compute/api.py` (`_validate_bdm`, CCN 43) and `compute/manager.py` (`_init_instance`, CCN 40) issue 105 `db-write` sinks for instance state transitions, block-device mappings, and task-state updates. Source: `.aee/kb/src/nova/compute/api.py.json:securitySurface`.

4. **Accelerator → Cyborg HTTP.** Parameters enter at `accelerator/cyborg.py:L56/L88/L255/L291/L337` and reach network-send sinks at `L153-L154` (GET `/device_profiles`), `L205` (POST `/accelerator_requests`), `L282-L283` (PATCH), `L317` (GET `?instance=<value>`), `L377` (GET `/<arq_uuid>`). Source: `.aee/kb/src/nova/accelerator/cyborg.py.json:securitySurface`.

5. **Image service → Glance HTTP + local file.** `image/glance.py` uses service-token auth obtained at `L59` (`privilege: crypto-key`). Image binary data is streamed from Glance and verified against a cryptographic signature (`_verify_and_write`, CCN 17) before being written to local file at `L413` and `L429` (file-write sinks). Image metadata updates pass through `GlanceImageServiceV2.update` at `L675`, `L705`, `L1160-L1181` (db-write sinks). Cryptographic exception `InvalidSignature` is caught at `L434`. Source: `.aee/kb/src/nova/image/glance.py.json:securitySurface`.

6. **Limit enforcement → oslo_limit + Placement.** `limit/local.py` enforces API-side quotas via `oslo_limit.limit.Enforcer`; `limit/placement.py` enforces placement-resource quotas (`_get_usage` CCN 16), recording deltas at `L191` (db-write sink). `limit/utils.py` queries Keystone to detect unified-limit mode (`should_enforce`, CCN 12). Source: `.aee/kb/src/nova/limit/**/*.json:securitySurface`.

7. **Objects → db/main/api.py.** Domain-object methods pass field values through OVO serialisation in `objects/base.py` before reaching SQLAlchemy write functions in `db/main/api.py`. Source: link-graph edges `objects-*` → `db-main-api-py`.

8. **Network → Neutron HTTP.** `network/neutron.py` issues REST calls (26 `db-write`-category sinks, 80+ `network` side effects) for port, security group, and floating-IP operations. Source: `.aee/kb/src/nova/network/neutron.py.json:securitySurface` and `sideEffects`.

9. **Scheduler → Placement HTTP.** `scheduler/client/report.py` issues GET/PUT/POST to the Placement API at `L279` and `L2358`. Source: `.aee/kb/src/nova/scheduler/client/report.py.json:securitySurface`.

10. **Console → network socket.** `console/serial.py:L83` opens a raw TCP socket (`network-socket` entry point) for serial console proxying; no further sink is recorded in the current KB. Source: `.aee/kb/src/nova/console/serial.py.json:securitySurface`.

**Privileges (64 entries — 2 added in batch 6):**
- `image/glance.py:L59` — `crypto-key`: service-token auth plugin obtained for Glance session (`image/glance.py.json:securitySurface`).
- `image/glance.py:L434` — `crypto-key`: `cryptography.exceptions.InvalidSignature` caught in image-signature verification (`image/glance.py.json:securitySurface`).
- All other privilege entries have category `crypto-key` originating from `keystoneauth1` imports in `scheduler/client/report.py`, `service_auth.py`, `api/auth.py`, `network/neutron.py`, `compute/manager.py`, and `conductor/manager.py`.

No untrusted-input sanitisation steps are recorded in any `securitySurface` entry across the 443 KB records.

---

## Cross-Component Interfaces

The link graph records **0 cross-component file edges** and **0 cross-component seams**. All 1,577 file edges are intra-component. The link summary notes 286 unresolved imports (down from 302 in batch 5): bare `nova` (151 refs), `nova.policies` (60), `nova.virt` (23), `nova.notifications.objects` (17), `nova.pci` (13), `nova.volume` (9), `nova.share` (3), `nova.context` (3), `nova.virt.libvirt` (2), `nova.notifications`, `nova.quota`, `nova.policy`, `nova.virt.node` (1 each), and new entrant `nova.storage` (1). Batch 6 resolved `nova.image` (was 9 refs) and `nova.limit` (was 10 refs). Source: `.aee/link-summary.md`.
