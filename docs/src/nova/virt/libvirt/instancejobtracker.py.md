# src/nova/virt/libvirt/instancejobtracker.py

## Overview

This file implements the `instancejobtracker` module, defining 1 class, 1 constant, 4 methods, 5 imports, 3 side effects.

Lines: total 93, code 57, comment 17, blank 19

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/instancejobtracker.py:L24–L24` |
| `InstanceJobTracker` | class | — | exported | not declared | — | `src/nova/virt/libvirt/instancejobtracker.py:L27–L93` |
| `InstanceJobTracker.__init__` | method | (self) | public | not declared | 1/2 | `src/nova/virt/libvirt/instancejobtracker.py:L28–L29` |
| `InstanceJobTracker.add_job` | method | (self, instance, pid) | public | not declared | 1/2 | `src/nova/virt/libvirt/instancejobtracker.py:L31–L42` |
| `InstanceJobTracker.remove_job` | method | (self, instance, pid) | public | not declared | 4/6 | `src/nova/virt/libvirt/instancejobtracker.py:L44–L58` |
| `InstanceJobTracker.terminate_jobs` | method | (self, instance) | public | not declared | 6/22 | `src/nova/virt/libvirt/instancejobtracker.py:L60–L93` |

## Dependencies

- `import collections` (src/nova/virt/libvirt/instancejobtracker.py:L16)
- `import errno` (src/nova/virt/libvirt/instancejobtracker.py:L17)
- `import os` (src/nova/virt/libvirt/instancejobtracker.py:L18)
- `import signal` (src/nova/virt/libvirt/instancejobtracker.py:L19)
- `oslo_log`: imports `log as logging` (src/nova/virt/libvirt/instancejobtracker.py:L21)

## Side Effects

- **syscall**: os.kill(pid, signal.SIGKILL) (src/nova/virt/libvirt/instancejobtracker.py:L72)
- **syscall**: os.kill(pid, 0) (src/nova/virt/libvirt/instancejobtracker.py:L82)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/virt/libvirt/instancejobtracker.py:L24)

