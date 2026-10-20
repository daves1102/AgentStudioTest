# src/nova/pci/devspec.py

## Overview

This file implements the `devspec` module, defining 6 classs, 10 constants, 24 methods, 1 variable, 13 imports, 10 side effects, 2 security surface entries.

Lines: total 434, code 320, comment 52, blank 62

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `MAX_VENDOR_ID` | constant | — | exported | not declared | — | `src/nova/pci/devspec.py:L29–L29` |
| `MAX_PRODUCT_ID` | constant | — | exported | not declared | — | `src/nova/pci/devspec.py:L30–L30` |
| `MAX_FUNC` | constant | — | exported | not declared | — | `src/nova/pci/devspec.py:L31–L31` |
| `MAX_DOMAIN` | constant | — | exported | not declared | — | `src/nova/pci/devspec.py:L32–L32` |
| `MAX_BUS` | constant | — | exported | not declared | — | `src/nova/pci/devspec.py:L33–L33` |
| `MAX_SLOT` | constant | — | exported | not declared | — | `src/nova/pci/devspec.py:L34–L34` |
| `ANY` | constant | — | exported | not declared | — | `src/nova/pci/devspec.py:L35–L35` |
| `REGEX_ANY` | constant | — | exported | not declared | — | `src/nova/pci/devspec.py:L36–L36` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/pci/devspec.py:L38–L38` |
| `CONF` | constant | — | exported | not declared | — | `src/nova/pci/devspec.py:L39–L39` |
| `PCISpecAddressType` | variable | — | exported | not declared | — | `src/nova/pci/devspec.py:L41–L41` |
| `PciAddressSpec` | class | — | exported | not declared | — | `src/nova/pci/devspec.py:L44–L84` |
| `PciAddressSpec.__init__` | method | (self, pci_addr) | public | not declared | 1/5 | `src/nova/pci/devspec.py:L50–L54` |
| `PciAddressSpec.match` | method | (self, pci_addr) | public | not declared | 1/2 | `src/nova/pci/devspec.py:L57–L58` |
| `PciAddressSpec.is_single_address` | method | (self) | public | `all([ all(c in string.hexdigits for c in self.domain), all(c in string.hexdigits for c in self.bus), all(c in string.hexdigits for c in self.slot), all(c in string.hexdigits for c in self.func)])` (src/nova/pci/devspec.py:L61) | 5/6 | `src/nova/pci/devspec.py:L60–L65` |
| `PciAddressSpec._set_pci_dev_info` | method | (self, prop, maxval, hex_value) | private | `` (src/nova/pci/devspec.py:L72) | 4/18 | `src/nova/pci/devspec.py:L67–L84` |
| `PhysicalPciAddress` | class | — | exported | not declared | — | `src/nova/pci/devspec.py:L87–L122` |
| `PhysicalPciAddress.__init__` | method | (self, pci_addr) | public | not declared | 3/16 | `src/nova/pci/devspec.py:L94–L110` |
| `PhysicalPciAddress.match` | method | (self, phys_pci_addr) | public | `all(conditions)` (src/nova/pci/devspec.py:L119) | 1/8 | `src/nova/pci/devspec.py:L112–L119` |
| `PhysicalPciAddress.__str__` | method | (self) | public | `f'{self.domain}:{self.bus}:{self.slot}.{self.func}'` (src/nova/pci/devspec.py:L122) | 1/2 | `src/nova/pci/devspec.py:L121–L122` |
| `PciAddressGlobSpec` | class | — | exported | not declared | — | `src/nova/pci/devspec.py:L125–L164` |
| `PciAddressGlobSpec.__init__` | method | (self, pci_addr) | public | not declared | 6/20 | `src/nova/pci/devspec.py:L132–L155` |
| `PciAddressGlobSpec.match` | method | (self, phys_pci_addr) | public | `all(conditions)` (src/nova/pci/devspec.py:L164) | 1/8 | `src/nova/pci/devspec.py:L157–L164` |
| `PciAddressRegexSpec` | class | — | exported | not declared | — | `src/nova/pci/devspec.py:L167–L195` |
| `PciAddressRegexSpec.__init__` | method | (self, pci_addr) | public | not declared | 2/12 | `src/nova/pci/devspec.py:L175–L186` |
| `PciAddressRegexSpec.match` | method | (self, phys_pci_addr) | public | `all(conditions)` (src/nova/pci/devspec.py:L195) | 1/8 | `src/nova/pci/devspec.py:L188–L195` |
| `WhitelistPciAddress` | class | — | exported | not declared | — | `src/nova/pci/devspec.py:L198–L268` |
| `WhitelistPciAddress.__init__` | method | (self, pci_addr, is_physical_function) | public | not declared | 1/5 | `src/nova/pci/devspec.py:L217–L221` |
| `WhitelistPciAddress._check_physical_function` | method | (self) | private | not declared | 2/8 | `src/nova/pci/devspec.py:L223–L230` |
| `WhitelistPciAddress._init_address_fields` | method | (self, pci_addr) | private | not declared | 4/12 | `src/nova/pci/devspec.py:L232–L243` |
| `WhitelistPciAddress.match` | method | (self, pci_addr, pci_phys_addr) | public | `True` (src/nova/pci/devspec.py:L264); `self.pci_address_spec.match(pci_addr_obj)` (src/nova/pci/devspec.py:L268) | 4/7 | `src/nova/pci/devspec.py:L245–L268` |
| `PciDeviceSpec` | class | — | exported | not declared | — | `src/nova/pci/devspec.py:L271–L434` |
| `PciDeviceSpec.__init__` | method | (self, dev_spec) | public | not declared | 1/4 | `src/nova/pci/devspec.py:L272–L278` |
| `PciDeviceSpec._address_obj` | method | (self) | private | `None` (src/nova/pci/devspec.py:L285); `address_obj` (src/nova/pci/devspec.py:L292) | 3/10 | `src/nova/pci/devspec.py:L280–L292` |
| `PciDeviceSpec._init_dev_details` | method | (self) | private | not declared | 14/48 | `src/nova/pci/devspec.py:L294–L371` |
| `PciDeviceSpec._ensure_remote_managed_dev_vpd_serial` | method | (self, dev_dict) | private | `True` (src/nova/pci/devspec.py:L383); `bool(card_sn)` (src/nova/pci/devspec.py:L389) | 2/7 | `src/nova/pci/devspec.py:L373–L389` |
| `PciDeviceSpec.match` | method | (self, dev_dict) | public | `False` (src/nova/pci/devspec.py:L394); `all([ self.vendor_id in (ANY, dev_dict['vendor_id']), self.product_id in (ANY, dev_dict['product_id']), address_obj.match(dev_dict['address'], dev_dict.get('parent_addr')), self._ensure_remote_managed` (src/nova/pci/devspec.py:L396) | 2/11 | `src/nova/pci/devspec.py:L391–L402` |
| `PciDeviceSpec.match_pci_obj` | method | (self, pci_obj) | public | `self.match(dev_dict)` (src/nova/pci/devspec.py:L413) | 1/10 | `src/nova/pci/devspec.py:L404–L413` |
| `PciDeviceSpec.get_tags` | method | (self) | public | `self.tags` (src/nova/pci/devspec.py:L416) | 1/2 | `src/nova/pci/devspec.py:L415–L416` |
| `PciDeviceSpec._normalize_device_spec_tag` | method | (self, tag) | private | not declared | 4/10 | `src/nova/pci/devspec.py:L418–L427` |
| `PciDeviceSpec.enhanced_pci_device_with_spec_tags` | method | (self, dev) | public | not declared | 3/6 | `src/nova/pci/devspec.py:L429–L434` |

## Dependencies

- `import abc` (src/nova/pci/devspec.py:L14)
- `import copy` (src/nova/pci/devspec.py:L15)
- `import re` (src/nova/pci/devspec.py:L16)
- `import string` (src/nova/pci/devspec.py:L17)
- `import typing as ty` (src/nova/pci/devspec.py:L18)
- `import nova.conf` (src/nova/pci/devspec.py:L20)
- `nova`: imports `exception` (src/nova/pci/devspec.py:L21)
- `nova.i18n`: imports `_` (src/nova/pci/devspec.py:L22)
- `nova`: imports `objects` (src/nova/pci/devspec.py:L23)
- `nova.pci.request`: imports `PCI_REMOTE_MANAGED_TAG` (src/nova/pci/devspec.py:L24)
- `nova.pci`: imports `utils` (src/nova/pci/devspec.py:L25)
- `oslo_log`: imports `log as logging` (src/nova/pci/devspec.py:L26)
- `oslo_utils`: imports `strutils` (src/nova/pci/devspec.py:L27)

## Side Effects

- **global-mutation**: MAX_VENDOR_ID = 0xFFFF (src/nova/pci/devspec.py:L29)
- **global-mutation**: MAX_PRODUCT_ID = 0xFFFF (src/nova/pci/devspec.py:L30)
- **global-mutation**: MAX_FUNC = 0x7 (src/nova/pci/devspec.py:L31)
- **global-mutation**: MAX_DOMAIN = 0xFFFF (src/nova/pci/devspec.py:L32)
- **global-mutation**: MAX_BUS = 0xFF (src/nova/pci/devspec.py:L33)
- **global-mutation**: MAX_SLOT = 0x1F (src/nova/pci/devspec.py:L34)
- **global-mutation**: ANY = '*' (src/nova/pci/devspec.py:L35)
- **global-mutation**: REGEX_ANY = '.*' (src/nova/pci/devspec.py:L36)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/pci/devspec.py:L38)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/pci/devspec.py:L39)

## Security Surface

- **sink** (`db-write`): check for wildcards, and insert wildcards where the field is left blank. (src/nova/pci/devspec.py:L129)
- **sink** (`db-write`): dev.update({tag: tag_value}) (src/nova/pci/devspec.py:L434)

