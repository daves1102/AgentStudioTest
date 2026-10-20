# src/nova/pci/utils.py

## Overview

This file implements the `utils` module, defining 2 constants, 13 functions, 3 variables, 7 imports, 12 side effects.

Lines: total 273, code 201, comment 21, blank 51

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/pci/utils.py:L30–L30` |
| `PCI_VENDOR_PATTERN` | constant | — | exported | not declared | — | `src/nova/pci/utils.py:L32–L32` |
| `_PCI_ADDRESS_PATTERN` | variable | — | unexported | not declared | — | `src/nova/pci/utils.py:L33–L35` |
| `_PCI_ADDRESS_REGEX` | variable | — | unexported | not declared | — | `src/nova/pci/utils.py:L36–L36` |
| `_SRIOV_TOTALVFS` | variable | — | unexported | not declared | — | `src/nova/pci/utils.py:L37–L37` |
| `pci_device_prop_match` | function | (pci_dev, specs) | exported | `any(_matching_devices(spec) for spec in specs)` (src/nova/pci/utils.py:L75) | 2/5 | `src/nova/pci/utils.py:L40–L75` |
| `pci_device_prop_match._matching_devices` | function | (spec) | private | `False` (src/nova/pci/utils.py:L61); `False` (src/nova/pci/utils.py:L72); `True` (src/nova/pci/utils.py:L73) | — | `src/nova/pci/utils.py:L56–L73` |
| `parse_address` | function | (address) | exported | `m.groups()` (src/nova/pci/utils.py:L87) | 2/5 | `src/nova/pci/utils.py:L78–L87` |
| `get_pci_address_fields` | function | (pci_addr) | exported | `domain, bus, slot, func` (src/nova/pci/utils.py:L100) | 1/4 | `src/nova/pci/utils.py:L90–L100` |
| `get_pci_address` | function | (domain, bus, slot, func) | exported | `'%s:%s:%s.%s' % (domain, bus, slot, func)` (src/nova/pci/utils.py:L111) | 1/2 | `src/nova/pci/utils.py:L103–L111` |
| `get_function_by_ifname` | function | (ifname) | exported | `(os.readlink(dev_path).strip("./"), sriov_totalvfs > 0)` (src/nova/pci/utils.py:L125); `os.readlink(dev_path).strip("./"), False` (src/nova/pci/utils.py:L128); `None, False` (src/nova/pci/utils.py:L129) | 3/12 | `src/nova/pci/utils.py:L114–L129` |
| `is_physical_function` | function | (domain, bus, slot, function) | exported | `sriov_totalvfs > 0` (src/nova/pci/utils.py:L141); `False` (src/nova/pci/utils.py:L144) | 3/13 | `src/nova/pci/utils.py:L132–L144` |
| `_get_sysfs_netdev_path` | function | (pci_addr, pf_interface) | unexported | `"/sys/bus/pci/devices/%s/physfn/net" % pci_addr` (src/nova/pci/utils.py:L153); `"/sys/bus/pci/devices/%s/net" % pci_addr` (src/nova/pci/utils.py:L154) | 2/4 | `src/nova/pci/utils.py:L147–L154` |
| `get_ifname_by_pci_address` | function | (pci_addr, pf_interface=False) | exported | `dev_info.pop()` (src/nova/pci/utils.py:L168) | 2/9 | `src/nova/pci/utils.py:L157–L170` |
| `get_mac_by_pci_address` | function | (pci_addr, pf_interface=False) | exported | `mac` (src/nova/pci/utils.py:L185) | 2/14 | `src/nova/pci/utils.py:L173–L191` |
| `get_vf_num_by_pci_address` | function | (pci_addr) | exported | `int(vf_num)` (src/nova/pci/utils.py:L213) | 4/13 | `src/nova/pci/utils.py:L194–L213` |
| `get_vf_product_id_by_pf_addr` | function | (pci_addr) | exported | `vf_product_id` (src/nova/pci/utils.py:L246) | 3/17 | `src/nova/pci/utils.py:L216–L246` |
| `get_pci_ids_by_pci_addr` | function | (pci_addr) | exported | `tuple(ids)` (src/nova/pci/utils.py:L273) | 4/20 | `src/nova/pci/utils.py:L249–L273` |

## Dependencies

- `import glob` (src/nova/pci/utils.py:L17)
- `import os` (src/nova/pci/utils.py:L18)
- `import re` (src/nova/pci/utils.py:L19)
- `import typing as ty` (src/nova/pci/utils.py:L20)
- `oslo_log`: imports `log as logging` (src/nova/pci/utils.py:L22)
- `nova`: imports `exception` (src/nova/pci/utils.py:L24)
- `nova.pci`: imports `stats` (src/nova/pci/utils.py:L28)

## Side Effects

- **file-io**: if os.path.isdir(dev_path): (src/nova/pci/utils.py:L120)
- **file-io**: with open(os.path.join(dev_path, _SRIOV_TOTALVFS)) as fd: (src/nova/pci/utils.py:L123)
- **file-io**: if os.path.isdir(dev_path): (src/nova/pci/utils.py:L137)
- **file-io**: with open(dev_path + _SRIOV_TOTALVFS) as fd: (src/nova/pci/utils.py:L139)
- **file-io**: dev_info = os.listdir(dev_path) (src/nova/pci/utils.py:L167)
- **file-io**: addr_file = os.path.join(dev_path, if_name, 'address') (src/nova/pci/utils.py:L180)
- **file-io**: with open(addr_file) as f: (src/nova/pci/utils.py:L183)
- **file-io**: with open(sriov_vf_device_path) as f: (src/nova/pci/utils.py:L233)
- **file-io**: with open(os.path.join(id_prefix, id_name)) as f: (src/nova/pci/utils.py:L259)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/pci/utils.py:L30)
- **global-mutation**: PCI_VENDOR_PATTERN = "^(hex{4})$".replace("hex", r"[\da-fA-F]") (src/nova/pci/utils.py:L32)
- **global-mutation**: VIRTFN_RE = re.compile(r"virtfn(\d+)") (src/nova/pci/utils.py:L200)

