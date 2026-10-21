# src/nova/volume/cinder.py

## Overview

This file implements the `cinder` module, defining 1 class, 2 constants, 25 functions, 32 methods, 19 imports, 3 side effects, 8 security surface entries.

Lines: total 954, code 712, comment 88, blank 154

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/volume/cinder.py:L44–L44` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/volume/cinder.py:L46–L46` |
| `_load_auth_plugin` | function | — | unexported | `auth_plugin` (src/nova/volume/cinder.py:L54) | 3/11 | `src/nova/volume/cinder.py:L49–L61` |
| `_get_auth` | function | (context) | unexported | `service_auth.get_service_user_token_auth_plugin( context, user_auth=user_auth)` (src/nova/volume/cinder.py:L75) | 3/6 | `src/nova/volume/cinder.py:L64–L76` |
| `_get_server_version` | function | (context, url) | unexported | `(cinder_api_versions.APIVersion(min_version), cinder_api_versions.APIVersion(current_version))` (src/nova/volume/cinder.py:L133) | 8/29 | `src/nova/volume/cinder.py:L84–L134` |
| `_get_highest_client_server_version` | function | (context, url) | unexported | `min(max_server, max_client)` (src/nova/volume/cinder.py:L146) | 1/5 | `src/nova/volume/cinder.py:L141–L146` |
| `_check_microversion` | function | (context, url, microversion) | unexported | `microversion` (src/nova/volume/cinder.py:L165) | 2/5 | `src/nova/volume/cinder.py:L149–L166` |
| `_get_cinderclient_parameters` | function | (context) | unexported | `auth, service_parameters, url` (src/nova/volume/cinder.py:L191) | 3/16 | `src/nova/volume/cinder.py:L169–L191` |
| `is_microversion_supported` | function | (context, microversion) | exported | not declared | 1/2 | `src/nova/volume/cinder.py:L194–L197` |
| `cinderclient` | function | (context, microversion=None, skip_version_check=False, check_only=False) | exported | `` (src/nova/volume/cinder.py:L247); `cinder_client.Client(version, session=session, auth=auth, endpoint_override=endpoint_override, connect_retries=CONF.cinder.http_retries, global_request_id=context.global_id, **service_parameters)` (src/nova/volume/cinder.py:L251) | 6/26 | `src/nova/volume/cinder.py:L200–L257` |
| `_untranslate_volume_summary_view` | function | (context, vol) | unexported | `d` (src/nova/volume/cinder.py:L312) | 7/37 | `src/nova/volume/cinder.py:L260–L312` |
| `_untranslate_volume_type_view` | function | (volume_type) | unexported | `v` (src/nova/volume/cinder.py:L322) | 1/5 | `src/nova/volume/cinder.py:L315–L322` |
| `_untranslate_snapshot_summary_view` | function | (context, snapshot) | unexported | `d` (src/nova/volume/cinder.py:L341) | 1/13 | `src/nova/volume/cinder.py:L325–L341` |
| `_translate_attachment_ref` | function | (attachment_ref) | unexported | `attachment_ref` (src/nova/volume/cinder.py:L368) | 4/19 | `src/nova/volume/cinder.py:L344–L368` |
| `translate_cinder_exception` | function | (method) | exported | `wrapper` (src/nova/volume/cinder.py:L390) | 1/4 | `src/nova/volume/cinder.py:L371–L390` |
| `translate_cinder_exception.wrapper` | function | (self, ctx, *args, **kwargs) | public | `res` (src/nova/volume/cinder.py:L389) | — | `src/nova/volume/cinder.py:L374–L389` |
| `translate_create_exception` | function | (method) | exported | `translate_cinder_exception(wrapper)` (src/nova/volume/cinder.py:L405) | 1/3 | `src/nova/volume/cinder.py:L393–L405` |
| `translate_create_exception.wrapper` | function | (self, ctx, size, *args, **kwargs) | public | `res` (src/nova/volume/cinder.py:L404) | — | `src/nova/volume/cinder.py:L397–L404` |
| `translate_volume_exception` | function | (method) | exported | `translate_cinder_exception(wrapper)` (src/nova/volume/cinder.py:L420) | 1/3 | `src/nova/volume/cinder.py:L408–L420` |
| `translate_volume_exception.wrapper` | function | (self, ctx, volume_id, *args, **kwargs) | public | `res` (src/nova/volume/cinder.py:L419) | — | `src/nova/volume/cinder.py:L412–L419` |
| `translate_attachment_exception` | function | (method) | exported | `translate_cinder_exception(wrapper)` (src/nova/volume/cinder.py:L435) | 1/3 | `src/nova/volume/cinder.py:L423–L435` |
| `translate_attachment_exception.wrapper` | function | (self, ctx, attachment_id, *args, **kwargs) | public | `res` (src/nova/volume/cinder.py:L434) | — | `src/nova/volume/cinder.py:L428–L434` |
| `translate_snapshot_exception` | function | (method) | exported | `translate_cinder_exception(wrapper)` (src/nova/volume/cinder.py:L449) | 1/3 | `src/nova/volume/cinder.py:L438–L449` |
| `translate_snapshot_exception.wrapper` | function | (self, ctx, snapshot_id, *args, **kwargs) | public | `res` (src/nova/volume/cinder.py:L448) | — | `src/nova/volume/cinder.py:L443–L448` |
| `translate_mixed_exceptions` | function | (method) | exported | `translate_cinder_exception(wrapper)` (src/nova/volume/cinder.py:L463) | 1/3 | `src/nova/volume/cinder.py:L452–L463` |
| `translate_mixed_exceptions.wrapper` | function | (self, ctx, res_id, *args, **kwargs) | public | `res` (src/nova/volume/cinder.py:L462) | — | `src/nova/volume/cinder.py:L455–L462` |
| `_reraise` | function | (desired_exc) | unexported | not declared | 1/2 | `src/nova/volume/cinder.py:L466–L467` |
| `API` | class | — | exported | not declared | — | `src/nova/volume/cinder.py:L470–L954` |
| `API.get` | method | (self, context, volume_id, microversion=None) | public | `_untranslate_volume_summary_view(context, item)` (src/nova/volume/cinder.py:L485) | 1/4 | `src/nova/volume/cinder.py:L474–L485` |
| `API.get_all` | method | (self, context, search_opts=None) | public | `rval` (src/nova/volume/cinder.py:L498) | 3/8 | `src/nova/volume/cinder.py:L488–L498` |
| `API.check_attached` | method | (self, context, volume) | public | not declared | 2/6 | `src/nova/volume/cinder.py:L500–L505` |
| `API.check_availability_zone` | method | (self, context, volume, instance=None) | public | not declared | 4/12 | `src/nova/volume/cinder.py:L507–L529` |
| `API.reserve_volume` | method | (self, context, volume_id) | public | not declared | 1/2 | `src/nova/volume/cinder.py:L532–L533` |
| `API.unreserve_volume` | method | (self, context, volume_id) | public | not declared | 1/2 | `src/nova/volume/cinder.py:L536–L537` |
| `API.begin_detaching` | method | (self, context, volume_id) | public | not declared | 1/2 | `src/nova/volume/cinder.py:L540–L541` |
| `API.roll_detaching` | method | (self, context, volume_id) | public | not declared | 1/2 | `src/nova/volume/cinder.py:L544–L545` |
| `API.attach` | method | (self, context, volume_id, instance_uuid, mountpoint, mode='rw') | public | not declared | 1/3 | `src/nova/volume/cinder.py:L548–L550` |
| `API.detach` | method | (self, context, volume_id, instance_uuid=None, attachment_id=None) | public | not declared | 5/28 | `src/nova/volume/cinder.py:L557–L585` |
| `API.initialize_connection` | method | (self, context, volume_id, connector) | public | `connection_info` (src/nova/volume/cinder.py:L593) | 4/29 | `src/nova/volume/cinder.py:L588–L616` |
| `API.terminate_connection` | method | (self, context, volume_id, connector) | public | `cinderclient(context).volumes.terminate_connection(volume_id, connector)` (src/nova/volume/cinder.py:L624) | 1/3 | `src/nova/volume/cinder.py:L623–L625` |
| `API.migrate_volume_completion` | method | (self, context, old_volume_id, new_volume_id, error=False) | public | `cinderclient(context).volumes.migrate_volume_completion( old_volume_id, new_volume_id, error)` (src/nova/volume/cinder.py:L630) | 1/4 | `src/nova/volume/cinder.py:L628–L631` |
| `API.create` | method | (self, context, size, name, description, snapshot=None, image_id=None, volume_type=None, metadata=None, availability_zone=None) | public | `_untranslate_volume_summary_view(context, item)` (src/nova/volume/cinder.py:L653) | 2/17 | `src/nova/volume/cinder.py:L634–L653` |
| `API.delete` | method | (self, context, volume_id) | public | not declared | 1/2 | `src/nova/volume/cinder.py:L656–L657` |
| `API.update` | method | (self, context, volume_id, fields) | public | not declared | 1/2 | `src/nova/volume/cinder.py:L660–L661` |
| `API.get_absolute_limits` | method | (self, context) | public | `{limit.name: limit.value for limit in limits}` (src/nova/volume/cinder.py:L678) | 2/3 | `src/nova/volume/cinder.py:L664–L678` |
| `API.get_snapshot` | method | (self, context, snapshot_id) | public | `_untranslate_snapshot_summary_view(context, item)` (src/nova/volume/cinder.py:L683) | 1/3 | `src/nova/volume/cinder.py:L681–L683` |
| `API.get_all_snapshots` | method | (self, context) | public | `rvals` (src/nova/volume/cinder.py:L693) | 2/6 | `src/nova/volume/cinder.py:L686–L693` |
| `API.create_snapshot` | method | (self, context, volume_id, name, description) | public | `_untranslate_snapshot_summary_view(context, item)` (src/nova/volume/cinder.py:L701) | 1/6 | `src/nova/volume/cinder.py:L696–L701` |
| `API.create_snapshot_force` | method | (self, context, volume_id, name, description) | public | `_untranslate_snapshot_summary_view(context, item)` (src/nova/volume/cinder.py:L710) | 1/6 | `src/nova/volume/cinder.py:L704–L710` |
| `API.delete_snapshot` | method | (self, context, snapshot_id) | public | not declared | 1/2 | `src/nova/volume/cinder.py:L713–L714` |
| `API.get_all_volume_types` | method | (self, context) | public | `rvals` (src/nova/volume/cinder.py:L724) | 2/6 | `src/nova/volume/cinder.py:L717–L724` |
| `API.get_volume_encryption_metadata` | method | (self, context, volume_id) | public | `cinderclient(context).volumes.get_encryption_metadata(volume_id)` (src/nova/volume/cinder.py:L728) | 1/2 | `src/nova/volume/cinder.py:L727–L728` |
| `API.update_snapshot_status` | method | (self, context, snapshot_id, status) | public | not declared | 1/7 | `src/nova/volume/cinder.py:L731–L744` |
| `API.attachment_create` | method | (self, context, volume_id, instance_id, connector=None, mountpoint=None) | public | `_translate_attachment_ref(attachment_ref)` (src/nova/volume/cinder.py:L783) | 6/19 | `src/nova/volume/cinder.py:L747–L794` |
| `API.attachment_get` | method | (self, context, attachment_id) | public | `translated_attach_ref` (src/nova/volume/cinder.py:L812) | 2/15 | `src/nova/volume/cinder.py:L797–L819` |
| `API.attachment_get_all` | method | (self, context, instance_id=None, volume_id=None) | public | `[_translate_attachment_ref( each.to_dict()) for each in attachments]` (src/nova/volume/cinder.py:L851) | 7/21 | `src/nova/volume/cinder.py:L821–L852` |
| `API.attachment_update` | method | (self, context, attachment_id, connector, mountpoint=None) | public | `translated_attach_ref` (src/nova/volume/cinder.py:L896) | 4/20 | `src/nova/volume/cinder.py:L859–L903` |
| `API.attachment_delete` | method | (self, context, attachment_id) | public | not declared | 3/16 | `src/nova/volume/cinder.py:L910–L925` |
| `API.attachment_complete` | method | (self, context, attachment_id) | public | not declared | 2/12 | `src/nova/volume/cinder.py:L928–L948` |
| `API.reimage_volume` | method | (self, context, volume_id, image_id, reimage_reserved=False) | public | not declared | 1/4 | `src/nova/volume/cinder.py:L951–L954` |

