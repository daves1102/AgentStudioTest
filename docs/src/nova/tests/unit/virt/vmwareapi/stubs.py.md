# src/nova/tests/unit/virt/vmwareapi/stubs.py

## Overview

This file implements the `stubs` module, defining 1 constant, 8 functions, 3 imports, 1 side effect.

Lines: total 83, code 48, comment 14, blank 21

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/unit/virt/vmwareapi/stubs.py:L25–L25` |
| `fake_get_vim_object` | function | (arg) | exported | `fake.FakeVim()` (src/nova/tests/unit/virt/vmwareapi/stubs.py:L30) | 1/2 | `src/nova/tests/unit/virt/vmwareapi/stubs.py:L28–L30` |
| `fake_vim_prop` | function | (arg) | exported | `fake.get_fake_vim_object(arg)` (src/nova/tests/unit/virt/vmwareapi/stubs.py:L36) | 1/2 | `src/nova/tests/unit/virt/vmwareapi/stubs.py:L34–L36` |
| `fake_is_vim_object` | function | (module) | exported | `isinstance(module, fake.FakeVim)` (src/nova/tests/unit/virt/vmwareapi/stubs.py:L41) | 1/2 | `src/nova/tests/unit/virt/vmwareapi/stubs.py:L39–L41` |
| `fake_temp_method_exception` | function | — | exported | not declared | 1/4 | `src/nova/tests/unit/virt/vmwareapi/stubs.py:L44–L47` |
| `fake_temp_session_exception` | function | — | exported | not declared | 1/3 | `src/nova/tests/unit/virt/vmwareapi/stubs.py:L50–L52` |
| `fake_session_file_exception` | function | — | exported | not declared | 1/4 | `src/nova/tests/unit/virt/vmwareapi/stubs.py:L55–L58` |
| `fake_session_permission_exception` | function | — | exported | not declared | 1/5 | `src/nova/tests/unit/virt/vmwareapi/stubs.py:L61–L65` |
| `set_stubs` | function | (test) | exported | not declared | 1/14 | `src/nova/tests/unit/virt/vmwareapi/stubs.py:L68–L83` |

## Dependencies

- `oslo_vmware`: imports `exceptions as vexc` (src/nova/tests/unit/virt/vmwareapi/stubs.py:L20)
- `import nova.conf` (src/nova/tests/unit/virt/vmwareapi/stubs.py:L22)
- `nova.tests.unit.virt.vmwareapi`: imports `fake` (src/nova/tests/unit/virt/vmwareapi/stubs.py:L23)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/tests/unit/virt/vmwareapi/stubs.py:L25)

