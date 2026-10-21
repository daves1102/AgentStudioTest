# src/nova/rpc.py

## Overview

This file implements the `rpc` module, defining 5 classs, 9 constants, 3 fields, 14 functions, 14 methods, 1 staticmethod, 2 variables, 12 imports, 21 side effects, 3 security surface entries.

Lines: total 444, code 339, comment 33, blank 72

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `__all__` | variable | — | unexported | not declared | — | `src/nova/rpc.py:L30–L41` |
| `profiler` | variable | — | exported | not declared | — | `src/nova/rpc.py:L43–L43` |
| `CONF` | constant | — | exported | not declared | — | `src/nova/rpc.py:L46–L46` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/rpc.py:L48–L48` |
| `TRANSPORT` | constant | — | exported | not declared | — | `src/nova/rpc.py:L51–L51` |
| `LEGACY_NOTIFIER` | constant | — | exported | not declared | — | `src/nova/rpc.py:L52–L52` |
| `NOTIFICATION_TRANSPORT` | constant | — | exported | not declared | — | `src/nova/rpc.py:L53–L53` |
| `NOTIFIER` | constant | — | exported | not declared | — | `src/nova/rpc.py:L54–L54` |
| `HEARTBEAT_THRESHOLD` | constant | — | exported | not declared | — | `src/nova/rpc.py:L58–L58` |
| `ALLOWED_EXMODS` | constant | — | exported | not declared | — | `src/nova/rpc.py:L60–L62` |
| `EXTRA_EXMODS` | constant | — | exported | not declared | — | `src/nova/rpc.py:L63–L63` |
| `init` | function | (conf) | exported | not declared | 3/27 | `src/nova/rpc.py:L66–L92` |
| `cleanup` | function | — | exported | not declared | 1/9 | `src/nova/rpc.py:L95–L103` |
| `set_defaults` | function | (control_exchange) | exported | not declared | 1/2 | `src/nova/rpc.py:L106–L107` |
| `add_extra_exmods` | function | (*args) | exported | not declared | 1/2 | `src/nova/rpc.py:L110–L111` |
| `clear_extra_exmods` | function | — | exported | not declared | 1/2 | `src/nova/rpc.py:L114–L115` |
| `get_allowed_exmods` | function | — | exported | `ALLOWED_EXMODS + EXTRA_EXMODS` (src/nova/rpc.py:L119) | 1/2 | `src/nova/rpc.py:L118–L119` |
| `JsonPayloadSerializer` | class | — | exported | not declared | — | `src/nova/rpc.py:L122–L143` |
| `JsonPayloadSerializer.fallback` | method | (obj) | public | `obj.to_dict()` (src/nova/rpc.py:L137); `str(obj)` (src/nova/rpc.py:L139) | 2/4 | `src/nova/rpc.py:L125–L139` |
| `JsonPayloadSerializer.serialize_entity` | method | (self, context, entity) | public | `jsonutils.to_primitive(entity, convert_instances=True, fallback=self.fallback)` (src/nova/rpc.py:L142) | 1/3 | `src/nova/rpc.py:L141–L143` |
| `RequestContextSerializer` | class | — | exported | not declared | — | `src/nova/rpc.py:L146–L165` |
| `RequestContextSerializer.__init__` | method | (self, base) | public | not declared | 1/2 | `src/nova/rpc.py:L148–L149` |
| `RequestContextSerializer.serialize_entity` | method | (self, context, entity) | public | `entity` (src/nova/rpc.py:L153); `self._base.serialize_entity(context, entity)` (src/nova/rpc.py:L154) | 2/4 | `src/nova/rpc.py:L151–L154` |
| `RequestContextSerializer.deserialize_entity` | method | (self, context, entity) | public | `entity` (src/nova/rpc.py:L158); `self._base.deserialize_entity(context, entity)` (src/nova/rpc.py:L159) | 2/4 | `src/nova/rpc.py:L156–L159` |
| `RequestContextSerializer.serialize_context` | method | (self, context) | public | `context.to_dict()` (src/nova/rpc.py:L162) | 1/2 | `src/nova/rpc.py:L161–L162` |
| `RequestContextSerializer.deserialize_context` | method | (self, context) | public | `nova.context.RequestContext.from_dict(context)` (src/nova/rpc.py:L165) | 1/2 | `src/nova/rpc.py:L164–L165` |
| `ProfilerRequestContextSerializer` | class | — | exported | not declared | — | `src/nova/rpc.py:L168–L192` |
| `ProfilerRequestContextSerializer.serialize_context` | method | (self, context) | public | `_context` (src/nova/rpc.py:L184) | 2/12 | `src/nova/rpc.py:L169–L184` |
| `ProfilerRequestContextSerializer.deserialize_context` | method | (self, context) | public | `super(ProfilerRequestContextSerializer, self).deserialize_context(context)` (src/nova/rpc.py:L191) | 2/6 | `src/nova/rpc.py:L186–L192` |
| `get_transport_url` | function | (url_str=None) | exported | `messaging.TransportURL.parse(CONF, url_str)` (src/nova/rpc.py:L196) | 1/2 | `src/nova/rpc.py:L195–L196` |
| `get_client` | function | (target, version_cap=None, serializer=None, call_monitor_timeout=None) | exported | `messaging.get_rpc_client(TRANSPORT, target, version_cap=version_cap, serializer=serializer, call_monitor_timeout=call_monitor_timeout)` (src/nova/rpc.py:L208) | 2/10 | `src/nova/rpc.py:L199–L210` |
| `get_server` | function | (target, endpoints, serializer=None) | exported | `messaging.get_rpc_server(TRANSPORT, target, endpoints, executor=exc, serializer=serializer, access_policy=access_policy)` (src/nova/rpc.py:L222) | 3/14 | `src/nova/rpc.py:L213–L227` |
| `get_notifier` | function | (service, host=None) | exported | `LegacyValidatingNotifier( LEGACY_NOTIFIER.prepare(publisher_id=publisher_id))` (src/nova/rpc.py:L233) | 2/5 | `src/nova/rpc.py:L230–L234` |
| `get_versioned_notifier` | function | (publisher_id) | exported | `NOTIFIER.prepare(publisher_id=publisher_id)` (src/nova/rpc.py:L239) | 1/3 | `src/nova/rpc.py:L237–L239` |
| `if_notifications_enabled` | function | (f) | exported | `wrapped` (src/nova/rpc.py:L252) | 1/4 | `src/nova/rpc.py:L242–L252` |
| `if_notifications_enabled.wrapped` | function | (*args, **kwargs) | public | `f(*args, **kwargs)` (src/nova/rpc.py:L249); `None` (src/nova/rpc.py:L251) | — | `src/nova/rpc.py:L245–L251` |
| `create_transport` | function | (url) | exported | `messaging.get_rpc_transport(CONF, url=url, allowed_remote_exmods=exmods)` (src/nova/rpc.py:L257) | 1/5 | `src/nova/rpc.py:L255–L259` |
| `LegacyValidatingNotifier` | class | — | exported | not declared | — | `src/nova/rpc.py:L262–L420` |
| `LegacyValidatingNotifier.fatal` | field | — | public | not declared | — | `src/nova/rpc.py:L267–L267` |
| `LegacyValidatingNotifier.allowed_legacy_notification_event_types` | field | — | public | not declared | — | `src/nova/rpc.py:L274–L392` |
| `LegacyValidatingNotifier.message` | field | — | public | not declared | — | `src/nova/rpc.py:L394–L395` |
| `LegacyValidatingNotifier.__init__` | method | (self, notifier) | public | not declared | 2/5 | `src/nova/rpc.py:L397–L401` |
| `LegacyValidatingNotifier._is_wrap_exception_notification` | method | (self, payload) | private | `{'exception', 'args'} == set(payload.keys())` (src/nova/rpc.py:L410) | 1/2 | `src/nova/rpc.py:L403–L410` |
| `LegacyValidatingNotifier._notify` | method | (self, priority, ctxt, event_type, payload) | private | not declared | 4/8 | `src/nova/rpc.py:L412–L420` |
| `ClientRouter` | class | — | exported | not declared | — | `src/nova/rpc.py:L423–L444` |
| `ClientRouter.__init__` | method | (self, default_client) | public | not declared | 1/6 | `src/nova/rpc.py:L428–L433` |
| `ClientRouter.client` | method | (self, context) | public | `messaging.get_rpc_client(transport, self.target, version_cap=self.version_cap, serializer=self.serializer, call_monitor_timeout=cmt)` (src/nova/rpc.py:L439); `self.default_client` (src/nova/rpc.py:L444) | 2/10 | `src/nova/rpc.py:L435–L444` |
| `JsonPayloadSerializer.fallback` | staticmethod | — | public | not declared | — | `src/nova/rpc.py:L124–L139` |

## Dependencies

- `import functools` (src/nova/rpc.py:L15)
- `oslo_log`: imports `log as logging` (src/nova/rpc.py:L17)
- `import oslo_messaging as messaging` (src/nova/rpc.py:L18)
- `oslo_messaging.rpc`: imports `dispatcher` (src/nova/rpc.py:L19)
- `oslo_serialization`: imports `jsonutils` (src/nova/rpc.py:L20)
- `oslo_service`: imports `periodic_task` (src/nova/rpc.py:L21)
- `oslo_utils`: imports `importutils` (src/nova/rpc.py:L22)
- `import nova.conf` (src/nova/rpc.py:L24)
- `import nova.context` (src/nova/rpc.py:L25)
- `import nova.exception` (src/nova/rpc.py:L26)
- `nova.i18n`: imports `_` (src/nova/rpc.py:L27)
- `nova`: imports `utils` (src/nova/rpc.py:L28)

## Side Effects

- **network**: from oslo_messaging.rpc import dispatcher (src/nova/rpc.py:L19)
- **network**: functools.partial(self._notify, priority)) (src/nova/rpc.py:L401)
- **network**: def _notify(self, priority, ctxt, event_type, payload): (src/nova/rpc.py:L412)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/rpc.py:L46)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/rpc.py:L48)
- **global-mutation**: TRANSPORT = None (src/nova/rpc.py:L51)
- **global-mutation**: LEGACY_NOTIFIER = None (src/nova/rpc.py:L52)
- **global-mutation**: NOTIFICATION_TRANSPORT = None (src/nova/rpc.py:L53)
- **global-mutation**: NOTIFIER = None (src/nova/rpc.py:L54)
- **global-mutation**: HEARTBEAT_THRESHOLD = 60 (src/nova/rpc.py:L58)
- **global-mutation**: ALLOWED_EXMODS = [ (src/nova/rpc.py:L60)
- **global-mutation**: EXTRA_EXMODS = [] (src/nova/rpc.py:L63)
- **global-mutation**: TRANSPORT = create_transport(get_transport_url()) (src/nova/rpc.py:L69)
- **global-mutation**: NOTIFICATION_TRANSPORT = messaging.get_notification_transport( (src/nova/rpc.py:L70)
- **global-mutation**: LEGACY_NOTIFIER = messaging.Notifier(NOTIFICATION_TRANSPORT, (src/nova/rpc.py:L74)
- **global-mutation**: NOTIFIER = messaging.Notifier(NOTIFICATION_TRANSPORT, (src/nova/rpc.py:L76)
- **global-mutation**: LEGACY_NOTIFIER = messaging.Notifier(NOTIFICATION_TRANSPORT, (src/nova/rpc.py:L79)
- **global-mutation**: NOTIFIER = messaging.Notifier( (src/nova/rpc.py:L81)
- **global-mutation**: LEGACY_NOTIFIER = messaging.Notifier(NOTIFICATION_TRANSPORT, (src/nova/rpc.py:L86)
- **global-mutation**: NOTIFIER = messaging.Notifier( (src/nova/rpc.py:L89)
- **global-mutation**: TRANSPORT = NOTIFICATION_TRANSPORT = LEGACY_NOTIFIER = NOTIFIER = None (src/nova/rpc.py:L103)

## Security Surface

- **sink** (`db-write`): _context.update({"trace_info": trace_info}) (src/nova/rpc.py:L182)
- **sink** (`db-write`): 'compute.instance.update', (src/nova/rpc.py:L362)
- **sink** (`db-write`): 'compute.metrics.update', (src/nova/rpc.py:L366)

## Notes

- KB `sideEffects` entries at L412 have targets that appear to be code fragments rather than resource paths; documented as recorded.

