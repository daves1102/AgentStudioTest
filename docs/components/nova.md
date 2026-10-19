# Component: nova

## Overview

The `nova` component encompasses the core OpenStack Compute service subsystems extracted across three batches: the accelerator integration layer (`accelerator/`), exception and internationalisation utilities (`exception.py`, `i18n.py`, `service_auth.py`, `utils.py`), the versioned object layer (`objects/`), the database access layer (`db/`), and the scheduler subsystem (`scheduler/`). All 122 files are classified as component `nova`; no other component exists in the current KB.

**Batch provenance** — batch 1 (`6d56e5a`, 2026-10-16): 2 files; batch 2 (`733c73`, 2026-10-19): 53 files; batch 3 (`868bfe40`, 2026-10-19): 67 files.

Subsystem responsibilities:
- **accelerator/** — HTTP client façade for the Cyborg accelerator API.
- **exception.py / i18n.py** — exception class hierarchy and internationalisation factory.
- **service_auth.py / utils.py** — service-token authentication helpers and general utilities.
- **objects/** — oslo.versionedobjects-based domain model for all Nova entities (instances, flavors, compute nodes, migrations, etc.).
- **db/api/** — Alembic-managed API database schema (cell mappings, request specs, flavors, quotas, etc.).
- **db/main/** — Alembic-managed main database schema (instances, migrations, security groups, PCI devices, etc.) and SQLAlchemy query API (`db/main/api.py`, 4,967 lines).
- **db/migration.py / db/utils.py / db/types.py / db/constants.py** — database migration entry points, shared column types, and helper utilities.
- **scheduler/** — placement-aware scheduling: host manager, request filters, host filters, weighers, RPC API client, and Placement resource-provider report client.

Source: `.aee/intake-summary.md` (batch 868bfe40); `.aee/link-summary.md`.

---

## File Inventory

All 122 KB records. LOC figures are taken from each record's `lines` block. Source: `.aee/kb/src/nova/**/*.json`.

| File | Total | Code | Comment | Blank |
|---|---|---|---|---|
| `accelerator/__init__.py` | 0 | 0 | 0 | 0 |
| `accelerator/cyborg.py` | 419 | 324 | 26 | 69 |
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
| **TOTAL** | **42,016** | **28,982** | | |

### Top 5 Functions by Cyclomatic Complexity

Taken from the `ccn` field of each KB symbol record.

| CCN | Function | File |
|---|---|---|
| 42 | `obj_make_compatible` | `objects/image_meta.py` |
| 32 | `_pass_exact_filters` | `objects/build_request.py` |
| 31 | `obj_make_compatible` | `objects/migrate_data.py` |
| 27 | `resources_from_request_spec` | `scheduler/utils.py` |
| 26 | `create` | `objects/instance.py` |

---

## Defined Symbols

Across all 122 KB records the component defines **4,819 symbols** in total. Source: `symbols` arrays in `.aee/kb/src/nova/**/*.json`.

| Kind | Count |
|---|---|
| field | 1,248 |
| method | 1,107 |
| class | 894 |
| constant | 769 |
| function | 526 |
| variable | 189 |
| property | 79 |
| import | 7 |

Selected key symbols by subsystem:

**accelerator/**
- Class `_CyborgClient` (`accelerator/cyborg.py:L118-L419`): 14 public HTTP-wrapper methods (`get_client`, `_get_device_profile_list`, `get_arqs_for_instance`, `bind_arqs`, `delete_arqs_for_instance`, `get_arq_by_uuid`, etc.).
- Module-level function `get_client` (`accelerator/cyborg.py:L53-L65`): factory that constructs or returns a lazily-created `_CyborgClient` instance.

**exception.py**
- 769 constant symbols (one per Nova exception class, e.g. `NovaException`, `NotFound`, `Invalid`, `Conflict`, `Forbidden`, `Unauthorized`, `InstanceNotFound`, `ComputeHostNotFound`, etc.) defined as `class Foo(NovaException)` stubs (`exception.py:L27-L2682`).
- Class `ConvertedException` (`exception.py:L35`): bridges `webob.exc.WSGIHTTPException` into the Nova exception hierarchy.

**objects/**
- 45 domain-object classes, one per file (e.g. `Instance`, `Flavor`, `ComputeNode`, `Migration`, `RequestSpec`, `InstanceGroup`, `PciDevice`, `Aggregate`, `Service`, etc.).
- Base classes `NovaObject` and `NovaObjectDictCompat` in `objects/base.py` implement `oslo.versionedobjects` version negotiation (`obj_make_compatible` overrides).
- `objects/fields.py` (1,469 lines): 894 field-type classes used across all domain objects.
- `objects/__init__.py` (122 lines): imports all 45 object modules to register them with the OVO registry.

**db/api/** and **db/main/**
- `db/api/models.py`: 23 SQLAlchemy ORM model classes for the API database (`CellMapping`, `InstanceMapping`, `HostMapping`, `RequestSpec`, `Flavors`, `BuildRequest`, `KeyPair`, `InstanceGroup`, `Quota`, etc.).
- `db/main/models.py`: ORM models for the main database (instances, migrations, security groups, block devices, PCI devices, compute nodes, etc.).
- `db/main/api.py` (4,967 lines, 3,535 LOC): 526+ module-level functions providing the complete SQLAlchemy query API (`instance_create`, `instance_get`, `instance_destroy`, `migration_create`, `compute_node_update`, `security_group_*`, `block_device_mapping_*`, etc.).
- `db/migration.py`: functions `db_sync`, `db_version`, `db_initial_version` delegating to `db/api/api.py` and `db/main/api.py` (`db/migration.py:L1-L108`).

**scheduler/**
- `scheduler/manager.py`: class `SchedulerManager` orchestrating host selection via `select_destinations`.
- `scheduler/host_manager.py`: class `HostManager` building and maintaining the host-state map.
- `scheduler/request_filter.py`: module-level function `process_reqspec` applying request filters to a request spec.
- `scheduler/rpcapi.py`: class `SchedulerAPI` providing the RPC client interface.
- `scheduler/client/report.py` (2,688 lines): class `SchedulerReportClient` managing resource provider inventory and allocation records in Placement.
- `scheduler/filters/__init__.py`: abstract base class `BaseHostFilter` (with `host_passes`); 14 concrete filter subclasses (one per filter module).
- `scheduler/weights/__init__.py`: abstract base class `BaseHostWeigher`; 12 concrete weigher subclasses.
- `scheduler/utils.py` (1,560 lines): 189+ helper functions including `resources_from_request_spec` (CCN 27) and `claim_resources`.

---

## External Dependencies

All non-`nova` modules imported across the 122 KB records. Source: `dependencies` arrays in `.aee/kb/src/nova/**/*.json`.

| Package | Files importing |
|---|---|
| `oslo_utils` | 62 |
| `sqlalchemy` | 56 |
| `oslo_log` | 47 |
| `oslo_db` | 25 |
| `oslo_serialization` | 24 |
| `alembic` | 18 |
| `collections` | 10 |
| `copy` | 9 |
| `functools` | 9 |
| `keystoneauth1` | 6 |
| `oslo_versionedobjects` | 6 |
| `netaddr` | 4 |
| `os_resource_classes` | 4 |
| `typing` | 4 |
| `os_traits` | 3 |
| `oslo_config` | 3 |
| `oslo_messaging` | 3 |
| `oslo_concurrency` | 2 |
| `oslo_middleware` | 2 |
| `webob` | 2 |

Additional packages used by fewer files: `cursive`, `eventlet`, `openstack`, `os_service_types`, `oslo_i18n`, `oslo_service`, `retrying`, `urllib`, and standard-library modules (`datetime`, `hashlib`, `inspect`, `itertools`, `logging`, `operator`, `os`, `random`, `re`, `shutil`, `sys`, `tempfile`, `threading`, `time`, `traceback`).

---

## Side Effects

940 side-effect records across 95 files. Source: `sideEffects` arrays in `.aee/kb/src/nova/**/*.json`.

| Kind | Count | Primary subsystem |
|---|---|---|
| global-mutation | 769 | objects/ (649), scheduler/ (89), db/ (18), core (12), accelerator/ (1) |
| network | 165 | objects/ (108), db/ (42), scheduler/ (6), accelerator/ (7), core (2) |
| file-io | 6 | core utils/exception (4), db/ (2) |

Representative entries (from KB record `sideEffects`):

- `accelerator/cyborg.py:L53` — `global-mutation`: module-level `get_client` closes over a lazily-initialised `_CyborgClient` instance stored in module scope.
- `accelerator/cyborg.py:L153-L154` — `network`: HTTP GET to Cyborg `/device_profiles`.
- `accelerator/cyborg.py:L205` — `network`: HTTP POST to Cyborg `/accelerator_requests`.
- `accelerator/cyborg.py:L282-L283` — `network`: HTTP PATCH to Cyborg `/accelerator_requests`.
- `db/api/models.py:L23` — `global-mutation`: SQLAlchemy `Base = declarative_base()` at module level.
- `db/main/api.py` — 46 `network`-class entries representing SQLAlchemy session operations against the database engine.
- `objects/aggregate.py:L42` — `network`: OVO `remotable` decorator on `get_by_id` triggers RPC dispatch when called from a non-conductor context.
- `scheduler/client/report.py:L279` — `network`: HTTP GET to Placement API for resource provider inventory.
- `service_auth.py:L56` — `network`: keystoneauth1 token fetch.
- `utils.py` — `file-io`: temporary file creation in utility helpers.

---

## Component Diagram

All 382 file edges are intra-component (`crossComponent: false`). No cross-component seams exist. Source: `.aee/link-graph.json` (commit `6bd3ba5`).

```mermaid
graph LR
    accelerator-cyborg-py["accelerator/cyborg.py"]
    db-api-api-py["db/api/api.py"]
    db-api-migrations-env-py["db/api/migrations/env.py"]
    db-api-migrations-versions-d67eeaabee36-initial-version-py["db/api/migrations/versions/d67eeaabee36_initial_version.py"]
    db-api-models-py["db/api/models.py"]
    db-main-api-py["db/main/api.py"]
    db-main-migrations-env-py["db/main/migrations/env.py"]
    db-main-migrations-versions-8f2f1571d55b-initial-version-py["db/main/migrations/versions/8f2f1571d55b_initial_version.py"]
    db-main-models-py["db/main/models.py"]
    db-migration-py["db/migration.py"]
    db-types-py["db/types.py"]
    db-utils-py["db/utils.py"]
    exception-py["exception.py"]
    i18n-py["i18n.py"]
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
    db-api-migrations-env-py --> db-api-models-py
    db-api-migrations-versions-d67eeaabee36-initial-version-py -->|2| db-types-py
    db-api-migrations-versions-d67eeaabee36-initial-version-py --> objects-keypair-py
    db-api-models-py -->|2| db-types-py
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
    objects-aggregate-py -->|2| db-api-api-py
    objects-aggregate-py -->|6| db-api-models-py
    objects-aggregate-py -->|8| exception-py
    objects-aggregate-py -->|2| i18n-py
    objects-aggregate-py -->|5| objects-base-py
    objects-aggregate-py -->|7| objects-fields-py
    objects-aggregate-py -->|2| objects-init
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
    objects-cell-mapping-py --> db-api-api-py
    objects-cell-mapping-py -->|3| db-api-models-py
    objects-cell-mapping-py -->|2| exception-py
    objects-cell-mapping-py -->|5| objects-base-py
    objects-cell-mapping-py -->|6| objects-fields-py
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
    objects-instance-action-py -->|9| db-main-api-py
    objects-instance-action-py -->|2| exception-py
    objects-instance-action-py -->|6| objects-base-py
    objects-instance-action-py -->|6| objects-fields-py
    objects-instance-fault-py -->|3| db-main-api-py
    objects-instance-fault-py -->|2| exception-py
    objects-instance-fault-py -->|6| objects-base-py
    objects-instance-fault-py -->|5| objects-fields-py
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
    objects-instance-py -->|20| db-main-api-py
    objects-instance-py -->|3| db-main-models-py
    objects-instance-py -->|4| exception-py
    objects-instance-py -->|2| i18n-py
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
    objects-selection-py -->|2| objects-base-py
    objects-selection-py -->|2| objects-init
    objects-selection-py -->|2| scheduler-filters-utils-py
    objects-service-py -->|15| db-main-api-py
    objects-service-py -->|6| exception-py
    objects-service-py -->|7| objects-base-py
    objects-service-py -->|8| objects-fields-py
    objects-service-py -->|2| objects-init
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
    scheduler-client-report-py -->|24| exception-py
    scheduler-client-report-py -->|2| i18n-py
    scheduler-client-report-py --> objects-fields-py
    scheduler-client-report-py -->|3| objects-init
    scheduler-client-report-py -->|2| utils-py
    scheduler-filters-affinity-filter-py -->|2| scheduler-filters-init
    scheduler-filters-affinity-filter-py -->|2| scheduler-filters-utils-py
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
    scheduler-filters-image-props-filter-py -->|4| objects-fields-py
    scheduler-filters-image-props-filter-py -->|2| scheduler-filters-init
    scheduler-filters-init -->|2| scheduler-utils-py
    scheduler-filters-io-ops-filter-py -->|2| scheduler-filters-init
    scheduler-filters-io-ops-filter-py -->|3| scheduler-filters-utils-py
    scheduler-filters-isolated-hosts-filter-py -->|2| scheduler-filters-init
    scheduler-filters-json-filter-py -->|2| scheduler-filters-init
    scheduler-filters-metrics-filter-py -->|2| scheduler-filters-init
    scheduler-filters-metrics-filter-py -->|2| scheduler-utils-py
    scheduler-filters-num-instances-filter-py -->|2| scheduler-filters-init
    scheduler-filters-num-instances-filter-py -->|3| scheduler-filters-utils-py
    scheduler-filters-numa-topology-filter-py --> objects-fields-py
    scheduler-filters-numa-topology-filter-py -->|2| objects-init
    scheduler-filters-numa-topology-filter-py -->|3| scheduler-filters-init
    scheduler-filters-pci-passthrough-filter-py -->|3| scheduler-filters-init
    scheduler-filters-type-filter-py -->|2| scheduler-filters-init
    scheduler-filters-type-filter-py -->|2| scheduler-filters-utils-py
    scheduler-host-manager-py -->|2| exception-py
    scheduler-host-manager-py -->|16| objects-init
    scheduler-host-manager-py -->|2| scheduler-filters-init
    scheduler-host-manager-py -->|2| scheduler-weights-init
    scheduler-host-manager-py -->|4| utils-py
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
    scheduler-request-filter-py -->|2| exception-py
    scheduler-request-filter-py -->|2| i18n-py
    scheduler-request-filter-py -->|5| objects-init
    scheduler-request-filter-py -->|2| scheduler-client-report-py
    scheduler-request-filter-py -->|4| scheduler-utils-py
    scheduler-rpcapi-py -->|2| exception-py
    scheduler-rpcapi-py -->|2| objects-base-py
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
    scheduler-weights-compute-py -->|2| scheduler-utils-py
    scheduler-weights-compute-py -->|2| scheduler-weights-init
    scheduler-weights-cpu-py -->|2| scheduler-utils-py
    scheduler-weights-cpu-py -->|2| scheduler-weights-init
    scheduler-weights-cross-cell-py -->|2| scheduler-utils-py
    scheduler-weights-cross-cell-py -->|2| scheduler-weights-init
    scheduler-weights-disk-py -->|2| scheduler-utils-py
    scheduler-weights-disk-py -->|2| scheduler-weights-init
    scheduler-weights-hypervisor-version-py -->|2| scheduler-utils-py
    scheduler-weights-hypervisor-version-py -->|2| scheduler-weights-init
    scheduler-weights-image-props-py --> exception-py
    scheduler-weights-image-props-py -->|3| objects-init
    scheduler-weights-image-props-py -->|3| scheduler-utils-py
    scheduler-weights-image-props-py -->|2| scheduler-weights-init
    scheduler-weights-io-ops-py -->|2| scheduler-utils-py
    scheduler-weights-io-ops-py -->|2| scheduler-weights-init
    scheduler-weights-metrics-py -->|2| exception-py
    scheduler-weights-metrics-py -->|3| scheduler-utils-py
    scheduler-weights-metrics-py -->|2| scheduler-weights-init
    scheduler-weights-num-instances-py -->|2| scheduler-utils-py
    scheduler-weights-num-instances-py -->|2| scheduler-weights-init
    scheduler-weights-pci-py -->|2| scheduler-utils-py
    scheduler-weights-pci-py -->|2| scheduler-weights-init
    scheduler-weights-ram-py -->|2| scheduler-utils-py
    scheduler-weights-ram-py -->|2| scheduler-weights-init
    utils-py -->|5| exception-py
    utils-py -->|2| i18n-py
    utils-py -->|3| objects-service-py
