# src/nova/objects/\_\_init\_\_.py

## Overview

This file implements the `__init__` module, defining 1 function, 47 imports.

Lines: total 122, code 95, comment 22, blank 5

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `register_all` | function | — | exported | not declared | 1/47 | `src/nova/objects/__init__.py:L73–L122` |

## Dependencies

- `import typing as ty` (src/nova/objects/__init__.py:L22)
- `nova.objects.aggregate`: imports `*` (src/nova/objects/__init__.py:L25)
- `nova.objects.block_device`: imports `*` (src/nova/objects/__init__.py:L26)
- `nova.objects.build_request`: imports `*` (src/nova/objects/__init__.py:L27)
- `nova.objects.cell_mapping`: imports `*` (src/nova/objects/__init__.py:L28)
- `nova.objects.compute_node`: imports `*` (src/nova/objects/__init__.py:L29)
- `nova.objects.diagnostics`: imports `*` (src/nova/objects/__init__.py:L30)
- `nova.objects.console_auth_token`: imports `*` (src/nova/objects/__init__.py:L31)
- `nova.objects.ec2`: imports `*` (src/nova/objects/__init__.py:L32)
- `nova.objects.external_event`: imports `*` (src/nova/objects/__init__.py:L33)
- `nova.objects.flavor`: imports `*` (src/nova/objects/__init__.py:L34)
- `nova.objects.host_mapping`: imports `*` (src/nova/objects/__init__.py:L35)
- `nova.objects.hv_spec`: imports `*` (src/nova/objects/__init__.py:L36)
- `nova.objects.image_meta`: imports `*` (src/nova/objects/__init__.py:L37)
- `nova.objects.instance`: imports `*` (src/nova/objects/__init__.py:L38)
- `nova.objects.instance_action`: imports `*` (src/nova/objects/__init__.py:L39)
- `nova.objects.instance_fault`: imports `*` (src/nova/objects/__init__.py:L40)
- `nova.objects.instance_group`: imports `*` (src/nova/objects/__init__.py:L41)
- `nova.objects.instance_info_cache`: imports `*` (src/nova/objects/__init__.py:L42)
- `nova.objects.instance_mapping`: imports `*` (src/nova/objects/__init__.py:L43)
- `nova.objects.instance_numa`: imports `*` (src/nova/objects/__init__.py:L44)
- `nova.objects.instance_pci_requests`: imports `*` (src/nova/objects/__init__.py:L45)
- `nova.objects.keypair`: imports `*` (src/nova/objects/__init__.py:L46)
- `nova.objects.migrate_data`: imports `*` (src/nova/objects/__init__.py:L47)
- `nova.objects.virt_device_metadata`: imports `*` (src/nova/objects/__init__.py:L48)
- `nova.objects.migration`: imports `*` (src/nova/objects/__init__.py:L49)
- `nova.objects.migration_context`: imports `*` (src/nova/objects/__init__.py:L50)
- `nova.objects.monitor_metric`: imports `*` (src/nova/objects/__init__.py:L51)
- `nova.objects.network_metadata`: imports `*` (src/nova/objects/__init__.py:L52)
- `nova.objects.network_request`: imports `*` (src/nova/objects/__init__.py:L53)
- `nova.objects.numa`: imports `*` (src/nova/objects/__init__.py:L54)
- `nova.objects.pci_device`: imports `*` (src/nova/objects/__init__.py:L55)
- `nova.objects.pci_device_pool`: imports `*` (src/nova/objects/__init__.py:L56)
- `nova.objects.request_spec`: imports `*` (src/nova/objects/__init__.py:L57)
- `nova.objects.tag`: imports `*` (src/nova/objects/__init__.py:L58)
- `nova.objects.quotas`: imports `*` (src/nova/objects/__init__.py:L59)
- `nova.objects.resource`: imports `*` (src/nova/objects/__init__.py:L60)
- `nova.objects.security_group`: imports `*` (src/nova/objects/__init__.py:L61)
- `nova.objects.selection`: imports `*` (src/nova/objects/__init__.py:L62)
- `nova.objects.service`: imports `*` (src/nova/objects/__init__.py:L63)
- `nova.objects.task_log`: imports `*` (src/nova/objects/__init__.py:L64)
- `nova.objects.trusted_certs`: imports `*` (src/nova/objects/__init__.py:L65)
- `nova.objects.vcpu_model`: imports `*` (src/nova/objects/__init__.py:L66)
- `nova.objects.virt_cpu_topology`: imports `*` (src/nova/objects/__init__.py:L67)
- `nova.objects.virtual_interface`: imports `*` (src/nova/objects/__init__.py:L68)
- `nova.objects.volume_usage`: imports `*` (src/nova/objects/__init__.py:L69)
- `nova.objects.share_mapping`: imports `*` (src/nova/objects/__init__.py:L70)

