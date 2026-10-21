# src/nova/tests/unit/objects/test_numa.py

## Overview

This file implements the `test_numa` module, defining 9 classs, 21 methods, 1 variable, 5 imports.

Lines: total 455, code 376, comment 18, blank 61

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `fake_obj_numa` | variable | — | exported | not declared | — | `src/nova/tests/unit/objects/test_numa.py:L20–L40` |
| `_TestNUMACell` | class | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_numa.py:L43–L371` |
| `_TestNUMACell.test_free_cpus` | method | (self) | public | not declared | 1/23 | `src/nova/tests/unit/objects/test_numa.py:L45–L68` |
| `_TestNUMACell.test_pinning_logic` | method | (self) | public | not declared | 1/29 | `src/nova/tests/unit/objects/test_numa.py:L70–L102` |
| `_TestNUMACell.test_pinning_with_siblings` | method | (self) | public | not declared | 1/27 | `src/nova/tests/unit/objects/test_numa.py:L104–L131` |
| `_TestNUMACell.test_pinning_with_siblings_no_host_siblings` | method | (self) | public | not declared | 1/22 | `src/nova/tests/unit/objects/test_numa.py:L133–L155` |
| `_TestNUMACell.test_can_fit_pagesize` | method | (self) | public | not declared | 1/26 | `src/nova/tests/unit/objects/test_numa.py:L157–L186` |
| `_TestNUMACell.test_can_fit_pagesize_oversubscription` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/objects/test_numa.py:L188–L214` |
| `_TestNUMACell.test_default_behavior` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/objects/test_numa.py:L216–L218` |
| `_TestNUMACell.test_equivalent` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/objects/test_numa.py:L220–L237` |
| `_TestNUMACell.test_not_equivalent` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/objects/test_numa.py:L239–L256` |
| `_TestNUMACell.test_not_equivalent_missing_a` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/objects/test_numa.py:L258–L274` |
| `_TestNUMACell.test_not_equivalent_missing_b` | method | (self) | public | not declared | 1/17 | `src/nova/tests/unit/objects/test_numa.py:L276–L292` |
| `_TestNUMACell.test_equivalent_with_pages` | method | (self) | public | not declared | 1/22 | `src/nova/tests/unit/objects/test_numa.py:L294–L315` |
| `_TestNUMACell.test_not_equivalent_with_pages` | method | (self) | public | not declared | 1/22 | `src/nova/tests/unit/objects/test_numa.py:L317–L338` |
| `_TestNUMACell.test_obj_make_compatible` | method | (self) | public | not declared | 1/28 | `src/nova/tests/unit/objects/test_numa.py:L340–L371` |
| `TestNUMACell` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_numa.py:L374–L375` |
| `TestNUMACellRemote` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_numa.py:L378–L379` |
| `_TestNUMAPagesTopology` | class | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_numa.py:L382–L419` |
| `_TestNUMAPagesTopology.test_wipe` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_numa.py:L384–L392` |
| `_TestNUMAPagesTopology.test_equivalent` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_numa.py:L394–L397` |
| `_TestNUMAPagesTopology.test_not_equivalent` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_numa.py:L399–L402` |
| `_TestNUMAPagesTopology.test_not_equivalent_missing_a` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_numa.py:L404–L407` |
| `_TestNUMAPagesTopology.test_not_equivalent_missing_b` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_numa.py:L409–L412` |
| `_TestNUMAPagesTopology.test_reserved_property_not_set` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_numa.py:L414–L419` |
| `TestNUMAPagesTopology` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_numa.py:L422–L423` |
| `TestNUMAPagesTopologyRemote` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_numa.py:L426–L427` |
| `_TestNUMATopologyLimits` | class | — | unexported | not declared | — | `src/nova/tests/unit/objects/test_numa.py:L430–L447` |
| `_TestNUMATopologyLimits.test_obj_make_compatible` | method | (self) | public | not declared | 1/14 | `src/nova/tests/unit/objects/test_numa.py:L432–L447` |
| `TestNUMA` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_numa.py:L450–L451` |
| `TestNUMARemote` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_numa.py:L454–L455` |

## Dependencies

- `oslo_versionedobjects`: imports `base as ovo_base` (src/nova/tests/unit/objects/test_numa.py:L13)
- `import testtools` (src/nova/tests/unit/objects/test_numa.py:L14)
- `nova`: imports `exception` (src/nova/tests/unit/objects/test_numa.py:L16)
- `nova`: imports `objects` (src/nova/tests/unit/objects/test_numa.py:L17)
- `nova.tests.unit.objects`: imports `test_objects` (src/nova/tests/unit/objects/test_numa.py:L18)