```

---

## Local Data Flow

Source: `securitySurface` arrays in `.aee/kb/src/nova/**/*.json`.

**Entry points (8 total):**

| File | Line | Category | Description |
|---|---|---|---|
| `accelerator/cyborg.py` | L56 | http-param | `context` carries caller auth/session state into `get_client` and `_CyborgClient.__init__` |
| `accelerator/cyborg.py` | L88 | http-param | `dp_name` accepted from caller and forwarded to Cyborg API query in `_get_device_profile_list` |
| `accelerator/cyborg.py` | L255 | http-param | `bindings` dict serialised as RFC 6902 JSON patch body sent to Cyborg in `bind_arqs` |
| `accelerator/cyborg.py` | L291 | http-param | `instance_uuid` used as Cyborg API query parameter in `get_arqs_for_instance` |
| `accelerator/cyborg.py` | L337 | http-param | `arq_uuid` interpolated into Cyborg API URL path in `get_arq_by_uuid` |
| `exception.py` | L27 | http-param | `import webob.exc` — webob HTTP exception types enter the exception hierarchy |
| `exception.py` | L28 | http-param | `from webob import util as woutil` |
| `exception.py` | L35 | http-param | `class ConvertedException(webob.exc.WSGIHTTPException)` bridges webob exceptions into nova hierarchy |

**Sinks (269 total):**

| Category | Count | Primary files |
|---|---|---|
| db-write | 262 | `db/main/api.py`, `db/api/migrations/versions/d67eeaabee36_initial_version.py`, `db/main/migrations/versions/8f2f1571d55b_initial_version.py`, `scheduler/client/query.py`, `scheduler/client/report.py` |
| network-send | 7 | `accelerator/cyborg.py` |

**Data flow paths:**

1. **Accelerator → Cyborg HTTP path.** Caller-supplied parameters enter at `accelerator/cyborg.py:L56` (`context`), `L88` (`dp_name`), `L255` (`bindings`), `L291` (`instance_uuid`), and `L337` (`arq_uuid`). These values are forwarded to outbound HTTP calls at `L153-L154` (GET `/device_profiles`), `L205` (POST `/accelerator_requests`), `L282-L283` (PATCH `/accelerator_requests`), `L317` (GET `/accelerator_requests?instance=<value>`), and `L377` (GET `/accelerator_requests/<arq_uuid>`). Source: `.aee/kb/src/nova/accelerator/cyborg.py.json:securitySurface`.

2. **Objects → db/main/api.py (db-write) path.** Domain-object methods (e.g. `Instance.save`, `ComputeNode.create`, `Migration.save`) resolve to SQLAlchemy write calls inside `db/main/api.py`. The `objects/` layer passes field values supplied by callers through `objects/base.py` OVO serialisation before they reach the database functions. Source: link-graph edges from `objects-instance-py`, `objects-compute-node-py`, `objects-migration-py`, etc. to `db-main-api-py`.

3. **Scheduler → Placement HTTP path.** `scheduler/request_filter.py` and `scheduler/manager.py` pass request-spec data into `scheduler/client/report.py` (`SchedulerReportClient`) at `L279` and `L2358` (network-send), which issues GET/PUT/POST requests to the OpenStack Placement API for resource-provider inventory queries and allocation claims. Source: `.aee/kb/src/nova/scheduler/client/report.py.json:securitySurface`.

4. **Scheduler → db-write (query client) path.** `scheduler/client/query.py` dispatches update calls through `scheduler/rpcapi.py` (RPC sink) to write aggregate and host-state data; sink entries at `scheduler/client/query.py:L47`, `L66`, `L77`. Source: `.aee/kb/src/nova/scheduler/client/query.py.json:securitySurface`.

5. **exception.py webob path.** `ConvertedException(webob.exc.WSGIHTTPException)` at `exception.py:L35` allows inbound WSGI HTTP exceptions to be re-raised as Nova exceptions. Webob data flows into the Nova exception hierarchy but does not reach a database or network sink within this component's KB records.

**Privileges (30 entries):** All 30 privilege entries have category `crypto-key` and originate from `keystoneauth1` imports across files including `scheduler/client/report.py` and `service_auth.py`. Source: `.aee/kb/src/nova/scheduler/client/report.py.json:securitySurface`.

No untrusted-input sanitisation steps are recorded in any `securitySurface` entry across the 122 KB records.

---

## Cross-Component Interfaces

The link graph (`6bd3ba5`) records **0 cross-component file edges** and **0 cross-component seams** for this component. All 382 file edges are intra-component. The link summary notes 99 unresolved imports against modules not yet in the KB: `nova.conf` (31 refs), `nova.compute` (12), `nova.virt` (8), `nova.network` (4), `nova.notifications.objects` (4), `nova.context` (2), `nova.pci` (2), `nova.share` (1), and generic `nova` (35). These are expected to produce cross-component edges in a subsequent extraction run. Source: `.aee/link-summary.md`.
