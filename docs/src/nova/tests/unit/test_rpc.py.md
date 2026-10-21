# src/nova/tests/unit/test_rpc.py

## Overview

This file implements the `test_rpc` module, defining 6 classs, 2 constants, 40 methods, 9 imports, 5 side effects, 1 security surface entry.

Lines: total 470, code 349, comment 20, blank 101

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/unit/test_rpc.py:L27–L27` |
| `TestRPC` | class | — | exported | not declared | — | `src/nova/tests/unit/test_rpc.py:L30–L307` |
| `TestRPC.STUB_RPC` | constant | — | public | not declared | — | `src/nova/tests/unit/test_rpc.py:L33–L33` |
| `TestRPC._test_init` | method | (self, notification_format, expected_driver_topic_kwargs, mock_notif, mock_noti_trans, mock_ser, mock_exmods, mock_NOTIFIER, mock_LEGACY_NOTIFIER, mock_NOTIFICATION_TRANSPORT, mock_TRANSPORT, versioned_notifications_topics=None) | private | not declared | 3/39 | `src/nova/tests/unit/test_rpc.py:L43–L89` |
| `TestRPC.test_init_unversioned` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/test_rpc.py:L91–L95` |
| `TestRPC.test_init_both` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/test_rpc.py:L97–L101` |
| `TestRPC.test_init_versioned` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/test_rpc.py:L103–L107` |
| `TestRPC.test_init_versioned_with_custom_topics` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/test_rpc.py:L109–L115` |
| `TestRPC.test_cleanup_transport_null` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/test_rpc.py:L120–L122` |
| `TestRPC.test_cleanup_notification_transport_null` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/test_rpc.py:L127–L129` |
| `TestRPC.test_cleanup_legacy_notifier_null` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/test_rpc.py:L134–L136` |
| `TestRPC.test_cleanup_notifier_null` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/test_rpc.py:L141–L143` |
| `TestRPC.test_cleanup` | method | (self, mock_NOTIFIER, mock_LEGACY_NOTIFIER, mock_NOTIFICATION_TRANSPORT, mock_TRANSPORT) | public | not declared | 1/9 | `src/nova/tests/unit/test_rpc.py:L149–L159` |
| `TestRPC.test_set_defaults` | method | (self, mock_set) | public | not declared | 1/4 | `src/nova/tests/unit/test_rpc.py:L162–L167` |
| `TestRPC.test_add_extra_exmods` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/test_rpc.py:L169–L175` |
| `TestRPC.test_clear_extra_exmods` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/test_rpc.py:L177–L183` |
| `TestRPC.test_get_allowed_exmods` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/test_rpc.py:L185–L195` |
| `TestRPC.test_get_transport_url` | method | (self, mock_url) | public | not declared | 1/5 | `src/nova/tests/unit/test_rpc.py:L198–L204` |
| `TestRPC.test_get_transport_url_null` | method | (self, mock_url) | public | not declared | 1/5 | `src/nova/tests/unit/test_rpc.py:L207–L213` |
| `TestRPC.test_get_client` | method | (self, mock_get, mock_ser, mock_TRANSPORT) | public | not declared | 1/12 | `src/nova/tests/unit/test_rpc.py:L219–L232` |
| `TestRPC.test_get_server` | method | (self, mock_get, mock_ser, mock_TRANSPORT) | public | not declared | 2/14 | `src/nova/tests/unit/test_rpc.py:L238–L253` |
| `TestRPC.test_get_client_profiler_enabled` | method | (self, mock_get, mock_ser, mock_TRANSPORT) | public | not declared | 1/13 | `src/nova/tests/unit/test_rpc.py:L259–L273` |
| `TestRPC.test_get_notifier` | method | (self, mock_LEGACY_NOTIFIER) | public | not declared | 1/8 | `src/nova/tests/unit/test_rpc.py:L276–L285` |
| `TestRPC.test_get_versioned_notifier` | method | (self, mock_NOTIFIER) | public | not declared | 1/7 | `src/nova/tests/unit/test_rpc.py:L288–L296` |
| `TestRPC.test_create_transport` | method | (self, mock_transport, mock_exmods) | public | not declared | 1/8 | `src/nova/tests/unit/test_rpc.py:L300–L307` |
| `TestJsonPayloadSerializer` | class | — | exported | not declared | — | `src/nova/tests/unit/test_rpc.py:L310–L325` |
| `TestJsonPayloadSerializer.test_serialize_entity` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/test_rpc.py:L311–L317` |
| `TestJsonPayloadSerializer.test_fallback` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/test_rpc.py:L319–L325` |
| `TestRequestContextSerializer` | class | — | exported | not declared | — | `src/nova/tests/unit/test_rpc.py:L328–L374` |
| `TestRequestContextSerializer.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/test_rpc.py:L329–L333` |
| `TestRequestContextSerializer.test_serialize_entity` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/test_rpc.py:L335–L342` |
| `TestRequestContextSerializer.test_serialize_entity_null_base` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/test_rpc.py:L344–L347` |
| `TestRequestContextSerializer.test_deserialize_entity` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/test_rpc.py:L349–L356` |
| `TestRequestContextSerializer.test_deserialize_entity_null_base` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/test_rpc.py:L358–L361` |
| `TestRequestContextSerializer.test_serialize_context` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/test_rpc.py:L363–L368` |
| `TestRequestContextSerializer.test_deserialize_context` | method | (self, mock_req) | public | not declared | 1/3 | `src/nova/tests/unit/test_rpc.py:L371–L374` |
| `TestProfilerRequestContextSerializer` | class | — | exported | not declared | — | `src/nova/tests/unit/test_rpc.py:L377–L411` |
| `TestProfilerRequestContextSerializer.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/test_rpc.py:L378–L380` |
| `TestProfilerRequestContextSerializer.test_serialize_context` | method | (self, mock_profiler) | public | not declared | 1/13 | `src/nova/tests/unit/test_rpc.py:L383–L397` |
| `TestProfilerRequestContextSerializer.test_deserialize_context` | method | (self, mock_profiler) | public | not declared | 1/10 | `src/nova/tests/unit/test_rpc.py:L400–L411` |
| `TestClientRouter` | class | — | exported | not declared | — | `src/nova/tests/unit/test_rpc.py:L414–L447` |
| `TestClientRouter.test_by_instance` | method | (self, mock_get) | public | not declared | 1/14 | `src/nova/tests/unit/test_rpc.py:L416–L433` |
| `TestClientRouter.test_by_instance_untargeted` | method | (self, mock_get) | public | not declared | 1/10 | `src/nova/tests/unit/test_rpc.py:L436–L447` |
| `TestIsNotificationsEnabledDecorator` | class | — | exported | not declared | — | `src/nova/tests/unit/test_rpc.py:L450–L470` |
| `TestIsNotificationsEnabledDecorator.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/test_rpc.py:L452–L456` |
| `TestIsNotificationsEnabledDecorator.test_call_func_if_needed` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/test_rpc.py:L458–L460` |
| `TestIsNotificationsEnabledDecorator.test_not_call_func_if_notifier_disabled` | method | (self, mock_is_enabled) | public | not declared | 1/3 | `src/nova/tests/unit/test_rpc.py:L463–L465` |
| `TestIsNotificationsEnabledDecorator.test_not_call_func_if_only_unversioned_notifications_requested` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/test_rpc.py:L467–L470` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/test_rpc.py:L15)
- `import oslo_messaging as messaging` (src/nova/tests/unit/test_rpc.py:L17)
- `oslo_messaging.rpc`: imports `dispatcher` (src/nova/tests/unit/test_rpc.py:L18)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/test_rpc.py:L19)
- `import nova.conf` (src/nova/tests/unit/test_rpc.py:L21)
- `nova`: imports `context` (src/nova/tests/unit/test_rpc.py:L22)
- `nova`: imports `rpc` (src/nova/tests/unit/test_rpc.py:L23)
- `nova`: imports `test` (src/nova/tests/unit/test_rpc.py:L24)
- `nova`: imports `utils` (src/nova/tests/unit/test_rpc.py:L25)

## Side Effects

- **network**: from oslo_messaging.rpc import dispatcher (src/nova/tests/unit/test_rpc.py:L18)
- **network**: @mock.patch('oslo_messaging.get_rpc_client') (src/nova/tests/unit/test_rpc.py:L415)
- **network**: @mock.patch('oslo_messaging.get_rpc_client') (src/nova/tests/unit/test_rpc.py:L435)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/tests/unit/test_rpc.py:L27)
- **global-mutation**: STUB_RPC = False (src/nova/tests/unit/test_rpc.py:L33)

## Security Surface

- **sink** (`db-write`): expected_kwargs.update(kwargs) (src/nova/tests/unit/test_rpc.py:L84)

