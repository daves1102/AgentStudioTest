# Link Summary

## Counts

| Metric | Value |
|---|---|
| Files | 2 |
| File edges | 0 |
| Cross-component edges | 0 |
| Resolved | 0 |
| Ambiguous | 0 |
| Unresolved | 6 |
| External imports | 1 |
| Seams | 0 |

## Component Dependencies

No cross-component file edges found.

## Seams

| Kind | Count |
|---|---|
| http-endpoint | 0 |
| bus-topic | 0 |
| db-table | 0 |
| env-var | 0 |
| executable | 0 |
| native-symbol | 0 |

No cross-component seams found in `src/`. All seam kinds produced no results.

## Unresolved Imports

These imports could not be resolved to a file in the current KB — the target modules have not been extracted yet and may resolve in a later run.

| File | Line | Symbol | Reason |
|---|---|---|---|
| src/nova/accelerator/cyborg.py | 46 | nova | module-not-found |
| src/nova/accelerator/cyborg.py | 47 | nova.i18n | module-not-found |
| src/nova/accelerator/cyborg.py | 48 | nova | module-not-found |
| src/nova/accelerator/cyborg.py | 49 | nova.scheduler | module-not-found |
| src/nova/accelerator/cyborg.py | 50 | nova | module-not-found |
| src/nova/accelerator/cyborg.py | 51 | nova | module-not-found |

All 6 unresolved imports reference `nova` or `nova.*` sub-packages (i18n, scheduler). These are sibling modules within the nova project that have not yet been extracted. They are expected to resolve once the rest of the `nova` package is processed.

## Ambiguous References

None.

## Warnings

None. All KB records were usable.
