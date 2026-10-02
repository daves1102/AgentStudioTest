# Link Summary

**Run date:** 2026-10-02  
**Source root:** `src/`  
**Tool:** `src/tools/seam_index.py`

## Counts

| Category | Count |
|---|---|
| Resolved references | 5 (all stdlib, all intra-component) |
| Ambiguous references | 0 |
| Unresolved references | 0 |
| Cross-component seams | 0 |

## Cross-Component Seams

No cross-component seams were found. The seam_index tool returned an empty result.

**Expected full interface surface:** 9 seams across 6 components.  
**Delivered:** 1 component (`tools`) with 1 source file (`src/tools/seam_index.py`). The delivery is partial — files from the remaining 5 components have not yet arrived.

### Join-Key Categories — Results

All join-key categories produced zero cross-component hits. The seam_index tool searches for the following literal patterns; none appear across two or more components because only one component is present:

| Category | Result |
|---|---|
| HTTP endpoints | No hits |
| Bus topics | No hits |
| Database tables | No hits |
| Environment variables | No hits |
| JSON fields | No hits |
| Executables | No hits |
| Subcommands | No hits |
| Native symbols | No hits |

## Resolved References (secondary Python pass)

The KB record for `src/tools/seam_index.py` lists 5 explicit imports, all resolved to Python stdlib — no cross-component references:

| Symbol | Kind | From | From Line | To |
|---|---|---|---|---|
| `json` | import | src/tools/seam_index.py | 11 | stdlib |
| `os` | import | src/tools/seam_index.py | 12 | stdlib |
| `re` | import | src/tools/seam_index.py | 13 | stdlib |
| `sys` | import | src/tools/seam_index.py | 14 | stdlib |
| `defaultdict` | import (from collections) | src/tools/seam_index.py | 15 | stdlib |

## Open Ends

All potential seam partners are one-sided: the `tools` component has arrived, but none of the other 5 expected components (C, C++, Java, Go, JavaScript) have been delivered yet. These open ends may resolve in future runs when the remaining source files arrive.

## Unresolved References for Human Review

None — all explicit imports in the delivered Python file resolve to stdlib.
