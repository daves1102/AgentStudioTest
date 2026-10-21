# src/nova/tests/unit/privsep/test_linux_net.py

## Overview

This file implements the `test_linux_net` module, defining 1 class, 11 methods, 5 imports, 18 side effects, 16 security surface entries.

Lines: total 123, code 81, comment 18, blank 24

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LinuxNetTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/privsep/test_linux_net.py:L26–L123` |
| `LinuxNetTestCase.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/privsep/test_linux_net.py:L29–L31` |
| `LinuxNetTestCase.test_device_exists` | method | (self, mock_exists, mock_execute) | public | not declared | 1/3 | `src/nova/tests/unit/privsep/test_linux_net.py:L34–L36` |
| `LinuxNetTestCase.test_set_device_mtu_default` | method | (self, mock_execute) | public | not declared | 1/4 | `src/nova/tests/unit/privsep/test_linux_net.py:L38–L42` |
| `LinuxNetTestCase.test_set_device_mtu_actual` | method | (self, mock_execute) | public | not declared | 1/6 | `src/nova/tests/unit/privsep/test_linux_net.py:L44–L50` |
| `LinuxNetTestCase.test_create_tap_dev` | method | (self, mock_enabled, mock_execute) | public | not declared | 1/7 | `src/nova/tests/unit/privsep/test_linux_net.py:L53–L60` |
| `LinuxNetTestCase.test_create_tap_skipped_when_exists` | method | (self, mock_exists, mock_execute) | public | not declared | 1/4 | `src/nova/tests/unit/privsep/test_linux_net.py:L63–L67` |
| `LinuxNetTestCase.test_create_tap_dev_mac` | method | (self, mock_set_macaddr, mock_enabled, mock_execute) | public | not declared | 1/11 | `src/nova/tests/unit/privsep/test_linux_net.py:L71–L82` |
| `LinuxNetTestCase.test_create_tap_dev_fallback_to_tunctl` | method | (self, mock_enabled, mock_execute) | public | not declared | 1/10 | `src/nova/tests/unit/privsep/test_linux_net.py:L85–L97` |
| `LinuxNetTestCase.test_create_tap_dev_multiqueue` | method | (self, mock_enabled, mock_execute) | public | not declared | 1/8 | `src/nova/tests/unit/privsep/test_linux_net.py:L100–L108` |
| `LinuxNetTestCase.test_create_tap_dev_multiqueue_tunctl_raises` | method | (self, mock_execute) | public | not declared | 1/5 | `src/nova/tests/unit/privsep/test_linux_net.py:L110–L117` |
| `LinuxNetTestCase.test_add_vlan` | method | (self, mock_execute) | public | not declared | 1/5 | `src/nova/tests/unit/privsep/test_linux_net.py:L119–L123` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/privsep/test_linux_net.py:L16)
- `oslo_concurrency`: imports `processutils` (src/nova/tests/unit/privsep/test_linux_net.py:L18)
- `import nova.privsep.linux_net` (src/nova/tests/unit/privsep/test_linux_net.py:L20)
- `nova`: imports `test` (src/nova/tests/unit/privsep/test_linux_net.py:L21)
- `nova.tests`: imports `fixtures` (src/nova/tests/unit/privsep/test_linux_net.py:L22)

## Side Effects

- **process-spawn**: import nova.privsep.linux_net (src/nova/tests/unit/privsep/test_linux_net.py:L20)
- **file-io**: @mock.patch('os.path.exists') (src/nova/tests/unit/privsep/test_linux_net.py:L33)
- **process-spawn**: nova.privsep.linux_net.device_exists('eth0') (src/nova/tests/unit/privsep/test_linux_net.py:L35)
- **process-spawn**: nova.privsep.linux_net.set_device_mtu('fake-dev', None) (src/nova/tests/unit/privsep/test_linux_net.py:L41)
- **process-spawn**: nova.privsep.linux_net.set_device_mtu('fake-dev', 1500) (src/nova/tests/unit/privsep/test_linux_net.py:L47)
- **process-spawn**: @mock.patch('nova.privsep.linux_net._set_device_enabled_inner') (src/nova/tests/unit/privsep/test_linux_net.py:L52)
- **process-spawn**: nova.privsep.linux_net.create_tap_dev('tap42') (src/nova/tests/unit/privsep/test_linux_net.py:L54)
- **file-io**: @mock.patch('os.path.exists', return_value=True) (src/nova/tests/unit/privsep/test_linux_net.py:L62)
- **process-spawn**: nova.privsep.linux_net.create_tap_dev('tap42') (src/nova/tests/unit/privsep/test_linux_net.py:L64)
- **process-spawn**: @mock.patch('nova.privsep.linux_net._set_device_enabled_inner') (src/nova/tests/unit/privsep/test_linux_net.py:L69)
- **process-spawn**: @mock.patch('nova.privsep.linux_net._set_device_macaddr_inner') (src/nova/tests/unit/privsep/test_linux_net.py:L70)
- **process-spawn**: nova.privsep.linux_net.create_tap_dev( (src/nova/tests/unit/privsep/test_linux_net.py:L73)
- **process-spawn**: @mock.patch('nova.privsep.linux_net._set_device_enabled_inner') (src/nova/tests/unit/privsep/test_linux_net.py:L84)
- **process-spawn**: nova.privsep.linux_net.create_tap_dev('tap42') (src/nova/tests/unit/privsep/test_linux_net.py:L90)
- **process-spawn**: @mock.patch('nova.privsep.linux_net._set_device_enabled_inner') (src/nova/tests/unit/privsep/test_linux_net.py:L99)
- **process-spawn**: nova.privsep.linux_net.create_tap_dev( (src/nova/tests/unit/privsep/test_linux_net.py:L101)
- **process-spawn**: nova.privsep.linux_net.create_tap_dev, (src/nova/tests/unit/privsep/test_linux_net.py:L116)
- **process-spawn**: nova.privsep.linux_net.add_vlan('eth0', 'vlan_name', 1) (src/nova/tests/unit/privsep/test_linux_net.py:L120)

## Security Surface

- **privilege** (`privsep-entrypoint`): import nova.privsep.linux_net (src/nova/tests/unit/privsep/test_linux_net.py:L20)
- **privilege** (`privsep-entrypoint`): nova.privsep.linux_net.device_exists('eth0') (src/nova/tests/unit/privsep/test_linux_net.py:L35)
- **privilege** (`privsep-entrypoint`): nova.privsep.linux_net.set_device_mtu('fake-dev', None) (src/nova/tests/unit/privsep/test_linux_net.py:L41)
- **privilege** (`privsep-entrypoint`): nova.privsep.linux_net.set_device_mtu('fake-dev', 1500) (src/nova/tests/unit/privsep/test_linux_net.py:L47)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.linux_net._set_device_enabled_inner') (src/nova/tests/unit/privsep/test_linux_net.py:L52)
- **privilege** (`privsep-entrypoint`): nova.privsep.linux_net.create_tap_dev('tap42') (src/nova/tests/unit/privsep/test_linux_net.py:L54)
- **privilege** (`privsep-entrypoint`): nova.privsep.linux_net.create_tap_dev('tap42') (src/nova/tests/unit/privsep/test_linux_net.py:L64)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.linux_net._set_device_enabled_inner') (src/nova/tests/unit/privsep/test_linux_net.py:L69)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.linux_net._set_device_macaddr_inner') (src/nova/tests/unit/privsep/test_linux_net.py:L70)
- **privilege** (`privsep-entrypoint`): nova.privsep.linux_net.create_tap_dev( (src/nova/tests/unit/privsep/test_linux_net.py:L73)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.linux_net._set_device_enabled_inner') (src/nova/tests/unit/privsep/test_linux_net.py:L84)
- **privilege** (`privsep-entrypoint`): nova.privsep.linux_net.create_tap_dev('tap42') (src/nova/tests/unit/privsep/test_linux_net.py:L90)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.linux_net._set_device_enabled_inner') (src/nova/tests/unit/privsep/test_linux_net.py:L99)
- **privilege** (`privsep-entrypoint`): nova.privsep.linux_net.create_tap_dev( (src/nova/tests/unit/privsep/test_linux_net.py:L101)
- **privilege** (`privsep-entrypoint`): nova.privsep.linux_net.create_tap_dev, (src/nova/tests/unit/privsep/test_linux_net.py:L116)
- **privilege** (`privsep-entrypoint`): nova.privsep.linux_net.add_vlan('eth0', 'vlan_name', 1) (src/nova/tests/unit/privsep/test_linux_net.py:L120)

