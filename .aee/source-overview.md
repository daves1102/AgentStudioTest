Batch: 5d852b84501329a923eca438cd35235c69d2ce8c
Updated: 2026-11-12T17:55:58Z
Source folder: src/aurora/

## Totals

| Metric | Value |
|--------|------:|
| Tracked files | 223 |
| Source files (extractable) | 198 |
| OTHER files | 24 |
| UNKNOWN files | 1 |
| Total code lines (source) | 6,746 |
| Total comment lines (source) | 1,579 |
| Total blank lines (source) | 1,621 |
| Source files without `loc` | 0 |
| Change (files) vs. prev batch | +198 |
| Change (code lines) vs. prev batch | +6,746 |

## Lines of Code by Language

| Language | Files | Code | Comments | Blanks | % of Code |
|----------|------:|-----:|---------:|-------:|----------:|
| C | 58 | 2,611 | 511 | 428 | 38.7% |
| C++ | 50 | 1,737 | 452 | 398 | 25.7% |
| Java | 52 | 1,267 | 516 | 455 | 18.8% |
| Go | 18 | 753 | 61 | 182 | 11.2% |
| Python | 17 | 326 | 32 | 143 | 4.8% |
| JavaScript | 3 | 52 | 7 | 15 | 0.8% |
| **Total** | **198** | **6,746** | **1,579** | **1,621** | **100%** |

## Lines of Code by Component

| Component | Files | Code | Comments | Blanks | % of Code |
|-----------|------:|-----:|---------:|-------:|----------:|
| aurora-network | 56 | 2,582 | 508 | 425 | 38.3% |
| aurora-storage | 50 | 1,737 | 452 | 398 | 25.7% |
| aurora-identity | 52 | 1,267 | 516 | 455 | 18.8% |
| aurora-compute | 18 | 753 | 61 | 182 | 11.2% |
| aurora-portal | 17 | 326 | 32 | 143 | 4.8% |
| aurora-cli | 3 | 52 | 7 | 15 | 0.8% |
| third_party | 2 | 29 | 3 | 3 | 0.4% |
| **Total** | **198** | **6,746** | **1,579** | **1,621** | **100%** |

### Code Lines per Language by Component

| Component | C | C++ | Java | Go | Python | JavaScript |
|-----------|--:|----:|-----:|---:|-------:|-----------:|
| aurora-network | 2,582 | 0 | 0 | 0 | 0 | 0 |
| aurora-storage | 0 | 1,737 | 0 | 0 | 0 | 0 |
| aurora-identity | 0 | 0 | 1,267 | 0 | 0 | 0 |
| aurora-compute | 0 | 0 | 0 | 753 | 0 | 0 |
| aurora-portal | 0 | 0 | 0 | 0 | 326 | 0 |
| aurora-cli | 0 | 0 | 0 | 0 | 0 | 52 |
| third_party | 29 | 0 | 0 | 0 | 0 | 0 |

## Folder Structure

Source files only, two directory levels below `src/aurora/`.

```
src/aurora/
  aurora-cli/  52 lines, 3 files
    bin/  17 lines, 1 files
    src/  35 lines, 2 files
  aurora-compute/  753 lines, 18 files
    api/  67 lines, 3 files
    lifecycle/  30 lines, 1 files
    scheduler/  34 lines, 1 files
    services/  622 lines, 13 files
  aurora-identity/  1,267 lines, 52 files
    src/  1,267 lines, 52 files
  aurora-network/  2,582 lines, 56 files
    src/  2,582 lines, 56 files
  aurora-portal/  326 lines, 17 files
    aurora_portal/  315 lines, 16 files
    tests/  11 lines, 1 files
  aurora-storage/  1,737 lines, 50 files
    src/  1,737 lines, 50 files
  third_party/  29 lines, 2 files
    regex-engine/  11 lines, 1 files
    sm-crypto/  18 lines, 1 files
```

## Growth History

| Batch | Date | Source Files | Code Lines | Change |
|-------|------|-------------:|-----------:|-------:|
| 5d852b84 | 2026-11-12 | 198 | 6,746 | +6,746 |

## Notes

- **LOC** figures come from tokei output stored in the `loc` field of `.aee/intake.jsonl`. Source files without a `loc` entry are counted in file totals but excluded from all line counts.
- **Components** come from `.aee/components.json`.
- **UNKNOWN files**: `src/aurora/VERSION`
