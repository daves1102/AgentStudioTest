# src/nova/tests/functional/test_boot_from_volume.py

## Overview

This file implements the `test_boot_from_volume` module, defining 2 classs, 12 methods, 9 imports.

Lines: total 277, code 166, comment 73, blank 38

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `BootFromVolumeTest` | class | — | exported | not declared | — | `src/nova/tests/functional/test_boot_from_volume.py:L25–L217` |
| `BootFromVolumeTest._get_hypervisor_stats` | method | (self) | private | `response.body['hypervisor_statistics']` (src/nova/tests/functional/test_boot_from_volume.py:L29) | 1/3 | `src/nova/tests/functional/test_boot_from_volume.py:L27–L29` |
| `BootFromVolumeTest._verify_zero_local_gb_used` | method | (self) | private | not declared | 1/3 | `src/nova/tests/functional/test_boot_from_volume.py:L31–L33` |
| `BootFromVolumeTest._verify_instance_flavor_not_zero` | method | (self, instance_uuid) | private | not declared | 1/5 | `src/nova/tests/functional/test_boot_from_volume.py:L35–L40` |
| `BootFromVolumeTest._verify_request_spec_flavor_not_zero` | method | (self, instance_uuid) | private | not declared | 1/4 | `src/nova/tests/functional/test_boot_from_volume.py:L42–L46` |
| `BootFromVolumeTest.setUp` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/test_boot_from_volume.py:L48–L56` |
| `BootFromVolumeTest.test_boot_from_volume_larger_than_local_gb` | method | (self) | public | not declared | 1/46 | `src/nova/tests/functional/test_boot_from_volume.py:L58–L144` |
| `BootFromVolumeTest.test_rebuild_volume_backed_larger_than_local_gb` | method | (self) | public | not declared | 1/25 | `src/nova/tests/functional/test_boot_from_volume.py:L146–L188` |
| `BootFromVolumeTest.test_max_local_block_devices_0_force_bfv` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/test_boot_from_volume.py:L190–L201` |
| `BootFromVolumeTest.test_reboot_bfv_instance` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/test_boot_from_volume.py:L203–L207` |
| `BootFromVolumeTest.test_reboot_bfv_instance_snapshot` | method | (self) | public | not declared | 3/8 | `src/nova/tests/functional/test_boot_from_volume.py:L209–L217` |
| `BootFromVolumeLargeRequestTest` | class | — | exported | not declared | — | `src/nova/tests/functional/test_boot_from_volume.py:L220–L277` |
| `BootFromVolumeLargeRequestTest.setUp` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/test_boot_from_volume.py:L223–L234` |
| `BootFromVolumeLargeRequestTest.test_boot_from_volume_10_servers_255_volumes_2_images` | method | (self) | public | not declared | 3/23 | `src/nova/tests/functional/test_boot_from_volume.py:L236–L277` |

## Dependencies

- `import fixtures` (src/nova/tests/functional/test_boot_from_volume.py:L13)
- `unittest`: imports `mock` (src/nova/tests/functional/test_boot_from_volume.py:L14)
- `nova`: imports `context` (src/nova/tests/functional/test_boot_from_volume.py:L16)
- `nova`: imports `objects` (src/nova/tests/functional/test_boot_from_volume.py:L17)
- `nova`: imports `test` (src/nova/tests/functional/test_boot_from_volume.py:L18)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/functional/test_boot_from_volume.py:L19)
- `nova.tests.functional.api`: imports `client as api_client` (src/nova/tests/functional/test_boot_from_volume.py:L20)
- `nova.tests.functional`: imports `fixtures as func_fixtures` (src/nova/tests/functional/test_boot_from_volume.py:L21)
- `nova.tests.functional`: imports `integrated_helpers` (src/nova/tests/functional/test_boot_from_volume.py:L22)

