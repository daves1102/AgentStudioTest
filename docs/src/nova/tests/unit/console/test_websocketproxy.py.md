# src/nova/tests/unit/console/test_websocketproxy.py

## Overview

This file implements the `test_websocketproxy` module, defining 3 classs, 1 constant, 10 fields, 1 function, 37 methods, 15 imports, 3 side effects, 1 security surface entry.

Lines: total 947, code 748, comment 51, blank 148

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/unit/console/test_websocketproxy.py:L35–L35` |
| `NovaProxyRequestHandlerDBTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/console/test_websocketproxy.py:L38–L127` |
| `NovaProxyRequestHandlerDBTestCase.setUp` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/console/test_websocketproxy.py:L40–L51` |
| `NovaProxyRequestHandlerDBTestCase._fake_console_db` | method | (self, **updates) | private | `console_db` (src/nova/tests/unit/console/test_websocketproxy.py:L58) | 2/6 | `src/nova/tests/unit/console/test_websocketproxy.py:L53–L58` |
| `NovaProxyRequestHandlerDBTestCase.fake_header` | field | — | public | not declared | — | `src/nova/tests/unit/console/test_websocketproxy.py:L60–L64` |
| `NovaProxyRequestHandlerDBTestCase.test_new_websocket_client_db` | method | (self, mock_validate_port, mock_inst_get, mock_validate, internal_access_path=None, instance_not_found=False) | public | not declared | 5/44 | `src/nova/tests/unit/console/test_websocketproxy.py:L69–L121` |
| `NovaProxyRequestHandlerDBTestCase.test_new_websocket_client_db_internal_access_path` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/console/test_websocketproxy.py:L123–L124` |
| `NovaProxyRequestHandlerDBTestCase.test_new_websocket_client_db_instance_not_found` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/console/test_websocketproxy.py:L126–L127` |
| `NovaProxyRequestHandlerTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/console/test_websocketproxy.py:L130–L861` |
| `NovaProxyRequestHandlerTestCase.setUp` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/console/test_websocketproxy.py:L132–L148` |
| `NovaProxyRequestHandlerTestCase.fake_header` | field | — | public | not declared | — | `src/nova/tests/unit/console/test_websocketproxy.py:L150–L154` |
| `NovaProxyRequestHandlerTestCase.fake_header_ipv6` | field | — | public | not declared | — | `src/nova/tests/unit/console/test_websocketproxy.py:L156–L160` |
| `NovaProxyRequestHandlerTestCase.fake_header_bad_token` | field | — | public | not declared | — | `src/nova/tests/unit/console/test_websocketproxy.py:L162–L166` |
| `NovaProxyRequestHandlerTestCase.fake_header_bad_origin` | field | — | public | not declared | — | `src/nova/tests/unit/console/test_websocketproxy.py:L168–L172` |
| `NovaProxyRequestHandlerTestCase.fake_header_allowed_origin` | field | — | public | not declared | — | `src/nova/tests/unit/console/test_websocketproxy.py:L174–L178` |
| `NovaProxyRequestHandlerTestCase.fake_header_blank_origin` | field | — | public | not declared | — | `src/nova/tests/unit/console/test_websocketproxy.py:L180–L184` |
| `NovaProxyRequestHandlerTestCase.fake_header_no_origin` | field | — | public | not declared | — | `src/nova/tests/unit/console/test_websocketproxy.py:L186–L189` |
| `NovaProxyRequestHandlerTestCase.fake_header_http` | field | — | public | not declared | — | `src/nova/tests/unit/console/test_websocketproxy.py:L191–L195` |
| `NovaProxyRequestHandlerTestCase.fake_header_malformed_cookie` | field | — | public | not declared | — | `src/nova/tests/unit/console/test_websocketproxy.py:L197–L201` |
| `NovaProxyRequestHandlerTestCase.test_new_websocket_client` | method | (self, validate, check_port) | public | not declared | 1/21 | `src/nova/tests/unit/console/test_websocketproxy.py:L206–L230` |
| `NovaProxyRequestHandlerTestCase.test_new_websocket_client_ipv6_url` | method | (self, validate, check_port) | public | not declared | 1/20 | `src/nova/tests/unit/console/test_websocketproxy.py:L235–L257` |
| `NovaProxyRequestHandlerTestCase.test_new_websocket_client_token_invalid` | method | (self, validate) | public | not declared | 1/7 | `src/nova/tests/unit/console/test_websocketproxy.py:L260–L268` |
| `NovaProxyRequestHandlerTestCase.test_new_websocket_client_internal_access_path` | method | (self, validate, check_port) | public | not declared | 1/24 | `src/nova/tests/unit/console/test_websocketproxy.py:L273–L300` |
| `NovaProxyRequestHandlerTestCase.test_new_websocket_client_internal_access_path_err` | method | (self, validate, check_port) | public | not declared | 1/22 | `src/nova/tests/unit/console/test_websocketproxy.py:L305–L329` |
| `NovaProxyRequestHandlerTestCase.test_new_websocket_client_internal_access_path_rfb` | method | (self, validate, check_port) | public | not declared | 1/27 | `src/nova/tests/unit/console/test_websocketproxy.py:L334–L365` |
| `NovaProxyRequestHandlerTestCase.test_address_string_doesnt_do_reverse_dns_lookup` | method | (self, getfqdn) | public | not declared | 1/13 | `src/nova/tests/unit/console/test_websocketproxy.py:L368–L382` |
| `NovaProxyRequestHandlerTestCase.test_new_websocket_client_novnc_bad_origin_header` | method | (self, validate, check_port) | public | not declared | 1/15 | `src/nova/tests/unit/console/test_websocketproxy.py:L387–L403` |
| `NovaProxyRequestHandlerTestCase.test_new_websocket_client_novnc_allowed_origin_header` | method | (self, validate, check_port) | public | not declared | 1/20 | `src/nova/tests/unit/console/test_websocketproxy.py:L408–L430` |
| `NovaProxyRequestHandlerTestCase.test_new_websocket_client_novnc_blank_origin_header` | method | (self, validate, check_port) | public | not declared | 1/15 | `src/nova/tests/unit/console/test_websocketproxy.py:L435–L451` |
| `NovaProxyRequestHandlerTestCase.test_new_websocket_client_novnc_no_origin_header` | method | (self, validate, check_port) | public | not declared | 1/19 | `src/nova/tests/unit/console/test_websocketproxy.py:L456–L478` |
| `NovaProxyRequestHandlerTestCase.test_new_websocket_client_novnc_https_origin_proto_http` | method | (self, validate, check_port) | public | not declared | 1/16 | `src/nova/tests/unit/console/test_websocketproxy.py:L483–L500` |
| `NovaProxyRequestHandlerTestCase.test_new_websocket_client_novnc_https_origin_proto_ws` | method | (self, validate, check_port) | public | not declared | 1/16 | `src/nova/tests/unit/console/test_websocketproxy.py:L505–L522` |
| `NovaProxyRequestHandlerTestCase.test_new_websocket_client_http_forwarded_proto_https` | method | (self, validate, check_port) | public | not declared | 1/25 | `src/nova/tests/unit/console/test_websocketproxy.py:L527–L554` |
| `NovaProxyRequestHandlerTestCase.test_new_websocket_client_novnc_bad_console_type` | method | (self, validate, check_port) | public | not declared | 1/15 | `src/nova/tests/unit/console/test_websocketproxy.py:L559–L575` |
| `NovaProxyRequestHandlerTestCase.test_malformed_cookie` | method | (self, validate, check_port) | public | not declared | 1/18 | `src/nova/tests/unit/console/test_websocketproxy.py:L580–L600` |
| `NovaProxyRequestHandlerTestCase.test_reject_open_redirect` | method | (self, url='//example.com/%2F..') | public | not declared | 4/29 | `src/nova/tests/unit/console/test_websocketproxy.py:L602–L656` |
| `NovaProxyRequestHandlerTestCase.test_reject_open_redirect_3_slashes` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/console/test_websocketproxy.py:L658–L659` |
| `NovaProxyRequestHandlerTestCase.test_host_header_does_not_poison_allowed_origins` | method | (self, validate, check_port) | public | not declared | 1/19 | `src/nova/tests/unit/console/test_websocketproxy.py:L664–L691` |
| `NovaProxyRequestHandlerTestCase.test_previous_host_does_not_bypass_origin_check` | method | (self, validate, check_port) | public | not declared | 1/27 | `src/nova/tests/unit/console/test_websocketproxy.py:L696–L734` |
| `NovaProxyRequestHandlerTestCase.test_no_compute_rpcapi_with_invalid_token` | method | (self, mock_validate) | public | not declared | 1/14 | `src/nova/tests/unit/console/test_websocketproxy.py:L737–L766` |
| `NovaProxyRequestHandlerTestCase.test_ssl_min_version_is_not_set` | method | (self, mock_select_ssl) | public | not declared | 1/3 | `src/nova/tests/unit/console/test_websocketproxy.py:L769–L771` |
| `NovaProxyRequestHandlerTestCase.test_ssl_min_version_not_set_by_default` | method | (self, mock_select_ssl) | public | not declared | 1/3 | `src/nova/tests/unit/console/test_websocketproxy.py:L774–L776` |
| `NovaProxyRequestHandlerTestCase.test_non_default_ssl_min_version_is_set` | method | (self, mock_select_ssl) | public | not declared | 1/4 | `src/nova/tests/unit/console/test_websocketproxy.py:L779–L782` |
| `NovaProxyRequestHandlerTestCase.test_enforce_session_timeout_timer_called` | method | (self, validate, check_port) | public | not declared | 1/19 | `src/nova/tests/unit/console/test_websocketproxy.py:L787–L808` |
| `NovaProxyRequestHandlerTestCase.test_enforce_session_timeout_timer_not_called` | method | (self, validate, check_port) | public | not declared | 1/19 | `src/nova/tests/unit/console/test_websocketproxy.py:L813–L833` |
| `NovaProxyRequestHandlerTestCase.test__close_connection` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/console/test_websocketproxy.py:L835–L845` |
| `NovaProxyRequestHandlerTestCase.test__close_connection_raise_OSError` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/console/test_websocketproxy.py:L847–L861` |
| `NovaWebsocketSecurityProxyTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/console/test_websocketproxy.py:L864–L947` |
| `NovaWebsocketSecurityProxyTestCase.setUp` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/console/test_websocketproxy.py:L866–L897` |
| `NovaWebsocketSecurityProxyTestCase.setUp.get_header` | function | (header) | public | `'token="123-456-789"'` (src/nova/tests/unit/console/test_websocketproxy.py:L889); `'https://example.net:6080'` (src/nova/tests/unit/console/test_websocketproxy.py:L891); `'example.net:6080'` (src/nova/tests/unit/console/test_websocketproxy.py:L893); `` (src/nova/tests/unit/console/test_websocketproxy.py:L895) | — | `src/nova/tests/unit/console/test_websocketproxy.py:L887–L895` |
| `NovaWebsocketSecurityProxyTestCase.test_proxy_connect_ok` | method | (self, mock_finish, mock_close, mock_port_validate, mock_get, mock_token_validate) | public | not declared | 1/15 | `src/nova/tests/unit/console/test_websocketproxy.py:L904–L922` |
| `NovaWebsocketSecurityProxyTestCase.test_proxy_connect_err` | method | (self, mock_finish, mock_close, mock_port_validate, mock_get, mock_token_validate) | public | not declared | 1/15 | `src/nova/tests/unit/console/test_websocketproxy.py:L929–L947` |

## Dependencies

- `import copy` (src/nova/tests/unit/console/test_websocketproxy.py:L17)
- `import fixtures` (src/nova/tests/unit/console/test_websocketproxy.py:L18)
- `import io` (src/nova/tests/unit/console/test_websocketproxy.py:L19)
- `import socket` (src/nova/tests/unit/console/test_websocketproxy.py:L20)
- `unittest`: imports `mock` (src/nova/tests/unit/console/test_websocketproxy.py:L21)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/console/test_websocketproxy.py:L23)
- `import nova.conf` (src/nova/tests/unit/console/test_websocketproxy.py:L25)
- `nova.console.securityproxy`: imports `base` (src/nova/tests/unit/console/test_websocketproxy.py:L26)
- `nova.console`: imports `websocketproxy` (src/nova/tests/unit/console/test_websocketproxy.py:L27)
- `nova`: imports `context as nova_context` (src/nova/tests/unit/console/test_websocketproxy.py:L28)
- `nova`: imports `exception` (src/nova/tests/unit/console/test_websocketproxy.py:L29)
- `nova`: imports `objects` (src/nova/tests/unit/console/test_websocketproxy.py:L30)
- `nova`: imports `test` (src/nova/tests/unit/console/test_websocketproxy.py:L31)
- `nova.tests.unit`: imports `fake_console_auth_token as fake_ca` (src/nova/tests/unit/console/test_websocketproxy.py:L32)
- `nova`: imports `utils` (src/nova/tests/unit/console/test_websocketproxy.py:L33)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/tests/unit/console/test_websocketproxy.py:L35)
- **global-mutation**: HTTP_RESP = b"HTTP/1.1 200 OK\r\n\r\n" (src/nova/tests/unit/console/test_websocketproxy.py:L349)
- **global-mutation**: RFB_MSG = b"RFB 003.003\n" (src/nova/tests/unit/console/test_websocketproxy.py:L350)

## Security Surface

- **sink** (`db-write`): console_db.update(updates) (src/nova/tests/unit/console/test_websocketproxy.py:L57)