## Dependencies

- `import collections` (src/nova/volume/cinder.py:L21)
- `import copy` (src/nova/volume/cinder.py:L22)
- `import functools` (src/nova/volume/cinder.py:L23)
- `import sys` (src/nova/volume/cinder.py:L24)
- `import urllib` (src/nova/volume/cinder.py:L25)
- `cinderclient`: imports `api_versions as cinder_api_versions` (src/nova/volume/cinder.py:L27)
- `cinderclient`: imports `client as cinder_client` (src/nova/volume/cinder.py:L28)
- `cinderclient`: imports `exceptions as cinder_exception` (src/nova/volume/cinder.py:L29)
- `keystoneauth1`: imports `exceptions as keystone_exception` (src/nova/volume/cinder.py:L30)
- `oslo_log`: imports `log as logging` (src/nova/volume/cinder.py:L31)
- `oslo_serialization`: imports `jsonutils` (src/nova/volume/cinder.py:L32)
- `oslo_utils`: imports `excutils` (src/nova/volume/cinder.py:L33)
- `oslo_utils`: imports `strutils` (src/nova/volume/cinder.py:L34)
- `import retrying` (src/nova/volume/cinder.py:L35)
- `nova`: imports `availability_zones as az` (src/nova/volume/cinder.py:L37)
- `import nova.conf` (src/nova/volume/cinder.py:L38)
- `nova`: imports `exception` (src/nova/volume/cinder.py:L39)
- `nova.i18n`: imports `_` (src/nova/volume/cinder.py:L40)
- `nova`: imports `service_auth` (src/nova/volume/cinder.py:L41)

## Side Effects

- **network**: return service_auth.get_service_user_token_auth_plugin( (src/nova/volume/cinder.py:L75)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/volume/cinder.py:L44)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/volume/cinder.py:L46)

## Security Surface

- **privilege** (`crypto-key`): from keystoneauth1 import exceptions as keystone_exception (src/nova/volume/cinder.py:L30)
- **privilege** (`crypto-key`): return service_auth.get_service_user_token_auth_plugin( (src/nova/volume/cinder.py:L75)
- **sink** (`db-write`): d['attachments'].update(a.items()) (src/nova/volume/cinder.py:L284)
- **sink** (`db-write`): def update(self, context, volume_id, fields): (src/nova/volume/cinder.py:L660)
- **sink** (`db-write`): :param attachment_id: UUID of the volume attachment to update. (src/nova/volume/cinder.py:L865)
- **sink** (`db-write`): context, '3.44', skip_version_check=True).attachments.update( (src/nova/volume/cinder.py:L892)
- **sink** (`db-write`): LOG.error('Update attachment failed for attachment ' (src/nova/volume/cinder.py:L899)
- **sink** (`db-write`): :param attachment_id: UUID of the volume attachment to update. (src/nova/volume/cinder.py:L936)

