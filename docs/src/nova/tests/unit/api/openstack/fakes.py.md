# src/nova/tests/unit/api/openstack/fakes.py

## Overview

This file implements the `fakes` module, defining 8 classs, 3 classmethods, 7 constants, 2 fields, 52 functions, 17 methods, 3 staticmethods, 27 imports, 8 side effects, 7 security surface entries.

Lines: total 804, code 624, comment 25, blank 155

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/fakes.py:L46–L46` |
| `QUOTAS` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/fakes.py:L47–L47` |
| `FAKE_UUID` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/fakes.py:L49–L49` |
| `FAKE_PROJECT_ID` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/fakes.py:L50–L50` |
| `FAKE_USER_ID` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/fakes.py:L51–L51` |
| `FAKE_UUIDS` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/fakes.py:L52–L52` |
| `fake_wsgi` | function | (self, req) | exported | `self.application` (src/nova/tests/unit/api/openstack/fakes.py:L57) | 1/2 | `src/nova/tests/unit/api/openstack/fakes.py:L56–L57` |
| `wsgi_app_v21` | function | (fake_auth_context=None, v2_compatible=False, custom_routes=None) | exported | `mapper` (src/nova/tests/unit/api/openstack/fakes.py:L88) | 1/11 | `src/nova/tests/unit/api/openstack/fakes.py:L60–L88` |
| `wsgi_app_v21.wrap` | function | (app, use_context=False) | public | `app` (src/nova/tests/unit/api/openstack/fakes.py:L78) | — | `src/nova/tests/unit/api/openstack/fakes.py:L64–L78` |
| `stub_out_key_pair_funcs` | function | (testcase, have_key_pair=True, **kwargs) | exported | not declared | 2/9 | `src/nova/tests/unit/api/openstack/fakes.py:L91–L110` |
| `stub_out_key_pair_funcs.key_pair` | function | (context, user_id) | public | `[dict(test_keypair.fake_keypair, name='key', public_key='public_key', **kwargs)]` (src/nova/tests/unit/api/openstack/fakes.py:L93) | — | `src/nova/tests/unit/api/openstack/fakes.py:L92–L94` |
| `stub_out_key_pair_funcs.one_key_pair` | function | (context, user_id, name) | public | `dict(test_keypair.fake_keypair, name=name, public_key='public_key', **kwargs)` (src/nova/tests/unit/api/openstack/fakes.py:L98) | — | `src/nova/tests/unit/api/openstack/fakes.py:L96–L101` |
| `stub_out_key_pair_funcs.no_key_pair` | function | (context, user_id) | public | `[]` (src/nova/tests/unit/api/openstack/fakes.py:L104) | — | `src/nova/tests/unit/api/openstack/fakes.py:L103–L104` |
| `stub_out_instance_quota` | function | (test, allowed, quota, resource='instances') | exported | not declared | 1/3 | `src/nova/tests/unit/api/openstack/fakes.py:L113–L126` |
| `stub_out_instance_quota.fake_reserve` | function | (context, **deltas) | public | not declared | — | `src/nova/tests/unit/api/openstack/fakes.py:L114–L125` |
| `stub_out_networking` | function | (test) | exported | not declared | 1/3 | `src/nova/tests/unit/api/openstack/fakes.py:L129–L132` |
| `stub_out_networking.get_my_ip` | function | — | public | `'127.0.0.1'` (src/nova/tests/unit/api/openstack/fakes.py:L131) | — | `src/nova/tests/unit/api/openstack/fakes.py:L130–L131` |
| `stub_out_compute_api_snapshot` | function | (test) | exported | not declared | 1/3 | `src/nova/tests/unit/api/openstack/fakes.py:L135–L146` |
| `stub_out_compute_api_snapshot.snapshot` | function | (self, context, instance, name, extra_properties=None) | public | `{ 'id': uuids.snapshot_id, 'status': 'ACTIVE', 'name': name, 'properties': extra_properties, }` (src/nova/tests/unit/api/openstack/fakes.py:L141) | — | `src/nova/tests/unit/api/openstack/fakes.py:L137–L144` |
| `stub_out_compute_api_backup` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/fakes.py:L149–L163` |
| `stub_out_compute_api_backup.__init__` | method | (self, test) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/fakes.py:L151–L153` |
| `stub_out_compute_api_backup.backup` | method | (self, context, instance, name, backup_type, rotation, extra_properties=None) | public | `{ 'id': uuids.backup_id, 'status': 'ACTIVE', 'name': name, 'properties': props, }` (src/nova/tests/unit/api/openstack/fakes.py:L160) | 2/9 | `src/nova/tests/unit/api/openstack/fakes.py:L155–L163` |
| `stub_out_nw_api` | function | (test, cls=None, private=None, publics=None) | exported | not declared | 4/14 | `src/nova/tests/unit/api/openstack/fakes.py:L166–L193` |
| `stub_out_nw_api.Fake` | class | — | public | not declared | — | `src/nova/tests/unit/api/openstack/fakes.py:L172–L188` |
| `stub_out_nw_api.Fake.__init__` | method | (self) | public | not declared | — | `src/nova/tests/unit/api/openstack/fakes.py:L173–L174` |
| `stub_out_nw_api.Fake.get_instance_nw_info` | method | (*args, **kwargs) | public | not declared | — | `src/nova/tests/unit/api/openstack/fakes.py:L176–L177` |
| `stub_out_nw_api.Fake.get_floating_ips_by_fixed_address` | method | (*args, **kwargs) | public | `publics` (src/nova/tests/unit/api/openstack/fakes.py:L180) | — | `src/nova/tests/unit/api/openstack/fakes.py:L179–L180` |
| `stub_out_nw_api.Fake.validate_networks` | method | (self, context, networks, max_count) | public | `max_count` (src/nova/tests/unit/api/openstack/fakes.py:L183) | — | `src/nova/tests/unit/api/openstack/fakes.py:L182–L183` |
| `stub_out_nw_api.Fake.create_resource_requests` | method | (self, context, requested_networks, pci_requests=None, affinity_policy=None) | public | `None, [], objects.RequestLevelParams()` (src/nova/tests/unit/api/openstack/fakes.py:L188) | — | `src/nova/tests/unit/api/openstack/fakes.py:L185–L188` |
| `stub_out_secgroup_api` | function | (test, security_groups=None) | exported | not declared | 1/10 | `src/nova/tests/unit/api/openstack/fakes.py:L196–L218` |
| `stub_out_secgroup_api.get_instances_security_groups_bindings` | function | (context, servers, detailed=False) | public | `instances_security_group_bindings` (src/nova/tests/unit/api/openstack/fakes.py:L207) | — | `src/nova/tests/unit/api/openstack/fakes.py:L198–L207` |
| `stub_out_secgroup_api.get_instance_security_groups` | function | (context, instance, detailed=False) | public | `security_groups if security_groups is not None else []` (src/nova/tests/unit/api/openstack/fakes.py:L210) | — | `src/nova/tests/unit/api/openstack/fakes.py:L209–L210` |
| `FakeToken` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/fakes.py:L221–L231` |
| `FakeToken.id_count` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/fakes.py:L222–L222` |
| `FakeToken.__getitem__` | method | (self, key) | public | `getattr(self, key)` (src/nova/tests/unit/api/openstack/fakes.py:L225) | 1/2 | `src/nova/tests/unit/api/openstack/fakes.py:L224–L225` |
| `FakeToken.__init__` | method | (self, **kwargs) | public | not declared | 2/5 | `src/nova/tests/unit/api/openstack/fakes.py:L227–L231` |
| `FakeRequestContext` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/fakes.py:L234–L237` |
| `FakeRequestContext.__init__` | method | (self, *args, **kwargs) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/fakes.py:L235–L237` |
| `HTTPRequest` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/fakes.py:L240–L268` |
| `HTTPRequest.blank` | method | (cls, *args, **kwargs) | public | `out` (src/nova/tests/unit/api/openstack/fakes.py:L260) | 2/18 | `src/nova/tests/unit/api/openstack/fakes.py:L243–L260` |
| `HTTPRequest.member_req` | method | (cls, *args, **kwargs) | public | `cls.blank(*args, roles=['member', 'reader'], **kwargs)` (src/nova/tests/unit/api/openstack/fakes.py:L264) | 1/2 | `src/nova/tests/unit/api/openstack/fakes.py:L263–L264` |
| `HTTPRequest.reader_req` | method | (cls, *args, **kwargs) | public | `cls.blank(*args, roles=['reader'], **kwargs)` (src/nova/tests/unit/api/openstack/fakes.py:L268) | 1/2 | `src/nova/tests/unit/api/openstack/fakes.py:L267–L268` |
| `HTTPRequestV21` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/fakes.py:L271–L272` |
| `TestRouter` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/fakes.py:L275–L281` |
| `TestRouter.__init__` | method | (self, controller, mapper=None) | public | not declared | 2/6 | `src/nova/tests/unit/api/openstack/fakes.py:L276–L281` |
| `FakeAuthDatabase` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/fakes.py:L284–L303` |
| `FakeAuthDatabase.data` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/fakes.py:L285–L285` |
| `FakeAuthDatabase.auth_token_get` | method | (context, token_hash) | public | `FakeAuthDatabase.data.get(token_hash, None)` (src/nova/tests/unit/api/openstack/fakes.py:L289) | 1/2 | `src/nova/tests/unit/api/openstack/fakes.py:L288–L289` |
| `FakeAuthDatabase.auth_token_create` | method | (context, token) | public | `fake_token` (src/nova/tests/unit/api/openstack/fakes.py:L296) | 1/5 | `src/nova/tests/unit/api/openstack/fakes.py:L292–L296` |
| `FakeAuthDatabase.auth_token_destroy` | method | (context, token_id) | public | not declared | 3/5 | `src/nova/tests/unit/api/openstack/fakes.py:L299–L303` |
| `create_info_cache` | function | (nw_cache) | exported | `{ "info_cache": { "network_info": nw_cache, "deleted": False, "created_at": None, "deleted_at": None, "updated_at": None, } }` (src/nova/tests/unit/api/openstack/fakes.py:L328) | 5/26 | `src/nova/tests/unit/api/openstack/fakes.py:L306–L336` |
| `create_info_cache._ip` | function | (ip) | private | `{'address': ip, 'type': 'fixed'}` (src/nova/tests/unit/api/openstack/fakes.py:L312) | — | `src/nova/tests/unit/api/openstack/fakes.py:L311–L312` |
| `get_fake_uuid` | function | (token=0) | exported | `FAKE_UUIDS[token]` (src/nova/tests/unit/api/openstack/fakes.py:L342) | 2/4 | `src/nova/tests/unit/api/openstack/fakes.py:L339–L342` |
| `fake_instance_get` | function | (**kwargs) | exported | `_return_server` (src/nova/tests/unit/api/openstack/fakes.py:L350) | 1/3 | `src/nova/tests/unit/api/openstack/fakes.py:L345–L350` |
| `fake_instance_get._return_server` | function | (context, uuid, columns_to_join=None, use_slave=False) | private | `stub_instance(1, **kwargs)` (src/nova/tests/unit/api/openstack/fakes.py:L349) | — | `src/nova/tests/unit/api/openstack/fakes.py:L346–L349` |
| `fake_compute_get` | function | (**kwargs) | exported | `_return_server_obj` (src/nova/tests/unit/api/openstack/fakes.py:L356) | 1/3 | `src/nova/tests/unit/api/openstack/fakes.py:L353–L356` |
| `fake_compute_get._return_server_obj` | function | (context, *a, **kw) | private | `stub_instance_obj(context, **kwargs)` (src/nova/tests/unit/api/openstack/fakes.py:L355) | — | `src/nova/tests/unit/api/openstack/fakes.py:L354–L355` |
| `fake_actions_to_locked_server` | function | (self, context, instance, *args, **kwargs) | exported | not declared | 1/2 | `src/nova/tests/unit/api/openstack/fakes.py:L359–L360` |
| `fake_instance_get_all_by_filters` | function | (num_servers=5, **kwargs) | exported | `_return_servers` (src/nova/tests/unit/api/openstack/fakes.py:L402) | 1/3 | `src/nova/tests/unit/api/openstack/fakes.py:L363–L402` |
| `fake_instance_get_all_by_filters._return_servers` | function | (context, *args, **kwargs) | private | `servers_list` (src/nova/tests/unit/api/openstack/fakes.py:L401) | — | `src/nova/tests/unit/api/openstack/fakes.py:L364–L401` |
| `fake_compute_get_all` | function | (num_servers=5, **kwargs) | exported | `_return_servers_objs` (src/nova/tests/unit/api/openstack/fakes.py:L417) | 1/3 | `src/nova/tests/unit/api/openstack/fakes.py:L405–L417` |
| `fake_compute_get_all._return_servers_objs` | function | (context, search_opts=None, limit=None, marker=None, expected_attrs=None, sort_keys=None, sort_dirs=None, cell_down_support=False, all_tenants=False) | private | `base.obj_make_list(context, objects.InstanceList(), db_insts, expected_attrs=expected)` (src/nova/tests/unit/api/openstack/fakes.py:L415) | — | `src/nova/tests/unit/api/openstack/fakes.py:L406–L416` |
| `stub_instance` | function | (id=1, user_id=None, project_id=None, host=None, node=None, vm_state=None, task_state=None, reservation_id="", uuid=FAKE_UUID, image_ref=FAKE_UUID, flavor_id="1", name=None, key_name='', access_ipv4=None, access_ipv6=None, progress=0, auto_disk_config=False, display_name=None, display_description=None, include_fake_metadata=True, config_drive=None, power_state=None, nw_cache=None, metadata=None, security_groups=None, root_device_name=None, limit=None, marker=None, launched_at=timeutils.utcnow(), terminated_at=timeutils.utcnow(), availability_zone='', locked_by=None, cleaned=False, memory_mb=0, vcpus=0, root_gb=0, ephemeral_gb=0, flavor=None, launch_index=0, kernel_id="", ramdisk_id="", user_data=None, system_metadata=None, services=None, trusted_certs=None, hidden=False, compute_id=None) | exported | `instance` (src/nova/tests/unit/api/openstack/fakes.py:L558) | 1/19 | `src/nova/tests/unit/api/openstack/fakes.py:L420–L558` |
| `stub_instance_obj` | function | (ctxt, *args, **kwargs) | exported | `inst` (src/nova/tests/unit/api/openstack/fakes.py:L573) | 2/11 | `src/nova/tests/unit/api/openstack/fakes.py:L561–L573` |
| `stub_volume` | function | (id, **kwargs) | exported | `volume` (src/nova/tests/unit/api/openstack/fakes.py:L605) | 1/29 | `src/nova/tests/unit/api/openstack/fakes.py:L576–L605` |
| `stub_volume_create` | function | (self, context, size, name, description, snapshot, **param) | exported | `vol` (src/nova/tests/unit/api/openstack/fakes.py:L619) | 2/12 | `src/nova/tests/unit/api/openstack/fakes.py:L608–L619` |
| `stub_volume_delete` | function | (self, context, id) | exported | not declared | 1/2 | `src/nova/tests/unit/api/openstack/fakes.py:L622–L623` |
| `stub_volume_update` | function | (self, context, *args, **param) | exported | not declared | 1/2 | `src/nova/tests/unit/api/openstack/fakes.py:L626–L627` |
| `stub_volume_get` | function | (self, context, volume_id) | exported | `stub_volume(volume_id)` (src/nova/tests/unit/api/openstack/fakes.py:L631) | 1/2 | `src/nova/tests/unit/api/openstack/fakes.py:L630–L631` |
| `stub_volume_get_all` | function | (context, search_opts=None) | exported | `[ stub_volume( uuids.volume_a, project_id='ccbab0871dac4d598a4142f0583d94b2'), ]` (src/nova/tests/unit/api/openstack/fakes.py:L635) | 1/5 | `src/nova/tests/unit/api/openstack/fakes.py:L634–L638` |
| `stub_volume_check_attach` | function | (self, context, *args, **param) | exported | not declared | 1/2 | `src/nova/tests/unit/api/openstack/fakes.py:L641–L642` |
| `stub_snapshot` | function | (id, **kwargs) | exported | `snapshot` (src/nova/tests/unit/api/openstack/fakes.py:L664) | 2/16 | `src/nova/tests/unit/api/openstack/fakes.py:L645–L664` |
| `stub_snapshot_create` | function | (self, context, volume_id, name, description) | exported | `stub_snapshot( uuids.snapshot, volume_id=volume_id, display_name=name, display_description=description)` (src/nova/tests/unit/api/openstack/fakes.py:L668) | 1/4 | `src/nova/tests/unit/api/openstack/fakes.py:L667–L670` |
| `stub_compute_volume_snapshot_create` | function | (self, context, volume_id, create_info) | exported | `{'snapshot': {'id': "421752a6-acf6-4b2d-bc7a-119f9148cd8c", 'volumeId': volume_id}}` (src/nova/tests/unit/api/openstack/fakes.py:L674) | 1/3 | `src/nova/tests/unit/api/openstack/fakes.py:L673–L675` |
| `stub_snapshot_delete` | function | (self, context, id) | exported | not declared | 1/2 | `src/nova/tests/unit/api/openstack/fakes.py:L678–L680` |
| `stub_compute_volume_snapshot_delete` | function | (self, context, volume_id, snapshot_id, delete_info) | exported | not declared | 1/3 | `src/nova/tests/unit/api/openstack/fakes.py:L683–L685` |
| `stub_snapshot_get` | function | (self, context, id) | exported | `stub_snapshot(id)` (src/nova/tests/unit/api/openstack/fakes.py:L689) | 1/2 | `src/nova/tests/unit/api/openstack/fakes.py:L688–L689` |
| `stub_snapshot_get_all` | function | (self, context) | exported | `[stub_snapshot(uuids.snapshot_a, project_id='fake'), stub_snapshot(uuids.snapshot_b, project_id='superfake'), stub_snapshot(uuids.snapshot_c, project_id='superduperfake')]` (src/nova/tests/unit/api/openstack/fakes.py:L693) | 1/4 | `src/nova/tests/unit/api/openstack/fakes.py:L692–L695` |
| `stub_bdm_get_all_by_instance_uuids` | function | (context, instance_uuids, use_slave=False) | exported | `result` (src/nova/tests/unit/api/openstack/fakes.py:L712) | 3/15 | `src/nova/tests/unit/api/openstack/fakes.py:L698–L712` |
| `fake_not_implemented` | function | (*args, **kwargs) | exported | not declared | 1/2 | `src/nova/tests/unit/api/openstack/fakes.py:L715–L716` |
| `FLAVORS` | constant | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/fakes.py:L719–L752` |
| `stub_out_flavor_get_by_flavor_id` | function | (test) | exported | not declared | 1/5 | `src/nova/tests/unit/api/openstack/fakes.py:L755–L761` |
| `stub_out_flavor_get_by_flavor_id.fake_get_by_flavor_id` | function | (cls, context, flavor_id, read_deleted=None) | public | `FLAVORS[flavor_id]` (src/nova/tests/unit/api/openstack/fakes.py:L758) | — | `src/nova/tests/unit/api/openstack/fakes.py:L757–L758` |
| `stub_out_flavor_get_all` | function | (test) | exported | not declared | 1/4 | `src/nova/tests/unit/api/openstack/fakes.py:L764–L804` |
| `stub_out_flavor_get_all.fake_get_all` | function | (context, inactive=False, filters=None, sort_key='flavorid', sort_dir='asc', limit=None, marker=None) | public | `objects.FlavorList(objects=output)` (src/nova/tests/unit/api/openstack/fakes.py:L802) | — | `src/nova/tests/unit/api/openstack/fakes.py:L766–L802` |
| `stub_out_flavor_get_all.fake_get_all.reject_min` | function | (db_attr, filter_attr) | public | `(filter_attr in filters and getattr(flavor, db_attr) < int(filters[filter_attr]))` (src/nova/tests/unit/api/openstack/fakes.py:L773) | — | `src/nova/tests/unit/api/openstack/fakes.py:L772–L774` |
| `HTTPRequest.blank` | classmethod | — | public | not declared | — | `src/nova/tests/unit/api/openstack/fakes.py:L242–L260` |
| `HTTPRequest.member_req` | classmethod | — | public | not declared | — | `src/nova/tests/unit/api/openstack/fakes.py:L262–L264` |
| `HTTPRequest.reader_req` | classmethod | — | public | not declared | — | `src/nova/tests/unit/api/openstack/fakes.py:L266–L268` |
| `FakeAuthDatabase.auth_token_get` | staticmethod | — | public | not declared | — | `src/nova/tests/unit/api/openstack/fakes.py:L287–L289` |
| `FakeAuthDatabase.auth_token_create` | staticmethod | — | public | not declared | — | `src/nova/tests/unit/api/openstack/fakes.py:L291–L296` |
| `FakeAuthDatabase.auth_token_destroy` | staticmethod | — | public | not declared | — | `src/nova/tests/unit/api/openstack/fakes.py:L298–L303` |

