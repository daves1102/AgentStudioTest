# src/nova/tests/fixtures/neutron.py

## Overview

This file implements the `neutron` module, defining 2 classs, 24 fields, 31 methods, 11 imports, 1 side effect, 8 security surface entries.

Lines: total 968, code 793, comment 91, blank 84

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `_FakeNeutronClient` | class | — | unexported | not declared | — | `src/nova/tests/fixtures/neutron.py:L28–L58` |
| `_FakeNeutronClient.__init__` | method | (self, fixture, is_admin) | public | not declared | 1/3 | `src/nova/tests/fixtures/neutron.py:L43–L45` |
| `_FakeNeutronClient.__getattr__` | method | (self, name) | public | `getattr(self.fixture, name)` (src/nova/tests/fixtures/neutron.py:L48) | 1/2 | `src/nova/tests/fixtures/neutron.py:L47–L48` |
| `_FakeNeutronClient.list_ports` | method | (self, retrieve_all=True, **_params) | public | `self.fixture.list_ports( self.is_admin, retrieve_all=retrieve_all, **_params, )` (src/nova/tests/fixtures/neutron.py:L51) | 1/4 | `src/nova/tests/fixtures/neutron.py:L50–L53` |
| `_FakeNeutronClient.show_port` | method | (self, port_id, **_params) | public | `self.fixture.show_port( port_id, is_admin=self.is_admin, **_params, )` (src/nova/tests/fixtures/neutron.py:L56) | 1/4 | `src/nova/tests/fixtures/neutron.py:L55–L58` |
| `NeutronFixture` | class | — | exported | not declared | — | `src/nova/tests/fixtures/neutron.py:L63–L968` |
| `NeutronFixture.tenant_id` | field | — | public | not declared | — | `src/nova/tests/fixtures/neutron.py:L67–L67` |
| `NeutronFixture.network_1` | field | — | public | not declared | — | `src/nova/tests/fixtures/neutron.py:L69–L91` |
| `NeutronFixture.security_group` | field | — | public | not declared | — | `src/nova/tests/fixtures/neutron.py:L93–L100` |
| `NeutronFixture.security_group_rule_ip4_ingress` | field | — | public | not declared | — | `src/nova/tests/fixtures/neutron.py:L101–L114` |
| `NeutronFixture.security_group_rule_ip4_egress` | field | — | public | not declared | — | `src/nova/tests/fixtures/neutron.py:L115–L128` |
| `NeutronFixture.security_group_rule_ip6_ingress` | field | — | public | not declared | — | `src/nova/tests/fixtures/neutron.py:L129–L142` |
| `NeutronFixture.security_group_rule_ip6_egress` | field | — | public | not declared | — | `src/nova/tests/fixtures/neutron.py:L143–L156` |
| `NeutronFixture.subnet_1` | field | — | public | not declared | — | `src/nova/tests/fixtures/neutron.py:L164–L185` |
| `NeutronFixture.subnet_ipv6_1` | field | — | public | not declared | — | `src/nova/tests/fixtures/neutron.py:L186–L207` |
| `NeutronFixture.port_1` | field | — | public | not declared | — | `src/nova/tests/fixtures/neutron.py:L210–L237` |
| `NeutronFixture.port_2` | field | — | public | not declared | — | `src/nova/tests/fixtures/neutron.py:L239–L264` |
| `NeutronFixture.port_with_resource_request` | field | — | public | not declared | — | `src/nova/tests/fixtures/neutron.py:L266–L298` |
| `NeutronFixture.default_port` | field | — | public | not declared | — | `src/nova/tests/fixtures/neutron.py:L303–L303` |
| `NeutronFixture.network_2` | field | — | public | not declared | — | `src/nova/tests/fixtures/neutron.py:L307–L331` |
| `NeutronFixture.subnet_2` | field | — | public | not declared | — | `src/nova/tests/fixtures/neutron.py:L333–L354` |
| `NeutronFixture.sriov_port` | field | — | public | not declared | — | `src/nova/tests/fixtures/neutron.py:L357–L380` |
| `NeutronFixture.sriov_port2` | field | — | public | not declared | — | `src/nova/tests/fixtures/neutron.py:L382–L405` |
| `NeutronFixture.sriov_pf_port` | field | — | public | not declared | — | `src/nova/tests/fixtures/neutron.py:L407–L430` |
| `NeutronFixture.sriov_pf_port2` | field | — | public | not declared | — | `src/nova/tests/fixtures/neutron.py:L432–L455` |
| `NeutronFixture.macvtap_port` | field | — | public | not declared | — | `src/nova/tests/fixtures/neutron.py:L457–L479` |
| `NeutronFixture.macvtap_port2` | field | — | public | not declared | — | `src/nova/tests/fixtures/neutron.py:L481–L503` |
| `NeutronFixture.ports_with_accelerator` | field | — | public | not declared | — | `src/nova/tests/fixtures/neutron.py:L505–L558` |
| `NeutronFixture.ports_with_multi_accelerators` | field | — | public | not declared | — | `src/nova/tests/fixtures/neutron.py:L560–L587` |
| `NeutronFixture.nw_info` | field | — | public | not declared | — | `src/nova/tests/fixtures/neutron.py:L589–L636` |
| `NeutronFixture.__init__` | method | (self, test) | public | not declared | 1/19 | `src/nova/tests/fixtures/neutron.py:L638–L670` |
| `NeutronFixture.setUp` | method | (self) | public | not declared | 1/13 | `src/nova/tests/fixtures/neutron.py:L672–L693` |
| `NeutronFixture._get_client` | method | (self, context, admin=False) | private | `_FakeNeutronClient(self, admin)` (src/nova/tests/fixtures/neutron.py:L698) | 3/3 | `src/nova/tests/fixtures/neutron.py:L695–L698` |
| `NeutronFixture.create_port_binding` | method | (self, port_id, body) | public | `{'binding': binding}` (src/nova/tests/fixtures/neutron.py:L720) | 3/14 | `src/nova/tests/fixtures/neutron.py:L700–L720` |
| `NeutronFixture._validate_port_binding` | method | (self, port_id, host_id) | private | not declared | 3/5 | `src/nova/tests/fixtures/neutron.py:L722–L727` |
| `NeutronFixture.delete_port_binding` | method | (self, port_id, host_id) | public | not declared | 1/3 | `src/nova/tests/fixtures/neutron.py:L729–L731` |
| `NeutronFixture._activate_port_binding` | method | (self, port_id, host_id, modify_port=False) | private | not declared | 4/8 | `src/nova/tests/fixtures/neutron.py:L733–L744` |
| `NeutronFixture.activate_port_binding` | method | (self, port_id, host_id) | public | not declared | 1/3 | `src/nova/tests/fixtures/neutron.py:L746–L748` |
| `NeutronFixture.show_port_binding` | method | (self, port_id, host_id) | public | `{'binding': self._port_bindings[port_id][host_id]}` (src/nova/tests/fixtures/neutron.py:L752) | 1/3 | `src/nova/tests/fixtures/neutron.py:L750–L752` |
| `NeutronFixture._list_resource` | method | (self, resources, retrieve_all, **_params) | private | `result` (src/nova/tests/fixtures/neutron.py:L771) | 8/14 | `src/nova/tests/fixtures/neutron.py:L754–L771` |
| `NeutronFixture.list_extensions` | method | (self, *args, **kwargs) | public | `{ 'extensions': [ { # Copied from neutron-lib portbindings_extended.py "updated": "2017-07-17T10:00:00-00:00", "name": neutron_constants.PORT_BINDING_EXTENDED, "links": [], "alias": "binding-extended"` (src/nova/tests/fixtures/neutron.py:L774) | 1/13 | `src/nova/tests/fixtures/neutron.py:L773–L786` |
| `NeutronFixture._get_active_binding` | method | (self, port_id) | private | `host, copy.deepcopy(binding)` (src/nova/tests/fixtures/neutron.py:L791); `None, {}` (src/nova/tests/fixtures/neutron.py:L793) | 3/5 | `src/nova/tests/fixtures/neutron.py:L788–L793` |
| `NeutronFixture._merge_in_active_binding` | method | (self, port) | private | `` (src/nova/tests/fixtures/neutron.py:L798) | 4/9 | `src/nova/tests/fixtures/neutron.py:L795–L809` |
| `NeutronFixture.show_port` | method | (self, port_id, **_params) | public | `{'port': port}` (src/nova/tests/fixtures/neutron.py:L825) | 4/9 | `src/nova/tests/fixtures/neutron.py:L811–L825` |
| `NeutronFixture.delete_port` | method | (self, port_id, **_params) | public | not declared | 3/5 | `src/nova/tests/fixtures/neutron.py:L827–L835` |
| `NeutronFixture.list_ports` | method | (self, is_admin, retrieve_all=True, **_params) | public | `{'ports': ports}` (src/nova/tests/fixtures/neutron.py:L848) | 4/8 | `src/nova/tests/fixtures/neutron.py:L837–L848` |
| `NeutronFixture.show_network` | method | (self, network_id, **_params) | public | `{'network': copy.deepcopy(self._networks[network_id])}` (src/nova/tests/fixtures/neutron.py:L853) | 2/4 | `src/nova/tests/fixtures/neutron.py:L850–L853` |
| `NeutronFixture.list_networks` | method | (self, retrieve_all=True, **_params) | public | `{ 'networks': self._list_resource( self._networks, retrieve_all, **_params, ), }` (src/nova/tests/fixtures/neutron.py:L856) | 1/6 | `src/nova/tests/fixtures/neutron.py:L855–L860` |
| `NeutronFixture.show_subnet` | method | (self, subnet_id, **_params) | public | `{'subnet': copy.deepcopy(self._subnets[subnet_id])}` (src/nova/tests/fixtures/neutron.py:L865) | 2/4 | `src/nova/tests/fixtures/neutron.py:L862–L865` |
| `NeutronFixture.list_subnets` | method | (self, retrieve_all=True, **_params) | public | `{'subnets': copy.deepcopy(list(self._subnets.values()))}` (src/nova/tests/fixtures/neutron.py:L869) | 1/2 | `src/nova/tests/fixtures/neutron.py:L867–L869` |
| `NeutronFixture.list_floatingips` | method | (self, retrieve_all=True, **_params) | public | `{'floatingips': []}` (src/nova/tests/fixtures/neutron.py:L872) | 1/2 | `src/nova/tests/fixtures/neutron.py:L871–L872` |
| `NeutronFixture.list_security_groups` | method | (self, retrieve_all=True, **_params) | public | `{ 'security_groups': self._list_resource( self._security_groups, retrieve_all, **_params, ), }` (src/nova/tests/fixtures/neutron.py:L875) | 1/6 | `src/nova/tests/fixtures/neutron.py:L874–L879` |
| `NeutronFixture.create_port` | method | (self, body=None) | public | `{'port': copy.deepcopy(new_port)}` (src/nova/tests/fixtures/neutron.py:L903) | 4/12 | `src/nova/tests/fixtures/neutron.py:L881–L903` |
| `NeutronFixture.update_port` | method | (self, port_id, body=None) | public | `{'port': copy.deepcopy(port)}` (src/nova/tests/fixtures/neutron.py:L946) | 6/29 | `src/nova/tests/fixtures/neutron.py:L905–L946` |
| `NeutronFixture.show_quota` | method | (self, project_id) | public | `{'quota': {'port': -1}}` (src/nova/tests/fixtures/neutron.py:L950) | 1/2 | `src/nova/tests/fixtures/neutron.py:L948–L950` |
| `NeutronFixture.validate_auto_allocated_topology_requirements` | method | (self, project_id) | public | `self.get_auto_allocated_topology(project_id, fields=['dry-run'])` (src/nova/tests/fixtures/neutron.py:L955) | 1/2 | `src/nova/tests/fixtures/neutron.py:L952–L955` |
| `NeutronFixture.get_auto_allocated_topology` | method | (self, project_id, **_params) | public | `{'id': 'dry-run=pass', 'tenant_id': project_id}` (src/nova/tests/fixtures/neutron.py:L961); `{ 'auto_allocated_topology': { 'id': self.network_1['id'], 'tenant_id': project_id, } }` (src/nova/tests/fixtures/neutron.py:L963) | 2/9 | `src/nova/tests/fixtures/neutron.py:L957–L968` |

