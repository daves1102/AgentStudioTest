# src/nova/api/metadata/base.py

## Overview

This file implements the `base` module, defining 4 classs, 25 constants, 5 functions, 25 methods, 20 imports, 28 side effects, 2 security surface entries.

Lines: total 746, code 535, comment 74, blank 137

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/api/metadata/base.py:L43–L43` |
| `VERSIONS` | constant | — | exported | not declared | — | `src/nova/api/metadata/base.py:L45–L55` |
| `FOLSOM` | constant | — | exported | not declared | — | `src/nova/api/metadata/base.py:L65–L65` |
| `GRIZZLY` | constant | — | exported | not declared | — | `src/nova/api/metadata/base.py:L66–L66` |
| `HAVANA` | constant | — | exported | not declared | — | `src/nova/api/metadata/base.py:L67–L67` |
| `LIBERTY` | constant | — | exported | not declared | — | `src/nova/api/metadata/base.py:L68–L68` |
| `NEWTON_ONE` | constant | — | exported | not declared | — | `src/nova/api/metadata/base.py:L69–L69` |
| `NEWTON_TWO` | constant | — | exported | not declared | — | `src/nova/api/metadata/base.py:L70–L70` |
| `OCATA` | constant | — | exported | not declared | — | `src/nova/api/metadata/base.py:L71–L71` |
| `ROCKY` | constant | — | exported | not declared | — | `src/nova/api/metadata/base.py:L72–L72` |
| `VICTORIA` | constant | — | exported | not declared | — | `src/nova/api/metadata/base.py:L73–L73` |
| `EPOXY` | constant | — | exported | not declared | — | `src/nova/api/metadata/base.py:L74–L74` |
| `OPENSTACK_VERSIONS` | constant | — | exported | not declared | — | `src/nova/api/metadata/base.py:L76–L87` |
| `VERSION` | constant | — | exported | not declared | — | `src/nova/api/metadata/base.py:L89–L89` |
| `CONTENT` | constant | — | exported | not declared | — | `src/nova/api/metadata/base.py:L90–L90` |
| `CONTENT_DIR` | constant | — | exported | not declared | — | `src/nova/api/metadata/base.py:L91–L91` |
| `MD_JSON_NAME` | constant | — | exported | not declared | — | `src/nova/api/metadata/base.py:L92–L92` |
| `VD_JSON_NAME` | constant | — | exported | not declared | — | `src/nova/api/metadata/base.py:L93–L93` |
| `VD2_JSON_NAME` | constant | — | exported | not declared | — | `src/nova/api/metadata/base.py:L94–L94` |
| `NW_JSON_NAME` | constant | — | exported | not declared | — | `src/nova/api/metadata/base.py:L95–L95` |
| `UD_NAME` | constant | — | exported | not declared | — | `src/nova/api/metadata/base.py:L96–L96` |
| `PASS_NAME` | constant | — | exported | not declared | — | `src/nova/api/metadata/base.py:L97–L97` |
| `MIME_TYPE_TEXT_PLAIN` | constant | — | exported | not declared | — | `src/nova/api/metadata/base.py:L98–L98` |
| `MIME_TYPE_APPLICATION_JSON` | constant | — | exported | not declared | — | `src/nova/api/metadata/base.py:L99–L99` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/api/metadata/base.py:L101–L101` |
| `InvalidMetadataVersion` | class | — | exported | not declared | — | `src/nova/api/metadata/base.py:L104–L105` |
| `InvalidMetadataPath` | class | — | exported | not declared | — | `src/nova/api/metadata/base.py:L108–L109` |
| `InstanceMetadata` | class | — | exported | not declared | — | `src/nova/api/metadata/base.py:L112–L634` |
| `InstanceMetadata.__init__` | method | (self, instance, address=None, content=None, extra_md=None, network_info=None, network_metadata=None) | public | not declared | 7/53 | `src/nova/api/metadata/base.py:L115–L213` |
| `InstanceMetadata._route_configuration` | method | (self) | private | `self.route_configuration` (src/nova/api/metadata/base.py:L217); `self.route_configuration` (src/nova/api/metadata/base.py:L229) | 2/13 | `src/nova/api/metadata/base.py:L215–L229` |
| `InstanceMetadata.set_mimetype` | method | (self, mime_type) | public | not declared | 1/2 | `src/nova/api/metadata/base.py:L231–L232` |
| `InstanceMetadata.get_mimetype` | method | (self) | public | `self.md_mimetype` (src/nova/api/metadata/base.py:L235) | 1/2 | `src/nova/api/metadata/base.py:L234–L235` |
| `InstanceMetadata.get_ec2_metadata` | method | (self, version) | public | `data` (src/nova/api/metadata/base.py:L305) | 18/46 | `src/nova/api/metadata/base.py:L237–L305` |
| `InstanceMetadata.get_ec2_item` | method | (self, path_tokens) | public | `find_path_in_tree(data, path_tokens[1:])` (src/nova/api/metadata/base.py:L310) | 1/3 | `src/nova/api/metadata/base.py:L307–L310` |
| `InstanceMetadata.get_openstack_item` | method | (self, path_tokens) | public | `self._handle_content(path_tokens)` (src/nova/api/metadata/base.py:L314); `self._route_configuration().handle_path(path_tokens)` (src/nova/api/metadata/base.py:L315) | 2/4 | `src/nova/api/metadata/base.py:L312–L315` |
| `InstanceMetadata._metadata_as_json` | method | (self, version, path) | private | `jsonutils.dump_as_bytes(metadata)` (src/nova/api/metadata/base.py:L369) | 12/40 | `src/nova/api/metadata/base.py:L317–L369` |
| `InstanceMetadata._get_device_metadata` | method | (self, version) | private | `device_metadata_list` (src/nova/api/metadata/base.py:L449) | 25/63 | `src/nova/api/metadata/base.py:L371–L449` |
| `InstanceMetadata._get_instance_dedicated_cpus` | method | (self) | private | `dedicated_cpus` (src/nova/api/metadata/base.py:L458) | 3/7 | `src/nova/api/metadata/base.py:L451–L458` |
| `InstanceMetadata._handle_content` | method | (self, path_tokens) | private | `self.content[path_tokens[1]]` (src/nova/api/metadata/base.py:L465) | 3/6 | `src/nova/api/metadata/base.py:L460–L465` |
| `InstanceMetadata._handle_version` | method | (self, version, path) | private | `ret` (src/nova/api/metadata/base.py:L481) | 6/13 | `src/nova/api/metadata/base.py:L467–L481` |
| `InstanceMetadata._user_data` | method | (self, version, path) | private | `self.userdata_raw` (src/nova/api/metadata/base.py:L486) | 2/4 | `src/nova/api/metadata/base.py:L483–L486` |
| `InstanceMetadata._network_data` | method | (self, version, path) | private | `jsonutils.dump_as_bytes({})` (src/nova/api/metadata/base.py:L490); `jsonutils.dump_as_bytes(self.network_metadata)` (src/nova/api/metadata/base.py:L491) | 2/4 | `src/nova/api/metadata/base.py:L488–L491` |
| `InstanceMetadata._password` | method | (self, version, path) | private | `password.handle_password` (src/nova/api/metadata/base.py:L495) | 2/4 | `src/nova/api/metadata/base.py:L493–L496` |
| `InstanceMetadata._vendor_data` | method | (self, version, path) | private | `jsonutils.dump_as_bytes( self.vendordata_providers['StaticJSON'].get())` (src/nova/api/metadata/base.py:L504) | 4/8 | `src/nova/api/metadata/base.py:L498–L507` |
| `InstanceMetadata._vendor_data2` | method | (self, version, path) | private | `jsonutils.dump_as_bytes(j)` (src/nova/api/metadata/base.py:L526) | 6/17 | `src/nova/api/metadata/base.py:L509–L528` |
| `InstanceMetadata._check_version` | method | (self, required, requested, versions=VERSIONS) | private | `versions.index(requested) >= versions.index(required)` (src/nova/api/metadata/base.py:L531) | 1/2 | `src/nova/api/metadata/base.py:L530–L531` |
| `InstanceMetadata._check_os_version` | method | (self, required, requested) | private | `self._check_version(required, requested, OPENSTACK_VERSIONS)` (src/nova/api/metadata/base.py:L534) | 1/2 | `src/nova/api/metadata/base.py:L533–L534` |
| `InstanceMetadata._get_hostname` | method | (self) | private | `'.'.join([self.instance.hostname, CONF.api.dhcp_domain])` (src/nova/api/metadata/base.py:L540); `self.instance.hostname` (src/nova/api/metadata/base.py:L542) | 2/4 | `src/nova/api/metadata/base.py:L536–L542` |
| `InstanceMetadata.lookup` | method | (self, path) | public | `versions` (src/nova/api/metadata/base.py:L578); `data` (src/nova/api/metadata/base.py:L588) | 14/33 | `src/nova/api/metadata/base.py:L544–L588` |
| `InstanceMetadata.metadata_for_config_drive` | method | (self) | public | not declared | 11/34 | `src/nova/api/metadata/base.py:L590–L634` |
| `RouteConfiguration` | class | — | exported | not declared | — | `src/nova/api/metadata/base.py:L637–L664` |
| `RouteConfiguration.__init__` | method | (self, path_handler) | public | not declared | 1/2 | `src/nova/api/metadata/base.py:L640–L641` |
| `RouteConfiguration._version` | method | (self, version) | private | `version` (src/nova/api/metadata/base.py:L650) | 3/6 | `src/nova/api/metadata/base.py:L643–L650` |
| `RouteConfiguration.handle_path` | method | (self, path_tokens) | public | `path_handler(version, path)` (src/nova/api/metadata/base.py:L664) | 3/10 | `src/nova/api/metadata/base.py:L652–L664` |
| `get_metadata_by_address` | function | (address) | exported | `get_metadata_by_instance_id(fixed_ip['instance_uuid'], address, ctxt)` (src/nova/api/metadata/base.py:L673) | 1/8 | `src/nova/api/metadata/base.py:L667–L675` |
| `get_metadata_by_instance_id` | function | (instance_id, address, ctxt=None) | exported | `InstanceMetadata(instance, address)` (src/nova/api/metadata/base.py:L688); `InstanceMetadata(instance, address)` (src/nova/api/metadata/base.py:L697); `InstanceMetadata(instance, address)` (src/nova/api/metadata/base.py:L702) | 4/22 | `src/nova/api/metadata/base.py:L678–L702` |
| `_format_instance_mapping` | function | (instance) | unexported | `block_device.instance_block_mapping(instance, bdms)` (src/nova/api/metadata/base.py:L707) | 1/3 | `src/nova/api/metadata/base.py:L705–L707` |
| `ec2_md_print` | function | (data) | exported | `output[:-1]` (src/nova/api/metadata/base.py:L725); `'\n'.join(data)` (src/nova/api/metadata/base.py:L727); `data` (src/nova/api/metadata/base.py:L729); `str(data)` (src/nova/api/metadata/base.py:L731) | 8/21 | `src/nova/api/metadata/base.py:L710–L731` |
| `find_path_in_tree` | function | (data, path_tokens) | exported | `data` (src/nova/api/metadata/base.py:L746) | 6/12 | `src/nova/api/metadata/base.py:L734–L746` |

