# src/nova/tests/unit/fixtures/test_libvirt.py

## Overview

This file implements the `test_libvirt` module, defining 1 class, 3 functions, 35 methods, 7 imports.

Lines: total 482, code 410, comment 17, blank 55

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `get_vm_xml` | function | (name="testname", uuid=None, source_type='file', interface_type='bridge') | exported | `'''<domain type='kvm'> <name>%(name)s</name> %(uuid_tag)s <memory>128000</memory> <vcpu>1</vcpu> <os> <type>hvm</type> <kernel>/somekernel</kernel> <cmdline>root=/dev/sda</cmdline> <boot dev='hd'/> </` (src/nova/tests/unit/fixtures/test_libvirt.py:L32) | 2/37 | `src/nova/tests/unit/fixtures/test_libvirt.py:L26–L63` |
| `FakeLibvirtTests` | class | — | exported | not declared | — | `src/nova/tests/unit/fixtures/test_libvirt.py:L66–L482` |
| `FakeLibvirtTests.tearDown` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/fixtures/test_libvirt.py:L67–L69` |
| `FakeLibvirtTests.get_openAuth_curry_func` | method | (self, readOnly=False) | public | `lambda uri: libvirt.openAuth(uri, creds, flags)` (src/nova/tests/unit/fixtures/test_libvirt.py:L82) | 2/10 | `src/nova/tests/unit/fixtures/test_libvirt.py:L71–L82` |
| `FakeLibvirtTests.get_openAuth_curry_func.fake_cb` | function | (credlist) | public | `0` (src/nova/tests/unit/fixtures/test_libvirt.py:L73) | — | `src/nova/tests/unit/fixtures/test_libvirt.py:L72–L73` |
| `FakeLibvirtTests.test_openAuth_accepts_None_uri_by_default` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/fixtures/test_libvirt.py:L84–L87` |
| `FakeLibvirtTests.test_openAuth_can_refuse_None_uri` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/fixtures/test_libvirt.py:L89–L93` |
| `FakeLibvirtTests.test_openAuth_refuses_invalid_URI` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/fixtures/test_libvirt.py:L95–L97` |
| `FakeLibvirtTests.test_getInfo` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/fixtures/test_libvirt.py:L99–L113` |
| `FakeLibvirtTests.test_createXML_detects_invalid_xml` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/fixtures/test_libvirt.py:L115–L116` |
| `FakeLibvirtTests.test_defineXML_detects_invalid_xml` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/fixtures/test_libvirt.py:L118–L119` |
| `FakeLibvirtTests._test_XML_func_detects_invalid_xml` | method | (self, xmlfunc_name, args) | private | `` (src/nova/tests/unit/fixtures/test_libvirt.py:L128) | 2/9 | `src/nova/tests/unit/fixtures/test_libvirt.py:L121–L129` |
| `FakeLibvirtTests.test_defineXML_defines_domain` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/fixtures/test_libvirt.py:L131–L141` |
| `FakeLibvirtTests.test_blockStats` | method | (self) | public | not declared | 2/9 | `src/nova/tests/unit/fixtures/test_libvirt.py:L143–L151` |
| `FakeLibvirtTests.test_attach_detach` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/fixtures/test_libvirt.py:L153–L164` |
| `FakeLibvirtTests.test_info` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/fixtures/test_libvirt.py:L166–L176` |
| `FakeLibvirtTests.test_createXML_runs_domain` | method | (self) | public | `` (src/nova/tests/unit/fixtures/test_libvirt.py:L191) | 2/15 | `src/nova/tests/unit/fixtures/test_libvirt.py:L178–L192` |
| `FakeLibvirtTests.test_defineXML_remembers_uuid` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/fixtures/test_libvirt.py:L194–L199` |
| `FakeLibvirtTests.test_createWithFlags` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/fixtures/test_libvirt.py:L201–L209` |
| `FakeLibvirtTests.test_managedSave` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/fixtures/test_libvirt.py:L211–L222` |
| `FakeLibvirtTests.test_define_and_retrieve` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/fixtures/test_libvirt.py:L224–L231` |
| `FakeLibvirtTests._test_accepts_source_type` | method | (self, source_type) | private | not declared | 1/10 | `src/nova/tests/unit/fixtures/test_libvirt.py:L233–L242` |
| `FakeLibvirtTests.test_accepts_source_dev` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/fixtures/test_libvirt.py:L244–L245` |
| `FakeLibvirtTests.test_accepts_source_path` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/fixtures/test_libvirt.py:L247–L248` |
| `FakeLibvirtTests.test_network_type_bridge_sticks` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/fixtures/test_libvirt.py:L250–L251` |
| `FakeLibvirtTests.test_network_type_network_sticks` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/fixtures/test_libvirt.py:L253–L254` |
| `FakeLibvirtTests._test_network_type_sticks` | method | (self, network_type) | private | not declared | 1/12 | `src/nova/tests/unit/fixtures/test_libvirt.py:L256–L267` |
| `FakeLibvirtTests.test_getType` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/fixtures/test_libvirt.py:L269–L271` |
| `FakeLibvirtTests.test_getVersion` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/fixtures/test_libvirt.py:L273–L275` |
| `FakeLibvirtTests.test_getCapabilities` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/fixtures/test_libvirt.py:L277–L282` |
| `FakeLibvirtTests.test_getDomainCapabilities` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/fixtures/test_libvirt.py:L284–L287` |
| `FakeLibvirtTests.test_compareCPU_compatible` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/fixtures/test_libvirt.py:L289–L304` |
| `FakeLibvirtTests.test_compareCPU_incompatible_vendor` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/fixtures/test_libvirt.py:L306–L321` |
| `FakeLibvirtTests.test_compareCPU_incompatible_arch` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/fixtures/test_libvirt.py:L323–L338` |
| `FakeLibvirtTests.test_compareCPU_incompatible_model` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/fixtures/test_libvirt.py:L340–L354` |
| `FakeLibvirtTests.test_compareCPU_compatible_unspecified_model` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/fixtures/test_libvirt.py:L356–L369` |
| `FakeLibvirtTests.test_numa_topology_generation` | method | (self) | public | not declared | 1/30 | `src/nova/tests/unit/fixtures/test_libvirt.py:L371–L400` |
| `FakeLibvirtTests.test_pci_devices_generation` | method | (self) | public | not declared | 1/63 | `src/nova/tests/unit/fixtures/test_libvirt.py:L402–L482` |
| `FakeLibvirtTests.test_pci_devices_generation._cmp_pci_dev_addr` | function | (dev_xml, cmp_addr) | private | not declared | — | `src/nova/tests/unit/fixtures/test_libvirt.py:L403–L412` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/fixtures/test_libvirt.py:L15)
- `lxml`: imports `etree` (src/nova/tests/unit/fixtures/test_libvirt.py:L17)
- `oslo_utils`: imports `uuidutils` (src/nova/tests/unit/fixtures/test_libvirt.py:L18)
- `nova.objects`: imports `fields as obj_fields` (src/nova/tests/unit/fixtures/test_libvirt.py:L20)
- `nova`: imports `test` (src/nova/tests/unit/fixtures/test_libvirt.py:L21)
- `nova.tests.fixtures`: imports `libvirt` (src/nova/tests/unit/fixtures/test_libvirt.py:L22)
- `nova.virt.libvirt`: imports `config as vconfig` (src/nova/tests/unit/fixtures/test_libvirt.py:L23)

