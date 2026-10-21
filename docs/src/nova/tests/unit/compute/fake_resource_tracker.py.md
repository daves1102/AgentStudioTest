# src/nova/tests/unit/compute/fake_resource_tracker.py

## Overview

This file implements the `fake_resource_tracker` module, defining 2 classs, 2 methods, 2 imports, 1 security surface entry.

Lines: total 34, code 12, comment 14, blank 8

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `FakeResourceTracker` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/fake_resource_tracker.py:L22–L26` |
| `FakeResourceTracker._update` | method | (self, context, compute_node, startup=False) | private | not declared | 1/2 | `src/nova/tests/unit/compute/fake_resource_tracker.py:L25–L26` |
| `RTMockMixin` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/fake_resource_tracker.py:L29–L34` |
| `RTMockMixin._mock_rt` | method | (self, **kwargs) | private | `self.useFixture(fixtures.MockPatchObject( self.compute, 'rt', **kwargs)).mock` (src/nova/tests/unit/compute/fake_resource_tracker.py:L33) | 2/5 | `src/nova/tests/unit/compute/fake_resource_tracker.py:L30–L34` |

## Dependencies

- `import fixtures` (src/nova/tests/unit/compute/fake_resource_tracker.py:L16)
- `nova.compute`: imports `resource_tracker` (src/nova/tests/unit/compute/fake_resource_tracker.py:L19)

## Security Surface

- **sink** (`db-write`): kwargs.update({'autospec': False}) (src/nova/tests/unit/compute/fake_resource_tracker.py:L32)

