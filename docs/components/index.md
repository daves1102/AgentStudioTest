# Component Index

Source folder: `src/`. 1509 files, 473,713 code lines across 30 components.

## Production Components

| Component | Description | Files | Code Lines |
|-----------|-------------|-------|-----------|
| [accelerator](accelerator.md) | Cyborg accelerator device client: request specification lifecycle and device attachment to compute instances. | 2 | 324 |
| [api](api.md) | OpenStack Compute REST API layer: request routing, input validation, OpenStack v2.1 controllers, and the EC2/metadata service endpoints. | 199 | 25,055 |
| [cmd](cmd.md) | Service entry-point scripts: CLI starters for the compute, conductor, scheduler, API, and manage sub-commands. | 12 | 3,684 |
| [compute](compute.md) | Compute manager: instance lifecycle operations, resource claim management, migration handling, and on-host resource monitors. | 25 | 21,361 |
| [conductor](conductor.md) | Conductor service: async compute task orchestration, live-migration workflows, and cross-service coordination. | 9 | 4,002 |
| [conf](conf.md) | Configuration schema: oslo.config option groups and defaults for every Nova sub-system. | 48 | 7,490 |
| [console](console.md) | Console proxy: VNC/SPICE/serial console token management and the RFB security proxy. | 12 | 651 |
| [db](db.md) | Database API: SQLAlchemy-based persistence layer wrappers for the main and API databases, plus schema migration utilities. | 26 | 7,492 |
| [hacking](hacking.md) | Code-style hacking rules: Nova-specific flake8/hacking checks enforcing project import conventions and API usage constraints. | 2 | 817 |
| [image](image.md) | Image service client: Glance image metadata retrieval and download helpers for the compute host. | 2 | 919 |
| [keymgr](keymgr.md) | Key management client: Barbican secret store integration for volume encryption key lifecycle. | 2 | 95 |
| [limit](limit.md) | Unified limits: Keystone-backed resource quota enforcement via oslo.limit. | 4 | 421 |
| [network](network.md) | Network service client: Neutron port, floating-IP, and security-group helpers plus network model translation. | 6 | 4,239 |
| [notifications](notifications.md) | Notification payloads: versioned Oslo Messaging notification objects for instance lifecycle and other Nova events. | 18 | 1,729 |
| [nova](nova.md) | Top-level package modules covering context propagation, exception hierarchy, policy enforcement, quota accounting, RPC routing, service lifecycle, and shared utilities. | 29 | 7,921 |
| [objects](objects.md) | Versioned objects: Oslo versionedobjects wrappers for all Nova domain entities (instances, services, migrations, etc.). | 49 | 12,412 |
| [pci](pci.md) | PCI device management: PCI request specification, device tracker, NUMA affinity, and SR-IOV PF/VF tracking. | 7 | 1,979 |
| [policies](policies.md) | RBAC policy rules: oslo.policy rule definitions for every Nova API operation, organised by resource type. | 56 | 3,427 |
| [privsep](privsep.md) | Privilege separation: oslo.privsep entrypoints for filesystem, networking, and crypto operations requiring elevated privileges. | 8 | 782 |
| [scheduler](scheduler.md) | Filter scheduler: host selection pipeline, filter and weight plugins, and the scheduler client. | 41 | 6,326 |
| [servicegroup](servicegroup.md) | Service group: heartbeat-based compute-service aliveness tracking via ZooKeeper or database drivers. | 6 | 216 |
| [share](share.md) | Share service client: Manila shared-filesystem attachment helpers. | 2 | 301 |
| [storage](storage.md) | Storage helpers: ephemeral disk and snapshot utility wrappers for the compute host. | 2 | 386 |
| [virt](virt.md) | Hypervisor driver interface: libvirt, VMware, Ironic, and zVM driver implementations plus disk, image, and network helper layers. | 91 | 38,153 |
| [volume](volume.md) | Volume service client: Cinder volume attachment, encryptor selection, and multiattach helpers. | 2 | 712 |
| [wsgi](wsgi.md) | WSGI server: eventlet-based WSGI server wrapper and loader for the Nova API application. | 3 | 22 |

## Test Components

| Component | Description | Files | Code Lines |
|-----------|-------------|-------|-----------|
| [tests](tests.md) | Test infrastructure: base test case classes and test runner configuration. | 2 | 37 |
| [tests-fixtures](tests-fixtures.md) | Test fixtures: reusable Nova test fixtures covering database setup, config, and RPC stubs. | 16 | 8,539 |
| [tests-functional](tests-functional.md) | Functional test suite: end-to-end in-process Nova API and compute flow tests. | 314 | 57,800 |
| [tests-unit](tests-unit.md) | Unit test suite: per-module unit tests covering all Nova production components. | 514 | 250,431 |
