# src/nova/tests/functional/libvirt/integrated_helpers.py

## Overview

This file implements the `integrated_helpers` module, defining 1 class, 2 constants, 1 field, 2 methods, 4 imports, 2 side effects.

Lines: total 47, code 27, comment 11, blank 9

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/functional/libvirt/integrated_helpers.py:L20–L20` |
| `LibvirtProviderUsageBaseTestCase` | class | — | exported | not declared | — | `src/nova/tests/functional/libvirt/integrated_helpers.py:L23–L47` |
| `LibvirtProviderUsageBaseTestCase.compute_driver` | field | — | public | not declared | — | `src/nova/tests/functional/libvirt/integrated_helpers.py:L28–L28` |
| `LibvirtProviderUsageBaseTestCase.STUB_INIT_HOST` | constant | — | public | not declared | — | `src/nova/tests/functional/libvirt/integrated_helpers.py:L30–L30` |
| `LibvirtProviderUsageBaseTestCase.setUp` | method | (self) | public | not declared | 2/11 | `src/nova/tests/functional/libvirt/integrated_helpers.py:L32–L42` |
| `LibvirtProviderUsageBaseTestCase.start_compute` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/libvirt/integrated_helpers.py:L44–L47` |

## Dependencies

- `import fixtures` (src/nova/tests/functional/libvirt/integrated_helpers.py:L13)
- `nova`: imports `conf` (src/nova/tests/functional/libvirt/integrated_helpers.py:L15)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/functional/libvirt/integrated_helpers.py:L16)
- `nova.tests.functional`: imports `integrated_helpers` (src/nova/tests/functional/libvirt/integrated_helpers.py:L17)

## Side Effects

- **global-mutation**: CONF = conf.CONF (src/nova/tests/functional/libvirt/integrated_helpers.py:L20)
- **global-mutation**: STUB_INIT_HOST = True (src/nova/tests/functional/libvirt/integrated_helpers.py:L30)

