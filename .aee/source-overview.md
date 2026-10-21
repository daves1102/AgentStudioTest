Batch: c7e94e29eea2e3abd5797fc0759b0d98232c7830
Updated: 2026-10-21T14:13:44Z
Source folder: src/

## Totals

| Metric | Value |
|--------|-------|
| Tracked files | 2,256 |
| Source files (extractable) | 1,509 |
| OTHER files | 746 |
| UNKNOWN files | 1 |
| Total code lines (source) | 473,713 |
| Total comment lines (source) | 60,243 |
| Total blank lines (source) | 78,348 |
| Source files without `loc` | 0 |
| Change (files) vs. prev batch | +25 |
| Change (code lines) vs. prev batch | +5,739 |

## Lines of Code by Language

| Language | Files | Code | Comments | Blanks | % of Code |
|----------|------:|-----:|---------:|-------:|----------:|
| Python | 1,509 | 473,713 | 60,243 | 78,348 | 100.0% |
| **Total** | **1,509** | **473,713** | **60,243** | **78,348** | **100%** |

## Lines of Code by Component

| Component | Files | Code | Comments | Blanks | % of Code |
|-----------|------:|-----:|---------:|-------:|----------:|
| nova | 1,509 | 473,713 | 60,243 | 78,348 | 100.0% |
| **Total** | **1,509** | **473,713** | **60,243** | **78,348** | **100%** |

### Code Lines per Language by Component

| Component | Python |
|-----------|--------|
| nova | 473,713 |

## Folder Structure

Source files only, two directory levels below `src/`.

```
src/
  nova/  473,713 lines, 1509 files
    (top-level modules)  8,220 lines, 29 files
    accelerator/  346 lines, 2 files
    api/  25,263 lines, 199 files
    cmd/  3,768 lines, 12 files
    compute/  21,892 lines, 25 files
    conductor/  4,133 lines, 9 files
    conf/  8,889 lines, 48 files
    console/  677 lines, 12 files
    db/  7,663 lines, 26 files
    hacking/  903 lines, 2 files
    image/  950 lines, 2 files
    keymgr/  100 lines, 2 files
    limit/  431 lines, 4 files
    network/  4,371 lines, 6 files
    notifications/  1,736 lines, 18 files
    objects/  12,607 lines, 49 files
    pci/  2,079 lines, 7 files
    policies/  3,467 lines, 56 files
    privsep/  800 lines, 8 files
    scheduler/  6,569 lines, 41 files
    servicegroup/  220 lines, 6 files
    share/  305 lines, 2 files
    storage/  401 lines, 2 files
    tests/  317,834 lines, 846 files
    virt/  39,341 lines, 91 files
    volume/  726 lines, 2 files
    wsgi/  22 lines, 3 files
```

## Growth History

| Batch | Date | Source Files | Code Lines | Change |
|-------|------|-------------:|-----------:|-------:|
| 823b1a43 | 2026-10-16 | 2 | 346 | +346 |
| 733c7372 | 2026-10-19 | 55 | 15,434 | +15,088 |
| 868bfe40 | 2026-10-19 | 122 | 29,666 | +14,232 |
| caa20451 | 2026-10-20 | 327 | 59,300 | +29,634 |
| f56908d5 | 2026-10-20 | 433 | 98,659 | +39,359 |
| c7012ab2 | 2026-10-20 | 443 | 101,043 | +2,384 |
| 10997c0e | 2026-10-20 | 532 | 109,125 | +8,082 |
| da4f90f3 | 2026-10-21 | 1,388 | 427,885 | +318,760 |
| 624338e5 | 2026-10-21 | 1,484 | 467,974 | +40,089 |
| c7e94e29 | 2026-10-21 | 1,509 | 473,713 | +5,739 |

## Notes

- **LOC** figures come from tokei output stored in the `loc` field of `.aee/intake.jsonl`. Source files without a `loc` entry are counted in file totals but excluded from all line counts.
- **Components** were determined by: first directory below source folder.
- **UNKNOWN files**: `src/nova/tests/unit/ssl_cert/new_cert.sh`