## Dependencies

- `import collections` (src/nova/tests/fixtures/neutron.py:L13)
- `import copy` (src/nova/tests/fixtures/neutron.py:L14)
- `import random` (src/nova/tests/fixtures/neutron.py:L15)
- `import fixtures` (src/nova/tests/fixtures/neutron.py:L17)
- `neutronclient.common`: imports `exceptions as neutron_client_exc` (src/nova/tests/fixtures/neutron.py:L18)
- `import os_resource_classes as orc` (src/nova/tests/fixtures/neutron.py:L19)
- `oslo_utils`: imports `uuidutils` (src/nova/tests/fixtures/neutron.py:L20)
- `nova`: imports `exception` (src/nova/tests/fixtures/neutron.py:L22)
- `nova.network`: imports `constants as neutron_constants` (src/nova/tests/fixtures/neutron.py:L23)
- `nova.network`: imports `model as network_model` (src/nova/tests/fixtures/neutron.py:L24)
- `nova.tests.fixtures`: imports `nova as nova_fixtures` (src/nova/tests/fixtures/neutron.py:L25)

## Side Effects

- **network**: 'nova.network.neutron.get_client', self._get_client) (src/nova/tests/fixtures/neutron.py:L693)

## Security Surface

- **sink** (`db-write`): """Update the port dict with the currently active port binding""" (src/nova/tests/fixtures/neutron.py:L796)
- **sink** (`db-write`): new_port.update(copy.deepcopy(self.default_port)) (src/nova/tests/fixtures/neutron.py:L887)
- **sink** (`db-write`): new_port.update({ (src/nova/tests/fixtures/neutron.py:L894)
- **sink** (`db-write`): port.update(copy.deepcopy(body['port'])) (src/nova/tests/fixtures/neutron.py:L909)
- **sink** (`db-write`): update = { (src/nova/tests/fixtures/neutron.py:L929)
- **sink** (`db-write`): update['profile'] = copy.deepcopy( (src/nova/tests/fixtures/neutron.py:L936)
- **sink** (`db-write`): update['vif_details'] = copy.deepcopy( (src/nova/tests/fixtures/neutron.py:L939)
- **sink** (`db-write`): self._port_bindings[port_id][host] = update (src/nova/tests/fixtures/neutron.py:L941)

