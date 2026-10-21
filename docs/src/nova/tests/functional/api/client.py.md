# src/nova/tests/functional/api/client.py

## Overview

This file implements the `client` module, defining 6 classs, 1 constant, 4 fields, 86 methods, 4 imports, 1 side effect, 4 security surface entries.

Lines: total 582, code 421, comment 36, blank 125

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/tests/functional/api/client.py:L22–L22` |
| `APIResponse` | class | — | exported | not declared | — | `src/nova/tests/functional/api/client.py:L25–L76` |
| `APIResponse.status` | field | — | public | not declared | — | `src/nova/tests/functional/api/client.py:L42–L42` |
| `APIResponse.content` | field | — | public | not declared | — | `src/nova/tests/functional/api/client.py:L44–L44` |
| `APIResponse.body` | field | — | public | not declared | — | `src/nova/tests/functional/api/client.py:L46–L46` |
| `APIResponse.headers` | field | — | public | not declared | — | `src/nova/tests/functional/api/client.py:L48–L48` |
| `APIResponse.__init__` | method | (self, response) | public | not declared | 4/14 | `src/nova/tests/functional/api/client.py:L51–L71` |
| `APIResponse.__str__` | method | (self) | public | `"<Response body:%r, status_code:%s>" % (self.body, self.status)` (src/nova/tests/functional/api/client.py:L76) | 1/2 | `src/nova/tests/functional/api/client.py:L73–L76` |
| `OpenStackApiException` | class | — | exported | not declared | — | `src/nova/tests/functional/api/client.py:L79–L94` |
| `OpenStackApiException.__init__` | method | (self, message=None, response=None) | public | not declared | 3/12 | `src/nova/tests/functional/api/client.py:L80–L94` |
| `OpenStackApiAuthenticationException` | class | — | exported | not declared | — | `src/nova/tests/functional/api/client.py:L97–L102` |
| `OpenStackApiAuthenticationException.__init__` | method | (self, response=None, message=None) | public | not declared | 2/5 | `src/nova/tests/functional/api/client.py:L98–L102` |
| `OpenStackApiAuthorizationException` | class | — | exported | not declared | — | `src/nova/tests/functional/api/client.py:L105–L110` |
| `OpenStackApiAuthorizationException.__init__` | method | (self, response=None, message=None) | public | not declared | 2/5 | `src/nova/tests/functional/api/client.py:L106–L110` |
| `OpenStackApiNotFoundException` | class | — | exported | not declared | — | `src/nova/tests/functional/api/client.py:L113–L117` |
| `OpenStackApiNotFoundException.__init__` | method | (self, response=None, message=None) | public | not declared | 2/4 | `src/nova/tests/functional/api/client.py:L114–L117` |
| `TestOpenStackClient` | class | — | exported | not declared | — | `src/nova/tests/functional/api/client.py:L120–L582` |
| `TestOpenStackClient.__init__` | method | (self, auth_user, base_url, project_id=None, roles=None) | public | not declared | 3/10 | `src/nova/tests/functional/api/client.py:L131–L140` |
| `TestOpenStackClient.request` | method | (self, url, method='GET', body=None, headers=None) | public | `response` (src/nova/tests/functional/api/client.py:L147) | 2/5 | `src/nova/tests/functional/api/client.py:L142–L147` |
| `TestOpenStackClient.api_request` | method | (self, relative_uri, check_response_status=None, strip_version=False, **kwargs) | public | `response` (src/nova/tests/functional/api/client.py:L195) | 10/36 | `src/nova/tests/functional/api/client.py:L149–L195` |
| `TestOpenStackClient._decode_json` | method | (self, response) | private | `resp` (src/nova/tests/functional/api/client.py:L201) | 2/5 | `src/nova/tests/functional/api/client.py:L197–L201` |
| `TestOpenStackClient.api_get` | method | (self, relative_uri, **kwargs) | public | `APIResponse(self.api_request(relative_uri, **kwargs))` (src/nova/tests/functional/api/client.py:L205) | 1/3 | `src/nova/tests/functional/api/client.py:L203–L205` |
| `TestOpenStackClient.api_post` | method | (self, relative_uri, body, **kwargs) | public | `APIResponse(self.api_request(relative_uri, **kwargs))` (src/nova/tests/functional/api/client.py:L215) | 2/8 | `src/nova/tests/functional/api/client.py:L207–L215` |
| `TestOpenStackClient.api_put` | method | (self, relative_uri, body, **kwargs) | public | `APIResponse(self.api_request(relative_uri, **kwargs))` (src/nova/tests/functional/api/client.py:L225) | 2/8 | `src/nova/tests/functional/api/client.py:L217–L225` |
| `TestOpenStackClient.api_delete` | method | (self, relative_uri, **kwargs) | public | `APIResponse(self.api_request(relative_uri, **kwargs))` (src/nova/tests/functional/api/client.py:L230) | 1/4 | `src/nova/tests/functional/api/client.py:L227–L230` |
| `TestOpenStackClient.get_server` | method | (self, server_id) | public | `self.api_get('/servers/%s' % server_id).body['server']` (src/nova/tests/functional/api/client.py:L248) | 1/2 | `src/nova/tests/functional/api/client.py:L247–L248` |
| `TestOpenStackClient.get_servers` | method | (self, detail=True, search_opts=None) | public | `self.api_get(rel_url).body['servers']` (src/nova/tests/functional/api/client.py:L260) | 5/10 | `src/nova/tests/functional/api/client.py:L250–L260` |
| `TestOpenStackClient.post_server` | method | (self, server) | public | `response` (src/nova/tests/functional/api/client.py:L265); `response['server']` (src/nova/tests/functional/api/client.py:L267) | 2/6 | `src/nova/tests/functional/api/client.py:L262–L267` |
| `TestOpenStackClient.put_server` | method | (self, server_id, server) | public | `self.api_put('/servers/%s' % server_id, server).body` (src/nova/tests/functional/api/client.py:L270) | 1/2 | `src/nova/tests/functional/api/client.py:L269–L270` |
| `TestOpenStackClient.post_server_action` | method | (self, server_id, data, **kwargs) | public | `self.api_post( '/servers/%s/action' % server_id, data, **kwargs).body` (src/nova/tests/functional/api/client.py:L273) | 1/3 | `src/nova/tests/functional/api/client.py:L272–L274` |
| `TestOpenStackClient.delete_server` | method | (self, server_id) | public | `self.api_delete('/servers/%s' % server_id)` (src/nova/tests/functional/api/client.py:L277) | 1/2 | `src/nova/tests/functional/api/client.py:L276–L277` |
| `TestOpenStackClient.force_down_service` | method | (self, host, binary, forced_down) | public | `self.api_put('/os-services/force-down', req).body['service']` (src/nova/tests/functional/api/client.py:L285) | 1/7 | `src/nova/tests/functional/api/client.py:L279–L285` |
| `TestOpenStackClient.get_image` | method | (self, image_id) | public | `self.api_get('/images/%s' % image_id).body['image']` (src/nova/tests/functional/api/client.py:L288) | 1/2 | `src/nova/tests/functional/api/client.py:L287–L288` |
| `TestOpenStackClient.get_images` | method | (self, detail=True) | public | `self.api_get(rel_url).body['images']` (src/nova/tests/functional/api/client.py:L292) | 2/3 | `src/nova/tests/functional/api/client.py:L290–L292` |
| `TestOpenStackClient.post_image` | method | (self, image) | public | `self.api_post('/images', image).body['image']` (src/nova/tests/functional/api/client.py:L295) | 1/2 | `src/nova/tests/functional/api/client.py:L294–L295` |
| `TestOpenStackClient.delete_image` | method | (self, image_id) | public | `self.api_delete('/images/%s' % image_id)` (src/nova/tests/functional/api/client.py:L298) | 1/2 | `src/nova/tests/functional/api/client.py:L297–L298` |
| `TestOpenStackClient.put_image_meta_key` | method | (self, image_id, key, value) | public | `self.api_put('/images/%s/metadata/%s' % (image_id, key), req_body)` (src/nova/tests/functional/api/client.py:L307) | 1/8 | `src/nova/tests/functional/api/client.py:L300–L308` |
| `TestOpenStackClient.get_flavor` | method | (self, flavor_id) | public | `self.api_get('/flavors/%s' % flavor_id).body['flavor']` (src/nova/tests/functional/api/client.py:L311) | 1/2 | `src/nova/tests/functional/api/client.py:L310–L311` |
| `TestOpenStackClient.get_flavors` | method | (self, detail=True) | public | `self.api_get(rel_url).body['flavors']` (src/nova/tests/functional/api/client.py:L315) | 2/3 | `src/nova/tests/functional/api/client.py:L313–L315` |
| `TestOpenStackClient.post_flavor` | method | (self, flavor) | public | `self.api_post('/flavors', flavor).body['flavor']` (src/nova/tests/functional/api/client.py:L318) | 1/2 | `src/nova/tests/functional/api/client.py:L317–L318` |
| `TestOpenStackClient.delete_flavor` | method | (self, flavor_id) | public | `self.api_delete('/flavors/%s' % flavor_id)` (src/nova/tests/functional/api/client.py:L321) | 1/2 | `src/nova/tests/functional/api/client.py:L320–L321` |
| `TestOpenStackClient.get_extra_specs` | method | (self, flavor_id) | public | `self.api_get( '/flavors/%s/os-extra_specs' % flavor_id ).body['extra_specs']` (src/nova/tests/functional/api/client.py:L324) | 1/4 | `src/nova/tests/functional/api/client.py:L323–L326` |
| `TestOpenStackClient.get_extra_spec` | method | (self, flavor_id, spec_id) | public | `self.api_get( '/flavors/%s/os-extra_specs/%s' % (flavor_id, spec_id), ).body` (src/nova/tests/functional/api/client.py:L329) | 1/4 | `src/nova/tests/functional/api/client.py:L328–L331` |
| `TestOpenStackClient.post_extra_spec` | method | (self, flavor_id, body, **_params) | public | `self.api_post(url, body)` (src/nova/tests/functional/api/client.py:L339) | 2/6 | `src/nova/tests/functional/api/client.py:L333–L339` |
| `TestOpenStackClient.put_extra_spec` | method | (self, flavor_id, spec_id, body, **_params) | public | `self.api_put(url, body)` (src/nova/tests/functional/api/client.py:L347) | 2/6 | `src/nova/tests/functional/api/client.py:L341–L347` |
| `TestOpenStackClient.get_volume` | method | (self, volume_id) | public | `self.api_get('/os-volumes/%s' % volume_id).body['volume']` (src/nova/tests/functional/api/client.py:L350) | 1/2 | `src/nova/tests/functional/api/client.py:L349–L350` |
| `TestOpenStackClient.get_volumes` | method | (self, detail=True) | public | `self.api_get(rel_url).body['volumes']` (src/nova/tests/functional/api/client.py:L354) | 2/3 | `src/nova/tests/functional/api/client.py:L352–L354` |
| `TestOpenStackClient.post_volume` | method | (self, volume) | public | `self.api_post('/os-volumes', volume).body['volume']` (src/nova/tests/functional/api/client.py:L357) | 1/2 | `src/nova/tests/functional/api/client.py:L356–L357` |
| `TestOpenStackClient.delete_volume` | method | (self, volume_id) | public | `self.api_delete('/os-volumes/%s' % volume_id)` (src/nova/tests/functional/api/client.py:L360) | 1/2 | `src/nova/tests/functional/api/client.py:L359–L360` |
| `TestOpenStackClient.get_snapshot` | method | (self, snap_id) | public | `self.api_get('/os-snapshots/%s' % snap_id).body['snapshot']` (src/nova/tests/functional/api/client.py:L363) | 1/2 | `src/nova/tests/functional/api/client.py:L362–L363` |
| `TestOpenStackClient.get_snapshots` | method | (self, detail=True) | public | `self.api_get(rel_url).body['snapshots']` (src/nova/tests/functional/api/client.py:L367) | 2/3 | `src/nova/tests/functional/api/client.py:L365–L367` |
| `TestOpenStackClient.post_snapshot` | method | (self, snapshot) | public | `self.api_post('/os-snapshots', snapshot).body['snapshot']` (src/nova/tests/functional/api/client.py:L370) | 1/2 | `src/nova/tests/functional/api/client.py:L369–L370` |
| `TestOpenStackClient.delete_snapshot` | method | (self, snap_id) | public | `self.api_delete('/os-snapshots/%s' % snap_id)` (src/nova/tests/functional/api/client.py:L373) | 1/2 | `src/nova/tests/functional/api/client.py:L372–L373` |
| `TestOpenStackClient.get_server_volume` | method | (self, server_id, volume_id) | public | `self.api_get('/servers/%s/os-volume_attachments/%s' % (server_id, volume_id) ).body['volumeAttachment']` (src/nova/tests/functional/api/client.py:L376) | 1/4 | `src/nova/tests/functional/api/client.py:L375–L378` |
| `TestOpenStackClient.get_server_volumes` | method | (self, server_id) | public | `self.api_get('/servers/%s/os-volume_attachments' % (server_id)).body['volumeAttachments']` (src/nova/tests/functional/api/client.py:L381) | 1/3 | `src/nova/tests/functional/api/client.py:L380–L382` |
| `TestOpenStackClient.post_server_volume` | method | (self, server_id, volume_attachment) | public | `self.api_post('/servers/%s/os-volume_attachments' % (server_id), volume_attachment )` (src/nova/tests/functional/api/client.py:L385) | 1/4 | `src/nova/tests/functional/api/client.py:L384–L387` |
| `TestOpenStackClient.put_server_volume` | method | (self, server_id, original_volume_id, volume_id) | public | `self.api_put('/servers/%s/os-volume_attachments/%s' % (server_id, original_volume_id), {"volumeAttachment": {"volumeId": volume_id}})` (src/nova/tests/functional/api/client.py:L390) | 1/4 | `src/nova/tests/functional/api/client.py:L389–L392` |
| `TestOpenStackClient.delete_server_volume` | method | (self, server_id, volume_id) | public | `self.api_delete('/servers/%s/os-volume_attachments/%s' % (server_id, volume_id))` (src/nova/tests/functional/api/client.py:L395) | 1/3 | `src/nova/tests/functional/api/client.py:L394–L396` |
| `TestOpenStackClient.get_server_shares` | method | (self, server_id) | public | `self.api_get('/servers/%s/shares' % (server_id)).body['share']` (src/nova/tests/functional/api/client.py:L399) | 1/3 | `src/nova/tests/functional/api/client.py:L398–L400` |
| `TestOpenStackClient.get_server_share` | method | (self, server_id, share_id) | public | `self.api_get('/servers/%s/shares/%s' % (server_id, share_id) ).body['share']` (src/nova/tests/functional/api/client.py:L403) | 1/4 | `src/nova/tests/functional/api/client.py:L402–L405` |
| `TestOpenStackClient.post_server_share` | method | (self, server_id, share_attachment) | public | `self.api_post('/servers/%s/shares' % (server_id), share_attachment ).body['share']` (src/nova/tests/functional/api/client.py:L408) | 1/4 | `src/nova/tests/functional/api/client.py:L407–L410` |
| `TestOpenStackClient.delete_server_share` | method | (self, server_id, share_id) | public | `self.api_delete('/servers/%s/shares/%s' % (server_id, share_id))` (src/nova/tests/functional/api/client.py:L413) | 1/3 | `src/nova/tests/functional/api/client.py:L412–L414` |
| `TestOpenStackClient.post_server_metadata` | method | (self, server_id, metadata) | public | `self.api_post('/servers/%s/metadata' % server_id, post_body).body['metadata']` (src/nova/tests/functional/api/client.py:L419) | 1/5 | `src/nova/tests/functional/api/client.py:L416–L420` |
| `TestOpenStackClient.delete_server_metadata` | method | (self, server_id, key) | public | `self.api_delete('/servers/%s/metadata/%s' % (server_id, key))` (src/nova/tests/functional/api/client.py:L423) | 1/3 | `src/nova/tests/functional/api/client.py:L422–L424` |
| `TestOpenStackClient.get_server_groups` | method | (self, all_projects=None) | public | `self.api_get( '/os-server-groups?all_projects').body['server_groups']` (src/nova/tests/functional/api/client.py:L428); `self.api_get('/os-server-groups').body['server_groups']` (src/nova/tests/functional/api/client.py:L431) | 2/6 | `src/nova/tests/functional/api/client.py:L426–L431` |
| `TestOpenStackClient.get_server_group` | method | (self, group_id) | public | `self.api_get('/os-server-groups/%s' % group_id).body['server_group']` (src/nova/tests/functional/api/client.py:L434) | 1/3 | `src/nova/tests/functional/api/client.py:L433–L435` |
| `TestOpenStackClient.post_server_groups` | method | (self, group) | public | `response.body['server_group']` (src/nova/tests/functional/api/client.py:L439) | 1/3 | `src/nova/tests/functional/api/client.py:L437–L439` |
| `TestOpenStackClient.delete_server_group` | method | (self, group_id) | public | not declared | 1/2 | `src/nova/tests/functional/api/client.py:L441–L442` |
| `TestOpenStackClient.create_server_external_events` | method | (self, events) | public | `self.api_post('/os-server-external-events', body).body['events']` (src/nova/tests/functional/api/client.py:L446) | 1/3 | `src/nova/tests/functional/api/client.py:L444–L446` |
| `TestOpenStackClient.get_instance_actions` | method | (self, server_id) | public | `self.api_get('/servers/%s/os-instance-actions' % (server_id)).body['instanceActions']` (src/nova/tests/functional/api/client.py:L449) | 1/3 | `src/nova/tests/functional/api/client.py:L448–L450` |
| `TestOpenStackClient.get_instance_action_details` | method | (self, server_id, request_id) | public | `self.api_get('/servers/%s/os-instance-actions/%s' % (server_id, request_id)).body['instanceAction']` (src/nova/tests/functional/api/client.py:L453) | 1/3 | `src/nova/tests/functional/api/client.py:L452–L454` |
| `TestOpenStackClient.post_aggregate` | method | (self, aggregate) | public | `self.api_post('/os-aggregates', aggregate).body['aggregate']` (src/nova/tests/functional/api/client.py:L457) | 1/2 | `src/nova/tests/functional/api/client.py:L456–L457` |
| `TestOpenStackClient.delete_aggregate` | method | (self, aggregate_id) | public | not declared | 1/2 | `src/nova/tests/functional/api/client.py:L459–L460` |
| `TestOpenStackClient.add_host_to_aggregate` | method | (self, aggregate_id, host) | public | `self.api_post('/os-aggregates/%s/action' % aggregate_id, {'add_host': {'host': host}})` (src/nova/tests/functional/api/client.py:L463) | 1/3 | `src/nova/tests/functional/api/client.py:L462–L464` |
| `TestOpenStackClient.remove_host_from_aggregate` | method | (self, aggregate_id, host) | public | `self.api_post('/os-aggregates/%s/action' % aggregate_id, {'remove_host': {'host': host}})` (src/nova/tests/functional/api/client.py:L467) | 1/3 | `src/nova/tests/functional/api/client.py:L466–L468` |
| `TestOpenStackClient.get_limits` | method | (self) | public | `self.api_get('/limits').body['limits']` (src/nova/tests/functional/api/client.py:L471) | 1/2 | `src/nova/tests/functional/api/client.py:L470–L471` |
| `TestOpenStackClient.get_server_tags` | method | (self, server_id) | public | `self.api_get('/servers/%s/tags' % server_id).body['tags']` (src/nova/tests/functional/api/client.py:L479) | 1/2 | `src/nova/tests/functional/api/client.py:L473–L479` |
| `TestOpenStackClient.put_server_tags` | method | (self, server_id, tags) | public | `self.api_put('/servers/%s/tags' % server_id, {'tags': tags}).body['tags']` (src/nova/tests/functional/api/client.py:L486) | 1/3 | `src/nova/tests/functional/api/client.py:L481–L487` |
| `TestOpenStackClient.get_port_interfaces` | method | (self, server_id) | public | `self.api_get('/servers/%s/os-interface' % (server_id)).body['interfaceAttachments']` (src/nova/tests/functional/api/client.py:L490) | 1/3 | `src/nova/tests/functional/api/client.py:L489–L491` |
| `TestOpenStackClient.attach_interface` | method | (self, server_id, post) | public | `self.api_post('/servers/%s/os-interface' % server_id, post)` (src/nova/tests/functional/api/client.py:L494) | 1/2 | `src/nova/tests/functional/api/client.py:L493–L494` |
| `TestOpenStackClient.detach_interface` | method | (self, server_id, port_id) | public | `self.api_delete('/servers/%s/os-interface/%s' % (server_id, port_id))` (src/nova/tests/functional/api/client.py:L497) | 1/3 | `src/nova/tests/functional/api/client.py:L496–L498` |
| `TestOpenStackClient.get_services` | method | (self, binary=None, host=None) | public | `self.api_get(url).body['services']` (src/nova/tests/functional/api/client.py:L506) | 3/7 | `src/nova/tests/functional/api/client.py:L500–L506` |
| `TestOpenStackClient.put_service` | method | (self, service_id, req) | public | `self.api_put( '/os-services/%s' % service_id, req).body['service']` (src/nova/tests/functional/api/client.py:L509) | 1/3 | `src/nova/tests/functional/api/client.py:L508–L510` |
| `TestOpenStackClient.post_keypair` | method | (self, keypair) | public | `self.api_post('/os-keypairs', keypair).body['keypair']` (src/nova/tests/functional/api/client.py:L513) | 1/2 | `src/nova/tests/functional/api/client.py:L512–L513` |
| `TestOpenStackClient.delete_keypair` | method | (self, keypair_name) | public | not declared | 1/2 | `src/nova/tests/functional/api/client.py:L515–L516` |
| `TestOpenStackClient.post_aggregate_action` | method | (self, aggregate_id, body) | public | `self.api_post( '/os-aggregates/%s/action' % aggregate_id, body).body['aggregate']` (src/nova/tests/functional/api/client.py:L519) | 1/3 | `src/nova/tests/functional/api/client.py:L518–L520` |
| `TestOpenStackClient.get_active_migrations` | method | (self, server_id) | public | `self.api_get('/servers/%s/migrations' % server_id).body['migrations']` (src/nova/tests/functional/api/client.py:L523) | 1/3 | `src/nova/tests/functional/api/client.py:L522–L524` |
| `TestOpenStackClient.get_migrations` | method | (self, user_id=None, project_id=None) | public | `self.api_get(url).body['migrations']` (src/nova/tests/functional/api/client.py:L532) | 3/7 | `src/nova/tests/functional/api/client.py:L526–L532` |
| `TestOpenStackClient.force_complete_migration` | method | (self, server_id, migration_id) | public | `self.api_post( '/servers/%s/migrations/%s/action' % (server_id, migration_id), {'force_complete': None})` (src/nova/tests/functional/api/client.py:L535) | 1/4 | `src/nova/tests/functional/api/client.py:L534–L537` |
| `TestOpenStackClient.delete_migration` | method | (self, server_id, migration_id) | public | `self.api_delete( '/servers/%s/migrations/%s' % (server_id, migration_id))` (src/nova/tests/functional/api/client.py:L540) | 1/3 | `src/nova/tests/functional/api/client.py:L539–L541` |
| `TestOpenStackClient.put_aggregate` | method | (self, aggregate_id, body) | public | `self.api_put( '/os-aggregates/%s' % aggregate_id, body).body['aggregate']` (src/nova/tests/functional/api/client.py:L544) | 1/3 | `src/nova/tests/functional/api/client.py:L543–L545` |
| `TestOpenStackClient.get_hypervisor_stats` | method | (self) | public | `self.api_get( '/os-hypervisors/statistics').body['hypervisor_statistics']` (src/nova/tests/functional/api/client.py:L548) | 1/3 | `src/nova/tests/functional/api/client.py:L547–L549` |
| `TestOpenStackClient.get_service_id` | method | (self, binary_name) | public | `service['id']` (src/nova/tests/functional/api/client.py:L554) | 3/5 | `src/nova/tests/functional/api/client.py:L551–L555` |
| `TestOpenStackClient.put_service_force_down` | method | (self, service_id, forced_down) | public | `self.api_put('os-services/%s' % service_id, req).body['service']` (src/nova/tests/functional/api/client.py:L561) | 1/5 | `src/nova/tests/functional/api/client.py:L557–L561` |
| `TestOpenStackClient.get_server_diagnostics` | method | (self, server_id) | public | `self.api_get('/servers/%s/diagnostics' % server_id).body` (src/nova/tests/functional/api/client.py:L564) | 1/2 | `src/nova/tests/functional/api/client.py:L563–L564` |
| `TestOpenStackClient.get_quota_detail` | method | (self, project_id=None, user_id=None) | public | `self.api_get(url % project_id).body['quota_set']` (src/nova/tests/functional/api/client.py:L572) | 3/7 | `src/nova/tests/functional/api/client.py:L566–L572` |
| `TestOpenStackClient.update_quota` | method | (self, quotas, project_id=None, user_id=None) | public | `self.api_put(url % project_id, body).body['quota_set']` (src/nova/tests/functional/api/client.py:L582) | 3/9 | `src/nova/tests/functional/api/client.py:L574–L582` |

## Dependencies

- `urllib`: imports `parse` (src/nova/tests/functional/api/client.py:L15)
- `oslo_log`: imports `log as logging` (src/nova/tests/functional/api/client.py:L17)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/functional/api/client.py:L18)
- `import requests` (src/nova/tests/functional/api/client.py:L19)

## Side Effects

- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/tests/functional/api/client.py:L22)

## Security Surface

- **sink** (`db-write`): so we can make changes / insert hooks for testing (src/nova/tests/functional/api/client.py:L124)
- **sink** (`db-write`): _headers.update(headers or {}) (src/nova/tests/functional/api/client.py:L144)
- **sink** (`db-write`): post_body['metadata'].update(metadata) (src/nova/tests/functional/api/client.py:L418)
- **sink** (`db-write`): body['quota_set'].update(quotas) (src/nova/tests/functional/api/client.py:L581)

