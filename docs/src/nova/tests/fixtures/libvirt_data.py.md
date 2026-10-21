# src/nova/tests/fixtures/libvirt_data.py

## Overview

This file implements the `libvirt_data` module, defining 20 constants, 1 function, 3 variables, 5 imports, 20 side effects.

Lines: total 2166, code 2049, comment 58, blank 59

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `fake_kvm_guest` | function | — | exported | `obj` (src/nova/tests/fixtures/libvirt_data.py:L163) | 1/109 | `src/nova/tests/fixtures/libvirt_data.py:L22–L163` |
| `FAKE_KVM_GUEST` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt_data.py:L166–L253` |
| `CAPABILITIES_HOST_X86_64_TEMPLATE` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt_data.py:L255–L291` |
| `CAPABILITIES_HOST_I686_TEMPLATE` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt_data.py:L294–L302` |
| `CAPABILITIES_HOST_AARCH64_TEMPLATE` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt_data.py:L304–L333` |
| `CAPABILITIES_HOST_ARMV7_TEMPLATE` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt_data.py:L336–L343` |
| `CAPABILITIES_HOST_PPC_TEMPLATE` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt_data.py:L346–L354` |
| `CAPABILITIES_HOST_PPC64_TEMPLATE` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt_data.py:L357–L365` |
| `CAPABILITIES_HOST_PPC64LE_TEMPLATE` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt_data.py:L368–L376` |
| `CAPABILITIES_HOST_S390X_TEMPLATE` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt_data.py:L379–L387` |
| `CAPABILITIES_HOST_TEMPLATES` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt_data.py:L389–L398` |
| `CAPABILITIES_GUEST` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt_data.py:L416–L835` |
| `DOMCAPABILITIES_SPARC` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt_data.py:L837–L912` |
| `DOMCAPABILITIES_ARMV7` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt_data.py:L914–L1029` |
| `DOMCAPABILITIES_AARCH64` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt_data.py:L1031–L1187` |
| `DOMCAPABILITIES_PPC` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt_data.py:L1189–L1270` |
| `DOMCAPABILITIES_MIPS` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt_data.py:L1272–L1355` |
| `DOMCAPABILITIES_MIPSEL` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt_data.py:L1357–L1440` |
| `DOMCAPABILITIES_I686` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt_data.py:L1445–L1584` |
| `STATIC_DOMCAPABILITIES` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt_data.py:L1586–L1594` |
| `DOMCAPABILITIES_X86_64_TEMPLATE` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt_data.py:L1601–L1694` |
| `_fake_NodeDevXml` | variable | — | unexported | not declared | — | `src/nova/tests/fixtures/libvirt_data.py:L1696–L2157` |
| `_fake_NodeDevXml_parents` | variable | — | unexported | not declared | — | `src/nova/tests/fixtures/libvirt_data.py:L2159–L2162` |
| `_fake_NodeDevXml_children` | variable | — | unexported | not declared | — | `src/nova/tests/fixtures/libvirt_data.py:L2164–L2164` |

## Dependencies

- `import collections` (src/nova/tests/fixtures/libvirt_data.py:L13)
- `lxml`: imports `etree` (src/nova/tests/fixtures/libvirt_data.py:L15)
- `oslo_utils`: imports `units` (src/nova/tests/fixtures/libvirt_data.py:L16)
- `nova.objects.fields`: imports `Architecture` (src/nova/tests/fixtures/libvirt_data.py:L18)
- `nova.virt.libvirt`: imports `config` (src/nova/tests/fixtures/libvirt_data.py:L19)

## Side Effects

- **global-mutation**: FAKE_KVM_GUEST = """ (src/nova/tests/fixtures/libvirt_data.py:L166)
- **global-mutation**: CAPABILITIES_HOST_X86_64_TEMPLATE = """ (src/nova/tests/fixtures/libvirt_data.py:L255)
- **global-mutation**: CAPABILITIES_HOST_I686_TEMPLATE = """ (src/nova/tests/fixtures/libvirt_data.py:L294)
- **global-mutation**: CAPABILITIES_HOST_AARCH64_TEMPLATE = """ (src/nova/tests/fixtures/libvirt_data.py:L304)
- **global-mutation**: CAPABILITIES_HOST_ARMV7_TEMPLATE = """ (src/nova/tests/fixtures/libvirt_data.py:L336)
- **global-mutation**: CAPABILITIES_HOST_PPC_TEMPLATE = """ (src/nova/tests/fixtures/libvirt_data.py:L346)
- **global-mutation**: CAPABILITIES_HOST_PPC64_TEMPLATE = """ (src/nova/tests/fixtures/libvirt_data.py:L357)
- **global-mutation**: CAPABILITIES_HOST_PPC64LE_TEMPLATE = """ (src/nova/tests/fixtures/libvirt_data.py:L368)
- **global-mutation**: CAPABILITIES_HOST_S390X_TEMPLATE = """ (src/nova/tests/fixtures/libvirt_data.py:L379)
- **global-mutation**: CAPABILITIES_HOST_TEMPLATES = { (src/nova/tests/fixtures/libvirt_data.py:L389)
- **global-mutation**: CAPABILITIES_GUEST = { (src/nova/tests/fixtures/libvirt_data.py:L416)
- **global-mutation**: DOMCAPABILITIES_SPARC = """ (src/nova/tests/fixtures/libvirt_data.py:L837)
- **global-mutation**: DOMCAPABILITIES_ARMV7 = """ (src/nova/tests/fixtures/libvirt_data.py:L914)
- **global-mutation**: DOMCAPABILITIES_AARCH64 = """ (src/nova/tests/fixtures/libvirt_data.py:L1031)
- **global-mutation**: DOMCAPABILITIES_PPC = """ (src/nova/tests/fixtures/libvirt_data.py:L1189)
- **global-mutation**: DOMCAPABILITIES_MIPS = """ (src/nova/tests/fixtures/libvirt_data.py:L1272)
- **global-mutation**: DOMCAPABILITIES_MIPSEL = """ (src/nova/tests/fixtures/libvirt_data.py:L1357)
- **global-mutation**: DOMCAPABILITIES_I686 = """ (src/nova/tests/fixtures/libvirt_data.py:L1445)
- **global-mutation**: STATIC_DOMCAPABILITIES = { (src/nova/tests/fixtures/libvirt_data.py:L1586)
- **global-mutation**: DOMCAPABILITIES_X86_64_TEMPLATE = """ (src/nova/tests/fixtures/libvirt_data.py:L1601)

