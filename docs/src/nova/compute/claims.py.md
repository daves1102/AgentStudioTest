# src/nova/compute/claims.py

## Overview

This file implements the `claims` module, defining 3 classs, 1 constant, 15 methods, 2 propertys, 5 imports, 1 side effect.

Lines: total 241, code 174, comment 27, blank 40

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/compute/claims.py:L28–L28` |
| `NopClaim` | class | — | exported | not declared | — | `src/nova/compute/claims.py:L31–L46` |
| `NopClaim.__init__` | method | (self, *args, **kwargs) | public | not declared | 1/3 | `src/nova/compute/claims.py:L34–L36` |
| `NopClaim.__enter__` | method | (self) | public | `self` (src/nova/compute/claims.py:L39) | 1/2 | `src/nova/compute/claims.py:L38–L39` |
| `NopClaim.__exit__` | method | (self, exc_type, exc_val, exc_tb) | public | not declared | 2/3 | `src/nova/compute/claims.py:L41–L43` |
| `NopClaim.abort` | method | (self) | public | not declared | 1/2 | `src/nova/compute/claims.py:L45–L46` |
| `Claim` | class | — | exported | not declared | — | `src/nova/compute/claims.py:L49–L168` |
| `Claim.__init__` | method | (self, context, instance, nodename, tracker, compute_node, pci_requests, migration=None, limits=None) | public | not declared | 1/12 | `src/nova/compute/claims.py:L60–L75` |
| `Claim.numa_topology` | method | (self) | public | `self.instance.numa_topology` (src/nova/compute/claims.py:L79) | 1/2 | `src/nova/compute/claims.py:L78–L79` |
| `Claim.abort` | method | (self) | public | not declared | 1/4 | `src/nova/compute/claims.py:L81–L87` |
| `Claim._claim_test` | method | (self, compute_node, limits=None) | private | not declared | 6/16 | `src/nova/compute/claims.py:L89–L122` |
| `Claim._test_pci` | method | (self) | private | `_('Claim pci failed')` (src/nova/compute/claims.py:L135) | 3/9 | `src/nova/compute/claims.py:L124–L135` |
| `Claim._test_numa_topology` | method | (self, compute_node, limit) | private | `(_("Requested instance NUMA topology together with " "requested PCI devices cannot fit the given " "host NUMA topology"))` (src/nova/compute/claims.py:L161); `(_("Requested instance NUMA topology cannot fit " "the given host NUMA topology"))` (src/nova/compute/claims.py:L165) | 7/27 | `src/nova/compute/claims.py:L137–L168` |
| `MoveClaim` | class | — | exported | not declared | — | `src/nova/compute/claims.py:L171–L241` |
| `MoveClaim.__init__` | method | (self, context, instance, nodename, flavor, image_meta, tracker, compute_node, pci_requests, migration, limits=None) | public | not declared | 2/13 | `src/nova/compute/claims.py:L177–L190` |
| `MoveClaim.numa_topology` | method | (self) | public | `hardware.numa_get_constraints(self.flavor, self.image_meta)` (src/nova/compute/claims.py:L194) | 1/2 | `src/nova/compute/claims.py:L193–L194` |
| `MoveClaim.abort` | method | (self) | public | not declared | 1/7 | `src/nova/compute/claims.py:L196–L205` |
| `MoveClaim._test_live_migration_page_size` | method | (self) | private | `(_('Requested page size is different from current ' 'page size.'))` (src/nova/compute/claims.py:L227) | 4/7 | `src/nova/compute/claims.py:L207–L228` |
| `MoveClaim._test_numa_topology` | method | (self, resources, limit) | private | `numa_test_failure` (src/nova/compute/claims.py:L240); `self._test_live_migration_page_size()` (src/nova/compute/claims.py:L241) | 2/6 | `src/nova/compute/claims.py:L230–L241` |
| `Claim.numa_topology` | property | — | public | not declared | — | `src/nova/compute/claims.py:L77–L79` |
| `MoveClaim.numa_topology` | property | — | public | not declared | — | `src/nova/compute/claims.py:L192–L194` |

## Dependencies

- `oslo_log`: imports `log as logging` (src/nova/compute/claims.py:L20)
- `nova`: imports `exception` (src/nova/compute/claims.py:L22)
- `nova.i18n`: imports `_` (src/nova/compute/claims.py:L23)
- `nova`: imports `objects` (src/nova/compute/claims.py:L24)
- `nova.virt`: imports `hardware` (src/nova/compute/claims.py:L25)

## Side Effects

- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/compute/claims.py:L28)

