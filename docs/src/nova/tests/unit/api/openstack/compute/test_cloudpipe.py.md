# src/nova/tests/unit/api/openstack/compute/test_cloudpipe.py

## Overview

This file implements the `test_cloudpipe` module, defining 1 class, 2 fields, 4 methods, 1 variable, 5 imports, 1 side effect, 1 security surface entry.

Lines: total 46, code 23, comment 14, blank 9

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `project_id` | variable | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_cloudpipe.py:L23–L23` |
| `CloudpipeTestV21` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_cloudpipe.py:L26–L46` |
| `CloudpipeTestV21.cloudpipe` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_cloudpipe.py:L27–L27` |
| `CloudpipeTestV21.url` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_cloudpipe.py:L28–L28` |
| `CloudpipeTestV21.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_cloudpipe.py:L30–L33` |
| `CloudpipeTestV21.test_cloudpipe_list` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_cloudpipe.py:L35–L36` |
| `CloudpipeTestV21.test_cloudpipe_create` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_cloudpipe.py:L38–L41` |
| `CloudpipeTestV21.test_cloudpipe_configure_project` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_cloudpipe.py:L43–L46` |

## Dependencies

- `oslo_utils`: imports `uuidutils` (src/nova/tests/unit/api/openstack/compute/test_cloudpipe.py:L16)
- `webob`: imports `exc` (src/nova/tests/unit/api/openstack/compute/test_cloudpipe.py:L17)
- `nova.api.openstack.compute`: imports `cloudpipe as cloudpipe_v21` (src/nova/tests/unit/api/openstack/compute/test_cloudpipe.py:L19)
- `nova`: imports `test` (src/nova/tests/unit/api/openstack/compute/test_cloudpipe.py:L20)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/api/openstack/compute/test_cloudpipe.py:L21)

## Side Effects

- **network**: from nova.api.openstack.compute import cloudpipe as cloudpipe_v21 (src/nova/tests/unit/api/openstack/compute/test_cloudpipe.py:L19)

## Security Surface

- **sink** (`db-write`): self.assertRaises(exc.HTTPGone, self.controller.update, (src/nova/tests/unit/api/openstack/compute/test_cloudpipe.py:L45)