## Dependencies

- `import itertools` (src/nova/api/metadata/base.py:L19)
- `import os` (src/nova/api/metadata/base.py:L20)
- `import posixpath` (src/nova/api/metadata/base.py:L21)
- `oslo_log`: imports `log as logging` (src/nova/api/metadata/base.py:L23)
- `oslo_serialization`: imports `base64` (src/nova/api/metadata/base.py:L24)
- `oslo_serialization`: imports `jsonutils` (src/nova/api/metadata/base.py:L25)
- `oslo_utils`: imports `timeutils` (src/nova/api/metadata/base.py:L26)
- `nova.api.metadata`: imports `password` (src/nova/api/metadata/base.py:L28)
- `nova.api.metadata`: imports `vendordata_dynamic` (src/nova/api/metadata/base.py:L29)
- `nova.api.metadata`: imports `vendordata_json` (src/nova/api/metadata/base.py:L30)
- `nova`: imports `block_device` (src/nova/api/metadata/base.py:L31)
- `import nova.conf` (src/nova/api/metadata/base.py:L32)
- `nova`: imports `context` (src/nova/api/metadata/base.py:L33)
- `nova`: imports `exception` (src/nova/api/metadata/base.py:L34)
- `nova.network`: imports `neutron` (src/nova/api/metadata/base.py:L35)
- `nova.network`: imports `security_group_api` (src/nova/api/metadata/base.py:L36)
- `nova`: imports `objects` (src/nova/api/metadata/base.py:L37)
- `nova.objects`: imports `virt_device_metadata as metadata_obj` (src/nova/api/metadata/base.py:L38)
- `nova`: imports `utils` (src/nova/api/metadata/base.py:L39)
- `nova.virt`: imports `netutils` (src/nova/api/metadata/base.py:L40)