## Dependencies

- `import datetime` (src/nova/tests/unit/api/openstack/fakes.py:L16)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/api/openstack/fakes.py:L18)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/api/openstack/fakes.py:L19)
- `oslo_utils`: imports `timeutils` (src/nova/tests/unit/api/openstack/fakes.py:L20)
- `oslo_utils`: imports `uuidutils` (src/nova/tests/unit/api/openstack/fakes.py:L21)
- `import routes` (src/nova/tests/unit/api/openstack/fakes.py:L22)
- `import webob.dec` (src/nova/tests/unit/api/openstack/fakes.py:L23)
- `nova.api`: imports `auth as api_auth` (src/nova/tests/unit/api/openstack/fakes.py:L25)
- `nova.api`: imports `openstack as openstack_api` (src/nova/tests/unit/api/openstack/fakes.py:L26)
- `nova.api.openstack`: imports `api_version_request as api_version` (src/nova/tests/unit/api/openstack/fakes.py:L27)
- `nova.api.openstack`: imports `compute` (src/nova/tests/unit/api/openstack/fakes.py:L28)
- `nova.api.openstack.compute`: imports `versions` (src/nova/tests/unit/api/openstack/fakes.py:L29)
- `nova.api.openstack`: imports `urlmap` (src/nova/tests/unit/api/openstack/fakes.py:L30)
- `nova.api.openstack`: imports `wsgi as os_wsgi` (src/nova/tests/unit/api/openstack/fakes.py:L31)
- `nova.api`: imports `wsgi` (src/nova/tests/unit/api/openstack/fakes.py:L32)
- `nova.compute`: imports `flavors` (src/nova/tests/unit/api/openstack/fakes.py:L33)
- `nova.compute`: imports `vm_states` (src/nova/tests/unit/api/openstack/fakes.py:L34)
- `import nova.conf` (src/nova/tests/unit/api/openstack/fakes.py:L35)
- `nova`: imports `context` (src/nova/tests/unit/api/openstack/fakes.py:L36)
- `nova.db.main`: imports `models` (src/nova/tests/unit/api/openstack/fakes.py:L37)
- `nova`: imports `exception as exc` (src/nova/tests/unit/api/openstack/fakes.py:L38)
- `nova`: imports `objects` (src/nova/tests/unit/api/openstack/fakes.py:L39)
- `nova.objects`: imports `base` (src/nova/tests/unit/api/openstack/fakes.py:L40)
- `nova`: imports `quota` (src/nova/tests/unit/api/openstack/fakes.py:L41)
- `nova.tests.unit`: imports `fake_block_device` (src/nova/tests/unit/api/openstack/fakes.py:L42)
- `nova.tests.unit.objects`: imports `test_keypair` (src/nova/tests/unit/api/openstack/fakes.py:L43)
- `nova`: imports `utils` (src/nova/tests/unit/api/openstack/fakes.py:L44)

