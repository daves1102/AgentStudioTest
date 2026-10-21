# src/nova/baserpc.py

## Overview

This file implements the `baserpc` module, defining 2 classs, 2 constants, 1 field, 6 methods, 1 variable, 4 imports, 4 side effects.

Lines: total 79, code 43, comment 16, blank 20

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/baserpc.py:L28–L28` |
| `_NAMESPACE` | variable | — | unexported | not declared | — | `src/nova/baserpc.py:L30–L30` |
| `BaseAPI` | class | — | exported | not declared | — | `src/nova/baserpc.py:L33–L62` |
| `BaseAPI.VERSION_ALIASES` | constant | — | public | not declared | — | `src/nova/baserpc.py:L42–L44` |
| `BaseAPI.__init__` | method | (self, topic) | public | not declared | 1/8 | `src/nova/baserpc.py:L46–L53` |
| `BaseAPI.ping` | method | (self, context, arg, timeout=None) | public | `cctxt.call(context, 'ping', arg=arg_p)` (src/nova/baserpc.py:L58) | 1/4 | `src/nova/baserpc.py:L55–L58` |
| `BaseAPI.get_backdoor_port` | method | (self, context, host) | public | `cctxt.call(context, 'get_backdoor_port')` (src/nova/baserpc.py:L62) | 1/3 | `src/nova/baserpc.py:L60–L62` |
| `BaseRPCAPI` | class | — | exported | not declared | — | `src/nova/baserpc.py:L65–L79` |
| `BaseRPCAPI.target` | field | — | public | not declared | — | `src/nova/baserpc.py:L68–L68` |
| `BaseRPCAPI.__init__` | method | (self, service_name, backdoor_port) | public | not declared | 1/3 | `src/nova/baserpc.py:L70–L72` |
| `BaseRPCAPI.ping` | method | (self, context, arg) | public | `jsonutils.to_primitive(resp)` (src/nova/baserpc.py:L76) | 1/3 | `src/nova/baserpc.py:L74–L76` |
| `BaseRPCAPI.get_backdoor_port` | method | (self, context) | public | `self.backdoor_port` (src/nova/baserpc.py:L79) | 1/2 | `src/nova/baserpc.py:L78–L79` |

## Dependencies

- `import oslo_messaging as messaging` (src/nova/baserpc.py:L21)
- `oslo_serialization`: imports `jsonutils` (src/nova/baserpc.py:L22)
- `import nova.conf` (src/nova/baserpc.py:L24)
- `nova`: imports `rpc` (src/nova/baserpc.py:L25)

## Side Effects

- **network**: cctxt = self.client.prepare(timeout=timeout) (src/nova/baserpc.py:L57)
- **network**: cctxt = self.client.prepare(server=host, version='1.1') (src/nova/baserpc.py:L61)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/baserpc.py:L28)
- **global-mutation**: VERSION_ALIASES = { (src/nova/baserpc.py:L42)

