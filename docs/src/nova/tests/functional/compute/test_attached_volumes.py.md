# src/nova/tests/functional/compute/test_attached_volumes.py

## Overview

This file implements the `test_attached_volumes` module, defining 1 class, 1 field, 5 methods, 4 imports.

Lines: total 152, code 82, comment 38, blank 32

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `TestAttachedVolumes` | class | — | exported | not declared | — | `src/nova/tests/functional/compute/test_attached_volumes.py:L20–L152` |
| `TestAttachedVolumes.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/compute/test_attached_volumes.py:L24–L24` |
| `TestAttachedVolumes.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/compute/test_attached_volumes.py:L26–L29` |
| `TestAttachedVolumes._get_bdm_list` | method | (self, server) | private | `[( bdm.volume_id, bdm.attachment_id) for bdm in bdms if bdm.volume_id]` (src/nova/tests/functional/compute/test_attached_volumes.py:L36) | 3/6 | `src/nova/tests/functional/compute/test_attached_volumes.py:L31–L37` |
| `TestAttachedVolumes.test_delete_stale_attachment_from_nova` | method | (self) | public | not declared | 1/17 | `src/nova/tests/functional/compute/test_attached_volumes.py:L39–L70` |
| `TestAttachedVolumes.test_delete_multiple_stale_attachment_from_nova` | method | (self) | public | not declared | 3/29 | `src/nova/tests/functional/compute/test_attached_volumes.py:L72–L115` |
| `TestAttachedVolumes.test_delete_multiple_stale_attachment_from_cinder` | method | (self) | public | not declared | 2/18 | `src/nova/tests/functional/compute/test_attached_volumes.py:L117–L152` |

## Dependencies

- `nova`: imports `context` (src/nova/tests/functional/compute/test_attached_volumes.py:L14)
- `nova`: imports `objects` (src/nova/tests/functional/compute/test_attached_volumes.py:L15)
- `nova.tests.functional`: imports `integrated_helpers` (src/nova/tests/functional/compute/test_attached_volumes.py:L16)
- `nova.tests.functional.libvirt`: imports `base` (src/nova/tests/functional/compute/test_attached_volumes.py:L17)