## Side Effects

- **file-io**: filepath = os.path.join('ec2', version, 'user-data') (src/nova/api/metadata/base.py:L599)
- **file-io**: filepath = os.path.join('ec2', version, 'meta-data.json') (src/nova/api/metadata/base.py:L608)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/api/metadata/base.py:L43)
- **global-mutation**: VERSIONS = [ (src/nova/api/metadata/base.py:L45)
- **global-mutation**: FOLSOM = '2012-08-10' (src/nova/api/metadata/base.py:L65)
- **global-mutation**: GRIZZLY = '2013-04-04' (src/nova/api/metadata/base.py:L66)
- **global-mutation**: HAVANA = '2013-10-17' (src/nova/api/metadata/base.py:L67)
- **global-mutation**: LIBERTY = '2015-10-15' (src/nova/api/metadata/base.py:L68)
- **global-mutation**: NEWTON_ONE = '2016-06-30' (src/nova/api/metadata/base.py:L69)
- **global-mutation**: NEWTON_TWO = '2016-10-06' (src/nova/api/metadata/base.py:L70)
- **global-mutation**: OCATA = '2017-02-22' (src/nova/api/metadata/base.py:L71)
- **global-mutation**: ROCKY = '2018-08-27' (src/nova/api/metadata/base.py:L72)
- **global-mutation**: VICTORIA = '2020-10-14' (src/nova/api/metadata/base.py:L73)
- **global-mutation**: EPOXY = '2025-04-04' (src/nova/api/metadata/base.py:L74)
- **global-mutation**: OPENSTACK_VERSIONS = [ (src/nova/api/metadata/base.py:L76)
- **global-mutation**: VERSION = "version" (src/nova/api/metadata/base.py:L89)
- **global-mutation**: CONTENT = "content" (src/nova/api/metadata/base.py:L90)
- **global-mutation**: CONTENT_DIR = "content" (src/nova/api/metadata/base.py:L91)
- **global-mutation**: MD_JSON_NAME = "meta_data.json" (src/nova/api/metadata/base.py:L92)
- **global-mutation**: VD_JSON_NAME = "vendor_data.json" (src/nova/api/metadata/base.py:L93)
- **global-mutation**: VD2_JSON_NAME = "vendor_data2.json" (src/nova/api/metadata/base.py:L94)
- **global-mutation**: NW_JSON_NAME = "network_data.json" (src/nova/api/metadata/base.py:L95)
- **global-mutation**: UD_NAME = "user_data" (src/nova/api/metadata/base.py:L96)
- **global-mutation**: PASS_NAME = "password" (src/nova/api/metadata/base.py:L97)
- **global-mutation**: MIME_TYPE_TEXT_PLAIN = "text/plain" (src/nova/api/metadata/base.py:L98)
- **global-mutation**: MIME_TYPE_APPLICATION_JSON = "application/json" (src/nova/api/metadata/base.py:L99)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/api/metadata/base.py:L101)
- **global-mutation**: ALL_OPENSTACK_VERSIONS = OPENSTACK_VERSIONS + ["latest"] (src/nova/api/metadata/base.py:L611)

## Security Surface

- **sink** (`db-write`): metadata.update(self.extra_md) (src/nova/api/metadata/base.py:L324)
- **sink** (`db-write`): j.update(values) (src/nova/api/metadata/base.py:L524)