## Side Effects

- **network**: from nova.api.openstack.compute import versions (src/nova/tests/unit/api/openstack/fakes.py:L29)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/tests/unit/api/openstack/fakes.py:L46)
- **global-mutation**: QUOTAS = quota.QUOTAS (src/nova/tests/unit/api/openstack/fakes.py:L47)
- **global-mutation**: FAKE_UUID = 'aaaaaaaa-aaaa-aaaa-aaaa-aaaaaaaaaaaa' (src/nova/tests/unit/api/openstack/fakes.py:L49)
- **global-mutation**: FAKE_PROJECT_ID = '6a6a9c9eee154e9cb8cec487b98d36ab' (src/nova/tests/unit/api/openstack/fakes.py:L50)
- **global-mutation**: FAKE_USER_ID = '5fae60f5cf4642609ddd31f71748beac' (src/nova/tests/unit/api/openstack/fakes.py:L51)
- **global-mutation**: FAKE_UUIDS = {} (src/nova/tests/unit/api/openstack/fakes.py:L52)
- **global-mutation**: FLAVORS = { (src/nova/tests/unit/api/openstack/fakes.py:L719)

## Security Surface

- **sink** (`db-write`): props.update(extra_properties or {}) (src/nova/tests/unit/api/openstack/fakes.py:L159)
- **entry-point** (`http-param`): class HTTPRequest(os_wsgi.Request): (src/nova/tests/unit/api/openstack/fakes.py:L240)
- **sink** (`db-write`): defaults.update(kwargs) (src/nova/tests/unit/api/openstack/fakes.py:L252)
- **sink** (`db-write`): sys_meta.update(system_metadata or {}) (src/nova/tests/unit/api/openstack/fakes.py:L455)
- **sink** (`db-write`): instance.update(info_cache) (src/nova/tests/unit/api/openstack/fakes.py:L555)
- **sink** (`db-write`): volume.update(kwargs) (src/nova/tests/unit/api/openstack/fakes.py:L604)
- **sink** (`db-write`): snapshot.update(kwargs) (src/nova/tests/unit/api/openstack/fakes.py:L663)

