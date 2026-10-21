# src/nova/virt/netutils.py

## Overview

This file implements the `netutils` module, defining 1 constant, 14 functions, 6 imports, 2 side effects.

Lines: total 384, code 281, comment 33, blank 70

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/virt/netutils.py:L31–L31` |
| `get_net_and_mask` | function | (cidr) | exported | `str(net.ip), str(net.netmask)` (src/nova/virt/netutils.py:L36) | 1/3 | `src/nova/virt/netutils.py:L34–L36` |
| `get_net_and_prefixlen` | function | (cidr) | exported | `str(net.ip), str(net._prefixlen)` (src/nova/virt/netutils.py:L41) | 1/3 | `src/nova/virt/netutils.py:L39–L41` |
| `get_ip_version` | function | (cidr) | exported | `int(net.version)` (src/nova/virt/netutils.py:L46) | 1/3 | `src/nova/virt/netutils.py:L44–L46` |
| `_get_first_network` | function | (network, version) | unexported | `next(i for i in network['subnets'] if i['version'] == version)` (src/nova/virt/netutils.py:L54) | 4/6 | `src/nova/virt/netutils.py:L49–L57` |
| `get_injected_network_template` | function | (network_info, template=None, libvirt_virt_type=None) | exported | `` (src/nova/virt/netutils.py:L74); `` (src/nova/virt/netutils.py:L156); `template.render({'interfaces': nets, 'use_ipv6': ipv6_is_available, 'libvirt_virt_type': libvirt_virt_type})` (src/nova/virt/netutils.py:L163) | 20/82 | `src/nova/virt/netutils.py:L60–L165` |
| `get_network_metadata` | function | (network_info) | exported | `` (src/nova/virt/netutils.py:L178); `{ "links": links, "networks": nets, "services": services }` (src/nova/virt/netutils.py:L220) | 15/34 | `src/nova/virt/netutils.py:L168–L224` |
| `get_ec2_ip_info` | function | (network_info) | exported | `ip_info` (src/nova/virt/netutils.py:L240) | 7/12 | `src/nova/virt/netutils.py:L227–L240` |
| `_get_eth_link` | function | (vif, ifc_num) | unexported | `link` (src/nova/virt/netutils.py:L269) | 3/16 | `src/nova/virt/netutils.py:L243–L269` |
| `_get_link_mtu` | function | (vif) | unexported | `None` (src/nova/virt/netutils.py:L275); `vif['network']['meta'].get('mtu')` (src/nova/virt/netutils.py:L276) | 3/5 | `src/nova/virt/netutils.py:L272–L276` |
| `_get_nets` | function | (vif, subnet, version, net_num, link_id) | unexported | `net_info` (src/nova/virt/netutils.py:L300); `net_info` (src/nova/virt/netutils.py:L331) | 7/38 | `src/nova/virt/netutils.py:L279–L331` |
| `_get_default_route` | function | (version, subnet) | unexported | `[]` (src/nova/virt/netutils.py:L343); `[{ 'network': '0.0.0.0', 'netmask': '0.0.0.0', 'gateway': gateway }]` (src/nova/virt/netutils.py:L346); `[{ 'network': '::', 'netmask': '::', 'gateway': gateway }]` (src/nova/virt/netutils.py:L352) | 5/17 | `src/nova/virt/netutils.py:L334–L356` |
| `_get_dns_services` | function | (subnet) | unexported | `services` (src/nova/virt/netutils.py:L363); `[{'type': 'dns', 'address': ip.get('address')} for ip in subnet['dns']]` (src/nova/virt/netutils.py:L364) | 3/6 | `src/nova/virt/netutils.py:L359–L365` |
| `get_cached_vifs_with_vlan` | function | (network_info) | exported | `{}` (src/nova/virt/netutils.py:L373); `{vif['address']: vif['details']['vlan'] for vif in network_info if vif.get('details', {}).get('vlan')}` (src/nova/virt/netutils.py:L374) | 4/5 | `src/nova/virt/netutils.py:L368–L375` |
| `get_cached_vifs_with_trusted` | function | (network_info) | exported | `{}` (src/nova/virt/netutils.py:L381); `{vif['address']: strutils.bool_from_string( vif['profile'].get('trusted', 'False')) for vif in network_info if vif.get('profile')}` (src/nova/virt/netutils.py:L382) | 4/6 | `src/nova/virt/netutils.py:L378–L384` |

## Dependencies

- `import os` (src/nova/virt/netutils.py:L22)
- `import jinja2` (src/nova/virt/netutils.py:L24)
- `import netaddr` (src/nova/virt/netutils.py:L25)
- `oslo_utils`: imports `strutils` (src/nova/virt/netutils.py:L26)
- `import nova.conf` (src/nova/virt/netutils.py:L28)
- `nova.network`: imports `model` (src/nova/virt/netutils.py:L29)

## Side Effects

- **file-io**: tmpl_path, tmpl_file = os.path.split(template) (src/nova/virt/netutils.py:L158)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/virt/netutils.py:L31)

