# src/nova/image/glance.py

## Overview

This file implements the `glance` module, defining 3 classs, 2 constants, 26 functions, 34 methods, 2 staticmethods, 1 variable, 30 imports, 49 side effects, 10 security surface entries.

Lines: total 1248, code 919, comment 132, blank 197

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/image/glance.py:L51–L51` |
| `CONF` | constant | — | exported | not declared | — | `src/nova/image/glance.py:L52–L52` |
| `_session_and_auth` | function | (context) | unexported | `session, auth` (src/nova/image/glance.py:L61) | 1/5 | `src/nova/image/glance.py:L55–L61` |
| `_glanceclient_from_endpoint` | function | (context, endpoint, version) | unexported | `glanceclient.Client(version, session=sess, auth=auth, endpoint_override=endpoint, global_request_id=context.global_id)` (src/nova/image/glance.py:L67) | 1/5 | `src/nova/image/glance.py:L64–L69` |
| `generate_glance_url` | function | (context) | exported | `next(get_api_servers(context))` (src/nova/image/glance.py:L74) | 1/2 | `src/nova/image/glance.py:L72–L74` |
| `_endpoint_from_image_ref` | function | (image_href) | unexported | `(image_id, endpoint)` (src/nova/image/glance.py:L88) | 1/5 | `src/nova/image/glance.py:L77–L88` |
| `get_api_servers` | function | (context) | exported | `itertools.cycle(api_servers)` (src/nova/image/glance.py:L116) | 3/15 | `src/nova/image/glance.py:L91–L116` |
| `GlanceClientWrapper` | class | — | exported | not declared | — | `src/nova/image/glance.py:L119–L195` |
| `GlanceClientWrapper.__init__` | method | (self, context=None, endpoint=None) | public | not declared | 2/9 | `src/nova/image/glance.py:L122–L130` |
| `GlanceClientWrapper._create_static_client` | method | (self, context, endpoint, version) | private | `_glanceclient_from_endpoint(context, endpoint, version)` (src/nova/image/glance.py:L135) | 1/3 | `src/nova/image/glance.py:L132–L135` |
| `GlanceClientWrapper._create_onetime_client` | method | (self, context, version) | private | `_glanceclient_from_endpoint(context, self.api_server, version)` (src/nova/image/glance.py:L142) | 2/5 | `src/nova/image/glance.py:L137–L142` |
| `GlanceClientWrapper.call` | method | (self, context, version, method, controller=None, args=None, kwargs=None) | public | `list(result)` (src/nova/image/glance.py:L179); `result` (src/nova/image/glance.py:L180) | 10/34 | `src/nova/image/glance.py:L144–L195` |
| `GlanceImageServiceV2` | class | — | exported | not declared | — | `src/nova/image/glance.py:L198–L770` |
| `GlanceImageServiceV2.__init__` | method | (self, client=None) | public | not declared | 3/5 | `src/nova/image/glance.py:L201–L209` |
| `GlanceImageServiceV2.rbd_download` | method | (self, context, url_parts, dst_path, metadata=None) | public | not declared | 3/25 | `src/nova/image/glance.py:L211–L251` |
| `GlanceImageServiceV2.show` | method | (self, context, image_id, include_locations=False, show_deleted=True) | public | `image` (src/nova/image/glance.py:L288) | 8/19 | `src/nova/image/glance.py:L253–L288` |
| `GlanceImageServiceV2._get_transfer_method` | method | (self, scheme) | private | `self._download_handlers[scheme]` (src/nova/image/glance.py:L293); `None` (src/nova/image/glance.py:L295) | 2/5 | `src/nova/image/glance.py:L290–L295` |
| `GlanceImageServiceV2.detail` | method | (self, context, **kwargs) | public | `_images` (src/nova/image/glance.py:L310) | 4/11 | `src/nova/image/glance.py:L297–L310` |
| `GlanceImageServiceV2._safe_fsync` | method | (fh) | private | not declared | 3/5 | `src/nova/image/glance.py:L313–L326` |
| `GlanceImageServiceV2._try_special_handlers` | method | (self, context, image_id, dst_path, verifier) | private | `True` (src/nova/image/glance.py:L343); `True` (src/nova/image/glance.py:L353); `False` (src/nova/image/glance.py:L357) | 5/24 | `src/nova/image/glance.py:L328–L357` |
| `GlanceImageServiceV2.download` | method | (self, context, image_id, data=None, dst_path=None, trusted_certs=None) | public | `` (src/nova/image/glance.py:L370); `self._verify_and_write(context, image_id, verifier, image_chunks, data, dst_path)` (src/nova/image/glance.py:L386) | 6/17 | `src/nova/image/glance.py:L359–L387` |
| `GlanceImageServiceV2._verify_and_write` | method | (self, context, image_id, verifier, image_chunks, data, dst_path) | private | `image_chunks` (src/nova/image/glance.py:L423); `image_chunks` (src/nova/image/glance.py:L460) | 17/42 | `src/nova/image/glance.py:L389–L460` |
| `GlanceImageServiceV2._get_verifier` | method | (self, context, image_id, trusted_certs) | private | `verifier` (src/nova/image/glance.py:L520) | 9/46 | `src/nova/image/glance.py:L462–L520` |
| `GlanceImageServiceV2.create` | method | (self, context, image_meta, data=None) | public | `_translate_from_glance(image)` (src/nova/image/glance.py:L546) | 3/12 | `src/nova/image/glance.py:L522–L546` |
| `GlanceImageServiceV2._add_location` | method | (self, context, image_id, location) | private | `self._client.call( context, 2, method, args=(image_id, location, {}))` (src/nova/image/glance.py:L554) | 4/14 | `src/nova/image/glance.py:L548–L562` |
| `GlanceImageServiceV2._add_image_member` | method | (self, context, image_id, member_id) | private | `self._client.call( context, 2, 'create', controller='image_members', args=(image_id, member_id))` (src/nova/image/glance.py:L575) | 2/7 | `src/nova/image/glance.py:L564–L579` |
| `GlanceImageServiceV2._upload_data` | method | (self, context, image_id, data) | private | `self._client.call(context, 2, 'get', args=(image_id,))` (src/nova/image/glance.py:L587) | 1/4 | `src/nova/image/glance.py:L581–L587` |
| `GlanceImageServiceV2._get_image_create_disk_format_default` | method | (self, context) | private | `preferred_format` (src/nova/image/glance.py:L619); `supported_disk_formats[0]` (src/nova/image/glance.py:L624); `preferred_disk_formats[0]` (src/nova/image/glance.py:L630) | 6/27 | `src/nova/image/glance.py:L589–L630` |
| `GlanceImageServiceV2._create_v2` | method | (self, context, sent_service_image_meta, data=None, force_activate=False, sharing_member_id=None) | private | `image` (src/nova/image/glance.py:L673) | 8/25 | `src/nova/image/glance.py:L632–L673` |
| `GlanceImageServiceV2.update` | method | (self, context, image_id, image_meta, data=None, purge_props=True) | public | `_translate_from_glance(image)` (src/nova/image/glance.py:L699) | 3/17 | `src/nova/image/glance.py:L675–L699` |
| `GlanceImageServiceV2._update_v2` | method | (self, context, sent_service_image_meta, data=None) | private | `image` (src/nova/image/glance.py:L716) | 3/10 | `src/nova/image/glance.py:L701–L716` |
| `GlanceImageServiceV2.delete` | method | (self, context, image_id) | public | `True` (src/nova/image/glance.py:L735) | 4/10 | `src/nova/image/glance.py:L718–L735` |
| `GlanceImageServiceV2.image_import_copy` | method | (self, context, image_id, stores) | public | not declared | 5/15 | `src/nova/image/glance.py:L737–L770` |
| `_extract_query_params_v2` | function | (params) | unexported | `_params` (src/nova/image/glance.py:L811) | 9/27 | `src/nova/image/glance.py:L773–L811` |
| `_is_image_available` | function | (context, image) | unexported | `True` (src/nova/image/glance.py:L823); `True` (src/nova/image/glance.py:L837); `str(properties['owner_id']) == str(context.project_id)` (src/nova/image/glance.py:L842); `str(properties['project_id']) == str(context.project_id)` (src/nova/image/glance.py:L845); `False` (src/nova/image/glance.py:L850); `str(user_id) == str(context.user_id)` (src/nova/image/glance.py:L852) | 10/16 | `src/nova/image/glance.py:L814–L852` |
| `_is_image_available._is_image_public` | function | (image) | private | `str(image.visibility).lower() == 'public'` (src/nova/image/glance.py:L832); `image.is_public` (src/nova/image/glance.py:L834) | — | `src/nova/image/glance.py:L825–L834` |
| `_translate_to_glance` | function | (image_meta) | unexported | `image_meta` (src/nova/image/glance.py:L859) | 1/5 | `src/nova/image/glance.py:L855–L859` |
| `_convert_to_v2` | function | (image_meta) | unexported | `output` (src/nova/image/glance.py:L890) | 13/22 | `src/nova/image/glance.py:L862–L890` |
| `_translate_from_glance` | function | (image, include_locations=False) | unexported | `image_meta` (src/nova/image/glance.py:L899) | 1/6 | `src/nova/image/glance.py:L893–L899` |
| `_convert_timestamps_to_datetimes` | function | (image_meta) | unexported | `image_meta` (src/nova/image/glance.py:L907) | 3/5 | `src/nova/image/glance.py:L902–L907` |
| `_json_loads` | function | (properties, attr) | unexported | not declared | 2/4 | `src/nova/image/glance.py:L911–L914` |
| `_json_dumps` | function | (properties, attr) | unexported | not declared | 2/4 | `src/nova/image/glance.py:L917–L920` |
| `_CONVERT_PROPS` | variable | — | unexported | not declared | — | `src/nova/image/glance.py:L923–L923` |
| `_convert` | function | (method, metadata) | unexported | `metadata` (src/nova/image/glance.py:L934) | 4/8 | `src/nova/image/glance.py:L926–L934` |
| `_convert_from_string` | function | (metadata) | unexported | `_convert(_json_loads, metadata)` (src/nova/image/glance.py:L938) | 1/2 | `src/nova/image/glance.py:L937–L938` |
| `_convert_to_string` | function | (metadata) | unexported | `_convert(_json_dumps, metadata)` (src/nova/image/glance.py:L942) | 1/2 | `src/nova/image/glance.py:L941–L942` |
| `_extract_attributes_v2` | function | (image, include_locations=False) | unexported | `output` (src/nova/image/glance.py:L967) | 9/22 | `src/nova/image/glance.py:L945–L967` |
| `_remove_read_only` | function | (image_meta) | unexported | `output` (src/nova/image/glance.py:L976) | 3/7 | `src/nova/image/glance.py:L970–L976` |
| `_reraise_translated_image_exception` | function | (image_id) | unexported | not declared | 1/4 | `src/nova/image/glance.py:L979–L983` |
| `_reraise_translated_exception` | function | — | unexported | not declared | 1/4 | `src/nova/image/glance.py:L986–L990` |
| `_translate_image_exception` | function | (image_id, exc_value) | unexported | `exception.ImageNotAuthorized(image_id=image_id)` (src/nova/image/glance.py:L996); `exception.ImageNotFound(image_id=image_id)` (src/nova/image/glance.py:L998); `exception.ImageBadRequest(image_id=image_id, response=str(exc_value))` (src/nova/image/glance.py:L1000); `exception.ImageQuotaExceeded(image_id=image_id)` (src/nova/image/glance.py:L1003); `exc_value` (src/nova/image/glance.py:L1004) | 5/12 | `src/nova/image/glance.py:L993–L1004` |
| `_translate_plain_exception` | function | (exc_value) | unexported | `exception.Forbidden(str(exc_value))` (src/nova/image/glance.py:L1010); `exception.NotFound(str(exc_value))` (src/nova/image/glance.py:L1012); `exception.Invalid(str(exc_value))` (src/nova/image/glance.py:L1014); `exc_value` (src/nova/image/glance.py:L1015) | 4/9 | `src/nova/image/glance.py:L1007–L1015` |
| `_verify_certs` | function | (context, img_sig_cert_uuid, trusted_certs) | unexported | not declared | 2/15 | `src/nova/image/glance.py:L1018–L1032` |
| `get_remote_image_service` | function | (context, image_href) | exported | `image_service, image_href` (src/nova/image/glance.py:L1051); `image_service, image_id` (src/nova/image/glance.py:L1061) | 3/12 | `src/nova/image/glance.py:L1035–L1061` |
| `get_default_image_service` | function | — | exported | `GlanceImageServiceV2()` (src/nova/image/glance.py:L1065) | 1/2 | `src/nova/image/glance.py:L1064–L1065` |
| `API` | class | — | exported | not declared | — | `src/nova/image/glance.py:L1069–L1248` |
| `API._get_session_and_image_id` | method | (self, context, id_or_uri) | private | `get_remote_image_service(context, id_or_uri)` (src/nova/image/glance.py:L1084) | 1/2 | `src/nova/image/glance.py:L1072–L1084` |
| `API._get_session` | method | (self, _context) | private | `get_default_image_service()` (src/nova/image/glance.py:L1097) | 1/2 | `src/nova/image/glance.py:L1086–L1097` |
| `API.generate_image_url` | method | (image_ref, context) | public | `"%s/images/%s" % (next(get_api_servers(context)), image_ref)` (src/nova/image/glance.py:L1106) | 1/2 | `src/nova/image/glance.py:L1100–L1106` |
| `API.get_all` | method | (self, context, **kwargs) | public | `session.detail(context, **kwargs)` (src/nova/image/glance.py:L1120) | 1/3 | `src/nova/image/glance.py:L1108–L1120` |
| `API.get` | method | (self, context, id_or_uri, include_locations=False, show_deleted=True) | public | `session.show(context, image_id, include_locations=include_locations, show_deleted=show_deleted)` (src/nova/image/glance.py:L1143) | 1/6 | `src/nova/image/glance.py:L1122–L1145` |
| `API.create` | method | (self, context, image_info, data=None) | public | `session.create(context, image_info, data=data)` (src/nova/image/glance.py:L1158) | 1/3 | `src/nova/image/glance.py:L1147–L1158` |
| `API.update` | method | (self, context, id_or_uri, image_info, data=None, purge_props=False) | public | `session.update(context, image_id, image_info, data=data, purge_props=purge_props)` (src/nova/image/glance.py:L1181) | 1/5 | `src/nova/image/glance.py:L1160–L1182` |
| `API.delete` | method | (self, context, id_or_uri) | public | `session.delete(context, image_id)` (src/nova/image/glance.py:L1193) | 1/3 | `src/nova/image/glance.py:L1184–L1193` |
| `API.download` | method | (self, context, id_or_uri, data=None, dest_path=None, trusted_certs=None) | public | `session.download(context, image_id, data=data, dst_path=dest_path, trusted_certs=trusted_certs)` (src/nova/image/glance.py:L1236) | 1/6 | `src/nova/image/glance.py:L1195–L1238` |
| `API.copy_image_to_store` | method | (self, context, image_id, store) | public | `session.image_import_copy(context, image_id, [store])` (src/nova/image/glance.py:L1248) | 1/3 | `src/nova/image/glance.py:L1240–L1248` |
| `GlanceImageServiceV2._safe_fsync` | staticmethod | — | private | not declared | — | `src/nova/image/glance.py:L312–L326` |
| `API.generate_image_url` | staticmethod | — | public | not declared | — | `src/nova/image/glance.py:L1099–L1106` |

## Dependencies

- `import copy` (src/nova/image/glance.py:L18)
- `import inspect` (src/nova/image/glance.py:L19)
- `import itertools` (src/nova/image/glance.py:L20)
- `import os` (src/nova/image/glance.py:L21)
- `import random` (src/nova/image/glance.py:L22)
- `import re` (src/nova/image/glance.py:L23)
- `import stat` (src/nova/image/glance.py:L24)
- `import sys` (src/nova/image/glance.py:L25)
- `import time` (src/nova/image/glance.py:L26)
- `import urllib.parse as urlparse` (src/nova/image/glance.py:L27)
- `import cryptography` (src/nova/image/glance.py:L29)
- `cursive`: imports `certificate_utils` (src/nova/image/glance.py:L30)
- `cursive`: imports `exception as cursive_exception` (src/nova/image/glance.py:L31)
- `cursive`: imports `signature_utils` (src/nova/image/glance.py:L32)
- `import glanceclient` (src/nova/image/glance.py:L33)
- `glanceclient.common`: imports `utils as glance_utils` (src/nova/image/glance.py:L34)
- `import glanceclient.exc` (src/nova/image/glance.py:L35)
- `glanceclient.v2`: imports `schemas` (src/nova/image/glance.py:L36)
- `oslo_log`: imports `log as logging` (src/nova/image/glance.py:L37)
- `oslo_serialization`: imports `jsonutils` (src/nova/image/glance.py:L38)
- `oslo_utils`: imports `excutils` (src/nova/image/glance.py:L39)
- `oslo_utils`: imports `timeutils` (src/nova/image/glance.py:L40)
- `import nova.conf` (src/nova/image/glance.py:L42)
- `nova`: imports `exception` (src/nova/image/glance.py:L43)
- `nova`: imports `objects` (src/nova/image/glance.py:L44)
- `nova.objects`: imports `fields` (src/nova/image/glance.py:L45)
- `nova`: imports `profiler` (src/nova/image/glance.py:L46)
- `nova`: imports `service_auth` (src/nova/image/glance.py:L47)
- `nova`: imports `utils` (src/nova/image/glance.py:L48)
- `nova.storage`: imports `rbd_utils` (src/nova/image/glance.py:L222)

## Side Effects

- **network**: from glanceclient.common import utils as glance_utils (src/nova/image/glance.py:L34)
- **network**: import glanceclient.exc (src/nova/image/glance.py:L35)
- **network**: from glanceclient.v2 import schemas (src/nova/image/glance.py:L36)
- **network**: auth = service_auth.get_service_user_token_auth_plugin(context) (src/nova/image/glance.py:L59)
- **network**: return glanceclient.Client(version, session=sess, auth=auth, (src/nova/image/glance.py:L67)
- **network**: self.client = self._create_static_client(context, (src/nova/image/glance.py:L125)
- **network**: glanceclient.exc.HTTPServiceUnavailable, (src/nova/image/glance.py:L163)
- **network**: glanceclient.exc.InvalidEndpoint, (src/nova/image/glance.py:L164)
- **network**: glanceclient.exc.CommunicationError, (src/nova/image/glance.py:L165)
- **network**: client = self.client or self._create_onetime_client(context, (src/nova/image/glance.py:L171)
- **network**: self._client = client or GlanceClientWrapper() (src/nova/image/glance.py:L202)
- **network**: image = self._client.call(context, 2, 'get', args=(image_id,)) (src/nova/image/glance.py:L269)
- **network**: images = self._client.call(context, 2, 'list', kwargs=params) (src/nova/image/glance.py:L301)
- **file-io**: with open(dst_path, 'rb') as fh: (src/nova/image/glance.py:L347)
- **file-io**: downloaded_length = os.path.getsize(dst_path) (src/nova/image/glance.py:L348)
- **network**: image_chunks = self._client.call( (src/nova/image/glance.py:L375)
- **file-io**: data = open(dst_path, 'wb') (src/nova/image/glance.py:L413)
- **network**: except glanceclient.exc.HTTPException: (src/nova/image/glance.py:L543)
- **network**: return self._client.call( (src/nova/image/glance.py:L554)
- **network**: except glanceclient.exc.HTTPNotImplemented as e: (src/nova/image/glance.py:L556)
- **network**: except glanceclient.exc.HTTPBadRequest as e: (src/nova/image/glance.py:L559)
- **network**: return self._client.call( (src/nova/image/glance.py:L575)
- **network**: except glanceclient.exc.HTTPBadRequest: (src/nova/image/glance.py:L578)
- **network**: self._client.call)(context, 2, 'upload', args=(image_id, data)) (src/nova/image/glance.py:L585)
- **network**: return self._client.call(context, 2, 'get', args=(image_id,)) (src/nova/image/glance.py:L587)
- **network**: image_schema = self._client.call( (src/nova/image/glance.py:L607)
- **network**: image = self._client.call( (src/nova/image/glance.py:L654)
- **network**: image = self._client.call( (src/nova/image/glance.py:L704)
- **network**: self._client.call(context, 2, 'delete', args=(image_id,)) (src/nova/image/glance.py:L728)
- **network**: except glanceclient.exc.HTTPNotFound: (src/nova/image/glance.py:L729)
- **network**: except glanceclient.exc.HTTPForbidden: (src/nova/image/glance.py:L731)
- **network**: except glanceclient.exc.HTTPConflict as exc: (src/nova/image/glance.py:L733)
- **network**: self._client.call(context, 2, 'image_import', args=(image_id,), (src/nova/image/glance.py:L758)
- **network**: except glanceclient.exc.HTTPNotFound: (src/nova/image/glance.py:L761)
- **network**: except glanceclient.exc.HTTPForbidden: (src/nova/image/glance.py:L763)
- **network**: except glanceclient.exc.HTTPConflict as exc: (src/nova/image/glance.py:L765)
- **network**: except glanceclient.exc.HTTPBadRequest as exc: (src/nova/image/glance.py:L768)
- **network**: if isinstance(exc_value, (glanceclient.exc.HTTPForbidden, (src/nova/image/glance.py:L994)
- **network**: glanceclient.exc.HTTPUnauthorized)): (src/nova/image/glance.py:L995)
- **network**: if isinstance(exc_value, glanceclient.exc.HTTPNotFound): (src/nova/image/glance.py:L997)
- **network**: if isinstance(exc_value, glanceclient.exc.HTTPBadRequest): (src/nova/image/glance.py:L999)
- **network**: if isinstance(exc_value, glanceclient.exc.HTTPOverLimit): (src/nova/image/glance.py:L1002)
- **network**: if isinstance(exc_value, (glanceclient.exc.HTTPForbidden, (src/nova/image/glance.py:L1008)
- **network**: glanceclient.exc.HTTPUnauthorized)): (src/nova/image/glance.py:L1009)
- **network**: if isinstance(exc_value, glanceclient.exc.HTTPNotFound): (src/nova/image/glance.py:L1011)
- **network**: if isinstance(exc_value, glanceclient.exc.HTTPBadRequest): (src/nova/image/glance.py:L1013)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/image/glance.py:L51)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/image/glance.py:L52)
- **global-mutation**: IMAGE_ATTRIBUTES = ['status', 'updated_at', 'created_at', 'deleted_at'] (src/nova/image/glance.py:L971)

## Security Surface

- **privilege** (`crypto-key`): auth = service_auth.get_service_user_token_auth_plugin(context) (src/nova/image/glance.py:L59)
- **sink** (`file-write`): data = open(dst_path, 'wb') (src/nova/image/glance.py:L413)
- **sink** (`db-write`): verifier.update(chunk) (src/nova/image/glance.py:L427)
- **sink** (`file-write`): data.write(chunk) (src/nova/image/glance.py:L429)
- **privilege** (`crypto-key`): except cryptography.exceptions.InvalidSignature: (src/nova/image/glance.py:L434)
- **sink** (`db-write`): def update(self, context, image_id, image_meta, data=None, (src/nova/image/glance.py:L675)
- **sink** (`db-write`): context, 2, 'update', kwargs=sent_service_image_meta) (src/nova/image/glance.py:L705)
- **sink** (`db-write`): def update(self, context, id_or_uri, image_info, (src/nova/image/glance.py:L1160)
- **sink** (`db-write`): """Update the information about an image, optionally along with a file (src/nova/image/glance.py:L1162)
- **sink** (`db-write`): return session.update(context, image_id, image_info, data=data, (src/nova/image/glance.py:L1181)

