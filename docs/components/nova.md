# Component: nova

## Overview

The `nova` component encompasses the core OpenStack Compute service subsystems extracted across nine batches. All 1,484 files are classified as component `nova`; no other component exists in the current KB.

**Production subsystems:** `api/`, `accelerator/`, `cmd/`, `compute/`, `conductor/`, `conf/`, `console/`, `exception.py`, `i18n.py`, `service_auth.py`, `utils.py`, `hacking/`, `image/`, `keymgr/`, `limit/`, `notifications/`, `objects/`, `db/`, `network/`, `pci/`, `policies/`, `privsep/`, `scheduler/`, `servicegroup/`, `share/`, `storage/`, `virt/`, `volume/`, `wsgi/`.

**Test subsystems:** `tests/unit/` (514 files), `tests/functional/` (314 files), `tests/fixtures/` (16 files).

**Batch provenance** -- batch 1 (`6d56e5a`, 2026-10-16): 2 files; batch 2 (`733c73`, 2026-10-19): 53 files; batch 3 (`868bfe40`, 2026-10-19): 67 files; batch 4 (`caa20451`, 2026-10-20): 205 files; batch 5 (`f56908d5`, 2026-10-20): 106 files; batch 6 (`c7012ab2`, 2026-10-20): 10 files; batch 7 (`10997c0e`, 2026-10-20): 89 files; batch 8 (`da4f90f3`, 2026-10-21): 856 files; batch 9 (`624338e5`, 2026-10-21): 96 files.

Subsystem responsibilities:

**Production:**
- **api/** -- WSGI framework, request dispatch, authentication middleware, API versioning, metadata service, and OpenStack Compute REST API including JSON schema validation and view serialisers.
- **accelerator/** -- HTTP client facade for the Cyborg accelerator API.
- **cmd/** -- CLI entry points for all Nova service daemons and `nova-manage`.
- **compute/** -- Core compute service API (`compute/api.py`) and manager (`compute/manager.py`) handling instance lifecycle.
- **conductor/** -- Conductor service coordinating cross-service operations (`conductor/manager.py`).
- **conf/** -- oslo.config option declarations for all Nova sub-systems.
- **console/** -- VNC/RFB, serial, and SPICE console proxy infrastructure.
- **exception.py / i18n.py** -- Exception class hierarchy and internationalisation factory.
- **service_auth.py / utils.py** -- Service-token authentication helpers and general utilities.
- **hacking/** -- pep8/hacking lint-check plug-ins for Nova-specific style rules.
- **image/** -- Glance image service client with cryptographic signature verification.
- **keymgr/** -- oslo.castellan key-manager wrapper for encryption-key storage.
- **limit/** -- oslo_limit-based quota enforcement (API-side, Placement-side, unified-limit detection).
- **notifications/** -- oslo.messaging versioned notification objects for all Nova events.
- **objects/** -- oslo.versionedobjects domain model for all Nova entities.
- **db/api/** and **db/main/** -- Alembic-managed database schemas with SQLAlchemy query API.
- **network/** -- Neutron integration, network model, os-vif utilities, and security group API.
- **pci/** -- PCI device specification, per-node tracker, pool-based stats, request resolution, and whitelist management.
- **policies/** -- oslo.policy RBAC rule definitions for every Nova API action (56 files).
- **privsep/** -- oslo.privsep privilege-separation wrappers executing in a root-privileged daemon subprocess.
- **scheduler/** -- Placement-aware scheduling: host manager, filters, weighers, RPC client, Placement report client.
- **servicegroup/** -- Service-group membership driver interface with DB and Memcache backends for service heartbeat.
- **share/** -- Manila share integration client (`share/manila.py`): openstack SDK wrapper for shared filesystem operations.
- **storage/** -- Ceph/RBD storage utilities (`storage/rbd_utils.py`): snapshot, clone, and image management via rados/rbd bindings.
- **virt/** -- Hypervisor abstraction layer (91 files): abstract driver interface (`virt/driver.py`), libvirt/KVM driver (`virt/libvirt/`, 40 files), VMware API driver (`virt/vmwareapi/`, 15 files), Ironic baremetal driver (`virt/ironic/`, 4 files), z/VM driver (`virt/zvm/`, 5 files), disk/VFS utilities (`virt/disk/`, 10 files), NUMA/CPU topology (`virt/hardware.py`), image backends (`virt/libvirt/imagebackend.py`), and volume drivers (`virt/libvirt/volume/`, 16 files).
- **volume/** -- Cinder volume integration (`volume/cinder.py`): block-storage attachment, volume lifecycle, and snapshot management via the cinderclient.
- **wsgi/** -- WSGI application bootstrapping: `wsgi/metadata.py` and `wsgi/osapi_compute.py` entry-point shims.

**Test infrastructure:**
- **tests/unit/** (514 files) -- Unit tests for every production subsystem; uses `unittest.mock` extensively.
- **tests/functional/** (314 files) -- Functional/API-sample tests exercising the full HTTP stack against an in-process Nova API.
- **tests/fixtures/** (16 files) -- Shared test fixtures including a libvirt XML stub (`tests/fixtures/libvirt.py`, CCN 41).

Source: `.aee/intake-summary.md` (batch 624338e5); `.aee/link-summary.md`.

---

## File Inventory

All 1,484 KB records. LOC figures from each record's `lines` block. Source: `.aee/kb/src/nova/**/*.json`.

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
| `notifications/__init__.py` | 25 | 5 | nova |
| `notifications/base.py` | 399 | 256 | nova |
| `notifications/objects/__init__.py` | 0 | 0 | nova |
| `notifications/objects/aggregate.py` | 115 | 74 | nova |
| `notifications/objects/base.py` | 250 | 120 | nova |
| `notifications/objects/compute_task.py` | 54 | 30 | nova |
| `notifications/objects/exception.py` | 85 | 48 | nova |
| `notifications/objects/flavor.py` | 86 | 53 | nova |
| `notifications/objects/image.py` | 161 | 71 | nova |
| `notifications/objects/instance.py` | 815 | 550 | nova |
| `notifications/objects/keypair.py` | 55 | 35 | nova |
| `notifications/objects/libvirt.py` | 40 | 21 | nova |
| `notifications/objects/metrics.py` | 85 | 55 | nova |
| `notifications/objects/request_spec.py` | 350 | 273 | nova |
| `notifications/objects/scheduler.py` | 29 | 11 | nova |
| `notifications/objects/server_group.py` | 69 | 43 | nova |
| `notifications/objects/service.py` | 68 | 44 | nova |
| `notifications/objects/volume.py` | 64 | 40 | nova |
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
| `pci/__init__.py` | 0 | 0 | nova |
| `pci/devspec.py` | 434 | 320 | nova |
| `pci/manager.py` | 505 | 344 | nova |
| `pci/request.py` | 379 | 294 | nova |
| `pci/stats.py` | 1075 | 746 | nova |
| `pci/utils.py` | 273 | 201 | nova |
| `pci/whitelist.py` | 107 | 74 | nova |
| `policies/__init__.py` | 130 | 114 | nova |
| `policies/admin_actions.py` | 51 | 29 | nova |
| `policies/admin_password.py` | 40 | 18 | nova |
| `policies/aggregates.py` | 129 | 107 | nova |
| `policies/assisted_volume_snapshots.py` | 51 | 29 | nova |
| `policies/attach_interfaces.py` | 90 | 67 | nova |
| `policies/availability_zone.py` | 53 | 31 | nova |
| `policies/baremetal_nodes.py` | 70 | 45 | nova |
| `policies/base.py` | 149 | 90 | nova |
| `policies/console_auth_tokens.py` | 41 | 19 | nova |
| `policies/console_output.py` | 40 | 18 | nova |
| `policies/create_backup.py` | 40 | 18 | nova |
| `policies/deferred_delete.py` | 65 | 42 | nova |
| `policies/evacuate.py` | 40 | 18 | nova |
| `policies/extended_server_attributes.py` | 75 | 49 | nova |
| `policies/extensions.py` | 45 | 23 | nova |
| `policies/flavor_access.py` | 88 | 56 | nova |
| `policies/flavor_extra_specs.py` | 109 | 88 | nova |
| `policies/flavor_manage.py` | 63 | 40 | nova |
| `policies/floating_ip_pools.py` | 40 | 18 | nova |
| `policies/floating_ips.py` | 117 | 93 | nova |
| `policies/hosts.py` | 127 | 97 | nova |
| `policies/hypervisors.py` | 130 | 106 | nova |
| `policies/instance_actions.py` | 105 | 80 | nova |
| `policies/instance_usage_audit_log.py` | 68 | 44 | nova |
| `policies/ips.py` | 52 | 30 | nova |
| `policies/keypairs.py` | 72 | 51 | nova |
| `policies/limits.py` | 70 | 46 | nova |
| `policies/lock_server.py` | 68 | 45 | nova |
| `policies/migrate_server.py` | 105 | 68 | nova |
| `policies/migrations.py` | 98 | 56 | nova |
| `policies/multinic.py` | 73 | 47 | nova |
| `policies/networks.py` | 71 | 45 | nova |
| `policies/pause_server.py` | 53 | 31 | nova |
| `policies/quota_class_sets.py` | 51 | 29 | nova |
| `policies/quota_sets.py` | 87 | 62 | nova |
| `policies/remote_consoles.py` | 59 | 35 | nova |
| `policies/rescue.py` | 66 | 42 | nova |
| `policies/security_groups.py` | 163 | 139 | nova |
| `policies/server_diagnostics.py` | 40 | 18 | nova |
| `policies/server_external_events.py` | 40 | 18 | nova |
| `policies/server_groups.py` | 89 | 67 | nova |
| `policies/server_metadata.py` | 101 | 79 | nova |
| `policies/server_password.py` | 68 | 44 | nova |
| `policies/server_shares.py` | 70 | 51 | nova |
| `policies/server_tags.py` | 101 | 78 | nova |
| `policies/server_topology.py` | 50 | 30 | nova |
| `policies/servers.py` | 492 | 458 | nova |
| `policies/servers_migrations.py` | 118 | 81 | nova |
| `policies/services.py` | 79 | 54 | nova |
| `policies/shelve.py` | 74 | 52 | nova |
| `policies/simple_tenant_usage.py` | 51 | 29 | nova |
| `policies/suspend_server.py` | 51 | 29 | nova |
| `policies/tenant_networks.py` | 71 | 45 | nova |
| `policies/volumes.py` | 183 | 149 | nova |
| `policies/volumes_attachments.py` | 102 | 80 | nova |
| `privsep/__init__.py` | 31 | 14 | nova |
| `privsep/fs.py` | 305 | 188 | nova |
| `privsep/idmapshift.py` | 141 | 94 | nova |
| `privsep/libvirt.py` | 236 | 135 | nova |
| `privsep/linux_net.py` | 137 | 86 | nova |
| `privsep/path.py` | 112 | 65 | nova |
| `privsep/qemu.py` | 270 | 152 | nova |
| `privsep/utils.py` | 90 | 48 | nova |
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
| `servicegroup/__init__.py` | 24 | 6 | nova |
| `servicegroup/api.py` | 83 | 47 | nova |
| `servicegroup/drivers/__init__.py` | 0 | 0 | nova |
| `servicegroup/drivers/base.py` | 33 | 15 | nova |
| `servicegroup/drivers/db.py` | 124 | 78 | nova |
| `servicegroup/drivers/mc.py` | 117 | 70 | nova |
| `share/__init__.py` | 0 | 0 | nova |
| `share/manila.py` | 362 | 301 | nova |
| `storage/__init__.py` | 0 | 0 | nova |
| `storage/rbd_utils.py` | 513 | 386 | nova |
| `tests/__init__.py` | 0 | 0 | nova |
| `tests/fixtures/__init__.py` | 31 | 19 | nova |
| `tests/fixtures/cast_as_call.py` | 69 | 42 | nova |
| `tests/fixtures/cinder.py` | 547 | 413 | nova |
| `tests/fixtures/conf.py` | 83 | 34 | nova |
| `tests/fixtures/cyborg.py` | 393 | 321 | nova |
| `tests/fixtures/filesystem.py` | 88 | 55 | nova |
| `tests/fixtures/glance.py` | 379 | 301 | nova |
| `tests/fixtures/libvirt.py` | 2863 | 2249 | nova |
| `tests/fixtures/libvirt_data.py` | 2166 | 2049 | nova |
| `tests/fixtures/libvirt_imagebackend.py` | 267 | 136 | nova |
| `tests/fixtures/manila.py` | 144 | 110 | nova |
| `tests/fixtures/neutron.py` | 968 | 793 | nova |
| `tests/fixtures/notifications.py` | 245 | 172 | nova |
| `tests/fixtures/nova.py` | 2374 | 1679 | nova |
| `tests/fixtures/os_brick.py` | 77 | 51 | nova |
| `tests/fixtures/policy.py` | 172 | 115 | nova |
| `tests/functional/__init__.py` | 17 | 1 | nova |
| `tests/functional/api/__init__.py` | 18 | 4 | nova |
| `tests/functional/api/client.py` | 582 | 421 | nova |
| `tests/functional/api/openstack/__init__.py` | 0 | 0 | nova |
| `tests/functional/api_sample_tests/__init__.py` | 0 | 0 | nova |
| `tests/functional/api_sample_tests/api_sample_base.py` | 119 | 44 | nova |
| `tests/functional/api_sample_tests/test_admin_actions.py` | 48 | 22 | nova |
| `tests/functional/api_sample_tests/test_admin_password.py` | 29 | 11 | nova |
| `tests/functional/api_sample_tests/test_agents.py` | 35 | 10 | nova |
| `tests/functional/api_sample_tests/test_aggregates.py` | 139 | 94 | nova |
| `tests/functional/api_sample_tests/test_assisted_volume_snapshots.py` | 53 | 30 | nova |
| `tests/functional/api_sample_tests/test_attach_interfaces.py` | 230 | 182 | nova |
| `tests/functional/api_sample_tests/test_availability_zone.py` | 34 | 12 | nova |
| `tests/functional/api_sample_tests/test_baremetal_nodes.py` | 77 | 46 | nova |
| `tests/functional/api_sample_tests/test_block_device_mapping_boot.py` | 31 | 11 | nova |
| `tests/functional/api_sample_tests/test_cells.py` | 60 | 32 | nova |
| `tests/functional/api_sample_tests/test_compare_result.py` | 475 | 379 | nova |
| `tests/functional/api_sample_tests/test_console_auth_tokens.py` | 89 | 55 | nova |
| `tests/functional/api_sample_tests/test_console_output.py` | 26 | 8 | nova |
| `tests/functional/api_sample_tests/test_consoles.py` | 37 | 15 | nova |
| `tests/functional/api_sample_tests/test_create_backup.py` | 56 | 27 | nova |
| `tests/functional/api_sample_tests/test_deferred_delete.py` | 42 | 20 | nova |
| `tests/functional/api_sample_tests/test_evacuate.py` | 256 | 202 | nova |
| `tests/functional/api_sample_tests/test_extension_info.py` | 39 | 14 | nova |
| `tests/functional/api_sample_tests/test_fixed_ips.py` | 32 | 13 | nova |
| `tests/functional/api_sample_tests/test_flavor_access.py` | 97 | 67 | nova |
| `tests/functional/api_sample_tests/test_flavor_extraspecs.py` | 69 | 46 | nova |
| `tests/functional/api_sample_tests/test_flavor_manage.py` | 58 | 31 | nova |
| `tests/functional/api_sample_tests/test_flavors.py` | 146 | 96 | nova |
| `tests/functional/api_sample_tests/test_floating_ip_dns.py` | 70 | 47 | nova |
| `tests/functional/api_sample_tests/test_floating_ip_pools.py` | 37 | 18 | nova |
| `tests/functional/api_sample_tests/test_floating_ips.py` | 227 | 175 | nova |
| `tests/functional/api_sample_tests/test_floating_ips_bulk.py` | 51 | 29 | nova |
| `tests/functional/api_sample_tests/test_fping.py` | 33 | 13 | nova |
| `tests/functional/api_sample_tests/test_hosts.py` | 46 | 23 | nova |
| `tests/functional/api_sample_tests/test_hypervisors.py` | 292 | 230 | nova |
| `tests/functional/api_sample_tests/test_images.py` | 100 | 64 | nova |
| `tests/functional/api_sample_tests/test_instance_actions.py` | 163 | 108 | nova |
| `tests/functional/api_sample_tests/test_instance_usage_audit_log.py` | 78 | 50 | nova |
| `tests/functional/api_sample_tests/test_keypairs.py` | 384 | 264 | nova |
| `tests/functional/api_sample_tests/test_limits.py` | 79 | 45 | nova |
| `tests/functional/api_sample_tests/test_lock_server.py` | 76 | 41 | nova |
| `tests/functional/api_sample_tests/test_migrate_server.py` | 228 | 157 | nova |
| `tests/functional/api_sample_tests/test_migrations.py` | 453 | 392 | nova |
| `tests/functional/api_sample_tests/test_multinic.py` | 58 | 32 | nova |
| `tests/functional/api_sample_tests/test_multiple_create.py` | 42 | 23 | nova |
| `tests/functional/api_sample_tests/test_networks.py` | 53 | 29 | nova |
| `tests/functional/api_sample_tests/test_networks_associate.py` | 40 | 19 | nova |
| `tests/functional/api_sample_tests/test_pause_server.py` | 41 | 18 | nova |
| `tests/functional/api_sample_tests/test_preserve_ephemeral_rebuild.py` | 60 | 39 | nova |
| `tests/functional/api_sample_tests/test_quota_classes.py` | 47 | 22 | nova |
| `tests/functional/api_sample_tests/test_quota_sets.py` | 102 | 58 | nova |
| `tests/functional/api_sample_tests/test_remote_consoles.py` | 147 | 102 | nova |
| `tests/functional/api_sample_tests/test_rescue.py` | 100 | 67 | nova |
| `tests/functional/api_sample_tests/test_security_group_default_rules.py` | 31 | 12 | nova |
| `tests/functional/api_sample_tests/test_security_groups.py` | 174 | 121 | nova |
| `tests/functional/api_sample_tests/test_server_diagnostics.py` | 33 | 12 | nova |
| `tests/functional/api_sample_tests/test_server_external_events.py` | 40 | 21 | nova |
| `tests/functional/api_sample_tests/test_server_groups.py` | 80 | 49 | nova |
| `tests/functional/api_sample_tests/test_server_metadata.py` | 79 | 48 | nova |
| `tests/functional/api_sample_tests/test_server_migrations.py` | 316 | 257 | nova |
| `tests/functional/api_sample_tests/test_server_password.py` | 43 | 22 | nova |
| `tests/functional/api_sample_tests/test_server_shares.py` | 514 | 433 | nova |
| `tests/functional/api_sample_tests/test_server_tags.py` | 105 | 79 | nova |
| `tests/functional/api_sample_tests/test_server_topology.py` | 69 | 41 | nova |
| `tests/functional/api_sample_tests/test_servers.py` | 1210 | 935 | nova |
| `tests/functional/api_sample_tests/test_servers_ips.py` | 35 | 14 | nova |
| `tests/functional/api_sample_tests/test_services.py` | 255 | 200 | nova |
| `tests/functional/api_sample_tests/test_shelve.py` | 355 | 281 | nova |
| `tests/functional/api_sample_tests/test_simple_tenant_usage.py` | 156 | 105 | nova |
| `tests/functional/api_sample_tests/test_snapshots.py` | 77 | 50 | nova |
| `tests/functional/api_sample_tests/test_suspend_server.py` | 40 | 18 | nova |
| `tests/functional/api_sample_tests/test_tenant_networks.py` | 36 | 15 | nova |
| `tests/functional/api_sample_tests/test_versions.py` | 61 | 28 | nova |
| `tests/functional/api_sample_tests/test_virtual_interfaces.py` | 29 | 10 | nova |
| `tests/functional/api_sample_tests/test_volume_attachments.py` | 180 | 130 | nova |
| `tests/functional/api_sample_tests/test_volumes.py` | 80 | 51 | nova |
| `tests/functional/api_samples_test_base.py` | 547 | 391 | nova |
| `tests/functional/compute/__init__.py` | 0 | 0 | nova |
| `tests/functional/compute/test_attached_volumes.py` | 152 | 82 | nova |
| `tests/functional/compute/test_cache_image.py` | 102 | 70 | nova |
| `tests/functional/compute/test_host_api.py` | 123 | 86 | nova |
| `tests/functional/compute/test_init_host.py` | 214 | 110 | nova |
| `tests/functional/compute/test_instance_list.py` | 562 | 431 | nova |
| `tests/functional/compute/test_live_migration.py` | 280 | 189 | nova |
| `tests/functional/compute/test_migration_list.py` | 99 | 71 | nova |
| `tests/functional/compute/test_resource_tracker.py` | 721 | 531 | nova |
| `tests/functional/db/__init__.py` | 0 | 0 | nova |
| `tests/functional/db/test_aggregate.py` | 682 | 553 | nova |
| `tests/functional/db/test_archive.py` | 353 | 224 | nova |
| `tests/functional/db/test_build_request.py` | 541 | 415 | nova |
| `tests/functional/db/test_cell_mapping.py` | 166 | 122 | nova |
| `tests/functional/db/test_compute_api.py` | 59 | 33 | nova |
| `tests/functional/db/test_compute_node.py` | 297 | 220 | nova |
| `tests/functional/db/test_connection_switch.py` | 201 | 134 | nova |
| `tests/functional/db/test_console_auth_token.py` | 57 | 38 | nova |
| `tests/functional/db/test_flavor.py` | 177 | 137 | nova |
| `tests/functional/db/test_host_mapping.py` | 218 | 159 | nova |
| `tests/functional/db/test_instance.py` | 206 | 149 | nova |
| `tests/functional/db/test_instance_group.py` | 165 | 122 | nova |
| `tests/functional/db/test_instance_mapping.py` | 608 | 422 | nova |
| `tests/functional/db/test_keypair.py` | 191 | 138 | nova |
| `tests/functional/db/test_quota.py` | 274 | 188 | nova |
| `tests/functional/db/test_quota_model.py` | 65 | 44 | nova |
| `tests/functional/db/test_quotas.py` | 319 | 256 | nova |
| `tests/functional/db/test_request_spec.py` | 80 | 55 | nova |
| `tests/functional/db/test_security_group.py` | 50 | 27 | nova |
| `tests/functional/db/test_virtual_interface.py` | 372 | 256 | nova |
| `tests/functional/fixtures.py` | 170 | 106 | nova |
| `tests/functional/integrated_helpers.py` | 1544 | 1128 | nova |
| `tests/functional/libvirt/__init__.py` | 0 | 0 | nova |
| `tests/functional/libvirt/base.py` | 552 | 437 | nova |
| `tests/functional/libvirt/integrated_helpers.py` | 47 | 27 | nova |
| `tests/functional/libvirt/test_amd_sev.py` | 180 | 132 | nova |
| `tests/functional/libvirt/test_device_bus_migration.py` | 413 | 295 | nova |
| `tests/functional/libvirt/test_evacuate.py` | 654 | 431 | nova |
| `tests/functional/libvirt/test_intel_tdx.py` | 95 | 65 | nova |
| `tests/functional/libvirt/test_live_migration.py` | 421 | 265 | nova |
| `tests/functional/libvirt/test_machine_type.py` | 393 | 268 | nova |
| `tests/functional/libvirt/test_migration_addr.py` | 91 | 55 | nova |
| `tests/functional/libvirt/test_numa_live_migration.py` | 672 | 457 | nova |
| `tests/functional/libvirt/test_numa_servers.py` | 1640 | 1050 | nova |
| `tests/functional/libvirt/test_pci_in_placement.py` | 2485 | 1923 | nova |
| `tests/functional/libvirt/test_pci_sriov_servers.py` | 7209 | 5653 | nova |
| `tests/functional/libvirt/test_power_manage.py` | 502 | 340 | nova |
| `tests/functional/libvirt/test_report_cpu_traits.py` | 447 | 348 | nova |
| `tests/functional/libvirt/test_rescue_deleted_base.py` | 180 | 118 | nova |
| `tests/functional/libvirt/test_reshape.py` | 448 | 317 | nova |
| `tests/functional/libvirt/test_rt_servers.py` | 58 | 29 | nova |
| `tests/functional/libvirt/test_server_shares.py` | 645 | 471 | nova |
| `tests/functional/libvirt/test_shared_resource_provider.py` | 209 | 125 | nova |
| `tests/functional/libvirt/test_stateless_firmware.py` | 298 | 199 | nova |
| `tests/functional/libvirt/test_uefi.py` | 770 | 618 | nova |
| `tests/functional/libvirt/test_vgpu.py` | 850 | 577 | nova |
| `tests/functional/libvirt/test_vif_model.py` | 100 | 70 | nova |
| `tests/functional/libvirt/test_vpmem.py` | 284 | 215 | nova |
| `tests/functional/libvirt/test_vtpm.py` | 1116 | 694 | nova |
| `tests/functional/notification_sample_tests/__init__.py` | 0 | 0 | nova |
| `tests/functional/notification_sample_tests/notification_sample_base.py` | 301 | 218 | nova |
| `tests/functional/notification_sample_tests/test_aggregate.py` | 219 | 178 | nova |
| `tests/functional/notification_sample_tests/test_compute_task.py` | 133 | 96 | nova |
| `tests/functional/notification_sample_tests/test_exception_notification.py` | 43 | 25 | nova |
| `tests/functional/notification_sample_tests/test_flavor.py` | 132 | 97 | nova |
| `tests/functional/notification_sample_tests/test_instance.py` | 2425 | 1934 | nova |
| `tests/functional/notification_sample_tests/test_keypair.py` | 83 | 63 | nova |
| `tests/functional/notification_sample_tests/test_libvirt.py` | 57 | 33 | nova |
| `tests/functional/notification_sample_tests/test_metrics.py` | 41 | 19 | nova |
| `tests/functional/notification_sample_tests/test_server_group.py` | 73 | 46 | nova |
| `tests/functional/notification_sample_tests/test_service.py` | 169 | 118 | nova |
| `tests/functional/notification_sample_tests/test_volume.py` | 64 | 37 | nova |
| `tests/functional/regressions/__init__.py` | 0 | 0 | nova |
| `tests/functional/regressions/test_bug_1404867.py` | 78 | 41 | nova |
| `tests/functional/regressions/test_bug_1522536.py` | 57 | 33 | nova |
| `tests/functional/regressions/test_bug_1541691.py` | 51 | 28 | nova |
| `tests/functional/regressions/test_bug_1548980.py` | 76 | 46 | nova |
| `tests/functional/regressions/test_bug_1552888.py` | 40 | 18 | nova |
| `tests/functional/regressions/test_bug_1554631.py` | 114 | 78 | nova |
| `tests/functional/regressions/test_bug_1558866.py` | 68 | 44 | nova |
| `tests/functional/regressions/test_bug_1568208.py` | 34 | 12 | nova |
| `tests/functional/regressions/test_bug_1595962.py` | 182 | 138 | nova |
| `tests/functional/regressions/test_bug_1620248.py` | 46 | 25 | nova |
| `tests/functional/regressions/test_bug_1628606.py` | 60 | 37 | nova |
| `tests/functional/regressions/test_bug_1669054.py` | 67 | 40 | nova |
| `tests/functional/regressions/test_bug_1670627.py` | 138 | 89 | nova |
| `tests/functional/regressions/test_bug_1671648.py` | 137 | 76 | nova |
| `tests/functional/regressions/test_bug_1675570.py` | 93 | 53 | nova |
| `tests/functional/regressions/test_bug_1678326.py` | 83 | 46 | nova |
| `tests/functional/regressions/test_bug_1679750.py` | 153 | 97 | nova |
| `tests/functional/regressions/test_bug_1682693.py` | 83 | 47 | nova |
| `tests/functional/regressions/test_bug_1689692.py` | 76 | 42 | nova |
| `tests/functional/regressions/test_bug_1702454.py` | 122 | 63 | nova |
| `tests/functional/regressions/test_bug_1713783.py` | 114 | 75 | nova |
| `tests/functional/regressions/test_bug_1718455.py` | 126 | 80 | nova |
| `tests/functional/regressions/test_bug_1718512.py` | 138 | 79 | nova |
| `tests/functional/regressions/test_bug_1719730.py` | 110 | 65 | nova |
| `tests/functional/regressions/test_bug_1732947.py` | 84 | 46 | nova |
| `tests/functional/regressions/test_bug_1735407.py` | 166 | 85 | nova |
| `tests/functional/regressions/test_bug_1741125.py` | 80 | 51 | nova |
| `tests/functional/regressions/test_bug_1741364.py` | 241 | 171 | nova |
| `tests/functional/regressions/test_bug_1746483.py` | 97 | 58 | nova |
| `tests/functional/regressions/test_bug_1764556.py` | 144 | 86 | nova |
| `tests/functional/regressions/test_bug_1764883.py` | 108 | 57 | nova |
| `tests/functional/regressions/test_bug_1778305.py` | 61 | 30 | nova |
| `tests/functional/regressions/test_bug_1780373.py` | 102 | 74 | nova |
| `tests/functional/regressions/test_bug_1781286.py` | 167 | 99 | nova |
| `tests/functional/regressions/test_bug_1781710.py` | 117 | 68 | nova |
| `tests/functional/regressions/test_bug_1784353.py` | 81 | 48 | nova |
| `tests/functional/regressions/test_bug_1790204.py` | 77 | 42 | nova |
| `tests/functional/regressions/test_bug_1794996.py` | 75 | 41 | nova |
| `tests/functional/regressions/test_bug_1797580.py` | 87 | 52 | nova |
| `tests/functional/regressions/test_bug_1806064.py` | 139 | 86 | nova |
| `tests/functional/regressions/test_bug_1806515.py` | 62 | 36 | nova |
| `tests/functional/regressions/test_bug_1815153.py` | 152 | 95 | nova |
| `tests/functional/regressions/test_bug_1823370.py` | 69 | 40 | nova |
| `tests/functional/regressions/test_bug_1825020.py` | 78 | 49 | nova |
| `tests/functional/regressions/test_bug_1825034.py` | 77 | 49 | nova |
| `tests/functional/regressions/test_bug_1825537.py` | 74 | 34 | nova |
| `tests/functional/regressions/test_bug_1830747.py` | 131 | 82 | nova |
| `tests/functional/regressions/test_bug_1831771.py` | 96 | 45 | nova |
| `tests/functional/regressions/test_bug_1835822.py` | 167 | 116 | nova |
| `tests/functional/regressions/test_bug_1837955.py` | 94 | 57 | nova |
| `tests/functional/regressions/test_bug_1839560.py` | 122 | 78 | nova |
| `tests/functional/regressions/test_bug_1843090.py` | 81 | 46 | nova |
| `tests/functional/regressions/test_bug_1843708.py` | 73 | 45 | nova |
| `tests/functional/regressions/test_bug_1845291.py` | 77 | 47 | nova |
| `tests/functional/regressions/test_bug_1848343.py` | 149 | 90 | nova |
| `tests/functional/regressions/test_bug_1849165.py` | 64 | 34 | nova |
| `tests/functional/regressions/test_bug_1849409.py` | 59 | 35 | nova |
| `tests/functional/regressions/test_bug_1852458.py` | 77 | 52 | nova |
| `tests/functional/regressions/test_bug_1853009.py` | 175 | 96 | nova |
| `tests/functional/regressions/test_bug_1862633.py` | 86 | 58 | nova |
| `tests/functional/regressions/test_bug_1879878.py` | 362 | 218 | nova |
| `tests/functional/regressions/test_bug_1886418.py` | 81 | 39 | nova |
| `tests/functional/regressions/test_bug_1888395.py` | 152 | 99 | nova |
| `tests/functional/regressions/test_bug_1889108.py` | 97 | 58 | nova |
| `tests/functional/regressions/test_bug_1890244.py` | 96 | 60 | nova |
| `tests/functional/regressions/test_bug_1893284.py` | 87 | 53 | nova |
| `tests/functional/regressions/test_bug_1894966.py` | 41 | 23 | nova |
| `tests/functional/regressions/test_bug_1895696.py` | 148 | 107 | nova |
| `tests/functional/regressions/test_bug_1896463.py` | 222 | 108 | nova |
| `tests/functional/regressions/test_bug_1899649.py` | 99 | 54 | nova |
| `tests/functional/regressions/test_bug_1899835.py` | 203 | 145 | nova |
| `tests/functional/regressions/test_bug_1902925.py` | 48 | 23 | nova |
| `tests/functional/regressions/test_bug_1908075.py` | 96 | 50 | nova |
| `tests/functional/regressions/test_bug_1909120.py` | 57 | 28 | nova |
| `tests/functional/regressions/test_bug_1914777.py` | 145 | 81 | nova |
| `tests/functional/regressions/test_bug_1922053.py` | 113 | 63 | nova |
| `tests/functional/regressions/test_bug_1928063.py` | 56 | 31 | nova |
| `tests/functional/regressions/test_bug_1937084.py` | 77 | 48 | nova |
| `tests/functional/regressions/test_bug_1937375.py` | 77 | 38 | nova |
| `tests/functional/regressions/test_bug_1938326.py` | 159 | 97 | nova |
| `tests/functional/regressions/test_bug_1939545.py` | 78 | 46 | nova |
| `tests/functional/regressions/test_bug_1943431.py` | 120 | 83 | nova |
| `tests/functional/regressions/test_bug_1944619.py` | 74 | 49 | nova |
| `tests/functional/regressions/test_bug_1978983.py` | 71 | 40 | nova |
| `tests/functional/regressions/test_bug_1980720.py` | 66 | 41 | nova |
| `tests/functional/regressions/test_bug_1983753.py` | 177 | 128 | nova |
| `tests/functional/regressions/test_bug_1995153.py` | 107 | 73 | nova |
| `tests/functional/regressions/test_bug_2007968.py` | 65 | 33 | nova |
| `tests/functional/regressions/test_bug_2016173.py` | 57 | 26 | nova |
| `tests/functional/regressions/test_bug_2025480.py` | 86 | 59 | nova |
| `tests/functional/regressions/test_bug_2040264.py` | 54 | 25 | nova |
| `tests/functional/regressions/test_bug_2044235.py` | 60 | 31 | nova |
| `tests/functional/regressions/test_bug_2048837.py` | 120 | 71 | nova |
| `tests/functional/regressions/test_bug_2062127.py` | 122 | 85 | nova |
| `tests/functional/regressions/test_bug_2062425.py` | 62 | 38 | nova |
| `tests/functional/regressions/test_bug_2074219.py` | 66 | 35 | nova |
| `tests/functional/regressions/test_bug_2077980.py` | 49 | 28 | nova |
| `tests/functional/regressions/test_bug_2079850.py` | 95 | 69 | nova |
| `tests/functional/regressions/test_bug_2080531.py` | 128 | 95 | nova |
| `tests/functional/regressions/test_bug_2085135.py` | 75 | 41 | nova |
| `tests/functional/regressions/test_bug_2085975.py` | 131 | 71 | nova |
| `tests/functional/regressions/test_bug_2088066.py` | 101 | 61 | nova |
| `tests/functional/regressions/test_bug_2098496.py` | 135 | 105 | nova |
| `tests/functional/regressions/test_bug_2098892.py` | 52 | 27 | nova |
| `tests/functional/regressions/test_bug_2102038.py` | 59 | 42 | nova |
| `tests/functional/regressions/test_bug_2108974.py` | 129 | 87 | nova |
| `tests/functional/regressions/test_bug_2111440.py` | 48 | 31 | nova |
| `tests/functional/regressions/test_bug_2112187.py` | 67 | 40 | nova |
| `tests/functional/regressions/test_bug_2125052.py` | 74 | 46 | nova |
| `tests/functional/regressions/test_bug_2125935.py` | 107 | 62 | nova |
| `tests/functional/regressions/test_bug_2127196.py` | 125 | 83 | nova |
| `tests/functional/regressions/test_bug_2134375.py` | 81 | 49 | nova |
| `tests/functional/regressions/test_bug_2139351.py` | 180 | 122 | nova |
| `tests/functional/regressions/test_bug_2140537.py` | 304 | 165 | nova |
| `tests/functional/regressions/test_bug_2140631.py` | 296 | 214 | nova |
| `tests/functional/regressions/test_bug_2143972.py` | 84 | 55 | nova |
| `tests/functional/regressions/test_bug_2152697.py` | 108 | 73 | nova |
| `tests/functional/regressions/test_bug_2153425.py` | 112 | 72 | nova |
| `tests/functional/regressions/test_bug_2154495.py` | 114 | 76 | nova |
| `tests/functional/regressions/test_bug_2160224.py` | 77 | 39 | nova |
| `tests/functional/regressions/test_bug_2164869.py` | 79 | 51 | nova |
| `tests/functional/regressions/test_bug_2166786.py` | 303 | 216 | nova |
| `tests/functional/test_aggregates.py` | 1110 | 771 | nova |
| `tests/functional/test_availability_zones.py` | 584 | 376 | nova |
| `tests/functional/test_boot_from_volume.py` | 277 | 166 | nova |
| `tests/functional/test_cold_migrate.py` | 121 | 80 | nova |
| `tests/functional/test_compute_mgr.py` | 85 | 62 | nova |
| `tests/functional/test_conf_max_attach_disk_devices.py` | 94 | 63 | nova |
| `tests/functional/test_cross_az_attach.py` | 184 | 137 | nova |
| `tests/functional/test_cross_cell_migrate.py` | 1205 | 800 | nova |
| `tests/functional/test_ephemeral_encryption.py` | 381 | 308 | nova |
| `tests/functional/test_external_networks.py` | 76 | 49 | nova |
| `tests/functional/test_flavor_extraspecs.py` | 144 | 93 | nova |
| `tests/functional/test_graceful_shutdown.py` | 1005 | 658 | nova |
| `tests/functional/test_images.py` | 103 | 61 | nova |
| `tests/functional/test_instance_actions.py` | 277 | 169 | nova |
| `tests/functional/test_ip_allocation.py` | 53 | 33 | nova |
| `tests/functional/test_json_filter.py` | 69 | 36 | nova |
| `tests/functional/test_legacy_v2_compatible_wrapper.py` | 83 | 59 | nova |
| `tests/functional/test_list_servers_ip_filter.py` | 110 | 69 | nova |
| `tests/functional/test_metadata.py` | 190 | 132 | nova |
| `tests/functional/test_middleware.py` | 152 | 101 | nova |
| `tests/functional/test_multiattach.py` | 71 | 46 | nova |
| `tests/functional/test_nova_manage.py` | 2935 | 2056 | nova |
| `tests/functional/test_policy.py` | 169 | 96 | nova |
| `tests/functional/test_report_client.py` | 1585 | 1200 | nova |
| `tests/functional/test_routed_networks.py` | 529 | 387 | nova |
| `tests/functional/test_scheduler.py` | 245 | 188 | nova |
| `tests/functional/test_server_external_events.py` | 95 | 70 | nova |
| `tests/functional/test_server_faults.py` | 109 | 59 | nova |
| `tests/functional/test_server_group.py` | 1159 | 790 | nova |
| `tests/functional/test_server_rescue.py` | 168 | 130 | nova |
| `tests/functional/test_servers.py` | 7112 | 4767 | nova |
| `tests/functional/test_servers_provider_tree.py` | 763 | 577 | nova |
| `tests/functional/test_servers_resource_request.py` | 3123 | 2183 | nova |
| `tests/functional/test_service.py` | 197 | 124 | nova |
| `tests/functional/test_unified_limits.py` | 497 | 332 | nova |
| `tests/functional/wsgi/__init__.py` | 0 | 0 | nova |
| `tests/functional/wsgi/test_flavor_manage.py` | 256 | 161 | nova |
| `tests/functional/wsgi/test_interfaces.py` | 52 | 24 | nova |
| `tests/functional/wsgi/test_secgroup.py` | 89 | 45 | nova |
| `tests/functional/wsgi/test_servers.py` | 439 | 347 | nova |
| `tests/functional/wsgi/test_services.py` | 387 | 239 | nova |
| `tests/json_ref.py` | 65 | 37 | nova |
| `tests/unit/__init__.py` | 45 | 9 | nova |
| `tests/unit/accelerator/__init__.py` | 0 | 0 | nova |
| `tests/unit/accelerator/test_cyborg.py` | 521 | 405 | nova |
| `tests/unit/api/__init__.py` | 0 | 0 | nova |
| `tests/unit/api/openstack/__init__.py` | 0 | 0 | nova |
| `tests/unit/api/openstack/common.py` | 55 | 27 | nova |
| `tests/unit/api/openstack/compute/__init__.py` | 0 | 0 | nova |
| `tests/unit/api/openstack/compute/admin_only_action_common.py` | 291 | 227 | nova |
| `tests/unit/api/openstack/compute/dummy_schema.py` | 45 | 29 | nova |
| `tests/unit/api/openstack/compute/microversions.py` | 121 | 78 | nova |
| `tests/unit/api/openstack/compute/test_access_ips.py` | 151 | 107 | nova |
| `tests/unit/api/openstack/compute/test_admin_actions.py` | 46 | 24 | nova |
| `tests/unit/api/openstack/compute/test_admin_password.py` | 160 | 117 | nova |
| `tests/unit/api/openstack/compute/test_aggregates.py` | 799 | 645 | nova |
| `tests/unit/api/openstack/compute/test_api.py` | 172 | 113 | nova |
| `tests/unit/api/openstack/compute/test_assisted_snapshots.py` | 255 | 203 | nova |
| `tests/unit/api/openstack/compute/test_attach_interfaces.py` | 671 | 570 | nova |
| `tests/unit/api/openstack/compute/test_availability_zone.py` | 321 | 264 | nova |
| `tests/unit/api/openstack/compute/test_baremetal_nodes.py` | 195 | 146 | nova |
| `tests/unit/api/openstack/compute/test_certificates.py` | 44 | 22 | nova |
| `tests/unit/api/openstack/compute/test_cloudpipe.py` | 46 | 23 | nova |
| `tests/unit/api/openstack/compute/test_cloudpipe_update.py` | 32 | 13 | nova |
| `tests/unit/api/openstack/compute/test_console_auth_tokens.py` | 133 | 96 | nova |
| `tests/unit/api/openstack/compute/test_console_output.py` | 151 | 103 | nova |
| `tests/unit/api/openstack/compute/test_create_backup.py` | 423 | 351 | nova |
| `tests/unit/api/openstack/compute/test_deferred_delete.py` | 172 | 130 | nova |
| `tests/unit/api/openstack/compute/test_disk_config.py` | 423 | 342 | nova |
| `tests/unit/api/openstack/compute/test_evacuate.py` | 447 | 344 | nova |
| `tests/unit/api/openstack/compute/test_extended_ips.py` | 147 | 113 | nova |
| `tests/unit/api/openstack/compute/test_extended_ips_mac.py` | 152 | 118 | nova |
| `tests/unit/api/openstack/compute/test_extension_info.py` | 49 | 28 | nova |
| `tests/unit/api/openstack/compute/test_flavor_access.py` | 407 | 328 | nova |
| `tests/unit/api/openstack/compute/test_flavor_disabled.py` | 62 | 36 | nova |
| `tests/unit/api/openstack/compute/test_flavor_manage.py` | 587 | 460 | nova |
| `tests/unit/api/openstack/compute/test_flavorextradata.py` | 87 | 62 | nova |
| `tests/unit/api/openstack/compute/test_flavors.py` | 1080 | 939 | nova |
| `tests/unit/api/openstack/compute/test_flavors_extraspecs.py` | 454 | 359 | nova |
| `tests/unit/api/openstack/compute/test_floating_ip_pools.py` | 74 | 45 | nova |
| `tests/unit/api/openstack/compute/test_floating_ips.py` | 149 | 108 | nova |
| `tests/unit/api/openstack/compute/test_hosts.py` | 451 | 341 | nova |
| `tests/unit/api/openstack/compute/test_hypervisors.py` | 1567 | 1273 | nova |
| `tests/unit/api/openstack/compute/test_image_metadata.py` | 376 | 307 | nova |
| `tests/unit/api/openstack/compute/test_images.py` | 457 | 392 | nova |
| `tests/unit/api/openstack/compute/test_instance_actions.py` | 462 | 373 | nova |
| `tests/unit/api/openstack/compute/test_instance_usage_audit_log.py` | 186 | 138 | nova |
| `tests/unit/api/openstack/compute/test_keypairs.py` | 599 | 485 | nova |
| `tests/unit/api/openstack/compute/test_limits.py` | 526 | 430 | nova |
| `tests/unit/api/openstack/compute/test_lock_server.py` | 120 | 80 | nova |
| `tests/unit/api/openstack/compute/test_microversions.py` | 268 | 206 | nova |
| `tests/unit/api/openstack/compute/test_migrate_server.py` | 627 | 497 | nova |
| `tests/unit/api/openstack/compute/test_migrations.py` | 503 | 417 | nova |
| `tests/unit/api/openstack/compute/test_multinic.py` | 171 | 120 | nova |
| `tests/unit/api/openstack/compute/test_networks.py` | 157 | 106 | nova |
| `tests/unit/api/openstack/compute/test_pause_server.py` | 59 | 35 | nova |
| `tests/unit/api/openstack/compute/test_quota_classes.py` | 382 | 319 | nova |
| `tests/unit/api/openstack/compute/test_quota_sets.py` | 1102 | 938 | nova |
| `tests/unit/api/openstack/compute/test_remote_consoles.py` | 505 | 421 | nova |
| `tests/unit/api/openstack/compute/test_rescue.py` | 278 | 212 | nova |
| `tests/unit/api/openstack/compute/test_schemas.py` | 147 | 105 | nova |
| `tests/unit/api/openstack/compute/test_security_groups.py` | 1629 | 1310 | nova |
| `tests/unit/api/openstack/compute/test_server_actions.py` | 1337 | 1062 | nova |
| `tests/unit/api/openstack/compute/test_server_diagnostics.py` | 176 | 136 | nova |
| `tests/unit/api/openstack/compute/test_server_external_events.py` | 294 | 232 | nova |
| `tests/unit/api/openstack/compute/test_server_group_quotas.py` | 283 | 210 | nova |
| `tests/unit/api/openstack/compute/test_server_groups.py` | 828 | 642 | nova |
| `tests/unit/api/openstack/compute/test_server_metadata.py` | 704 | 570 | nova |
| `tests/unit/api/openstack/compute/test_server_migrations.py` | 353 | 288 | nova |
| `tests/unit/api/openstack/compute/test_server_password.py` | 61 | 37 | nova |
| `tests/unit/api/openstack/compute/test_server_reset_state.py` | 156 | 116 | nova |
| `tests/unit/api/openstack/compute/test_server_shares.py` | 410 | 350 | nova |
| `tests/unit/api/openstack/compute/test_server_start_stop.py` | 119 | 89 | nova |
| `tests/unit/api/openstack/compute/test_server_tags.py` | 333 | 268 | nova |
| `tests/unit/api/openstack/compute/test_server_topology.py` | 100 | 72 | nova |
| `tests/unit/api/openstack/compute/test_servers.py` | 8704 | 7227 | nova |
| `tests/unit/api/openstack/compute/test_services.py` | 1370 | 1199 | nova |
| `tests/unit/api/openstack/compute/test_shelve.py` | 450 | 389 | nova |
| `tests/unit/api/openstack/compute/test_simple_tenant_usage.py` | 628 | 495 | nova |
| `tests/unit/api/openstack/compute/test_snapshots.py` | 248 | 189 | nova |
| `tests/unit/api/openstack/compute/test_suspend_server.py` | 81 | 57 | nova |
| `tests/unit/api/openstack/compute/test_tenant_networks.py` | 137 | 94 | nova |
| `tests/unit/api/openstack/compute/test_urlmap.py` | 133 | 98 | nova |
| `tests/unit/api/openstack/compute/test_versions.py` | 519 | 440 | nova |
| `tests/unit/api/openstack/compute/test_volume_attachments.py` | 1470 | 1279 | nova |
| `tests/unit/api/openstack/compute/test_volumes.py` | 365 | 291 | nova |
| `tests/unit/api/openstack/compute/test_volumes_boot.py` | 63 | 43 | nova |
| `tests/unit/api/openstack/fakes.py` | 804 | 624 | nova |
| `tests/unit/api/openstack/test_api_version_request.py` | 135 | 95 | nova |
| `tests/unit/api/openstack/test_common.py` | 627 | 487 | nova |
| `tests/unit/api/openstack/test_faults.py` | 152 | 95 | nova |
| `tests/unit/api/openstack/test_legacy_v2_compatible_wrapper.py` | 205 | 159 | nova |
| `tests/unit/api/openstack/test_mapper.py` | 46 | 25 | nova |
| `tests/unit/api/openstack/test_requestlog.py` | 145 | 94 | nova |
| `tests/unit/api/openstack/test_wsgi.py` | 974 | 769 | nova |
| `tests/unit/api/openstack/test_wsgi_app.py` | 153 | 107 | nova |
| `tests/unit/api/test_auth.py` | 147 | 100 | nova |
| `tests/unit/api/test_compute_req_id.py` | 43 | 20 | nova |
| `tests/unit/api/test_wsgi.py` | 122 | 79 | nova |
| `tests/unit/api/test_wsgi_loader.py` | 39 | 17 | nova |
| `tests/unit/api/validation/__init__.py` | 0 | 0 | nova |
| `tests/unit/api/validation/extra_specs/__init__.py` | 0 | 0 | nova |
| `tests/unit/api/validation/extra_specs/test_validators.py` | 149 | 118 | nova |
| `tests/unit/cmd/__init__.py` | 0 | 0 | nova |
| `tests/unit/cmd/test_baseproxy.py` | 128 | 101 | nova |
| `tests/unit/cmd/test_common.py` | 132 | 90 | nova |
| `tests/unit/cmd/test_compute.py` | 96 | 64 | nova |
| `tests/unit/cmd/test_manage.py` | 4441 | 3844 | nova |
| `tests/unit/cmd/test_policy.py` | 209 | 162 | nova |
| `tests/unit/cmd/test_scheduler.py` | 78 | 52 | nova |
| `tests/unit/cmd/test_status.py` | 464 | 357 | nova |
| `tests/unit/compute/__init__.py` | 0 | 0 | nova |
| `tests/unit/compute/fake_resource_tracker.py` | 34 | 12 | nova |
| `tests/unit/compute/monitors/__init__.py` | 0 | 0 | nova |
| `tests/unit/compute/monitors/cpu/__init__.py` | 0 | 0 | nova |
| `tests/unit/compute/monitors/cpu/test_virt_driver.py` | 86 | 53 | nova |
| `tests/unit/compute/monitors/test_monitors.py` | 62 | 35 | nova |
| `tests/unit/compute/test_api.py` | 8967 | 7705 | nova |
| `tests/unit/compute/test_claims.py` | 426 | 354 | nova |
| `tests/unit/compute/test_compute.py` | 14744 | 12149 | nova |
| `tests/unit/compute/test_compute_mgr.py` | 17902 | 15523 | nova |
| `tests/unit/compute/test_flavors.py` | 366 | 273 | nova |
| `tests/unit/compute/test_host_api.py` | 694 | 589 | nova |
| `tests/unit/compute/test_instance_list.py` | 369 | 254 | nova |
| `tests/unit/compute/test_keypairs.py` | 351 | 272 | nova |
| `tests/unit/compute/test_multi_cell_list.py` | 456 | 291 | nova |
| `tests/unit/compute/test_pci_placement_translator.py` | 662 | 548 | nova |
| `tests/unit/compute/test_provider_config.py` | 458 | 382 | nova |
| `tests/unit/compute/test_provider_tree.py` | 816 | 616 | nova |
| `tests/unit/compute/test_resource_tracker.py` | 4920 | 3987 | nova |
| `tests/unit/compute/test_rpcapi.py` | 1427 | 1203 | nova |
| `tests/unit/compute/test_shelve.py` | 1734 | 1381 | nova |
| `tests/unit/compute/test_stats.py` | 272 | 210 | nova |
| `tests/unit/compute/test_utils.py` | 1812 | 1507 | nova |
| `tests/unit/compute/test_virtapi.py` | 382 | 305 | nova |
| `tests/unit/conductor/__init__.py` | 0 | 0 | nova |
| `tests/unit/conductor/tasks/__init__.py` | 0 | 0 | nova |
| `tests/unit/conductor/tasks/test_base.py` | 53 | 31 | nova |
| `tests/unit/conductor/tasks/test_cross_cell_migrate.py` | 1651 | 1334 | nova |
| `tests/unit/conductor/tasks/test_live_migrate.py` | 1002 | 867 | nova |
| `tests/unit/conductor/tasks/test_migrate.py` | 442 | 365 | nova |
| `tests/unit/conductor/test_conductor.py` | 5525 | 4702 | nova |
| `tests/unit/conf/__init__.py` | 0 | 0 | nova |
| `tests/unit/conf/test_base.py` | 28 | 9 | nova |
| `tests/unit/conf/test_devices.py` | 36 | 16 | nova |
| `tests/unit/conf/test_neutron.py` | 35 | 13 | nova |
| `tests/unit/console/__init__.py` | 0 | 0 | nova |
| `tests/unit/console/rfb/__init__.py` | 0 | 0 | nova |
| `tests/unit/console/rfb/test_auth.py` | 73 | 41 | nova |
| `tests/unit/console/rfb/test_authnone.py` | 36 | 13 | nova |
| `tests/unit/console/rfb/test_authvencrypt.py` | 218 | 148 | nova |
| `tests/unit/console/securityproxy/__init__.py` | 0 | 0 | nova |
| `tests/unit/console/securityproxy/test_rfb.py` | 308 | 215 | nova |
| `tests/unit/console/test_serial.py` | 123 | 83 | nova |
| `tests/unit/console/test_type.py` | 56 | 30 | nova |
| `tests/unit/console/test_websocketproxy.py` | 947 | 748 | nova |
| `tests/unit/db/__init__.py` | 18 | 4 | nova |
| `tests/unit/db/api/__init__.py` | 0 | 0 | nova |
| `tests/unit/db/api/test_api.py` | 24 | 8 | nova |
| `tests/unit/db/api/test_migrations.py` | 268 | 183 | nova |
| `tests/unit/db/main/__init__.py` | 0 | 0 | nova |
| `tests/unit/db/main/test_api.py` | 7729 | 6059 | nova |
| `tests/unit/db/main/test_migrations.py` | 463 | 337 | nova |
| `tests/unit/db/test_migration.py` | 108 | 73 | nova |
| `tests/unit/db/test_models.py` | 63 | 41 | nova |
| `tests/unit/db/test_utils.py` | 161 | 116 | nova |
| `tests/unit/fake_block_device.py` | 61 | 35 | nova |
| `tests/unit/fake_build_request.py` | 100 | 76 | nova |
| `tests/unit/fake_console_auth_token.py` | 36 | 19 | nova |
| `tests/unit/fake_crypto.py` | 48 | 30 | nova |
| `tests/unit/fake_diagnostics.py` | 42 | 19 | nova |
| `tests/unit/fake_flavor.py` | 56 | 35 | nova |
| `tests/unit/fake_hosts.py` | 39 | 17 | nova |
| `tests/unit/fake_instance.py` | 167 | 137 | nova |
| `tests/unit/fake_ldap.py` | 326 | 227 | nova |
| `tests/unit/fake_loadables/__init__.py` | 27 | 9 | nova |
| `tests/unit/fake_loadables/fake_loadable1.py` | 44 | 18 | nova |
| `tests/unit/fake_loadables/fake_loadable2.py` | 39 | 15 | nova |
| `tests/unit/fake_network.py` | 228 | 185 | nova |
| `tests/unit/fake_network_cache_model.py` | 111 | 82 | nova |
| `tests/unit/fake_pci_device_pools.py` | 38 | 17 | nova |
| `tests/unit/fake_policy.py` | 221 | 204 | nova |
| `tests/unit/fake_processutils.py` | 105 | 61 | nova |
| `tests/unit/fake_request_spec.py` | 98 | 74 | nova |
| `tests/unit/fake_requests.py` | 39 | 22 | nova |
| `tests/unit/fake_server_actions.py` | 134 | 108 | nova |
| `tests/unit/fake_volume.py` | 272 | 213 | nova |
| `tests/unit/fixtures/__init__.py` | 0 | 0 | nova |
| `tests/unit/fixtures/test_libvirt.py` | 482 | 410 | nova |
| `tests/unit/fixtures/test_notifications.py` | 77 | 43 | nova |
| `tests/unit/image/__init__.py` | 0 | 0 | nova |
| `tests/unit/image/fake.py` | 50 | 25 | nova |
| `tests/unit/image/test_glance.py` | 2276 | 1920 | nova |
| `tests/unit/image_fixtures.py` | 79 | 47 | nova |
| `tests/unit/keymgr/__init__.py` | 0 | 0 | nova |
| `tests/unit/keymgr/fake.py` | 24 | 4 | nova |
| `tests/unit/keymgr/test_conf_key_mgr.py` | 111 | 69 | nova |
| `tests/unit/limit/__init__.py` | 0 | 0 | nova |
| `tests/unit/limit/test_local.py` | 259 | 208 | nova |
| `tests/unit/limit/test_placement.py` | 449 | 342 | nova |
| `tests/unit/matchers.py` | 583 | 437 | nova |
| `tests/unit/network/__init__.py` | 0 | 0 | nova |
| `tests/unit/network/security_group/__init__.py` | 0 | 0 | nova |
| `tests/unit/network/test_network_info.py` | 1358 | 1154 | nova |
| `tests/unit/network/test_neutron.py` | 10258 | 8826 | nova |
| `tests/unit/network/test_os_vif_util.py` | 1334 | 1178 | nova |
| `tests/unit/network/test_security_group.py` | 434 | 366 | nova |
| `tests/unit/notifications/__init__.py` | 0 | 0 | nova |
| `tests/unit/notifications/objects/__init__.py` | 0 | 0 | nova |
| `tests/unit/notifications/objects/test_exception.py` | 53 | 30 | nova |
| `tests/unit/notifications/objects/test_flavor.py` | 147 | 115 | nova |
| `tests/unit/notifications/objects/test_instance.py` | 215 | 170 | nova |
| `tests/unit/notifications/objects/test_notification.py` | 497 | 398 | nova |
| `tests/unit/notifications/objects/test_service.py` | 102 | 73 | nova |
| `tests/unit/notifications/test_base.py` | 132 | 101 | nova |
| `tests/unit/objects/__init__.py` | 0 | 0 | nova |
| `tests/unit/objects/test_aggregate.py` | 291 | 233 | nova |
| `tests/unit/objects/test_block_device.py` | 613 | 479 | nova |
| `tests/unit/objects/test_build_request.py` | 229 | 162 | nova |
| `tests/unit/objects/test_cell_mapping.py` | 341 | 270 | nova |
| `tests/unit/objects/test_compute_node.py` | 755 | 634 | nova |
| `tests/unit/objects/test_console_auth_token.py` | 242 | 183 | nova |
| `tests/unit/objects/test_diagnostics.py` | 146 | 113 | nova |
| `tests/unit/objects/test_ec2.py` | 200 | 143 | nova |
| `tests/unit/objects/test_external_event.py` | 55 | 30 | nova |
| `tests/unit/objects/test_fields.py` | 744 | 564 | nova |
| `tests/unit/objects/test_flavor.py` | 581 | 452 | nova |
| `tests/unit/objects/test_host_mapping.py` | 352 | 281 | nova |
| `tests/unit/objects/test_hv_spec.py` | 79 | 46 | nova |
| `tests/unit/objects/test_image_meta.py` | 695 | 566 | nova |
| `tests/unit/objects/test_instance.py` | 2430 | 1997 | nova |
| `tests/unit/objects/test_instance_action.py` | 438 | 371 | nova |
| `tests/unit/objects/test_instance_device_metadata.py` | 103 | 74 | nova |
| `tests/unit/objects/test_instance_fault.py` | 108 | 79 | nova |
| `tests/unit/objects/test_instance_group.py` | 414 | 346 | nova |
| `tests/unit/objects/test_instance_info_cache.py` | 127 | 93 | nova |
| `tests/unit/objects/test_instance_mapping.py` | 261 | 207 | nova |
| `tests/unit/objects/test_instance_numa.py` | 575 | 404 | nova |
| `tests/unit/objects/test_instance_pci_requests.py` | 180 | 143 | nova |
| `tests/unit/objects/test_keypair.py` | 169 | 121 | nova |
| `tests/unit/objects/test_migrate_data.py` | 332 | 269 | nova |
| `tests/unit/objects/test_migration.py` | 416 | 351 | nova |
| `tests/unit/objects/test_migration_context.py` | 158 | 123 | nova |
| `tests/unit/objects/test_monitor_metric.py` | 109 | 80 | nova |
| `tests/unit/objects/test_network_request.py` | 148 | 109 | nova |
| `tests/unit/objects/test_numa.py` | 455 | 376 | nova |
| `tests/unit/objects/test_objects.py` | 1397 | 1084 | nova |
| `tests/unit/objects/test_pci_device.py` | 1010 | 819 | nova |
| `tests/unit/objects/test_pci_device_pool.py` | 112 | 77 | nova |
| `tests/unit/objects/test_quotas.py` | 407 | 327 | nova |
| `tests/unit/objects/test_request_spec.py` | 2117 | 1788 | nova |
| `tests/unit/objects/test_resource.py` | 122 | 86 | nova |
| `tests/unit/objects/test_security_group.py` | 199 | 153 | nova |
| `tests/unit/objects/test_selection.py` | 198 | 159 | nova |
| `tests/unit/objects/test_service.py` | 570 | 477 | nova |
| `tests/unit/objects/test_share_mapping.py` | 437 | 367 | nova |
| `tests/unit/objects/test_tag.py` | 115 | 74 | nova |
| `tests/unit/objects/test_task_log.py` | 138 | 108 | nova |
| `tests/unit/objects/test_trusted_certs.py` | 43 | 22 | nova |
| `tests/unit/objects/test_vcpu_model.py` | 101 | 70 | nova |
| `tests/unit/objects/test_virt_cpu_topology.py` | 46 | 24 | nova |
| `tests/unit/objects/test_virtual_interface.py` | 191 | 142 | nova |
| `tests/unit/objects/test_volume_usage.py` | 93 | 69 | nova |
| `tests/unit/pci/__init__.py` | 0 | 0 | nova |
| `tests/unit/pci/fakes.py` | 40 | 19 | nova |
| `tests/unit/pci/test_devspec.py` | 708 | 585 | nova |
| `tests/unit/pci/test_manager.py` | 1020 | 828 | nova |
| `tests/unit/pci/test_request.py` | 614 | 511 | nova |
| `tests/unit/pci/test_stats.py` | 1993 | 1654 | nova |
| `tests/unit/pci/test_utils.py` | 430 | 359 | nova |
| `tests/unit/pci/test_whitelist.py` | 142 | 110 | nova |
| `tests/unit/policies/__init__.py` | 0 | 0 | nova |
| `tests/unit/policies/base.py` | 363 | 230 | nova |
| `tests/unit/policies/test_admin_actions.py` | 79 | 52 | nova |
| `tests/unit/policies/test_admin_password.py` | 106 | 74 | nova |
| `tests/unit/policies/test_aggregates.py` | 150 | 116 | nova |
| `tests/unit/policies/test_assisted_volume_snapshots.py` | 79 | 54 | nova |
| `tests/unit/policies/test_attach_interfaces.py` | 205 | 152 | nova |
| `tests/unit/policies/test_availability_zone.py` | 63 | 36 | nova |
| `tests/unit/policies/test_baremetal_nodes.py` | 78 | 47 | nova |
| `tests/unit/policies/test_console_auth_tokens.py` | 69 | 41 | nova |
| `tests/unit/policies/test_console_output.py` | 78 | 50 | nova |
| `tests/unit/policies/test_create_backup.py` | 85 | 55 | nova |
| `tests/unit/policies/test_deferred_delete.py` | 118 | 84 | nova |
| `tests/unit/policies/test_evacuate.py` | 115 | 84 | nova |
| `tests/unit/policies/test_extensions.py` | 56 | 35 | nova |
| `tests/unit/policies/test_flavor_access.py` | 107 | 75 | nova |
| `tests/unit/policies/test_flavor_extra_specs.py` | 217 | 164 | nova |
| `tests/unit/policies/test_flavor_manage.py` | 104 | 78 | nova |
| `tests/unit/policies/test_floating_ip_pools.py` | 50 | 28 | nova |
| `tests/unit/policies/test_floating_ips.py` | 205 | 164 | nova |
| `tests/unit/policies/test_hosts.py` | 102 | 72 | nova |
| `tests/unit/policies/test_hypervisors.py` | 148 | 118 | nova |
| `tests/unit/policies/test_instance_actions.py` | 254 | 180 | nova |
| `tests/unit/policies/test_instance_usage_audit_log.py` | 68 | 44 | nova |
| `tests/unit/policies/test_keypairs.py` | 152 | 112 | nova |
| `tests/unit/policies/test_limits.py` | 109 | 75 | nova |
| `tests/unit/policies/test_lock_server.py` | 168 | 119 | nova |
| `tests/unit/policies/test_migrate_server.py` | 156 | 115 | nova |
| `tests/unit/policies/test_migrations.py` | 287 | 218 | nova |
| `tests/unit/policies/test_multinic.py` | 96 | 65 | nova |
| `tests/unit/policies/test_networks.py` | 93 | 61 | nova |
| `tests/unit/policies/test_pause_server.py` | 114 | 81 | nova |
| `tests/unit/policies/test_quota_class_sets.py` | 75 | 50 | nova |
| `tests/unit/policies/test_quota_sets.py` | 181 | 141 | nova |
| `tests/unit/policies/test_remote_consoles.py` | 84 | 56 | nova |
| `tests/unit/policies/test_rescue.py` | 120 | 87 | nova |
| `tests/unit/policies/test_security_groups.py` | 319 | 257 | nova |
| `tests/unit/policies/test_server_diagnostics.py` | 109 | 75 | nova |
| `tests/unit/policies/test_server_external_events.py` | 65 | 40 | nova |
| `tests/unit/policies/test_server_groups.py` | 191 | 141 | nova |
| `tests/unit/policies/test_server_ips.py` | 89 | 62 | nova |
| `tests/unit/policies/test_server_metadata.py` | 126 | 91 | nova |
| `tests/unit/policies/test_server_migrations.py` | 237 | 188 | nova |
| `tests/unit/policies/test_server_password.py` | 95 | 64 | nova |
| `tests/unit/policies/test_server_tags.py` | 138 | 104 | nova |
| `tests/unit/policies/test_server_topology.py` | 102 | 70 | nova |
| `tests/unit/policies/test_servers.py` | 1416 | 1135 | nova |
| `tests/unit/policies/test_services.py` | 87 | 56 | nova |
| `tests/unit/policies/test_shelve.py` | 127 | 89 | nova |
| `tests/unit/policies/test_simple_tenant_usage.py` | 80 | 51 | nova |
| `tests/unit/policies/test_snapshots.py` | 165 | 126 | nova |
| `tests/unit/policies/test_suspend_server.py` | 112 | 78 | nova |
| `tests/unit/policies/test_tenant_networks.py` | 91 | 60 | nova |
| `tests/unit/policies/test_volume_attachments.py` | 233 | 177 | nova |
| `tests/unit/policies/test_volumes.py` | 178 | 141 | nova |
| `tests/unit/privsep/__init__.py` | 0 | 0 | nova |
| `tests/unit/privsep/test_fs.py` | 288 | 230 | nova |
| `tests/unit/privsep/test_idmapshift.py` | 417 | 316 | nova |
| `tests/unit/privsep/test_libvirt.py` | 217 | 166 | nova |
| `tests/unit/privsep/test_linux_net.py` | 123 | 81 | nova |
| `tests/unit/privsep/test_path.py` | 172 | 128 | nova |
| `tests/unit/privsep/test_qemu.py` | 228 | 174 | nova |
| `tests/unit/privsep/test_utils.py` | 136 | 83 | nova |
| `tests/unit/scheduler/__init__.py` | 0 | 0 | nova |
| `tests/unit/scheduler/client/__init__.py` | 0 | 0 | nova |
| `tests/unit/scheduler/client/test_query.py` | 76 | 53 | nova |
| `tests/unit/scheduler/client/test_report.py` | 4796 | 4040 | nova |
| `tests/unit/scheduler/fakes.py` | 227 | 194 | nova |
| `tests/unit/scheduler/filters/__init__.py` | 0 | 0 | nova |
| `tests/unit/scheduler/filters/test_affinity_filters.py` | 252 | 191 | nova |
| `tests/unit/scheduler/filters/test_aggregate_image_properties_isolation_filters.py` | 150 | 122 | nova |
| `tests/unit/scheduler/filters/test_aggregate_instance_extra_specs_filters.py` | 92 | 61 | nova |
| `tests/unit/scheduler/filters/test_aggregate_multitenancy_isolation_filters.py` | 92 | 64 | nova |
| `tests/unit/scheduler/filters/test_compute_capabilities_filters.py` | 207 | 153 | nova |
| `tests/unit/scheduler/filters/test_compute_filters.py` | 54 | 36 | nova |
| `tests/unit/scheduler/filters/test_extra_specs_ops.py` | 235 | 186 | nova |
| `tests/unit/scheduler/filters/test_image_props_filters.py` | 303 | 264 | nova |
| `tests/unit/scheduler/filters/test_io_ops_filters.py` | 62 | 42 | nova |
| `tests/unit/scheduler/filters/test_isolated_hosts_filter.py` | 89 | 55 | nova |
| `tests/unit/scheduler/filters/test_json_filters.py` | 272 | 218 | nova |
| `tests/unit/scheduler/filters/test_metrics_filters.py` | 52 | 35 | nova |
| `tests/unit/scheduler/filters/test_num_instances_filters.py` | 62 | 41 | nova |
| `tests/unit/scheduler/filters/test_numa_topology_filters.py` | 418 | 343 | nova |
| `tests/unit/scheduler/filters/test_pci_passthrough_filters.py` | 185 | 143 | nova |
| `tests/unit/scheduler/filters/test_type_filters.py` | 109 | 63 | nova |
| `tests/unit/scheduler/filters/test_utils.py` | 109 | 73 | nova |
| `tests/unit/scheduler/ironic_fakes.py` | 107 | 86 | nova |
| `tests/unit/scheduler/test_filters.py` | 235 | 165 | nova |
| `tests/unit/scheduler/test_host_filters.py` | 37 | 19 | nova |
| `tests/unit/scheduler/test_host_manager.py` | 1711 | 1436 | nova |
| `tests/unit/scheduler/test_manager.py` | 2311 | 1923 | nova |
| `tests/unit/scheduler/test_request_filter.py` | 1109 | 944 | nova |
| `tests/unit/scheduler/test_rpcapi.py` | 168 | 129 | nova |
| `tests/unit/scheduler/test_utils.py` | 2826 | 2466 | nova |
| `tests/unit/scheduler/weights/__init__.py` | 0 | 0 | nova |
| `tests/unit/scheduler/weights/test_cross_cell.py` | 142 | 104 | nova |
| `tests/unit/scheduler/weights/test_weights_affinity.py` | 258 | 202 | nova |
| `tests/unit/scheduler/weights/test_weights_compute.py` | 116 | 88 | nova |
| `tests/unit/scheduler/weights/test_weights_cpu.py` | 190 | 113 | nova |
| `tests/unit/scheduler/weights/test_weights_disk.py` | 171 | 102 | nova |
| `tests/unit/scheduler/weights/test_weights_hosts.py` | 43 | 25 | nova |
| `tests/unit/scheduler/weights/test_weights_hypervisor_version.py` | 97 | 76 | nova |
| `tests/unit/scheduler/weights/test_weights_image_props.py` | 269 | 185 | nova |
| `tests/unit/scheduler/weights/test_weights_ioopsweight.py` | 126 | 95 | nova |
| `tests/unit/scheduler/weights/test_weights_metrics.py` | 243 | 158 | nova |
| `tests/unit/scheduler/weights/test_weights_num_instances.py` | 71 | 49 | nova |
| `tests/unit/scheduler/weights/test_weights_pci.py` | 232 | 161 | nova |
| `tests/unit/scheduler/weights/test_weights_ram.py` | 171 | 102 | nova |
| `tests/unit/servicegroup/__init__.py` | 0 | 0 | nova |
| `tests/unit/servicegroup/test_api.py` | 73 | 46 | nova |
| `tests/unit/servicegroup/test_db_servicegroup.py` | 130 | 89 | nova |
| `tests/unit/servicegroup/test_mc_servicegroup.py` | 104 | 72 | nova |
| `tests/unit/share/__init__.py` | 0 | 0 | nova |
| `tests/unit/storage/__init__.py` | 0 | 0 | nova |
| `tests/unit/storage/test_rbd.py` | 704 | 578 | nova |
| `tests/unit/test_api_validation.py` | 1085 | 831 | nova |
| `tests/unit/test_availability_zones.py` | 296 | 205 | nova |
| `tests/unit/test_baserpc.py` | 45 | 23 | nova |
| `tests/unit/test_block_device.py` | 865 | 743 | nova |
| `tests/unit/test_cache.py` | 59 | 39 | nova |
| `tests/unit/test_cinder.py` | 257 | 185 | nova |
| `tests/unit/test_conf.py` | 110 | 74 | nova |
| `tests/unit/test_configdrive2.py` | 124 | 86 | nova |
| `tests/unit/test_context.py` | 705 | 526 | nova |
| `tests/unit/test_crypto.py` | 474 | 382 | nova |
| `tests/unit/test_exception.py` | 171 | 107 | nova |
| `tests/unit/test_exception_wrapper.py` | 143 | 103 | nova |
| `tests/unit/test_filesystem.py` | 121 | 94 | nova |
| `tests/unit/test_fixtures.py` | 649 | 460 | nova |
| `tests/unit/test_hacking.py` | 1145 | 945 | nova |
| `tests/unit/test_identity.py` | 132 | 89 | nova |
| `tests/unit/test_json_ref.py` | 170 | 130 | nova |
| `tests/unit/test_loadables.py` | 113 | 84 | nova |
| `tests/unit/test_manager.py` | 362 | 261 | nova |
| `tests/unit/test_manila.py` | 621 | 541 | nova |
| `tests/unit/test_matchers.py` | 597 | 519 | nova |
| `tests/unit/test_metadata.py` | 1870 | 1471 | nova |
| `tests/unit/test_notifications.py` | 536 | 406 | nova |
| `tests/unit/test_notifier.py` | 55 | 34 | nova |
| `tests/unit/test_policy.py` | 649 | 540 | nova |
| `tests/unit/test_profiler.py` | 82 | 42 | nova |
| `tests/unit/test_quota.py` | 2387 | 2060 | nova |
| `tests/unit/test_rpc.py` | 470 | 349 | nova |
| `tests/unit/test_safeutils.py` | 89 | 60 | nova |
| `tests/unit/test_service.py` | 889 | 692 | nova |
| `tests/unit/test_service_auth.py` | 70 | 43 | nova |
| `tests/unit/test_test.py` | 437 | 342 | nova |
| `tests/unit/test_test_utils.py` | 64 | 33 | nova |
| `tests/unit/test_thread_pool_factory.py` | 1320 | 886 | nova |
| `tests/unit/test_utils.py` | 1797 | 1376 | nova |
| `tests/unit/test_versions.py` | 53 | 30 | nova |
| `tests/unit/test_weights.py` | 111 | 79 | nova |
| `tests/unit/utils.py` | 393 | 289 | nova |
| `tests/unit/virt/__init__.py` | 0 | 0 | nova |
| `tests/unit/virt/disk/__init__.py` | 0 | 0 | nova |
| `tests/unit/virt/disk/mount/__init__.py` | 0 | 0 | nova |
| `tests/unit/virt/disk/mount/test_api.py` | 212 | 174 | nova |
| `tests/unit/virt/disk/mount/test_block.py` | 46 | 21 | nova |
| `tests/unit/virt/disk/mount/test_loop.py` | 95 | 52 | nova |
| `tests/unit/virt/disk/mount/test_nbd.py` | 334 | 231 | nova |
| `tests/unit/virt/disk/test_api.py` | 220 | 163 | nova |
| `tests/unit/virt/disk/test_inject.py` | 290 | 218 | nova |
| `tests/unit/virt/disk/vfs/__init__.py` | 0 | 0 | nova |
| `tests/unit/virt/disk/vfs/fakeguestfs.py` | 198 | 146 | nova |
| `tests/unit/virt/disk/vfs/test_guestfs.py` | 372 | 283 | nova |
| `tests/unit/virt/fakelibosinfo.py` | 176 | 119 | nova |
| `tests/unit/virt/image/__init__.py` | 0 | 0 | nova |
| `tests/unit/virt/image/test_model.py` | 95 | 66 | nova |
| `tests/unit/virt/ironic/__init__.py` | 0 | 0 | nova |
| `tests/unit/virt/ironic/test_driver.py` | 3941 | 3259 | nova |
| `tests/unit/virt/ironic/test_patcher.py` | 251 | 213 | nova |
| `tests/unit/virt/ironic/utils.py` | 256 | 198 | nova |
| `tests/unit/virt/libvirt/__init__.py` | 0 | 0 | nova |
| `tests/unit/virt/libvirt/cpu/__init__.py` | 0 | 0 | nova |
| `tests/unit/virt/libvirt/cpu/test_api.py` | 264 | 187 | nova |
| `tests/unit/virt/libvirt/cpu/test_core.py` | 122 | 92 | nova |
| `tests/unit/virt/libvirt/storage/__init__.py` | 0 | 0 | nova |
| `tests/unit/virt/libvirt/storage/test_dmcrypt.py` | 95 | 60 | nova |
| `tests/unit/virt/libvirt/storage/test_lvm.py` | 128 | 91 | nova |
| `tests/unit/virt/libvirt/test_blockinfo.py` | 1671 | 1415 | nova |
| `tests/unit/virt/libvirt/test_config.py` | 5110 | 4339 | nova |
| `tests/unit/virt/libvirt/test_designer.py` | 244 | 202 | nova |
| `tests/unit/virt/libvirt/test_driver.py` | 33880 | 28374 | nova |
| `tests/unit/virt/libvirt/test_guest.py` | 1181 | 989 | nova |
| `tests/unit/virt/libvirt/test_host.py` | 2824 | 2351 | nova |
| `tests/unit/virt/libvirt/test_imagebackend.py` | 2251 | 1809 | nova |
| `tests/unit/virt/libvirt/test_imagecache.py` | 802 | 591 | nova |
| `tests/unit/virt/libvirt/test_machine_type_utils.py` | 463 | 392 | nova |
| `tests/unit/virt/libvirt/test_migration.py` | 1927 | 1717 | nova |
| `tests/unit/virt/libvirt/test_utils.py` | 926 | 773 | nova |
| `tests/unit/virt/libvirt/test_vif.py` | 1835 | 1555 | nova |
| `tests/unit/virt/libvirt/volume/__init__.py` | 0 | 0 | nova |
| `tests/unit/virt/libvirt/volume/test_cephfs.py` | 161 | 129 | nova |
| `tests/unit/virt/libvirt/volume/test_fibrechannel.py` | 119 | 83 | nova |
| `tests/unit/virt/libvirt/volume/test_fs.py` | 58 | 33 | nova |
| `tests/unit/virt/libvirt/volume/test_gpfs.py` | 32 | 16 | nova |
| `tests/unit/virt/libvirt/volume/test_iscsi.py` | 103 | 70 | nova |
| `tests/unit/virt/libvirt/volume/test_iser.py` | 22 | 7 | nova |
| `tests/unit/virt/libvirt/volume/test_lightos.py` | 85 | 59 | nova |
| `tests/unit/virt/libvirt/volume/test_mount.py` | 672 | 439 | nova |
| `tests/unit/virt/libvirt/volume/test_net.py` | 216 | 172 | nova |
| `tests/unit/virt/libvirt/volume/test_nfs.py` | 161 | 123 | nova |
| `tests/unit/virt/libvirt/volume/test_nvme.py` | 114 | 83 | nova |
| `tests/unit/virt/libvirt/volume/test_quobyte.py` | 509 | 404 | nova |
| `tests/unit/virt/libvirt/volume/test_remotefs.py` | 234 | 192 | nova |
| `tests/unit/virt/libvirt/volume/test_scaleio.py` | 72 | 48 | nova |
| `tests/unit/virt/libvirt/volume/test_smbfs.py` | 113 | 84 | nova |
| `tests/unit/virt/libvirt/volume/test_storpool.py` | 191 | 129 | nova |
| `tests/unit/virt/libvirt/volume/test_volume.py` | 446 | 363 | nova |
| `tests/unit/virt/libvirt/volume/test_vzstorage.py` | 120 | 88 | nova |
| `tests/unit/virt/test_block_device.py` | 1727 | 1401 | nova |
| `tests/unit/virt/test_configdrive.py` | 86 | 56 | nova |
| `tests/unit/virt/test_events.py` | 36 | 15 | nova |
| `tests/unit/virt/test_fake.py` | 35 | 14 | nova |
| `tests/unit/virt/test_hardware.py` | 6448 | 5643 | nova |
| `tests/unit/virt/test_imagecache.py` | 183 | 144 | nova |
| `tests/unit/virt/test_images.py` | 392 | 318 | nova |
| `tests/unit/virt/test_netutils.py` | 64 | 39 | nova |
| `tests/unit/virt/test_node.py` | 142 | 93 | nova |
| `tests/unit/virt/test_osinfo.py` | 131 | 99 | nova |
| `tests/unit/virt/test_virt.py` | 326 | 254 | nova |
| `tests/unit/virt/test_virt_drivers.py` | 981 | 766 | nova |
| `tests/unit/virt/vmwareapi/__init__.py` | 20 | 7 | nova |
| `tests/unit/virt/vmwareapi/fake.py` | 1690 | 1277 | nova |
| `tests/unit/virt/vmwareapi/stubs.py` | 83 | 48 | nova |
| `tests/unit/virt/vmwareapi/test_configdrive.py` | 171 | 136 | nova |
| `tests/unit/virt/vmwareapi/test_driver_api.py` | 2433 | 2029 | nova |
| `tests/unit/virt/vmwareapi/test_ds_util.py` | 485 | 384 | nova |
| `tests/unit/virt/vmwareapi/test_ds_util_datastore_selection.py` | 164 | 120 | nova |
| `tests/unit/virt/vmwareapi/test_imagecache.py` | 276 | 227 | nova |
| `tests/unit/virt/vmwareapi/test_images.py` | 370 | 302 | nova |
| `tests/unit/virt/vmwareapi/test_network_util.py` | 168 | 127 | nova |
| `tests/unit/virt/vmwareapi/test_session.py` | 208 | 157 | nova |
| `tests/unit/virt/vmwareapi/test_vif.py` | 267 | 230 | nova |
| `tests/unit/virt/vmwareapi/test_vim_util.py` | 38 | 18 | nova |
| `tests/unit/virt/vmwareapi/test_vm_util.py` | 2068 | 1758 | nova |
| `tests/unit/virt/vmwareapi/test_vmops.py` | 2980 | 2633 | nova |
| `tests/unit/virt/vmwareapi/test_volumeops.py` | 869 | 740 | nova |
| `tests/unit/virt/zvm/__init__.py` | 20 | 7 | nova |
| `tests/unit/virt/zvm/test_driver.py` | 557 | 478 | nova |
| `tests/unit/virt/zvm/test_guest.py` | 77 | 55 | nova |
| `tests/unit/virt/zvm/test_hypervisor.py` | 146 | 109 | nova |
| `tests/unit/virt/zvm/test_utils.py` | 136 | 100 | nova |
| `tests/unit/volume/__init__.py` | 0 | 0 | nova |
| `tests/unit/volume/test_cinder.py` | 1330 | 1064 | nova |
| `utils.py` | 1209 | 829 | nova |
| `virt/__init__.py` | 0 | 0 | nova |
| `virt/arch.py` | 65 | 43 | nova |
| `virt/block_device.py` | 1068 | 775 | nova |
| `virt/configdrive.py` | 181 | 116 | nova |
| `virt/disk/__init__.py` | 19 | 4 | nova |
| `virt/disk/api.py` | 684 | 477 | nova |
| `virt/disk/mount/__init__.py` | 17 | 3 | nova |
| `virt/disk/mount/api.py` | 295 | 215 | nova |
| `virt/disk/mount/block.py` | 33 | 15 | nova |
| `virt/disk/mount/loop.py` | 60 | 30 | nova |
| `virt/disk/mount/nbd.py` | 137 | 93 | nova |
| `virt/disk/vfs/__init__.py` | 17 | 3 | nova |
| `virt/disk/vfs/api.py` | 141 | 93 | nova |
| `virt/disk/vfs/guestfs.py` | 361 | 263 | nova |
| `virt/driver.py` | 2117 | 1680 | nova |
| `virt/event.py` | 122 | 81 | nova |
| `virt/fake.py` | 1179 | 885 | nova |
| `virt/hardware.py` | 3275 | 2433 | nova |
| `virt/image/__init__.py` | 0 | 0 | nova |
| `virt/image/model.py` | 131 | 84 | nova |
| `virt/imagecache.py` | 132 | 95 | nova |
| `virt/images.py` | 301 | 198 | nova |
| `virt/ironic/__init__.py` | 18 | 2 | nova |
| `virt/ironic/driver.py` | 2379 | 1795 | nova |
| `virt/ironic/ironic_states.py` | 343 | 228 | nova |
| `virt/ironic/patcher.py` | 138 | 90 | nova |
| `virt/libvirt/__init__.py` | 17 | 2 | nova |
| `virt/libvirt/blockinfo.py` | 783 | 573 | nova |
| `virt/libvirt/config.py` | 4271 | 3239 | nova |
| `virt/libvirt/cpu/__init__.py` | 0 | 0 | nova |
| `virt/libvirt/cpu/api.py` | 201 | 151 | nova |
| `virt/libvirt/cpu/core.py` | 88 | 48 | nova |
| `virt/libvirt/designer.py` | 207 | 153 | nova |
| `virt/libvirt/driver.py` | 14026 | 10031 | nova |
| `virt/libvirt/event.py` | 46 | 24 | nova |
| `virt/libvirt/guest.py` | 991 | 734 | nova |
| `virt/libvirt/host.py` | 2340 | 1740 | nova |
| `virt/libvirt/imagebackend.py` | 1414 | 1020 | nova |
| `virt/libvirt/imagecache.py` | 418 | 291 | nova |
| `virt/libvirt/instancejobtracker.py` | 93 | 57 | nova |
| `virt/libvirt/machine_type_utils.py` | 225 | 154 | nova |
| `virt/libvirt/migration.py` | 908 | 627 | nova |
| `virt/libvirt/storage/__init__.py` | 0 | 0 | nova |
| `virt/libvirt/storage/dmcrypt.py` | 90 | 53 | nova |
| `virt/libvirt/storage/lvm.py` | 192 | 134 | nova |
| `virt/libvirt/utils.py` | 799 | 561 | nova |
| `virt/libvirt/vif.py` | 922 | 646 | nova |
| `virt/libvirt/volume/__init__.py` | 0 | 0 | nova |
| `virt/libvirt/volume/cephfs.py` | 52 | 26 | nova |
| `virt/libvirt/volume/fibrechannel.py` | 87 | 52 | nova |
| `virt/libvirt/volume/fs.py` | 130 | 83 | nova |
| `virt/libvirt/volume/gpfs.py` | 28 | 12 | nova |
| `virt/libvirt/volume/iscsi.py` | 92 | 61 | nova |
| `virt/libvirt/volume/iser.py` | 40 | 18 | nova |
| `virt/libvirt/volume/lightos.py` | 64 | 40 | nova |
| `virt/libvirt/volume/mount.py` | 423 | 271 | nova |
| `virt/libvirt/volume/net.py` | 100 | 54 | nova |
| `virt/libvirt/volume/nfs.py` | 56 | 29 | nova |
| `virt/libvirt/volume/nvme.py` | 64 | 39 | nova |
| `virt/libvirt/volume/quobyte.py` | 215 | 157 | nova |
| `virt/libvirt/volume/remotefs.py` | 316 | 230 | nova |
| `virt/libvirt/volume/scaleio.py` | 75 | 46 | nova |
| `virt/libvirt/volume/smbfs.py` | 77 | 49 | nova |
| `virt/libvirt/volume/storpool.py` | 65 | 40 | nova |
| `virt/libvirt/volume/volume.py` | 189 | 123 | nova |
| `virt/libvirt/volume/vzstorage.py` | 139 | 90 | nova |
| `virt/netutils.py` | 384 | 281 | nova |
| `virt/node.py` | 108 | 65 | nova |
| `virt/osinfo.py` | 147 | 101 | nova |
| `virt/storage_users.py` | 102 | 49 | nova |
| `virt/virtapi.py` | 36 | 17 | nova |
| `virt/vmwareapi/__init__.py` | 21 | 5 | nova |
| `virt/vmwareapi/constants.py` | 235 | 197 | nova |
| `virt/vmwareapi/driver.py` | 744 | 573 | nova |
| `virt/vmwareapi/ds_util.py` | 513 | 403 | nova |
| `virt/vmwareapi/error_util.py` | 33 | 11 | nova |
| `virt/vmwareapi/host.py` | 120 | 89 | nova |
| `virt/vmwareapi/imagecache.py` | 197 | 142 | nova |
| `virt/vmwareapi/images.py` | 473 | 366 | nova |
| `virt/vmwareapi/network_util.py` | 115 | 73 | nova |
| `virt/vmwareapi/session.py` | 157 | 109 | nova |
| `virt/vmwareapi/vif.py` | 130 | 90 | nova |
| `virt/vmwareapi/vim_util.py` | 170 | 128 | nova |
| `virt/vmwareapi/vm_util.py` | 1669 | 1272 | nova |
| `virt/vmwareapi/vmops.py` | 2159 | 1723 | nova |
| `virt/vmwareapi/volumeops.py` | 673 | 527 | nova |
| `virt/zvm/__init__.py` | 17 | 2 | nova |
| `virt/zvm/driver.py` | 457 | 359 | nova |
| `virt/zvm/guest.py` | 51 | 26 | nova |
| `virt/zvm/hypervisor.py` | 167 | 106 | nova |
| `virt/zvm/utils.py` | 125 | 80 | nova |
| `volume/__init__.py` | 0 | 0 | nova |
| `volume/cinder.py` | 954 | 712 | nova |
| `wsgi/__init__.py` | 0 | 0 | nova |
| `wsgi/metadata.py` | 29 | 11 | nova |
| `wsgi/osapi_compute.py` | 29 | 11 | nova |
| **Total (1484 files)** | **604,264** | **462,230** | nova |

### Top 5 Functions by Cyclomatic Complexity

Taken from the `ccn` field of each KB symbol record.

| CCN | Function | File |
|---|---|---|
| 50 | `show` | `api/openstack/compute/views/servers.py` |
| 45 | `format_dom` | `virt/libvirt/config.py` |
| 43 | `_validate_bdm` | `compute/api.py` |
| 42 | `obj_make_compatible` | `objects/image_meta.py` |
| 42 | `numa_get_constraints` | `virt/hardware.py` |

Additional high-complexity functions: `XMLDesc` (`tests/fixtures/libvirt.py`, CCN 41), `_init_instance` (`compute/manager.py`, CCN 40), `_parse_definition` (`tests/fixtures/libvirt.py`, CCN 38), `_compare_result` (`tests/functional/api_samples_test_base.py`, CCN 38), `parse_dom` (`virt/libvirt/config.py`, CCN 37).

---

## Defined Symbols

Across all 1,484 KB records the component defines **41,277 symbols** in total. Source: `symbols` arrays in `.aee/kb/src/nova/**/*.json`.

| Kind | Count |
|---|---|
| method | 25,123 |
| class | 4,094 |
| function | 3,876 |
| constant | 3,044 |
| field | 2,829 |
| variable | 1,828 |
| staticmethod | 224 |
| property | 200 |
| classmethod | 52 |
| import | 7 |

Production subsystems (batches 1-8) account for 10,536 symbols. Test subsystems add 27,122 symbols. Batch 9 adds 3,423 new production symbols from `virt/` (method 1,966, function 500, constant 393, class 266, staticmethod 66, property 72) plus 60 from `volume/` and 10 from `wsgi/`.

Selected key symbols for new batch 9 subsystems:

**virt/**
- `virt/driver.py` (1,680 LOC): abstract class `ComputeDriver` -- the hypervisor driver interface. 43 abstract methods defining the virt API. Source: `.aee/kb/src/nova/virt/driver.py.json`.
- `virt/libvirt/driver.py` (10,031 LOC): class `LibvirtDriver(ComputeDriver)` -- the libvirt/KVM production driver. 70 security-surface entries. `format_dom` (CCN 45) in `virt/libvirt/config.py` generates libvirt XML. Source: `.aee/kb/src/nova/virt/libvirt/driver.py.json`.
- `virt/libvirt/config.py`: `format_dom` (CCN 45) and `parse_dom` (CCN 37) -- XML serialisation/deserialisation for libvirt domain definitions.
- `virt/hardware.py` (2,433 LOC): `numa_get_constraints` (CCN 42) -- NUMA topology calculation for instance placement. Source: `.aee/kb/src/nova/virt/hardware.py.json`.
- `virt/libvirt/vif.py` (646 LOC): 22 security-surface entries -- VIF plug/unplug using privsep `linux_net` calls. Source: `.aee/kb/src/nova/virt/libvirt/vif.py.json`.
- `virt/ironic/driver.py` (1,795 LOC): class `IronicDriver(ComputeDriver)` -- baremetal compute via Ironic API. Source: `.aee/kb/src/nova/virt/ironic/driver.py.json`.
- `virt/vmwareapi/driver.py` (573 LOC): class `VMwareAPISession` -- VMware vCenter API driver. Source: `.aee/kb/src/nova/virt/vmwareapi/driver.py.json`.
- `virt/fake.py` (885 LOC): class `FakeDriver(ComputeDriver)` -- in-memory fake driver for tests and CI.
- `virt/block_device.py` (775 LOC): `DriverBlockDevice` hierarchy mapping Nova BDM objects to hypervisor block-device representations. 7 db-write sinks. Source: `.aee/kb/src/nova/virt/block_device.py.json`.
- `virt/configdrive.py` (116 LOC): config-drive assembly; calls `privsep.fs.unprivileged_mkfs` and `privsep.fs.mount`. 8 security-surface entries.
- `virt/libvirt/utils.py` (561 LOC): 14 security-surface entries including privsep.fs, privsep.idmapshift, privsep.libvirt, privsep.path calls.
- `virt/libvirt/imagebackend.py` (1,020 LOC): image backend classes for raw, qcow2, LVM, RBD disk formats.
- `virt/libvirt/migration.py` (627 LOC): live-migration XML surgery functions (10 db-write sinks).
- `virt/libvirt/host.py` (1,740 LOC): class `Host` -- libvirt connection management and SR-IOV device enumeration.
- `virt/libvirt/volume/` (16 files): per-backend volume attachment drivers (NFS, iSCSI, Ceph/CephFS, NVMe, Fibre Channel, GPFS, Quobyte, etc.).
- `virt/disk/api.py` (477 LOC): 13 security-surface entries -- disk image manipulation via privsep.fs calls.
- `virt/disk/mount/` (4 files): block, loop, NBD mount backends -- all invoke privsep.fs for privileged mount/umount.
- `virt/zvm/` (5 files): z/VM driver using the zvmsdk; `zvm/driver.py` (359 LOC) with 1 db-write sink.
- `virt/libvirt/cpu/core.py` (48 LOC): 3 privsep-entrypoint privileges -- CPU pinning via `@sys_admin_pctxt.entrypoint`.
- `virt/libvirt/storage/dmcrypt.py` (53 LOC): dmcrypt device create/delete via `privsep.libvirt`.
- `virt/libvirt/storage/lvm.py` (134 LOC): LVM volume operations via `privsep.fs` (lvcreate, lvinfo, vginfo).
- `virt/node.py` (65 LOC): node UUID persistence to file (1 file-write sink). Source: `.aee/kb/src/nova/virt/node.py.json`.
- `virt/images.py` (198 LOC): QEMU image conversion via privsep.qemu calls (5 privilege entries).

**volume/**
- `volume/cinder.py` (712 LOC, 60 symbols): class `API` -- Cinder client for all block-volume lifecycle, attachment, and snapshot operations. Uses cinderclient; service-token auth at L75 (`crypto-key` privilege). 6 db-write sinks. Source: `.aee/kb/src/nova/volume/cinder.py.json`.

**wsgi/**
- `wsgi/metadata.py` and `wsgi/osapi_compute.py` (22 LOC total): WSGI entry-point shims referencing `nova.api` application. No security-surface entries. Source: `.aee/kb/src/nova/wsgi/**/*.json`.

---

## External Dependencies

All non-`nova` modules imported across the 1,484 KB records. Source: `dependencies` arrays in `.aee/kb/src/nova/**/*.json`.

| Package | Files importing |
|---|---|
| `oslo_utils` | 698 |
| `unittest` | 433 |
| `oslo_log` | 230 |
| `oslo_serialization` | 172 |
| `webob` | 165 |
| `copy` | 162 |
| `fixtures` | 143 |
| `oslo_config` | 123 |
| `os` | 106 |
| `collections` | 86 |
| `oslo_policy` | 55 |
| `oslo_vmware` | 26 |
| `os_brick` | 24 |
| `oslo_concurrency` | 21 |
| `cinderclient` | 3 |

Additional packages (batch 9 additions from virt/volume): `cinderclient`, `guestfs`, `libvirt`, `oslo_vmware`, `os_brick`, `zvmsdk`, `pyudev`, `mmap`. Total unique external packages: 154.

New packages added in batch 9: `oslo_vmware` (`virt/vmwareapi/`), `os_brick` (`virt/libvirt/volume/`), `cinderclient` (`volume/cinder.py`), `guestfs` (`virt/disk/vfs/guestfs.py`), `libvirt` (`virt/libvirt/`), `zvmsdk` (`virt/zvm/`).

---

## Side Effects

6,646 side-effect records. Source: `sideEffects` arrays in `.aee/kb/src/nova/**/*.json`.

| Kind | Count | Notes |
|---|---|---|
| global-mutation | 3,155 | Production (2,014) + tests (1,141) |
| network | 1,891 | Production (584) + tests (1,307) -- virt adds 8 network side effects |
| file-io | 938 | Production (379) + tests (559) -- virt/disk adds 314 file-io (qemu-img, guest FS ops) |
| process-spawn | 561 | Production (189) + tests (372) -- virt adds 131 (qemu-img subprocesses, libvirt fork) |
| syscall | 101 | Production (36) + tests (65) -- virt adds 27 (ioctl, sysfs reads) |

`virt/` is the primary source of new `file-io` (314), `process-spawn` (131), and `syscall` (27) entries, reflecting disk image manipulation, QEMU image conversion, and low-level OS calls in the hypervisor layer.

---

## Component Diagram

All 5,884 file edges are intra-component (`crossComponent: false`). No cross-component seams exist. Source: `.aee/link-graph.json` (batch 624338e5).

```mermaid
graph LR
  accelerator-cyborg["cyborg.py"]
  api-auth["auth.py"]
  api-compute-req-id["compute_req_id.py"]
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
  api-openstack-compute-views-init["__init__.py"]
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
  compute-init["__init__.py"]
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
  console-type["type.py"]
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
  notifications-base["base.py"]
  notifications-init["__init__.py"]
  notifications-objects-aggregate["aggregate.py"]
  notifications-objects-base["base.py"]
  notifications-objects-compute-task["compute_task.py"]
  notifications-objects-exception["exception.py"]
  notifications-objects-flavor["flavor.py"]
  notifications-objects-image["image.py"]
  notifications-objects-instance["instance.py"]
  notifications-objects-keypair["keypair.py"]
  notifications-objects-libvirt["libvirt.py"]
  notifications-objects-metrics["metrics.py"]
  notifications-objects-request-spec["request_spec.py"]
  notifications-objects-scheduler["scheduler.py"]
  notifications-objects-server-group["server_group.py"]
  notifications-objects-service["service.py"]
  notifications-objects-volume["volume.py"]
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
  pci-devspec["devspec.py"]
  pci-manager["manager.py"]
  pci-request["request.py"]
  pci-stats["stats.py"]
  pci-utils["utils.py"]
  pci-whitelist["whitelist.py"]
  policies-admin-actions["admin_actions.py"]
  policies-admin-password["admin_password.py"]
  policies-aggregates["aggregates.py"]
  policies-assisted-volume-snapshots["assisted_volume_snapshots.py"]
  policies-attach-interfaces["attach_interfaces.py"]
  policies-availability-zone["availability_zone.py"]
  policies-baremetal-nodes["baremetal_nodes.py"]
  policies-base["base.py"]
  policies-console-auth-tokens["console_auth_tokens.py"]
  policies-console-output["console_output.py"]
  policies-create-backup["create_backup.py"]
  policies-deferred-delete["deferred_delete.py"]
  policies-evacuate["evacuate.py"]
  policies-extended-server-attributes["extended_server_attributes.py"]
  policies-extensions["extensions.py"]
  policies-flavor-access["flavor_access.py"]
  policies-flavor-extra-specs["flavor_extra_specs.py"]
  policies-flavor-manage["flavor_manage.py"]
  policies-floating-ip-pools["floating_ip_pools.py"]
  policies-floating-ips["floating_ips.py"]
  policies-hosts["hosts.py"]
  policies-hypervisors["hypervisors.py"]
  policies-init["__init__.py"]
  policies-instance-actions["instance_actions.py"]
  policies-instance-usage-audit-log["instance_usage_audit_log.py"]
  policies-ips["ips.py"]
  policies-keypairs["keypairs.py"]
  policies-limits["limits.py"]
  policies-lock-server["lock_server.py"]
  policies-migrate-server["migrate_server.py"]
  policies-migrations["migrations.py"]
  policies-multinic["multinic.py"]
  policies-networks["networks.py"]
  policies-pause-server["pause_server.py"]
  policies-quota-class-sets["quota_class_sets.py"]
  policies-quota-sets["quota_sets.py"]
  policies-remote-consoles["remote_consoles.py"]
  policies-rescue["rescue.py"]
  policies-security-groups["security_groups.py"]
  policies-server-diagnostics["server_diagnostics.py"]
  policies-server-external-events["server_external_events.py"]
  policies-server-groups["server_groups.py"]
  policies-server-metadata["server_metadata.py"]
  policies-server-password["server_password.py"]
  policies-server-shares["server_shares.py"]
  policies-server-tags["server_tags.py"]
  policies-server-topology["server_topology.py"]
  policies-servers["servers.py"]
  policies-servers-migrations["servers_migrations.py"]
  policies-services["services.py"]
  policies-shelve["shelve.py"]
  policies-simple-tenant-usage["simple_tenant_usage.py"]
  policies-suspend-server["suspend_server.py"]
  policies-tenant-networks["tenant_networks.py"]
  policies-volumes["volumes.py"]
  policies-volumes-attachments["volumes_attachments.py"]
  privsep-fs["fs.py"]
  privsep-idmapshift["idmapshift.py"]
  privsep-init["__init__.py"]
  privsep-libvirt["libvirt.py"]
  privsep-linux-net["linux_net.py"]
  privsep-path["path.py"]
  privsep-qemu["qemu.py"]
  privsep-utils["utils.py"]
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
  servicegroup-api["api.py"]
  servicegroup-drivers-base["base.py"]
  servicegroup-drivers-db["db.py"]
  servicegroup-drivers-mc["mc.py"]
  servicegroup-init["__init__.py"]
  share-manila["manila.py"]
  storage-rbd-utils["rbd_utils.py"]
  tests-fixtures-cast-as-call["cast_as_call.py"]
  tests-fixtures-cinder["cinder.py"]
  tests-fixtures-conf["conf.py"]
  tests-fixtures-cyborg["cyborg.py"]
  tests-fixtures-filesystem["filesystem.py"]
  tests-fixtures-glance["glance.py"]
  tests-fixtures-init["__init__.py"]
  tests-fixtures-libvirt["libvirt.py"]
  tests-fixtures-libvirt-data["libvirt_data.py"]
  tests-fixtures-libvirt-imagebackend["libvirt_imagebackend.py"]
  tests-fixtures-manila["manila.py"]
  tests-fixtures-neutron["neutron.py"]
  tests-fixtures-notifications["notifications.py"]
  tests-fixtures-nova["nova.py"]
  tests-fixtures-os-brick["os_brick.py"]
  tests-fixtures-policy["policy.py"]
  tests-functional-api-client["client.py"]
  tests-functional-api-sample-tests-api-sample-base["api_sample_base.py"]
  tests-functional-api-sample-tests-test-admin-actions["test_admin_actions.py"]
  tests-functional-api-sample-tests-test-admin-password["test_admin_password.py"]
  tests-functional-api-sample-tests-test-agents["test_agents.py"]
  tests-functional-api-sample-tests-test-aggregates["test_aggregates.py"]
  tests-functional-api-sample-tests-test-assisted-volume-snapshots["test_assisted_volume_snapshots.py"]
  tests-functional-api-sample-tests-test-attach-interfaces["test_attach_interfaces.py"]
  tests-functional-api-sample-tests-test-availability-zone["test_availability_zone.py"]
  tests-functional-api-sample-tests-test-baremetal-nodes["test_baremetal_nodes.py"]
  tests-functional-api-sample-tests-test-block-device-mapping-boot["test_block_device_mapping_boot.py"]
  tests-functional-api-sample-tests-test-cells["test_cells.py"]
  tests-functional-api-sample-tests-test-compare-result["test_compare_result.py"]
  tests-functional-api-sample-tests-test-console-auth-tokens["test_console_auth_tokens.py"]
  tests-functional-api-sample-tests-test-console-output["test_console_output.py"]
  tests-functional-api-sample-tests-test-consoles["test_consoles.py"]
  tests-functional-api-sample-tests-test-create-backup["test_create_backup.py"]
  tests-functional-api-sample-tests-test-deferred-delete["test_deferred_delete.py"]
  tests-functional-api-sample-tests-test-evacuate["test_evacuate.py"]
  tests-functional-api-sample-tests-test-extension-info["test_extension_info.py"]
  tests-functional-api-sample-tests-test-fixed-ips["test_fixed_ips.py"]
  tests-functional-api-sample-tests-test-flavor-access["test_flavor_access.py"]
  tests-functional-api-sample-tests-test-flavor-extraspecs["test_flavor_extraspecs.py"]
  tests-functional-api-sample-tests-test-flavor-manage["test_flavor_manage.py"]
  tests-functional-api-sample-tests-test-flavors["test_flavors.py"]
  tests-functional-api-sample-tests-test-floating-ip-dns["test_floating_ip_dns.py"]
  tests-functional-api-sample-tests-test-floating-ip-pools["test_floating_ip_pools.py"]
  tests-functional-api-sample-tests-test-floating-ips["test_floating_ips.py"]
  tests-functional-api-sample-tests-test-floating-ips-bulk["test_floating_ips_bulk.py"]
  tests-functional-api-sample-tests-test-fping["test_fping.py"]
  tests-functional-api-sample-tests-test-hosts["test_hosts.py"]
  tests-functional-api-sample-tests-test-hypervisors["test_hypervisors.py"]
  tests-functional-api-sample-tests-test-images["test_images.py"]
  tests-functional-api-sample-tests-test-instance-actions["test_instance_actions.py"]
  tests-functional-api-sample-tests-test-instance-usage-audit-log["test_instance_usage_audit_log.py"]
  tests-functional-api-sample-tests-test-keypairs["test_keypairs.py"]
  tests-functional-api-sample-tests-test-limits["test_limits.py"]
  tests-functional-api-sample-tests-test-lock-server["test_lock_server.py"]
  tests-functional-api-sample-tests-test-migrate-server["test_migrate_server.py"]
  tests-functional-api-sample-tests-test-migrations["test_migrations.py"]
  tests-functional-api-sample-tests-test-multinic["test_multinic.py"]
  tests-functional-api-sample-tests-test-multiple-create["test_multiple_create.py"]
  tests-functional-api-sample-tests-test-networks["test_networks.py"]
  tests-functional-api-sample-tests-test-networks-associate["test_networks_associate.py"]
  tests-functional-api-sample-tests-test-pause-server["test_pause_server.py"]
  tests-functional-api-sample-tests-test-preserve-ephemeral-rebuild["test_preserve_ephemeral_rebuild.py"]
  tests-functional-api-sample-tests-test-quota-classes["test_quota_classes.py"]
  tests-functional-api-sample-tests-test-quota-sets["test_quota_sets.py"]
  tests-functional-api-sample-tests-test-remote-consoles["test_remote_consoles.py"]
  tests-functional-api-sample-tests-test-rescue["test_rescue.py"]
  tests-functional-api-sample-tests-test-security-group-default-rules["test_security_group_default_rules.py"]
  tests-functional-api-sample-tests-test-security-groups["test_security_groups.py"]
  tests-functional-api-sample-tests-test-server-diagnostics["test_server_diagnostics.py"]
  tests-functional-api-sample-tests-test-server-external-events["test_server_external_events.py"]
  tests-functional-api-sample-tests-test-server-groups["test_server_groups.py"]
  tests-functional-api-sample-tests-test-server-metadata["test_server_metadata.py"]
  tests-functional-api-sample-tests-test-server-migrations["test_server_migrations.py"]
  tests-functional-api-sample-tests-test-server-password["test_server_password.py"]
  tests-functional-api-sample-tests-test-server-shares["test_server_shares.py"]
  tests-functional-api-sample-tests-test-server-tags["test_server_tags.py"]
  tests-functional-api-sample-tests-test-server-topology["test_server_topology.py"]
  tests-functional-api-sample-tests-test-servers["test_servers.py"]
  tests-functional-api-sample-tests-test-servers-ips["test_servers_ips.py"]
  tests-functional-api-sample-tests-test-services["test_services.py"]
  tests-functional-api-sample-tests-test-shelve["test_shelve.py"]
  tests-functional-api-sample-tests-test-simple-tenant-usage["test_simple_tenant_usage.py"]
  tests-functional-api-sample-tests-test-snapshots["test_snapshots.py"]
  tests-functional-api-sample-tests-test-suspend-server["test_suspend_server.py"]
  tests-functional-api-sample-tests-test-tenant-networks["test_tenant_networks.py"]
  tests-functional-api-sample-tests-test-versions["test_versions.py"]
  tests-functional-api-sample-tests-test-virtual-interfaces["test_virtual_interfaces.py"]
  tests-functional-api-sample-tests-test-volume-attachments["test_volume_attachments.py"]
  tests-functional-api-sample-tests-test-volumes["test_volumes.py"]
  tests-functional-api-samples-test-base["api_samples_test_base.py"]
  tests-functional-compute-test-attached-volumes["test_attached_volumes.py"]
  tests-functional-compute-test-cache-image["test_cache_image.py"]
  tests-functional-compute-test-host-api["test_host_api.py"]
  tests-functional-compute-test-init-host["test_init_host.py"]
  tests-functional-compute-test-instance-list["test_instance_list.py"]
  tests-functional-compute-test-live-migration["test_live_migration.py"]
  tests-functional-compute-test-migration-list["test_migration_list.py"]
  tests-functional-compute-test-resource-tracker["test_resource_tracker.py"]
  tests-functional-db-test-aggregate["test_aggregate.py"]
  tests-functional-db-test-archive["test_archive.py"]
  tests-functional-db-test-build-request["test_build_request.py"]
  tests-functional-db-test-cell-mapping["test_cell_mapping.py"]
  tests-functional-db-test-compute-api["test_compute_api.py"]
  tests-functional-db-test-compute-node["test_compute_node.py"]
  tests-functional-db-test-connection-switch["test_connection_switch.py"]
  tests-functional-db-test-console-auth-token["test_console_auth_token.py"]
  tests-functional-db-test-flavor["test_flavor.py"]
  tests-functional-db-test-host-mapping["test_host_mapping.py"]
  tests-functional-db-test-instance["test_instance.py"]
  tests-functional-db-test-instance-group["test_instance_group.py"]
  tests-functional-db-test-instance-mapping["test_instance_mapping.py"]
  tests-functional-db-test-keypair["test_keypair.py"]
  tests-functional-db-test-quota["test_quota.py"]
  tests-functional-db-test-quota-model["test_quota_model.py"]
  tests-functional-db-test-quotas["test_quotas.py"]
  tests-functional-db-test-request-spec["test_request_spec.py"]
  tests-functional-db-test-security-group["test_security_group.py"]
  tests-functional-db-test-virtual-interface["test_virtual_interface.py"]
  tests-functional-fixtures["fixtures.py"]
  tests-functional-integrated-helpers["integrated_helpers.py"]
  tests-functional-libvirt-base["base.py"]
  tests-functional-libvirt-integrated-helpers["integrated_helpers.py"]
  tests-functional-libvirt-test-amd-sev["test_amd_sev.py"]
  tests-functional-libvirt-test-device-bus-migration["test_device_bus_migration.py"]
  tests-functional-libvirt-test-evacuate["test_evacuate.py"]
  tests-functional-libvirt-test-intel-tdx["test_intel_tdx.py"]
  tests-functional-libvirt-test-live-migration["test_live_migration.py"]
  tests-functional-libvirt-test-machine-type["test_machine_type.py"]
  tests-functional-libvirt-test-migration-addr["test_migration_addr.py"]
  tests-functional-libvirt-test-numa-live-migration["test_numa_live_migration.py"]
  tests-functional-libvirt-test-numa-servers["test_numa_servers.py"]
  tests-functional-libvirt-test-pci-in-placement["test_pci_in_placement.py"]
  tests-functional-libvirt-test-pci-sriov-servers["test_pci_sriov_servers.py"]
  tests-functional-libvirt-test-power-manage["test_power_manage.py"]
  tests-functional-libvirt-test-report-cpu-traits["test_report_cpu_traits.py"]
  tests-functional-libvirt-test-rescue-deleted-base["test_rescue_deleted_base.py"]
  tests-functional-libvirt-test-reshape["test_reshape.py"]
  tests-functional-libvirt-test-rt-servers["test_rt_servers.py"]
  tests-functional-libvirt-test-server-shares["test_server_shares.py"]
  tests-functional-libvirt-test-shared-resource-provider["test_shared_resource_provider.py"]
  tests-functional-libvirt-test-stateless-firmware["test_stateless_firmware.py"]
  tests-functional-libvirt-test-uefi["test_uefi.py"]
  tests-functional-libvirt-test-vgpu["test_vgpu.py"]
  tests-functional-libvirt-test-vif-model["test_vif_model.py"]
  tests-functional-libvirt-test-vpmem["test_vpmem.py"]
  tests-functional-libvirt-test-vtpm["test_vtpm.py"]
  tests-functional-notification-sample-tests-notification-sample-base["notification_sample_base.py"]
  tests-functional-notification-sample-tests-test-aggregate["test_aggregate.py"]
  tests-functional-notification-sample-tests-test-compute-task["test_compute_task.py"]
  tests-functional-notification-sample-tests-test-exception-notification["test_exception_notification.py"]
  tests-functional-notification-sample-tests-test-flavor["test_flavor.py"]
  tests-functional-notification-sample-tests-test-instance["test_instance.py"]
  tests-functional-notification-sample-tests-test-keypair["test_keypair.py"]
  tests-functional-notification-sample-tests-test-libvirt["test_libvirt.py"]
  tests-functional-notification-sample-tests-test-metrics["test_metrics.py"]
  tests-functional-notification-sample-tests-test-server-group["test_server_group.py"]
  tests-functional-notification-sample-tests-test-service["test_service.py"]
  tests-functional-notification-sample-tests-test-volume["test_volume.py"]
  tests-functional-regressions-test-bug-1404867["test_bug_1404867.py"]
  tests-functional-regressions-test-bug-1522536["test_bug_1522536.py"]
  tests-functional-regressions-test-bug-1541691["test_bug_1541691.py"]
  tests-functional-regressions-test-bug-1548980["test_bug_1548980.py"]
  tests-functional-regressions-test-bug-1552888["test_bug_1552888.py"]
  tests-functional-regressions-test-bug-1554631["test_bug_1554631.py"]
  tests-functional-regressions-test-bug-1558866["test_bug_1558866.py"]
  tests-functional-regressions-test-bug-1595962["test_bug_1595962.py"]
  tests-functional-regressions-test-bug-1620248["test_bug_1620248.py"]
  tests-functional-regressions-test-bug-1628606["test_bug_1628606.py"]
  tests-functional-regressions-test-bug-1669054["test_bug_1669054.py"]
  tests-functional-regressions-test-bug-1670627["test_bug_1670627.py"]
  tests-functional-regressions-test-bug-1671648["test_bug_1671648.py"]
  tests-functional-regressions-test-bug-1675570["test_bug_1675570.py"]
  tests-functional-regressions-test-bug-1678326["test_bug_1678326.py"]
  tests-functional-regressions-test-bug-1679750["test_bug_1679750.py"]
  tests-functional-regressions-test-bug-1682693["test_bug_1682693.py"]
  tests-functional-regressions-test-bug-1689692["test_bug_1689692.py"]
  tests-functional-regressions-test-bug-1702454["test_bug_1702454.py"]
  tests-functional-regressions-test-bug-1713783["test_bug_1713783.py"]
  tests-functional-regressions-test-bug-1718455["test_bug_1718455.py"]
  tests-functional-regressions-test-bug-1718512["test_bug_1718512.py"]
  tests-functional-regressions-test-bug-1719730["test_bug_1719730.py"]
  tests-functional-regressions-test-bug-1732947["test_bug_1732947.py"]
  tests-functional-regressions-test-bug-1735407["test_bug_1735407.py"]
  tests-functional-regressions-test-bug-1741125["test_bug_1741125.py"]
  tests-functional-regressions-test-bug-1741364["test_bug_1741364.py"]
  tests-functional-regressions-test-bug-1746483["test_bug_1746483.py"]
  tests-functional-regressions-test-bug-1764556["test_bug_1764556.py"]
  tests-functional-regressions-test-bug-1764883["test_bug_1764883.py"]
  tests-functional-regressions-test-bug-1778305["test_bug_1778305.py"]
  tests-functional-regressions-test-bug-1780373["test_bug_1780373.py"]
  tests-functional-regressions-test-bug-1781286["test_bug_1781286.py"]
  tests-functional-regressions-test-bug-1781710["test_bug_1781710.py"]
  tests-functional-regressions-test-bug-1784353["test_bug_1784353.py"]
  tests-functional-regressions-test-bug-1790204["test_bug_1790204.py"]
  tests-functional-regressions-test-bug-1794996["test_bug_1794996.py"]
  tests-functional-regressions-test-bug-1797580["test_bug_1797580.py"]
  tests-functional-regressions-test-bug-1806064["test_bug_1806064.py"]
  tests-functional-regressions-test-bug-1806515["test_bug_1806515.py"]
  tests-functional-regressions-test-bug-1815153["test_bug_1815153.py"]
  tests-functional-regressions-test-bug-1823370["test_bug_1823370.py"]
  tests-functional-regressions-test-bug-1825020["test_bug_1825020.py"]
  tests-functional-regressions-test-bug-1825034["test_bug_1825034.py"]
  tests-functional-regressions-test-bug-1825537["test_bug_1825537.py"]
  tests-functional-regressions-test-bug-1830747["test_bug_1830747.py"]
  tests-functional-regressions-test-bug-1831771["test_bug_1831771.py"]
  tests-functional-regressions-test-bug-1835822["test_bug_1835822.py"]
  tests-functional-regressions-test-bug-1837955["test_bug_1837955.py"]
  tests-functional-regressions-test-bug-1839560["test_bug_1839560.py"]
  tests-functional-regressions-test-bug-1843090["test_bug_1843090.py"]
  tests-functional-regressions-test-bug-1843708["test_bug_1843708.py"]
  tests-functional-regressions-test-bug-1845291["test_bug_1845291.py"]
  tests-functional-regressions-test-bug-1848343["test_bug_1848343.py"]
  tests-functional-regressions-test-bug-1849165["test_bug_1849165.py"]
  tests-functional-regressions-test-bug-1849409["test_bug_1849409.py"]
  tests-functional-regressions-test-bug-1852458["test_bug_1852458.py"]
  tests-functional-regressions-test-bug-1853009["test_bug_1853009.py"]
  tests-functional-regressions-test-bug-1862633["test_bug_1862633.py"]
  tests-functional-regressions-test-bug-1879878["test_bug_1879878.py"]
  tests-functional-regressions-test-bug-1886418["test_bug_1886418.py"]
  tests-functional-regressions-test-bug-1888395["test_bug_1888395.py"]
  tests-functional-regressions-test-bug-1889108["test_bug_1889108.py"]
  tests-functional-regressions-test-bug-1890244["test_bug_1890244.py"]
  tests-functional-regressions-test-bug-1893284["test_bug_1893284.py"]
  tests-functional-regressions-test-bug-1894966["test_bug_1894966.py"]
  tests-functional-regressions-test-bug-1895696["test_bug_1895696.py"]
  tests-functional-regressions-test-bug-1896463["test_bug_1896463.py"]
  tests-functional-regressions-test-bug-1899649["test_bug_1899649.py"]
  tests-functional-regressions-test-bug-1899835["test_bug_1899835.py"]
  tests-functional-regressions-test-bug-1902925["test_bug_1902925.py"]
  tests-functional-regressions-test-bug-1908075["test_bug_1908075.py"]
  tests-functional-regressions-test-bug-1909120["test_bug_1909120.py"]
  tests-functional-regressions-test-bug-1914777["test_bug_1914777.py"]
  tests-functional-regressions-test-bug-1922053["test_bug_1922053.py"]
  tests-functional-regressions-test-bug-1928063["test_bug_1928063.py"]
  tests-functional-regressions-test-bug-1937084["test_bug_1937084.py"]
  tests-functional-regressions-test-bug-1937375["test_bug_1937375.py"]
  tests-functional-regressions-test-bug-1938326["test_bug_1938326.py"]
  tests-functional-regressions-test-bug-1939545["test_bug_1939545.py"]
  tests-functional-regressions-test-bug-1943431["test_bug_1943431.py"]
  tests-functional-regressions-test-bug-1944619["test_bug_1944619.py"]
  tests-functional-regressions-test-bug-1978983["test_bug_1978983.py"]
  tests-functional-regressions-test-bug-1980720["test_bug_1980720.py"]
  tests-functional-regressions-test-bug-1983753["test_bug_1983753.py"]
  tests-functional-regressions-test-bug-1995153["test_bug_1995153.py"]
  tests-functional-regressions-test-bug-2007968["test_bug_2007968.py"]
  tests-functional-regressions-test-bug-2016173["test_bug_2016173.py"]
  tests-functional-regressions-test-bug-2025480["test_bug_2025480.py"]
  tests-functional-regressions-test-bug-2040264["test_bug_2040264.py"]
  tests-functional-regressions-test-bug-2044235["test_bug_2044235.py"]
  tests-functional-regressions-test-bug-2048837["test_bug_2048837.py"]
  tests-functional-regressions-test-bug-2062127["test_bug_2062127.py"]
  tests-functional-regressions-test-bug-2062425["test_bug_2062425.py"]
  tests-functional-regressions-test-bug-2074219["test_bug_2074219.py"]
  tests-functional-regressions-test-bug-2077980["test_bug_2077980.py"]
  tests-functional-regressions-test-bug-2079850["test_bug_2079850.py"]
  tests-functional-regressions-test-bug-2080531["test_bug_2080531.py"]
  tests-functional-regressions-test-bug-2085135["test_bug_2085135.py"]
  tests-functional-regressions-test-bug-2085975["test_bug_2085975.py"]
  tests-functional-regressions-test-bug-2088066["test_bug_2088066.py"]
  tests-functional-regressions-test-bug-2098496["test_bug_2098496.py"]
  tests-functional-regressions-test-bug-2098892["test_bug_2098892.py"]
  tests-functional-regressions-test-bug-2102038["test_bug_2102038.py"]
  tests-functional-regressions-test-bug-2108974["test_bug_2108974.py"]
  tests-functional-regressions-test-bug-2111440["test_bug_2111440.py"]
  tests-functional-regressions-test-bug-2112187["test_bug_2112187.py"]
  tests-functional-regressions-test-bug-2125052["test_bug_2125052.py"]
  tests-functional-regressions-test-bug-2125935["test_bug_2125935.py"]
  tests-functional-regressions-test-bug-2127196["test_bug_2127196.py"]
  tests-functional-regressions-test-bug-2134375["test_bug_2134375.py"]
  tests-functional-regressions-test-bug-2139351["test_bug_2139351.py"]
  tests-functional-regressions-test-bug-2140537["test_bug_2140537.py"]
  tests-functional-regressions-test-bug-2140631["test_bug_2140631.py"]
  tests-functional-regressions-test-bug-2143972["test_bug_2143972.py"]
  tests-functional-regressions-test-bug-2152697["test_bug_2152697.py"]
  tests-functional-regressions-test-bug-2153425["test_bug_2153425.py"]
  tests-functional-regressions-test-bug-2154495["test_bug_2154495.py"]
  tests-functional-regressions-test-bug-2160224["test_bug_2160224.py"]
  tests-functional-regressions-test-bug-2164869["test_bug_2164869.py"]
  tests-functional-regressions-test-bug-2166786["test_bug_2166786.py"]
  tests-functional-test-aggregates["test_aggregates.py"]
  tests-functional-test-availability-zones["test_availability_zones.py"]
  tests-functional-test-boot-from-volume["test_boot_from_volume.py"]
  tests-functional-test-cold-migrate["test_cold_migrate.py"]
  tests-functional-test-compute-mgr["test_compute_mgr.py"]
  tests-functional-test-conf-max-attach-disk-devices["test_conf_max_attach_disk_devices.py"]
  tests-functional-test-cross-az-attach["test_cross_az_attach.py"]
  tests-functional-test-cross-cell-migrate["test_cross_cell_migrate.py"]
  tests-functional-test-ephemeral-encryption["test_ephemeral_encryption.py"]
  tests-functional-test-external-networks["test_external_networks.py"]
  tests-functional-test-flavor-extraspecs["test_flavor_extraspecs.py"]
  tests-functional-test-graceful-shutdown["test_graceful_shutdown.py"]
  tests-functional-test-images["test_images.py"]
  tests-functional-test-instance-actions["test_instance_actions.py"]
  tests-functional-test-ip-allocation["test_ip_allocation.py"]
  tests-functional-test-json-filter["test_json_filter.py"]
  tests-functional-test-legacy-v2-compatible-wrapper["test_legacy_v2_compatible_wrapper.py"]
  tests-functional-test-list-servers-ip-filter["test_list_servers_ip_filter.py"]
  tests-functional-test-metadata["test_metadata.py"]
  tests-functional-test-middleware["test_middleware.py"]
  tests-functional-test-multiattach["test_multiattach.py"]
  tests-functional-test-nova-manage["test_nova_manage.py"]
  tests-functional-test-policy["test_policy.py"]
  tests-functional-test-report-client["test_report_client.py"]
  tests-functional-test-routed-networks["test_routed_networks.py"]
  tests-functional-test-scheduler["test_scheduler.py"]
  tests-functional-test-server-external-events["test_server_external_events.py"]
  tests-functional-test-server-faults["test_server_faults.py"]
  tests-functional-test-server-group["test_server_group.py"]
  tests-functional-test-server-rescue["test_server_rescue.py"]
  tests-functional-test-servers["test_servers.py"]
  tests-functional-test-servers-provider-tree["test_servers_provider_tree.py"]
  tests-functional-test-servers-resource-request["test_servers_resource_request.py"]
  tests-functional-test-service["test_service.py"]
  tests-functional-test-unified-limits["test_unified_limits.py"]
  tests-functional-wsgi-test-flavor-manage["test_flavor_manage.py"]
  tests-functional-wsgi-test-interfaces["test_interfaces.py"]
  tests-functional-wsgi-test-secgroup["test_secgroup.py"]
  tests-functional-wsgi-test-servers["test_servers.py"]
  tests-functional-wsgi-test-services["test_services.py"]
  tests-json-ref["json_ref.py"]
  tests-unit-accelerator-test-cyborg["test_cyborg.py"]
  tests-unit-api-openstack-compute-admin-only-action-common["admin_only_action_common.py"]
  tests-unit-api-openstack-compute-dummy-schema["dummy_schema.py"]
  tests-unit-api-openstack-compute-microversions["microversions.py"]
  tests-unit-api-openstack-compute-test-access-ips["test_access_ips.py"]
  tests-unit-api-openstack-compute-test-admin-actions["test_admin_actions.py"]
  tests-unit-api-openstack-compute-test-admin-password["test_admin_password.py"]
  tests-unit-api-openstack-compute-test-aggregates["test_aggregates.py"]
  tests-unit-api-openstack-compute-test-api["test_api.py"]
  tests-unit-api-openstack-compute-test-assisted-snapshots["test_assisted_snapshots.py"]
  tests-unit-api-openstack-compute-test-attach-interfaces["test_attach_interfaces.py"]
  tests-unit-api-openstack-compute-test-availability-zone["test_availability_zone.py"]
  tests-unit-api-openstack-compute-test-baremetal-nodes["test_baremetal_nodes.py"]
  tests-unit-api-openstack-compute-test-certificates["test_certificates.py"]
  tests-unit-api-openstack-compute-test-cloudpipe["test_cloudpipe.py"]
  tests-unit-api-openstack-compute-test-cloudpipe-update["test_cloudpipe_update.py"]
  tests-unit-api-openstack-compute-test-console-auth-tokens["test_console_auth_tokens.py"]
  tests-unit-api-openstack-compute-test-console-output["test_console_output.py"]
  tests-unit-api-openstack-compute-test-create-backup["test_create_backup.py"]
  tests-unit-api-openstack-compute-test-deferred-delete["test_deferred_delete.py"]
  tests-unit-api-openstack-compute-test-disk-config["test_disk_config.py"]
  tests-unit-api-openstack-compute-test-evacuate["test_evacuate.py"]
  tests-unit-api-openstack-compute-test-extended-ips["test_extended_ips.py"]
  tests-unit-api-openstack-compute-test-extended-ips-mac["test_extended_ips_mac.py"]
  tests-unit-api-openstack-compute-test-extension-info["test_extension_info.py"]
  tests-unit-api-openstack-compute-test-flavor-access["test_flavor_access.py"]
  tests-unit-api-openstack-compute-test-flavor-disabled["test_flavor_disabled.py"]
  tests-unit-api-openstack-compute-test-flavor-manage["test_flavor_manage.py"]
  tests-unit-api-openstack-compute-test-flavorextradata["test_flavorextradata.py"]
  tests-unit-api-openstack-compute-test-flavors["test_flavors.py"]
  tests-unit-api-openstack-compute-test-flavors-extraspecs["test_flavors_extraspecs.py"]
  tests-unit-api-openstack-compute-test-floating-ip-pools["test_floating_ip_pools.py"]
  tests-unit-api-openstack-compute-test-floating-ips["test_floating_ips.py"]
  tests-unit-api-openstack-compute-test-hosts["test_hosts.py"]
  tests-unit-api-openstack-compute-test-hypervisors["test_hypervisors.py"]
  tests-unit-api-openstack-compute-test-image-metadata["test_image_metadata.py"]
  tests-unit-api-openstack-compute-test-images["test_images.py"]
  tests-unit-api-openstack-compute-test-instance-actions["test_instance_actions.py"]
  tests-unit-api-openstack-compute-test-instance-usage-audit-log["test_instance_usage_audit_log.py"]
  tests-unit-api-openstack-compute-test-keypairs["test_keypairs.py"]
  tests-unit-api-openstack-compute-test-limits["test_limits.py"]
  tests-unit-api-openstack-compute-test-lock-server["test_lock_server.py"]
  tests-unit-api-openstack-compute-test-microversions["test_microversions.py"]
  tests-unit-api-openstack-compute-test-migrate-server["test_migrate_server.py"]
  tests-unit-api-openstack-compute-test-migrations["test_migrations.py"]
  tests-unit-api-openstack-compute-test-multinic["test_multinic.py"]
  tests-unit-api-openstack-compute-test-networks["test_networks.py"]
  tests-unit-api-openstack-compute-test-pause-server["test_pause_server.py"]
  tests-unit-api-openstack-compute-test-quota-classes["test_quota_classes.py"]
  tests-unit-api-openstack-compute-test-quota-sets["test_quota_sets.py"]
  tests-unit-api-openstack-compute-test-remote-consoles["test_remote_consoles.py"]
  tests-unit-api-openstack-compute-test-rescue["test_rescue.py"]
  tests-unit-api-openstack-compute-test-schemas["test_schemas.py"]
  tests-unit-api-openstack-compute-test-security-groups["test_security_groups.py"]
  tests-unit-api-openstack-compute-test-server-actions["test_server_actions.py"]
  tests-unit-api-openstack-compute-test-server-diagnostics["test_server_diagnostics.py"]
  tests-unit-api-openstack-compute-test-server-external-events["test_server_external_events.py"]
  tests-unit-api-openstack-compute-test-server-group-quotas["test_server_group_quotas.py"]
  tests-unit-api-openstack-compute-test-server-groups["test_server_groups.py"]
  tests-unit-api-openstack-compute-test-server-metadata["test_server_metadata.py"]
  tests-unit-api-openstack-compute-test-server-migrations["test_server_migrations.py"]
  tests-unit-api-openstack-compute-test-server-password["test_server_password.py"]
  tests-unit-api-openstack-compute-test-server-reset-state["test_server_reset_state.py"]
  tests-unit-api-openstack-compute-test-server-shares["test_server_shares.py"]
  tests-unit-api-openstack-compute-test-server-start-stop["test_server_start_stop.py"]
  tests-unit-api-openstack-compute-test-server-tags["test_server_tags.py"]
  tests-unit-api-openstack-compute-test-server-topology["test_server_topology.py"]
  tests-unit-api-openstack-compute-test-servers["test_servers.py"]
  tests-unit-api-openstack-compute-test-services["test_services.py"]
  tests-unit-api-openstack-compute-test-shelve["test_shelve.py"]
  tests-unit-api-openstack-compute-test-simple-tenant-usage["test_simple_tenant_usage.py"]
  tests-unit-api-openstack-compute-test-snapshots["test_snapshots.py"]
  tests-unit-api-openstack-compute-test-suspend-server["test_suspend_server.py"]
  tests-unit-api-openstack-compute-test-tenant-networks["test_tenant_networks.py"]
  tests-unit-api-openstack-compute-test-urlmap["test_urlmap.py"]
  tests-unit-api-openstack-compute-test-versions["test_versions.py"]
  tests-unit-api-openstack-compute-test-volume-attachments["test_volume_attachments.py"]
  tests-unit-api-openstack-compute-test-volumes["test_volumes.py"]
  tests-unit-api-openstack-compute-test-volumes-boot["test_volumes_boot.py"]
  tests-unit-api-openstack-fakes["fakes.py"]
  tests-unit-api-openstack-test-api-version-request["test_api_version_request.py"]
  tests-unit-api-openstack-test-common["test_common.py"]
  tests-unit-api-openstack-test-faults["test_faults.py"]
  tests-unit-api-openstack-test-legacy-v2-compatible-wrapper["test_legacy_v2_compatible_wrapper.py"]
  tests-unit-api-openstack-test-mapper["test_mapper.py"]
  tests-unit-api-openstack-test-requestlog["test_requestlog.py"]
  tests-unit-api-openstack-test-wsgi["test_wsgi.py"]
  tests-unit-api-openstack-test-wsgi-app["test_wsgi_app.py"]
  tests-unit-api-test-auth["test_auth.py"]
  tests-unit-api-test-compute-req-id["test_compute_req_id.py"]
  tests-unit-api-test-wsgi["test_wsgi.py"]
  tests-unit-api-test-wsgi-loader["test_wsgi_loader.py"]
  tests-unit-api-validation-extra-specs-test-validators["test_validators.py"]
  tests-unit-cmd-test-baseproxy["test_baseproxy.py"]
  tests-unit-cmd-test-common["test_common.py"]
  tests-unit-cmd-test-compute["test_compute.py"]
  tests-unit-cmd-test-manage["test_manage.py"]
  tests-unit-cmd-test-policy["test_policy.py"]
  tests-unit-cmd-test-scheduler["test_scheduler.py"]
  tests-unit-cmd-test-status["test_status.py"]
  tests-unit-compute-fake-resource-tracker["fake_resource_tracker.py"]
  tests-unit-compute-monitors-cpu-test-virt-driver["test_virt_driver.py"]
  tests-unit-compute-monitors-test-monitors["test_monitors.py"]
  tests-unit-compute-test-api["test_api.py"]
  tests-unit-compute-test-claims["test_claims.py"]
  tests-unit-compute-test-compute["test_compute.py"]
  tests-unit-compute-test-compute-mgr["test_compute_mgr.py"]
  tests-unit-compute-test-flavors["test_flavors.py"]
  tests-unit-compute-test-host-api["test_host_api.py"]
  tests-unit-compute-test-instance-list["test_instance_list.py"]
  tests-unit-compute-test-keypairs["test_keypairs.py"]
  tests-unit-compute-test-multi-cell-list["test_multi_cell_list.py"]
  tests-unit-compute-test-pci-placement-translator["test_pci_placement_translator.py"]
  tests-unit-compute-test-provider-config["test_provider_config.py"]
  tests-unit-compute-test-provider-tree["test_provider_tree.py"]
  tests-unit-compute-test-resource-tracker["test_resource_tracker.py"]
  tests-unit-compute-test-rpcapi["test_rpcapi.py"]
  tests-unit-compute-test-shelve["test_shelve.py"]
  tests-unit-compute-test-stats["test_stats.py"]
  tests-unit-compute-test-utils["test_utils.py"]
  tests-unit-compute-test-virtapi["test_virtapi.py"]
  tests-unit-conductor-tasks-test-base["test_base.py"]
  tests-unit-conductor-tasks-test-cross-cell-migrate["test_cross_cell_migrate.py"]
  tests-unit-conductor-tasks-test-live-migrate["test_live_migrate.py"]
  tests-unit-conductor-tasks-test-migrate["test_migrate.py"]
  tests-unit-conductor-test-conductor["test_conductor.py"]
  tests-unit-conf-test-base["test_base.py"]
  tests-unit-conf-test-devices["test_devices.py"]
  tests-unit-conf-test-neutron["test_neutron.py"]
  tests-unit-console-rfb-test-auth["test_auth.py"]
  tests-unit-console-rfb-test-authnone["test_authnone.py"]
  tests-unit-console-rfb-test-authvencrypt["test_authvencrypt.py"]
  tests-unit-console-securityproxy-test-rfb["test_rfb.py"]
  tests-unit-console-test-serial["test_serial.py"]
  tests-unit-console-test-type["test_type.py"]
  tests-unit-console-test-websocketproxy["test_websocketproxy.py"]
  tests-unit-db-api-test-api["test_api.py"]
  tests-unit-db-api-test-migrations["test_migrations.py"]
  tests-unit-db-main-test-api["test_api.py"]
  tests-unit-db-main-test-migrations["test_migrations.py"]
  tests-unit-db-test-migration["test_migration.py"]
  tests-unit-db-test-models["test_models.py"]
  tests-unit-db-test-utils["test_utils.py"]
  tests-unit-fake-block-device["fake_block_device.py"]
  tests-unit-fake-build-request["fake_build_request.py"]
  tests-unit-fake-console-auth-token["fake_console_auth_token.py"]
  tests-unit-fake-crypto["fake_crypto.py"]
  tests-unit-fake-diagnostics["fake_diagnostics.py"]
  tests-unit-fake-flavor["fake_flavor.py"]
  tests-unit-fake-hosts["fake_hosts.py"]
  tests-unit-fake-instance["fake_instance.py"]
  tests-unit-fake-loadables-fake-loadable1["fake_loadable1.py"]
  tests-unit-fake-loadables-fake-loadable2["fake_loadable2.py"]
  tests-unit-fake-loadables-init["__init__.py"]
  tests-unit-fake-network["fake_network.py"]
  tests-unit-fake-network-cache-model["fake_network_cache_model.py"]
  tests-unit-fake-pci-device-pools["fake_pci_device_pools.py"]
  tests-unit-fake-policy["fake_policy.py"]
  tests-unit-fake-processutils["fake_processutils.py"]
  tests-unit-fake-request-spec["fake_request_spec.py"]
  tests-unit-fake-requests["fake_requests.py"]
  tests-unit-fake-server-actions["fake_server_actions.py"]
  tests-unit-fake-volume["fake_volume.py"]
  tests-unit-fixtures-test-libvirt["test_libvirt.py"]
  tests-unit-fixtures-test-notifications["test_notifications.py"]
  tests-unit-image-fake["fake.py"]
  tests-unit-image-fixtures["image_fixtures.py"]
  tests-unit-image-test-glance["test_glance.py"]
  tests-unit-init["__init__.py"]
  tests-unit-keymgr-test-conf-key-mgr["test_conf_key_mgr.py"]
  tests-unit-limit-test-local["test_local.py"]
  tests-unit-limit-test-placement["test_placement.py"]
  tests-unit-matchers["matchers.py"]
  tests-unit-network-test-network-info["test_network_info.py"]
  tests-unit-network-test-neutron["test_neutron.py"]
  tests-unit-network-test-os-vif-util["test_os_vif_util.py"]
  tests-unit-network-test-security-group["test_security_group.py"]
  tests-unit-notifications-objects-test-exception["test_exception.py"]
  tests-unit-notifications-objects-test-flavor["test_flavor.py"]
  tests-unit-notifications-objects-test-instance["test_instance.py"]
  tests-unit-notifications-objects-test-notification["test_notification.py"]
  tests-unit-notifications-objects-test-service["test_service.py"]
  tests-unit-notifications-test-base["test_base.py"]
  tests-unit-objects-test-aggregate["test_aggregate.py"]
  tests-unit-objects-test-block-device["test_block_device.py"]
  tests-unit-objects-test-build-request["test_build_request.py"]
  tests-unit-objects-test-cell-mapping["test_cell_mapping.py"]
  tests-unit-objects-test-compute-node["test_compute_node.py"]
  tests-unit-objects-test-console-auth-token["test_console_auth_token.py"]
  tests-unit-objects-test-diagnostics["test_diagnostics.py"]
  tests-unit-objects-test-ec2["test_ec2.py"]
  tests-unit-objects-test-external-event["test_external_event.py"]
  tests-unit-objects-test-fields["test_fields.py"]
  tests-unit-objects-test-flavor["test_flavor.py"]
  tests-unit-objects-test-host-mapping["test_host_mapping.py"]
  tests-unit-objects-test-hv-spec["test_hv_spec.py"]
  tests-unit-objects-test-image-meta["test_image_meta.py"]
  tests-unit-objects-test-instance["test_instance.py"]
  tests-unit-objects-test-instance-action["test_instance_action.py"]
  tests-unit-objects-test-instance-device-metadata["test_instance_device_metadata.py"]
  tests-unit-objects-test-instance-fault["test_instance_fault.py"]
  tests-unit-objects-test-instance-group["test_instance_group.py"]
  tests-unit-objects-test-instance-info-cache["test_instance_info_cache.py"]
  tests-unit-objects-test-instance-mapping["test_instance_mapping.py"]
  tests-unit-objects-test-instance-numa["test_instance_numa.py"]
  tests-unit-objects-test-instance-pci-requests["test_instance_pci_requests.py"]
  tests-unit-objects-test-keypair["test_keypair.py"]
  tests-unit-objects-test-migrate-data["test_migrate_data.py"]
  tests-unit-objects-test-migration["test_migration.py"]
  tests-unit-objects-test-migration-context["test_migration_context.py"]
  tests-unit-objects-test-monitor-metric["test_monitor_metric.py"]
  tests-unit-objects-test-network-request["test_network_request.py"]
  tests-unit-objects-test-numa["test_numa.py"]
  tests-unit-objects-test-objects["test_objects.py"]
  tests-unit-objects-test-pci-device["test_pci_device.py"]
  tests-unit-objects-test-pci-device-pool["test_pci_device_pool.py"]
  tests-unit-objects-test-quotas["test_quotas.py"]
  tests-unit-objects-test-request-spec["test_request_spec.py"]
  tests-unit-objects-test-resource["test_resource.py"]
  tests-unit-objects-test-security-group["test_security_group.py"]
  tests-unit-objects-test-selection["test_selection.py"]
  tests-unit-objects-test-service["test_service.py"]
  tests-unit-objects-test-share-mapping["test_share_mapping.py"]
  tests-unit-objects-test-tag["test_tag.py"]
  tests-unit-objects-test-task-log["test_task_log.py"]
  tests-unit-objects-test-trusted-certs["test_trusted_certs.py"]
  tests-unit-objects-test-vcpu-model["test_vcpu_model.py"]
  tests-unit-objects-test-virt-cpu-topology["test_virt_cpu_topology.py"]
  tests-unit-objects-test-virtual-interface["test_virtual_interface.py"]
  tests-unit-objects-test-volume-usage["test_volume_usage.py"]
  tests-unit-pci-fakes["fakes.py"]
  tests-unit-pci-test-devspec["test_devspec.py"]
  tests-unit-pci-test-manager["test_manager.py"]
  tests-unit-pci-test-request["test_request.py"]
  tests-unit-pci-test-stats["test_stats.py"]
  tests-unit-pci-test-utils["test_utils.py"]
  tests-unit-pci-test-whitelist["test_whitelist.py"]
  tests-unit-policies-base["base.py"]
  tests-unit-policies-test-admin-actions["test_admin_actions.py"]
  tests-unit-policies-test-admin-password["test_admin_password.py"]
  tests-unit-policies-test-aggregates["test_aggregates.py"]
  tests-unit-policies-test-assisted-volume-snapshots["test_assisted_volume_snapshots.py"]
  tests-unit-policies-test-attach-interfaces["test_attach_interfaces.py"]
  tests-unit-policies-test-availability-zone["test_availability_zone.py"]
  tests-unit-policies-test-baremetal-nodes["test_baremetal_nodes.py"]
  tests-unit-policies-test-console-auth-tokens["test_console_auth_tokens.py"]
  tests-unit-policies-test-console-output["test_console_output.py"]
  tests-unit-policies-test-create-backup["test_create_backup.py"]
  tests-unit-policies-test-deferred-delete["test_deferred_delete.py"]
  tests-unit-policies-test-evacuate["test_evacuate.py"]
  tests-unit-policies-test-extensions["test_extensions.py"]
  tests-unit-policies-test-flavor-access["test_flavor_access.py"]
  tests-unit-policies-test-flavor-extra-specs["test_flavor_extra_specs.py"]
  tests-unit-policies-test-flavor-manage["test_flavor_manage.py"]
  tests-unit-policies-test-floating-ip-pools["test_floating_ip_pools.py"]
  tests-unit-policies-test-floating-ips["test_floating_ips.py"]
  tests-unit-policies-test-hosts["test_hosts.py"]
  tests-unit-policies-test-hypervisors["test_hypervisors.py"]
  tests-unit-policies-test-instance-actions["test_instance_actions.py"]
  tests-unit-policies-test-instance-usage-audit-log["test_instance_usage_audit_log.py"]
  tests-unit-policies-test-keypairs["test_keypairs.py"]
  tests-unit-policies-test-limits["test_limits.py"]
  tests-unit-policies-test-lock-server["test_lock_server.py"]
  tests-unit-policies-test-migrate-server["test_migrate_server.py"]
  tests-unit-policies-test-migrations["test_migrations.py"]
  tests-unit-policies-test-multinic["test_multinic.py"]
  tests-unit-policies-test-networks["test_networks.py"]
  tests-unit-policies-test-pause-server["test_pause_server.py"]
  tests-unit-policies-test-quota-class-sets["test_quota_class_sets.py"]
  tests-unit-policies-test-quota-sets["test_quota_sets.py"]
  tests-unit-policies-test-remote-consoles["test_remote_consoles.py"]
  tests-unit-policies-test-rescue["test_rescue.py"]
  tests-unit-policies-test-security-groups["test_security_groups.py"]
  tests-unit-policies-test-server-diagnostics["test_server_diagnostics.py"]
  tests-unit-policies-test-server-external-events["test_server_external_events.py"]
  tests-unit-policies-test-server-groups["test_server_groups.py"]
  tests-unit-policies-test-server-ips["test_server_ips.py"]
  tests-unit-policies-test-server-metadata["test_server_metadata.py"]
  tests-unit-policies-test-server-migrations["test_server_migrations.py"]
  tests-unit-policies-test-server-password["test_server_password.py"]
  tests-unit-policies-test-server-tags["test_server_tags.py"]
  tests-unit-policies-test-server-topology["test_server_topology.py"]
  tests-unit-policies-test-servers["test_servers.py"]
  tests-unit-policies-test-services["test_services.py"]
  tests-unit-policies-test-shelve["test_shelve.py"]
  tests-unit-policies-test-simple-tenant-usage["test_simple_tenant_usage.py"]
  tests-unit-policies-test-snapshots["test_snapshots.py"]
  tests-unit-policies-test-suspend-server["test_suspend_server.py"]
  tests-unit-policies-test-tenant-networks["test_tenant_networks.py"]
  tests-unit-policies-test-volume-attachments["test_volume_attachments.py"]
  tests-unit-policies-test-volumes["test_volumes.py"]
  tests-unit-privsep-test-fs["test_fs.py"]
  tests-unit-privsep-test-idmapshift["test_idmapshift.py"]
  tests-unit-privsep-test-libvirt["test_libvirt.py"]
  tests-unit-privsep-test-linux-net["test_linux_net.py"]
  tests-unit-privsep-test-path["test_path.py"]
  tests-unit-privsep-test-qemu["test_qemu.py"]
  tests-unit-privsep-test-utils["test_utils.py"]
  tests-unit-scheduler-client-test-query["test_query.py"]
  tests-unit-scheduler-client-test-report["test_report.py"]
  tests-unit-scheduler-fakes["fakes.py"]
  tests-unit-scheduler-filters-test-affinity-filters["test_affinity_filters.py"]
  tests-unit-scheduler-filters-test-aggregate-image-properties-isolation-filters["test_aggregate_image_properties_isolation_filters.py"]
  tests-unit-scheduler-filters-test-aggregate-instance-extra-specs-filters["test_aggregate_instance_extra_specs_filters.py"]
  tests-unit-scheduler-filters-test-aggregate-multitenancy-isolation-filters["test_aggregate_multitenancy_isolation_filters.py"]
  tests-unit-scheduler-filters-test-compute-capabilities-filters["test_compute_capabilities_filters.py"]
  tests-unit-scheduler-filters-test-compute-filters["test_compute_filters.py"]
  tests-unit-scheduler-filters-test-extra-specs-ops["test_extra_specs_ops.py"]
  tests-unit-scheduler-filters-test-image-props-filters["test_image_props_filters.py"]
  tests-unit-scheduler-filters-test-io-ops-filters["test_io_ops_filters.py"]
  tests-unit-scheduler-filters-test-isolated-hosts-filter["test_isolated_hosts_filter.py"]
  tests-unit-scheduler-filters-test-json-filters["test_json_filters.py"]
  tests-unit-scheduler-filters-test-metrics-filters["test_metrics_filters.py"]
  tests-unit-scheduler-filters-test-num-instances-filters["test_num_instances_filters.py"]
  tests-unit-scheduler-filters-test-numa-topology-filters["test_numa_topology_filters.py"]
  tests-unit-scheduler-filters-test-pci-passthrough-filters["test_pci_passthrough_filters.py"]
  tests-unit-scheduler-filters-test-type-filters["test_type_filters.py"]
  tests-unit-scheduler-filters-test-utils["test_utils.py"]
  tests-unit-scheduler-ironic-fakes["ironic_fakes.py"]
  tests-unit-scheduler-test-filters["test_filters.py"]
  tests-unit-scheduler-test-host-filters["test_host_filters.py"]
  tests-unit-scheduler-test-host-manager["test_host_manager.py"]
  tests-unit-scheduler-test-manager["test_manager.py"]
  tests-unit-scheduler-test-request-filter["test_request_filter.py"]
  tests-unit-scheduler-test-rpcapi["test_rpcapi.py"]
  tests-unit-scheduler-test-utils["test_utils.py"]
  tests-unit-scheduler-weights-test-cross-cell["test_cross_cell.py"]
  tests-unit-scheduler-weights-test-weights-affinity["test_weights_affinity.py"]
  tests-unit-scheduler-weights-test-weights-compute["test_weights_compute.py"]
  tests-unit-scheduler-weights-test-weights-cpu["test_weights_cpu.py"]
  tests-unit-scheduler-weights-test-weights-disk["test_weights_disk.py"]
  tests-unit-scheduler-weights-test-weights-hosts["test_weights_hosts.py"]
  tests-unit-scheduler-weights-test-weights-hypervisor-version["test_weights_hypervisor_version.py"]
  tests-unit-scheduler-weights-test-weights-image-props["test_weights_image_props.py"]
  tests-unit-scheduler-weights-test-weights-ioopsweight["test_weights_ioopsweight.py"]
  tests-unit-scheduler-weights-test-weights-metrics["test_weights_metrics.py"]
  tests-unit-scheduler-weights-test-weights-num-instances["test_weights_num_instances.py"]
  tests-unit-scheduler-weights-test-weights-pci["test_weights_pci.py"]
  tests-unit-scheduler-weights-test-weights-ram["test_weights_ram.py"]
  tests-unit-servicegroup-test-api["test_api.py"]
  tests-unit-servicegroup-test-db-servicegroup["test_db_servicegroup.py"]
  tests-unit-servicegroup-test-mc-servicegroup["test_mc_servicegroup.py"]
  tests-unit-storage-test-rbd["test_rbd.py"]
  tests-unit-test-api-validation["test_api_validation.py"]
  tests-unit-test-availability-zones["test_availability_zones.py"]
  tests-unit-test-baserpc["test_baserpc.py"]
  tests-unit-test-block-device["test_block_device.py"]
  tests-unit-test-cinder["test_cinder.py"]
  tests-unit-test-conf["test_conf.py"]
  tests-unit-test-configdrive2["test_configdrive2.py"]
  tests-unit-test-context["test_context.py"]
  tests-unit-test-crypto["test_crypto.py"]
  tests-unit-test-exception["test_exception.py"]
  tests-unit-test-exception-wrapper["test_exception_wrapper.py"]
  tests-unit-test-filesystem["test_filesystem.py"]
  tests-unit-test-fixtures["test_fixtures.py"]
  tests-unit-test-hacking["test_hacking.py"]
  tests-unit-test-identity["test_identity.py"]
  tests-unit-test-json-ref["test_json_ref.py"]
  tests-unit-test-loadables["test_loadables.py"]
  tests-unit-test-manila["test_manila.py"]
  tests-unit-test-matchers["test_matchers.py"]
  tests-unit-test-metadata["test_metadata.py"]
  tests-unit-test-notifications["test_notifications.py"]
  tests-unit-test-policy["test_policy.py"]
  tests-unit-test-profiler["test_profiler.py"]
  tests-unit-test-quota["test_quota.py"]
  tests-unit-test-rpc["test_rpc.py"]
  tests-unit-test-service["test_service.py"]
  tests-unit-test-service-auth["test_service_auth.py"]
  tests-unit-test-test["test_test.py"]
  tests-unit-test-test-utils["test_test_utils.py"]
  tests-unit-test-thread-pool-factory["test_thread_pool_factory.py"]
  tests-unit-test-utils["test_utils.py"]
  tests-unit-test-weights["test_weights.py"]
  tests-unit-utils["utils.py"]
  tests-unit-virt-disk-mount-test-api["test_api.py"]
  tests-unit-virt-disk-mount-test-block["test_block.py"]
  tests-unit-virt-disk-mount-test-loop["test_loop.py"]
  tests-unit-virt-disk-mount-test-nbd["test_nbd.py"]
  tests-unit-virt-disk-test-api["test_api.py"]
  tests-unit-virt-disk-test-inject["test_inject.py"]
  tests-unit-virt-disk-vfs-fakeguestfs["fakeguestfs.py"]
  tests-unit-virt-disk-vfs-test-guestfs["test_guestfs.py"]
  tests-unit-virt-fakelibosinfo["fakelibosinfo.py"]
  tests-unit-virt-image-test-model["test_model.py"]
  tests-unit-virt-ironic-test-driver["test_driver.py"]
  tests-unit-virt-ironic-test-patcher["test_patcher.py"]
  tests-unit-virt-ironic-utils["utils.py"]
  tests-unit-virt-libvirt-cpu-test-api["test_api.py"]
  tests-unit-virt-libvirt-cpu-test-core["test_core.py"]
  tests-unit-virt-libvirt-storage-test-dmcrypt["test_dmcrypt.py"]
  tests-unit-virt-libvirt-storage-test-lvm["test_lvm.py"]
  tests-unit-virt-libvirt-test-blockinfo["test_blockinfo.py"]
  tests-unit-virt-libvirt-test-config["test_config.py"]
  tests-unit-virt-libvirt-test-designer["test_designer.py"]
  tests-unit-virt-libvirt-test-driver["test_driver.py"]
  tests-unit-virt-libvirt-test-guest["test_guest.py"]
  tests-unit-virt-libvirt-test-host["test_host.py"]
  tests-unit-virt-libvirt-test-imagebackend["test_imagebackend.py"]
  tests-unit-virt-libvirt-test-imagecache["test_imagecache.py"]
  tests-unit-virt-libvirt-test-machine-type-utils["test_machine_type_utils.py"]
  tests-unit-virt-libvirt-test-migration["test_migration.py"]
  tests-unit-virt-libvirt-test-utils["test_utils.py"]
  tests-unit-virt-libvirt-test-vif["test_vif.py"]
  tests-unit-virt-libvirt-volume-test-cephfs["test_cephfs.py"]
  tests-unit-virt-libvirt-volume-test-fibrechannel["test_fibrechannel.py"]
  tests-unit-virt-libvirt-volume-test-fs["test_fs.py"]
  tests-unit-virt-libvirt-volume-test-gpfs["test_gpfs.py"]
  tests-unit-virt-libvirt-volume-test-iscsi["test_iscsi.py"]
  tests-unit-virt-libvirt-volume-test-iser["test_iser.py"]
  tests-unit-virt-libvirt-volume-test-lightos["test_lightos.py"]
  tests-unit-virt-libvirt-volume-test-mount["test_mount.py"]
  tests-unit-virt-libvirt-volume-test-net["test_net.py"]
  tests-unit-virt-libvirt-volume-test-nfs["test_nfs.py"]
  tests-unit-virt-libvirt-volume-test-nvme["test_nvme.py"]
  tests-unit-virt-libvirt-volume-test-quobyte["test_quobyte.py"]
  tests-unit-virt-libvirt-volume-test-remotefs["test_remotefs.py"]
  tests-unit-virt-libvirt-volume-test-scaleio["test_scaleio.py"]
  tests-unit-virt-libvirt-volume-test-smbfs["test_smbfs.py"]
  tests-unit-virt-libvirt-volume-test-storpool["test_storpool.py"]
  tests-unit-virt-libvirt-volume-test-volume["test_volume.py"]
  tests-unit-virt-libvirt-volume-test-vzstorage["test_vzstorage.py"]
  tests-unit-virt-test-block-device["test_block_device.py"]
  tests-unit-virt-test-configdrive["test_configdrive.py"]
  tests-unit-virt-test-events["test_events.py"]
  tests-unit-virt-test-fake["test_fake.py"]
  tests-unit-virt-test-hardware["test_hardware.py"]
  tests-unit-virt-test-imagecache["test_imagecache.py"]
  tests-unit-virt-test-images["test_images.py"]
  tests-unit-virt-test-netutils["test_netutils.py"]
  tests-unit-virt-test-node["test_node.py"]
  tests-unit-virt-test-osinfo["test_osinfo.py"]
  tests-unit-virt-test-virt["test_virt.py"]
  tests-unit-virt-test-virt-drivers["test_virt_drivers.py"]
  tests-unit-virt-vmwareapi-fake["fake.py"]
  tests-unit-virt-vmwareapi-stubs["stubs.py"]
  tests-unit-virt-vmwareapi-test-configdrive["test_configdrive.py"]
  tests-unit-virt-vmwareapi-test-driver-api["test_driver_api.py"]
  tests-unit-virt-vmwareapi-test-ds-util["test_ds_util.py"]
  tests-unit-virt-vmwareapi-test-ds-util-datastore-selection["test_ds_util_datastore_selection.py"]
  tests-unit-virt-vmwareapi-test-imagecache["test_imagecache.py"]
  tests-unit-virt-vmwareapi-test-images["test_images.py"]
  tests-unit-virt-vmwareapi-test-network-util["test_network_util.py"]
  tests-unit-virt-vmwareapi-test-session["test_session.py"]
  tests-unit-virt-vmwareapi-test-vif["test_vif.py"]
  tests-unit-virt-vmwareapi-test-vim-util["test_vim_util.py"]
  tests-unit-virt-vmwareapi-test-vm-util["test_vm_util.py"]
  tests-unit-virt-vmwareapi-test-vmops["test_vmops.py"]
  tests-unit-virt-vmwareapi-test-volumeops["test_volumeops.py"]
  tests-unit-virt-zvm-test-driver["test_driver.py"]
  tests-unit-virt-zvm-test-guest["test_guest.py"]
  tests-unit-virt-zvm-test-hypervisor["test_hypervisor.py"]
  tests-unit-virt-zvm-test-utils["test_utils.py"]
  tests-unit-volume-test-cinder["test_cinder.py"]
  utils["utils.py"]
  virt-arch["arch.py"]
  virt-block-device["block_device.py"]
  virt-configdrive["configdrive.py"]
  virt-disk-api["api.py"]
  virt-disk-mount-api["api.py"]
  virt-disk-mount-block["block.py"]
  virt-disk-mount-loop["loop.py"]
  virt-disk-mount-nbd["nbd.py"]
  virt-disk-vfs-api["api.py"]
  virt-disk-vfs-guestfs["guestfs.py"]
  virt-driver["driver.py"]
  virt-event["event.py"]
  virt-fake["fake.py"]
  virt-hardware["hardware.py"]
  virt-image-model["model.py"]
  virt-imagecache["imagecache.py"]
  virt-images["images.py"]
  virt-ironic-driver["driver.py"]
  virt-ironic-init["__init__.py"]
  virt-ironic-ironic-states["ironic_states.py"]
  virt-ironic-patcher["patcher.py"]
  virt-libvirt-blockinfo["blockinfo.py"]
  virt-libvirt-config["config.py"]
  virt-libvirt-cpu-api["api.py"]
  virt-libvirt-cpu-core["core.py"]
  virt-libvirt-designer["designer.py"]
  virt-libvirt-driver["driver.py"]
  virt-libvirt-event["event.py"]
  virt-libvirt-guest["guest.py"]
  virt-libvirt-host["host.py"]
  virt-libvirt-imagebackend["imagebackend.py"]
  virt-libvirt-imagecache["imagecache.py"]
  virt-libvirt-init["__init__.py"]
  virt-libvirt-instancejobtracker["instancejobtracker.py"]
  virt-libvirt-machine-type-utils["machine_type_utils.py"]
  virt-libvirt-migration["migration.py"]
  virt-libvirt-storage-dmcrypt["dmcrypt.py"]
  virt-libvirt-storage-lvm["lvm.py"]
  virt-libvirt-utils["utils.py"]
  virt-libvirt-vif["vif.py"]
  virt-libvirt-volume-cephfs["cephfs.py"]
  virt-libvirt-volume-fibrechannel["fibrechannel.py"]
  virt-libvirt-volume-fs["fs.py"]
  virt-libvirt-volume-gpfs["gpfs.py"]
  virt-libvirt-volume-iscsi["iscsi.py"]
  virt-libvirt-volume-iser["iser.py"]
  virt-libvirt-volume-lightos["lightos.py"]
  virt-libvirt-volume-mount["mount.py"]
  virt-libvirt-volume-net["net.py"]
  virt-libvirt-volume-nfs["nfs.py"]
  virt-libvirt-volume-nvme["nvme.py"]
  virt-libvirt-volume-quobyte["quobyte.py"]
  virt-libvirt-volume-remotefs["remotefs.py"]
  virt-libvirt-volume-scaleio["scaleio.py"]
  virt-libvirt-volume-smbfs["smbfs.py"]
  virt-libvirt-volume-storpool["storpool.py"]
  virt-libvirt-volume-volume["volume.py"]
  virt-libvirt-volume-vzstorage["vzstorage.py"]
  virt-netutils["netutils.py"]
  virt-node["node.py"]
  virt-osinfo["osinfo.py"]
  virt-storage-users["storage_users.py"]
  virt-virtapi["virtapi.py"]
  virt-vmwareapi-constants["constants.py"]
  virt-vmwareapi-driver["driver.py"]
  virt-vmwareapi-ds-util["ds_util.py"]
  virt-vmwareapi-error-util["error_util.py"]
  virt-vmwareapi-host["host.py"]
  virt-vmwareapi-imagecache["imagecache.py"]
  virt-vmwareapi-images["images.py"]
  virt-vmwareapi-init["__init__.py"]
  virt-vmwareapi-network-util["network_util.py"]
  virt-vmwareapi-session["session.py"]
  virt-vmwareapi-vif["vif.py"]
  virt-vmwareapi-vim-util["vim_util.py"]
  virt-vmwareapi-vm-util["vm_util.py"]
  virt-vmwareapi-vmops["vmops.py"]
  virt-vmwareapi-volumeops["volumeops.py"]
  virt-zvm-driver["driver.py"]
  virt-zvm-guest["guest.py"]
  virt-zvm-hypervisor["hypervisor.py"]
  virt-zvm-init["__init__.py"]
  virt-zvm-utils["utils.py"]
  volume-cinder["cinder.py"]
  volume-init["__init__.py"]
  wsgi-metadata["metadata.py"]
  wsgi-osapi-compute["osapi_compute.py"]
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
  api-metadata-base --> virt-netutils
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
  api-openstack-compute-admin-actions --> policies-admin-actions
  api-openstack-compute-admin-password --> api-openstack-common
  api-openstack-compute-admin-password --> api-openstack-compute-schemas-admin-password
  api-openstack-compute-admin-password --> api-openstack-wsgi
  api-openstack-compute-admin-password --> api-validation-init
  api-openstack-compute-admin-password --> compute-api
  api-openstack-compute-admin-password --> exception
  api-openstack-compute-admin-password --> i18n
  api-openstack-compute-admin-password --> policies-admin-password
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
  api-openstack-compute-aggregates --> policies-aggregates
  api-openstack-compute-aggregates --> utils
  api-openstack-compute-assisted-volume-snapshots --> api-openstack-compute-schemas-assisted-volume-snapshots
  api-openstack-compute-assisted-volume-snapshots --> api-openstack-wsgi
  api-openstack-compute-assisted-volume-snapshots --> api-validation-init
  api-openstack-compute-assisted-volume-snapshots --> compute-api
  api-openstack-compute-assisted-volume-snapshots --> exception
  api-openstack-compute-assisted-volume-snapshots --> policies-assisted-volume-snapshots
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
  api-openstack-compute-attach-interfaces --> policies-attach-interfaces
  api-openstack-compute-availability-zone --> api-openstack-compute-schemas-availability-zone
  api-openstack-compute-availability-zone --> api-openstack-wsgi
  api-openstack-compute-availability-zone --> api-validation-init
  api-openstack-compute-availability-zone --> compute-api
  api-openstack-compute-availability-zone --> conf-init
  api-openstack-compute-availability-zone --> policies-availability-zone
  api-openstack-compute-availability-zone --> servicegroup-init
  api-openstack-compute-baremetal-nodes --> api-openstack-api-version-request
  api-openstack-compute-baremetal-nodes --> api-openstack-compute-schemas-baremetal-nodes
  api-openstack-compute-baremetal-nodes --> api-openstack-wsgi
  api-openstack-compute-baremetal-nodes --> api-validation-init
  api-openstack-compute-baremetal-nodes --> conf-init
  api-openstack-compute-baremetal-nodes --> i18n
  api-openstack-compute-baremetal-nodes --> policies-baremetal-nodes
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
  api-openstack-compute-console-auth-tokens --> policies-console-auth-tokens
  api-openstack-compute-console-output --> api-openstack-common
  api-openstack-compute-console-output --> api-openstack-compute-schemas-console-output
  api-openstack-compute-console-output --> api-openstack-wsgi
  api-openstack-compute-console-output --> api-validation-init
  api-openstack-compute-console-output --> compute-api
  api-openstack-compute-console-output --> exception
  api-openstack-compute-console-output --> policies-console-output
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
  api-openstack-compute-create-backup --> policies-create-backup
  api-openstack-compute-deferred-delete --> api-openstack-common
  api-openstack-compute-deferred-delete --> api-openstack-compute-schemas-deferred-delete
  api-openstack-compute-deferred-delete --> api-openstack-wsgi
  api-openstack-compute-deferred-delete --> api-validation-init
  api-openstack-compute-deferred-delete --> compute-api
  api-openstack-compute-deferred-delete --> exception
  api-openstack-compute-deferred-delete --> policies-deferred-delete
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
  api-openstack-compute-evacuate --> policies-evacuate
  api-openstack-compute-evacuate --> utils
  api-openstack-compute-extension-info --> api-openstack-compute-schemas-extension-info
  api-openstack-compute-extension-info --> api-openstack-wsgi
  api-openstack-compute-extension-info --> api-validation-init
  api-openstack-compute-extension-info --> policies-extensions
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
  api-openstack-compute-flavor-access --> policies-flavor-access
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
  api-openstack-compute-flavors --> policies-flavor-extra-specs
  api-openstack-compute-flavors --> policies-flavor-manage
  api-openstack-compute-flavors --> utils
  api-openstack-compute-flavors-extraspecs --> api-openstack-api-version-request
  api-openstack-compute-flavors-extraspecs --> api-openstack-common
  api-openstack-compute-flavors-extraspecs --> api-openstack-compute-schemas-flavors-extraspecs
  api-openstack-compute-flavors-extraspecs --> api-openstack-wsgi
  api-openstack-compute-flavors-extraspecs --> api-validation-extra-specs-validators
  api-openstack-compute-flavors-extraspecs --> api-validation-init
  api-openstack-compute-flavors-extraspecs --> exception
  api-openstack-compute-flavors-extraspecs --> i18n
  api-openstack-compute-flavors-extraspecs --> policies-flavor-extra-specs
  api-openstack-compute-flavors-extraspecs --> utils
  api-openstack-compute-floating-ip-dns --> api-openstack-compute-schemas-floating-ip-dns
  api-openstack-compute-floating-ip-dns --> api-openstack-wsgi
  api-openstack-compute-floating-ip-dns --> api-validation-init
  api-openstack-compute-floating-ip-pools --> api-openstack-api-version-request
  api-openstack-compute-floating-ip-pools --> api-openstack-compute-schemas-floating-ip-pools
  api-openstack-compute-floating-ip-pools --> api-openstack-wsgi
  api-openstack-compute-floating-ip-pools --> api-validation-init
  api-openstack-compute-floating-ip-pools --> network-neutron
  api-openstack-compute-floating-ip-pools --> policies-floating-ip-pools
  api-openstack-compute-floating-ips --> api-openstack-api-version-request
  api-openstack-compute-floating-ips --> api-openstack-common
  api-openstack-compute-floating-ips --> api-openstack-compute-schemas-floating-ips
  api-openstack-compute-floating-ips --> api-openstack-wsgi
  api-openstack-compute-floating-ips --> api-validation-init
  api-openstack-compute-floating-ips --> compute-api
  api-openstack-compute-floating-ips --> exception
  api-openstack-compute-floating-ips --> i18n
  api-openstack-compute-floating-ips --> network-neutron
  api-openstack-compute-floating-ips --> policies-floating-ips
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
  api-openstack-compute-hosts --> policies-hosts
  api-openstack-compute-hypervisors --> api-openstack-api-version-request
  api-openstack-compute-hypervisors --> api-openstack-common
  api-openstack-compute-hypervisors --> api-openstack-compute-schemas-hypervisors
  api-openstack-compute-hypervisors --> api-openstack-compute-views-hypervisors
  api-openstack-compute-hypervisors --> api-openstack-wsgi
  api-openstack-compute-hypervisors --> api-validation-init
  api-openstack-compute-hypervisors --> compute-api
  api-openstack-compute-hypervisors --> exception
  api-openstack-compute-hypervisors --> i18n
  api-openstack-compute-hypervisors --> policies-hypervisors
  api-openstack-compute-hypervisors --> servicegroup-init
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
  api-openstack-compute-instance-actions --> policies-instance-actions
  api-openstack-compute-instance-actions --> utils
  api-openstack-compute-instance-usage-audit-log --> api-openstack-compute-schemas-instance-usage-audit-log
  api-openstack-compute-instance-usage-audit-log --> api-openstack-wsgi
  api-openstack-compute-instance-usage-audit-log --> api-validation-init
  api-openstack-compute-instance-usage-audit-log --> compute-api
  api-openstack-compute-instance-usage-audit-log --> compute-rpcapi
  api-openstack-compute-instance-usage-audit-log --> i18n
  api-openstack-compute-instance-usage-audit-log --> policies-instance-usage-audit-log
  api-openstack-compute-instance-usage-audit-log --> utils
  api-openstack-compute-ips --> api-openstack-common
  api-openstack-compute-ips --> api-openstack-compute-schemas-ips
  api-openstack-compute-ips --> api-openstack-compute-views-ips
  api-openstack-compute-ips --> api-openstack-wsgi
  api-openstack-compute-ips --> api-validation-init
  api-openstack-compute-ips --> compute-api
  api-openstack-compute-ips --> i18n
  api-openstack-compute-ips --> policies-ips
  api-openstack-compute-keypairs --> api-openstack-api-version-request
  api-openstack-compute-keypairs --> api-openstack-common
  api-openstack-compute-keypairs --> api-openstack-compute-schemas-keypairs
  api-openstack-compute-keypairs --> api-openstack-compute-views-keypairs
  api-openstack-compute-keypairs --> api-openstack-wsgi
  api-openstack-compute-keypairs --> api-validation-init
  api-openstack-compute-keypairs --> compute-api
  api-openstack-compute-keypairs --> exception
  api-openstack-compute-keypairs --> objects-keypair
  api-openstack-compute-keypairs --> policies-keypairs
  api-openstack-compute-limits --> api-openstack-api-version-request
  api-openstack-compute-limits --> api-openstack-compute-schemas-limits
  api-openstack-compute-limits --> api-openstack-compute-views-limits
  api-openstack-compute-limits --> api-openstack-wsgi
  api-openstack-compute-limits --> api-validation-init
  api-openstack-compute-limits --> policies-limits
  api-openstack-compute-lock-server --> api-openstack-api-version-request
  api-openstack-compute-lock-server --> api-openstack-common
  api-openstack-compute-lock-server --> api-openstack-compute-schemas-lock-server
  api-openstack-compute-lock-server --> api-openstack-wsgi
  api-openstack-compute-lock-server --> api-validation-init
  api-openstack-compute-lock-server --> compute-api
  api-openstack-compute-lock-server --> policies-lock-server
  api-openstack-compute-migrate-server --> api-openstack-api-version-request
  api-openstack-compute-migrate-server --> api-openstack-common
  api-openstack-compute-migrate-server --> api-openstack-compute-schemas-migrate-server
  api-openstack-compute-migrate-server --> api-openstack-wsgi
  api-openstack-compute-migrate-server --> api-validation-init
  api-openstack-compute-migrate-server --> compute-api
  api-openstack-compute-migrate-server --> exception
  api-openstack-compute-migrate-server --> i18n
  api-openstack-compute-migrate-server --> policies-migrate-server
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
  api-openstack-compute-migrations --> policies-migrations
  api-openstack-compute-multinic --> api-openstack-common
  api-openstack-compute-multinic --> api-openstack-compute-schemas-multinic
  api-openstack-compute-multinic --> api-openstack-wsgi
  api-openstack-compute-multinic --> api-validation-init
  api-openstack-compute-multinic --> compute-api
  api-openstack-compute-multinic --> exception
  api-openstack-compute-multinic --> policies-multinic
  api-openstack-compute-networks --> api-openstack-api-version-request
  api-openstack-compute-networks --> api-openstack-compute-schemas-networks
  api-openstack-compute-networks --> api-openstack-wsgi
  api-openstack-compute-networks --> api-validation-init
  api-openstack-compute-networks --> exception
  api-openstack-compute-networks --> i18n
  api-openstack-compute-networks --> network-neutron
  api-openstack-compute-networks --> policies-networks
  api-openstack-compute-networks-associate --> api-openstack-compute-schemas-networks-associate
  api-openstack-compute-networks-associate --> api-openstack-wsgi
  api-openstack-compute-networks-associate --> api-validation-init
  api-openstack-compute-pause-server --> api-openstack-common
  api-openstack-compute-pause-server --> api-openstack-compute-schemas-pause-server
  api-openstack-compute-pause-server --> api-openstack-wsgi
  api-openstack-compute-pause-server --> api-validation-init
  api-openstack-compute-pause-server --> compute-api
  api-openstack-compute-pause-server --> exception
  api-openstack-compute-pause-server --> policies-pause-server
  api-openstack-compute-quota-classes --> api-openstack-api-version-request
  api-openstack-compute-quota-classes --> api-openstack-compute-schemas-quota-classes
  api-openstack-compute-quota-classes --> api-openstack-wsgi
  api-openstack-compute-quota-classes --> api-validation-init
  api-openstack-compute-quota-classes --> exception
  api-openstack-compute-quota-classes --> limit-utils
  api-openstack-compute-quota-classes --> objects-init
  api-openstack-compute-quota-classes --> policies-quota-class-sets
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
  api-openstack-compute-quota-sets --> policies-quota-sets
  api-openstack-compute-remote-consoles --> api-openstack-common
  api-openstack-compute-remote-consoles --> api-openstack-compute-schemas-remote-consoles
  api-openstack-compute-remote-consoles --> api-openstack-wsgi
  api-openstack-compute-remote-consoles --> api-validation-init
  api-openstack-compute-remote-consoles --> compute-api
  api-openstack-compute-remote-consoles --> exception
  api-openstack-compute-remote-consoles --> policies-remote-consoles
  api-openstack-compute-rescue --> api-openstack-api-version-request
  api-openstack-compute-rescue --> api-openstack-common
  api-openstack-compute-rescue --> api-openstack-compute-schemas-rescue
  api-openstack-compute-rescue --> api-openstack-wsgi
  api-openstack-compute-rescue --> api-validation-init
  api-openstack-compute-rescue --> compute-api
  api-openstack-compute-rescue --> conf-init
  api-openstack-compute-rescue --> exception
  api-openstack-compute-rescue --> policies-rescue
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
  api-openstack-compute-security-groups --> policies-security-groups
  api-openstack-compute-security-groups --> virt-netutils
  api-openstack-compute-server-diagnostics --> api-openstack-api-version-request
  api-openstack-compute-server-diagnostics --> api-openstack-common
  api-openstack-compute-server-diagnostics --> api-openstack-compute-schemas-server-diagnostics
  api-openstack-compute-server-diagnostics --> api-openstack-compute-views-server-diagnostics
  api-openstack-compute-server-diagnostics --> api-openstack-wsgi
  api-openstack-compute-server-diagnostics --> api-validation-init
  api-openstack-compute-server-diagnostics --> compute-api
  api-openstack-compute-server-diagnostics --> exception
  api-openstack-compute-server-diagnostics --> policies-server-diagnostics
  api-openstack-compute-server-external-events --> api-openstack-compute-schemas-server-external-events
  api-openstack-compute-server-external-events --> api-openstack-wsgi
  api-openstack-compute-server-external-events --> api-validation-init
  api-openstack-compute-server-external-events --> compute-api
  api-openstack-compute-server-external-events --> objects-init
  api-openstack-compute-server-external-events --> policies-server-external-events
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
  api-openstack-compute-server-groups --> policies-server-groups
  api-openstack-compute-server-metadata --> api-openstack-common
  api-openstack-compute-server-metadata --> api-openstack-compute-schemas-server-metadata
  api-openstack-compute-server-metadata --> api-openstack-wsgi
  api-openstack-compute-server-metadata --> api-validation-init
  api-openstack-compute-server-metadata --> compute-api
  api-openstack-compute-server-metadata --> exception
  api-openstack-compute-server-metadata --> i18n
  api-openstack-compute-server-metadata --> policies-server-metadata
  api-openstack-compute-server-migrations --> api-openstack-api-version-request
  api-openstack-compute-server-migrations --> api-openstack-common
  api-openstack-compute-server-migrations --> api-openstack-compute-schemas-server-migrations
  api-openstack-compute-server-migrations --> api-openstack-wsgi
  api-openstack-compute-server-migrations --> api-validation-init
  api-openstack-compute-server-migrations --> compute-api
  api-openstack-compute-server-migrations --> exception
  api-openstack-compute-server-migrations --> i18n
  api-openstack-compute-server-migrations --> policies-servers-migrations
  api-openstack-compute-server-password --> api-metadata-password
  api-openstack-compute-server-password --> api-openstack-common
  api-openstack-compute-server-password --> api-openstack-compute-schemas-server-password
  api-openstack-compute-server-password --> api-openstack-wsgi
  api-openstack-compute-server-password --> api-validation-init
  api-openstack-compute-server-password --> compute-api
  api-openstack-compute-server-password --> policies-server-password
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
  api-openstack-compute-server-shares --> policies-server-shares
  api-openstack-compute-server-shares --> share-manila
  api-openstack-compute-server-shares --> virt-hardware
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
  api-openstack-compute-server-tags --> notifications-base
  api-openstack-compute-server-tags --> objects-init
  api-openstack-compute-server-tags --> policies-server-tags
  api-openstack-compute-server-topology --> api-openstack-common
  api-openstack-compute-server-topology --> api-openstack-compute-schemas-server-topology
  api-openstack-compute-server-topology --> api-openstack-wsgi
  api-openstack-compute-server-topology --> api-validation-init
  api-openstack-compute-server-topology --> compute-api
  api-openstack-compute-server-topology --> policies-server-topology
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
  api-openstack-compute-servers --> policies-servers
  api-openstack-compute-servers --> utils
  api-openstack-compute-services --> api-openstack-api-version-request
  api-openstack-compute-services --> api-openstack-compute-schemas-services
  api-openstack-compute-services --> api-openstack-wsgi
  api-openstack-compute-services --> api-validation-init
  api-openstack-compute-services --> compute-api
  api-openstack-compute-services --> exception
  api-openstack-compute-services --> i18n
  api-openstack-compute-services --> objects-init
  api-openstack-compute-services --> policies-services
  api-openstack-compute-services --> scheduler-client-report
  api-openstack-compute-services --> servicegroup-init
  api-openstack-compute-services --> utils
  api-openstack-compute-shelve --> api-openstack-api-version-request
  api-openstack-compute-shelve --> api-openstack-common
  api-openstack-compute-shelve --> api-openstack-compute-schemas-shelve
  api-openstack-compute-shelve --> api-openstack-wsgi
  api-openstack-compute-shelve --> api-validation-init
  api-openstack-compute-shelve --> compute-api
  api-openstack-compute-shelve --> exception
  api-openstack-compute-shelve --> policies-shelve
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
  api-openstack-compute-simple-tenant-usage --> policies-simple-tenant-usage
  api-openstack-compute-snapshots --> api-openstack-api-version-request
  api-openstack-compute-snapshots --> api-openstack-common
  api-openstack-compute-snapshots --> api-openstack-compute-schemas-snapshots
  api-openstack-compute-snapshots --> api-openstack-wsgi
  api-openstack-compute-snapshots --> api-validation-init
  api-openstack-compute-snapshots --> exception
  api-openstack-compute-snapshots --> policies-volumes
  api-openstack-compute-snapshots --> volume-cinder
  api-openstack-compute-suspend-server --> api-openstack-common
  api-openstack-compute-suspend-server --> api-openstack-compute-schemas-suspend-server
  api-openstack-compute-suspend-server --> api-openstack-wsgi
  api-openstack-compute-suspend-server --> api-validation-init
  api-openstack-compute-suspend-server --> compute-api
  api-openstack-compute-suspend-server --> exception
  api-openstack-compute-suspend-server --> policies-suspend-server
  api-openstack-compute-tenant-networks --> api-openstack-api-version-request
  api-openstack-compute-tenant-networks --> api-openstack-compute-schemas-tenant-networks
  api-openstack-compute-tenant-networks --> api-openstack-wsgi
  api-openstack-compute-tenant-networks --> api-validation-init
  api-openstack-compute-tenant-networks --> conf-init
  api-openstack-compute-tenant-networks --> exception
  api-openstack-compute-tenant-networks --> i18n
  api-openstack-compute-tenant-networks --> network-neutron
  api-openstack-compute-tenant-networks --> policies-tenant-networks
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
  api-openstack-compute-views-servers --> policies-extended-server-attributes
  api-openstack-compute-views-servers --> policies-servers
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
  api-openstack-compute-volume-attachments --> policies-volumes-attachments
  api-openstack-compute-volume-attachments --> volume-cinder
  api-openstack-compute-volumes --> api-openstack-api-version-request
  api-openstack-compute-volumes --> api-openstack-common
  api-openstack-compute-volumes --> api-openstack-compute-schemas-volumes
  api-openstack-compute-volumes --> api-openstack-wsgi
  api-openstack-compute-volumes --> api-validation-init
  api-openstack-compute-volumes --> exception
  api-openstack-compute-volumes --> policies-volumes
  api-openstack-compute-volumes --> volume-cinder
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
  api-openstack-wsgi-app --> pci-request
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
  cmd-manage --> virt-libvirt-machine-type-utils
  cmd-manage --> volume-cinder
  cmd-novncproxy --> cmd-baseproxy
  cmd-novncproxy --> conf-init
  cmd-novncproxy --> conf-vnc
  cmd-novncproxy --> console-securityproxy-rfb
  cmd-policy --> cmd-common
  cmd-policy --> conf-init
  cmd-policy --> db-main-api
  cmd-policy --> exception
  cmd-policy --> i18n
  cmd-policy --> policies-init
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
  cmd-status --> virt-libvirt-machine-type-utils
  cmd-status --> volume-cinder
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
  compute-api --> pci-request
  compute-api --> policies-servers
  compute-api --> policies-shelve
  compute-api --> scheduler-client-query
  compute-api --> scheduler-client-report
  compute-api --> scheduler-utils
  compute-api --> servicegroup-init
  compute-api --> utils
  compute-api --> virt-hardware
  compute-api --> volume-cinder
  compute-claims --> exception
  compute-claims --> i18n
  compute-claims --> objects-init
  compute-claims --> virt-hardware
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
  compute-manager --> pci-request
  compute-manager --> pci-whitelist
  compute-manager --> scheduler-client-query
  compute-manager --> scheduler-client-report
  compute-manager --> scheduler-utils
  compute-manager --> share-manila
  compute-manager --> utils
  compute-manager --> virt-block-device
  compute-manager --> virt-configdrive
  compute-manager --> virt-driver
  compute-manager --> virt-event
  compute-manager --> virt-hardware
  compute-manager --> virt-node
  compute-manager --> virt-storage-users
  compute-manager --> virt-virtapi
  compute-manager --> volume-cinder
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
  compute-pci-placement-translator --> pci-devspec
  compute-pci-placement-translator --> pci-manager
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
  compute-resource-tracker --> pci-manager
  compute-resource-tracker --> pci-request
  compute-resource-tracker --> scheduler-client-report
  compute-resource-tracker --> utils
  compute-resource-tracker --> virt-hardware
  compute-resource-tracker --> virt-node
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
  compute-utils --> notifications-init
  compute-utils --> notifications-objects-aggregate
  compute-utils --> notifications-objects-base
  compute-utils --> notifications-objects-compute-task
  compute-utils --> notifications-objects-exception
  compute-utils --> notifications-objects-flavor
  compute-utils --> notifications-objects-instance
  compute-utils --> notifications-objects-keypair
  compute-utils --> notifications-objects-libvirt
  compute-utils --> notifications-objects-metrics
  compute-utils --> notifications-objects-request-spec
  compute-utils --> notifications-objects-scheduler
  compute-utils --> notifications-objects-server-group
  compute-utils --> notifications-objects-volume
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
  conductor-manager --> notifications-init
  conductor-manager --> objects-base
  conductor-manager --> objects-fields
  conductor-manager --> objects-init
  conductor-manager --> scheduler-client-query
  conductor-manager --> scheduler-client-report
  conductor-manager --> scheduler-utils
  conductor-manager --> servicegroup-init
  conductor-manager --> utils
  conductor-manager --> volume-cinder
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
  conductor-tasks-cross-cell-migrate --> volume-cinder
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
  conf-scheduler --> virt-arch
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
  image-glance --> storage-rbd-utils
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
  network-neutron --> pci-request
  network-neutron --> pci-utils
  network-neutron --> pci-whitelist
  network-neutron --> policies-servers
  network-neutron --> service-auth
  network-neutron --> utils
  network-os-vif-util --> exception
  network-os-vif-util --> i18n
  network-os-vif-util --> network-model
  network-security-group-api --> exception
  network-security-group-api --> i18n
  network-security-group-api --> network-neutron
  network-security-group-api --> objects-security-group
  notifications-base --> conf-init
  notifications-base --> exception
  notifications-base --> image-glance
  notifications-base --> notifications-objects-base
  notifications-base --> notifications-objects-instance
  notifications-base --> objects-fields
  notifications-base --> utils
  notifications-init --> notifications-base
  notifications-objects-aggregate --> notifications-objects-base
  notifications-objects-aggregate --> objects-base
  notifications-objects-aggregate --> objects-fields
  notifications-objects-base --> exception
  notifications-objects-base --> objects-base
  notifications-objects-base --> objects-fields
  notifications-objects-compute-task --> notifications-objects-base
  notifications-objects-compute-task --> notifications-objects-request-spec
  notifications-objects-compute-task --> objects-base
  notifications-objects-compute-task --> objects-fields
  notifications-objects-exception --> notifications-objects-base
  notifications-objects-exception --> objects-base
  notifications-objects-exception --> objects-fields
  notifications-objects-flavor --> notifications-objects-base
  notifications-objects-flavor --> objects-base
  notifications-objects-flavor --> objects-fields
  notifications-objects-image --> notifications-objects-base
  notifications-objects-image --> objects-base
  notifications-objects-image --> objects-fields
  notifications-objects-image --> objects-image-meta
  notifications-objects-instance --> conf-init
  notifications-objects-instance --> notifications-objects-base
  notifications-objects-instance --> notifications-objects-flavor
  notifications-objects-instance --> notifications-objects-keypair
  notifications-objects-instance --> objects-base
  notifications-objects-instance --> objects-fields
  notifications-objects-keypair --> notifications-objects-base
  notifications-objects-keypair --> objects-base
  notifications-objects-keypair --> objects-fields
  notifications-objects-libvirt --> notifications-objects-base
  notifications-objects-libvirt --> objects-base
  notifications-objects-libvirt --> objects-fields
  notifications-objects-metrics --> notifications-objects-base
  notifications-objects-metrics --> objects-base
  notifications-objects-metrics --> objects-fields
  notifications-objects-request-spec --> notifications-objects-base
  notifications-objects-request-spec --> notifications-objects-flavor
  notifications-objects-request-spec --> notifications-objects-image
  notifications-objects-request-spec --> notifications-objects-server-group
  notifications-objects-request-spec --> objects-base
  notifications-objects-request-spec --> objects-fields
  notifications-objects-scheduler --> notifications-objects-base
  notifications-objects-scheduler --> objects-base
  notifications-objects-scheduler --> objects-fields
  notifications-objects-server-group --> notifications-objects-base
  notifications-objects-server-group --> objects-base
  notifications-objects-server-group --> objects-fields
  notifications-objects-service --> notifications-objects-base
  notifications-objects-service --> objects-base
  notifications-objects-service --> objects-fields
  notifications-objects-volume --> notifications-objects-base
  notifications-objects-volume --> objects-base
  notifications-objects-volume --> objects-fields
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
  objects-fields --> virt-arch
  objects-flavor --> conf-init
  objects-flavor --> db-api-api
  objects-flavor --> db-api-models
  objects-flavor --> db-utils
  objects-flavor --> exception
  objects-flavor --> notifications-objects-base
  objects-flavor --> notifications-objects-flavor
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
  objects-image-meta --> virt-hardware
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
  objects-instance --> notifications-init
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
  objects-instance-numa --> virt-hardware
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
  objects-numa --> virt-hardware
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
  objects-service --> notifications-objects-base
  objects-service --> notifications-objects-service
  objects-service --> objects-base
  objects-service --> objects-fields
  objects-service --> objects-init
  objects-share-mapping --> conf-init
  objects-share-mapping --> db-main-api
  objects-share-mapping --> exception
  objects-share-mapping --> objects-base
  objects-share-mapping --> objects-fields
  objects-share-mapping --> share-manila
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
  pci-devspec --> conf-init
  pci-devspec --> exception
  pci-devspec --> i18n
  pci-devspec --> objects-init
  pci-devspec --> pci-request
  pci-devspec --> pci-utils
  pci-manager --> exception
  pci-manager --> objects-fields
  pci-manager --> objects-init
  pci-manager --> pci-stats
  pci-manager --> pci-whitelist
  pci-request --> conf-init
  pci-request --> exception
  pci-request --> i18n
  pci-request --> network-model
  pci-request --> objects-fields
  pci-request --> objects-init
  pci-request --> pci-utils
  pci-stats --> exception
  pci-stats --> objects-fields
  pci-stats --> objects-init
  pci-stats --> objects-pci-device-pool
  pci-stats --> pci-request
  pci-stats --> pci-utils
  pci-stats --> pci-whitelist
  pci-utils --> exception
  pci-utils --> pci-stats
  pci-whitelist --> exception
  pci-whitelist --> i18n
  pci-whitelist --> objects-init
  pci-whitelist --> pci-devspec
  policies-admin-actions --> policies-base
  policies-admin-password --> policies-base
  policies-aggregates --> policies-base
  policies-assisted-volume-snapshots --> policies-base
  policies-attach-interfaces --> policies-base
  policies-availability-zone --> policies-base
  policies-baremetal-nodes --> policies-base
  policies-console-auth-tokens --> policies-base
  policies-console-output --> policies-base
  policies-create-backup --> policies-base
  policies-deferred-delete --> policies-base
  policies-evacuate --> policies-base
  policies-extended-server-attributes --> policies-base
  policies-extensions --> policies-base
  policies-flavor-access --> policies-base
  policies-flavor-extra-specs --> policies-base
  policies-flavor-manage --> policies-base
  policies-floating-ip-pools --> policies-base
  policies-floating-ips --> policies-base
  policies-hosts --> policies-base
  policies-hypervisors --> policies-base
  policies-init --> policies-admin-actions
  policies-init --> policies-admin-password
  policies-init --> policies-aggregates
  policies-init --> policies-assisted-volume-snapshots
  policies-init --> policies-attach-interfaces
  policies-init --> policies-availability-zone
  policies-init --> policies-baremetal-nodes
  policies-init --> policies-base
  policies-init --> policies-console-auth-tokens
  policies-init --> policies-console-output
  policies-init --> policies-create-backup
  policies-init --> policies-deferred-delete
  policies-init --> policies-evacuate
  policies-init --> policies-extended-server-attributes
  policies-init --> policies-extensions
  policies-init --> policies-flavor-access
  policies-init --> policies-flavor-extra-specs
  policies-init --> policies-flavor-manage
  policies-init --> policies-floating-ip-pools
  policies-init --> policies-floating-ips
  policies-init --> policies-hosts
  policies-init --> policies-hypervisors
  policies-init --> policies-instance-actions
  policies-init --> policies-instance-usage-audit-log
  policies-init --> policies-ips
  policies-init --> policies-keypairs
  policies-init --> policies-limits
  policies-init --> policies-lock-server
  policies-init --> policies-migrate-server
  policies-init --> policies-migrations
  policies-init --> policies-multinic
  policies-init --> policies-networks
  policies-init --> policies-pause-server
  policies-init --> policies-quota-class-sets
  policies-init --> policies-quota-sets
  policies-init --> policies-remote-consoles
  policies-init --> policies-rescue
  policies-init --> policies-security-groups
  policies-init --> policies-server-diagnostics
  policies-init --> policies-server-external-events
  policies-init --> policies-server-groups
  policies-init --> policies-server-metadata
  policies-init --> policies-server-password
  policies-init --> policies-server-shares
  policies-init --> policies-server-tags
  policies-init --> policies-server-topology
  policies-init --> policies-servers
  policies-init --> policies-servers-migrations
  policies-init --> policies-services
  policies-init --> policies-shelve
  policies-init --> policies-simple-tenant-usage
  policies-init --> policies-suspend-server
  policies-init --> policies-tenant-networks
  policies-init --> policies-volumes
  policies-init --> policies-volumes-attachments
  policies-instance-actions --> policies-base
  policies-instance-usage-audit-log --> policies-base
  policies-ips --> policies-base
  policies-keypairs --> policies-base
  policies-limits --> policies-base
  policies-lock-server --> policies-base
  policies-migrate-server --> policies-base
  policies-migrations --> policies-base
  policies-multinic --> policies-base
  policies-networks --> policies-base
  policies-pause-server --> policies-base
  policies-quota-class-sets --> policies-base
  policies-quota-sets --> policies-base
  policies-remote-consoles --> policies-base
  policies-rescue --> policies-base
  policies-security-groups --> policies-base
  policies-server-diagnostics --> policies-base
  policies-server-external-events --> policies-base
  policies-server-groups --> policies-base
  policies-server-metadata --> policies-base
  policies-server-password --> policies-base
  policies-server-shares --> policies-base
  policies-server-tags --> policies-base
  policies-server-topology --> policies-base
  policies-servers --> policies-base
  policies-servers-migrations --> policies-base
  policies-services --> policies-base
  policies-shelve --> policies-base
  policies-simple-tenant-usage --> policies-base
  policies-suspend-server --> policies-base
  policies-tenant-networks --> policies-base
  policies-volumes --> policies-base
  policies-volumes-attachments --> policies-base
  privsep-fs --> privsep-init
  privsep-idmapshift --> privsep-init
  privsep-libvirt --> privsep-init
  privsep-path --> exception
  privsep-path --> privsep-init
  privsep-qemu --> conf-init
  privsep-qemu --> exception
  privsep-qemu --> i18n
  privsep-qemu --> privsep-utils
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
  scheduler-filters-compute-filter --> servicegroup-init
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
  scheduler-filters-numa-topology-filter --> virt-hardware
  scheduler-filters-pci-passthrough-filter --> scheduler-filters-init
  scheduler-filters-type-filter --> scheduler-filters-init
  scheduler-filters-type-filter --> scheduler-filters-utils
  scheduler-host-manager --> conf-init
  scheduler-host-manager --> exception
  scheduler-host-manager --> objects-init
  scheduler-host-manager --> pci-stats
  scheduler-host-manager --> scheduler-filters-init
  scheduler-host-manager --> scheduler-weights-init
  scheduler-host-manager --> utils
  scheduler-host-manager --> virt-hardware
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
  scheduler-manager --> servicegroup-init
  scheduler-request-filter --> conf-init
  scheduler-request-filter --> exception
  scheduler-request-filter --> i18n
  scheduler-request-filter --> network-neutron
  scheduler-request-filter --> objects-init
  scheduler-request-filter --> scheduler-client-report
  scheduler-request-filter --> scheduler-utils
  scheduler-request-filter --> virt-hardware
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
  scheduler-utils --> pci-request
  scheduler-utils --> scheduler-client-report
  scheduler-utils --> scheduler-filters-utils
  scheduler-utils --> virt-hardware
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
  servicegroup-api --> conf-init
  servicegroup-drivers-db --> conf-init
  servicegroup-drivers-db --> exception
  servicegroup-drivers-db --> i18n
  servicegroup-drivers-db --> servicegroup-api
  servicegroup-drivers-db --> servicegroup-drivers-base
  servicegroup-drivers-mc --> conf-init
  servicegroup-drivers-mc --> i18n
  servicegroup-drivers-mc --> servicegroup-api
  servicegroup-drivers-mc --> servicegroup-drivers-base
  servicegroup-init --> servicegroup-api
  share-manila --> conf-init
  share-manila --> exception
  share-manila --> utils
  storage-rbd-utils --> conf-init
  storage-rbd-utils --> exception
  storage-rbd-utils --> i18n
  storage-rbd-utils --> utils
  tests-fixtures-cinder --> exception
  tests-fixtures-cinder --> tests-fixtures-nova
  tests-fixtures-conf --> conf-devices
  tests-fixtures-conf --> conf-neutron
  tests-fixtures-conf --> conf-paths
  tests-fixtures-cyborg --> exception
  tests-fixtures-filesystem --> virt-libvirt-cpu-core
  tests-fixtures-glance --> exception
  tests-fixtures-glance --> objects-fields
  tests-fixtures-glance --> tests-fixtures-nova
  tests-fixtures-init --> tests-fixtures-cast-as-call
  tests-fixtures-init --> tests-fixtures-cinder
  tests-fixtures-init --> tests-fixtures-conf
  tests-fixtures-init --> tests-fixtures-cyborg
  tests-fixtures-init --> tests-fixtures-filesystem
  tests-fixtures-init --> tests-fixtures-glance
  tests-fixtures-init --> tests-fixtures-libvirt
  tests-fixtures-init --> tests-fixtures-libvirt-imagebackend
  tests-fixtures-init --> tests-fixtures-manila
  tests-fixtures-init --> tests-fixtures-neutron
  tests-fixtures-init --> tests-fixtures-notifications
  tests-fixtures-init --> tests-fixtures-nova
  tests-fixtures-init --> tests-fixtures-os-brick
  tests-fixtures-init --> tests-fixtures-policy
  tests-fixtures-libvirt --> conf-init
  tests-fixtures-libvirt --> objects-fields
  tests-fixtures-libvirt --> tests-fixtures-libvirt-data
  tests-fixtures-libvirt --> virt-libvirt-config
  tests-fixtures-libvirt --> virt-libvirt-driver
  tests-fixtures-libvirt --> virt-libvirt-host
  tests-fixtures-libvirt-data --> objects-fields
  tests-fixtures-libvirt-data --> virt-libvirt-config
  tests-fixtures-libvirt-imagebackend --> conf-init
  tests-fixtures-libvirt-imagebackend --> virt-libvirt-config
  tests-fixtures-libvirt-imagebackend --> virt-libvirt-driver
  tests-fixtures-libvirt-imagebackend --> virt-libvirt-imagebackend
  tests-fixtures-libvirt-imagebackend --> virt-libvirt-utils
  tests-fixtures-neutron --> exception
  tests-fixtures-neutron --> network-constants
  tests-fixtures-neutron --> network-model
  tests-fixtures-neutron --> tests-fixtures-nova
  tests-fixtures-notifications --> utils
  tests-fixtures-nova --> api-openstack-wsgi-app
  tests-fixtures-nova --> api-wsgi
  tests-fixtures-nova --> compute-multi-cell-list
  tests-fixtures-nova --> compute-rpcapi
  tests-fixtures-nova --> db-api-api
  tests-fixtures-nova --> db-main-api
  tests-fixtures-nova --> db-migration
  tests-fixtures-nova --> exception
  tests-fixtures-nova --> objects-base
  tests-fixtures-nova --> objects-init
  tests-fixtures-nova --> objects-service
  tests-fixtures-nova --> privsep-init
  tests-fixtures-nova --> scheduler-weights-init
  tests-fixtures-nova --> tests-functional-api-client
  tests-fixtures-nova --> utils
  tests-fixtures-nova --> virt-libvirt-host
  tests-fixtures-nova --> virt-node
  tests-fixtures-policy --> conf-init
  tests-fixtures-policy --> conf-paths
  tests-fixtures-policy --> policies-init
  tests-fixtures-policy --> tests-unit-fake-policy
  tests-functional-api-sample-tests-api-sample-base --> conf-init
  tests-functional-api-sample-tests-api-sample-base --> tests-fixtures-init
  tests-functional-api-sample-tests-api-sample-base --> tests-functional-api-samples-test-base
  tests-functional-api-sample-tests-test-admin-actions --> tests-functional-api-sample-tests-test-servers
  tests-functional-api-sample-tests-test-admin-password --> tests-functional-api-sample-tests-test-servers
  tests-functional-api-sample-tests-test-agents --> tests-functional-api-sample-tests-api-sample-base
  tests-functional-api-sample-tests-test-aggregates --> tests-functional-api-sample-tests-api-sample-base
  tests-functional-api-sample-tests-test-assisted-volume-snapshots --> tests-functional-api-sample-tests-test-servers
  tests-functional-api-sample-tests-test-assisted-volume-snapshots --> tests-unit-api-openstack-fakes
  tests-functional-api-sample-tests-test-attach-interfaces --> exception
  tests-functional-api-sample-tests-test-attach-interfaces --> objects-init
  tests-functional-api-sample-tests-test-attach-interfaces --> tests-functional-api-sample-tests-test-servers
  tests-functional-api-sample-tests-test-attach-interfaces --> tests-unit-fake-network-cache-model
  tests-functional-api-sample-tests-test-availability-zone --> tests-functional-api-sample-tests-test-servers
  tests-functional-api-sample-tests-test-baremetal-nodes --> tests-functional-api-sample-tests-api-sample-base
  tests-functional-api-sample-tests-test-block-device-mapping-boot --> tests-functional-api-sample-tests-test-servers
  tests-functional-api-sample-tests-test-block-device-mapping-boot --> tests-unit-api-openstack-fakes
  tests-functional-api-sample-tests-test-cells --> tests-functional-api-sample-tests-api-sample-base
  tests-functional-api-sample-tests-test-compare-result --> tests-functional-api-samples-test-base
  tests-functional-api-sample-tests-test-console-auth-tokens --> tests-functional-api-sample-tests-test-servers
  tests-functional-api-sample-tests-test-console-output --> tests-functional-api-sample-tests-test-servers
  tests-functional-api-sample-tests-test-consoles --> tests-functional-api-sample-tests-test-servers
  tests-functional-api-sample-tests-test-create-backup --> tests-fixtures-init
  tests-functional-api-sample-tests-test-create-backup --> tests-functional-api-sample-tests-test-servers
  tests-functional-api-sample-tests-test-deferred-delete --> tests-functional-api-sample-tests-test-servers
  tests-functional-api-sample-tests-test-evacuate --> objects-init
  tests-functional-api-sample-tests-test-evacuate --> tests-functional-api-sample-tests-test-servers
  tests-functional-api-sample-tests-test-extension-info --> tests-functional-api-sample-tests-api-sample-base
  tests-functional-api-sample-tests-test-fixed-ips --> tests-functional-api-client
  tests-functional-api-sample-tests-test-fixed-ips --> tests-functional-api-samples-test-base
  tests-functional-api-sample-tests-test-flavor-access --> tests-functional-api-sample-tests-api-sample-base
  tests-functional-api-sample-tests-test-flavor-extraspecs --> tests-functional-api-sample-tests-api-sample-base
  tests-functional-api-sample-tests-test-flavor-manage --> tests-functional-api-sample-tests-api-sample-base
  tests-functional-api-sample-tests-test-flavors --> objects-init
  tests-functional-api-sample-tests-test-flavors --> tests-functional-api-sample-tests-api-sample-base
  tests-functional-api-sample-tests-test-floating-ip-dns --> tests-functional-api-client
  tests-functional-api-sample-tests-test-floating-ip-dns --> tests-functional-api-sample-tests-api-sample-base
  tests-functional-api-sample-tests-test-floating-ip-pools --> tests-functional-api-sample-tests-api-sample-base
  tests-functional-api-sample-tests-test-floating-ips --> conf-init
  tests-functional-api-sample-tests-test-floating-ips --> network-constants
  tests-functional-api-sample-tests-test-floating-ips --> tests-fixtures-init
  tests-functional-api-sample-tests-test-floating-ips --> tests-functional-api-sample-tests-api-sample-base
  tests-functional-api-sample-tests-test-floating-ips-bulk --> conf-init
  tests-functional-api-sample-tests-test-floating-ips-bulk --> tests-functional-api-client
  tests-functional-api-sample-tests-test-floating-ips-bulk --> tests-functional-api-sample-tests-api-sample-base
  tests-functional-api-sample-tests-test-fping --> tests-functional-api-client
  tests-functional-api-sample-tests-test-fping --> tests-functional-api-samples-test-base
  tests-functional-api-sample-tests-test-hosts --> tests-functional-api-sample-tests-api-sample-base
  tests-functional-api-sample-tests-test-hypervisors --> tests-functional-api-sample-tests-api-sample-base
  tests-functional-api-sample-tests-test-images --> tests-functional-api-sample-tests-api-sample-base
  tests-functional-api-sample-tests-test-instance-actions --> tests-functional-api-sample-tests-test-servers
  tests-functional-api-sample-tests-test-instance-actions --> tests-functional-api-samples-test-base
  tests-functional-api-sample-tests-test-instance-usage-audit-log --> objects-init
  tests-functional-api-sample-tests-test-instance-usage-audit-log --> tests-functional-api-sample-tests-api-sample-base
  tests-functional-api-sample-tests-test-keypairs --> objects-keypair
  tests-functional-api-sample-tests-test-keypairs --> tests-functional-api-sample-tests-api-sample-base
  tests-functional-api-sample-tests-test-keypairs --> tests-unit-fake-crypto
  tests-functional-api-sample-tests-test-limits --> tests-functional-api-sample-tests-api-sample-base
  tests-functional-api-sample-tests-test-lock-server --> tests-functional-api-sample-tests-test-servers
  tests-functional-api-sample-tests-test-migrate-server --> exception
  tests-functional-api-sample-tests-test-migrate-server --> objects-init
  tests-functional-api-sample-tests-test-migrate-server --> tests-functional-api-sample-tests-test-servers
  tests-functional-api-sample-tests-test-migrations --> objects-init
  tests-functional-api-sample-tests-test-migrations --> tests-functional-api-sample-tests-api-sample-base
  tests-functional-api-sample-tests-test-multinic --> tests-fixtures-init
  tests-functional-api-sample-tests-test-multinic --> tests-functional-api-sample-tests-api-sample-base
  tests-functional-api-sample-tests-test-multiple-create --> tests-functional-api-sample-tests-test-servers
  tests-functional-api-sample-tests-test-networks --> exception
  tests-functional-api-sample-tests-test-networks --> tests-fixtures-init
  tests-functional-api-sample-tests-test-networks --> tests-functional-api-sample-tests-api-sample-base
  tests-functional-api-sample-tests-test-networks-associate --> tests-functional-api-sample-tests-api-sample-base
  tests-functional-api-sample-tests-test-pause-server --> tests-functional-api-sample-tests-test-servers
  tests-functional-api-sample-tests-test-preserve-ephemeral-rebuild --> compute-api
  tests-functional-api-sample-tests-test-preserve-ephemeral-rebuild --> tests-functional-api-sample-tests-test-servers
  tests-functional-api-sample-tests-test-quota-classes --> tests-functional-api-sample-tests-api-sample-base
  tests-functional-api-sample-tests-test-quota-sets --> tests-fixtures-init
  tests-functional-api-sample-tests-test-quota-sets --> tests-functional-api-sample-tests-api-sample-base
  tests-functional-api-sample-tests-test-remote-consoles --> compute-api
  tests-functional-api-sample-tests-test-remote-consoles --> exception
  tests-functional-api-sample-tests-test-remote-consoles --> tests-functional-api-sample-tests-test-servers
  tests-functional-api-sample-tests-test-rescue --> tests-functional-api-sample-tests-test-servers
  tests-functional-api-sample-tests-test-security-group-default-rules --> tests-functional-api-sample-tests-api-sample-base
  tests-functional-api-sample-tests-test-security-groups --> tests-functional-api-sample-tests-test-servers
  tests-functional-api-sample-tests-test-security-groups --> tests-functional-api-samples-test-base
  tests-functional-api-sample-tests-test-server-diagnostics --> tests-functional-api-sample-tests-test-servers
  tests-functional-api-sample-tests-test-server-external-events --> tests-functional-api-sample-tests-test-servers
  tests-functional-api-sample-tests-test-server-groups --> tests-functional-api-sample-tests-api-sample-base
  tests-functional-api-sample-tests-test-server-metadata --> tests-functional-api-sample-tests-test-servers
  tests-functional-api-sample-tests-test-server-migrations --> conductor-manager
  tests-functional-api-sample-tests-test-server-migrations --> db-main-api
  tests-functional-api-sample-tests-test-server-migrations --> objects-init
  tests-functional-api-sample-tests-test-server-migrations --> tests-functional-api-sample-tests-test-servers
  tests-functional-api-sample-tests-test-server-migrations --> tests-unit-fake-instance
  tests-functional-api-sample-tests-test-server-password --> tests-functional-api-sample-tests-test-servers
  tests-functional-api-sample-tests-test-server-shares --> compute-api
  tests-functional-api-sample-tests-test-server-shares --> exception
  tests-functional-api-sample-tests-test-server-shares --> tests-fixtures-init
  tests-functional-api-sample-tests-test-server-shares --> tests-functional-api-client
  tests-functional-api-sample-tests-test-server-shares --> tests-functional-api-sample-tests-test-servers
  tests-functional-api-sample-tests-test-server-tags --> db-main-models
  tests-functional-api-sample-tests-test-server-tags --> tests-functional-api-sample-tests-test-servers
  tests-functional-api-sample-tests-test-server-topology --> objects-instance-numa
  tests-functional-api-sample-tests-test-server-topology --> objects-virt-cpu-topology
  tests-functional-api-sample-tests-test-server-topology --> tests-functional-api-sample-tests-test-servers
  tests-functional-api-sample-tests-test-servers --> api-openstack-api-version-request
  tests-functional-api-sample-tests-test-servers --> conf-init
  tests-functional-api-sample-tests-test-servers --> tests-fixtures-init
  tests-functional-api-sample-tests-test-servers --> tests-functional-api-sample-tests-api-sample-base
  tests-functional-api-sample-tests-test-servers --> tests-unit-api-openstack-fakes
  tests-functional-api-sample-tests-test-servers-ips --> tests-fixtures-init
  tests-functional-api-sample-tests-test-servers-ips --> tests-functional-api-sample-tests-test-servers
  tests-functional-api-sample-tests-test-services --> exception
  tests-functional-api-sample-tests-test-services --> tests-fixtures-init
  tests-functional-api-sample-tests-test-services --> tests-functional-api-sample-tests-api-sample-base
  tests-functional-api-sample-tests-test-services --> tests-unit-api-openstack-compute-test-services
  tests-functional-api-sample-tests-test-services --> tests-unit-objects-test-compute-node
  tests-functional-api-sample-tests-test-services --> tests-unit-objects-test-host-mapping
  tests-functional-api-sample-tests-test-shelve --> conf-init
  tests-functional-api-sample-tests-test-shelve --> objects-init
  tests-functional-api-sample-tests-test-shelve --> tests-functional-api-sample-tests-test-servers
  tests-functional-api-sample-tests-test-simple-tenant-usage --> tests-functional-api-sample-tests-test-servers
  tests-functional-api-sample-tests-test-simple-tenant-usage --> tests-functional-api-samples-test-base
  tests-functional-api-sample-tests-test-snapshots --> tests-functional-api-sample-tests-api-sample-base
  tests-functional-api-sample-tests-test-snapshots --> tests-unit-api-openstack-fakes
  tests-functional-api-sample-tests-test-suspend-server --> tests-functional-api-sample-tests-test-servers
  tests-functional-api-sample-tests-test-tenant-networks --> conf-init
  tests-functional-api-sample-tests-test-tenant-networks --> tests-functional-api-sample-tests-api-sample-base
  tests-functional-api-sample-tests-test-versions --> api-openstack-api-version-request
  tests-functional-api-sample-tests-test-versions --> tests-functional-api-sample-tests-api-sample-base
  tests-functional-api-sample-tests-test-virtual-interfaces --> tests-functional-api-client
  tests-functional-api-sample-tests-test-virtual-interfaces --> tests-functional-api-samples-test-base
  tests-functional-api-sample-tests-test-volume-attachments --> tests-fixtures-init
  tests-functional-api-sample-tests-test-volume-attachments --> tests-functional-api-sample-tests-test-servers
  tests-functional-api-sample-tests-test-volumes --> tests-functional-api-sample-tests-test-servers
  tests-functional-api-sample-tests-test-volumes --> tests-unit-api-openstack-fakes
  tests-functional-api-samples-test-base --> tests-functional-integrated-helpers
  tests-functional-compute-test-attached-volumes --> objects-init
  tests-functional-compute-test-attached-volumes --> tests-functional-integrated-helpers
  tests-functional-compute-test-attached-volumes --> tests-functional-libvirt-base
  tests-functional-compute-test-cache-image --> objects-init
  tests-functional-compute-test-cache-image --> tests-fixtures-init
  tests-functional-compute-test-host-api --> compute-api
  tests-functional-compute-test-host-api --> exception
  tests-functional-compute-test-host-api --> objects-init
  tests-functional-compute-test-host-api --> tests-fixtures-init
  tests-functional-compute-test-init-host --> compute-resource-tracker
  tests-functional-compute-test-init-host --> objects-init
  tests-functional-compute-test-init-host --> tests-functional-integrated-helpers
  tests-functional-compute-test-instance-list --> compute-instance-list
  tests-functional-compute-test-instance-list --> db-main-api
  tests-functional-compute-test-instance-list --> exception
  tests-functional-compute-test-instance-list --> objects-init
  tests-functional-compute-test-live-migration --> exception
  tests-functional-compute-test-live-migration --> objects-init
  tests-functional-compute-test-live-migration --> tests-fixtures-init
  tests-functional-compute-test-live-migration --> tests-functional-integrated-helpers
  tests-functional-compute-test-migration-list --> compute-migration-list
  tests-functional-compute-test-migration-list --> exception
  tests-functional-compute-test-migration-list --> objects-init
  tests-functional-compute-test-resource-tracker --> compute-power-state
  tests-functional-compute-test-resource-tracker --> compute-resource-tracker
  tests-functional-compute-test-resource-tracker --> compute-task-states
  tests-functional-compute-test-resource-tracker --> compute-utils
  tests-functional-compute-test-resource-tracker --> compute-vm-states
  tests-functional-compute-test-resource-tracker --> conf-init
  tests-functional-compute-test-resource-tracker --> objects-init
  tests-functional-compute-test-resource-tracker --> tests-functional-fixtures
  tests-functional-compute-test-resource-tracker --> tests-functional-integrated-helpers
  tests-functional-compute-test-resource-tracker --> virt-driver
  tests-functional-db-test-aggregate --> db-api-api
  tests-functional-db-test-aggregate --> db-api-models
  tests-functional-db-test-aggregate --> exception
  tests-functional-db-test-aggregate --> objects-aggregate
  tests-functional-db-test-aggregate --> tests-unit-matchers
  tests-functional-db-test-aggregate --> tests-unit-objects-test-objects
  tests-functional-db-test-archive --> db-main-api
  tests-functional-db-test-archive --> objects-init
  tests-functional-db-test-archive --> tests-functional-integrated-helpers
  tests-functional-db-test-archive --> utils
  tests-functional-db-test-build-request --> exception
  tests-functional-db-test-build-request --> objects-build-request
  tests-functional-db-test-build-request --> objects-init
  tests-functional-db-test-build-request --> tests-fixtures-init
  tests-functional-db-test-build-request --> tests-unit-fake-build-request
  tests-functional-db-test-build-request --> tests-unit-fake-instance
  tests-functional-db-test-cell-mapping --> exception
  tests-functional-db-test-cell-mapping --> objects-cell-mapping
  tests-functional-db-test-cell-mapping --> objects-init
  tests-functional-db-test-cell-mapping --> tests-fixtures-init
  tests-functional-db-test-compute-api --> compute-api
  tests-functional-db-test-compute-api --> exception
  tests-functional-db-test-compute-api --> objects-init
  tests-functional-db-test-compute-api --> tests-fixtures-init
  tests-functional-db-test-compute-node --> conf-init
  tests-functional-db-test-compute-node --> db-main-api
  tests-functional-db-test-compute-node --> objects-compute-node
  tests-functional-db-test-compute-node --> objects-fields
  tests-functional-db-test-compute-node --> objects-init
  tests-functional-db-test-connection-switch --> exception
  tests-functional-db-test-connection-switch --> objects-init
  tests-functional-db-test-connection-switch --> tests-fixtures-init
  tests-functional-db-test-console-auth-token --> exception
  tests-functional-db-test-console-auth-token --> objects-init
  tests-functional-db-test-flavor --> db-api-api
  tests-functional-db-test-flavor --> db-api-models
  tests-functional-db-test-flavor --> exception
  tests-functional-db-test-flavor --> objects-init
  tests-functional-db-test-flavor --> tests-fixtures-init
  tests-functional-db-test-host-mapping --> exception
  tests-functional-db-test-host-mapping --> objects-cell-mapping
  tests-functional-db-test-host-mapping --> objects-host-mapping
  tests-functional-db-test-host-mapping --> objects-init
  tests-functional-db-test-host-mapping --> tests-fixtures-init
  tests-functional-db-test-instance --> compute-vm-states
  tests-functional-db-test-instance --> db-main-api
  tests-functional-db-test-instance --> objects-init
  tests-functional-db-test-instance --> utils
  tests-functional-db-test-instance-group --> db-api-models
  tests-functional-db-test-instance-group --> exception
  tests-functional-db-test-instance-group --> objects-base
  tests-functional-db-test-instance-group --> objects-init
  tests-functional-db-test-instance-mapping --> compute-vm-states
  tests-functional-db-test-instance-mapping --> exception
  tests-functional-db-test-instance-mapping --> objects-cell-mapping
  tests-functional-db-test-instance-mapping --> objects-instance
  tests-functional-db-test-instance-mapping --> objects-instance-mapping
  tests-functional-db-test-instance-mapping --> objects-virtual-interface
  tests-functional-db-test-instance-mapping --> tests-fixtures-init
  tests-functional-db-test-keypair --> exception
  tests-functional-db-test-keypair --> objects-init
  tests-functional-db-test-keypair --> objects-keypair
  tests-functional-db-test-quota --> objects-init
  tests-functional-db-test-quota --> tests-fixtures-init
  tests-functional-db-test-quota --> tests-functional-db-test-instance-mapping
  tests-functional-db-test-quota-model --> db-api-models
  tests-functional-db-test-quota-model --> db-main-models
  tests-functional-db-test-quotas --> db-main-api
  tests-functional-db-test-quotas --> exception
  tests-functional-db-test-quotas --> objects-quotas
  tests-functional-db-test-quotas --> tests-unit-db-main-test-api
  tests-functional-db-test-request-spec --> exception
  tests-functional-db-test-request-spec --> objects-base
  tests-functional-db-test-request-spec --> objects-request-spec
  tests-functional-db-test-request-spec --> tests-fixtures-init
  tests-functional-db-test-request-spec --> tests-unit-fake-request-spec
  tests-functional-db-test-security-group --> db-main-api
  tests-functional-db-test-security-group --> objects-init
  tests-functional-db-test-virtual-interface --> exception
  tests-functional-db-test-virtual-interface --> network-model
  tests-functional-db-test-virtual-interface --> objects-init
  tests-functional-db-test-virtual-interface --> objects-virtual-interface
  tests-functional-db-test-virtual-interface --> tests-functional-integrated-helpers
  tests-functional-db-test-virtual-interface --> tests-unit-fake-network
  tests-functional-fixtures --> tests-fixtures-nova
  tests-functional-fixtures --> tests-functional-api-client
  tests-functional-fixtures --> utils
  tests-functional-integrated-helpers --> compute-instance-actions
  tests-functional-integrated-helpers --> compute-rpcapi
  tests-functional-integrated-helpers --> compute-utils
  tests-functional-integrated-helpers --> conf-init
  tests-functional-integrated-helpers --> db-main-api
  tests-functional-integrated-helpers --> image-glance
  tests-functional-integrated-helpers --> objects-base
  tests-functional-integrated-helpers --> objects-init
  tests-functional-integrated-helpers --> tests-fixtures-init
  tests-functional-integrated-helpers --> tests-functional-api-client
  tests-functional-integrated-helpers --> tests-functional-fixtures
  tests-functional-integrated-helpers --> utils
  tests-functional-libvirt-base --> conf-init
  tests-functional-libvirt-base --> tests-fixtures-init
  tests-functional-libvirt-base --> tests-fixtures-libvirt
  tests-functional-libvirt-base --> tests-functional-integrated-helpers
  tests-functional-libvirt-integrated-helpers --> conf-init
  tests-functional-libvirt-integrated-helpers --> tests-fixtures-init
  tests-functional-libvirt-integrated-helpers --> tests-functional-integrated-helpers
  tests-functional-libvirt-test-amd-sev --> exception
  tests-functional-libvirt-test-amd-sev --> tests-fixtures-libvirt
  tests-functional-libvirt-test-amd-sev --> tests-functional-libvirt-base
  tests-functional-libvirt-test-amd-sev --> virt-libvirt-driver
  tests-functional-libvirt-test-amd-sev --> virt-libvirt-host
  tests-functional-libvirt-test-device-bus-migration --> cmd-manage
  tests-functional-libvirt-test-device-bus-migration --> objects-init
  tests-functional-libvirt-test-device-bus-migration --> tests-functional-libvirt-base
  tests-functional-libvirt-test-device-bus-migration --> virt-libvirt-config
  tests-functional-libvirt-test-device-bus-migration --> virt-libvirt-driver
  tests-functional-libvirt-test-evacuate --> conf-init
  tests-functional-libvirt-test-evacuate --> exception
  tests-functional-libvirt-test-evacuate --> objects-init
  tests-functional-libvirt-test-evacuate --> tests-fixtures-init
  tests-functional-libvirt-test-evacuate --> tests-fixtures-libvirt
  tests-functional-libvirt-test-evacuate --> tests-functional-fixtures
  tests-functional-libvirt-test-evacuate --> tests-functional-integrated-helpers
  tests-functional-libvirt-test-evacuate --> tests-unit-fake-network
  tests-functional-libvirt-test-evacuate --> virt-libvirt-config
  tests-functional-libvirt-test-intel-tdx --> exception
  tests-functional-libvirt-test-intel-tdx --> tests-fixtures-libvirt
  tests-functional-libvirt-test-intel-tdx --> tests-functional-libvirt-base
  tests-functional-libvirt-test-intel-tdx --> virt-libvirt-driver
  tests-functional-libvirt-test-live-migration --> tests-functional-integrated-helpers
  tests-functional-libvirt-test-live-migration --> tests-functional-libvirt-base
  tests-functional-libvirt-test-machine-type --> exception
  tests-functional-libvirt-test-machine-type --> objects-init
  tests-functional-libvirt-test-machine-type --> tests-functional-libvirt-base
  tests-functional-libvirt-test-machine-type --> virt-libvirt-machine-type-utils
  tests-functional-libvirt-test-migration-addr --> tests-functional-libvirt-base
  tests-functional-libvirt-test-numa-live-migration --> compute-manager
  tests-functional-libvirt-test-numa-live-migration --> compute-resource-tracker
  tests-functional-libvirt-test-numa-live-migration --> objects-init
  tests-functional-libvirt-test-numa-live-migration --> tests-fixtures-libvirt
  tests-functional-libvirt-test-numa-live-migration --> tests-functional-integrated-helpers
  tests-functional-libvirt-test-numa-live-migration --> tests-functional-libvirt-base
  tests-functional-libvirt-test-numa-servers --> compute-manager
  tests-functional-libvirt-test-numa-servers --> conf-neutron
  tests-functional-libvirt-test-numa-servers --> objects-init
  tests-functional-libvirt-test-numa-servers --> tests-fixtures-init
  tests-functional-libvirt-test-numa-servers --> tests-fixtures-libvirt
  tests-functional-libvirt-test-numa-servers --> tests-functional-api-client
  tests-functional-libvirt-test-numa-servers --> tests-functional-libvirt-base
  tests-functional-libvirt-test-pci-in-placement --> exception
  tests-functional-libvirt-test-pci-in-placement --> tests-fixtures-libvirt
  tests-functional-libvirt-test-pci-in-placement --> tests-functional-libvirt-test-pci-sriov-servers
  tests-functional-libvirt-test-pci-sriov-servers --> compute-pci-placement-translator
  tests-functional-libvirt-test-pci-sriov-servers --> exception
  tests-functional-libvirt-test-pci-sriov-servers --> network-constants
  tests-functional-libvirt-test-pci-sriov-servers --> objects-fields
  tests-functional-libvirt-test-pci-sriov-servers --> objects-init
  tests-functional-libvirt-test-pci-sriov-servers --> objects-instance
  tests-functional-libvirt-test-pci-sriov-servers --> pci-utils
  tests-functional-libvirt-test-pci-sriov-servers --> tests-fixtures-init
  tests-functional-libvirt-test-pci-sriov-servers --> tests-fixtures-libvirt
  tests-functional-libvirt-test-pci-sriov-servers --> tests-functional-api-client
  tests-functional-libvirt-test-pci-sriov-servers --> tests-functional-libvirt-base
  tests-functional-libvirt-test-pci-sriov-servers --> virt-hardware
  tests-functional-libvirt-test-pci-sriov-servers --> virt-libvirt-driver
  tests-functional-libvirt-test-power-manage --> exception
  tests-functional-libvirt-test-power-manage --> objects-init
  tests-functional-libvirt-test-power-manage --> tests-fixtures-init
  tests-functional-libvirt-test-power-manage --> tests-fixtures-libvirt
  tests-functional-libvirt-test-power-manage --> tests-functional-libvirt-base
  tests-functional-libvirt-test-power-manage --> virt-hardware
  tests-functional-libvirt-test-power-manage --> virt-libvirt-cpu-api
  tests-functional-libvirt-test-report-cpu-traits --> conf-init
  tests-functional-libvirt-test-report-cpu-traits --> tests-fixtures-libvirt
  tests-functional-libvirt-test-report-cpu-traits --> tests-functional-libvirt-integrated-helpers
  tests-functional-libvirt-test-report-cpu-traits --> virt-libvirt-host
  tests-functional-libvirt-test-rescue-deleted-base --> conf-init
  tests-functional-libvirt-test-rescue-deleted-base --> tests-fixtures-init
  tests-functional-libvirt-test-rescue-deleted-base --> tests-functional-libvirt-base
  tests-functional-libvirt-test-reshape --> objects-init
  tests-functional-libvirt-test-reshape --> tests-fixtures-libvirt
  tests-functional-libvirt-test-reshape --> tests-functional-libvirt-base
  tests-functional-libvirt-test-reshape --> virt-libvirt-utils
  tests-functional-libvirt-test-rt-servers --> tests-functional-api-client
  tests-functional-libvirt-test-rt-servers --> tests-functional-libvirt-base
  tests-functional-libvirt-test-server-shares --> exception
  tests-functional-libvirt-test-server-shares --> objects-instance
  tests-functional-libvirt-test-server-shares --> objects-share-mapping
  tests-functional-libvirt-test-server-shares --> tests-fixtures-init
  tests-functional-libvirt-test-server-shares --> tests-functional-api-client
  tests-functional-libvirt-test-server-shares --> tests-functional-libvirt-base
  tests-functional-libvirt-test-shared-resource-provider --> compute-instance-actions
  tests-functional-libvirt-test-shared-resource-provider --> conf-init
  tests-functional-libvirt-test-shared-resource-provider --> tests-functional-libvirt-integrated-helpers
  tests-functional-libvirt-test-shared-resource-provider --> utils
  tests-functional-libvirt-test-stateless-firmware --> conf-init
  tests-functional-libvirt-test-stateless-firmware --> objects-init
  tests-functional-libvirt-test-stateless-firmware --> tests-functional-libvirt-base
  tests-functional-libvirt-test-stateless-firmware --> virt-libvirt-driver
  tests-functional-libvirt-test-stateless-firmware --> virt-libvirt-migration
  tests-functional-libvirt-test-uefi --> conf-init
  tests-functional-libvirt-test-uefi --> objects-init
  tests-functional-libvirt-test-uefi --> tests-functional-libvirt-base
  tests-functional-libvirt-test-uefi --> virt-hardware
  tests-functional-libvirt-test-vgpu --> compute-instance-actions
  tests-functional-libvirt-test-vgpu --> conf-init
  tests-functional-libvirt-test-vgpu --> objects-init
  tests-functional-libvirt-test-vgpu --> tests-fixtures-libvirt
  tests-functional-libvirt-test-vgpu --> tests-functional-api-client
  tests-functional-libvirt-test-vgpu --> tests-functional-libvirt-base
  tests-functional-libvirt-test-vgpu --> virt-libvirt-driver
  tests-functional-libvirt-test-vgpu --> virt-libvirt-utils
  tests-functional-libvirt-test-vif-model --> tests-functional-libvirt-base
  tests-functional-libvirt-test-vpmem --> objects-init
  tests-functional-libvirt-test-vpmem --> tests-fixtures-init
  tests-functional-libvirt-test-vpmem --> tests-fixtures-libvirt
  tests-functional-libvirt-test-vpmem --> tests-functional-libvirt-integrated-helpers
  tests-functional-libvirt-test-vtpm --> conf-init
  tests-functional-libvirt-test-vtpm --> db-main-api
  tests-functional-libvirt-test-vtpm --> exception
  tests-functional-libvirt-test-vtpm --> objects-init
  tests-functional-libvirt-test-vtpm --> tests-fixtures-libvirt
  tests-functional-libvirt-test-vtpm --> tests-functional-api-client
  tests-functional-libvirt-test-vtpm --> tests-functional-libvirt-base
  tests-functional-libvirt-test-vtpm --> utils
  tests-functional-notification-sample-tests-notification-sample-base --> tests-fixtures-init
  tests-functional-notification-sample-tests-notification-sample-base --> tests-functional-fixtures
  tests-functional-notification-sample-tests-notification-sample-base --> tests-functional-integrated-helpers
  tests-functional-notification-sample-tests-notification-sample-base --> tests-json-ref
  tests-functional-notification-sample-tests-notification-sample-base --> tests-unit-api-openstack-compute-test-services
  tests-functional-notification-sample-tests-notification-sample-base --> tests-unit-fake-crypto
  tests-functional-notification-sample-tests-test-aggregate --> tests-functional-notification-sample-tests-notification-sample-base
  tests-functional-notification-sample-tests-test-compute-task --> objects-init
  tests-functional-notification-sample-tests-test-compute-task --> tests-fixtures-init
  tests-functional-notification-sample-tests-test-compute-task --> tests-functional-notification-sample-tests-notification-sample-base
  tests-functional-notification-sample-tests-test-exception-notification --> tests-functional-api-client
  tests-functional-notification-sample-tests-test-exception-notification --> tests-functional-notification-sample-tests-notification-sample-base
  tests-functional-notification-sample-tests-test-flavor --> tests-functional-notification-sample-tests-notification-sample-base
  tests-functional-notification-sample-tests-test-instance --> exception
  tests-functional-notification-sample-tests-test-instance --> tests-fixtures-init
  tests-functional-notification-sample-tests-test-instance --> tests-functional-api-client
  tests-functional-notification-sample-tests-test-instance --> tests-functional-notification-sample-tests-notification-sample-base
  tests-functional-notification-sample-tests-test-instance --> volume-cinder
  tests-functional-notification-sample-tests-test-keypair --> tests-functional-notification-sample-tests-notification-sample-base
  tests-functional-notification-sample-tests-test-libvirt --> conf-init
  tests-functional-notification-sample-tests-test-libvirt --> exception
  tests-functional-notification-sample-tests-test-libvirt --> tests-fixtures-init
  tests-functional-notification-sample-tests-test-libvirt --> tests-fixtures-libvirt
  tests-functional-notification-sample-tests-test-libvirt --> tests-functional-notification-sample-tests-notification-sample-base
  tests-functional-notification-sample-tests-test-libvirt --> virt-libvirt-host
  tests-functional-notification-sample-tests-test-metrics --> conf-init
  tests-functional-notification-sample-tests-test-metrics --> tests-functional-notification-sample-tests-notification-sample-base
  tests-functional-notification-sample-tests-test-server-group --> tests-fixtures-init
  tests-functional-notification-sample-tests-test-server-group --> tests-functional-notification-sample-tests-notification-sample-base
  tests-functional-notification-sample-tests-test-service --> exception
  tests-functional-notification-sample-tests-test-service --> objects-service
  tests-functional-notification-sample-tests-test-service --> tests-fixtures-init
  tests-functional-notification-sample-tests-test-service --> tests-functional-notification-sample-tests-notification-sample-base
  tests-functional-notification-sample-tests-test-service --> tests-unit-api-openstack-compute-test-services
  tests-functional-notification-sample-tests-test-volume --> tests-fixtures-init
  tests-functional-notification-sample-tests-test-volume --> tests-functional-notification-sample-tests-notification-sample-base
  tests-functional-regressions-test-bug-1404867 --> tests-fixtures-init
  tests-functional-regressions-test-bug-1404867 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-1522536 --> tests-fixtures-init
  tests-functional-regressions-test-bug-1522536 --> tests-functional-api-client
  tests-functional-regressions-test-bug-1541691 --> tests-fixtures-init
  tests-functional-regressions-test-bug-1541691 --> tests-functional-api-client
  tests-functional-regressions-test-bug-1548980 --> tests-fixtures-init
  tests-functional-regressions-test-bug-1548980 --> tests-functional-api-client
  tests-functional-regressions-test-bug-1552888 --> tests-fixtures-init
  tests-functional-regressions-test-bug-1554631 --> tests-fixtures-init
  tests-functional-regressions-test-bug-1554631 --> tests-functional-api-client
  tests-functional-regressions-test-bug-1558866 --> tests-fixtures-init
  tests-functional-regressions-test-bug-1558866 --> tests-functional-api-client
  tests-functional-regressions-test-bug-1595962 --> tests-fixtures-init
  tests-functional-regressions-test-bug-1595962 --> tests-fixtures-libvirt
  tests-functional-regressions-test-bug-1595962 --> tests-functional-fixtures
  tests-functional-regressions-test-bug-1595962 --> virt-libvirt-guest
  tests-functional-regressions-test-bug-1620248 --> tests-fixtures-init
  tests-functional-regressions-test-bug-1628606 --> tests-fixtures-init
  tests-functional-regressions-test-bug-1628606 --> tests-functional-api-client
  tests-functional-regressions-test-bug-1628606 --> tests-functional-fixtures
  tests-functional-regressions-test-bug-1628606 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-1669054 --> objects-init
  tests-functional-regressions-test-bug-1669054 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-1670627 --> tests-fixtures-init
  tests-functional-regressions-test-bug-1670627 --> tests-functional-api-client
  tests-functional-regressions-test-bug-1671648 --> compute-resource-tracker
  tests-functional-regressions-test-bug-1671648 --> exception
  tests-functional-regressions-test-bug-1671648 --> tests-fixtures-init
  tests-functional-regressions-test-bug-1671648 --> tests-functional-fixtures
  tests-functional-regressions-test-bug-1671648 --> tests-unit-fake-network
  tests-functional-regressions-test-bug-1675570 --> tests-functional-api-client
  tests-functional-regressions-test-bug-1675570 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-1678326 --> exception
  tests-functional-regressions-test-bug-1678326 --> objects-init
  tests-functional-regressions-test-bug-1678326 --> tests-functional-regressions-test-bug-1670627
  tests-functional-regressions-test-bug-1679750 --> tests-fixtures-init
  tests-functional-regressions-test-bug-1679750 --> tests-functional-fixtures
  tests-functional-regressions-test-bug-1679750 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-1682693 --> tests-fixtures-init
  tests-functional-regressions-test-bug-1682693 --> tests-functional-fixtures
  tests-functional-regressions-test-bug-1682693 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-1689692 --> tests-fixtures-init
  tests-functional-regressions-test-bug-1689692 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-1702454 --> tests-fixtures-init
  tests-functional-regressions-test-bug-1702454 --> tests-functional-fixtures
  tests-functional-regressions-test-bug-1702454 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-1713783 --> objects-init
  tests-functional-regressions-test-bug-1713783 --> tests-fixtures-init
  tests-functional-regressions-test-bug-1713783 --> tests-functional-fixtures
  tests-functional-regressions-test-bug-1713783 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-1713783 --> tests-unit-fake-network
  tests-functional-regressions-test-bug-1718455 --> tests-fixtures-init
  tests-functional-regressions-test-bug-1718455 --> tests-functional-fixtures
  tests-functional-regressions-test-bug-1718455 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-1718455 --> tests-unit-fake-network
  tests-functional-regressions-test-bug-1718512 --> compute-manager
  tests-functional-regressions-test-bug-1718512 --> objects-init
  tests-functional-regressions-test-bug-1718512 --> tests-fixtures-init
  tests-functional-regressions-test-bug-1718512 --> tests-functional-fixtures
  tests-functional-regressions-test-bug-1718512 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-1719730 --> exception
  tests-functional-regressions-test-bug-1719730 --> tests-fixtures-init
  tests-functional-regressions-test-bug-1719730 --> tests-functional-fixtures
  tests-functional-regressions-test-bug-1719730 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-1719730 --> tests-unit-fake-network
  tests-functional-regressions-test-bug-1732947 --> conf-init
  tests-functional-regressions-test-bug-1732947 --> tests-fixtures-init
  tests-functional-regressions-test-bug-1732947 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-1735407 --> compute-manager
  tests-functional-regressions-test-bug-1735407 --> tests-fixtures-init
  tests-functional-regressions-test-bug-1735407 --> tests-functional-fixtures
  tests-functional-regressions-test-bug-1735407 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-1735407 --> tests-unit-fake-network
  tests-functional-regressions-test-bug-1741125 --> compute-manager
  tests-functional-regressions-test-bug-1741125 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-1741364 --> tests-fixtures-init
  tests-functional-regressions-test-bug-1741364 --> tests-fixtures-libvirt
  tests-functional-regressions-test-bug-1741364 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-1741364 --> tests-functional-libvirt-base
  tests-functional-regressions-test-bug-1746483 --> tests-fixtures-init
  tests-functional-regressions-test-bug-1746483 --> tests-functional-fixtures
  tests-functional-regressions-test-bug-1746483 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-1746483 --> utils
  tests-functional-regressions-test-bug-1764556 --> db-main-api
  tests-functional-regressions-test-bug-1764556 --> tests-fixtures-init
  tests-functional-regressions-test-bug-1764556 --> tests-functional-fixtures
  tests-functional-regressions-test-bug-1764556 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-1764556 --> utils
  tests-functional-regressions-test-bug-1764883 --> compute-manager
  tests-functional-regressions-test-bug-1764883 --> tests-fixtures-init
  tests-functional-regressions-test-bug-1764883 --> tests-functional-fixtures
  tests-functional-regressions-test-bug-1764883 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-1764883 --> tests-unit-fake-network
  tests-functional-regressions-test-bug-1778305 --> db-main-api
  tests-functional-regressions-test-bug-1778305 --> objects-init
  tests-functional-regressions-test-bug-1780373 --> tests-fixtures-init
  tests-functional-regressions-test-bug-1780373 --> tests-functional-fixtures
  tests-functional-regressions-test-bug-1780373 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-1781286 --> compute-manager
  tests-functional-regressions-test-bug-1781286 --> exception
  tests-functional-regressions-test-bug-1781286 --> tests-fixtures-init
  tests-functional-regressions-test-bug-1781286 --> tests-functional-fixtures
  tests-functional-regressions-test-bug-1781286 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-1781710 --> scheduler-manager
  tests-functional-regressions-test-bug-1781710 --> tests-fixtures-init
  tests-functional-regressions-test-bug-1781710 --> tests-functional-fixtures
  tests-functional-regressions-test-bug-1781710 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-1784353 --> tests-fixtures-init
  tests-functional-regressions-test-bug-1784353 --> tests-functional-fixtures
  tests-functional-regressions-test-bug-1784353 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-1784353 --> tests-unit-fake-network
  tests-functional-regressions-test-bug-1790204 --> compute-instance-actions
  tests-functional-regressions-test-bug-1790204 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-1794996 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-1797580 --> tests-fixtures-init
  tests-functional-regressions-test-bug-1797580 --> tests-functional-fixtures
  tests-functional-regressions-test-bug-1797580 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-1806064 --> compute-utils
  tests-functional-regressions-test-bug-1806064 --> exception
  tests-functional-regressions-test-bug-1806064 --> objects-init
  tests-functional-regressions-test-bug-1806064 --> tests-fixtures-init
  tests-functional-regressions-test-bug-1806064 --> tests-functional-fixtures
  tests-functional-regressions-test-bug-1806064 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-1806515 --> tests-fixtures-init
  tests-functional-regressions-test-bug-1806515 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-1815153 --> compute-instance-actions
  tests-functional-regressions-test-bug-1815153 --> objects-init
  tests-functional-regressions-test-bug-1815153 --> tests-fixtures-init
  tests-functional-regressions-test-bug-1815153 --> tests-functional-fixtures
  tests-functional-regressions-test-bug-1815153 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-1823370 --> tests-fixtures-init
  tests-functional-regressions-test-bug-1823370 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-1825020 --> tests-fixtures-init
  tests-functional-regressions-test-bug-1825020 --> tests-functional-fixtures
  tests-functional-regressions-test-bug-1825020 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-1825034 --> db-main-api
  tests-functional-regressions-test-bug-1825034 --> objects-virtual-interface
  tests-functional-regressions-test-bug-1825034 --> tests-fixtures-init
  tests-functional-regressions-test-bug-1825034 --> tests-functional-fixtures
  tests-functional-regressions-test-bug-1825034 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-1825537 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-1830747 --> conductor-api
  tests-functional-regressions-test-bug-1830747 --> objects-init
  tests-functional-regressions-test-bug-1830747 --> tests-fixtures-init
  tests-functional-regressions-test-bug-1830747 --> tests-functional-fixtures
  tests-functional-regressions-test-bug-1830747 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-1831771 --> compute-task-states
  tests-functional-regressions-test-bug-1831771 --> compute-vm-states
  tests-functional-regressions-test-bug-1831771 --> objects-init
  tests-functional-regressions-test-bug-1831771 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-1835822 --> tests-fixtures-init
  tests-functional-regressions-test-bug-1835822 --> tests-functional-fixtures
  tests-functional-regressions-test-bug-1835822 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-1837955 --> exception
  tests-functional-regressions-test-bug-1837955 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-1839560 --> db-main-api
  tests-functional-regressions-test-bug-1839560 --> objects-init
  tests-functional-regressions-test-bug-1839560 --> tests-fixtures-init
  tests-functional-regressions-test-bug-1839560 --> tests-functional-fixtures
  tests-functional-regressions-test-bug-1839560 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-1839560 --> utils
  tests-functional-regressions-test-bug-1839560 --> virt-fake
  tests-functional-regressions-test-bug-1843090 --> compute-init
  tests-functional-regressions-test-bug-1843090 --> exception
  tests-functional-regressions-test-bug-1843090 --> tests-fixtures-init
  tests-functional-regressions-test-bug-1843090 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-1843708 --> objects-init
  tests-functional-regressions-test-bug-1843708 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-1843708 --> tests-unit-fake-crypto
  tests-functional-regressions-test-bug-1845291 --> exception
  tests-functional-regressions-test-bug-1845291 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-1848343 --> compute-instance-actions
  tests-functional-regressions-test-bug-1848343 --> compute-manager
  tests-functional-regressions-test-bug-1848343 --> scheduler-client-query
  tests-functional-regressions-test-bug-1848343 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-1849165 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-1849409 --> tests-fixtures-init
  tests-functional-regressions-test-bug-1849409 --> tests-functional-fixtures
  tests-functional-regressions-test-bug-1849409 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-1852458 --> compute-instance-actions
  tests-functional-regressions-test-bug-1852458 --> tests-fixtures-init
  tests-functional-regressions-test-bug-1852458 --> tests-functional-fixtures
  tests-functional-regressions-test-bug-1852458 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-1852458 --> utils
  tests-functional-regressions-test-bug-1853009 --> objects-init
  tests-functional-regressions-test-bug-1853009 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-1853009 --> virt-fake
  tests-functional-regressions-test-bug-1862633 --> tests-fixtures-init
  tests-functional-regressions-test-bug-1862633 --> tests-functional-fixtures
  tests-functional-regressions-test-bug-1862633 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-1879878 --> compute-resource-tracker
  tests-functional-regressions-test-bug-1879878 --> objects-init
  tests-functional-regressions-test-bug-1879878 --> policies-base
  tests-functional-regressions-test-bug-1879878 --> policies-servers
  tests-functional-regressions-test-bug-1879878 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-1879878 --> virt-fake
  tests-functional-regressions-test-bug-1886418 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-1888395 --> network-constants
  tests-functional-regressions-test-bug-1888395 --> network-neutron
  tests-functional-regressions-test-bug-1888395 --> tests-fixtures-init
  tests-functional-regressions-test-bug-1888395 --> tests-fixtures-libvirt
  tests-functional-regressions-test-bug-1888395 --> tests-functional-libvirt-base
  tests-functional-regressions-test-bug-1889108 --> tests-fixtures-init
  tests-functional-regressions-test-bug-1889108 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-1890244 --> objects-init
  tests-functional-regressions-test-bug-1890244 --> tests-fixtures-init
  tests-functional-regressions-test-bug-1890244 --> tests-functional-fixtures
  tests-functional-regressions-test-bug-1890244 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-1893284 --> tests-fixtures-init
  tests-functional-regressions-test-bug-1893284 --> tests-functional-api-client
  tests-functional-regressions-test-bug-1893284 --> tests-functional-fixtures
  tests-functional-regressions-test-bug-1893284 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-1894966 --> tests-fixtures-init
  tests-functional-regressions-test-bug-1894966 --> tests-functional-api-client
  tests-functional-regressions-test-bug-1894966 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-1895696 --> tests-functional-api-client
  tests-functional-regressions-test-bug-1895696 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-1896463 --> objects-init
  tests-functional-regressions-test-bug-1896463 --> tests-fixtures-init
  tests-functional-regressions-test-bug-1896463 --> tests-functional-fixtures
  tests-functional-regressions-test-bug-1896463 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-1896463 --> utils
  tests-functional-regressions-test-bug-1896463 --> virt-fake
  tests-functional-regressions-test-bug-1899649 --> tests-fixtures-init
  tests-functional-regressions-test-bug-1899649 --> tests-fixtures-libvirt
  tests-functional-regressions-test-bug-1899649 --> tests-functional-libvirt-base
  tests-functional-regressions-test-bug-1899835 --> objects-init
  tests-functional-regressions-test-bug-1899835 --> tests-fixtures-init
  tests-functional-regressions-test-bug-1899835 --> tests-functional-libvirt-base
  tests-functional-regressions-test-bug-1902925 --> tests-fixtures-init
  tests-functional-regressions-test-bug-1902925 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-1908075 --> tests-functional-api-client
  tests-functional-regressions-test-bug-1908075 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-1909120 --> tests-functional-api-client
  tests-functional-regressions-test-bug-1909120 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-1914777 --> exception
  tests-functional-regressions-test-bug-1914777 --> objects-init
  tests-functional-regressions-test-bug-1914777 --> tests-fixtures-init
  tests-functional-regressions-test-bug-1914777 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-1922053 --> tests-functional-api-client
  tests-functional-regressions-test-bug-1922053 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-1928063 --> tests-fixtures-libvirt
  tests-functional-regressions-test-bug-1928063 --> tests-functional-libvirt-base
  tests-functional-regressions-test-bug-1937084 --> exception
  tests-functional-regressions-test-bug-1937084 --> objects-init
  tests-functional-regressions-test-bug-1937084 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-1937375 --> exception
  tests-functional-regressions-test-bug-1937375 --> objects-init
  tests-functional-regressions-test-bug-1937375 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-1938326 --> tests-functional-api-client
  tests-functional-regressions-test-bug-1938326 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-1939545 --> objects-init
  tests-functional-regressions-test-bug-1939545 --> tests-fixtures-libvirt
  tests-functional-regressions-test-bug-1939545 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-1939545 --> tests-functional-libvirt-base
  tests-functional-regressions-test-bug-1943431 --> objects-init
  tests-functional-regressions-test-bug-1943431 --> tests-functional-api-client
  tests-functional-regressions-test-bug-1943431 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-1943431 --> tests-functional-libvirt-base
  tests-functional-regressions-test-bug-1943431 --> virt-block-device
  tests-functional-regressions-test-bug-1944619 --> exception
  tests-functional-regressions-test-bug-1944619 --> tests-fixtures-libvirt
  tests-functional-regressions-test-bug-1944619 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-1944619 --> tests-functional-libvirt-base
  tests-functional-regressions-test-bug-1978983 --> tests-fixtures-init
  tests-functional-regressions-test-bug-1978983 --> tests-functional-fixtures
  tests-functional-regressions-test-bug-1978983 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-1980720 --> tests-fixtures-init
  tests-functional-regressions-test-bug-1980720 --> tests-functional-api-client
  tests-functional-regressions-test-bug-1980720 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-1980720 --> tests-functional-libvirt-base
  tests-functional-regressions-test-bug-1983753 --> tests-fixtures-libvirt
  tests-functional-regressions-test-bug-1983753 --> tests-functional-libvirt-test-pci-sriov-servers
  tests-functional-regressions-test-bug-1995153 --> objects-fields
  tests-functional-regressions-test-bug-1995153 --> tests-fixtures-libvirt
  tests-functional-regressions-test-bug-1995153 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-1995153 --> tests-functional-libvirt-base
  tests-functional-regressions-test-bug-2007968 --> tests-fixtures-libvirt
  tests-functional-regressions-test-bug-2007968 --> tests-functional-api-client
  tests-functional-regressions-test-bug-2007968 --> tests-functional-libvirt-base
  tests-functional-regressions-test-bug-2016173 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-2016173 --> volume-cinder
  tests-functional-regressions-test-bug-2025480 --> objects-compute-node
  tests-functional-regressions-test-bug-2025480 --> tests-fixtures-init
  tests-functional-regressions-test-bug-2025480 --> tests-functional-fixtures
  tests-functional-regressions-test-bug-2025480 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-2040264 --> tests-fixtures-init
  tests-functional-regressions-test-bug-2040264 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-2044235 --> tests-functional-api-client
  tests-functional-regressions-test-bug-2044235 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-2048837 --> tests-functional-libvirt-base
  tests-functional-regressions-test-bug-2048837 --> virt-libvirt-init
  tests-functional-regressions-test-bug-2062127 --> tests-fixtures-init
  tests-functional-regressions-test-bug-2062127 --> tests-functional-fixtures
  tests-functional-regressions-test-bug-2062127 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-2062425 --> tests-functional-libvirt-base
  tests-functional-regressions-test-bug-2074219 --> tests-fixtures-libvirt
  tests-functional-regressions-test-bug-2074219 --> tests-functional-libvirt-test-vgpu
  tests-functional-regressions-test-bug-2077980 --> tests-functional-api-client
  tests-functional-regressions-test-bug-2077980 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-2079850 --> conf-init
  tests-functional-regressions-test-bug-2079850 --> objects-init
  tests-functional-regressions-test-bug-2079850 --> virt-libvirt-driver
  tests-functional-regressions-test-bug-2079850 --> virt-libvirt-imagebackend
  tests-functional-regressions-test-bug-2079850 --> virt-libvirt-utils
  tests-functional-regressions-test-bug-2080531 --> objects-init
  tests-functional-regressions-test-bug-2080531 --> tests-fixtures-init
  tests-functional-regressions-test-bug-2080531 --> tests-functional-fixtures
  tests-functional-regressions-test-bug-2080531 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-2085135 --> db-main-api
  tests-functional-regressions-test-bug-2085135 --> exception
  tests-functional-regressions-test-bug-2085135 --> objects-host-mapping
  tests-functional-regressions-test-bug-2085135 --> objects-init
  tests-functional-regressions-test-bug-2085135 --> tests-fixtures-init
  tests-functional-regressions-test-bug-2085135 --> utils
  tests-functional-regressions-test-bug-2085975 --> tests-functional-libvirt-base
  tests-functional-regressions-test-bug-2088066 --> tests-fixtures-init
  tests-functional-regressions-test-bug-2088066 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-2088066 --> tests-functional-libvirt-base
  tests-functional-regressions-test-bug-2098496 --> objects-init
  tests-functional-regressions-test-bug-2098496 --> tests-fixtures-libvirt
  tests-functional-regressions-test-bug-2098496 --> tests-functional-libvirt-test-pci-in-placement
  tests-functional-regressions-test-bug-2098892 --> tests-fixtures-libvirt
  tests-functional-regressions-test-bug-2098892 --> tests-functional-libvirt-test-vgpu
  tests-functional-regressions-test-bug-2102038 --> tests-fixtures-libvirt
  tests-functional-regressions-test-bug-2102038 --> tests-functional-api-client
  tests-functional-regressions-test-bug-2102038 --> tests-functional-libvirt-test-pci-in-placement
  tests-functional-regressions-test-bug-2108974 --> objects-init
  tests-functional-regressions-test-bug-2108974 --> policies-base
  tests-functional-regressions-test-bug-2108974 --> policies-servers
  tests-functional-regressions-test-bug-2108974 --> tests-fixtures-init
  tests-functional-regressions-test-bug-2108974 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-2108974 --> tests-unit-fake-crypto
  tests-functional-regressions-test-bug-2111440 --> tests-functional-api-client
  tests-functional-regressions-test-bug-2111440 --> tests-functional-libvirt-test-pci-in-placement
  tests-functional-regressions-test-bug-2112187 --> tests-functional-api-client
  tests-functional-regressions-test-bug-2112187 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-2112187 --> tests-functional-libvirt-base
  tests-functional-regressions-test-bug-2125052 --> scheduler-weights-init
  tests-functional-regressions-test-bug-2125052 --> tests-fixtures-init
  tests-functional-regressions-test-bug-2125052 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-2125935 --> scheduler-weights-init
  tests-functional-regressions-test-bug-2125935 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-2127196 --> tests-fixtures-cinder
  tests-functional-regressions-test-bug-2127196 --> tests-fixtures-libvirt
  tests-functional-regressions-test-bug-2127196 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-2127196 --> tests-functional-libvirt-base
  tests-functional-regressions-test-bug-2134375 --> conf-init
  tests-functional-regressions-test-bug-2134375 --> exception
  tests-functional-regressions-test-bug-2134375 --> tests-fixtures-init
  tests-functional-regressions-test-bug-2134375 --> tests-functional-fixtures
  tests-functional-regressions-test-bug-2134375 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-2139351 --> tests-fixtures-libvirt
  tests-functional-regressions-test-bug-2139351 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-2139351 --> tests-functional-libvirt-base
  tests-functional-regressions-test-bug-2140537 --> tests-fixtures-libvirt
  tests-functional-regressions-test-bug-2140537 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-2140537 --> tests-functional-libvirt-base
  tests-functional-regressions-test-bug-2140631 --> limit-local
  tests-functional-regressions-test-bug-2140631 --> tests-fixtures-libvirt
  tests-functional-regressions-test-bug-2140631 --> tests-functional-api-client
  tests-functional-regressions-test-bug-2140631 --> tests-functional-libvirt-test-pci-in-placement
  tests-functional-regressions-test-bug-2140631 --> tests-functional-test-servers
  tests-functional-regressions-test-bug-2140631 --> tests-functional-test-servers-resource-request
  tests-functional-regressions-test-bug-2143972 --> tests-fixtures-init
  tests-functional-regressions-test-bug-2143972 --> tests-functional-fixtures
  tests-functional-regressions-test-bug-2143972 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-2152697 --> tests-fixtures-libvirt
  tests-functional-regressions-test-bug-2152697 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-2152697 --> tests-functional-libvirt-base
  tests-functional-regressions-test-bug-2153425 --> objects-init
  tests-functional-regressions-test-bug-2153425 --> tests-fixtures-libvirt
  tests-functional-regressions-test-bug-2153425 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-2153425 --> tests-functional-libvirt-base
  tests-functional-regressions-test-bug-2154495 --> compute-manager
  tests-functional-regressions-test-bug-2154495 --> tests-fixtures-libvirt
  tests-functional-regressions-test-bug-2154495 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-2154495 --> tests-functional-libvirt-base
  tests-functional-regressions-test-bug-2160224 --> tests-fixtures-init
  tests-functional-regressions-test-bug-2160224 --> tests-functional-libvirt-base
  tests-functional-regressions-test-bug-2164869 --> tests-fixtures-init
  tests-functional-regressions-test-bug-2164869 --> tests-functional-fixtures
  tests-functional-regressions-test-bug-2164869 --> tests-functional-integrated-helpers
  tests-functional-regressions-test-bug-2166786 --> exception
  tests-functional-regressions-test-bug-2166786 --> objects-fields
  tests-functional-regressions-test-bug-2166786 --> objects-init
  tests-functional-regressions-test-bug-2166786 --> tests-fixtures-libvirt
  tests-functional-regressions-test-bug-2166786 --> tests-functional-libvirt-test-pci-sriov-servers
  tests-functional-test-aggregates --> conf-init
  tests-functional-test-aggregates --> tests-fixtures-init
  tests-functional-test-aggregates --> tests-functional-api-client
  tests-functional-test-aggregates --> tests-functional-fixtures
  tests-functional-test-aggregates --> tests-functional-integrated-helpers
  tests-functional-test-aggregates --> tests-unit-utils
  tests-functional-test-aggregates --> utils
  tests-functional-test-availability-zones --> api-openstack-compute-hosts
  tests-functional-test-availability-zones --> compute-instance-actions
  tests-functional-test-availability-zones --> objects-init
  tests-functional-test-availability-zones --> tests-fixtures-init
  tests-functional-test-availability-zones --> tests-functional-api-client
  tests-functional-test-availability-zones --> tests-functional-fixtures
  tests-functional-test-availability-zones --> tests-functional-integrated-helpers
  tests-functional-test-availability-zones --> tests-unit-api-openstack-fakes
  tests-functional-test-boot-from-volume --> objects-init
  tests-functional-test-boot-from-volume --> tests-fixtures-init
  tests-functional-test-boot-from-volume --> tests-functional-api-client
  tests-functional-test-boot-from-volume --> tests-functional-fixtures
  tests-functional-test-boot-from-volume --> tests-functional-integrated-helpers
  tests-functional-test-cold-migrate --> compute-api
  tests-functional-test-cold-migrate --> objects-init
  tests-functional-test-cold-migrate --> tests-functional-integrated-helpers
  tests-functional-test-compute-mgr --> network-model
  tests-functional-test-compute-mgr --> objects-init
  tests-functional-test-compute-mgr --> tests-fixtures-init
  tests-functional-test-compute-mgr --> tests-unit-fake-network
  tests-functional-test-compute-mgr --> tests-unit-fake-server-actions
  tests-functional-test-conf-max-attach-disk-devices --> tests-fixtures-init
  tests-functional-test-conf-max-attach-disk-devices --> tests-functional-api-client
  tests-functional-test-conf-max-attach-disk-devices --> tests-functional-integrated-helpers
  tests-functional-test-cross-az-attach --> tests-fixtures-init
  tests-functional-test-cross-az-attach --> tests-functional-api-client
  tests-functional-test-cross-az-attach --> tests-functional-fixtures
  tests-functional-test-cross-az-attach --> tests-functional-integrated-helpers
  tests-functional-test-cross-cell-migrate --> compute-instance-actions
  tests-functional-test-cross-cell-migrate --> conf-init
  tests-functional-test-cross-cell-migrate --> db-main-api
  tests-functional-test-cross-cell-migrate --> exception
  tests-functional-test-cross-cell-migrate --> objects-init
  tests-functional-test-cross-cell-migrate --> policies-base
  tests-functional-test-cross-cell-migrate --> policies-servers
  tests-functional-test-cross-cell-migrate --> scheduler-utils
  tests-functional-test-cross-cell-migrate --> scheduler-weights-init
  tests-functional-test-cross-cell-migrate --> tests-fixtures-init
  tests-functional-test-cross-cell-migrate --> tests-functional-integrated-helpers
  tests-functional-test-cross-cell-migrate --> utils
  tests-functional-test-ephemeral-encryption --> objects-init
  tests-functional-test-ephemeral-encryption --> tests-functional-integrated-helpers
  tests-functional-test-external-networks --> tests-fixtures-init
  tests-functional-test-external-networks --> tests-functional-fixtures
  tests-functional-test-external-networks --> tests-functional-integrated-helpers
  tests-functional-test-flavor-extraspecs --> tests-functional-api-client
  tests-functional-test-flavor-extraspecs --> tests-functional-integrated-helpers
  tests-functional-test-graceful-shutdown --> conf-init
  tests-functional-test-graceful-shutdown --> tests-fixtures-init
  tests-functional-test-graceful-shutdown --> tests-functional-integrated-helpers
  tests-functional-test-images --> tests-functional-api-client
  tests-functional-test-images --> tests-functional-integrated-helpers
  tests-functional-test-instance-actions --> exception
  tests-functional-test-instance-actions --> tests-fixtures-init
  tests-functional-test-instance-actions --> tests-functional-api-client
  tests-functional-test-instance-actions --> tests-functional-fixtures
  tests-functional-test-instance-actions --> tests-functional-integrated-helpers
  tests-functional-test-ip-allocation --> tests-functional-integrated-helpers
  tests-functional-test-json-filter --> conf-init
  tests-functional-test-json-filter --> tests-fixtures-init
  tests-functional-test-json-filter --> tests-functional-integrated-helpers
  tests-functional-test-legacy-v2-compatible-wrapper --> api-openstack-init
  tests-functional-test-legacy-v2-compatible-wrapper --> api-openstack-wsgi
  tests-functional-test-legacy-v2-compatible-wrapper --> tests-functional-api-client
  tests-functional-test-legacy-v2-compatible-wrapper --> tests-functional-integrated-helpers
  tests-functional-test-list-servers-ip-filter --> tests-fixtures-init
  tests-functional-test-list-servers-ip-filter --> tests-functional-fixtures
  tests-functional-test-metadata --> tests-fixtures-init
  tests-functional-test-metadata --> tests-functional-fixtures
  tests-functional-test-metadata --> tests-functional-integrated-helpers
  tests-functional-test-middleware --> tests-functional-api-sample-tests-api-sample-base
  tests-functional-test-multiattach --> tests-fixtures-init
  tests-functional-test-multiattach --> tests-functional-integrated-helpers
  tests-functional-test-nova-manage --> cmd-manage
  tests-functional-test-nova-manage --> compute-instance-list
  tests-functional-test-nova-manage --> exception
  tests-functional-test-nova-manage --> network-constants
  tests-functional-test-nova-manage --> objects-init
  tests-functional-test-nova-manage --> tests-fixtures-init
  tests-functional-test-nova-manage --> tests-functional-api-client
  tests-functional-test-nova-manage --> tests-functional-fixtures
  tests-functional-test-nova-manage --> tests-functional-integrated-helpers
  tests-functional-test-nova-manage --> tests-functional-test-servers-resource-request
  tests-functional-test-nova-manage --> utils
  tests-functional-test-policy --> policies-base
  tests-functional-test-policy --> tests-fixtures-init
  tests-functional-test-policy --> tests-functional-fixtures
  tests-functional-test-policy --> tests-functional-integrated-helpers
  tests-functional-test-policy --> utils
  tests-functional-test-report-client --> cmd-status
  tests-functional-test-report-client --> compute-provider-tree
  tests-functional-test-report-client --> compute-utils
  tests-functional-test-report-client --> conf-init
  tests-functional-test-report-client --> exception
  tests-functional-test-report-client --> objects-init
  tests-functional-test-report-client --> scheduler-client-report
  tests-functional-test-report-client --> scheduler-utils
  tests-functional-test-report-client --> tests-functional-fixtures
  tests-functional-test-routed-networks --> network-constants
  tests-functional-test-routed-networks --> tests-fixtures-init
  tests-functional-test-routed-networks --> tests-functional-integrated-helpers
  tests-functional-test-scheduler --> compute-instance-actions
  tests-functional-test-scheduler --> tests-fixtures-init
  tests-functional-test-scheduler --> tests-functional-fixtures
  tests-functional-test-scheduler --> tests-functional-integrated-helpers
  tests-functional-test-scheduler --> tests-unit-fake-network
  tests-functional-test-server-external-events --> compute-instance-actions
  tests-functional-test-server-external-events --> compute-power-state
  tests-functional-test-server-external-events --> compute-vm-states
  tests-functional-test-server-external-events --> tests-functional-integrated-helpers
  tests-functional-test-server-faults --> tests-fixtures-init
  tests-functional-test-server-faults --> tests-functional-fixtures
  tests-functional-test-server-faults --> tests-functional-integrated-helpers
  tests-functional-test-server-group --> compute-instance-actions
  tests-functional-test-server-group --> db-main-api
  tests-functional-test-server-group --> objects-init
  tests-functional-test-server-group --> tests-fixtures-init
  tests-functional-test-server-group --> tests-fixtures-notifications
  tests-functional-test-server-group --> tests-functional-api-client
  tests-functional-test-server-group --> tests-functional-fixtures
  tests-functional-test-server-group --> tests-functional-integrated-helpers
  tests-functional-test-server-group --> utils
  tests-functional-test-server-group --> virt-fake
  tests-functional-test-server-rescue --> tests-fixtures-init
  tests-functional-test-server-rescue --> tests-functional-api-client
  tests-functional-test-server-rescue --> tests-functional-integrated-helpers
  tests-functional-test-servers --> compute-api
  tests-functional-test-servers --> compute-instance-actions
  tests-functional-test-servers --> compute-manager
  tests-functional-test-servers --> compute-rpcapi
  tests-functional-test-servers --> exception
  tests-functional-test-servers --> network-constants
  tests-functional-test-servers --> network-neutron
  tests-functional-test-servers --> objects-block-device
  tests-functional-test-servers --> objects-init
  tests-functional-test-servers --> scheduler-utils
  tests-functional-test-servers --> tests-fixtures-init
  tests-functional-test-servers --> tests-functional-api-client
  tests-functional-test-servers --> tests-functional-integrated-helpers
  tests-functional-test-servers --> tests-unit-api-openstack-fakes
  tests-functional-test-servers --> tests-unit-fake-block-device
  tests-functional-test-servers --> tests-unit-fake-requests
  tests-functional-test-servers --> tests-unit-objects-test-instance-info-cache
  tests-functional-test-servers --> utils
  tests-functional-test-servers --> virt-fake
  tests-functional-test-servers --> volume-init
  tests-functional-test-servers-provider-tree --> exception
  tests-functional-test-servers-provider-tree --> tests-functional-integrated-helpers
  tests-functional-test-servers-provider-tree --> virt-fake
  tests-functional-test-servers-resource-request --> compute-instance-actions
  tests-functional-test-servers-resource-request --> compute-manager
  tests-functional-test-servers-resource-request --> exception
  tests-functional-test-servers-resource-request --> network-constants
  tests-functional-test-servers-resource-request --> network-neutron
  tests-functional-test-servers-resource-request --> objects-init
  tests-functional-test-servers-resource-request --> policies-base
  tests-functional-test-servers-resource-request --> policies-servers
  tests-functional-test-servers-resource-request --> scheduler-utils
  tests-functional-test-servers-resource-request --> tests-fixtures-init
  tests-functional-test-servers-resource-request --> tests-functional-api-client
  tests-functional-test-servers-resource-request --> tests-functional-integrated-helpers
  tests-functional-test-servers-resource-request --> tests-unit-fake-requests
  tests-functional-test-servers-resource-request --> virt-fake
  tests-functional-test-service --> exception
  tests-functional-test-service --> objects-service
  tests-functional-test-service --> tests-fixtures-init
  tests-functional-test-service --> tests-functional-fixtures
  tests-functional-test-service --> tests-functional-integrated-helpers
  tests-functional-test-service --> virt-node
  tests-functional-test-unified-limits --> conf-init
  tests-functional-test-unified-limits --> limit-local
  tests-functional-test-unified-limits --> objects-flavor
  tests-functional-test-unified-limits --> objects-instance-group
  tests-functional-test-unified-limits --> tests-fixtures-init
  tests-functional-test-unified-limits --> tests-functional-api-client
  tests-functional-test-unified-limits --> tests-functional-integrated-helpers
  tests-functional-wsgi-test-flavor-manage --> exception
  tests-functional-wsgi-test-flavor-manage --> objects-init
  tests-functional-wsgi-test-flavor-manage --> tests-fixtures-init
  tests-functional-wsgi-test-flavor-manage --> tests-functional-integrated-helpers
  tests-functional-wsgi-test-interfaces --> tests-functional-api-client
  tests-functional-wsgi-test-interfaces --> tests-functional-integrated-helpers
  tests-functional-wsgi-test-secgroup --> tests-fixtures-init
  tests-functional-wsgi-test-servers --> policies-base
  tests-functional-wsgi-test-servers --> policies-servers
  tests-functional-wsgi-test-servers --> tests-fixtures-init
  tests-functional-wsgi-test-servers --> tests-functional-api-client
  tests-functional-wsgi-test-servers --> tests-functional-fixtures
  tests-functional-wsgi-test-servers --> tests-functional-integrated-helpers
  tests-functional-wsgi-test-services --> exception
  tests-functional-wsgi-test-services --> objects-init
  tests-functional-wsgi-test-services --> tests-functional-api-client
  tests-functional-wsgi-test-services --> tests-functional-integrated-helpers
  tests-functional-wsgi-test-services --> utils
  tests-unit-accelerator-test-cyborg --> accelerator-cyborg
  tests-unit-accelerator-test-cyborg --> exception
  tests-unit-accelerator-test-cyborg --> objects-init
  tests-unit-accelerator-test-cyborg --> objects-request-spec
  tests-unit-accelerator-test-cyborg --> tests-unit-fake-requests
  tests-unit-api-openstack-compute-admin-only-action-common --> compute-vm-states
  tests-unit-api-openstack-compute-admin-only-action-common --> exception
  tests-unit-api-openstack-compute-admin-only-action-common --> tests-unit-api-openstack-fakes
  tests-unit-api-openstack-compute-admin-only-action-common --> tests-unit-fake-instance
  tests-unit-api-openstack-compute-dummy-schema --> api-validation-parameter-types
  tests-unit-api-openstack-compute-microversions --> api-openstack-api-version-request
  tests-unit-api-openstack-compute-microversions --> api-openstack-compute-routes
  tests-unit-api-openstack-compute-microversions --> api-openstack-wsgi
  tests-unit-api-openstack-compute-microversions --> api-validation-init
  tests-unit-api-openstack-compute-microversions --> tests-unit-api-openstack-compute-dummy-schema
  tests-unit-api-openstack-compute-test-access-ips --> api-openstack-compute-servers
  tests-unit-api-openstack-compute-test-access-ips --> exception
  tests-unit-api-openstack-compute-test-access-ips --> tests-fixtures-init
  tests-unit-api-openstack-compute-test-access-ips --> tests-unit-api-openstack-fakes
  tests-unit-api-openstack-compute-test-admin-actions --> api-openstack-compute-admin-actions
  tests-unit-api-openstack-compute-test-admin-actions --> tests-unit-api-openstack-compute-admin-only-action-common
  tests-unit-api-openstack-compute-test-admin-password --> api-openstack-compute-admin-password
  tests-unit-api-openstack-compute-test-admin-password --> exception
  tests-unit-api-openstack-compute-test-admin-password --> tests-unit-api-openstack-fakes
  tests-unit-api-openstack-compute-test-admin-password --> tests-unit-fake-instance
  tests-unit-api-openstack-compute-test-aggregates --> api-openstack-compute-aggregates
  tests-unit-api-openstack-compute-test-aggregates --> compute-api
  tests-unit-api-openstack-compute-test-aggregates --> exception
  tests-unit-api-openstack-compute-test-aggregates --> objects-base
  tests-unit-api-openstack-compute-test-aggregates --> objects-init
  tests-unit-api-openstack-compute-test-aggregates --> tests-unit-api-openstack-fakes
  tests-unit-api-openstack-compute-test-api --> api-openstack-init
  tests-unit-api-openstack-compute-test-api --> api-openstack-wsgi
  tests-unit-api-openstack-compute-test-api --> exception
  tests-unit-api-openstack-compute-test-api --> tests-unit-api-openstack-fakes
  tests-unit-api-openstack-compute-test-assisted-snapshots --> api-openstack-compute-assisted-volume-snapshots
  tests-unit-api-openstack-compute-test-assisted-snapshots --> compute-api
  tests-unit-api-openstack-compute-test-assisted-snapshots --> compute-task-states
  tests-unit-api-openstack-compute-test-assisted-snapshots --> exception
  tests-unit-api-openstack-compute-test-assisted-snapshots --> tests-unit-api-openstack-fakes
  tests-unit-api-openstack-compute-test-attach-interfaces --> api-openstack-common
  tests-unit-api-openstack-compute-test-attach-interfaces --> api-openstack-compute-attach-interfaces
  tests-unit-api-openstack-compute-test-attach-interfaces --> compute-api
  tests-unit-api-openstack-compute-test-attach-interfaces --> exception
  tests-unit-api-openstack-compute-test-attach-interfaces --> objects-init
  tests-unit-api-openstack-compute-test-attach-interfaces --> tests-unit-api-openstack-fakes
  tests-unit-api-openstack-compute-test-attach-interfaces --> tests-unit-fake-instance
  tests-unit-api-openstack-compute-test-attach-interfaces --> tests-unit-fake-network-cache-model
  tests-unit-api-openstack-compute-test-availability-zone --> api-openstack-compute-availability-zone
  tests-unit-api-openstack-compute-test-availability-zone --> api-openstack-compute-servers
  tests-unit-api-openstack-compute-test-availability-zone --> compute-api
  tests-unit-api-openstack-compute-test-availability-zone --> db-main-api
  tests-unit-api-openstack-compute-test-availability-zone --> exception
  tests-unit-api-openstack-compute-test-availability-zone --> objects-init
  tests-unit-api-openstack-compute-test-availability-zone --> tests-fixtures-init
  tests-unit-api-openstack-compute-test-availability-zone --> tests-unit-api-openstack-fakes
  tests-unit-api-openstack-compute-test-availability-zone --> tests-unit-matchers
  tests-unit-api-openstack-compute-test-availability-zone --> tests-unit-objects-test-service
  tests-unit-api-openstack-compute-test-baremetal-nodes --> api-openstack-compute-baremetal-nodes
  tests-unit-api-openstack-compute-test-baremetal-nodes --> exception
  tests-unit-api-openstack-compute-test-baremetal-nodes --> tests-unit-api-openstack-fakes
  tests-unit-api-openstack-compute-test-baremetal-nodes --> tests-unit-virt-ironic-utils
  tests-unit-api-openstack-compute-test-certificates --> api-openstack-compute-certificates
  tests-unit-api-openstack-compute-test-certificates --> tests-unit-api-openstack-fakes
  tests-unit-api-openstack-compute-test-cloudpipe --> api-openstack-compute-cloudpipe
  tests-unit-api-openstack-compute-test-cloudpipe --> tests-unit-api-openstack-fakes
  tests-unit-api-openstack-compute-test-cloudpipe-update --> api-openstack-compute-cloudpipe
  tests-unit-api-openstack-compute-test-cloudpipe-update --> tests-unit-api-openstack-fakes
  tests-unit-api-openstack-compute-test-console-auth-tokens --> api-openstack-api-version-request
  tests-unit-api-openstack-compute-test-console-auth-tokens --> api-openstack-compute-console-auth-tokens
  tests-unit-api-openstack-compute-test-console-auth-tokens --> exception
  tests-unit-api-openstack-compute-test-console-auth-tokens --> objects-init
  tests-unit-api-openstack-compute-test-console-auth-tokens --> tests-unit-api-openstack-fakes
  tests-unit-api-openstack-compute-test-console-output --> api-openstack-compute-console-output
  tests-unit-api-openstack-compute-test-console-output --> compute-api
  tests-unit-api-openstack-compute-test-console-output --> exception
  tests-unit-api-openstack-compute-test-console-output --> tests-unit-api-openstack-fakes
  tests-unit-api-openstack-compute-test-console-output --> tests-unit-fake-instance
  tests-unit-api-openstack-compute-test-create-backup --> api-openstack-common
  tests-unit-api-openstack-compute-test-create-backup --> api-openstack-compute-create-backup
  tests-unit-api-openstack-compute-test-create-backup --> compute-api
  tests-unit-api-openstack-compute-test-create-backup --> compute-utils
  tests-unit-api-openstack-compute-test-create-backup --> exception
  tests-unit-api-openstack-compute-test-create-backup --> tests-unit-api-openstack-compute-admin-only-action-common
  tests-unit-api-openstack-compute-test-create-backup --> tests-unit-api-openstack-fakes
  tests-unit-api-openstack-compute-test-create-backup --> tests-unit-fake-instance
  tests-unit-api-openstack-compute-test-deferred-delete --> api-openstack-compute-deferred-delete
  tests-unit-api-openstack-compute-test-deferred-delete --> compute-api
  tests-unit-api-openstack-compute-test-deferred-delete --> exception
  tests-unit-api-openstack-compute-test-deferred-delete --> tests-unit-api-openstack-fakes
  tests-unit-api-openstack-compute-test-deferred-delete --> tests-unit-fake-instance
  tests-unit-api-openstack-compute-test-disk-config --> api-openstack-compute-init
  tests-unit-api-openstack-compute-test-disk-config --> compute-api
  tests-unit-api-openstack-compute-test-disk-config --> exception
  tests-unit-api-openstack-compute-test-disk-config --> objects-init
  tests-unit-api-openstack-compute-test-disk-config --> tests-fixtures-init
  tests-unit-api-openstack-compute-test-disk-config --> tests-unit-api-openstack-fakes
  tests-unit-api-openstack-compute-test-disk-config --> tests-unit-fake-instance
  tests-unit-api-openstack-compute-test-evacuate --> api-openstack-compute-evacuate
  tests-unit-api-openstack-compute-test-evacuate --> compute-api
  tests-unit-api-openstack-compute-test-evacuate --> compute-vm-states
  tests-unit-api-openstack-compute-test-evacuate --> conf-init
  tests-unit-api-openstack-compute-test-evacuate --> exception
  tests-unit-api-openstack-compute-test-evacuate --> tests-unit-api-openstack-fakes
  tests-unit-api-openstack-compute-test-evacuate --> tests-unit-fake-instance
  tests-unit-api-openstack-compute-test-extended-ips --> objects-init
  tests-unit-api-openstack-compute-test-extended-ips --> tests-unit-api-openstack-fakes
  tests-unit-api-openstack-compute-test-extended-ips-mac --> objects-init
  tests-unit-api-openstack-compute-test-extended-ips-mac --> tests-unit-api-openstack-fakes
  tests-unit-api-openstack-compute-test-extension-info --> api-openstack-compute-extension-info
  tests-unit-api-openstack-compute-test-extension-info --> exception
  tests-unit-api-openstack-compute-test-extension-info --> tests-unit-api-openstack-fakes
  tests-unit-api-openstack-compute-test-flavor-access --> api-openstack-api-version-request
  tests-unit-api-openstack-compute-test-flavor-access --> api-openstack-compute-flavor-access
  tests-unit-api-openstack-compute-test-flavor-access --> api-openstack-compute-flavors
  tests-unit-api-openstack-compute-test-flavor-access --> exception
  tests-unit-api-openstack-compute-test-flavor-access --> tests-unit-api-openstack-fakes
  tests-unit-api-openstack-compute-test-flavor-disabled --> tests-unit-api-openstack-fakes
  tests-unit-api-openstack-compute-test-flavor-manage --> api-openstack-compute-flavor-access
  tests-unit-api-openstack-compute-test-flavor-manage --> api-openstack-compute-flavors
  tests-unit-api-openstack-compute-test-flavor-manage --> db-constants
  tests-unit-api-openstack-compute-test-flavor-manage --> exception
  tests-unit-api-openstack-compute-test-flavor-manage --> objects-init
  tests-unit-api-openstack-compute-test-flavor-manage --> tests-unit-api-openstack-fakes
  tests-unit-api-openstack-compute-test-flavorextradata --> tests-unit-api-openstack-fakes
  tests-unit-api-openstack-compute-test-flavors --> api-openstack-common
  tests-unit-api-openstack-compute-test-flavors --> api-openstack-compute-flavors
  tests-unit-api-openstack-compute-test-flavors --> exception
  tests-unit-api-openstack-compute-test-flavors --> objects-init
  tests-unit-api-openstack-compute-test-flavors --> tests-unit-api-openstack-fakes
  tests-unit-api-openstack-compute-test-flavors --> tests-unit-matchers
  tests-unit-api-openstack-compute-test-flavors-extraspecs --> api-openstack-compute-flavors-extraspecs
  tests-unit-api-openstack-compute-test-flavors-extraspecs --> exception
  tests-unit-api-openstack-compute-test-flavors-extraspecs --> objects-init
  tests-unit-api-openstack-compute-test-flavors-extraspecs --> tests-unit-api-openstack-fakes
  tests-unit-api-openstack-compute-test-flavors-extraspecs --> tests-unit-objects-test-flavor
  tests-unit-api-openstack-compute-test-floating-ip-pools --> api-openstack-compute-floating-ip-pools
  tests-unit-api-openstack-compute-test-floating-ip-pools --> exception
  tests-unit-api-openstack-compute-test-floating-ip-pools --> tests-unit-api-openstack-fakes
  tests-unit-api-openstack-compute-test-floating-ips --> api-openstack-compute-floating-ips
  tests-unit-api-openstack-compute-test-floating-ips --> exception
  tests-unit-api-openstack-compute-test-floating-ips --> tests-unit-api-openstack-fakes
  tests-unit-api-openstack-compute-test-hosts --> api-openstack-compute-hosts
  tests-unit-api-openstack-compute-test-hosts --> compute-power-state
  tests-unit-api-openstack-compute-test-hosts --> compute-vm-states
  tests-unit-api-openstack-compute-test-hosts --> db-main-api
  tests-unit-api-openstack-compute-test-hosts --> exception
  tests-unit-api-openstack-compute-test-hosts --> tests-fixtures-init
  tests-unit-api-openstack-compute-test-hosts --> tests-unit-api-openstack-fakes
  tests-unit-api-openstack-compute-test-hosts --> tests-unit-fake-hosts
  tests-unit-api-openstack-compute-test-hypervisors --> api-openstack-compute-hypervisors
  tests-unit-api-openstack-compute-test-hypervisors --> exception
  tests-unit-api-openstack-compute-test-hypervisors --> objects-init
  tests-unit-api-openstack-compute-test-hypervisors --> tests-unit-api-openstack-fakes
  tests-unit-api-openstack-compute-test-hypervisors --> tests-unit-fake-instance
  tests-unit-api-openstack-compute-test-image-metadata --> api-openstack-compute-image-metadata
  tests-unit-api-openstack-compute-test-image-metadata --> exception
  tests-unit-api-openstack-compute-test-image-metadata --> tests-unit-api-openstack-fakes
  tests-unit-api-openstack-compute-test-image-metadata --> tests-unit-image-fixtures
  tests-unit-api-openstack-compute-test-images --> api-openstack-compute-images
  tests-unit-api-openstack-compute-test-images --> api-openstack-compute-views-images
  tests-unit-api-openstack-compute-test-images --> exception
  tests-unit-api-openstack-compute-test-images --> image-glance
  tests-unit-api-openstack-compute-test-images --> tests-unit-api-openstack-fakes
  tests-unit-api-openstack-compute-test-images --> tests-unit-image-fixtures
  tests-unit-api-openstack-compute-test-images --> tests-unit-matchers
  tests-unit-api-openstack-compute-test-instance-actions --> api-openstack-compute-instance-actions
  tests-unit-api-openstack-compute-test-instance-actions --> api-openstack-wsgi
  tests-unit-api-openstack-compute-test-instance-actions --> compute-api
  tests-unit-api-openstack-compute-test-instance-actions --> db-main-models
  tests-unit-api-openstack-compute-test-instance-actions --> exception
  tests-unit-api-openstack-compute-test-instance-actions --> objects-init
  tests-unit-api-openstack-compute-test-instance-actions --> tests-unit-api-openstack-fakes
  tests-unit-api-openstack-compute-test-instance-actions --> tests-unit-fake-instance
  tests-unit-api-openstack-compute-test-instance-actions --> tests-unit-fake-server-actions
  tests-unit-api-openstack-compute-test-instance-actions --> utils
  tests-unit-api-openstack-compute-test-instance-usage-audit-log --> api-openstack-compute-instance-usage-audit-log
  tests-unit-api-openstack-compute-test-instance-usage-audit-log --> tests-unit-api-openstack-fakes
  tests-unit-api-openstack-compute-test-instance-usage-audit-log --> tests-unit-objects-test-service
  tests-unit-api-openstack-compute-test-keypairs --> api-openstack-compute-keypairs
  tests-unit-api-openstack-compute-test-keypairs --> api-openstack-wsgi
  tests-unit-api-openstack-compute-test-keypairs --> exception
  tests-unit-api-openstack-compute-test-keypairs --> objects-init
  tests-unit-api-openstack-compute-test-keypairs --> tests-unit-api-openstack-fakes
  tests-unit-api-openstack-compute-test-keypairs --> tests-unit-objects-test-keypair
  tests-unit-api-openstack-compute-test-limits --> api-openstack-compute-limits
  tests-unit-api-openstack-compute-test-limits --> api-openstack-compute-views-init
  tests-unit-api-openstack-compute-test-limits --> api-openstack-wsgi
  tests-unit-api-openstack-compute-test-limits --> exception
  tests-unit-api-openstack-compute-test-limits --> limit-local
  tests-unit-api-openstack-compute-test-limits --> limit-placement
  tests-unit-api-openstack-compute-test-limits --> objects-init
  tests-unit-api-openstack-compute-test-limits --> policies-limits
  tests-unit-api-openstack-compute-test-limits --> tests-unit-api-openstack-fakes
  tests-unit-api-openstack-compute-test-limits --> tests-unit-matchers
  tests-unit-api-openstack-compute-test-lock-server --> api-openstack-api-version-request
  tests-unit-api-openstack-compute-test-lock-server --> api-openstack-common
  tests-unit-api-openstack-compute-test-lock-server --> api-openstack-compute-lock-server
  tests-unit-api-openstack-compute-test-lock-server --> exception
  tests-unit-api-openstack-compute-test-lock-server --> tests-unit-api-openstack-compute-admin-only-action-common
  tests-unit-api-openstack-compute-test-lock-server --> tests-unit-fake-instance
  tests-unit-api-openstack-compute-test-microversions --> api-openstack-api-version-request
  tests-unit-api-openstack-compute-test-microversions --> tests-unit-api-openstack-compute-microversions
  tests-unit-api-openstack-compute-test-microversions --> tests-unit-api-openstack-fakes
  tests-unit-api-openstack-compute-test-migrate-server --> api-openstack-api-version-request
  tests-unit-api-openstack-compute-test-migrate-server --> api-openstack-compute-migrate-server
  tests-unit-api-openstack-compute-test-migrate-server --> exception
  tests-unit-api-openstack-compute-test-migrate-server --> objects-init
  tests-unit-api-openstack-compute-test-migrate-server --> tests-unit-api-openstack-compute-admin-only-action-common
  tests-unit-api-openstack-compute-test-migrate-server --> tests-unit-api-openstack-fakes
  tests-unit-api-openstack-compute-test-migrations --> api-openstack-compute-migrations
  tests-unit-api-openstack-compute-test-migrations --> exception
  tests-unit-api-openstack-compute-test-migrations --> objects-base
  tests-unit-api-openstack-compute-test-migrations --> objects-init
  tests-unit-api-openstack-compute-test-migrations --> tests-unit-api-openstack-fakes
  tests-unit-api-openstack-compute-test-multinic --> api-openstack-compute-multinic
  tests-unit-api-openstack-compute-test-multinic --> compute-init
  tests-unit-api-openstack-compute-test-multinic --> exception
  tests-unit-api-openstack-compute-test-multinic --> objects-init
  tests-unit-api-openstack-compute-test-multinic --> tests-unit-api-openstack-fakes
  tests-unit-api-openstack-compute-test-multinic --> tests-unit-fake-instance
  tests-unit-api-openstack-compute-test-networks --> api-openstack-compute-networks
  tests-unit-api-openstack-compute-test-networks --> exception
  tests-unit-api-openstack-compute-test-networks --> network-neutron
  tests-unit-api-openstack-compute-test-networks --> tests-unit-api-openstack-fakes
  tests-unit-api-openstack-compute-test-pause-server --> api-openstack-compute-pause-server
  tests-unit-api-openstack-compute-test-pause-server --> tests-unit-api-openstack-compute-admin-only-action-common
  tests-unit-api-openstack-compute-test-quota-classes --> api-openstack-compute-quota-classes
  tests-unit-api-openstack-compute-test-quota-classes --> exception
  tests-unit-api-openstack-compute-test-quota-classes --> limit-local
  tests-unit-api-openstack-compute-test-quota-classes --> limit-placement
  tests-unit-api-openstack-compute-test-quota-classes --> objects-init
  tests-unit-api-openstack-compute-test-quota-classes --> tests-unit-api-openstack-fakes
  tests-unit-api-openstack-compute-test-quota-sets --> api-openstack-compute-quota-sets
  tests-unit-api-openstack-compute-test-quota-sets --> db-constants
  tests-unit-api-openstack-compute-test-quota-sets --> exception
  tests-unit-api-openstack-compute-test-quota-sets --> limit-local
  tests-unit-api-openstack-compute-test-quota-sets --> limit-placement
  tests-unit-api-openstack-compute-test-quota-sets --> objects-init
  tests-unit-api-openstack-compute-test-quota-sets --> tests-unit-api-openstack-fakes
  tests-unit-api-openstack-compute-test-remote-consoles --> api-openstack-api-version-request
  tests-unit-api-openstack-compute-test-remote-consoles --> api-openstack-compute-remote-consoles
  tests-unit-api-openstack-compute-test-remote-consoles --> compute-api
  tests-unit-api-openstack-compute-test-remote-consoles --> exception
  tests-unit-api-openstack-compute-test-remote-consoles --> objects-init
  tests-unit-api-openstack-compute-test-remote-consoles --> tests-unit-api-openstack-fakes
  tests-unit-api-openstack-compute-test-remote-consoles --> tests-unit-fake-instance
  tests-unit-api-openstack-compute-test-rescue --> api-openstack-api-version-request
  tests-unit-api-openstack-compute-test-rescue --> api-openstack-compute-rescue
  tests-unit-api-openstack-compute-test-rescue --> compute-init
  tests-unit-api-openstack-compute-test-rescue --> conf-init
  tests-unit-api-openstack-compute-test-rescue --> exception
  tests-unit-api-openstack-compute-test-rescue --> tests-unit-api-openstack-fakes
  tests-unit-api-openstack-compute-test-rescue --> tests-unit-fake-instance
  tests-unit-api-openstack-compute-test-schemas --> api-openstack-compute-init
  tests-unit-api-openstack-compute-test-schemas --> api-validation-validators
  tests-unit-api-openstack-compute-test-security-groups --> api-openstack-compute-security-groups
  tests-unit-api-openstack-compute-test-security-groups --> db-main-api
  tests-unit-api-openstack-compute-test-security-groups --> exception
  tests-unit-api-openstack-compute-test-security-groups --> network-model
  tests-unit-api-openstack-compute-test-security-groups --> network-neutron
  tests-unit-api-openstack-compute-test-security-groups --> network-security-group-api
  tests-unit-api-openstack-compute-test-security-groups --> objects-init
  tests-unit-api-openstack-compute-test-security-groups --> objects-instance
  tests-unit-api-openstack-compute-test-security-groups --> tests-unit-api-openstack-fakes
  tests-unit-api-openstack-compute-test-server-actions --> api-openstack-compute-servers
  tests-unit-api-openstack-compute-test-server-actions --> compute-api
  tests-unit-api-openstack-compute-test-server-actions --> compute-task-states
  tests-unit-api-openstack-compute-test-server-actions --> compute-vm-states
  tests-unit-api-openstack-compute-test-server-actions --> conf-init
  tests-unit-api-openstack-compute-test-server-actions --> exception
  tests-unit-api-openstack-compute-test-server-actions --> image-glance
  tests-unit-api-openstack-compute-test-server-actions --> objects-init
  tests-unit-api-openstack-compute-test-server-actions --> tests-fixtures-init
  tests-unit-api-openstack-compute-test-server-actions --> tests-unit-api-openstack-fakes
  tests-unit-api-openstack-compute-test-server-actions --> tests-unit-fake-block-device
  tests-unit-api-openstack-compute-test-server-actions --> tests-unit-fake-instance
  tests-unit-api-openstack-compute-test-server-diagnostics --> api-openstack-wsgi
  tests-unit-api-openstack-compute-test-server-diagnostics --> compute-api
  tests-unit-api-openstack-compute-test-server-diagnostics --> exception
  tests-unit-api-openstack-compute-test-server-diagnostics --> objects-init
  tests-unit-api-openstack-compute-test-server-diagnostics --> tests-unit-api-openstack-fakes
  tests-unit-api-openstack-compute-test-server-external-events --> api-openstack-compute-server-external-events
  tests-unit-api-openstack-compute-test-server-external-events --> exception
  tests-unit-api-openstack-compute-test-server-external-events --> objects-init
  tests-unit-api-openstack-compute-test-server-external-events --> objects-instance
  tests-unit-api-openstack-compute-test-server-external-events --> tests-fixtures-init
  tests-unit-api-openstack-compute-test-server-external-events --> tests-unit-api-openstack-fakes
  tests-unit-api-openstack-compute-test-server-group-quotas --> api-openstack-compute-server-groups
  tests-unit-api-openstack-compute-test-server-group-quotas --> exception
  tests-unit-api-openstack-compute-test-server-group-quotas --> limit-local
  tests-unit-api-openstack-compute-test-server-group-quotas --> objects-init
  tests-unit-api-openstack-compute-test-server-group-quotas --> tests-fixtures-init
  tests-unit-api-openstack-compute-test-server-group-quotas --> tests-unit-api-openstack-fakes
  tests-unit-api-openstack-compute-test-server-groups --> api-openstack-api-version-request
  tests-unit-api-openstack-compute-test-server-groups --> api-openstack-compute-server-groups
  tests-unit-api-openstack-compute-test-server-groups --> exception
  tests-unit-api-openstack-compute-test-server-groups --> objects-init
  tests-unit-api-openstack-compute-test-server-groups --> tests-fixtures-init
  tests-unit-api-openstack-compute-test-server-groups --> tests-unit-api-openstack-fakes
  tests-unit-api-openstack-compute-test-server-metadata --> api-openstack-compute-server-metadata
  tests-unit-api-openstack-compute-test-server-metadata --> compute-vm-states
  tests-unit-api-openstack-compute-test-server-metadata --> db-main-api
  tests-unit-api-openstack-compute-test-server-metadata --> exception
  tests-unit-api-openstack-compute-test-server-metadata --> tests-unit-api-openstack-fakes
  tests-unit-api-openstack-compute-test-server-migrations --> api-openstack-compute-server-migrations
  tests-unit-api-openstack-compute-test-server-migrations --> exception
  tests-unit-api-openstack-compute-test-server-migrations --> objects-base
  tests-unit-api-openstack-compute-test-server-migrations --> objects-init
  tests-unit-api-openstack-compute-test-server-migrations --> tests-unit-api-openstack-fakes
  tests-unit-api-openstack-compute-test-server-password --> api-openstack-compute-server-password
  tests-unit-api-openstack-compute-test-server-password --> tests-unit-api-openstack-fakes
  tests-unit-api-openstack-compute-test-server-password --> tests-unit-fake-instance
  tests-unit-api-openstack-compute-test-server-reset-state --> api-openstack-compute-admin-actions
  tests-unit-api-openstack-compute-test-server-reset-state --> compute-instance-actions
  tests-unit-api-openstack-compute-test-server-reset-state --> compute-vm-states
  tests-unit-api-openstack-compute-test-server-reset-state --> exception
  tests-unit-api-openstack-compute-test-server-reset-state --> objects-init
  tests-unit-api-openstack-compute-test-server-reset-state --> tests-unit-api-openstack-fakes
  tests-unit-api-openstack-compute-test-server-shares --> api-openstack-compute-server-shares
  tests-unit-api-openstack-compute-test-server-shares --> compute-vm-states
  tests-unit-api-openstack-compute-test-server-shares --> db-main-models
  tests-unit-api-openstack-compute-test-server-shares --> objects-init
  tests-unit-api-openstack-compute-test-server-shares --> tests-fixtures-init
  tests-unit-api-openstack-compute-test-server-shares --> tests-unit-api-openstack-fakes
  tests-unit-api-openstack-compute-test-server-shares --> tests-unit-compute-test-compute
  tests-unit-api-openstack-compute-test-server-shares --> tests-unit-fake-instance
  tests-unit-api-openstack-compute-test-server-start-stop --> api-openstack-compute-servers
  tests-unit-api-openstack-compute-test-server-start-stop --> compute-api
  tests-unit-api-openstack-compute-test-server-start-stop --> db-main-api
  tests-unit-api-openstack-compute-test-server-start-stop --> exception
  tests-unit-api-openstack-compute-test-server-start-stop --> tests-fixtures-init
  tests-unit-api-openstack-compute-test-server-start-stop --> tests-unit-api-openstack-fakes
  tests-unit-api-openstack-compute-test-server-tags --> api-openstack-compute-server-tags
  tests-unit-api-openstack-compute-test-server-tags --> api-openstack-compute-servers
  tests-unit-api-openstack-compute-test-server-tags --> compute-vm-states
  tests-unit-api-openstack-compute-test-server-tags --> db-main-models
  tests-unit-api-openstack-compute-test-server-tags --> exception
  tests-unit-api-openstack-compute-test-server-tags --> objects-init
  tests-unit-api-openstack-compute-test-server-tags --> objects-instance
  tests-unit-api-openstack-compute-test-server-tags --> objects-tag
  tests-unit-api-openstack-compute-test-server-tags --> tests-unit-api-openstack-fakes
  tests-unit-api-openstack-compute-test-server-tags --> tests-unit-fake-instance
  tests-unit-api-openstack-compute-test-server-topology --> api-openstack-common
  tests-unit-api-openstack-compute-test-server-topology --> api-openstack-compute-server-topology
  tests-unit-api-openstack-compute-test-server-topology --> exception
  tests-unit-api-openstack-compute-test-server-topology --> objects-init
  tests-unit-api-openstack-compute-test-server-topology --> objects-instance-numa
  tests-unit-api-openstack-compute-test-server-topology --> tests-unit-api-openstack-fakes
  tests-unit-api-openstack-compute-test-servers --> api-openstack-api-version-request
  tests-unit-api-openstack-compute-test-servers --> api-openstack-common
  tests-unit-api-openstack-compute-test-servers --> api-openstack-compute-init
  tests-unit-api-openstack-compute-test-servers --> api-openstack-compute-ips
  tests-unit-api-openstack-compute-test-servers --> api-openstack-compute-schemas-servers
  tests-unit-api-openstack-compute-test-servers --> api-openstack-compute-servers
  tests-unit-api-openstack-compute-test-servers --> api-openstack-compute-views-init
  tests-unit-api-openstack-compute-test-servers --> api-openstack-wsgi
  tests-unit-api-openstack-compute-test-servers --> compute-api
  tests-unit-api-openstack-compute-test-servers --> compute-flavors
  tests-unit-api-openstack-compute-test-servers --> compute-task-states
  tests-unit-api-openstack-compute-test-servers --> compute-vm-states
  tests-unit-api-openstack-compute-test-servers --> conf-init
  tests-unit-api-openstack-compute-test-servers --> db-constants
  tests-unit-api-openstack-compute-test-servers --> db-main-api
  tests-unit-api-openstack-compute-test-servers --> db-main-models
  tests-unit-api-openstack-compute-test-servers --> exception
  tests-unit-api-openstack-compute-test-servers --> image-glance
  tests-unit-api-openstack-compute-test-servers --> objects-init
  tests-unit-api-openstack-compute-test-servers --> objects-instance
  tests-unit-api-openstack-compute-test-servers --> objects-instance-group
  tests-unit-api-openstack-compute-test-servers --> objects-tag
  tests-unit-api-openstack-compute-test-servers --> policies-servers
  tests-unit-api-openstack-compute-test-servers --> tests-fixtures-init
  tests-unit-api-openstack-compute-test-servers --> tests-unit-api-openstack-fakes
  tests-unit-api-openstack-compute-test-servers --> tests-unit-fake-block-device
  tests-unit-api-openstack-compute-test-servers --> tests-unit-fake-flavor
  tests-unit-api-openstack-compute-test-servers --> tests-unit-fake-instance
  tests-unit-api-openstack-compute-test-servers --> tests-unit-fake-request-spec
  tests-unit-api-openstack-compute-test-servers --> tests-unit-matchers
  tests-unit-api-openstack-compute-test-servers --> utils
  tests-unit-api-openstack-compute-test-services --> api-openstack-compute-services
  tests-unit-api-openstack-compute-test-services --> api-openstack-wsgi
  tests-unit-api-openstack-compute-test-services --> compute-api
  tests-unit-api-openstack-compute-test-services --> exception
  tests-unit-api-openstack-compute-test-services --> objects-init
  tests-unit-api-openstack-compute-test-services --> servicegroup-drivers-db
  tests-unit-api-openstack-compute-test-services --> tests-fixtures-init
  tests-unit-api-openstack-compute-test-services --> tests-unit-api-openstack-fakes
  tests-unit-api-openstack-compute-test-services --> tests-unit-objects-test-service
  tests-unit-api-openstack-compute-test-shelve --> api-openstack-api-version-request
  tests-unit-api-openstack-compute-test-shelve --> api-openstack-compute-shelve
  tests-unit-api-openstack-compute-test-shelve --> compute-task-states
  tests-unit-api-openstack-compute-test-shelve --> compute-vm-states
  tests-unit-api-openstack-compute-test-shelve --> exception
  tests-unit-api-openstack-compute-test-shelve --> tests-unit-api-openstack-fakes
  tests-unit-api-openstack-compute-test-shelve --> tests-unit-fake-instance
  tests-unit-api-openstack-compute-test-simple-tenant-usage --> api-openstack-compute-simple-tenant-usage
  tests-unit-api-openstack-compute-test-simple-tenant-usage --> compute-vm-states
  tests-unit-api-openstack-compute-test-simple-tenant-usage --> conf-init
  tests-unit-api-openstack-compute-test-simple-tenant-usage --> exception
  tests-unit-api-openstack-compute-test-simple-tenant-usage --> objects-init
  tests-unit-api-openstack-compute-test-simple-tenant-usage --> tests-unit-api-openstack-fakes
  tests-unit-api-openstack-compute-test-snapshots --> api-openstack-compute-snapshots
  tests-unit-api-openstack-compute-test-snapshots --> exception
  tests-unit-api-openstack-compute-test-snapshots --> tests-unit-api-openstack-fakes
  tests-unit-api-openstack-compute-test-snapshots --> volume-cinder
  tests-unit-api-openstack-compute-test-suspend-server --> api-openstack-compute-suspend-server
  tests-unit-api-openstack-compute-test-suspend-server --> exception
  tests-unit-api-openstack-compute-test-suspend-server --> tests-unit-api-openstack-compute-admin-only-action-common
  tests-unit-api-openstack-compute-test-tenant-networks --> api-openstack-compute-tenant-networks
  tests-unit-api-openstack-compute-test-tenant-networks --> exception
  tests-unit-api-openstack-compute-test-tenant-networks --> tests-unit-api-openstack-fakes
  tests-unit-api-openstack-compute-test-urlmap --> tests-fixtures-init
  tests-unit-api-openstack-compute-test-urlmap --> tests-unit-api-openstack-fakes
  tests-unit-api-openstack-compute-test-versions --> api-openstack-api-version-request
  tests-unit-api-openstack-compute-test-versions --> api-openstack-compute-views-init
  tests-unit-api-openstack-compute-test-versions --> api-wsgi
  tests-unit-api-openstack-compute-test-versions --> tests-unit-api-openstack-fakes
  tests-unit-api-openstack-compute-test-versions --> tests-unit-matchers
  tests-unit-api-openstack-compute-test-volume-attachments --> api-openstack-api-version-request
  tests-unit-api-openstack-compute-test-volume-attachments --> api-openstack-common
  tests-unit-api-openstack-compute-test-volume-attachments --> api-openstack-compute-volume-attachments
  tests-unit-api-openstack-compute-test-volume-attachments --> compute-api
  tests-unit-api-openstack-compute-test-volume-attachments --> compute-vm-states
  tests-unit-api-openstack-compute-test-volume-attachments --> exception
  tests-unit-api-openstack-compute-test-volume-attachments --> objects-block-device
  tests-unit-api-openstack-compute-test-volume-attachments --> objects-init
  tests-unit-api-openstack-compute-test-volume-attachments --> tests-unit-api-openstack-fakes
  tests-unit-api-openstack-compute-test-volume-attachments --> tests-unit-fake-block-device
  tests-unit-api-openstack-compute-test-volume-attachments --> tests-unit-fake-instance
  tests-unit-api-openstack-compute-test-volume-attachments --> volume-cinder
  tests-unit-api-openstack-compute-test-volumes --> api-openstack-compute-volumes
  tests-unit-api-openstack-compute-test-volumes --> compute-flavors
  tests-unit-api-openstack-compute-test-volumes --> conf-init
  tests-unit-api-openstack-compute-test-volumes --> exception
  tests-unit-api-openstack-compute-test-volumes --> tests-unit-api-openstack-fakes
  tests-unit-api-openstack-compute-test-volumes --> volume-cinder
  tests-unit-api-openstack-compute-test-volumes-boot --> api-openstack-compute-volumes-boot
  tests-unit-api-openstack-compute-test-volumes-boot --> exception
  tests-unit-api-openstack-compute-test-volumes-boot --> tests-unit-api-openstack-fakes
  tests-unit-api-openstack-fakes --> api-auth
  tests-unit-api-openstack-fakes --> api-openstack-api-version-request
  tests-unit-api-openstack-fakes --> api-openstack-compute-init
  tests-unit-api-openstack-fakes --> api-openstack-compute-versions
  tests-unit-api-openstack-fakes --> api-openstack-init
  tests-unit-api-openstack-fakes --> api-openstack-urlmap
  tests-unit-api-openstack-fakes --> api-openstack-wsgi
  tests-unit-api-openstack-fakes --> api-wsgi
  tests-unit-api-openstack-fakes --> compute-flavors
  tests-unit-api-openstack-fakes --> compute-vm-states
  tests-unit-api-openstack-fakes --> conf-init
  tests-unit-api-openstack-fakes --> db-main-models
  tests-unit-api-openstack-fakes --> exception
  tests-unit-api-openstack-fakes --> objects-base
  tests-unit-api-openstack-fakes --> objects-init
  tests-unit-api-openstack-fakes --> tests-unit-fake-block-device
  tests-unit-api-openstack-fakes --> tests-unit-objects-test-keypair
  tests-unit-api-openstack-fakes --> utils
  tests-unit-api-openstack-test-api-version-request --> api-openstack-api-version-request
  tests-unit-api-openstack-test-api-version-request --> exception
  tests-unit-api-openstack-test-api-version-request --> tests-unit-api-openstack-fakes
  tests-unit-api-openstack-test-common --> api-openstack-common
  tests-unit-api-openstack-test-common --> compute-task-states
  tests-unit-api-openstack-test-common --> compute-vm-states
  tests-unit-api-openstack-test-common --> exception
  tests-unit-api-openstack-test-common --> tests-unit-api-openstack-fakes
  tests-unit-api-openstack-test-faults --> api-openstack-init
  tests-unit-api-openstack-test-faults --> api-openstack-wsgi
  tests-unit-api-openstack-test-faults --> exception
  tests-unit-api-openstack-test-legacy-v2-compatible-wrapper --> api-openstack-init
  tests-unit-api-openstack-test-legacy-v2-compatible-wrapper --> api-openstack-wsgi
  tests-unit-api-openstack-test-legacy-v2-compatible-wrapper --> api-validation-validators
  tests-unit-api-openstack-test-mapper --> api-openstack-init
  tests-unit-api-openstack-test-mapper --> tests-unit-api-openstack-fakes
  tests-unit-api-openstack-test-requestlog --> tests-fixtures-init
  tests-unit-api-openstack-test-wsgi --> api-openstack-api-version-request
  tests-unit-api-openstack-test-wsgi --> api-openstack-wsgi
  tests-unit-api-openstack-test-wsgi --> exception
  tests-unit-api-openstack-test-wsgi --> tests-unit-api-openstack-fakes
  tests-unit-api-openstack-test-wsgi --> tests-unit-matchers
  tests-unit-api-openstack-test-wsgi --> tests-unit-utils
  tests-unit-api-openstack-test-wsgi-app --> api-openstack-wsgi-app
  tests-unit-api-openstack-test-wsgi-app --> exception
  tests-unit-api-openstack-test-wsgi-app --> tests-fixtures-init
  tests-unit-api-test-auth --> api-auth
  tests-unit-api-test-auth --> conf-init
  tests-unit-api-test-compute-req-id --> api-compute-req-id
  tests-unit-api-test-wsgi --> api-wsgi
  tests-unit-api-test-wsgi --> exception
  tests-unit-api-test-wsgi-loader --> api-openstack-wsgi-app
  tests-unit-api-test-wsgi-loader --> utils
  tests-unit-api-validation-extra-specs-test-validators --> api-validation-extra-specs-validators
  tests-unit-api-validation-extra-specs-test-validators --> exception
  tests-unit-cmd-test-baseproxy --> cmd-baseproxy
  tests-unit-cmd-test-baseproxy --> console-websocketproxy
  tests-unit-cmd-test-common --> cmd-common
  tests-unit-cmd-test-common --> exception
  tests-unit-cmd-test-compute --> cmd-compute
  tests-unit-cmd-test-compute --> db-main-api
  tests-unit-cmd-test-compute --> exception
  tests-unit-cmd-test-manage --> cmd-manage
  tests-unit-cmd-test-manage --> conf-init
  tests-unit-cmd-test-manage --> db-main-api
  tests-unit-cmd-test-manage --> db-migration
  tests-unit-cmd-test-manage --> exception
  tests-unit-cmd-test-manage --> objects-fields
  tests-unit-cmd-test-manage --> objects-init
  tests-unit-cmd-test-manage --> scheduler-client-report
  tests-unit-cmd-test-manage --> tests-fixtures-init
  tests-unit-cmd-test-manage --> tests-unit-fake-requests
  tests-unit-cmd-test-policy --> cmd-policy
  tests-unit-cmd-test-policy --> conf-init
  tests-unit-cmd-test-policy --> db-main-api
  tests-unit-cmd-test-policy --> exception
  tests-unit-cmd-test-policy --> policies-base
  tests-unit-cmd-test-policy --> policies-instance-actions
  tests-unit-cmd-test-policy --> tests-fixtures-init
  tests-unit-cmd-test-policy --> tests-unit-fake-instance
  tests-unit-cmd-test-scheduler --> cmd-scheduler
  tests-unit-cmd-test-status --> cmd-status
  tests-unit-cmd-test-status --> conf-init
  tests-unit-cmd-test-status --> exception
  tests-unit-cmd-test-status --> objects-init
  tests-unit-cmd-test-status --> objects-service
  tests-unit-cmd-test-status --> tests-fixtures-init
  tests-unit-compute-fake-resource-tracker --> compute-resource-tracker
  tests-unit-compute-monitors-cpu-test-virt-driver --> compute-monitors-cpu-virt-driver
  tests-unit-compute-monitors-cpu-test-virt-driver --> objects-init
  tests-unit-compute-monitors-test-monitors --> compute-monitors-init
  tests-unit-compute-test-api --> compute-api
  tests-unit-compute-test-api --> compute-flavors
  tests-unit-compute-test-api --> compute-instance-actions
  tests-unit-compute-test-api --> compute-power-state
  tests-unit-compute-test-api --> compute-rpcapi
  tests-unit-compute-test-api --> compute-task-states
  tests-unit-compute-test-api --> compute-utils
  tests-unit-compute-test-api --> compute-vm-states
  tests-unit-compute-test-api --> conductor-init
  tests-unit-compute-test-api --> conf-init
  tests-unit-compute-test-api --> db-main-api
  tests-unit-compute-test-api --> exception
  tests-unit-compute-test-api --> image-glance
  tests-unit-compute-test-api --> limit-placement
  tests-unit-compute-test-api --> network-constants
  tests-unit-compute-test-api --> network-model
  tests-unit-compute-test-api --> network-neutron
  tests-unit-compute-test-api --> objects-base
  tests-unit-compute-test-api --> objects-block-device
  tests-unit-compute-test-api --> objects-fields
  tests-unit-compute-test-api --> objects-image-meta
  tests-unit-compute-test-api --> objects-init
  tests-unit-compute-test-api --> objects-quotas
  tests-unit-compute-test-api --> objects-security-group
  tests-unit-compute-test-api --> servicegroup-api
  tests-unit-compute-test-api --> tests-fixtures-init
  tests-unit-compute-test-api --> tests-unit-fake-block-device
  tests-unit-compute-test-api --> tests-unit-fake-build-request
  tests-unit-compute-test-api --> tests-unit-fake-instance
  tests-unit-compute-test-api --> tests-unit-fake-request-spec
  tests-unit-compute-test-api --> tests-unit-fake-volume
  tests-unit-compute-test-api --> tests-unit-matchers
  tests-unit-compute-test-api --> tests-unit-objects-test-flavor
  tests-unit-compute-test-api --> tests-unit-objects-test-migration
  tests-unit-compute-test-api --> utils
  tests-unit-compute-test-api --> volume-cinder
  tests-unit-compute-test-claims --> compute-claims
  tests-unit-compute-test-claims --> exception
  tests-unit-compute-test-claims --> objects-init
  tests-unit-compute-test-claims --> pci-manager
  tests-unit-compute-test-claims --> tests-unit-fake-instance
  tests-unit-compute-test-claims --> tests-unit-pci-fakes
  tests-unit-compute-test-compute --> compute-api
  tests-unit-compute-test-compute --> compute-flavors
  tests-unit-compute-test-compute --> compute-instance-actions
  tests-unit-compute-test-compute --> compute-manager
  tests-unit-compute-test-compute --> compute-power-state
  tests-unit-compute-test-compute --> compute-rpcapi
  tests-unit-compute-test-compute --> compute-task-states
  tests-unit-compute-test-compute --> compute-utils
  tests-unit-compute-test-compute --> compute-vm-states
  tests-unit-compute-test-compute --> conf-init
  tests-unit-compute-test-compute --> console-type
  tests-unit-compute-test-compute --> db-main-api
  tests-unit-compute-test-compute --> exception
  tests-unit-compute-test-compute --> image-glance
  tests-unit-compute-test-compute --> network-model
  tests-unit-compute-test-compute --> objects-block-device
  tests-unit-compute-test-compute --> objects-fields
  tests-unit-compute-test-compute --> objects-init
  tests-unit-compute-test-compute --> objects-instance
  tests-unit-compute-test-compute --> objects-migrate-data
  tests-unit-compute-test-compute --> policies-base
  tests-unit-compute-test-compute --> policies-servers
  tests-unit-compute-test-compute --> scheduler-utils
  tests-unit-compute-test-compute --> tests-fixtures-cyborg
  tests-unit-compute-test-compute --> tests-fixtures-init
  tests-unit-compute-test-compute --> tests-unit-compute-fake-resource-tracker
  tests-unit-compute-test-compute --> tests-unit-fake-block-device
  tests-unit-compute-test-compute --> tests-unit-fake-diagnostics
  tests-unit-compute-test-compute --> tests-unit-fake-instance
  tests-unit-compute-test-compute --> tests-unit-fake-network
  tests-unit-compute-test-compute --> tests-unit-fake-network-cache-model
  tests-unit-compute-test-compute --> tests-unit-fake-server-actions
  tests-unit-compute-test-compute --> tests-unit-matchers
  tests-unit-compute-test-compute --> tests-unit-objects-test-diagnostics
  tests-unit-compute-test-compute --> tests-unit-objects-test-flavor
  tests-unit-compute-test-compute --> tests-unit-objects-test-instance-numa
  tests-unit-compute-test-compute --> tests-unit-objects-test-migration
  tests-unit-compute-test-compute --> tests-unit-utils
  tests-unit-compute-test-compute --> utils
  tests-unit-compute-test-compute --> virt-block-device
  tests-unit-compute-test-compute --> virt-event
  tests-unit-compute-test-compute --> virt-fake
  tests-unit-compute-test-compute --> virt-hardware
  tests-unit-compute-test-compute --> volume-cinder
  tests-unit-compute-test-compute-mgr --> compute-build-results
  tests-unit-compute-test-compute-mgr --> compute-manager
  tests-unit-compute-test-compute-mgr --> compute-power-state
  tests-unit-compute-test-compute-mgr --> compute-resource-tracker
  tests-unit-compute-test-compute-mgr --> compute-share-management
  tests-unit-compute-test-compute-mgr --> compute-task-states
  tests-unit-compute-test-compute-mgr --> compute-utils
  tests-unit-compute-test-compute-mgr --> compute-vm-states
  tests-unit-compute-test-compute-mgr --> conductor-api
  tests-unit-compute-test-compute-mgr --> conf-init
  tests-unit-compute-test-compute-mgr --> db-main-api
  tests-unit-compute-test-compute-mgr --> exception
  tests-unit-compute-test-compute-mgr --> network-model
  tests-unit-compute-test-compute-mgr --> network-neutron
  tests-unit-compute-test-compute-mgr --> objects-base
  tests-unit-compute-test-compute-mgr --> objects-block-device
  tests-unit-compute-test-compute-mgr --> objects-fields
  tests-unit-compute-test-compute-mgr --> objects-init
  tests-unit-compute-test-compute-mgr --> objects-instance
  tests-unit-compute-test-compute-mgr --> objects-migrate-data
  tests-unit-compute-test-compute-mgr --> objects-network-request
  tests-unit-compute-test-compute-mgr --> objects-service
  tests-unit-compute-test-compute-mgr --> pci-request
  tests-unit-compute-test-compute-mgr --> scheduler-client-report
  tests-unit-compute-test-compute-mgr --> tests-fixtures-init
  tests-unit-compute-test-compute-mgr --> tests-fixtures-manila
  tests-unit-compute-test-compute-mgr --> tests-unit-api-openstack-fakes
  tests-unit-compute-test-compute-mgr --> tests-unit-compute-fake-resource-tracker
  tests-unit-compute-test-compute-mgr --> tests-unit-fake-block-device
  tests-unit-compute-test-compute-mgr --> tests-unit-fake-flavor
  tests-unit-compute-test-compute-mgr --> tests-unit-fake-instance
  tests-unit-compute-test-compute-mgr --> tests-unit-fake-network
  tests-unit-compute-test-compute-mgr --> tests-unit-fake-network-cache-model
  tests-unit-compute-test-compute-mgr --> tests-unit-objects-test-instance-fault
  tests-unit-compute-test-compute-mgr --> tests-unit-objects-test-instance-info-cache
  tests-unit-compute-test-compute-mgr --> utils
  tests-unit-compute-test-compute-mgr --> virt-block-device
  tests-unit-compute-test-compute-mgr --> virt-driver
  tests-unit-compute-test-compute-mgr --> virt-event
  tests-unit-compute-test-compute-mgr --> virt-fake
  tests-unit-compute-test-compute-mgr --> virt-hardware
  tests-unit-compute-test-compute-mgr --> virt-node
  tests-unit-compute-test-compute-mgr --> volume-cinder
  tests-unit-compute-test-flavors --> compute-flavors
  tests-unit-compute-test-flavors --> db-constants
  tests-unit-compute-test-flavors --> exception
  tests-unit-compute-test-flavors --> objects-base
  tests-unit-compute-test-flavors --> objects-init
  tests-unit-compute-test-flavors --> virt-hardware
  tests-unit-compute-test-host-api --> api-openstack-compute-services
  tests-unit-compute-test-host-api --> compute-api
  tests-unit-compute-test-host-api --> exception
  tests-unit-compute-test-host-api --> objects-init
  tests-unit-compute-test-host-api --> tests-fixtures-init
  tests-unit-compute-test-host-api --> tests-unit-api-openstack-fakes
  tests-unit-compute-test-host-api --> tests-unit-objects-test-objects
  tests-unit-compute-test-host-api --> tests-unit-objects-test-service
  tests-unit-compute-test-instance-list --> compute-instance-list
  tests-unit-compute-test-instance-list --> compute-multi-cell-list
  tests-unit-compute-test-instance-list --> exception
  tests-unit-compute-test-instance-list --> objects-init
  tests-unit-compute-test-instance-list --> tests-fixtures-init
  tests-unit-compute-test-keypairs --> compute-api
  tests-unit-compute-test-keypairs --> exception
  tests-unit-compute-test-keypairs --> limit-local
  tests-unit-compute-test-keypairs --> objects-keypair
  tests-unit-compute-test-keypairs --> tests-fixtures-init
  tests-unit-compute-test-keypairs --> tests-unit-compute-test-compute
  tests-unit-compute-test-keypairs --> tests-unit-fake-crypto
  tests-unit-compute-test-keypairs --> tests-unit-objects-test-keypair
  tests-unit-compute-test-keypairs --> tests-unit-utils
  tests-unit-compute-test-multi-cell-list --> compute-multi-cell-list
  tests-unit-compute-test-multi-cell-list --> exception
  tests-unit-compute-test-multi-cell-list --> objects-init
  tests-unit-compute-test-pci-placement-translator --> compute-pci-placement-translator
  tests-unit-compute-test-pci-placement-translator --> compute-provider-tree
  tests-unit-compute-test-pci-placement-translator --> exception
  tests-unit-compute-test-pci-placement-translator --> objects-fields
  tests-unit-compute-test-pci-placement-translator --> objects-pci-device
  tests-unit-compute-test-pci-placement-translator --> pci-devspec
  tests-unit-compute-test-provider-config --> compute-provider-config
  tests-unit-compute-test-provider-config --> exception
  tests-unit-compute-test-provider-tree --> compute-provider-tree
  tests-unit-compute-test-provider-tree --> objects-init
  tests-unit-compute-test-resource-tracker --> compute-claims
  tests-unit-compute-test-resource-tracker --> compute-monitors-base
  tests-unit-compute-test-resource-tracker --> compute-power-state
  tests-unit-compute-test-resource-tracker --> compute-provider-tree
  tests-unit-compute-test-resource-tracker --> compute-resource-tracker
  tests-unit-compute-test-resource-tracker --> compute-task-states
  tests-unit-compute-test-resource-tracker --> compute-utils
  tests-unit-compute-test-resource-tracker --> compute-vm-states
  tests-unit-compute-test-resource-tracker --> exception
  tests-unit-compute-test-resource-tracker --> objects-base
  tests-unit-compute-test-resource-tracker --> objects-fields
  tests-unit-compute-test-resource-tracker --> objects-init
  tests-unit-compute-test-resource-tracker --> objects-pci-device
  tests-unit-compute-test-resource-tracker --> pci-manager
  tests-unit-compute-test-resource-tracker --> scheduler-client-report
  tests-unit-compute-test-resource-tracker --> tests-fixtures-init
  tests-unit-compute-test-resource-tracker --> tests-unit-fake-instance
  tests-unit-compute-test-resource-tracker --> tests-unit-objects-test-pci-device
  tests-unit-compute-test-resource-tracker --> tests-unit-utils
  tests-unit-compute-test-resource-tracker --> utils
  tests-unit-compute-test-resource-tracker --> virt-driver
  tests-unit-compute-test-rpcapi --> compute-rpcapi
  tests-unit-compute-test-rpcapi --> exception
  tests-unit-compute-test-rpcapi --> objects-block-device
  tests-unit-compute-test-rpcapi --> objects-init
  tests-unit-compute-test-rpcapi --> objects-migration
  tests-unit-compute-test-rpcapi --> objects-service
  tests-unit-compute-test-rpcapi --> tests-unit-fake-block-device
  tests-unit-compute-test-rpcapi --> tests-unit-fake-flavor
  tests-unit-compute-test-rpcapi --> tests-unit-fake-instance
  tests-unit-compute-test-rpcapi --> tests-unit-fake-request-spec
  tests-unit-compute-test-shelve --> compute-api
  tests-unit-compute-test-shelve --> compute-claims
  tests-unit-compute-test-shelve --> compute-instance-actions
  tests-unit-compute-test-shelve --> compute-power-state
  tests-unit-compute-test-shelve --> compute-task-states
  tests-unit-compute-test-shelve --> compute-utils
  tests-unit-compute-test-shelve --> compute-vm-states
  tests-unit-compute-test-shelve --> conf-init
  tests-unit-compute-test-shelve --> db-main-api
  tests-unit-compute-test-shelve --> exception
  tests-unit-compute-test-shelve --> network-neutron
  tests-unit-compute-test-shelve --> objects-init
  tests-unit-compute-test-shelve --> tests-fixtures-init
  tests-unit-compute-test-shelve --> tests-unit-compute-test-compute
  tests-unit-compute-test-stats --> compute-stats
  tests-unit-compute-test-stats --> compute-task-states
  tests-unit-compute-test-stats --> compute-vm-states
  tests-unit-compute-test-stats --> tests-unit-fake-instance
  tests-unit-compute-test-utils --> accelerator-cyborg
  tests-unit-compute-test-utils --> compute-manager
  tests-unit-compute-test-utils --> compute-power-state
  tests-unit-compute-test-utils --> compute-task-states
  tests-unit-compute-test-utils --> compute-utils
  tests-unit-compute-test-utils --> compute-vm-states
  tests-unit-compute-test-utils --> conf-init
  tests-unit-compute-test-utils --> exception
  tests-unit-compute-test-utils --> image-glance
  tests-unit-compute-test-utils --> network-model
  tests-unit-compute-test-utils --> notifications-objects-base
  tests-unit-compute-test-utils --> objects-base
  tests-unit-compute-test-utils --> objects-block-device
  tests-unit-compute-test-utils --> objects-fields
  tests-unit-compute-test-utils --> objects-init
  tests-unit-compute-test-utils --> scheduler-client-report
  tests-unit-compute-test-utils --> tests-fixtures-init
  tests-unit-compute-test-utils --> tests-unit-fake-block-device
  tests-unit-compute-test-utils --> tests-unit-fake-crypto
  tests-unit-compute-test-utils --> tests-unit-fake-instance
  tests-unit-compute-test-utils --> tests-unit-fake-network
  tests-unit-compute-test-utils --> tests-unit-fake-server-actions
  tests-unit-compute-test-utils --> tests-unit-objects-test-flavor
  tests-unit-compute-test-utils --> volume-cinder
  tests-unit-compute-test-virtapi --> compute-manager
  tests-unit-compute-test-virtapi --> exception
  tests-unit-compute-test-virtapi --> objects-init
  tests-unit-compute-test-virtapi --> scheduler-client-report
  tests-unit-compute-test-virtapi --> virt-fake
  tests-unit-compute-test-virtapi --> virt-virtapi
  tests-unit-conductor-tasks-test-base --> conductor-tasks-base
  tests-unit-conductor-tasks-test-cross-cell-migrate --> compute-instance-actions
  tests-unit-conductor-tasks-test-cross-cell-migrate --> compute-power-state
  tests-unit-conductor-tasks-test-cross-cell-migrate --> compute-task-states
  tests-unit-conductor-tasks-test-cross-cell-migrate --> compute-utils
  tests-unit-conductor-tasks-test-cross-cell-migrate --> compute-vm-states
  tests-unit-conductor-tasks-test-cross-cell-migrate --> conductor-tasks-cross-cell-migrate
  tests-unit-conductor-tasks-test-cross-cell-migrate --> exception
  tests-unit-conductor-tasks-test-cross-cell-migrate --> network-model
  tests-unit-conductor-tasks-test-cross-cell-migrate --> objects-base
  tests-unit-conductor-tasks-test-cross-cell-migrate --> objects-fields
  tests-unit-conductor-tasks-test-cross-cell-migrate --> objects-init
  tests-unit-conductor-tasks-test-cross-cell-migrate --> objects-instance
  tests-unit-conductor-tasks-test-cross-cell-migrate --> tests-unit-db-main-test-api
  tests-unit-conductor-tasks-test-cross-cell-migrate --> tests-unit-fake-block-device
  tests-unit-conductor-tasks-test-cross-cell-migrate --> tests-unit-fake-instance
  tests-unit-conductor-tasks-test-cross-cell-migrate --> tests-unit-objects-test-compute-node
  tests-unit-conductor-tasks-test-cross-cell-migrate --> tests-unit-objects-test-instance-device-metadata
  tests-unit-conductor-tasks-test-cross-cell-migrate --> tests-unit-objects-test-instance-numa
  tests-unit-conductor-tasks-test-cross-cell-migrate --> tests-unit-objects-test-instance-pci-requests
  tests-unit-conductor-tasks-test-cross-cell-migrate --> tests-unit-objects-test-keypair
  tests-unit-conductor-tasks-test-cross-cell-migrate --> tests-unit-objects-test-migration
  tests-unit-conductor-tasks-test-cross-cell-migrate --> tests-unit-objects-test-pci-device
  tests-unit-conductor-tasks-test-cross-cell-migrate --> tests-unit-objects-test-service
  tests-unit-conductor-tasks-test-cross-cell-migrate --> tests-unit-objects-test-vcpu-model
  tests-unit-conductor-tasks-test-live-migrate --> compute-power-state
  tests-unit-conductor-tasks-test-live-migrate --> compute-rpcapi
  tests-unit-conductor-tasks-test-live-migrate --> compute-vm-states
  tests-unit-conductor-tasks-test-live-migrate --> conductor-tasks-live-migrate
  tests-unit-conductor-tasks-test-live-migrate --> exception
  tests-unit-conductor-tasks-test-live-migrate --> objects-init
  tests-unit-conductor-tasks-test-live-migrate --> scheduler-client-query
  tests-unit-conductor-tasks-test-live-migrate --> scheduler-client-report
  tests-unit-conductor-tasks-test-live-migrate --> scheduler-utils
  tests-unit-conductor-tasks-test-live-migrate --> servicegroup-init
  tests-unit-conductor-tasks-test-live-migrate --> tests-unit-fake-instance
  tests-unit-conductor-tasks-test-migrate --> compute-rpcapi
  tests-unit-conductor-tasks-test-migrate --> conductor-tasks-migrate
  tests-unit-conductor-tasks-test-migrate --> exception
  tests-unit-conductor-tasks-test-migrate --> objects-init
  tests-unit-conductor-tasks-test-migrate --> scheduler-client-query
  tests-unit-conductor-tasks-test-migrate --> scheduler-client-report
  tests-unit-conductor-tasks-test-migrate --> scheduler-utils
  tests-unit-conductor-tasks-test-migrate --> tests-unit-conductor-test-conductor
  tests-unit-conductor-tasks-test-migrate --> tests-unit-fake-flavor
  tests-unit-conductor-tasks-test-migrate --> tests-unit-fake-instance
  tests-unit-conductor-test-conductor --> accelerator-cyborg
  tests-unit-conductor-test-conductor --> compute-flavors
  tests-unit-conductor-test-conductor --> compute-rpcapi
  tests-unit-conductor-test-conductor --> compute-task-states
  tests-unit-conductor-test-conductor --> compute-utils
  tests-unit-conductor-test-conductor --> compute-vm-states
  tests-unit-conductor-test-conductor --> conductor-api
  tests-unit-conductor-test-conductor --> conductor-manager
  tests-unit-conductor-test-conductor --> conductor-rpcapi
  tests-unit-conductor-test-conductor --> conductor-tasks-live-migrate
  tests-unit-conductor-test-conductor --> conductor-tasks-migrate
  tests-unit-conductor-test-conductor --> conf-init
  tests-unit-conductor-test-conductor --> db-api-api
  tests-unit-conductor-test-conductor --> db-api-models
  tests-unit-conductor-test-conductor --> db-main-api
  tests-unit-conductor-test-conductor --> exception
  tests-unit-conductor-test-conductor --> image-glance
  tests-unit-conductor-test-conductor --> limit-placement
  tests-unit-conductor-test-conductor --> objects-base
  tests-unit-conductor-test-conductor --> objects-block-device
  tests-unit-conductor-test-conductor --> objects-fields
  tests-unit-conductor-test-conductor --> objects-init
  tests-unit-conductor-test-conductor --> objects-request-spec
  tests-unit-conductor-test-conductor --> scheduler-client-query
  tests-unit-conductor-test-conductor --> scheduler-client-report
  tests-unit-conductor-test-conductor --> scheduler-utils
  tests-unit-conductor-test-conductor --> tests-fixtures-cyborg
  tests-unit-conductor-test-conductor --> tests-fixtures-init
  tests-unit-conductor-test-conductor --> tests-unit-api-openstack-fakes
  tests-unit-conductor-test-conductor --> tests-unit-compute-test-compute
  tests-unit-conductor-test-conductor --> tests-unit-fake-block-device
  tests-unit-conductor-test-conductor --> tests-unit-fake-build-request
  tests-unit-conductor-test-conductor --> tests-unit-fake-instance
  tests-unit-conductor-test-conductor --> tests-unit-fake-request-spec
  tests-unit-conductor-test-conductor --> tests-unit-fake-server-actions
  tests-unit-conductor-test-conductor --> tests-unit-fake-volume
  tests-unit-conductor-test-conductor --> tests-unit-utils
  tests-unit-conductor-test-conductor --> utils
  tests-unit-conductor-test-conductor --> volume-cinder
  tests-unit-conf-test-base --> conf-base
  tests-unit-conf-test-base --> conf-init
  tests-unit-conf-test-devices --> conf-init
  tests-unit-conf-test-neutron --> conf-init
  tests-unit-console-rfb-test-auth --> console-rfb-auth
  tests-unit-console-rfb-test-auth --> console-rfb-authnone
  tests-unit-console-rfb-test-auth --> console-rfb-auths
  tests-unit-console-rfb-test-auth --> exception
  tests-unit-console-rfb-test-authnone --> console-rfb-auth
  tests-unit-console-rfb-test-authnone --> console-rfb-authnone
  tests-unit-console-rfb-test-authvencrypt --> console-rfb-auth
  tests-unit-console-rfb-test-authvencrypt --> console-rfb-authvencrypt
  tests-unit-console-rfb-test-authvencrypt --> exception
  tests-unit-console-securityproxy-test-rfb --> console-rfb-auth
  tests-unit-console-securityproxy-test-rfb --> console-rfb-authnone
  tests-unit-console-securityproxy-test-rfb --> console-securityproxy-rfb
  tests-unit-console-securityproxy-test-rfb --> exception
  tests-unit-console-test-serial --> console-serial
  tests-unit-console-test-serial --> exception
  tests-unit-console-test-type --> console-type
  tests-unit-console-test-websocketproxy --> conf-init
  tests-unit-console-test-websocketproxy --> console-securityproxy-base
  tests-unit-console-test-websocketproxy --> console-websocketproxy
  tests-unit-console-test-websocketproxy --> exception
  tests-unit-console-test-websocketproxy --> objects-init
  tests-unit-console-test-websocketproxy --> tests-unit-fake-console-auth-token
  tests-unit-console-test-websocketproxy --> utils
  tests-unit-db-api-test-api --> db-api-api
  tests-unit-db-api-test-migrations --> db-api-models
  tests-unit-db-api-test-migrations --> db-migration
  tests-unit-db-main-test-api --> compute-rpcapi
  tests-unit-db-main-test-api --> compute-task-states
  tests-unit-db-main-test-api --> compute-vm-states
  tests-unit-db-main-test-api --> conf-init
  tests-unit-db-main-test-api --> db-main-api
  tests-unit-db-main-test-api --> db-main-models
  tests-unit-db-main-test-api --> db-types
  tests-unit-db-main-test-api --> db-utils
  tests-unit-db-main-test-api --> exception
  tests-unit-db-main-test-api --> objects-fields
  tests-unit-db-main-test-api --> tests-fixtures-init
  tests-unit-db-main-test-api --> tests-unit-fake-console-auth-token
  tests-unit-db-main-test-api --> utils
  tests-unit-db-main-test-migrations --> db-main-models
  tests-unit-db-main-test-migrations --> db-migration
  tests-unit-db-main-test-migrations --> tests-fixtures-init
  tests-unit-db-test-migration --> db-api-api
  tests-unit-db-test-migration --> db-main-api
  tests-unit-db-test-migration --> db-migration
  tests-unit-db-test-migration --> exception
  tests-unit-db-test-models --> db-api-models
  tests-unit-db-test-models --> db-main-models
  tests-unit-db-test-utils --> db-utils
  tests-unit-db-test-utils --> exception
  tests-unit-fake-block-device --> objects-init
  tests-unit-fake-build-request --> objects-fields
  tests-unit-fake-build-request --> objects-init
  tests-unit-fake-build-request --> tests-unit-fake-block-device
  tests-unit-fake-build-request --> tests-unit-fake-instance
  tests-unit-fake-console-auth-token --> utils
  tests-unit-fake-diagnostics --> objects-init
  tests-unit-fake-flavor --> objects-fields
  tests-unit-fake-flavor --> objects-init
  tests-unit-fake-hosts --> tests-unit-objects-test-service
  tests-unit-fake-instance --> objects-fields
  tests-unit-fake-instance --> objects-init
  tests-unit-fake-loadables-fake-loadable1 --> tests-unit-fake-loadables-init
  tests-unit-fake-loadables-fake-loadable2 --> tests-unit-fake-loadables-init
  tests-unit-fake-network --> compute-manager
  tests-unit-fake-network --> db-main-api
  tests-unit-fake-network --> network-model
  tests-unit-fake-network --> objects-base
  tests-unit-fake-network --> objects-init
  tests-unit-fake-network --> tests-unit-objects-test-instance-info-cache
  tests-unit-fake-network --> tests-unit-utils
  tests-unit-fake-network-cache-model --> network-model
  tests-unit-fake-pci-device-pools --> objects-pci-device-pool
  tests-unit-fake-processutils --> utils
  tests-unit-fake-request-spec --> objects-init
  tests-unit-fake-request-spec --> tests-unit-fake-flavor
  tests-unit-fake-volume --> conf-init
  tests-unit-fake-volume --> exception
  tests-unit-fixtures-test-libvirt --> objects-fields
  tests-unit-fixtures-test-libvirt --> tests-fixtures-libvirt
  tests-unit-fixtures-test-libvirt --> virt-libvirt-config
  tests-unit-fixtures-test-notifications --> tests-fixtures-init
  tests-unit-image-fake --> conf-init
  tests-unit-image-fake --> objects-init
  tests-unit-image-test-glance --> conf-init
  tests-unit-image-test-glance --> exception
  tests-unit-image-test-glance --> image-glance
  tests-unit-image-test-glance --> objects-init
  tests-unit-image-test-glance --> service-auth
  tests-unit-image-test-glance --> storage-rbd-utils
  tests-unit-init --> objects-init
  tests-unit-keymgr-test-conf-key-mgr --> conf-init
  tests-unit-keymgr-test-conf-key-mgr --> exception
  tests-unit-keymgr-test-conf-key-mgr --> keymgr-conf-key-mgr
  tests-unit-limit-test-local --> exception
  tests-unit-limit-test-local --> limit-local
  tests-unit-limit-test-local --> limit-utils
  tests-unit-limit-test-local --> objects-init
  tests-unit-limit-test-local --> tests-fixtures-init
  tests-unit-limit-test-placement --> exception
  tests-unit-limit-test-placement --> limit-placement
  tests-unit-limit-test-placement --> limit-utils
  tests-unit-limit-test-placement --> objects-init
  tests-unit-limit-test-placement --> scheduler-client-report
  tests-unit-network-test-network-info --> exception
  tests-unit-network-test-network-info --> network-model
  tests-unit-network-test-network-info --> tests-unit-fake-network-cache-model
  tests-unit-network-test-network-info --> virt-netutils
  tests-unit-network-test-neutron --> db-main-api
  tests-unit-network-test-neutron --> exception
  tests-unit-network-test-neutron --> network-constants
  tests-unit-network-test-neutron --> network-model
  tests-unit-network-test-neutron --> network-neutron
  tests-unit-network-test-neutron --> objects-fields
  tests-unit-network-test-neutron --> objects-init
  tests-unit-network-test-neutron --> objects-network-request
  tests-unit-network-test-neutron --> objects-virtual-interface
  tests-unit-network-test-neutron --> pci-request
  tests-unit-network-test-neutron --> pci-utils
  tests-unit-network-test-neutron --> pci-whitelist
  tests-unit-network-test-neutron --> service-auth
  tests-unit-network-test-neutron --> tests-unit-fake-instance
  tests-unit-network-test-os-vif-util --> exception
  tests-unit-network-test-os-vif-util --> network-model
  tests-unit-network-test-os-vif-util --> network-os-vif-util
  tests-unit-network-test-os-vif-util --> objects-init
  tests-unit-network-test-security-group --> exception
  tests-unit-network-test-security-group --> network-security-group-api
  tests-unit-network-test-security-group --> objects-init
  tests-unit-notifications-objects-test-exception --> notifications-objects-exception
  tests-unit-notifications-objects-test-flavor --> notifications-objects-flavor
  tests-unit-notifications-objects-test-flavor --> objects-fields
  tests-unit-notifications-objects-test-flavor --> objects-init
  tests-unit-notifications-objects-test-flavor --> tests-unit-objects-test-flavor
  tests-unit-notifications-objects-test-instance --> network-model
  tests-unit-notifications-objects-test-instance --> notifications-base
  tests-unit-notifications-objects-test-instance --> notifications-objects-instance
  tests-unit-notifications-objects-test-instance --> objects-init
  tests-unit-notifications-objects-test-instance --> tests-unit-fake-instance
  tests-unit-notifications-objects-test-notification --> exception
  tests-unit-notifications-objects-test-notification --> notifications-objects-base
  tests-unit-notifications-objects-test-notification --> objects-base
  tests-unit-notifications-objects-test-notification --> objects-fields
  tests-unit-notifications-objects-test-notification --> objects-init
  tests-unit-notifications-objects-test-notification --> tests-unit-objects-test-objects
  tests-unit-notifications-objects-test-service --> notifications-objects-service
  tests-unit-notifications-objects-test-service --> objects-fields
  tests-unit-notifications-objects-test-service --> objects-init
  tests-unit-notifications-objects-test-service --> tests-unit-objects-test-service
  tests-unit-notifications-test-base --> notifications-base
  tests-unit-notifications-test-base --> tests-unit-fake-instance
  tests-unit-notifications-test-base --> utils
  tests-unit-objects-test-aggregate --> exception
  tests-unit-objects-test-aggregate --> objects-aggregate
  tests-unit-objects-test-aggregate --> tests-unit-objects-test-objects
  tests-unit-objects-test-block-device --> db-main-api
  tests-unit-objects-test-block-device --> db-main-models
  tests-unit-objects-test-block-device --> exception
  tests-unit-objects-test-block-device --> objects-block-device
  tests-unit-objects-test-block-device --> objects-init
  tests-unit-objects-test-block-device --> tests-unit-fake-block-device
  tests-unit-objects-test-block-device --> tests-unit-fake-instance
  tests-unit-objects-test-block-device --> tests-unit-objects-test-objects
  tests-unit-objects-test-build-request --> exception
  tests-unit-objects-test-build-request --> objects-base
  tests-unit-objects-test-build-request --> objects-build-request
  tests-unit-objects-test-build-request --> objects-init
  tests-unit-objects-test-build-request --> tests-unit-fake-build-request
  tests-unit-objects-test-build-request --> tests-unit-fake-instance
  tests-unit-objects-test-build-request --> tests-unit-objects-test-objects
  tests-unit-objects-test-cell-mapping --> exception
  tests-unit-objects-test-cell-mapping --> objects-cell-mapping
  tests-unit-objects-test-cell-mapping --> objects-init
  tests-unit-objects-test-cell-mapping --> tests-unit-objects-test-objects
  tests-unit-objects-test-compute-node --> conf-init
  tests-unit-objects-test-compute-node --> db-main-api
  tests-unit-objects-test-compute-node --> exception
  tests-unit-objects-test-compute-node --> objects-base
  tests-unit-objects-test-compute-node --> objects-compute-node
  tests-unit-objects-test-compute-node --> objects-hv-spec
  tests-unit-objects-test-compute-node --> objects-init
  tests-unit-objects-test-compute-node --> objects-service
  tests-unit-objects-test-compute-node --> tests-unit-fake-pci-device-pools
  tests-unit-objects-test-compute-node --> tests-unit-objects-test-objects
  tests-unit-objects-test-console-auth-token --> exception
  tests-unit-objects-test-console-auth-token --> objects-console-auth-token
  tests-unit-objects-test-console-auth-token --> tests-unit-fake-console-auth-token
  tests-unit-objects-test-console-auth-token --> tests-unit-objects-test-objects
  tests-unit-objects-test-diagnostics --> objects-diagnostics
  tests-unit-objects-test-ec2 --> db-main-api
  tests-unit-objects-test-ec2 --> objects-ec2
  tests-unit-objects-test-ec2 --> objects-init
  tests-unit-objects-test-ec2 --> tests-unit-objects-test-objects
  tests-unit-objects-test-external-event --> objects-external-event
  tests-unit-objects-test-external-event --> tests-unit-objects-test-objects
  tests-unit-objects-test-fields --> exception
  tests-unit-objects-test-fields --> network-model
  tests-unit-objects-test-fields --> objects-fields
  tests-unit-objects-test-fields --> tests-unit-fake-instance
  tests-unit-objects-test-fields --> utils
  tests-unit-objects-test-flavor --> db-api-api
  tests-unit-objects-test-flavor --> db-api-models
  tests-unit-objects-test-flavor --> exception
  tests-unit-objects-test-flavor --> objects-fields
  tests-unit-objects-test-flavor --> objects-flavor
  tests-unit-objects-test-flavor --> objects-init
  tests-unit-objects-test-flavor --> tests-unit-objects-test-objects
  tests-unit-objects-test-host-mapping --> exception
  tests-unit-objects-test-host-mapping --> objects-host-mapping
  tests-unit-objects-test-host-mapping --> objects-init
  tests-unit-objects-test-host-mapping --> tests-unit-objects-test-cell-mapping
  tests-unit-objects-test-host-mapping --> tests-unit-objects-test-objects
  tests-unit-objects-test-hv-spec --> objects-fields
  tests-unit-objects-test-hv-spec --> objects-init
  tests-unit-objects-test-hv-spec --> tests-unit-objects-test-objects
  tests-unit-objects-test-image-meta --> exception
  tests-unit-objects-test-image-meta --> network-model
  tests-unit-objects-test-image-meta --> objects-fields
  tests-unit-objects-test-image-meta --> objects-init
  tests-unit-objects-test-instance --> compute-task-states
  tests-unit-objects-test-instance --> compute-vm-states
  tests-unit-objects-test-instance --> db-main-api
  tests-unit-objects-test-instance --> db-main-models
  tests-unit-objects-test-instance --> exception
  tests-unit-objects-test-instance --> network-model
  tests-unit-objects-test-instance --> notifications-init
  tests-unit-objects-test-instance --> objects-fields
  tests-unit-objects-test-instance --> objects-init
  tests-unit-objects-test-instance --> objects-instance
  tests-unit-objects-test-instance --> objects-instance-info-cache
  tests-unit-objects-test-instance --> objects-pci-device
  tests-unit-objects-test-instance --> tests-unit-fake-instance
  tests-unit-objects-test-instance --> tests-unit-objects-test-instance-device-metadata
  tests-unit-objects-test-instance --> tests-unit-objects-test-instance-fault
  tests-unit-objects-test-instance --> tests-unit-objects-test-instance-info-cache
  tests-unit-objects-test-instance --> tests-unit-objects-test-instance-numa
  tests-unit-objects-test-instance --> tests-unit-objects-test-instance-pci-requests
  tests-unit-objects-test-instance --> tests-unit-objects-test-migration-context
  tests-unit-objects-test-instance --> tests-unit-objects-test-objects
  tests-unit-objects-test-instance --> tests-unit-objects-test-vcpu-model
  tests-unit-objects-test-instance --> utils
  tests-unit-objects-test-instance-action --> db-main-api
  tests-unit-objects-test-instance-action --> exception
  tests-unit-objects-test-instance-action --> objects-init
  tests-unit-objects-test-instance-action --> objects-instance-action
  tests-unit-objects-test-instance-action --> tests-unit-objects-test-objects
  tests-unit-objects-test-instance-device-metadata --> objects-init
  tests-unit-objects-test-instance-device-metadata --> tests-unit-objects-test-objects
  tests-unit-objects-test-instance-fault --> db-main-api
  tests-unit-objects-test-instance-fault --> exception
  tests-unit-objects-test-instance-fault --> objects-instance-fault
  tests-unit-objects-test-instance-fault --> tests-unit-objects-test-objects
  tests-unit-objects-test-instance-group --> exception
  tests-unit-objects-test-instance-group --> objects-init
  tests-unit-objects-test-instance-group --> tests-unit-objects-test-objects
  tests-unit-objects-test-instance-group --> tests-unit-utils
  tests-unit-objects-test-instance-info-cache --> db-main-api
  tests-unit-objects-test-instance-info-cache --> exception
  tests-unit-objects-test-instance-info-cache --> network-model
  tests-unit-objects-test-instance-info-cache --> objects-instance-info-cache
  tests-unit-objects-test-instance-info-cache --> tests-unit-objects-test-objects
  tests-unit-objects-test-instance-mapping --> exception
  tests-unit-objects-test-instance-mapping --> objects-init
  tests-unit-objects-test-instance-mapping --> objects-instance-mapping
  tests-unit-objects-test-instance-mapping --> tests-unit-objects-test-cell-mapping
  tests-unit-objects-test-instance-mapping --> tests-unit-objects-test-objects
  tests-unit-objects-test-instance-numa --> exception
  tests-unit-objects-test-instance-numa --> objects-fields
  tests-unit-objects-test-instance-numa --> objects-init
  tests-unit-objects-test-instance-numa --> tests-unit-objects-test-objects
  tests-unit-objects-test-instance-pci-requests --> objects-fields
  tests-unit-objects-test-instance-pci-requests --> objects-init
  tests-unit-objects-test-instance-pci-requests --> tests-unit-objects-test-objects
  tests-unit-objects-test-keypair --> exception
  tests-unit-objects-test-keypair --> objects-keypair
  tests-unit-objects-test-keypair --> tests-unit-objects-test-objects
  tests-unit-objects-test-migrate-data --> exception
  tests-unit-objects-test-migrate-data --> network-model
  tests-unit-objects-test-migrate-data --> objects-init
  tests-unit-objects-test-migrate-data --> objects-migrate-data
  tests-unit-objects-test-migrate-data --> tests-unit-objects-test-objects
  tests-unit-objects-test-migration --> db-main-api
  tests-unit-objects-test-migration --> exception
  tests-unit-objects-test-migration --> objects-init
  tests-unit-objects-test-migration --> objects-migration
  tests-unit-objects-test-migration --> tests-unit-fake-instance
  tests-unit-objects-test-migration --> tests-unit-objects-test-objects
  tests-unit-objects-test-migration-context --> exception
  tests-unit-objects-test-migration-context --> objects-init
  tests-unit-objects-test-migration-context --> tests-unit-objects-test-instance-numa
  tests-unit-objects-test-migration-context --> tests-unit-objects-test-objects
  tests-unit-objects-test-monitor-metric --> objects-fields
  tests-unit-objects-test-monitor-metric --> objects-init
  tests-unit-objects-test-monitor-metric --> tests-unit-objects-test-objects
  tests-unit-objects-test-monitor-metric --> utils
  tests-unit-objects-test-network-request --> objects-init
  tests-unit-objects-test-network-request --> objects-network-request
  tests-unit-objects-test-network-request --> tests-unit-objects-test-objects
  tests-unit-objects-test-numa --> exception
  tests-unit-objects-test-numa --> objects-init
  tests-unit-objects-test-numa --> tests-unit-objects-test-objects
  tests-unit-objects-test-objects --> exception
  tests-unit-objects-test-objects --> objects-base
  tests-unit-objects-test-objects --> objects-fields
  tests-unit-objects-test-objects --> objects-init
  tests-unit-objects-test-objects --> objects-virt-device-metadata
  tests-unit-objects-test-objects --> tests-fixtures-init
  tests-unit-objects-test-objects --> utils
  tests-unit-objects-test-pci-device --> db-main-api
  tests-unit-objects-test-pci-device --> db-main-models
  tests-unit-objects-test-pci-device --> exception
  tests-unit-objects-test-pci-device --> objects-fields
  tests-unit-objects-test-pci-device --> objects-init
  tests-unit-objects-test-pci-device --> objects-instance
  tests-unit-objects-test-pci-device --> objects-pci-device
  tests-unit-objects-test-pci-device --> tests-unit-objects-test-objects
  tests-unit-objects-test-pci-device-pool --> objects-init
  tests-unit-objects-test-pci-device-pool --> objects-pci-device-pool
  tests-unit-objects-test-pci-device-pool --> tests-unit-fake-pci-device-pools
  tests-unit-objects-test-pci-device-pool --> tests-unit-objects-test-objects
  tests-unit-objects-test-quotas --> db-main-api
  tests-unit-objects-test-quotas --> exception
  tests-unit-objects-test-quotas --> objects-quotas
  tests-unit-objects-test-quotas --> tests-unit-fake-instance
  tests-unit-objects-test-quotas --> tests-unit-objects-test-objects
  tests-unit-objects-test-request-spec --> exception
  tests-unit-objects-test-request-spec --> network-model
  tests-unit-objects-test-request-spec --> objects-base
  tests-unit-objects-test-request-spec --> objects-init
  tests-unit-objects-test-request-spec --> objects-request-spec
  tests-unit-objects-test-request-spec --> tests-unit-api-openstack-fakes
  tests-unit-objects-test-request-spec --> tests-unit-fake-flavor
  tests-unit-objects-test-request-spec --> tests-unit-fake-instance
  tests-unit-objects-test-request-spec --> tests-unit-fake-network-cache-model
  tests-unit-objects-test-request-spec --> tests-unit-fake-request-spec
  tests-unit-objects-test-request-spec --> tests-unit-objects-test-objects
  tests-unit-objects-test-resource --> objects-resource
  tests-unit-objects-test-resource --> tests-unit-objects-test-objects
  tests-unit-objects-test-security-group --> db-main-api
  tests-unit-objects-test-security-group --> objects-instance
  tests-unit-objects-test-security-group --> objects-security-group
  tests-unit-objects-test-security-group --> tests-unit-objects-test-objects
  tests-unit-objects-test-selection --> conf-init
  tests-unit-objects-test-selection --> objects-init
  tests-unit-objects-test-selection --> objects-numa
  tests-unit-objects-test-selection --> scheduler-host-manager
  tests-unit-objects-test-selection --> tests-unit-objects-test-objects
  tests-unit-objects-test-service --> compute-manager
  tests-unit-objects-test-service --> db-main-api
  tests-unit-objects-test-service --> exception
  tests-unit-objects-test-service --> objects-aggregate
  tests-unit-objects-test-service --> objects-init
  tests-unit-objects-test-service --> objects-service
  tests-unit-objects-test-service --> tests-fixtures-init
  tests-unit-objects-test-service --> tests-unit-objects-test-compute-node
  tests-unit-objects-test-service --> tests-unit-objects-test-objects
  tests-unit-objects-test-share-mapping --> db-main-api
  tests-unit-objects-test-share-mapping --> db-main-models
  tests-unit-objects-test-share-mapping --> exception
  tests-unit-objects-test-share-mapping --> objects-fields
  tests-unit-objects-test-share-mapping --> objects-init
  tests-unit-objects-test-share-mapping --> objects-share-mapping
  tests-unit-objects-test-share-mapping --> tests-unit-objects-test-objects
  tests-unit-objects-test-tag --> objects-tag
  tests-unit-objects-test-tag --> tests-unit-objects-test-objects
  tests-unit-objects-test-task-log --> objects-init
  tests-unit-objects-test-task-log --> tests-unit-objects-test-objects
  tests-unit-objects-test-task-log --> utils
  tests-unit-objects-test-trusted-certs --> objects-trusted-certs
  tests-unit-objects-test-trusted-certs --> tests-unit-objects-test-objects
  tests-unit-objects-test-vcpu-model --> objects-fields
  tests-unit-objects-test-vcpu-model --> objects-init
  tests-unit-objects-test-vcpu-model --> tests-unit-objects-test-objects
  tests-unit-objects-test-virt-cpu-topology --> objects-init
  tests-unit-objects-test-virt-cpu-topology --> tests-unit-objects-test-objects
  tests-unit-objects-test-virtual-interface --> db-main-api
  tests-unit-objects-test-virtual-interface --> objects-virtual-interface
  tests-unit-objects-test-virtual-interface --> tests-unit-objects-test-objects
  tests-unit-objects-test-volume-usage --> objects-init
  tests-unit-objects-test-volume-usage --> tests-unit-objects-test-objects
  tests-unit-pci-fakes --> pci-whitelist
  tests-unit-pci-test-devspec --> exception
  tests-unit-pci-test-devspec --> objects-init
  tests-unit-pci-test-devspec --> pci-devspec
  tests-unit-pci-test-devspec --> pci-request
  tests-unit-pci-test-manager --> compute-vm-states
  tests-unit-pci-test-manager --> exception
  tests-unit-pci-test-manager --> objects-fields
  tests-unit-pci-test-manager --> objects-init
  tests-unit-pci-test-manager --> pci-manager
  tests-unit-pci-test-manager --> tests-unit-pci-fakes
  tests-unit-pci-test-request --> exception
  tests-unit-pci-test-request --> network-model
  tests-unit-pci-test-request --> objects-fields
  tests-unit-pci-test-request --> objects-init
  tests-unit-pci-test-request --> pci-request
  tests-unit-pci-test-request --> tests-unit-api-openstack-fakes
  tests-unit-pci-test-stats --> exception
  tests-unit-pci-test-stats --> objects-fields
  tests-unit-pci-test-stats --> objects-init
  tests-unit-pci-test-stats --> pci-request
  tests-unit-pci-test-stats --> pci-stats
  tests-unit-pci-test-stats --> pci-whitelist
  tests-unit-pci-test-stats --> tests-unit-pci-fakes
  tests-unit-pci-test-utils --> exception
  tests-unit-pci-test-utils --> pci-utils
  tests-unit-pci-test-whitelist --> exception
  tests-unit-pci-test-whitelist --> pci-whitelist
  tests-unit-policies-base --> exception
  tests-unit-policies-base --> tests-fixtures-init
  tests-unit-policies-test-admin-actions --> api-openstack-compute-admin-actions
  tests-unit-policies-test-admin-actions --> compute-vm-states
  tests-unit-policies-test-admin-actions --> tests-unit-api-openstack-fakes
  tests-unit-policies-test-admin-actions --> tests-unit-fake-instance
  tests-unit-policies-test-admin-actions --> tests-unit-policies-base
  tests-unit-policies-test-admin-password --> api-openstack-compute-admin-password
  tests-unit-policies-test-admin-password --> compute-vm-states
  tests-unit-policies-test-admin-password --> exception
  tests-unit-policies-test-admin-password --> policies-admin-password
  tests-unit-policies-test-admin-password --> tests-unit-api-openstack-fakes
  tests-unit-policies-test-admin-password --> tests-unit-fake-instance
  tests-unit-policies-test-admin-password --> tests-unit-policies-base
  tests-unit-policies-test-aggregates --> api-openstack-compute-aggregates
  tests-unit-policies-test-aggregates --> objects-init
  tests-unit-policies-test-aggregates --> tests-unit-api-openstack-fakes
  tests-unit-policies-test-aggregates --> tests-unit-policies-base
  tests-unit-policies-test-assisted-volume-snapshots --> api-openstack-compute-assisted-volume-snapshots
  tests-unit-policies-test-assisted-volume-snapshots --> tests-unit-api-openstack-fakes
  tests-unit-policies-test-assisted-volume-snapshots --> tests-unit-policies-base
  tests-unit-policies-test-attach-interfaces --> api-openstack-compute-attach-interfaces
  tests-unit-policies-test-attach-interfaces --> compute-vm-states
  tests-unit-policies-test-attach-interfaces --> exception
  tests-unit-policies-test-attach-interfaces --> policies-attach-interfaces
  tests-unit-policies-test-attach-interfaces --> policies-base
  tests-unit-policies-test-attach-interfaces --> tests-fixtures-init
  tests-unit-policies-test-attach-interfaces --> tests-unit-api-openstack-fakes
  tests-unit-policies-test-attach-interfaces --> tests-unit-fake-instance
  tests-unit-policies-test-attach-interfaces --> tests-unit-policies-base
  tests-unit-policies-test-availability-zone --> api-openstack-compute-availability-zone
  tests-unit-policies-test-availability-zone --> tests-unit-api-openstack-fakes
  tests-unit-policies-test-availability-zone --> tests-unit-policies-base
  tests-unit-policies-test-baremetal-nodes --> api-openstack-compute-baremetal-nodes
  tests-unit-policies-test-baremetal-nodes --> tests-unit-api-openstack-fakes
  tests-unit-policies-test-baremetal-nodes --> tests-unit-policies-base
  tests-unit-policies-test-baremetal-nodes --> tests-unit-virt-ironic-utils
  tests-unit-policies-test-console-auth-tokens --> api-openstack-compute-console-auth-tokens
  tests-unit-policies-test-console-auth-tokens --> objects-init
  tests-unit-policies-test-console-auth-tokens --> tests-unit-api-openstack-fakes
  tests-unit-policies-test-console-auth-tokens --> tests-unit-policies-base
  tests-unit-policies-test-console-output --> api-openstack-compute-console-output
  tests-unit-policies-test-console-output --> compute-vm-states
  tests-unit-policies-test-console-output --> tests-unit-api-openstack-fakes
  tests-unit-policies-test-console-output --> tests-unit-fake-instance
  tests-unit-policies-test-console-output --> tests-unit-policies-base
  tests-unit-policies-test-create-backup --> api-openstack-compute-create-backup
  tests-unit-policies-test-create-backup --> compute-vm-states
  tests-unit-policies-test-create-backup --> tests-unit-api-openstack-fakes
  tests-unit-policies-test-create-backup --> tests-unit-fake-instance
  tests-unit-policies-test-create-backup --> tests-unit-policies-base
  tests-unit-policies-test-deferred-delete --> api-openstack-compute-deferred-delete
  tests-unit-policies-test-deferred-delete --> compute-vm-states
  tests-unit-policies-test-deferred-delete --> exception
  tests-unit-policies-test-deferred-delete --> policies-base
  tests-unit-policies-test-deferred-delete --> policies-deferred-delete
  tests-unit-policies-test-deferred-delete --> tests-unit-api-openstack-fakes
  tests-unit-policies-test-deferred-delete --> tests-unit-fake-instance
  tests-unit-policies-test-deferred-delete --> tests-unit-policies-base
  tests-unit-policies-test-evacuate --> api-openstack-compute-evacuate
  tests-unit-policies-test-evacuate --> compute-vm-states
  tests-unit-policies-test-evacuate --> exception
  tests-unit-policies-test-evacuate --> tests-unit-api-openstack-fakes
  tests-unit-policies-test-evacuate --> tests-unit-fake-instance
  tests-unit-policies-test-evacuate --> tests-unit-policies-base
  tests-unit-policies-test-extensions --> api-openstack-compute-extension-info
  tests-unit-policies-test-extensions --> policies-extensions
  tests-unit-policies-test-extensions --> tests-unit-api-openstack-fakes
  tests-unit-policies-test-extensions --> tests-unit-policies-base
  tests-unit-policies-test-flavor-access --> api-openstack-compute-flavor-access
  tests-unit-policies-test-flavor-access --> policies-base
  tests-unit-policies-test-flavor-access --> policies-flavor-access
  tests-unit-policies-test-flavor-access --> tests-unit-api-openstack-fakes
  tests-unit-policies-test-flavor-access --> tests-unit-fake-flavor
  tests-unit-policies-test-flavor-access --> tests-unit-policies-base
  tests-unit-policies-test-flavor-extra-specs --> api-openstack-compute-flavors
  tests-unit-policies-test-flavor-extra-specs --> api-openstack-compute-flavors-extraspecs
  tests-unit-policies-test-flavor-extra-specs --> policies-flavor-extra-specs
  tests-unit-policies-test-flavor-extra-specs --> policies-flavor-manage
  tests-unit-policies-test-flavor-extra-specs --> tests-unit-api-openstack-fakes
  tests-unit-policies-test-flavor-extra-specs --> tests-unit-fake-flavor
  tests-unit-policies-test-flavor-extra-specs --> tests-unit-policies-base
  tests-unit-policies-test-flavor-manage --> api-openstack-compute-flavors
  tests-unit-policies-test-flavor-manage --> objects-init
  tests-unit-policies-test-flavor-manage --> policies-flavor-manage
  tests-unit-policies-test-flavor-manage --> tests-unit-api-openstack-fakes
  tests-unit-policies-test-flavor-manage --> tests-unit-policies-base
  tests-unit-policies-test-floating-ip-pools --> api-openstack-compute-floating-ip-pools
  tests-unit-policies-test-floating-ip-pools --> tests-unit-api-openstack-fakes
  tests-unit-policies-test-floating-ip-pools --> tests-unit-policies-base
  tests-unit-policies-test-floating-ips --> api-openstack-compute-floating-ips
  tests-unit-policies-test-floating-ips --> compute-vm-states
  tests-unit-policies-test-floating-ips --> network-model
  tests-unit-policies-test-floating-ips --> policies-base
  tests-unit-policies-test-floating-ips --> policies-floating-ips
  tests-unit-policies-test-floating-ips --> tests-unit-api-openstack-fakes
  tests-unit-policies-test-floating-ips --> tests-unit-fake-instance
  tests-unit-policies-test-floating-ips --> tests-unit-fake-network-cache-model
  tests-unit-policies-test-floating-ips --> tests-unit-policies-base
  tests-unit-policies-test-hosts --> api-openstack-compute-hosts
  tests-unit-policies-test-hosts --> objects-init
  tests-unit-policies-test-hosts --> policies-hosts
  tests-unit-policies-test-hosts --> tests-unit-api-openstack-fakes
  tests-unit-policies-test-hosts --> tests-unit-policies-base
  tests-unit-policies-test-hypervisors --> api-openstack-compute-hypervisors
  tests-unit-policies-test-hypervisors --> objects-init
  tests-unit-policies-test-hypervisors --> policies-hypervisors
  tests-unit-policies-test-hypervisors --> tests-unit-api-openstack-fakes
  tests-unit-policies-test-hypervisors --> tests-unit-policies-base
  tests-unit-policies-test-instance-actions --> api-openstack-api-version-request
  tests-unit-policies-test-instance-actions --> api-openstack-compute-instance-actions
  tests-unit-policies-test-instance-actions --> compute-vm-states
  tests-unit-policies-test-instance-actions --> exception
  tests-unit-policies-test-instance-actions --> policies-base
  tests-unit-policies-test-instance-actions --> policies-instance-actions
  tests-unit-policies-test-instance-actions --> tests-fixtures-init
  tests-unit-policies-test-instance-actions --> tests-unit-api-openstack-compute-test-instance-actions
  tests-unit-policies-test-instance-actions --> tests-unit-api-openstack-fakes
  tests-unit-policies-test-instance-actions --> tests-unit-fake-instance
  tests-unit-policies-test-instance-actions --> tests-unit-fake-server-actions
  tests-unit-policies-test-instance-actions --> tests-unit-policies-base
  tests-unit-policies-test-instance-usage-audit-log --> api-openstack-compute-instance-usage-audit-log
  tests-unit-policies-test-instance-usage-audit-log --> policies-base
  tests-unit-policies-test-instance-usage-audit-log --> policies-instance-usage-audit-log
  tests-unit-policies-test-instance-usage-audit-log --> tests-unit-api-openstack-fakes
  tests-unit-policies-test-instance-usage-audit-log --> tests-unit-policies-base
  tests-unit-policies-test-keypairs --> api-openstack-compute-keypairs
  tests-unit-policies-test-keypairs --> objects-init
  tests-unit-policies-test-keypairs --> policies-keypairs
  tests-unit-policies-test-keypairs --> tests-unit-api-openstack-fakes
  tests-unit-policies-test-keypairs --> tests-unit-objects-test-keypair
  tests-unit-policies-test-keypairs --> tests-unit-policies-base
  tests-unit-policies-test-limits --> api-openstack-compute-limits
  tests-unit-policies-test-limits --> conf-init
  tests-unit-policies-test-limits --> policies-base
  tests-unit-policies-test-limits --> policies-limits
  tests-unit-policies-test-limits --> tests-unit-api-openstack-fakes
  tests-unit-policies-test-limits --> tests-unit-policies-base
  tests-unit-policies-test-lock-server --> api-openstack-compute-lock-server
  tests-unit-policies-test-lock-server --> compute-vm-states
  tests-unit-policies-test-lock-server --> conf-init
  tests-unit-policies-test-lock-server --> exception
  tests-unit-policies-test-lock-server --> policies-lock-server
  tests-unit-policies-test-lock-server --> tests-unit-api-openstack-fakes
  tests-unit-policies-test-lock-server --> tests-unit-fake-instance
  tests-unit-policies-test-lock-server --> tests-unit-policies-base
  tests-unit-policies-test-migrate-server --> api-openstack-compute-migrate-server
  tests-unit-policies-test-migrate-server --> compute-vm-states
  tests-unit-policies-test-migrate-server --> policies-base
  tests-unit-policies-test-migrate-server --> policies-migrate-server
  tests-unit-policies-test-migrate-server --> tests-unit-api-openstack-fakes
  tests-unit-policies-test-migrate-server --> tests-unit-fake-instance
  tests-unit-policies-test-migrate-server --> tests-unit-policies-base
  tests-unit-policies-test-migrations --> api-openstack-compute-migrations
  tests-unit-policies-test-migrations --> conf-init
  tests-unit-policies-test-migrations --> exception
  tests-unit-policies-test-migrations --> objects-base
  tests-unit-policies-test-migrations --> objects-init
  tests-unit-policies-test-migrations --> policies-base
  tests-unit-policies-test-migrations --> policies-migrations
  tests-unit-policies-test-migrations --> tests-unit-api-openstack-fakes
  tests-unit-policies-test-migrations --> tests-unit-policies-base
  tests-unit-policies-test-multinic --> api-openstack-compute-multinic
  tests-unit-policies-test-multinic --> compute-vm-states
  tests-unit-policies-test-multinic --> policies-base
  tests-unit-policies-test-multinic --> policies-multinic
  tests-unit-policies-test-multinic --> tests-unit-api-openstack-fakes
  tests-unit-policies-test-multinic --> tests-unit-fake-instance
  tests-unit-policies-test-multinic --> tests-unit-policies-base
  tests-unit-policies-test-networks --> api-openstack-compute-networks
  tests-unit-policies-test-networks --> policies-base
  tests-unit-policies-test-networks --> policies-networks
  tests-unit-policies-test-networks --> tests-unit-api-openstack-fakes
  tests-unit-policies-test-networks --> tests-unit-policies-base
  tests-unit-policies-test-pause-server --> api-openstack-compute-pause-server
  tests-unit-policies-test-pause-server --> compute-vm-states
  tests-unit-policies-test-pause-server --> exception
  tests-unit-policies-test-pause-server --> policies-pause-server
  tests-unit-policies-test-pause-server --> tests-unit-api-openstack-fakes
  tests-unit-policies-test-pause-server --> tests-unit-fake-instance
  tests-unit-policies-test-pause-server --> tests-unit-policies-base
  tests-unit-policies-test-quota-class-sets --> api-openstack-compute-quota-classes
  tests-unit-policies-test-quota-class-sets --> policies-quota-class-sets
  tests-unit-policies-test-quota-class-sets --> tests-fixtures-init
  tests-unit-policies-test-quota-class-sets --> tests-unit-api-openstack-fakes
  tests-unit-policies-test-quota-class-sets --> tests-unit-policies-base
  tests-unit-policies-test-quota-sets --> api-openstack-compute-quota-sets
  tests-unit-policies-test-quota-sets --> exception
  tests-unit-policies-test-quota-sets --> policies-quota-sets
  tests-unit-policies-test-quota-sets --> tests-fixtures-init
  tests-unit-policies-test-quota-sets --> tests-unit-api-openstack-fakes
  tests-unit-policies-test-quota-sets --> tests-unit-policies-base
  tests-unit-policies-test-remote-consoles --> api-openstack-compute-remote-consoles
  tests-unit-policies-test-remote-consoles --> compute-vm-states
  tests-unit-policies-test-remote-consoles --> policies-remote-consoles
  tests-unit-policies-test-remote-consoles --> tests-unit-api-openstack-fakes
  tests-unit-policies-test-remote-consoles --> tests-unit-fake-instance
  tests-unit-policies-test-remote-consoles --> tests-unit-policies-base
  tests-unit-policies-test-rescue --> api-openstack-compute-rescue
  tests-unit-policies-test-rescue --> compute-vm-states
  tests-unit-policies-test-rescue --> exception
  tests-unit-policies-test-rescue --> policies-base
  tests-unit-policies-test-rescue --> policies-rescue
  tests-unit-policies-test-rescue --> tests-unit-api-openstack-fakes
  tests-unit-policies-test-rescue --> tests-unit-fake-instance
  tests-unit-policies-test-rescue --> tests-unit-policies-base
  tests-unit-policies-test-security-groups --> api-openstack-compute-security-groups
  tests-unit-policies-test-security-groups --> compute-vm-states
  tests-unit-policies-test-security-groups --> policies-base
  tests-unit-policies-test-security-groups --> policies-security-groups
  tests-unit-policies-test-security-groups --> tests-unit-api-openstack-fakes
  tests-unit-policies-test-security-groups --> tests-unit-fake-instance
  tests-unit-policies-test-security-groups --> tests-unit-policies-base
  tests-unit-policies-test-server-diagnostics --> api-openstack-compute-server-diagnostics
  tests-unit-policies-test-server-diagnostics --> compute-vm-states
  tests-unit-policies-test-server-diagnostics --> objects-init
  tests-unit-policies-test-server-diagnostics --> policies-server-diagnostics
  tests-unit-policies-test-server-diagnostics --> tests-unit-api-openstack-fakes
  tests-unit-policies-test-server-diagnostics --> tests-unit-fake-instance
  tests-unit-policies-test-server-diagnostics --> tests-unit-policies-base
  tests-unit-policies-test-server-external-events --> api-openstack-compute-server-external-events
  tests-unit-policies-test-server-external-events --> policies-server-external-events
  tests-unit-policies-test-server-external-events --> tests-unit-api-openstack-fakes
  tests-unit-policies-test-server-external-events --> tests-unit-policies-base
  tests-unit-policies-test-server-groups --> api-openstack-compute-server-groups
  tests-unit-policies-test-server-groups --> conf-init
  tests-unit-policies-test-server-groups --> objects-init
  tests-unit-policies-test-server-groups --> policies-server-groups
  tests-unit-policies-test-server-groups --> tests-unit-api-openstack-fakes
  tests-unit-policies-test-server-groups --> tests-unit-policies-base
  tests-unit-policies-test-server-ips --> api-openstack-compute-ips
  tests-unit-policies-test-server-ips --> compute-vm-states
  tests-unit-policies-test-server-ips --> policies-ips
  tests-unit-policies-test-server-ips --> tests-unit-api-openstack-fakes
  tests-unit-policies-test-server-ips --> tests-unit-fake-instance
  tests-unit-policies-test-server-ips --> tests-unit-policies-base
  tests-unit-policies-test-server-metadata --> api-openstack-compute-server-metadata
  tests-unit-policies-test-server-metadata --> policies-server-metadata
  tests-unit-policies-test-server-metadata --> tests-unit-api-openstack-fakes
  tests-unit-policies-test-server-metadata --> tests-unit-fake-instance
  tests-unit-policies-test-server-metadata --> tests-unit-policies-base
  tests-unit-policies-test-server-migrations --> api-openstack-compute-server-migrations
  tests-unit-policies-test-server-migrations --> compute-vm-states
  tests-unit-policies-test-server-migrations --> objects-base
  tests-unit-policies-test-server-migrations --> objects-init
  tests-unit-policies-test-server-migrations --> policies-base
  tests-unit-policies-test-server-migrations --> policies-servers-migrations
  tests-unit-policies-test-server-migrations --> tests-unit-api-openstack-fakes
  tests-unit-policies-test-server-migrations --> tests-unit-fake-instance
  tests-unit-policies-test-server-migrations --> tests-unit-policies-base
  tests-unit-policies-test-server-password --> api-openstack-compute-server-password
  tests-unit-policies-test-server-password --> policies-base
  tests-unit-policies-test-server-password --> policies-server-password
  tests-unit-policies-test-server-password --> tests-unit-api-openstack-fakes
  tests-unit-policies-test-server-password --> tests-unit-fake-instance
  tests-unit-policies-test-server-password --> tests-unit-policies-base
  tests-unit-policies-test-server-tags --> api-openstack-compute-server-tags
  tests-unit-policies-test-server-tags --> compute-vm-states
  tests-unit-policies-test-server-tags --> objects-init
  tests-unit-policies-test-server-tags --> policies-server-tags
  tests-unit-policies-test-server-tags --> tests-unit-api-openstack-fakes
  tests-unit-policies-test-server-tags --> tests-unit-fake-instance
  tests-unit-policies-test-server-tags --> tests-unit-policies-base
  tests-unit-policies-test-server-topology --> api-openstack-compute-server-topology
  tests-unit-policies-test-server-topology --> compute-vm-states
  tests-unit-policies-test-server-topology --> objects-init
  tests-unit-policies-test-server-topology --> policies-server-topology
  tests-unit-policies-test-server-topology --> tests-unit-api-openstack-fakes
  tests-unit-policies-test-server-topology --> tests-unit-fake-instance
  tests-unit-policies-test-server-topology --> tests-unit-policies-base
  tests-unit-policies-test-servers --> api-openstack-compute-migrate-server
  tests-unit-policies-test-servers --> api-openstack-compute-servers
  tests-unit-policies-test-servers --> compute-api
  tests-unit-policies-test-servers --> compute-power-state
  tests-unit-policies-test-servers --> compute-vm-states
  tests-unit-policies-test-servers --> conf-init
  tests-unit-policies-test-servers --> exception
  tests-unit-policies-test-servers --> network-model
  tests-unit-policies-test-servers --> network-neutron
  tests-unit-policies-test-servers --> objects-fields
  tests-unit-policies-test-servers --> objects-init
  tests-unit-policies-test-servers --> objects-instance-group
  tests-unit-policies-test-servers --> policies-base
  tests-unit-policies-test-servers --> policies-extended-server-attributes
  tests-unit-policies-test-servers --> policies-servers
  tests-unit-policies-test-servers --> tests-unit-api-openstack-fakes
  tests-unit-policies-test-servers --> tests-unit-fake-flavor
  tests-unit-policies-test-servers --> tests-unit-fake-instance
  tests-unit-policies-test-servers --> tests-unit-policies-base
  tests-unit-policies-test-services --> api-openstack-compute-services
  tests-unit-policies-test-services --> tests-unit-api-openstack-fakes
  tests-unit-policies-test-services --> tests-unit-policies-base
  tests-unit-policies-test-shelve --> api-openstack-compute-shelve
  tests-unit-policies-test-shelve --> compute-vm-states
  tests-unit-policies-test-shelve --> exception
  tests-unit-policies-test-shelve --> policies-shelve
  tests-unit-policies-test-shelve --> tests-unit-api-openstack-fakes
  tests-unit-policies-test-shelve --> tests-unit-fake-instance
  tests-unit-policies-test-shelve --> tests-unit-policies-base
  tests-unit-policies-test-simple-tenant-usage --> api-openstack-compute-simple-tenant-usage
  tests-unit-policies-test-simple-tenant-usage --> policies-simple-tenant-usage
  tests-unit-policies-test-simple-tenant-usage --> tests-unit-api-openstack-fakes
  tests-unit-policies-test-simple-tenant-usage --> tests-unit-policies-base
  tests-unit-policies-test-snapshots --> api-openstack-compute-snapshots
  tests-unit-policies-test-snapshots --> policies-base
  tests-unit-policies-test-snapshots --> policies-volumes
  tests-unit-policies-test-snapshots --> tests-unit-api-openstack-fakes
  tests-unit-policies-test-snapshots --> tests-unit-policies-base
  tests-unit-policies-test-suspend-server --> api-openstack-compute-suspend-server
  tests-unit-policies-test-suspend-server --> compute-vm-states
  tests-unit-policies-test-suspend-server --> exception
  tests-unit-policies-test-suspend-server --> policies-suspend-server
  tests-unit-policies-test-suspend-server --> tests-unit-api-openstack-fakes
  tests-unit-policies-test-suspend-server --> tests-unit-fake-instance
  tests-unit-policies-test-suspend-server --> tests-unit-policies-base
  tests-unit-policies-test-tenant-networks --> api-openstack-compute-tenant-networks
  tests-unit-policies-test-tenant-networks --> policies-base
  tests-unit-policies-test-tenant-networks --> policies-tenant-networks
  tests-unit-policies-test-tenant-networks --> tests-unit-api-openstack-fakes
  tests-unit-policies-test-tenant-networks --> tests-unit-policies-base
  tests-unit-policies-test-volume-attachments --> api-openstack-compute-volume-attachments
  tests-unit-policies-test-volume-attachments --> compute-vm-states
  tests-unit-policies-test-volume-attachments --> exception
  tests-unit-policies-test-volume-attachments --> objects-block-device
  tests-unit-policies-test-volume-attachments --> objects-init
  tests-unit-policies-test-volume-attachments --> policies-volumes-attachments
  tests-unit-policies-test-volume-attachments --> tests-unit-api-openstack-fakes
  tests-unit-policies-test-volume-attachments --> tests-unit-fake-block-device
  tests-unit-policies-test-volume-attachments --> tests-unit-fake-instance
  tests-unit-policies-test-volume-attachments --> tests-unit-policies-base
  tests-unit-policies-test-volumes --> api-openstack-compute-volumes
  tests-unit-policies-test-volumes --> policies-base
  tests-unit-policies-test-volumes --> policies-volumes
  tests-unit-policies-test-volumes --> tests-unit-api-openstack-fakes
  tests-unit-policies-test-volumes --> tests-unit-policies-base
  tests-unit-privsep-test-fs --> privsep-fs
  tests-unit-privsep-test-fs --> tests-fixtures-init
  tests-unit-privsep-test-idmapshift --> privsep-idmapshift
  tests-unit-privsep-test-libvirt --> privsep-libvirt
  tests-unit-privsep-test-libvirt --> tests-fixtures-init
  tests-unit-privsep-test-linux-net --> privsep-linux-net
  tests-unit-privsep-test-linux-net --> tests-fixtures-init
  tests-unit-privsep-test-path --> exception
  tests-unit-privsep-test-path --> privsep-path
  tests-unit-privsep-test-path --> tests-fixtures-init
  tests-unit-privsep-test-qemu --> privsep-qemu
  tests-unit-privsep-test-qemu --> tests-fixtures-init
  tests-unit-privsep-test-utils --> privsep-utils
  tests-unit-scheduler-client-test-query --> objects-init
  tests-unit-scheduler-client-test-query --> scheduler-client-query
  tests-unit-scheduler-client-test-report --> conf-init
  tests-unit-scheduler-client-test-report --> exception
  tests-unit-scheduler-client-test-report --> objects-init
  tests-unit-scheduler-client-test-report --> scheduler-client-report
  tests-unit-scheduler-client-test-report --> scheduler-utils
  tests-unit-scheduler-client-test-report --> tests-fixtures-init
  tests-unit-scheduler-client-test-report --> tests-unit-fake-requests
  tests-unit-scheduler-fakes --> objects-init
  tests-unit-scheduler-fakes --> scheduler-host-manager
  tests-unit-scheduler-filters-test-affinity-filters --> objects-init
  tests-unit-scheduler-filters-test-affinity-filters --> scheduler-filters-affinity-filter
  tests-unit-scheduler-filters-test-affinity-filters --> tests-unit-scheduler-fakes
  tests-unit-scheduler-filters-test-aggregate-image-properties-isolation-filters --> objects-init
  tests-unit-scheduler-filters-test-aggregate-image-properties-isolation-filters --> scheduler-filters-aggregate-image-properties-isolation
  tests-unit-scheduler-filters-test-aggregate-image-properties-isolation-filters --> tests-unit-scheduler-fakes
  tests-unit-scheduler-filters-test-aggregate-instance-extra-specs-filters --> objects-init
  tests-unit-scheduler-filters-test-aggregate-instance-extra-specs-filters --> scheduler-filters-aggregate-instance-extra-specs
  tests-unit-scheduler-filters-test-aggregate-instance-extra-specs-filters --> tests-unit-scheduler-fakes
  tests-unit-scheduler-filters-test-aggregate-multitenancy-isolation-filters --> objects-init
  tests-unit-scheduler-filters-test-aggregate-multitenancy-isolation-filters --> scheduler-filters-aggregate-multitenancy-isolation
  tests-unit-scheduler-filters-test-aggregate-multitenancy-isolation-filters --> tests-unit-scheduler-fakes
  tests-unit-scheduler-filters-test-compute-capabilities-filters --> objects-init
  tests-unit-scheduler-filters-test-compute-capabilities-filters --> scheduler-filters-compute-capabilities-filter
  tests-unit-scheduler-filters-test-compute-capabilities-filters --> tests-unit-scheduler-fakes
  tests-unit-scheduler-filters-test-compute-filters --> objects-init
  tests-unit-scheduler-filters-test-compute-filters --> scheduler-filters-compute-filter
  tests-unit-scheduler-filters-test-compute-filters --> tests-unit-scheduler-fakes
  tests-unit-scheduler-filters-test-extra-specs-ops --> scheduler-filters-extra-specs-ops
  tests-unit-scheduler-filters-test-image-props-filters --> objects-fields
  tests-unit-scheduler-filters-test-image-props-filters --> objects-init
  tests-unit-scheduler-filters-test-image-props-filters --> scheduler-filters-image-props-filter
  tests-unit-scheduler-filters-test-image-props-filters --> tests-unit-scheduler-fakes
  tests-unit-scheduler-filters-test-io-ops-filters --> objects-init
  tests-unit-scheduler-filters-test-io-ops-filters --> scheduler-filters-io-ops-filter
  tests-unit-scheduler-filters-test-io-ops-filters --> tests-unit-scheduler-fakes
  tests-unit-scheduler-filters-test-isolated-hosts-filter --> objects-init
  tests-unit-scheduler-filters-test-isolated-hosts-filter --> scheduler-filters-isolated-hosts-filter
  tests-unit-scheduler-filters-test-isolated-hosts-filter --> tests-unit-scheduler-fakes
  tests-unit-scheduler-filters-test-json-filters --> objects-init
  tests-unit-scheduler-filters-test-json-filters --> scheduler-filters-json-filter
  tests-unit-scheduler-filters-test-json-filters --> tests-unit-scheduler-fakes
  tests-unit-scheduler-filters-test-metrics-filters --> objects-init
  tests-unit-scheduler-filters-test-metrics-filters --> scheduler-filters-metrics-filter
  tests-unit-scheduler-filters-test-metrics-filters --> tests-unit-scheduler-fakes
  tests-unit-scheduler-filters-test-num-instances-filters --> objects-init
  tests-unit-scheduler-filters-test-num-instances-filters --> scheduler-filters-num-instances-filter
  tests-unit-scheduler-filters-test-num-instances-filters --> tests-unit-scheduler-fakes
  tests-unit-scheduler-filters-test-numa-topology-filters --> objects-fields
  tests-unit-scheduler-filters-test-numa-topology-filters --> objects-init
  tests-unit-scheduler-filters-test-numa-topology-filters --> scheduler-filters-numa-topology-filter
  tests-unit-scheduler-filters-test-numa-topology-filters --> tests-unit-scheduler-fakes
  tests-unit-scheduler-filters-test-pci-passthrough-filters --> objects-init
  tests-unit-scheduler-filters-test-pci-passthrough-filters --> pci-stats
  tests-unit-scheduler-filters-test-pci-passthrough-filters --> scheduler-filters-pci-passthrough-filter
  tests-unit-scheduler-filters-test-pci-passthrough-filters --> tests-unit-scheduler-fakes
  tests-unit-scheduler-filters-test-type-filters --> objects-init
  tests-unit-scheduler-filters-test-type-filters --> scheduler-filters-type-filter
  tests-unit-scheduler-filters-test-type-filters --> tests-unit-scheduler-fakes
  tests-unit-scheduler-filters-test-utils --> objects-init
  tests-unit-scheduler-filters-test-utils --> scheduler-filters-utils
  tests-unit-scheduler-filters-test-utils --> tests-unit-scheduler-fakes
  tests-unit-scheduler-ironic-fakes --> objects-init
  tests-unit-scheduler-test-filters --> objects-init
  tests-unit-scheduler-test-host-filters --> scheduler-filters-all-hosts-filter
  tests-unit-scheduler-test-host-filters --> scheduler-filters-compute-filter
  tests-unit-scheduler-test-host-filters --> scheduler-filters-init
  tests-unit-scheduler-test-host-filters --> tests-unit-scheduler-fakes
  tests-unit-scheduler-test-host-manager --> compute-task-states
  tests-unit-scheduler-test-host-manager --> compute-vm-states
  tests-unit-scheduler-test-host-manager --> exception
  tests-unit-scheduler-test-host-manager --> objects-base
  tests-unit-scheduler-test-host-manager --> objects-init
  tests-unit-scheduler-test-host-manager --> pci-stats
  tests-unit-scheduler-test-host-manager --> scheduler-filters-init
  tests-unit-scheduler-test-host-manager --> scheduler-host-manager
  tests-unit-scheduler-test-host-manager --> tests-fixtures-init
  tests-unit-scheduler-test-host-manager --> tests-unit-fake-instance
  tests-unit-scheduler-test-host-manager --> tests-unit-scheduler-fakes
  tests-unit-scheduler-test-manager --> exception
  tests-unit-scheduler-test-manager --> objects-init
  tests-unit-scheduler-test-manager --> objects-service
  tests-unit-scheduler-test-manager --> scheduler-filters-init
  tests-unit-scheduler-test-manager --> scheduler-host-manager
  tests-unit-scheduler-test-manager --> scheduler-manager
  tests-unit-scheduler-test-manager --> scheduler-utils
  tests-unit-scheduler-test-manager --> scheduler-weights-init
  tests-unit-scheduler-test-manager --> servicegroup-init
  tests-unit-scheduler-test-manager --> tests-unit-fake-server-actions
  tests-unit-scheduler-test-manager --> tests-unit-scheduler-fakes
  tests-unit-scheduler-test-request-filter --> exception
  tests-unit-scheduler-test-request-filter --> network-model
  tests-unit-scheduler-test-request-filter --> objects-init
  tests-unit-scheduler-test-request-filter --> scheduler-request-filter
  tests-unit-scheduler-test-request-filter --> tests-unit-utils
  tests-unit-scheduler-test-rpcapi --> conf-init
  tests-unit-scheduler-test-rpcapi --> exception
  tests-unit-scheduler-test-rpcapi --> objects-init
  tests-unit-scheduler-test-rpcapi --> scheduler-rpcapi
  tests-unit-scheduler-test-utils --> compute-flavors
  tests-unit-scheduler-test-utils --> exception
  tests-unit-scheduler-test-utils --> network-neutron
  tests-unit-scheduler-test-utils --> objects-init
  tests-unit-scheduler-test-utils --> scheduler-client-report
  tests-unit-scheduler-test-utils --> scheduler-utils
  tests-unit-scheduler-test-utils --> tests-unit-fake-instance
  tests-unit-scheduler-test-utils --> tests-unit-objects-test-flavor
  tests-unit-scheduler-test-utils --> tests-unit-scheduler-fakes
  tests-unit-scheduler-weights-test-cross-cell --> conf-init
  tests-unit-scheduler-weights-test-cross-cell --> objects-init
  tests-unit-scheduler-weights-test-cross-cell --> scheduler-weights-cross-cell
  tests-unit-scheduler-weights-test-cross-cell --> scheduler-weights-init
  tests-unit-scheduler-weights-test-cross-cell --> tests-unit-scheduler-fakes
  tests-unit-scheduler-weights-test-weights-affinity --> objects-init
  tests-unit-scheduler-weights-test-weights-affinity --> scheduler-weights-affinity
  tests-unit-scheduler-weights-test-weights-affinity --> scheduler-weights-init
  tests-unit-scheduler-weights-test-weights-affinity --> tests-unit-scheduler-fakes
  tests-unit-scheduler-weights-test-weights-compute --> objects-init
  tests-unit-scheduler-weights-test-weights-compute --> scheduler-weights-compute
  tests-unit-scheduler-weights-test-weights-compute --> scheduler-weights-init
  tests-unit-scheduler-weights-test-weights-compute --> tests-unit-scheduler-fakes
  tests-unit-scheduler-weights-test-weights-cpu --> objects-init
  tests-unit-scheduler-weights-test-weights-cpu --> scheduler-weights-cpu
  tests-unit-scheduler-weights-test-weights-cpu --> scheduler-weights-init
  tests-unit-scheduler-weights-test-weights-cpu --> tests-unit-scheduler-fakes
  tests-unit-scheduler-weights-test-weights-disk --> objects-init
  tests-unit-scheduler-weights-test-weights-disk --> scheduler-weights-disk
  tests-unit-scheduler-weights-test-weights-disk --> scheduler-weights-init
  tests-unit-scheduler-weights-test-weights-disk --> tests-unit-scheduler-fakes
  tests-unit-scheduler-weights-test-weights-hosts --> scheduler-weights-affinity
  tests-unit-scheduler-weights-test-weights-hosts --> scheduler-weights-init
  tests-unit-scheduler-weights-test-weights-hosts --> scheduler-weights-io-ops
  tests-unit-scheduler-weights-test-weights-hosts --> scheduler-weights-metrics
  tests-unit-scheduler-weights-test-weights-hosts --> scheduler-weights-ram
  tests-unit-scheduler-weights-test-weights-hosts --> tests-unit-matchers
  tests-unit-scheduler-weights-test-weights-hosts --> tests-unit-scheduler-fakes
  tests-unit-scheduler-weights-test-weights-hypervisor-version --> scheduler-weights-hypervisor-version
  tests-unit-scheduler-weights-test-weights-hypervisor-version --> scheduler-weights-init
  tests-unit-scheduler-weights-test-weights-hypervisor-version --> tests-unit-scheduler-fakes
  tests-unit-scheduler-weights-test-weights-image-props --> exception
  tests-unit-scheduler-weights-test-weights-image-props --> objects-init
  tests-unit-scheduler-weights-test-weights-image-props --> scheduler-weights-image-props
  tests-unit-scheduler-weights-test-weights-image-props --> scheduler-weights-init
  tests-unit-scheduler-weights-test-weights-image-props --> tests-unit-scheduler-fakes
  tests-unit-scheduler-weights-test-weights-ioopsweight --> objects-init
  tests-unit-scheduler-weights-test-weights-ioopsweight --> scheduler-weights-init
  tests-unit-scheduler-weights-test-weights-ioopsweight --> scheduler-weights-io-ops
  tests-unit-scheduler-weights-test-weights-ioopsweight --> tests-unit-scheduler-fakes
  tests-unit-scheduler-weights-test-weights-metrics --> exception
  tests-unit-scheduler-weights-test-weights-metrics --> objects-fields
  tests-unit-scheduler-weights-test-weights-metrics --> objects-init
  tests-unit-scheduler-weights-test-weights-metrics --> objects-monitor-metric
  tests-unit-scheduler-weights-test-weights-metrics --> scheduler-weights-init
  tests-unit-scheduler-weights-test-weights-metrics --> scheduler-weights-metrics
  tests-unit-scheduler-weights-test-weights-metrics --> tests-unit-scheduler-fakes
  tests-unit-scheduler-weights-test-weights-num-instances --> scheduler-weights-init
  tests-unit-scheduler-weights-test-weights-num-instances --> scheduler-weights-num-instances
  tests-unit-scheduler-weights-test-weights-num-instances --> tests-unit-scheduler-fakes
  tests-unit-scheduler-weights-test-weights-pci --> objects-init
  tests-unit-scheduler-weights-test-weights-pci --> pci-stats
  tests-unit-scheduler-weights-test-weights-pci --> scheduler-weights-init
  tests-unit-scheduler-weights-test-weights-pci --> scheduler-weights-pci
  tests-unit-scheduler-weights-test-weights-pci --> tests-unit-fake-pci-device-pools
  tests-unit-scheduler-weights-test-weights-pci --> tests-unit-scheduler-fakes
  tests-unit-scheduler-weights-test-weights-ram --> objects-init
  tests-unit-scheduler-weights-test-weights-ram --> scheduler-weights-init
  tests-unit-scheduler-weights-test-weights-ram --> scheduler-weights-ram
  tests-unit-scheduler-weights-test-weights-ram --> tests-unit-scheduler-fakes
  tests-unit-servicegroup-test-api --> servicegroup-init
  tests-unit-servicegroup-test-db-servicegroup --> exception
  tests-unit-servicegroup-test-db-servicegroup --> objects-init
  tests-unit-servicegroup-test-db-servicegroup --> servicegroup-init
  tests-unit-servicegroup-test-mc-servicegroup --> servicegroup-init
  tests-unit-storage-test-rbd --> compute-task-states
  tests-unit-storage-test-rbd --> exception
  tests-unit-storage-test-rbd --> objects-init
  tests-unit-storage-test-rbd --> storage-rbd-utils
  tests-unit-storage-test-rbd --> utils
  tests-unit-test-api-validation --> api-openstack-api-version-request
  tests-unit-test-api-validation --> api-validation-init
  tests-unit-test-api-validation --> api-validation-parameter-types
  tests-unit-test-api-validation --> api-validation-validators
  tests-unit-test-api-validation --> exception
  tests-unit-test-api-validation --> tests-unit-api-openstack-fakes
  tests-unit-test-availability-zones --> compute-api
  tests-unit-test-availability-zones --> conf-init
  tests-unit-test-availability-zones --> db-main-api
  tests-unit-test-availability-zones --> objects-init
  tests-unit-test-baserpc --> compute-rpcapi
  tests-unit-test-block-device --> compute-api
  tests-unit-test-block-device --> exception
  tests-unit-test-block-device --> objects-init
  tests-unit-test-block-device --> tests-unit-fake-block-device
  tests-unit-test-block-device --> tests-unit-matchers
  tests-unit-test-block-device --> volume-cinder
  tests-unit-test-cinder --> conf-init
  tests-unit-test-cinder --> exception
  tests-unit-test-cinder --> service-auth
  tests-unit-test-cinder --> volume-cinder
  tests-unit-test-conf --> conf-compute
  tests-unit-test-configdrive2 --> tests-unit-fake-instance
  tests-unit-test-configdrive2 --> utils
  tests-unit-test-configdrive2 --> virt-configdrive
  tests-unit-test-context --> exception
  tests-unit-test-context --> objects-init
  tests-unit-test-context --> service-auth
  tests-unit-test-context --> utils
  tests-unit-test-crypto --> exception
  tests-unit-test-crypto --> objects-init
  tests-unit-test-crypto --> utils
  tests-unit-test-exception --> exception
  tests-unit-test-exception-wrapper --> tests-fixtures-init
  tests-unit-test-filesystem --> exception
  tests-unit-test-fixtures --> compute-rpcapi
  tests-unit-test-fixtures --> conductor-init
  tests-unit-test-fixtures --> db-api-api
  tests-unit-test-fixtures --> db-main-api
  tests-unit-test-fixtures --> exception
  tests-unit-test-fixtures --> network-neutron
  tests-unit-test-fixtures --> objects-base
  tests-unit-test-fixtures --> objects-init
  tests-unit-test-fixtures --> objects-service
  tests-unit-test-fixtures --> tests-fixtures-init
  tests-unit-test-fixtures --> tests-unit-fake-instance
  tests-unit-test-fixtures --> utils
  tests-unit-test-hacking --> hacking-checks
  tests-unit-test-identity --> api-openstack-identity
  tests-unit-test-identity --> tests-unit-fake-requests
  tests-unit-test-json-ref --> tests-json-ref
  tests-unit-test-loadables --> exception
  tests-unit-test-loadables --> tests-unit-fake-loadables-init
  tests-unit-test-manila --> conf-init
  tests-unit-test-manila --> exception
  tests-unit-test-manila --> share-manila
  tests-unit-test-manila --> tests-fixtures-manila
  tests-unit-test-manila --> tests-unit-api-openstack-fakes
  tests-unit-test-matchers --> tests-unit-matchers
  tests-unit-test-metadata --> api-metadata-base
  tests-unit-test-metadata --> api-metadata-handler
  tests-unit-test-metadata --> api-metadata-password
  tests-unit-test-metadata --> api-metadata-vendordata-dynamic
  tests-unit-test-metadata --> exception
  tests-unit-test-metadata --> network-model
  tests-unit-test-metadata --> network-neutron
  tests-unit-test-metadata --> objects-init
  tests-unit-test-metadata --> objects-instance-numa
  tests-unit-test-metadata --> objects-virt-device-metadata
  tests-unit-test-metadata --> tests-unit-api-openstack-fakes
  tests-unit-test-metadata --> tests-unit-fake-block-device
  tests-unit-test-metadata --> tests-unit-fake-network
  tests-unit-test-metadata --> tests-unit-fake-requests
  tests-unit-test-metadata --> utils
  tests-unit-test-metadata --> virt-netutils
  tests-unit-test-notifications --> compute-task-states
  tests-unit-test-notifications --> compute-vm-states
  tests-unit-test-notifications --> exception
  tests-unit-test-notifications --> notifications-base
  tests-unit-test-notifications --> objects-base
  tests-unit-test-notifications --> objects-init
  tests-unit-test-notifications --> tests-fixtures-init
  tests-unit-test-notifications --> tests-unit-fake-network
  tests-unit-test-policy --> exception
  tests-unit-test-policy --> policies-servers
  tests-unit-test-policy --> tests-fixtures-init
  tests-unit-test-policy --> tests-unit-fake-policy
  tests-unit-test-policy --> utils
  tests-unit-test-profiler --> conf-init
  tests-unit-test-quota --> compute-api
  tests-unit-test-quota --> conf-init
  tests-unit-test-quota --> db-main-models
  tests-unit-test-quota --> exception
  tests-unit-test-quota --> limit-local
  tests-unit-test-quota --> limit-placement
  tests-unit-test-quota --> objects-init
  tests-unit-test-quota --> tests-fixtures-init
  tests-unit-test-rpc --> conf-init
  tests-unit-test-rpc --> utils
  tests-unit-test-service --> exception
  tests-unit-test-service --> objects-base
  tests-unit-test-service --> objects-init
  tests-unit-test-service-auth --> service-auth
  tests-unit-test-test --> conf-init
  tests-unit-test-test --> exception
  tests-unit-test-test --> tests-fixtures-init
  tests-unit-test-test-utils --> db-main-api
  tests-unit-test-test-utils --> tests-unit-utils
  tests-unit-test-thread-pool-factory --> utils
  tests-unit-test-utils --> exception
  tests-unit-test-utils --> objects-base
  tests-unit-test-utils --> objects-instance
  tests-unit-test-utils --> objects-service
  tests-unit-test-utils --> tests-fixtures-init
  tests-unit-test-utils --> tests-unit-objects-test-objects
  tests-unit-test-utils --> tests-unit-utils
  tests-unit-test-utils --> utils
  tests-unit-test-weights --> scheduler-weights-init
  tests-unit-test-weights --> scheduler-weights-ram
  tests-unit-test-weights --> tests-unit-scheduler-fakes
  tests-unit-utils --> compute-flavors
  tests-unit-utils --> conf-init
  tests-unit-utils --> db-main-api
  tests-unit-utils --> exception
  tests-unit-utils --> image-glance
  tests-unit-utils --> network-model
  tests-unit-utils --> objects-base
  tests-unit-utils --> objects-init
  tests-unit-utils --> utils
  tests-unit-virt-disk-mount-test-api --> tests-fixtures-init
  tests-unit-virt-disk-mount-test-api --> virt-disk-mount-api
  tests-unit-virt-disk-mount-test-api --> virt-disk-mount-block
  tests-unit-virt-disk-mount-test-api --> virt-disk-mount-loop
  tests-unit-virt-disk-mount-test-api --> virt-disk-mount-nbd
  tests-unit-virt-disk-mount-test-api --> virt-image-model
  tests-unit-virt-disk-mount-test-block --> virt-disk-mount-block
  tests-unit-virt-disk-mount-test-block --> virt-image-model
  tests-unit-virt-disk-mount-test-loop --> virt-disk-mount-loop
  tests-unit-virt-disk-mount-test-loop --> virt-image-model
  tests-unit-virt-disk-mount-test-nbd --> utils
  tests-unit-virt-disk-mount-test-nbd --> virt-disk-mount-nbd
  tests-unit-virt-disk-mount-test-nbd --> virt-image-model
  tests-unit-virt-disk-test-api --> exception
  tests-unit-virt-disk-test-api --> virt-disk-api
  tests-unit-virt-disk-test-api --> virt-disk-mount-api
  tests-unit-virt-disk-test-api --> virt-image-model
  tests-unit-virt-disk-test-inject --> tests-unit-virt-disk-vfs-fakeguestfs
  tests-unit-virt-disk-test-inject --> virt-disk-api
  tests-unit-virt-disk-test-inject --> virt-disk-vfs-guestfs
  tests-unit-virt-disk-test-inject --> virt-image-model
  tests-unit-virt-disk-vfs-test-guestfs --> exception
  tests-unit-virt-disk-vfs-test-guestfs --> tests-unit-virt-disk-vfs-fakeguestfs
  tests-unit-virt-disk-vfs-test-guestfs --> utils
  tests-unit-virt-disk-vfs-test-guestfs --> virt-disk-vfs-guestfs
  tests-unit-virt-disk-vfs-test-guestfs --> virt-image-model
  tests-unit-virt-image-test-model --> exception
  tests-unit-virt-image-test-model --> virt-image-model
  tests-unit-virt-ironic-test-driver --> api-metadata-base
  tests-unit-virt-ironic-test-driver --> api-openstack-common
  tests-unit-virt-ironic-test-driver --> compute-power-state
  tests-unit-virt-ironic-test-driver --> compute-provider-tree
  tests-unit-virt-ironic-test-driver --> compute-task-states
  tests-unit-virt-ironic-test-driver --> compute-vm-states
  tests-unit-virt-ironic-test-driver --> console-type
  tests-unit-virt-ironic-test-driver --> exception
  tests-unit-virt-ironic-test-driver --> network-model
  tests-unit-virt-ironic-test-driver --> objects-init
  tests-unit-virt-ironic-test-driver --> servicegroup-init
  tests-unit-virt-ironic-test-driver --> tests-fixtures-init
  tests-unit-virt-ironic-test-driver --> tests-unit-fake-block-device
  tests-unit-virt-ironic-test-driver --> tests-unit-fake-instance
  tests-unit-virt-ironic-test-driver --> tests-unit-matchers
  tests-unit-virt-ironic-test-driver --> tests-unit-utils
  tests-unit-virt-ironic-test-driver --> tests-unit-virt-ironic-utils
  tests-unit-virt-ironic-test-driver --> virt-block-device
  tests-unit-virt-ironic-test-driver --> virt-configdrive
  tests-unit-virt-ironic-test-driver --> virt-driver
  tests-unit-virt-ironic-test-driver --> virt-fake
  tests-unit-virt-ironic-test-driver --> virt-hardware
  tests-unit-virt-ironic-test-driver --> virt-ironic-driver
  tests-unit-virt-ironic-test-driver --> virt-ironic-ironic-states
  tests-unit-virt-ironic-test-patcher --> objects-init
  tests-unit-virt-ironic-test-patcher --> tests-unit-fake-instance
  tests-unit-virt-ironic-test-patcher --> tests-unit-virt-ironic-utils
  tests-unit-virt-ironic-test-patcher --> virt-ironic-patcher
  tests-unit-virt-ironic-utils --> network-model
  tests-unit-virt-ironic-utils --> objects-init
  tests-unit-virt-ironic-utils --> virt-driver
  tests-unit-virt-ironic-utils --> virt-ironic-ironic-states
  tests-unit-virt-libvirt-cpu-test-api --> exception
  tests-unit-virt-libvirt-cpu-test-api --> objects-init
  tests-unit-virt-libvirt-cpu-test-api --> virt-libvirt-cpu-api
  tests-unit-virt-libvirt-cpu-test-api --> virt-libvirt-cpu-core
  tests-unit-virt-libvirt-cpu-test-core --> exception
  tests-unit-virt-libvirt-cpu-test-core --> tests-fixtures-init
  tests-unit-virt-libvirt-cpu-test-core --> virt-libvirt-cpu-core
  tests-unit-virt-libvirt-storage-test-dmcrypt --> virt-libvirt-storage-dmcrypt
  tests-unit-virt-libvirt-storage-test-lvm --> exception
  tests-unit-virt-libvirt-storage-test-lvm --> virt-libvirt-storage-lvm
  tests-unit-virt-libvirt-test-blockinfo --> exception
  tests-unit-virt-libvirt-test-blockinfo --> objects-fields
  tests-unit-virt-libvirt-test-blockinfo --> objects-init
  tests-unit-virt-libvirt-test-blockinfo --> tests-fixtures-init
  tests-unit-virt-libvirt-test-blockinfo --> tests-unit-fake-block-device
  tests-unit-virt-libvirt-test-blockinfo --> tests-unit-virt-fakelibosinfo
  tests-unit-virt-libvirt-test-blockinfo --> virt-block-device
  tests-unit-virt-libvirt-test-blockinfo --> virt-driver
  tests-unit-virt-libvirt-test-blockinfo --> virt-libvirt-blockinfo
  tests-unit-virt-libvirt-test-config --> exception
  tests-unit-virt-libvirt-test-config --> objects-fields
  tests-unit-virt-libvirt-test-config --> tests-fixtures-libvirt-data
  tests-unit-virt-libvirt-test-config --> virt-driver
  tests-unit-virt-libvirt-test-config --> virt-hardware
  tests-unit-virt-libvirt-test-config --> virt-libvirt-config
  tests-unit-virt-libvirt-test-designer --> pci-utils
  tests-unit-virt-libvirt-test-designer --> tests-unit-matchers
  tests-unit-virt-libvirt-test-designer --> virt-libvirt-config
  tests-unit-virt-libvirt-test-designer --> virt-libvirt-designer
  tests-unit-virt-libvirt-test-driver --> api-metadata-base
  tests-unit-virt-libvirt-test-driver --> compute-manager
  tests-unit-virt-libvirt-test-driver --> compute-power-state
  tests-unit-virt-libvirt-test-driver --> compute-provider-tree
  tests-unit-virt-libvirt-test-driver --> compute-task-states
  tests-unit-virt-libvirt-test-driver --> compute-utils
  tests-unit-virt-libvirt-test-driver --> compute-vm-states
  tests-unit-virt-libvirt-test-driver --> conf-init
  tests-unit-virt-libvirt-test-driver --> db-main-api
  tests-unit-virt-libvirt-test-driver --> exception
  tests-unit-virt-libvirt-test-driver --> network-model
  tests-unit-virt-libvirt-test-driver --> objects-block-device
  tests-unit-virt-libvirt-test-driver --> objects-fields
  tests-unit-virt-libvirt-test-driver --> objects-init
  tests-unit-virt-libvirt-test-driver --> objects-migrate-data
  tests-unit-virt-libvirt-test-driver --> objects-virtual-interface
  tests-unit-virt-libvirt-test-driver --> pci-utils
  tests-unit-virt-libvirt-test-driver --> privsep-fs
  tests-unit-virt-libvirt-test-driver --> privsep-libvirt
  tests-unit-virt-libvirt-test-driver --> storage-rbd-utils
  tests-unit-virt-libvirt-test-driver --> tests-fixtures-cyborg
  tests-unit-virt-libvirt-test-driver --> tests-fixtures-init
  tests-unit-virt-libvirt-test-driver --> tests-fixtures-libvirt
  tests-unit-virt-libvirt-test-driver --> tests-fixtures-libvirt-data
  tests-unit-virt-libvirt-test-driver --> tests-unit-fake-block-device
  tests-unit-virt-libvirt-test-driver --> tests-unit-fake-diagnostics
  tests-unit-virt-libvirt-test-driver --> tests-unit-fake-flavor
  tests-unit-virt-libvirt-test-driver --> tests-unit-fake-instance
  tests-unit-virt-libvirt-test-driver --> tests-unit-fake-network
  tests-unit-virt-libvirt-test-driver --> tests-unit-image-fake
  tests-unit-virt-libvirt-test-driver --> tests-unit-matchers
  tests-unit-virt-libvirt-test-driver --> tests-unit-objects-test-diagnostics
  tests-unit-virt-libvirt-test-driver --> tests-unit-objects-test-instance-numa
  tests-unit-virt-libvirt-test-driver --> tests-unit-objects-test-pci-device
  tests-unit-virt-libvirt-test-driver --> tests-unit-objects-test-vcpu-model
  tests-unit-virt-libvirt-test-driver --> tests-unit-utils
  tests-unit-virt-libvirt-test-driver --> utils
  tests-unit-virt-libvirt-test-driver --> virt-block-device
  tests-unit-virt-libvirt-test-driver --> virt-driver
  tests-unit-virt-libvirt-test-driver --> virt-fake
  tests-unit-virt-libvirt-test-driver --> virt-hardware
  tests-unit-virt-libvirt-test-driver --> virt-image-model
  tests-unit-virt-libvirt-test-driver --> virt-libvirt-blockinfo
  tests-unit-virt-libvirt-test-driver --> virt-libvirt-config
  tests-unit-virt-libvirt-test-driver --> virt-libvirt-driver
  tests-unit-virt-libvirt-test-driver --> virt-libvirt-event
  tests-unit-virt-libvirt-test-driver --> virt-libvirt-guest
  tests-unit-virt-libvirt-test-driver --> virt-libvirt-host
  tests-unit-virt-libvirt-test-driver --> virt-libvirt-imagebackend
  tests-unit-virt-libvirt-test-driver --> virt-libvirt-imagecache
  tests-unit-virt-libvirt-test-driver --> virt-libvirt-migration
  tests-unit-virt-libvirt-test-driver --> virt-libvirt-storage-dmcrypt
  tests-unit-virt-libvirt-test-driver --> virt-libvirt-storage-lvm
  tests-unit-virt-libvirt-test-driver --> virt-libvirt-utils
  tests-unit-virt-libvirt-test-driver --> virt-libvirt-vif
  tests-unit-virt-libvirt-test-driver --> virt-libvirt-volume-volume
  tests-unit-virt-libvirt-test-guest --> tests-fixtures-init
  tests-unit-virt-libvirt-test-guest --> tests-fixtures-libvirt
  tests-unit-virt-libvirt-test-guest --> virt-libvirt-config
  tests-unit-virt-libvirt-test-guest --> virt-libvirt-guest
  tests-unit-virt-libvirt-test-guest --> virt-libvirt-host
  tests-unit-virt-libvirt-test-host --> compute-manager
  tests-unit-virt-libvirt-test-host --> compute-vm-states
  tests-unit-virt-libvirt-test-host --> conf-init
  tests-unit-virt-libvirt-test-host --> exception
  tests-unit-virt-libvirt-test-host --> objects-fields
  tests-unit-virt-libvirt-test-host --> objects-init
  tests-unit-virt-libvirt-test-host --> pci-utils
  tests-unit-virt-libvirt-test-host --> tests-fixtures-init
  tests-unit-virt-libvirt-test-host --> tests-fixtures-libvirt
  tests-unit-virt-libvirt-test-host --> tests-fixtures-libvirt-data
  tests-unit-virt-libvirt-test-host --> utils
  tests-unit-virt-libvirt-test-host --> virt-event
  tests-unit-virt-libvirt-test-host --> virt-libvirt-config
  tests-unit-virt-libvirt-test-host --> virt-libvirt-event
  tests-unit-virt-libvirt-test-host --> virt-libvirt-guest
  tests-unit-virt-libvirt-test-host --> virt-libvirt-host
  tests-unit-virt-libvirt-test-imagebackend --> compute-utils
  tests-unit-virt-libvirt-test-imagebackend --> conf-init
  tests-unit-virt-libvirt-test-imagebackend --> exception
  tests-unit-virt-libvirt-test-imagebackend --> objects-init
  tests-unit-virt-libvirt-test-imagebackend --> storage-rbd-utils
  tests-unit-virt-libvirt-test-imagebackend --> tests-unit-fake-processutils
  tests-unit-virt-libvirt-test-imagebackend --> virt-image-model
  tests-unit-virt-libvirt-test-imagebackend --> virt-images
  tests-unit-virt-libvirt-test-imagebackend --> virt-libvirt-config
  tests-unit-virt-libvirt-test-imagebackend --> virt-libvirt-imagebackend
  tests-unit-virt-libvirt-test-imagebackend --> virt-libvirt-utils
  tests-unit-virt-libvirt-test-imagecache --> compute-manager
  tests-unit-virt-libvirt-test-imagecache --> conf-init
  tests-unit-virt-libvirt-test-imagecache --> objects-init
  tests-unit-virt-libvirt-test-imagecache --> tests-unit-fake-instance
  tests-unit-virt-libvirt-test-imagecache --> utils
  tests-unit-virt-libvirt-test-imagecache --> virt-libvirt-imagecache
  tests-unit-virt-libvirt-test-machine-type-utils --> compute-vm-states
  tests-unit-virt-libvirt-test-machine-type-utils --> exception
  tests-unit-virt-libvirt-test-machine-type-utils --> objects-init
  tests-unit-virt-libvirt-test-machine-type-utils --> tests-fixtures-init
  tests-unit-virt-libvirt-test-machine-type-utils --> virt-libvirt-machine-type-utils
  tests-unit-virt-libvirt-test-migration --> compute-power-state
  tests-unit-virt-libvirt-test-migration --> exception
  tests-unit-virt-libvirt-test-migration --> network-model
  tests-unit-virt-libvirt-test-migration --> objects-init
  tests-unit-virt-libvirt-test-migration --> storage-rbd-utils
  tests-unit-virt-libvirt-test-migration --> tests-fixtures-init
  tests-unit-virt-libvirt-test-migration --> tests-fixtures-libvirt
  tests-unit-virt-libvirt-test-migration --> tests-unit-virt-libvirt-test-driver
  tests-unit-virt-libvirt-test-migration --> virt-libvirt-config
  tests-unit-virt-libvirt-test-migration --> virt-libvirt-guest
  tests-unit-virt-libvirt-test-migration --> virt-libvirt-host
  tests-unit-virt-libvirt-test-migration --> virt-libvirt-migration
  tests-unit-virt-libvirt-test-utils --> compute-utils
  tests-unit-virt-libvirt-test-utils --> exception
  tests-unit-virt-libvirt-test-utils --> objects-fields
  tests-unit-virt-libvirt-test-utils --> objects-init
  tests-unit-virt-libvirt-test-utils --> privsep-fs
  tests-unit-virt-libvirt-test-utils --> privsep-qemu
  tests-unit-virt-libvirt-test-utils --> tests-fixtures-init
  tests-unit-virt-libvirt-test-utils --> tests-unit-fake-instance
  tests-unit-virt-libvirt-test-utils --> virt-images
  tests-unit-virt-libvirt-test-utils --> virt-libvirt-guest
  tests-unit-virt-libvirt-test-utils --> virt-libvirt-utils
  tests-unit-virt-libvirt-test-vif --> exception
  tests-unit-virt-libvirt-test-vif --> network-model
  tests-unit-virt-libvirt-test-vif --> objects-init
  tests-unit-virt-libvirt-test-vif --> pci-utils
  tests-unit-virt-libvirt-test-vif --> tests-fixtures-init
  tests-unit-virt-libvirt-test-vif --> tests-fixtures-libvirt
  tests-unit-virt-libvirt-test-vif --> tests-unit-virt-fakelibosinfo
  tests-unit-virt-libvirt-test-vif --> virt-libvirt-config
  tests-unit-virt-libvirt-test-vif --> virt-libvirt-vif
  tests-unit-virt-libvirt-volume-test-cephfs --> tests-unit-virt-libvirt-volume-test-mount
  tests-unit-virt-libvirt-volume-test-cephfs --> tests-unit-virt-libvirt-volume-test-volume
  tests-unit-virt-libvirt-volume-test-cephfs --> utils
  tests-unit-virt-libvirt-volume-test-cephfs --> virt-libvirt-volume-cephfs
  tests-unit-virt-libvirt-volume-test-cephfs --> virt-libvirt-volume-mount
  tests-unit-virt-libvirt-volume-test-fibrechannel --> objects-fields
  tests-unit-virt-libvirt-volume-test-fibrechannel --> tests-unit-virt-libvirt-volume-test-volume
  tests-unit-virt-libvirt-volume-test-fibrechannel --> virt-libvirt-volume-fibrechannel
  tests-unit-virt-libvirt-volume-test-fs --> utils
  tests-unit-virt-libvirt-volume-test-fs --> virt-libvirt-volume-fs
  tests-unit-virt-libvirt-volume-test-gpfs --> tests-unit-virt-libvirt-volume-test-volume
  tests-unit-virt-libvirt-volume-test-gpfs --> virt-libvirt-volume-gpfs
  tests-unit-virt-libvirt-volume-test-iscsi --> tests-unit-virt-libvirt-volume-test-volume
  tests-unit-virt-libvirt-volume-test-iscsi --> virt-libvirt-volume-iscsi
  tests-unit-virt-libvirt-volume-test-iser --> tests-unit-virt-libvirt-volume-test-volume
  tests-unit-virt-libvirt-volume-test-iser --> virt-libvirt-volume-iser
  tests-unit-virt-libvirt-volume-test-lightos --> tests-unit-virt-libvirt-volume-test-volume
  tests-unit-virt-libvirt-volume-test-lightos --> virt-libvirt-volume-lightos
  tests-unit-virt-libvirt-volume-test-mount --> exception
  tests-unit-virt-libvirt-volume-test-mount --> virt-libvirt-config
  tests-unit-virt-libvirt-volume-test-mount --> virt-libvirt-guest
  tests-unit-virt-libvirt-volume-test-mount --> virt-libvirt-host
  tests-unit-virt-libvirt-volume-test-mount --> virt-libvirt-volume-mount
  tests-unit-virt-libvirt-volume-test-net --> conf-init
  tests-unit-virt-libvirt-volume-test-net --> tests-unit-virt-libvirt-volume-test-volume
  tests-unit-virt-libvirt-volume-test-net --> virt-libvirt-volume-net
  tests-unit-virt-libvirt-volume-test-nfs --> tests-unit-virt-libvirt-volume-test-mount
  tests-unit-virt-libvirt-volume-test-nfs --> tests-unit-virt-libvirt-volume-test-volume
  tests-unit-virt-libvirt-volume-test-nfs --> utils
  tests-unit-virt-libvirt-volume-test-nfs --> virt-libvirt-volume-mount
  tests-unit-virt-libvirt-volume-test-nfs --> virt-libvirt-volume-nfs
  tests-unit-virt-libvirt-volume-test-nvme --> tests-unit-virt-libvirt-volume-test-volume
  tests-unit-virt-libvirt-volume-test-nvme --> virt-libvirt-volume-nvme
  tests-unit-virt-libvirt-volume-test-quobyte --> exception
  tests-unit-virt-libvirt-volume-test-quobyte --> tests-unit-virt-libvirt-volume-test-volume
  tests-unit-virt-libvirt-volume-test-quobyte --> utils
  tests-unit-virt-libvirt-volume-test-quobyte --> virt-libvirt-utils
  tests-unit-virt-libvirt-volume-test-quobyte --> virt-libvirt-volume-quobyte
  tests-unit-virt-libvirt-volume-test-remotefs --> virt-libvirt-volume-remotefs
  tests-unit-virt-libvirt-volume-test-scaleio --> tests-unit-virt-libvirt-volume-test-volume
  tests-unit-virt-libvirt-volume-test-scaleio --> virt-libvirt-volume-scaleio
  tests-unit-virt-libvirt-volume-test-smbfs --> tests-unit-virt-libvirt-volume-test-volume
  tests-unit-virt-libvirt-volume-test-smbfs --> utils
  tests-unit-virt-libvirt-volume-test-smbfs --> virt-libvirt-utils
  tests-unit-virt-libvirt-volume-test-smbfs --> virt-libvirt-volume-smbfs
  tests-unit-virt-libvirt-volume-test-storpool --> tests-unit-virt-libvirt-volume-test-volume
  tests-unit-virt-libvirt-volume-test-storpool --> virt-libvirt-volume-storpool
  tests-unit-virt-libvirt-volume-test-volume --> exception
  tests-unit-virt-libvirt-volume-test-volume --> tests-fixtures-init
  tests-unit-virt-libvirt-volume-test-volume --> virt-fake
  tests-unit-virt-libvirt-volume-test-volume --> virt-libvirt-driver
  tests-unit-virt-libvirt-volume-test-volume --> virt-libvirt-host
  tests-unit-virt-libvirt-volume-test-volume --> virt-libvirt-volume-volume
  tests-unit-virt-libvirt-volume-test-vzstorage --> exception
  tests-unit-virt-libvirt-volume-test-vzstorage --> tests-unit-virt-libvirt-volume-test-volume
  tests-unit-virt-libvirt-volume-test-vzstorage --> utils
  tests-unit-virt-libvirt-volume-test-vzstorage --> virt-libvirt-volume-vzstorage
  tests-unit-virt-test-block-device --> exception
  tests-unit-virt-test-block-device --> objects-fields
  tests-unit-virt-test-block-device --> objects-init
  tests-unit-virt-test-block-device --> tests-unit-fake-block-device
  tests-unit-virt-test-block-device --> tests-unit-fake-instance
  tests-unit-virt-test-block-device --> tests-unit-matchers
  tests-unit-virt-test-block-device --> virt-block-device
  tests-unit-virt-test-block-device --> virt-driver
  tests-unit-virt-test-block-device --> virt-fake
  tests-unit-virt-test-block-device --> volume-cinder
  tests-unit-virt-test-configdrive --> objects-init
  tests-unit-virt-test-configdrive --> virt-configdrive
  tests-unit-virt-test-events --> virt-event
  tests-unit-virt-test-fake --> objects-init
  tests-unit-virt-test-fake --> virt-driver
  tests-unit-virt-test-fake --> virt-fake
  tests-unit-virt-test-hardware --> conf-init
  tests-unit-virt-test-hardware --> exception
  tests-unit-virt-test-hardware --> objects-fields
  tests-unit-virt-test-hardware --> objects-init
  tests-unit-virt-test-hardware --> pci-stats
  tests-unit-virt-test-hardware --> tests-unit-fake-pci-device-pools
  tests-unit-virt-test-hardware --> tests-unit-image-fake
  tests-unit-virt-test-hardware --> virt-hardware
  tests-unit-virt-test-imagecache --> compute-vm-states
  tests-unit-virt-test-imagecache --> conf-init
  tests-unit-virt-test-imagecache --> objects-block-device
  tests-unit-virt-test-imagecache --> objects-init
  tests-unit-virt-test-imagecache --> tests-unit-fake-instance
  tests-unit-virt-test-imagecache --> virt-imagecache
  tests-unit-virt-test-images --> compute-utils
  tests-unit-virt-test-images --> exception
  tests-unit-virt-test-images --> virt-images
  tests-unit-virt-test-netutils --> network-model
  tests-unit-virt-test-netutils --> tests-unit-fake-network
  tests-unit-virt-test-netutils --> virt-netutils
  tests-unit-virt-test-node --> exception
  tests-unit-virt-test-node --> tests-fixtures-init
  tests-unit-virt-test-node --> virt-node
  tests-unit-virt-test-osinfo --> exception
  tests-unit-virt-test-osinfo --> objects-init
  tests-unit-virt-test-osinfo --> tests-unit-virt-fakelibosinfo
  tests-unit-virt-test-osinfo --> virt-osinfo
  tests-unit-virt-test-virt --> virt-disk-api
  tests-unit-virt-test-virt --> virt-driver
  tests-unit-virt-test-virt --> virt-fake
  tests-unit-virt-test-virt-drivers --> compute-manager
  tests-unit-virt-test-virt-drivers --> conf-init
  tests-unit-virt-test-virt-drivers --> console-type
  tests-unit-virt-test-virt-drivers --> exception
  tests-unit-virt-test-virt-drivers --> objects-init
  tests-unit-virt-test-virt-drivers --> tests-fixtures-init
  tests-unit-virt-test-virt-drivers --> tests-fixtures-libvirt
  tests-unit-virt-test-virt-drivers --> tests-unit-fake-block-device
  tests-unit-virt-test-virt-drivers --> tests-unit-utils
  tests-unit-virt-test-virt-drivers --> virt-block-device
  tests-unit-virt-test-virt-drivers --> virt-event
  tests-unit-virt-test-virt-drivers --> virt-fake
  tests-unit-virt-test-virt-drivers --> virt-hardware
  tests-unit-virt-test-virt-drivers --> virt-libvirt-imagebackend
  tests-unit-virt-test-virt-drivers --> virt-libvirt-init
  tests-unit-virt-vmwareapi-fake --> exception
  tests-unit-virt-vmwareapi-fake --> virt-vmwareapi-constants
  tests-unit-virt-vmwareapi-stubs --> conf-init
  tests-unit-virt-vmwareapi-stubs --> tests-unit-virt-vmwareapi-fake
  tests-unit-virt-vmwareapi-test-configdrive --> image-glance
  tests-unit-virt-vmwareapi-test-configdrive --> objects-init
  tests-unit-virt-vmwareapi-test-configdrive --> tests-fixtures-init
  tests-unit-virt-vmwareapi-test-configdrive --> tests-unit-fake-instance
  tests-unit-virt-vmwareapi-test-configdrive --> tests-unit-utils
  tests-unit-virt-vmwareapi-test-configdrive --> tests-unit-virt-vmwareapi-fake
  tests-unit-virt-vmwareapi-test-configdrive --> tests-unit-virt-vmwareapi-stubs
  tests-unit-virt-vmwareapi-test-configdrive --> virt-fake
  tests-unit-virt-vmwareapi-test-configdrive --> virt-vmwareapi-driver
  tests-unit-virt-vmwareapi-test-configdrive --> virt-vmwareapi-vm-util
  tests-unit-virt-vmwareapi-test-configdrive --> virt-vmwareapi-vmops
  tests-unit-virt-vmwareapi-test-driver-api --> compute-api
  tests-unit-virt-vmwareapi-test-driver-api --> compute-power-state
  tests-unit-virt-vmwareapi-test-driver-api --> compute-provider-tree
  tests-unit-virt-vmwareapi-test-driver-api --> compute-task-states
  tests-unit-virt-vmwareapi-test-driver-api --> compute-vm-states
  tests-unit-virt-vmwareapi-test-driver-api --> conf-init
  tests-unit-virt-vmwareapi-test-driver-api --> exception
  tests-unit-virt-vmwareapi-test-driver-api --> image-glance
  tests-unit-virt-vmwareapi-test-driver-api --> network-model
  tests-unit-virt-vmwareapi-test-driver-api --> objects-init
  tests-unit-virt-vmwareapi-test-driver-api --> tests-fixtures-init
  tests-unit-virt-vmwareapi-test-driver-api --> tests-unit-fake-diagnostics
  tests-unit-virt-vmwareapi-test-driver-api --> tests-unit-fake-instance
  tests-unit-virt-vmwareapi-test-driver-api --> tests-unit-matchers
  tests-unit-virt-vmwareapi-test-driver-api --> tests-unit-objects-test-diagnostics
  tests-unit-virt-vmwareapi-test-driver-api --> tests-unit-utils
  tests-unit-virt-vmwareapi-test-driver-api --> tests-unit-virt-vmwareapi-fake
  tests-unit-virt-vmwareapi-test-driver-api --> tests-unit-virt-vmwareapi-stubs
  tests-unit-virt-vmwareapi-test-driver-api --> virt-driver
  tests-unit-virt-vmwareapi-test-driver-api --> virt-vmwareapi-constants
  tests-unit-virt-vmwareapi-test-driver-api --> virt-vmwareapi-driver
  tests-unit-virt-vmwareapi-test-driver-api --> virt-vmwareapi-ds-util
  tests-unit-virt-vmwareapi-test-driver-api --> virt-vmwareapi-error-util
  tests-unit-virt-vmwareapi-test-driver-api --> virt-vmwareapi-imagecache
  tests-unit-virt-vmwareapi-test-driver-api --> virt-vmwareapi-images
  tests-unit-virt-vmwareapi-test-driver-api --> virt-vmwareapi-session
  tests-unit-virt-vmwareapi-test-driver-api --> virt-vmwareapi-vif
  tests-unit-virt-vmwareapi-test-driver-api --> virt-vmwareapi-vim-util
  tests-unit-virt-vmwareapi-test-driver-api --> virt-vmwareapi-vm-util
  tests-unit-virt-vmwareapi-test-driver-api --> virt-vmwareapi-vmops
  tests-unit-virt-vmwareapi-test-driver-api --> virt-vmwareapi-volumeops
  tests-unit-virt-vmwareapi-test-ds-util --> exception
  tests-unit-virt-vmwareapi-test-ds-util --> tests-unit-virt-vmwareapi-fake
  tests-unit-virt-vmwareapi-test-ds-util --> virt-vmwareapi-ds-util
  tests-unit-virt-vmwareapi-test-ds-util-datastore-selection --> virt-vmwareapi-ds-util
  tests-unit-virt-vmwareapi-test-imagecache --> objects-init
  tests-unit-virt-vmwareapi-test-imagecache --> tests-unit-fake-instance
  tests-unit-virt-vmwareapi-test-imagecache --> tests-unit-virt-vmwareapi-fake
  tests-unit-virt-vmwareapi-test-imagecache --> virt-vmwareapi-ds-util
  tests-unit-virt-vmwareapi-test-imagecache --> virt-vmwareapi-imagecache
  tests-unit-virt-vmwareapi-test-images --> exception
  tests-unit-virt-vmwareapi-test-images --> objects-init
  tests-unit-virt-vmwareapi-test-images --> virt-vmwareapi-constants
  tests-unit-virt-vmwareapi-test-images --> virt-vmwareapi-images
  tests-unit-virt-vmwareapi-test-images --> virt-vmwareapi-vm-util
  tests-unit-virt-vmwareapi-test-network-util --> tests-unit-virt-vmwareapi-fake
  tests-unit-virt-vmwareapi-test-network-util --> tests-unit-virt-vmwareapi-stubs
  tests-unit-virt-vmwareapi-test-network-util --> virt-vmwareapi-network-util
  tests-unit-virt-vmwareapi-test-network-util --> virt-vmwareapi-session
  tests-unit-virt-vmwareapi-test-session --> tests-unit-virt-vmwareapi-fake
  tests-unit-virt-vmwareapi-test-session --> virt-vmwareapi-session
  tests-unit-virt-vmwareapi-test-vif --> exception
  tests-unit-virt-vmwareapi-test-vif --> network-model
  tests-unit-virt-vmwareapi-test-vif --> tests-unit-utils
  tests-unit-virt-vmwareapi-test-vif --> tests-unit-virt-vmwareapi-fake
  tests-unit-virt-vmwareapi-test-vif --> virt-vmwareapi-constants
  tests-unit-virt-vmwareapi-test-vif --> virt-vmwareapi-network-util
  tests-unit-virt-vmwareapi-test-vif --> virt-vmwareapi-vif
  tests-unit-virt-vmwareapi-test-vim-util --> tests-unit-virt-vmwareapi-fake
  tests-unit-virt-vmwareapi-test-vim-util --> virt-vmwareapi-vim-util
  tests-unit-virt-vmwareapi-test-vm-util --> exception
  tests-unit-virt-vmwareapi-test-vm-util --> network-model
  tests-unit-virt-vmwareapi-test-vm-util --> tests-fixtures-init
  tests-unit-virt-vmwareapi-test-vm-util --> tests-unit-fake-instance
  tests-unit-virt-vmwareapi-test-vm-util --> tests-unit-virt-vmwareapi-fake
  tests-unit-virt-vmwareapi-test-vm-util --> tests-unit-virt-vmwareapi-stubs
  tests-unit-virt-vmwareapi-test-vm-util --> virt-vmwareapi-constants
  tests-unit-virt-vmwareapi-test-vm-util --> virt-vmwareapi-session
  tests-unit-virt-vmwareapi-test-vm-util --> virt-vmwareapi-vm-util
  tests-unit-virt-vmwareapi-test-vmops --> compute-power-state
  tests-unit-virt-vmwareapi-test-vmops --> exception
  tests-unit-virt-vmwareapi-test-vmops --> network-model
  tests-unit-virt-vmwareapi-test-vmops --> objects-init
  tests-unit-virt-vmwareapi-test-vmops --> tests-unit-fake-flavor
  tests-unit-virt-vmwareapi-test-vmops --> tests-unit-fake-instance
  tests-unit-virt-vmwareapi-test-vmops --> tests-unit-virt-vmwareapi-fake
  tests-unit-virt-vmwareapi-test-vmops --> tests-unit-virt-vmwareapi-stubs
  tests-unit-virt-vmwareapi-test-vmops --> virt-hardware
  tests-unit-virt-vmwareapi-test-vmops --> virt-vmwareapi-constants
  tests-unit-virt-vmwareapi-test-vmops --> virt-vmwareapi-ds-util
  tests-unit-virt-vmwareapi-test-vmops --> virt-vmwareapi-images
  tests-unit-virt-vmwareapi-test-vmops --> virt-vmwareapi-session
  tests-unit-virt-vmwareapi-test-vmops --> virt-vmwareapi-vif
  tests-unit-virt-vmwareapi-test-vmops --> virt-vmwareapi-vim-util
  tests-unit-virt-vmwareapi-test-vmops --> virt-vmwareapi-vm-util
  tests-unit-virt-vmwareapi-test-vmops --> virt-vmwareapi-vmops
  tests-unit-virt-vmwareapi-test-volumeops --> compute-power-state
  tests-unit-virt-vmwareapi-test-volumeops --> compute-vm-states
  tests-unit-virt-vmwareapi-test-volumeops --> exception
  tests-unit-virt-vmwareapi-test-volumeops --> tests-unit-fake-instance
  tests-unit-virt-vmwareapi-test-volumeops --> tests-unit-virt-vmwareapi-fake
  tests-unit-virt-vmwareapi-test-volumeops --> tests-unit-virt-vmwareapi-stubs
  tests-unit-virt-vmwareapi-test-volumeops --> virt-vmwareapi-constants
  tests-unit-virt-vmwareapi-test-volumeops --> virt-vmwareapi-session
  tests-unit-virt-vmwareapi-test-volumeops --> virt-vmwareapi-vm-util
  tests-unit-virt-vmwareapi-test-volumeops --> virt-vmwareapi-volumeops
  tests-unit-virt-zvm-test-driver --> compute-provider-tree
  tests-unit-virt-zvm-test-driver --> conf-init
  tests-unit-virt-zvm-test-driver --> exception
  tests-unit-virt-zvm-test-driver --> network-model
  tests-unit-virt-zvm-test-driver --> objects-init
  tests-unit-virt-zvm-test-driver --> tests-unit-fake-instance
  tests-unit-virt-zvm-test-driver --> virt-fake
  tests-unit-virt-zvm-test-driver --> virt-zvm-driver
  tests-unit-virt-zvm-test-guest --> compute-power-state
  tests-unit-virt-zvm-test-guest --> exception
  tests-unit-virt-zvm-test-guest --> tests-unit-fake-instance
  tests-unit-virt-zvm-test-guest --> virt-fake
  tests-unit-virt-zvm-test-guest --> virt-zvm-driver
  tests-unit-virt-zvm-test-guest --> virt-zvm-guest
  tests-unit-virt-zvm-test-hypervisor --> exception
  tests-unit-virt-zvm-test-hypervisor --> tests-unit-fake-instance
  tests-unit-virt-zvm-test-hypervisor --> virt-zvm-driver
  tests-unit-virt-zvm-test-utils --> exception
  tests-unit-virt-zvm-test-utils --> tests-unit-fake-instance
  tests-unit-virt-zvm-test-utils --> virt-zvm-utils
  tests-unit-volume-test-cinder --> conf-init
  tests-unit-volume-test-cinder --> exception
  tests-unit-volume-test-cinder --> service-auth
  tests-unit-volume-test-cinder --> tests-unit-fake-instance
  tests-unit-volume-test-cinder --> volume-cinder
  utils --> conf-init
  utils --> exception
  utils --> i18n
  utils --> objects-service
  virt-block-device --> conf-init
  virt-block-device --> exception
  virt-configdrive --> conf-init
  virt-configdrive --> exception
  virt-configdrive --> objects-fields
  virt-configdrive --> privsep-fs
  virt-configdrive --> utils
  virt-disk-api --> conf-init
  virt-disk-api --> exception
  virt-disk-api --> i18n
  virt-disk-api --> privsep-fs
  virt-disk-api --> privsep-libvirt
  virt-disk-api --> virt-disk-mount-api
  virt-disk-api --> virt-disk-vfs-api
  virt-disk-api --> virt-image-model
  virt-disk-api --> virt-images
  virt-disk-mount-api --> exception
  virt-disk-mount-api --> i18n
  virt-disk-mount-api --> privsep-fs
  virt-disk-mount-api --> virt-image-model
  virt-disk-mount-block --> virt-disk-mount-api
  virt-disk-mount-loop --> i18n
  virt-disk-mount-loop --> privsep-fs
  virt-disk-mount-loop --> virt-disk-mount-api
  virt-disk-mount-nbd --> conf-init
  virt-disk-mount-nbd --> i18n
  virt-disk-mount-nbd --> privsep-fs
  virt-disk-mount-nbd --> utils
  virt-disk-mount-nbd --> virt-disk-mount-api
  virt-disk-vfs-guestfs --> conf-init
  virt-disk-vfs-guestfs --> exception
  virt-disk-vfs-guestfs --> i18n
  virt-disk-vfs-guestfs --> utils
  virt-disk-vfs-guestfs --> virt-disk-vfs-api
  virt-disk-vfs-guestfs --> virt-image-model
  virt-driver --> compute-utils
  virt-driver --> conf-init
  virt-driver --> i18n
  virt-driver --> network-model
  virt-driver --> objects-init
  virt-driver --> virt-block-device
  virt-driver --> virt-event
  virt-driver --> virt-node
  virt-event --> i18n
  virt-fake --> compute-power-state
  virt-fake --> compute-task-states
  virt-fake --> compute-vm-states
  virt-fake --> conf-init
  virt-fake --> console-type
  virt-fake --> exception
  virt-fake --> objects-diagnostics
  virt-fake --> objects-fields
  virt-fake --> objects-init
  virt-fake --> objects-migrate-data
  virt-fake --> virt-driver
  virt-fake --> virt-hardware
  virt-fake --> virt-ironic-driver
  virt-fake --> virt-node
  virt-fake --> virt-virtapi
  virt-hardware --> compute-init
  virt-hardware --> conf-init
  virt-hardware --> exception
  virt-hardware --> i18n
  virt-hardware --> objects-compute-node
  virt-hardware --> objects-fields
  virt-hardware --> objects-init
  virt-hardware --> objects-service
  virt-hardware --> pci-stats
  virt-hardware --> scheduler-client-report
  virt-image-model --> exception
  virt-imagecache --> compute-task-states
  virt-imagecache --> compute-vm-states
  virt-imagecache --> conf-init
  virt-imagecache --> objects-init
  virt-imagecache --> virt-block-device
  virt-images --> compute-utils
  virt-images --> conf-init
  virt-images --> exception
  virt-images --> i18n
  virt-images --> image-glance
  virt-images --> privsep-qemu
  virt-ironic-driver --> api-metadata-base
  virt-ironic-driver --> compute-power-state
  virt-ironic-driver --> compute-task-states
  virt-ironic-driver --> compute-vm-states
  virt-ironic-driver --> conf-init
  virt-ironic-driver --> console-type
  virt-ironic-driver --> exception
  virt-ironic-driver --> i18n
  virt-ironic-driver --> objects-external-event
  virt-ironic-driver --> objects-fields
  virt-ironic-driver --> objects-init
  virt-ironic-driver --> servicegroup-init
  virt-ironic-driver --> utils
  virt-ironic-driver --> virt-configdrive
  virt-ironic-driver --> virt-driver
  virt-ironic-driver --> virt-hardware
  virt-ironic-driver --> virt-ironic-ironic-states
  virt-ironic-driver --> virt-ironic-patcher
  virt-ironic-driver --> virt-netutils
  virt-ironic-init --> virt-ironic-driver
  virt-ironic-patcher --> conf-init
  virt-libvirt-blockinfo --> exception
  virt-libvirt-blockinfo --> i18n
  virt-libvirt-blockinfo --> objects-base
  virt-libvirt-blockinfo --> objects-fields
  virt-libvirt-blockinfo --> virt-configdrive
  virt-libvirt-blockinfo --> virt-driver
  virt-libvirt-blockinfo --> virt-libvirt-utils
  virt-libvirt-blockinfo --> virt-osinfo
  virt-libvirt-config --> exception
  virt-libvirt-config --> i18n
  virt-libvirt-config --> objects-fields
  virt-libvirt-config --> pci-utils
  virt-libvirt-config --> virt-hardware
  virt-libvirt-cpu-api --> conf-init
  virt-libvirt-cpu-api --> exception
  virt-libvirt-cpu-api --> i18n
  virt-libvirt-cpu-api --> objects-init
  virt-libvirt-cpu-api --> virt-hardware
  virt-libvirt-cpu-api --> virt-libvirt-cpu-core
  virt-libvirt-cpu-core --> exception
  virt-libvirt-cpu-core --> privsep-init
  virt-libvirt-cpu-core --> virt-hardware
  virt-libvirt-designer --> pci-utils
  virt-libvirt-driver --> api-metadata-base
  virt-libvirt-driver --> api-metadata-password
  virt-libvirt-driver --> compute-power-state
  virt-libvirt-driver --> compute-provider-tree
  virt-libvirt-driver --> compute-task-states
  virt-libvirt-driver --> compute-utils
  virt-libvirt-driver --> compute-vm-states
  virt-libvirt-driver --> conf-init
  virt-libvirt-driver --> console-serial
  virt-libvirt-driver --> console-type
  virt-libvirt-driver --> exception
  virt-libvirt-driver --> i18n
  virt-libvirt-driver --> image-glance
  virt-libvirt-driver --> network-model
  virt-libvirt-driver --> network-neutron
  virt-libvirt-driver --> objects-diagnostics
  virt-libvirt-driver --> objects-fields
  virt-libvirt-driver --> objects-init
  virt-libvirt-driver --> objects-migrate-data
  virt-libvirt-driver --> pci-utils
  virt-libvirt-driver --> pci-whitelist
  virt-libvirt-driver --> privsep-libvirt
  virt-libvirt-driver --> privsep-path
  virt-libvirt-driver --> privsep-utils
  virt-libvirt-driver --> storage-rbd-utils
  virt-libvirt-driver --> utils
  virt-libvirt-driver --> virt-block-device
  virt-libvirt-driver --> virt-configdrive
  virt-libvirt-driver --> virt-disk-api
  virt-libvirt-driver --> virt-disk-vfs-guestfs
  virt-libvirt-driver --> virt-driver
  virt-libvirt-driver --> virt-event
  virt-libvirt-driver --> virt-hardware
  virt-libvirt-driver --> virt-image-model
  virt-libvirt-driver --> virt-images
  virt-libvirt-driver --> virt-libvirt-blockinfo
  virt-libvirt-driver --> virt-libvirt-config
  virt-libvirt-driver --> virt-libvirt-cpu-api
  virt-libvirt-driver --> virt-libvirt-designer
  virt-libvirt-driver --> virt-libvirt-event
  virt-libvirt-driver --> virt-libvirt-guest
  virt-libvirt-driver --> virt-libvirt-host
  virt-libvirt-driver --> virt-libvirt-imagebackend
  virt-libvirt-driver --> virt-libvirt-imagecache
  virt-libvirt-driver --> virt-libvirt-instancejobtracker
  virt-libvirt-driver --> virt-libvirt-migration
  virt-libvirt-driver --> virt-libvirt-storage-dmcrypt
  virt-libvirt-driver --> virt-libvirt-storage-lvm
  virt-libvirt-driver --> virt-libvirt-utils
  virt-libvirt-driver --> virt-libvirt-vif
  virt-libvirt-driver --> virt-libvirt-volume-cephfs
  virt-libvirt-driver --> virt-libvirt-volume-fs
  virt-libvirt-driver --> virt-libvirt-volume-mount
  virt-libvirt-driver --> virt-libvirt-volume-nfs
  virt-libvirt-driver --> virt-libvirt-volume-remotefs
  virt-libvirt-driver --> virt-libvirt-volume-volume
  virt-libvirt-driver --> virt-netutils
  virt-libvirt-driver --> volume-cinder
  virt-libvirt-event --> virt-event
  virt-libvirt-guest --> compute-power-state
  virt-libvirt-guest --> exception
  virt-libvirt-guest --> i18n
  virt-libvirt-guest --> virt-hardware
  virt-libvirt-guest --> virt-libvirt-config
  virt-libvirt-host --> compute-utils
  virt-libvirt-host --> conf-init
  virt-libvirt-host --> exception
  virt-libvirt-host --> i18n
  virt-libvirt-host --> objects-fields
  virt-libvirt-host --> pci-utils
  virt-libvirt-host --> utils
  virt-libvirt-host --> virt-event
  virt-libvirt-host --> virt-libvirt-config
  virt-libvirt-host --> virt-libvirt-event
  virt-libvirt-host --> virt-libvirt-guest
  virt-libvirt-host --> virt-libvirt-migration
  virt-libvirt-host --> virt-libvirt-utils
  virt-libvirt-host --> virt-node
  virt-libvirt-imagebackend --> conf-init
  virt-libvirt-imagebackend --> exception
  virt-libvirt-imagebackend --> i18n
  virt-libvirt-imagebackend --> image-glance
  virt-libvirt-imagebackend --> privsep-libvirt
  virt-libvirt-imagebackend --> privsep-path
  virt-libvirt-imagebackend --> storage-rbd-utils
  virt-libvirt-imagebackend --> utils
  virt-libvirt-imagebackend --> virt-disk-api
  virt-libvirt-imagebackend --> virt-image-model
  virt-libvirt-imagebackend --> virt-images
  virt-libvirt-imagebackend --> virt-libvirt-config
  virt-libvirt-imagebackend --> virt-libvirt-storage-dmcrypt
  virt-libvirt-imagebackend --> virt-libvirt-storage-lvm
  virt-libvirt-imagebackend --> virt-libvirt-utils
  virt-libvirt-imagecache --> conf-init
  virt-libvirt-imagecache --> privsep-path
  virt-libvirt-imagecache --> utils
  virt-libvirt-imagecache --> virt-imagecache
  virt-libvirt-imagecache --> virt-libvirt-utils
  virt-libvirt-init --> virt-libvirt-driver
  virt-libvirt-machine-type-utils --> compute-vm-states
  virt-libvirt-machine-type-utils --> exception
  virt-libvirt-machine-type-utils --> objects-init
  virt-libvirt-migration --> compute-power-state
  virt-libvirt-migration --> conf-init
  virt-libvirt-migration --> exception
  virt-libvirt-migration --> objects-init
  virt-libvirt-migration --> storage-rbd-utils
  virt-libvirt-migration --> virt-hardware
  virt-libvirt-migration --> virt-libvirt-config
  virt-libvirt-storage-dmcrypt --> privsep-libvirt
  virt-libvirt-storage-lvm --> conf-init
  virt-libvirt-storage-lvm --> exception
  virt-libvirt-storage-lvm --> i18n
  virt-libvirt-storage-lvm --> privsep-fs
  virt-libvirt-utils --> conf-init
  virt-libvirt-utils --> exception
  virt-libvirt-utils --> i18n
  virt-libvirt-utils --> objects-fields
  virt-libvirt-utils --> objects-init
  virt-libvirt-utils --> privsep-fs
  virt-libvirt-utils --> privsep-idmapshift
  virt-libvirt-utils --> privsep-libvirt
  virt-libvirt-utils --> privsep-path
  virt-libvirt-utils --> scheduler-utils
  virt-libvirt-utils --> utils
  virt-libvirt-utils --> virt-images
  virt-libvirt-utils --> virt-libvirt-config
  virt-libvirt-utils --> virt-libvirt-guest
  virt-libvirt-utils --> virt-libvirt-volume-remotefs
  virt-libvirt-vif --> conf-init
  virt-libvirt-vif --> exception
  virt-libvirt-vif --> i18n
  virt-libvirt-vif --> network-model
  virt-libvirt-vif --> network-os-vif-util
  virt-libvirt-vif --> objects-init
  virt-libvirt-vif --> pci-utils
  virt-libvirt-vif --> privsep-linux-net
  virt-libvirt-vif --> utils
  virt-libvirt-vif --> virt-hardware
  virt-libvirt-vif --> virt-libvirt-config
  virt-libvirt-vif --> virt-libvirt-designer
  virt-libvirt-vif --> virt-libvirt-host
  virt-libvirt-vif --> virt-osinfo
  virt-libvirt-volume-cephfs --> conf-init
  virt-libvirt-volume-cephfs --> virt-libvirt-volume-fs
  virt-libvirt-volume-fibrechannel --> conf-init
  virt-libvirt-volume-fibrechannel --> utils
  virt-libvirt-volume-fibrechannel --> virt-libvirt-volume-volume
  virt-libvirt-volume-fs --> utils
  virt-libvirt-volume-fs --> virt-libvirt-volume-mount
  virt-libvirt-volume-fs --> virt-libvirt-volume-volume
  virt-libvirt-volume-gpfs --> virt-libvirt-volume-fs
  virt-libvirt-volume-iscsi --> conf-init
  virt-libvirt-volume-iscsi --> utils
  virt-libvirt-volume-iscsi --> virt-libvirt-volume-volume
  virt-libvirt-volume-iser --> conf-init
  virt-libvirt-volume-iser --> utils
  virt-libvirt-volume-iser --> virt-libvirt-volume-iscsi
  virt-libvirt-volume-lightos --> conf-init
  virt-libvirt-volume-lightos --> utils
  virt-libvirt-volume-lightos --> virt-libvirt-volume-volume
  virt-libvirt-volume-mount --> conf-init
  virt-libvirt-volume-mount --> exception
  virt-libvirt-volume-mount --> privsep-fs
  virt-libvirt-volume-mount --> privsep-path
  virt-libvirt-volume-net --> conf-init
  virt-libvirt-volume-net --> virt-libvirt-volume-volume
  virt-libvirt-volume-nfs --> conf-init
  virt-libvirt-volume-nfs --> virt-libvirt-volume-fs
  virt-libvirt-volume-nvme --> conf-init
  virt-libvirt-volume-nvme --> utils
  virt-libvirt-volume-nvme --> virt-libvirt-volume-volume
  virt-libvirt-volume-quobyte --> conf-init
  virt-libvirt-volume-quobyte --> exception
  virt-libvirt-volume-quobyte --> i18n
  virt-libvirt-volume-quobyte --> privsep-libvirt
  virt-libvirt-volume-quobyte --> utils
  virt-libvirt-volume-quobyte --> virt-libvirt-volume-fs
  virt-libvirt-volume-remotefs --> conf-init
  virt-libvirt-volume-remotefs --> privsep-fs
  virt-libvirt-volume-remotefs --> utils
  virt-libvirt-volume-scaleio --> conf-init
  virt-libvirt-volume-scaleio --> utils
  virt-libvirt-volume-scaleio --> virt-libvirt-volume-volume
  virt-libvirt-volume-smbfs --> conf-init
  virt-libvirt-volume-smbfs --> virt-libvirt-utils
  virt-libvirt-volume-smbfs --> virt-libvirt-volume-fs
  virt-libvirt-volume-smbfs --> virt-libvirt-volume-remotefs
  virt-libvirt-volume-storpool --> utils
  virt-libvirt-volume-storpool --> virt-libvirt-volume-volume
  virt-libvirt-volume-volume --> conf-init
  virt-libvirt-volume-volume --> exception
  virt-libvirt-volume-volume --> virt-block-device
  virt-libvirt-volume-volume --> virt-libvirt-config
  virt-libvirt-volume-vzstorage --> exception
  virt-libvirt-volume-vzstorage --> i18n
  virt-libvirt-volume-vzstorage --> utils
  virt-libvirt-volume-vzstorage --> virt-libvirt-volume-fs
  virt-netutils --> conf-init
  virt-netutils --> network-model
  virt-node --> conf-init
  virt-node --> exception
  virt-osinfo --> exception
  virt-osinfo --> objects-fields
  virt-storage-users --> utils
  virt-vmwareapi-constants --> compute-power-state
  virt-vmwareapi-constants --> network-model
  virt-vmwareapi-driver --> compute-power-state
  virt-vmwareapi-driver --> compute-task-states
  virt-vmwareapi-driver --> compute-utils
  virt-vmwareapi-driver --> conf-init
  virt-vmwareapi-driver --> exception
  virt-vmwareapi-driver --> i18n
  virt-vmwareapi-driver --> objects-init
  virt-vmwareapi-driver --> privsep-path
  virt-vmwareapi-driver --> virt-driver
  virt-vmwareapi-driver --> virt-vmwareapi-constants
  virt-vmwareapi-driver --> virt-vmwareapi-ds-util
  virt-vmwareapi-driver --> virt-vmwareapi-error-util
  virt-vmwareapi-driver --> virt-vmwareapi-host
  virt-vmwareapi-driver --> virt-vmwareapi-session
  virt-vmwareapi-driver --> virt-vmwareapi-vim-util
  virt-vmwareapi-driver --> virt-vmwareapi-vm-util
  virt-vmwareapi-driver --> virt-vmwareapi-vmops
  virt-vmwareapi-driver --> virt-vmwareapi-volumeops
  virt-vmwareapi-ds-util --> exception
  virt-vmwareapi-ds-util --> i18n
  virt-vmwareapi-ds-util --> virt-vmwareapi-constants
  virt-vmwareapi-ds-util --> virt-vmwareapi-vim-util
  virt-vmwareapi-ds-util --> virt-vmwareapi-vm-util
  virt-vmwareapi-error-util --> exception
  virt-vmwareapi-error-util --> i18n
  virt-vmwareapi-host --> conf-init
  virt-vmwareapi-host --> exception
  virt-vmwareapi-host --> objects-fields
  virt-vmwareapi-host --> objects-init
  virt-vmwareapi-host --> virt-vmwareapi-ds-util
  virt-vmwareapi-host --> virt-vmwareapi-vim-util
  virt-vmwareapi-host --> virt-vmwareapi-vm-util
  virt-vmwareapi-imagecache --> virt-imagecache
  virt-vmwareapi-imagecache --> virt-vmwareapi-ds-util
  virt-vmwareapi-images --> exception
  virt-vmwareapi-images --> i18n
  virt-vmwareapi-images --> image-glance
  virt-vmwareapi-images --> objects-fields
  virt-vmwareapi-images --> virt-vmwareapi-constants
  virt-vmwareapi-images --> virt-vmwareapi-vm-util
  virt-vmwareapi-init --> virt-vmwareapi-driver
  virt-vmwareapi-network-util --> virt-vmwareapi-vim-util
  virt-vmwareapi-network-util --> virt-vmwareapi-vm-util
  virt-vmwareapi-session --> conf-init
  virt-vmwareapi-vif --> conf-init
  virt-vmwareapi-vif --> exception
  virt-vmwareapi-vif --> i18n
  virt-vmwareapi-vif --> network-model
  virt-vmwareapi-vif --> virt-vmwareapi-constants
  virt-vmwareapi-vif --> virt-vmwareapi-network-util
  virt-vmwareapi-vif --> virt-vmwareapi-vm-util
  virt-vmwareapi-vim-util --> conf-init
  virt-vmwareapi-vm-util --> conf-init
  virt-vmwareapi-vm-util --> exception
  virt-vmwareapi-vm-util --> i18n
  virt-vmwareapi-vm-util --> network-model
  virt-vmwareapi-vm-util --> virt-vmwareapi-constants
  virt-vmwareapi-vm-util --> virt-vmwareapi-session
  virt-vmwareapi-vm-util --> virt-vmwareapi-vim-util
  virt-vmwareapi-vmops --> api-metadata-base
  virt-vmwareapi-vmops --> compute-api
  virt-vmwareapi-vmops --> compute-power-state
  virt-vmwareapi-vmops --> compute-task-states
  virt-vmwareapi-vmops --> conf-init
  virt-vmwareapi-vmops --> console-type
  virt-vmwareapi-vmops --> exception
  virt-vmwareapi-vmops --> i18n
  virt-vmwareapi-vmops --> network-neutron
  virt-vmwareapi-vmops --> objects-fields
  virt-vmwareapi-vmops --> objects-init
  virt-vmwareapi-vmops --> utils
  virt-vmwareapi-vmops --> virt-configdrive
  virt-vmwareapi-vmops --> virt-driver
  virt-vmwareapi-vmops --> virt-hardware
  virt-vmwareapi-vmops --> virt-vmwareapi-constants
  virt-vmwareapi-vmops --> virt-vmwareapi-ds-util
  virt-vmwareapi-vmops --> virt-vmwareapi-error-util
  virt-vmwareapi-vmops --> virt-vmwareapi-imagecache
  virt-vmwareapi-vmops --> virt-vmwareapi-images
  virt-vmwareapi-vmops --> virt-vmwareapi-vif
  virt-vmwareapi-vmops --> virt-vmwareapi-vim-util
  virt-vmwareapi-vmops --> virt-vmwareapi-vm-util
  virt-vmwareapi-volumeops --> compute-power-state
  virt-vmwareapi-volumeops --> conf-init
  virt-vmwareapi-volumeops --> exception
  virt-vmwareapi-volumeops --> i18n
  virt-vmwareapi-volumeops --> virt-vmwareapi-constants
  virt-vmwareapi-volumeops --> virt-vmwareapi-session
  virt-vmwareapi-volumeops --> virt-vmwareapi-vm-util
  virt-zvm-driver --> compute-task-states
  virt-zvm-driver --> conf-init
  virt-zvm-driver --> exception
  virt-zvm-driver --> i18n
  virt-zvm-driver --> image-glance
  virt-zvm-driver --> objects-fields
  virt-zvm-driver --> virt-driver
  virt-zvm-driver --> virt-images
  virt-zvm-driver --> virt-zvm-guest
  virt-zvm-driver --> virt-zvm-hypervisor
  virt-zvm-driver --> virt-zvm-utils
  virt-zvm-guest --> compute-power-state
  virt-zvm-guest --> conf-init
  virt-zvm-guest --> virt-hardware
  virt-zvm-hypervisor --> compute-power-state
  virt-zvm-hypervisor --> conf-init
  virt-zvm-hypervisor --> exception
  virt-zvm-hypervisor --> virt-zvm-utils
  virt-zvm-init --> virt-zvm-driver
  virt-zvm-utils --> api-metadata-base
  virt-zvm-utils --> conf-init
  virt-zvm-utils --> exception
  virt-zvm-utils --> virt-configdrive
  volume-cinder --> conf-init
  volume-cinder --> exception
  volume-cinder --> i18n
  volume-cinder --> service-auth
  wsgi-metadata --> api-openstack-wsgi-app
  wsgi-osapi-compute --> api-openstack-wsgi-app
```

---

## Local Data Flow

Source: `securitySurface` arrays in `.aee/kb/src/nova/**/*.json`.

**Entry points (174 total -- unchanged from batch 8):**

Production entry points (53):

| File | Line | Category | Description |
|---|---|---|---|
| `accelerator/cyborg.py` | L56 | http-param | `context` carries caller auth/session state into `_CyborgClient.__init__` |
| `accelerator/cyborg.py` | L88 | http-param | `dp_name` forwarded to Cyborg API |
| `accelerator/cyborg.py` | L255 | http-param | `bindings` dict serialised as JSON patch body in `bind_arqs` |
| `accelerator/cyborg.py` | L291 | http-param | `instance_uuid` used as Cyborg API query parameter |
| `accelerator/cyborg.py` | L337 | http-param | `arq_uuid` interpolated into Cyborg API URL path |
| `api/auth.py` | L55 | http-param | `@webob.dec.wsgify` -- inbound WSGI request enters auth middleware |
| `api/openstack/__init__.py` | L91 | http-param | `@webob.dec.wsgify` -- request enters API router |
| `api/openstack/common.py` | L155 | http-param | `request.params` -- query parameters read for filtering |
| `api/openstack/common.py` | L189 | http-param | `request.GET['limit']` -- limit parameter from query string |
| `cmd/compute.py` | L49 | cli-args | `config.parse_args(sys.argv)` |
| `cmd/conductor.py` | L39 | cli-args | `config.parse_args(sys.argv)` |
| `cmd/manage.py` | L3821 | cli-args | `config.parse_args(sys.argv)` |
| `cmd/policy.py` | L48 | env | `os.environ.get('OS_ROLES')` |
| `cmd/policy.py` | L53 | env | `os.environ.get('OS_USER_ID')` |
| `cmd/policy.py` | L58 | env | `os.environ.get('OS_TENANT_ID')` |
| `console/serial.py` | L83 | network-socket | raw socket opened for serial console connection |
| `exception.py` | L27 | http-param | `import webob.exc` -- webob exception types enter nova hierarchy |
| `exception.py` | L35 | http-param | `ConvertedException(webob.exc.WSGIHTTPException)` |

(35 further production entry points in `api/` controller and `cmd/` launcher files. Source: `.aee/kb/src/nova/api/**/*.json`, `.aee/kb/src/nova/cmd/**/*.json:securitySurface`.)

Test entry points (121): `tests/unit/` and `tests/functional/` -- `http-param`, `cli-args`, `network-socket` categories. Test framework inputs; not production attack surface.

**Sinks (1,827 total -- 144 added in batch 9):**

| Category | Count | Primary sources |
|---|---|---|
| db-write | 1,706 | Production (900) + tests (806) -- virt adds 138: block_device.py (7), driver.py (5), libvirt/driver.py (70), libvirt/migration.py (10), libvirt/host.py (6), ironic/driver.py (8), vmwareapi/* (9), hardware.py (3), etc. |
| network-send | 7 | `accelerator/cyborg.py` (unchanged) |
| file-write | 114 | Production (14) + tests (100) -- virt adds: configdrive.py (2), disk/vfs/guestfs.py (1), libvirt/imagebackend.py (1), libvirt/host.py (1), libvirt/utils.py (1), node.py (1), storage_users.py (2), vmwareapi/images.py (2) |

New production sinks from batch 9:
- `virt/libvirt/driver.py` -- 70 security surface entries; privsep-entrypoint privileges dominate, with `db-write` sinks for driver capability updates. Source: `.aee/kb/src/nova/virt/libvirt/driver.py.json:securitySurface`.
- `virt/libvirt/vif.py:L103-L137` -- privsep calls to `linux_net` for VIF MAC address configuration and VLAN tagging (22 privilege entries). Source: `.aee/kb/src/nova/virt/libvirt/vif.py.json:securitySurface`.
- `virt/block_device.py:L94-L332` -- 7 db-write sinks from `DriverBlockDevice.save()` and `update()` calls. Source: `.aee/kb/src/nova/virt/block_device.py.json:securitySurface`.
- `virt/configdrive.py:L63, L68, L103` -- file-write sinks for config-drive ISO/VFAT assembly. Source: `.aee/kb/src/nova/virt/configdrive.py.json:securitySurface`.
- `virt/node.py:L39` -- file-write sink: node UUID written to disk. Source: `.aee/kb/src/nova/virt/node.py.json:securitySurface`.
- `volume/cinder.py:L284, L660, L865, L892, L899, L936` -- 6 db-write sinks for volume attachment updates and Cinder API calls. Source: `.aee/kb/src/nova/volume/cinder.py.json:securitySurface`.

**Data flow paths (production):**

1. **CLI entry points -> service startup.** Each `cmd/*.py` calls `config.parse_args(sys.argv)`; no sink within `cmd/`.
2. **API layer -> downstream.** HTTP requests enter at `@webob.dec.wsgify`; validated; dispatched -> `compute/api.py` -> `db/main/api.py`. Policy checks via `policies/*.py`.
3. **Compute API -> instance lifecycle.** `compute/api.py` (`_validate_bdm` CCN 43, `_delete` CCN 29, `resize` CCN 28) and `compute/manager.py` (`_init_instance` CCN 40).
4. **Conductor -> multi-node orchestration.** `conductor/manager.py:build_instances` (CCN 34).
5. **Hypervisor driver -> VM operations.** `compute/manager.py` calls `virt/driver.py:ComputeDriver` methods; the libvirt driver (`virt/libvirt/driver.py`) executes disk, network, and CPU operations via privsep. Disk images prepared via `virt/images.py` (privsep.qemu calls), mounted via `virt/disk/mount/` (privsep.fs calls). Source: link-graph edges `compute-manager-py` -> `virt-libvirt-driver-py` etc.
6. **Config-drive -> file-write (privileged).** `virt/configdrive.py:L63,L68,L103` writes ISO/VFAT drive data; privsep.fs.unprivileged_mkfs/mount at L106/L111. Source: `.aee/kb/src/nova/virt/configdrive.py.json:securitySurface`.
7. **VIF plug/unplug -> privsep linux_net.** `virt/libvirt/vif.py:L103-L137` calls `privsep.linux_net` for MAC address, VLAN, trust configuration on SR-IOV VFs. Source: `.aee/kb/src/nova/virt/libvirt/vif.py.json:securitySurface`.
8. **Volume attach -> Cinder API.** `volume/cinder.py` uses service-token auth (`L75`) to call Cinder v3 API; attachment records updated at `L892`. Source: `.aee/kb/src/nova/volume/cinder.py.json:securitySurface`.
9. **Accelerator -> Cyborg HTTP.** Parameters at `cyborg.py:L56/L88/L255/L291/L337` reach network-send sinks.
10. **Image service -> Glance HTTP + local file.** `image/glance.py` with signature verification (`_verify_and_write` CCN 17) -> file-write sinks at L413, L429.
11. **Privsep -> privileged subprocess.** All `privsep/` and calling `virt/` functions (`virt/disk/`, `virt/libvirt/`, `virt/configdrive.py`, `virt/images.py`) route through oslo.privsep daemon.
12. **PCI tracker -> DB.** `pci/manager.py` and `pci/stats.py` update PCI device records.
13. **Notifications -> oslo.messaging bus.** `notifications/base.py` dispatches versioned notifications.
14. **Limit enforcement -> oslo_limit + Placement.** `limit/local.py`, `limit/placement.py`, `limit/utils.py`.
15. **Objects -> db/main/api.py.** OVO domain objects -> SQLAlchemy writes.
16. **Network -> Neutron HTTP.** `network/neutron.py`.
17. **Scheduler -> Placement HTTP.** `scheduler/client/report.py`.
18. **Console -> network socket.** `console/serial.py:L83`.
19. **Servicegroup -> DB/Memcache heartbeat.** `servicegroup/drivers/db.py:L88` and `servicegroup/drivers/mc.py:L93`.
20. **Share -> Manila HTTP.** `share/manila.py` via openstack SDK.

**Privileges (747 total -- 129 added in batch 9):**

Batch 9 adds 127 `privsep-entrypoint` privileges from `virt/` (the caller side of privsep calls: `virt/libvirt/driver.py` 70, `virt/libvirt/vif.py` 22, `virt/disk/api.py` 13, `virt/libvirt/utils.py` 14, `virt/disk/mount/*` 13, `virt/configdrive.py` 3, `virt/images.py` 5, `virt/libvirt/storage/*` 12, `virt/libvirt/volume/mount.py` 5, others) and 2 `crypto-key` from `volume/cinder.py:L30,L75`. All `privsep-entrypoint` entries represent callers of oslo.privsep-decorated functions in `privsep/`. Source: `.aee/kb/src/nova/virt/**/*.json:securitySurface`, `.aee/kb/src/nova/volume/cinder.py.json:securitySurface`.

Total production privileges: 252 (58 in privsep/ decorated functions + 127 new virt/ callers + 67 crypto-key). Test privileges: 495.

No untrusted-input sanitisation steps are recorded in any production `securitySurface` entry across the 1,484 KB records.

---

## Cross-Component Interfaces

The link graph records **0 cross-component file edges** and **0 cross-component seams**. All 5,884 file edges are intra-component. The link summary notes 923 unresolved imports (down from 1,200 in batch 8): bare `nova` (913 refs, representing dynamic attribute-access patterns across all files rather than a missing module), `nova.context` (7), `nova.policy` (2), `nova.quota` (1). All named module-level gaps from previous runs are now resolved -- `nova.virt.*` cluster (283 refs) and `nova.volume` (23 refs) fully resolved in this batch. Source: `.aee/link-summary.md`.
