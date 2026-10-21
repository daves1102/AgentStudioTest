# src/nova/tests/fixtures/conf.py

## Overview

This file implements the `conf` module, defining 1 class, 1 method, 6 imports, 1 security surface entry.

Lines: total 83, code 34, comment 34, blank 15

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ConfFixture` | class | — | exported | not declared | — | `src/nova/tests/fixtures/conf.py:L26–L83` |
| `ConfFixture.setUp` | method | (self) | public | not declared | 1/26 | `src/nova/tests/fixtures/conf.py:L29–L83` |

## Dependencies

- `oslo_config`: imports `fixture as config_fixture` (src/nova/tests/fixtures/conf.py:L17)
- `oslo_policy`: imports `opts as policy_opts` (src/nova/tests/fixtures/conf.py:L18)
- `nova.conf`: imports `devices` (src/nova/tests/fixtures/conf.py:L20)
- `nova.conf`: imports `neutron` (src/nova/tests/fixtures/conf.py:L21)
- `nova.conf`: imports `paths` (src/nova/tests/fixtures/conf.py:L22)
- `nova`: imports `config` (src/nova/tests/fixtures/conf.py:L23)

## Security Surface

- **privilege** (`crypto-key`): 'nova.keymgr.conf_key_mgr.ConfKeyManager', (src/nova/tests/fixtures/conf.py:L48)

