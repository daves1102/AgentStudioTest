# src/nova/tests/unit/api/openstack/compute/test_cloudpipe_update.py

## Overview

This file implements the `test_cloudpipe_update` module, defining 1 class, 2 methods, 4 imports, 1 side effect, 1 security surface entry.

Lines: total 32, code 13, comment 13, blank 6

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CloudpipeUpdateTestV21` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_cloudpipe_update.py:L22–L32` |
| `CloudpipeUpdateTestV21.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_cloudpipe_update.py:L24–L27` |
| `CloudpipeUpdateTestV21.test_cloudpipe_configure_project` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_cloudpipe_update.py:L29–L32` |

## Dependencies

- `import webob` (src/nova/tests/unit/api/openstack/compute/test_cloudpipe_update.py:L15)
- `nova.api.openstack.compute`: imports `cloudpipe as clup_v21` (src/nova/tests/unit/api/openstack/compute/test_cloudpipe_update.py:L17)
- `nova`: imports `test` (src/nova/tests/unit/api/openstack/compute/test_cloudpipe_update.py:L18)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/api/openstack/compute/test_cloudpipe_update.py:L19)

## Side Effects

- **network**: from nova.api.openstack.compute import cloudpipe as clup_v21 (src/nova/tests/unit/api/openstack/compute/test_cloudpipe_update.py:L17)

## Security Surface

- **sink** (`db-write`): self.assertRaises(webob.exc.HTTPGone, self.controller.update, (src/nova/tests/unit/api/openstack/compute/test_cloudpipe_update.py:L31)

