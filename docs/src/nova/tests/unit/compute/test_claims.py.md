# src/nova/tests/unit/compute/test_claims.py

## Overview

This file implements the `test_claims` module, defining 5 classs, 4 fields, 2 functions, 28 methods, 1 variable, 10 imports, 3 security surface entries.

Lines: total 426, code 354, comment 16, blank 56

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `_NODENAME` | variable | — | unexported | not declared | — | `src/nova/tests/unit/compute/test_claims.py:L31–L31` |
| `FakeResourceHandler` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_claims.py:L34–L41` |
| `FakeResourceHandler.test_called` | field | — | public | not declared | — | `src/nova/tests/unit/compute/test_claims.py:L35–L35` |
| `FakeResourceHandler.usage_is_instance` | field | — | public | not declared | — | `src/nova/tests/unit/compute/test_claims.py:L36–L36` |
| `FakeResourceHandler.test_resources` | method | (self, usage, limits) | public | `[]` (src/nova/tests/unit/compute/test_claims.py:L41) | 1/4 | `src/nova/tests/unit/compute/test_claims.py:L38–L41` |
| `DummyTracker` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_claims.py:L44–L64` |
| `DummyTracker.icalled` | field | — | public | not declared | — | `src/nova/tests/unit/compute/test_claims.py:L45–L45` |
| `DummyTracker.rcalled` | field | — | public | not declared | — | `src/nova/tests/unit/compute/test_claims.py:L46–L46` |
| `DummyTracker.__init__` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_claims.py:L48–L49` |
| `DummyTracker.abort_instance_claim` | method | (self, *args, **kwargs) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_claims.py:L51–L52` |
| `DummyTracker.drop_move_claim` | method | (self, *args, **kwargs) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_claims.py:L54–L55` |
| `DummyTracker.new_pci_tracker` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_claims.py:L57–L64` |
| `ClaimTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_claims.py:L67–L321` |
| `ClaimTestCase.setUp` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/compute/test_claims.py:L69–L77` |
| `ClaimTestCase._claim` | method | (self, limits=None, requests=None, **kwargs) | private | `get_claim()` (src/nova/tests/unit/compute/test_claims.py:L102) | 4/19 | `src/nova/tests/unit/compute/test_claims.py:L79–L102` |
| `ClaimTestCase._claim.get_claim` | function | (mock_extra_get) | public | `claims.Claim(self.context, instance, _NODENAME, self.tracker, self.compute_node, requests, limits=limits)` (src/nova/tests/unit/compute/test_claims.py:L99) | — | `src/nova/tests/unit/compute/test_claims.py:L98–L101` |
| `ClaimTestCase._fake_instance` | method | (self, **kwargs) | private | `fake_instance.fake_instance_obj(self.context, **instance)` (src/nova/tests/unit/compute/test_claims.py:L115) | 1/12 | `src/nova/tests/unit/compute/test_claims.py:L104–L115` |
| `ClaimTestCase._fake_flavor` | method | (self, **kwargs) | private | `objects.Flavor(**flavor)` (src/nova/tests/unit/compute/test_claims.py:L127) | 1/11 | `src/nova/tests/unit/compute/test_claims.py:L117–L127` |
| `ClaimTestCase._fake_compute_node` | method | (self, values=None) | private | `objects.ComputeNode(**compute_node)` (src/nova/tests/unit/compute/test_claims.py:L163) | 2/35 | `src/nova/tests/unit/compute/test_claims.py:L129–L163` |
| `ClaimTestCase.test_pci_pass` | method | (self, mock_pci_supports_requests) | public | not declared | 1/7 | `src/nova/tests/unit/compute/test_claims.py:L167–L173` |
| `ClaimTestCase.test_pci_fail` | method | (self, mock_pci_supports_requests) | public | not declared | 1/10 | `src/nova/tests/unit/compute/test_claims.py:L177–L186` |
| `ClaimTestCase.test_pci_pass_no_requests` | method | (self, mock_pci_supports_requests) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_claims.py:L189–L191` |
| `ClaimTestCase.test_numa_topology_no_limit` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_claims.py:L193–L197` |
| `ClaimTestCase.test_numa_topology_fails` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/compute/test_claims.py:L199–L209` |
| `ClaimTestCase.test_numa_topology_passes` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_claims.py:L211–L218` |
| `ClaimTestCase.test_numa_topology_with_pci` | method | (self, mock_get_by_instance) | public | not declared | 1/20 | `src/nova/tests/unit/compute/test_claims.py:L222–L243` |
| `ClaimTestCase.test_numa_topology_with_pci_fail` | method | (self, mock_get_by_instance) | public | not declared | 1/32 | `src/nova/tests/unit/compute/test_claims.py:L247–L281` |
| `ClaimTestCase.test_numa_topology_with_pci_no_numa_info` | method | (self, mock_get_by_instance) | public | not declared | 1/20 | `src/nova/tests/unit/compute/test_claims.py:L285–L307` |
| `ClaimTestCase.test_abort` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_claims.py:L309–L311` |
| `ClaimTestCase._abort` | method | (self) | private | `claim` (src/nova/tests/unit/compute/test_claims.py:L321) | 2/8 | `src/nova/tests/unit/compute/test_claims.py:L313–L321` |
| `MoveClaimTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_claims.py:L324–L370` |
| `MoveClaimTestCase._claim` | method | (self, limits=None, requests=None, image_meta=None, **kwargs) | private | `get_claim()` (src/nova/tests/unit/compute/test_claims.py:L355) | 5/24 | `src/nova/tests/unit/compute/test_claims.py:L326–L355` |
| `MoveClaimTestCase._claim.get_claim` | function | (mock_extra_get, mock_numa_get) | public | `claims.MoveClaim( self.context, self.instance, _NODENAME, flavor, image_meta, self.tracker, self.compute_node, requests, objects.Migration(migration_type='migration'), limits=limits)` (src/nova/tests/unit/compute/test_claims.py:L351) | — | `src/nova/tests/unit/compute/test_claims.py:L350–L354` |
| `MoveClaimTestCase.test_abort` | method | (self, mock_drop) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_claims.py:L358–L361` |
| `MoveClaimTestCase.test_image_meta` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_claims.py:L363–L365` |
| `MoveClaimTestCase.test_image_meta_object_passed` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_claims.py:L367–L370` |
| `LiveMigrationClaimTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_claims.py:L373–L426` |
| `LiveMigrationClaimTestCase.test_live_migration_page_size` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/compute/test_claims.py:L375–L393` |
| `LiveMigrationClaimTestCase.test_claim_fails_page_size_not_called` | method | (self) | public | not declared | 1/21 | `src/nova/tests/unit/compute/test_claims.py:L395–L417` |
| `LiveMigrationClaimTestCase.test_live_migration_no_instance_numa_topology` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_claims.py:L419–L426` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/compute/test_claims.py:L18)
- `import uuid` (src/nova/tests/unit/compute/test_claims.py:L19)
- `nova.compute`: imports `claims` (src/nova/tests/unit/compute/test_claims.py:L22)
- `nova`: imports `context` (src/nova/tests/unit/compute/test_claims.py:L23)
- `nova`: imports `exception` (src/nova/tests/unit/compute/test_claims.py:L24)
- `nova`: imports `objects` (src/nova/tests/unit/compute/test_claims.py:L25)
- `nova.pci`: imports `manager as pci_manager` (src/nova/tests/unit/compute/test_claims.py:L26)
- `nova`: imports `test` (src/nova/tests/unit/compute/test_claims.py:L27)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/compute/test_claims.py:L28)
- `nova.tests.unit.pci`: imports `fakes as pci_fakes` (src/nova/tests/unit/compute/test_claims.py:L29)

## Security Surface

- **sink** (`db-write`): instance.update(**kwargs) (src/nova/tests/unit/compute/test_claims.py:L114)
- **sink** (`db-write`): flavor.update(**kwargs) (src/nova/tests/unit/compute/test_claims.py:L126)
- **sink** (`db-write`): compute_node.update(values) (src/nova/tests/unit/compute/test_claims.py:L162)

