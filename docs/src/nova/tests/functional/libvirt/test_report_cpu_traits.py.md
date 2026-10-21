# src/nova/tests/functional/libvirt/test_report_cpu_traits.py

## Overview

This file implements the `test_report_cpu_traits` module, defining 3 classs, 3 constants, 1 field, 2 functions, 22 methods, 13 imports, 5 side effects.

Lines: total 447, code 348, comment 36, blank 63

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_report_cpu_traits.py:L31–L31` |
| `LibvirtReportTraitsTests` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_report_cpu_traits.py:L34–L93` |
| `LibvirtReportTraitsTests.expected_libvirt_driver_capability_traits` | field | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_report_cpu_traits.py:L38–L56` |
| `LibvirtReportTraitsTests.test_report_cpu_traits` | method | (self) | public | not declared | 3/25 | `src/nova/tests/functional/libvirt/test_report_cpu_traits.py:L58–L93` |
| `LibvirtReportSevTraitsTests` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_report_cpu_traits.py:L97–L299` |
| `LibvirtReportSevTraitsTests.STUB_INIT_HOST` | constant | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_report_cpu_traits.py:L100–L100` |
| `LibvirtReportSevTraitsTests.setUp` | method | (self) | public | not declared | 1/11 | `src/nova/tests/functional/libvirt/test_report_cpu_traits.py:L102–L112` |
| `LibvirtReportSevTraitsTests.start_compute_with_sev` | method | (self, sev, sev_es, sev_snp) | public | not declared | 1/5 | `src/nova/tests/functional/libvirt/test_report_cpu_traits.py:L114–L118` |
| `LibvirtReportSevTraitsTests.restart_compute_service_with_sev` | method | (self, sev, sev_es, sev_snp) | public | not declared | 1/9 | `src/nova/tests/functional/libvirt/test_report_cpu_traits.py:L120–L130` |
| `LibvirtReportSevTraitsTests.assertMemEncryptionSlotsEqual` | method | (self, rp_uuid, slots) | public | not declared | 2/16 | `src/nova/tests/functional/libvirt/test_report_cpu_traits.py:L132–L147` |
| `LibvirtReportSevTraitsTests._get_amd_sev_rps` | method | (self) | private | `{ 'sev': [rp for rp in rps if rp['name'] == '%s_amd_sev' % root_rp['name']], 'sev-es': [rp for rp in rps if rp['name'] == '%s_amd_sev_es' % root_rp['name']], 'sev-snp': [rp for rp in rps if rp['name']` (src/nova/tests/functional/libvirt/test_report_cpu_traits.py:L152) | 7/11 | `src/nova/tests/functional/libvirt/test_report_cpu_traits.py:L149–L159` |
| `LibvirtReportSevTraitsTests._assert_global_sev_traits` | method | (self) | private | not declared | 1/5 | `src/nova/tests/functional/libvirt/test_report_cpu_traits.py:L161–L166` |
| `LibvirtReportSevTraitsTests._assert_root_provider_sev_traits` | method | (self) | private | not declared | 1/6 | `src/nova/tests/functional/libvirt/test_report_cpu_traits.py:L168–L174` |
| `LibvirtReportSevTraitsTests._assert_sev_rps` | method | (self, sev, sev_es, sev_snp) | private | not declared | 5/28 | `src/nova/tests/functional/libvirt/test_report_cpu_traits.py:L176–L209` |
| `LibvirtReportSevTraitsTests._assert_host_sev_support` | method | (self, sev, sev_es, sev_snp) | private | not declared | 2/5 | `src/nova/tests/functional/libvirt/test_report_cpu_traits.py:L211–L220` |
| `LibvirtReportSevTraitsTests.test_sev_trait_off_on` | method | (self, before, after) | public | not declared | 3/9 | `src/nova/tests/functional/libvirt/test_report_cpu_traits.py:L240–L258` |
| `LibvirtReportSevTraitsTests.test_sev_trait_change` | method | (self, before, after) | public | not declared | 1/7 | `src/nova/tests/functional/libvirt/test_report_cpu_traits.py:L283–L299` |
| `LibvirtReportTdxTraitsTests` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/test_report_cpu_traits.py:L303–L447` |
| `LibvirtReportTdxTraitsTests.STUB_INIT_HOST` | constant | — | public | not declared | — | `src/nova/tests/functional/libvirt/test_report_cpu_traits.py:L306–L306` |
| `LibvirtReportTdxTraitsTests.start_compute_with_tdx` | method | (self, enabled) | public | not declared | 1/3 | `src/nova/tests/functional/libvirt/test_report_cpu_traits.py:L308–L310` |
| `LibvirtReportTdxTraitsTests.restart_compute_service_with_tdx` | method | (self, enabled) | public | not declared | 1/5 | `src/nova/tests/functional/libvirt/test_report_cpu_traits.py:L312–L318` |
| `LibvirtReportTdxTraitsTests.assertMemEncryptionSlotsEqual` | method | (self, rp_uuid, slots) | public | not declared | 2/16 | `src/nova/tests/functional/libvirt/test_report_cpu_traits.py:L320–L335` |
| `LibvirtReportTdxTraitsTests._get_intel_tdx_rps` | method | (self) | private | `[rp for rp in rps if rp['name'] == '%s_intel_tdx' % root_rp['name']]` (src/nova/tests/functional/libvirt/test_report_cpu_traits.py:L340) | 3/5 | `src/nova/tests/functional/libvirt/test_report_cpu_traits.py:L337–L341` |
| `LibvirtReportTdxTraitsTests._patch_tdx_capability` | method | (self, enabled) | private | not declared | 3/26 | `src/nova/tests/functional/libvirt/test_report_cpu_traits.py:L344–L386` |
| `LibvirtReportTdxTraitsTests._patch_tdx_capability.fake_exists` | function | (path) | public | `True` (src/nova/tests/functional/libvirt/test_report_cpu_traits.py:L355); `real_exists(path)` (src/nova/tests/functional/libvirt/test_report_cpu_traits.py:L356) | — | `src/nova/tests/functional/libvirt/test_report_cpu_traits.py:L353–L356` |
| `LibvirtReportTdxTraitsTests._patch_tdx_capability.fake_open` | function | (path, *args, **kwargs) | public | `mock.mock_open(read_data='tdx 63\n')(path)` (src/nova/tests/functional/libvirt/test_report_cpu_traits.py:L360); `real_open(path, *args, **kwargs)` (src/nova/tests/functional/libvirt/test_report_cpu_traits.py:L361) | — | `src/nova/tests/functional/libvirt/test_report_cpu_traits.py:L358–L361` |
| `LibvirtReportTdxTraitsTests._assert_global_tdx_traits` | method | (self) | private | not declared | 1/3 | `src/nova/tests/functional/libvirt/test_report_cpu_traits.py:L388–L391` |
| `LibvirtReportTdxTraitsTests._assert_root_provider_tdx_traits` | method | (self) | private | not declared | 1/4 | `src/nova/tests/functional/libvirt/test_report_cpu_traits.py:L393–L397` |
| `LibvirtReportTdxTraitsTests._assert_tdx_rps` | method | (self, enabled) | private | not declared | 2/12 | `src/nova/tests/functional/libvirt/test_report_cpu_traits.py:L399–L414` |
| `LibvirtReportTdxTraitsTests._assert_host_tdx_support` | method | (self, enabled) | private | not declared | 1/3 | `src/nova/tests/functional/libvirt/test_report_cpu_traits.py:L416–L423` |
| `LibvirtReportTdxTraitsTests.test_tdx_trait_changed` | method | (self, before, after) | public | not declared | 1/8 | `src/nova/tests/functional/libvirt/test_report_cpu_traits.py:L430–L447` |

## Dependencies

- `import builtins` (src/nova/tests/functional/libvirt/test_report_cpu_traits.py:L16)
- `import contextlib` (src/nova/tests/functional/libvirt/test_report_cpu_traits.py:L17)
- `import ddt` (src/nova/tests/functional/libvirt/test_report_cpu_traits.py:L18)
- `import fixtures` (src/nova/tests/functional/libvirt/test_report_cpu_traits.py:L19)
- `import os` (src/nova/tests/functional/libvirt/test_report_cpu_traits.py:L20)
- `import os_resource_classes as orc` (src/nova/tests/functional/libvirt/test_report_cpu_traits.py:L21)
- `import os_traits as ost` (src/nova/tests/functional/libvirt/test_report_cpu_traits.py:L22)
- `oslo_utils`: imports `versionutils` (src/nova/tests/functional/libvirt/test_report_cpu_traits.py:L23)
- `unittest`: imports `mock` (src/nova/tests/functional/libvirt/test_report_cpu_traits.py:L24)
- `nova`: imports `conf` (src/nova/tests/functional/libvirt/test_report_cpu_traits.py:L26)
- `nova.tests.fixtures`: imports `libvirt as fakelibvirt` (src/nova/tests/functional/libvirt/test_report_cpu_traits.py:L27)
- `nova.tests.functional.libvirt`: imports `integrated_helpers` (src/nova/tests/functional/libvirt/test_report_cpu_traits.py:L28)
- `nova.virt.libvirt`: imports `host as libvirt_host` (src/nova/tests/functional/libvirt/test_report_cpu_traits.py:L29)

## Side Effects

- **file-io**: real_exists = os.path.exists (src/nova/tests/functional/libvirt/test_report_cpu_traits.py:L350)
- **file-io**: with mock.patch('os.path.exists') as mock_exists, \ (src/nova/tests/functional/libvirt/test_report_cpu_traits.py:L370)
- **global-mutation**: CONF = conf.CONF (src/nova/tests/functional/libvirt/test_report_cpu_traits.py:L31)
- **global-mutation**: STUB_INIT_HOST = False (src/nova/tests/functional/libvirt/test_report_cpu_traits.py:L100)
- **global-mutation**: STUB_INIT_HOST = False (src/nova/tests/functional/libvirt/test_report_cpu_traits.py:L306)

