# src/nova/console/websocketproxy.py

## Overview

This file implements the `websocketproxy` module, defining 3 classs, 2 constants, 16 methods, 1 property, 1 staticmethod, 20 imports, 3 side effects.

Lines: total 332, code 221, comment 56, blank 55

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/console/websocketproxy.py:L46–L46` |
| `CONF` | constant | — | exported | not declared | — | `src/nova/console/websocketproxy.py:L48–L48` |
| `TenantSock` | class | — | exported | not declared | — | `src/nova/console/websocketproxy.py:L51–L89` |
| `TenantSock.__init__` | method | (self, reqhandler) | public | not declared | 1/3 | `src/nova/console/websocketproxy.py:L59–L61` |
| `TenantSock.recv` | method | (self, cnt) | public | `b''.join(popped)` (src/nova/console/websocketproxy.py:L79) | 5/11 | `src/nova/console/websocketproxy.py:L63–L79` |
| `TenantSock.sendall` | method | (self, data) | public | not declared | 1/2 | `src/nova/console/websocketproxy.py:L81–L82` |
| `TenantSock.finish_up` | method | (self) | public | not declared | 1/2 | `src/nova/console/websocketproxy.py:L84–L85` |
| `TenantSock.close` | method | (self) | public | not declared | 1/3 | `src/nova/console/websocketproxy.py:L87–L89` |
| `NovaProxyRequestHandler` | class | — | exported | not declared | — | `src/nova/console/websocketproxy.py:L92–L304` |
| `NovaProxyRequestHandler.__init__` | method | (self, *args, **kwargs) | public | not declared | 1/3 | `src/nova/console/websocketproxy.py:L94–L96` |
| `NovaProxyRequestHandler.compute_rpcapi` | method | (self) | public | `self._compute_rpcapi` (src/nova/console/websocketproxy.py:L105) | 2/4 | `src/nova/console/websocketproxy.py:L99–L105` |
| `NovaProxyRequestHandler.verify_origin_proto` | method | (self, connect_info, origin_proto) | public | `origin_proto in expected_protos` (src/nova/console/websocketproxy.py:L123) | 4/12 | `src/nova/console/websocketproxy.py:L107–L123` |
| `NovaProxyRequestHandler._check_console_port` | method | (self, ctxt, instance_uuid, port, console_type) | private | `` (src/nova/console/websocketproxy.py:L130); `self.compute_rpcapi.validate_console_port(ctxt, instance, str(port), console_type)` (src/nova/console/websocketproxy.py:L133) | 2/8 | `src/nova/console/websocketproxy.py:L125–L135` |
| `NovaProxyRequestHandler._get_connect_info` | method | (self, ctxt, token) | private | `connect_info` (src/nova/console/websocketproxy.py:L151) | 2/8 | `src/nova/console/websocketproxy.py:L137–L151` |
| `NovaProxyRequestHandler._close_connection` | method | (self, tsock, host, port) | private | not declared | 4/11 | `src/nova/console/websocketproxy.py:L153–L165` |
| `NovaProxyRequestHandler.new_websocket_client` | method | (self) | public | not declared | 22/87 | `src/nova/console/websocketproxy.py:L167–L285` |
| `NovaProxyRequestHandler.socket` | method | (self, *args, **kwargs) | public | `websockifyserver.WebSockifyServer.socket(*args, **kwargs)` (src/nova/console/websocketproxy.py:L288) | 1/2 | `src/nova/console/websocketproxy.py:L287–L288` |
| `NovaProxyRequestHandler.send_head` | method | (self) | public | `None` (src/nova/console/websocketproxy.py:L302); `super(NovaProxyRequestHandler, self).send_head()` (src/nova/console/websocketproxy.py:L304) | 4/10 | `src/nova/console/websocketproxy.py:L290–L304` |
| `NovaWebSocketProxy` | class | — | exported | not declared | — | `src/nova/console/websocketproxy.py:L307–L332` |
| `NovaWebSocketProxy.__init__` | method | (self, *args, **kwargs) | public | not declared | 3/7 | `src/nova/console/websocketproxy.py:L308–L328` |
| `NovaWebSocketProxy.get_logger` | method | — | public | `LOG` (src/nova/console/websocketproxy.py:L332) | 1/2 | `src/nova/console/websocketproxy.py:L331–L332` |
| `NovaProxyRequestHandler.compute_rpcapi` | property | — | public | not declared | — | `src/nova/console/websocketproxy.py:L98–L105` |
| `NovaWebSocketProxy.get_logger` | staticmethod | — | public | not declared | — | `src/nova/console/websocketproxy.py:L330–L332` |

## Dependencies

- `import copy` (src/nova/console/websocketproxy.py:L21)
- `http`: imports `cookies as Cookie` (src/nova/console/websocketproxy.py:L22)
- `http`: imports `HTTPStatus` (src/nova/console/websocketproxy.py:L23)
- `import os` (src/nova/console/websocketproxy.py:L24)
- `import socket` (src/nova/console/websocketproxy.py:L25)
- `urllib`: imports `parse as urlparse` (src/nova/console/websocketproxy.py:L26)
- `oslo_log`: imports `log as logging` (src/nova/console/websocketproxy.py:L28)
- `oslo_utils`: imports `encodeutils` (src/nova/console/websocketproxy.py:L29)
- `oslo_utils`: imports `netutils` (src/nova/console/websocketproxy.py:L30)
- `import websockify` (src/nova/console/websocketproxy.py:L31)
- `websockify`: imports `websockifyserver` (src/nova/console/websocketproxy.py:L32)
- `nova.compute`: imports `rpcapi as compute_rpcapi` (src/nova/console/websocketproxy.py:L34)
- `import nova.conf` (src/nova/console/websocketproxy.py:L35)
- `nova`: imports `context` (src/nova/console/websocketproxy.py:L36)
- `nova`: imports `exception` (src/nova/console/websocketproxy.py:L37)
- `nova.i18n`: imports `_` (src/nova/console/websocketproxy.py:L38)
- `nova`: imports `objects` (src/nova/console/websocketproxy.py:L39)
- `nova`: imports `utils` (src/nova/console/websocketproxy.py:L40)
- `oslo_utils`: imports `timeutils` (src/nova/console/websocketproxy.py:L43)
- `import threading` (src/nova/console/websocketproxy.py:L44)

## Side Effects

- **file-io**: if os.path.isdir(path): (src/nova/console/websocketproxy.py:L294)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/console/websocketproxy.py:L46)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/console/websocketproxy.py:L48)

