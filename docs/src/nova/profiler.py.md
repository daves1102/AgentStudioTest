# src/nova/profiler.py

## Overview

This file implements the `profiler` module, defining 2 classs, 1 classmethod, 1 constant, 4 functions, 3 methods, 2 variables, 3 imports, 1 side effect.

Lines: total 73, code 39, comment 16, blank 18

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `profiler` | variable | — | exported | not declared | — | `src/nova/profiler.py:L21–L21` |
| `profiler_web` | variable | — | exported | not declared | — | `src/nova/profiler.py:L22–L22` |
| `CONF` | constant | — | exported | not declared | — | `src/nova/profiler.py:L24–L24` |
| `WsgiMiddleware` | class | — | exported | not declared | — | `src/nova/profiler.py:L27–L45` |
| `WsgiMiddleware.__init__` | method | (self, application, **kwargs) | public | not declared | 1/2 | `src/nova/profiler.py:L29–L30` |
| `WsgiMiddleware.factory` | method | (cls, global_conf, **local_conf) | public | `profiler_web.WsgiMiddleware.factory(global_conf, **local_conf)` (src/nova/profiler.py:L35); `filter_` (src/nova/profiler.py:L41) | 2/6 | `src/nova/profiler.py:L33–L41` |
| `WsgiMiddleware.factory.filter_` | function | (app) | public | `cls(app, **local_conf)` (src/nova/profiler.py:L39) | — | `src/nova/profiler.py:L38–L39` |
| `WsgiMiddleware.__call__` | method | (self, request) | public | `request.get_response(self.application)` (src/nova/profiler.py:L45) | 1/2 | `src/nova/profiler.py:L44–L45` |
| `get_traced_meta` | function | — | exported | `profiler.TracedMeta` (src/nova/profiler.py:L50); `NoopMeta` (src/nova/profiler.py:L56) | 4/7 | `src/nova/profiler.py:L48–L56` |
| `get_traced_meta.NoopMeta` | class | — | public | not declared | — | `src/nova/profiler.py:L54–L55` |
| `trace_cls` | function | (name, **kwargs) | exported | `decorator` (src/nova/profiler.py:L73) | 1/3 | `src/nova/profiler.py:L59–L73` |
| `trace_cls.decorator` | function | (cls) | public | `trace_decorator(cls)` (src/nova/profiler.py:L70); `cls` (src/nova/profiler.py:L71) | — | `src/nova/profiler.py:L67–L71` |
| `WsgiMiddleware.factory` | classmethod | — | public | not declared | — | `src/nova/profiler.py:L32–L41` |

## Dependencies

- `oslo_utils`: imports `importutils` (src/nova/profiler.py:L16)
- `import webob.dec` (src/nova/profiler.py:L17)
- `import nova.conf` (src/nova/profiler.py:L19)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/profiler.py:L24)

