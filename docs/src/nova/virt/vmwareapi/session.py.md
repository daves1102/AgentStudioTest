# src/nova/virt/vmwareapi/session.py

## Overview

This file implements the `session` module, defining 3 classs, 2 constants, 12 methods, 1 property, 1 staticmethod, 9 imports, 2 side effects.

Lines: total 157, code 109, comment 26, blank 22

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/virt/vmwareapi/session.py:L30–L30` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/virt/vmwareapi/session.py:L31–L31` |
| `StableMoRefProxy` | class | — | exported | not declared | — | `src/nova/virt/vmwareapi/session.py:L34–L64` |
| `StableMoRefProxy.__init__` | method | (self, ref) | public | not declared | 1/2 | `src/nova/virt/vmwareapi/session.py:L44–L45` |
| `StableMoRefProxy.__class__` | method | (self) | public | `self.moref.__class__` (src/nova/virt/vmwareapi/session.py:L52) | 1/2 | `src/nova/virt/vmwareapi/session.py:L48–L52` |
| `StableMoRefProxy.fetch_moref` | method | (self, session) | public | not declared | 1/1 | `src/nova/virt/vmwareapi/session.py:L55–L58` |
| `StableMoRefProxy.__getattr__` | method | (self, name) | public | `getattr(self.moref, name)` (src/nova/virt/vmwareapi/session.py:L61) | 1/2 | `src/nova/virt/vmwareapi/session.py:L60–L61` |
| `StableMoRefProxy.__repr__` | method | (self) | public | `"StableMoRefProxy({!r})".format(self.moref)` (src/nova/virt/vmwareapi/session.py:L64) | 1/2 | `src/nova/virt/vmwareapi/session.py:L63–L64` |
| `MoRef` | class | — | exported | not declared | — | `src/nova/virt/vmwareapi/session.py:L67–L82` |
| `MoRef.__init__` | method | (self, closure, ref=None) | public | not declared | 2/4 | `src/nova/virt/vmwareapi/session.py:L73–L76` |
| `MoRef.fetch_moref` | method | (self, _) | public | not declared | 1/2 | `src/nova/virt/vmwareapi/session.py:L78–L79` |
| `MoRef.__repr__` | method | (self) | public | `"MoRef({!r})".format(self.moref)` (src/nova/virt/vmwareapi/session.py:L82) | 1/2 | `src/nova/virt/vmwareapi/session.py:L81–L82` |
| `VMwareAPISession` | class | — | exported | not declared | — | `src/nova/virt/vmwareapi/session.py:L85–L157` |
| `VMwareAPISession.__init__` | method | (self, host_ip=CONF.vmware.host_ip, host_port=CONF.vmware.host_port, username=CONF.vmware.host_username, password=CONF.vmware.host_password, retry_count=CONF.vmware.api_retry_count, scheme="https", cacert=CONF.vmware.ca_file, insecure=CONF.vmware.insecure, pool_size=CONF.vmware.connection_pool_size) | public | not declared | 1/21 | `src/nova/virt/vmwareapi/session.py:L90–L110` |
| `VMwareAPISession._is_vim_object` | method | (module) | private | `isinstance(module, vim.Vim)` (src/nova/virt/vmwareapi/session.py:L115) | 1/2 | `src/nova/virt/vmwareapi/session.py:L113–L115` |
| `VMwareAPISession._call_method` | method | (self, module, method, *args, **kwargs) | private | `self.invoke_api(module, method, self.vim, *args, **kwargs)` (src/nova/virt/vmwareapi/session.py:L123); `self.invoke_api(module, method, *args, **kwargs)` (src/nova/virt/vmwareapi/session.py:L125); `self._call_method(module, method, *args, **kwargs)` (src/nova/virt/vmwareapi/session.py:L151) | 9/25 | `src/nova/virt/vmwareapi/session.py:L117–L151` |
| `VMwareAPISession._wait_for_task` | method | (self, task_ref) | private | `self.wait_for_task(task_ref)` (src/nova/virt/vmwareapi/session.py:L157) | 1/2 | `src/nova/virt/vmwareapi/session.py:L153–L157` |
| `StableMoRefProxy.__class__` | property | — | private | not declared | — | `src/nova/virt/vmwareapi/session.py:L47–L52` |
| `VMwareAPISession._is_vim_object` | staticmethod | — | private | not declared | — | `src/nova/virt/vmwareapi/session.py:L112–L115` |

## Dependencies

- `import abc` (src/nova/virt/vmwareapi/session.py:L18)
- `import itertools` (src/nova/virt/vmwareapi/session.py:L19)
- `oslo_log`: imports `log as logging` (src/nova/virt/vmwareapi/session.py:L21)
- `oslo_utils`: imports `excutils` (src/nova/virt/vmwareapi/session.py:L22)
- `oslo_vmware`: imports `api` (src/nova/virt/vmwareapi/session.py:L23)
- `oslo_vmware`: imports `exceptions as vexc` (src/nova/virt/vmwareapi/session.py:L24)
- `oslo_vmware`: imports `vim` (src/nova/virt/vmwareapi/session.py:L25)
- `oslo_vmware.vim_util`: imports `get_moref_value` (src/nova/virt/vmwareapi/session.py:L26)
- `import nova.conf` (src/nova/virt/vmwareapi/session.py:L28)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/virt/vmwareapi/session.py:L30)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/virt/vmwareapi/session.py:L31)

