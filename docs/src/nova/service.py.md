# src/nova/service.py

## Overview

This file implements the `service` module, defining 2 classs, 1 classmethod, 3 constants, 7 functions, 17 methods, 3 variables, 24 imports, 4 side effects, 1 security surface entry.

Lines: total 515, code 356, comment 83, blank 76

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `osprofiler` | variable | — | exported | not declared | — | `src/nova/service.py:L47–L47` |
| `osprofiler_initializer` | variable | — | exported | not declared | — | `src/nova/service.py:L48–L48` |
| `CONF` | constant | — | exported | not declared | — | `src/nova/service.py:L50–L50` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/service.py:L51–L51` |
| `SERVICE_MANAGERS` | constant | — | exported | not declared | — | `src/nova/service.py:L53–L57` |
| `_TrackingEndpointWrapper` | class | — | unexported | not declared | — | `src/nova/service.py:L60–L111` |
| `_TrackingEndpointWrapper.__init__` | method | (self, endpoint, tracker=None) | public | not declared | 2/3 | `src/nova/service.py:L74–L76` |
| `_TrackingEndpointWrapper.__getattr__` | method | (self, name) | public | `attr` (src/nova/service.py:L83); `_tracked` (src/nova/service.py:L111) | 3/10 | `src/nova/service.py:L78–L111` |
| `_TrackingEndpointWrapper.__getattr__._tracked` | function | (*args, **kwargs) | private | `result` (src/nova/service.py:L104) | — | `src/nova/service.py:L86–L104` |
| `_create_service_ref` | function | (this_service, context) | unexported | `service` (src/nova/service.py:L121) | 1/8 | `src/nova/service.py:L114–L121` |
| `_update_service_ref` | function | (service) | unexported | not declared | 2/10 | `src/nova/service.py:L124–L133` |
| `setup_profiler` | function | (binary, host) | exported | not declared | 3/9 | `src/nova/service.py:L136–L144` |
| `Service` | class | — | exported | not declared | — | `src/nova/service.py:L147–L496` |
| `Service.__init__` | method | (self, host, binary, topic, manager, report_interval=None, periodic_enable=None, periodic_fuzzy_delay=None, periodic_interval_max=None, topic_alt=None, *args, **kwargs) | public | not declared | 2/25 | `src/nova/service.py:L155–L185` |
| `Service.__repr__` | method | (self) | public | `"<%(cls_name)s: host=%(host)s, binary=%(binary)s, " \ "manager_class_name=%(manager)s>" % { 'cls_name': self.__class__.__name__, 'host': self.host, 'binary': self.binary, 'manager': self.manager_class` (src/nova/service.py:L188) | 1/8 | `src/nova/service.py:L187–L194` |
| `Service.start` | method | (self) | public | not declared | 8/59 | `src/nova/service.py:L196–L302` |
| `Service.__getattr__` | method | (self, key) | public | `getattr(manager, key)` (src/nova/service.py:L306) | 1/3 | `src/nova/service.py:L304–L306` |
| `Service.create` | method | (cls, host=None, binary=None, topic=None, manager=None, report_interval=None, periodic_enable=None, periodic_fuzzy_delay=None, periodic_interval_max=None, topic_alt=None) | public | `service_obj` (src/nova/service.py:L362) | 10/32 | `src/nova/service.py:L309–L362` |
| `Service.kill` | method | (self) | public | not declared | 3/7 | `src/nova/service.py:L364–L377` |
| `Service._stop_rpc_server` | method | (self, rpc_server, topic) | private | `True` (src/nova/service.py:L384); `False` (src/nova/service.py:L387) | 2/9 | `src/nova/service.py:L379–L387` |
| `Service._wait_rpc_server` | method | (self, rpc_server, topic) | private | not declared | 2/7 | `src/nova/service.py:L389–L395` |
| `Service._shutdown_rpc_server` | method | (self, rpc_server, topic) | private | not declared | 2/3 | `src/nova/service.py:L397–L399` |
| `Service._get_manager_shutdown_timeout` | method | (self) | private | `max(0, CONF.graceful_shutdown_timeout - 10)` (src/nova/service.py:L408); `CONF.manager_shutdown_timeout` (src/nova/service.py:L409) | 2/9 | `src/nova/service.py:L401–L409` |
| `Service._run_manager_graceful_shutdown` | method | (self) | private | not declared | 2/12 | `src/nova/service.py:L411–L442` |
| `Service._run_manager_graceful_shutdown._run` | function | — | private | not declared | — | `src/nova/service.py:L415–L426` |
| `Service.stop` | method | (self) | public | not declared | 4/15 | `src/nova/service.py:L444–L475` |
| `Service.periodic_tasks` | method | (self, raise_on_error=False) | public | `self.manager.periodic_tasks(ctxt, raise_on_error=raise_on_error)` (src/nova/service.py:L480) | 1/3 | `src/nova/service.py:L477–L480` |
| `Service.basic_config_check` | method | (self) | public | not declared | 2/7 | `src/nova/service.py:L482–L490` |
| `Service.reset` | method | (self) | public | not declared | 1/3 | `src/nova/service.py:L492–L496` |
| `_launcher` | variable | — | unexported | not declared | — | `src/nova/service.py:L502–L502` |
| `serve` | function | (server, workers=None, no_fork=False) | exported | not declared | 2/6 | `src/nova/service.py:L505–L511` |
| `wait` | function | — | exported | not declared | 1/2 | `src/nova/service.py:L514–L515` |
| `Service.create` | classmethod | — | public | not declared | — | `src/nova/service.py:L308–L362` |

## Dependencies

- `import functools` (src/nova/service.py:L20)
- `import inspect` (src/nova/service.py:L21)
- `import os` (src/nova/service.py:L22)
- `import os.path` (src/nova/service.py:L23)
- `import random` (src/nova/service.py:L24)
- `import sys` (src/nova/service.py:L25)
- `import threading` (src/nova/service.py:L26)
- `oslo_log`: imports `log as logging` (src/nova/service.py:L28)
- `import oslo_messaging as messaging` (src/nova/service.py:L29)
- `oslo_service`: imports `service` (src/nova/service.py:L30)
- `oslo_utils`: imports `importutils` (src/nova/service.py:L31)
- `nova`: imports `baserpc` (src/nova/service.py:L33)
- `nova`: imports `conductor` (src/nova/service.py:L34)
- `import nova.conf` (src/nova/service.py:L35)
- `nova`: imports `context` (src/nova/service.py:L36)
- `nova`: imports `exception` (src/nova/service.py:L37)
- `nova.i18n`: imports `_` (src/nova/service.py:L38)
- `nova`: imports `objects` (src/nova/service.py:L39)
- `nova.objects`: imports `base as objects_base` (src/nova/service.py:L40)
- `nova.objects`: imports `service as service_obj` (src/nova/service.py:L41)
- `nova`: imports `rpc` (src/nova/service.py:L42)
- `nova`: imports `servicegroup` (src/nova/service.py:L43)
- `nova`: imports `utils` (src/nova/service.py:L44)
- `nova`: imports `version` (src/nova/service.py:L45)

## Side Effects

- **file-io**: binary = os.path.basename(sys.argv[0]) (src/nova/service.py:L329)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/service.py:L50)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/service.py:L51)
- **global-mutation**: SERVICE_MANAGERS = { (src/nova/service.py:L53)

## Security Surface

- **entry-point** (`cli-args`): binary = os.path.basename(sys.argv[0]) (src/nova/service.py:L329)

