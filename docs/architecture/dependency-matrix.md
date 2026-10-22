# Component Dependency Matrix

_Regenerated from batch: `c7e94e29eea2e3abd5797fc0759b0d98232c7830` — 2026-10-22 (component synthesis updated)_

## N×N Dependency Matrix

Rows are the referencing component; columns are the providing component. Cell value = sum of resolved reference counts over Link Graph `fileEdges` for that `(fromComponent, toComponent)` pair. Diagonal cells (intra-component) are marked `—`: the Link Summary (`.aee/link-summary.md`) reports aggregate intra-component edges but does not break them down per component (total intra-component resolved = 18,812 − 15,256 cross-component = 3,556; not traceable to individual components from the available summary). Bold cells indicate a confirmed taint chain hop crossing that component pair; no confirmed chains exist so no cells are bolded.

Column abbreviations: **acc**=accelerator, **api**=api, **cmd**=cmd, **comp**=compute, **cond**=conductor, **conf**=conf, **cons**=console, **db**=db, **hack**=hacking, **img**=image, **key**=keymgr, **lim**=limit, **net**=network, **ntf**=notifications, **nova**=nova, **obj**=objects, **pci**=pci, **pol**=policies, **prv**=privsep, **sch**=scheduler, **sg**=servicegroup, **shr**=share, **stor**=storage, **virt**=virt, **vol**=volume, **wsgi**=wsgi, **tst**=tests, **tf**=tests-fixtures, **tfn**=tests-functional, **tu**=tests-unit

| From ↓ \ To → | acc | api | cmd | comp | cond | conf | cons | db | hack | img | key | lim | net | ntf | nova | obj | pci | pol | prv | sch | sg | shr | stor | virt | vol | wsgi | tst | tf | tfn | tu |
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
| **accelerator** | — | | | | | | | | | | | | | | 10 | 2 | | | | 2 | | | | | | | | | | |
| **api** | | — | | 101 | 2 | 21 | | | | 8 | | 6 | 34 | 2 | 277 | 108 | 2 | 57 | | 2 | 6 | 2 | | 8 | 6 | | | | | |
| **cmd** | | | — | 9 | 3 | 21 | 4 | 15 | | | | 2 | 5 | | 121 | 66 | | 2 | | 7 | | | | 6 | 4 | | | | | |
| **compute** | 7 | | | — | 4 | 14 | | 13 | | 4 | | 7 | 15 | 60 | 323 | 212 | 13 | 2 | | 16 | 2 | 2 | | 45 | 4 | | | | | |
| **conductor** | 3 | | | 35 | — | 4 | | | | 6 | | 4 | 7 | 2 | 67 | 68 | | | | 27 | 2 | | | | 4 | | | | | |
| **conf** | | | | | | — | | | | | | | | | | | | | | | | | | 1 | | | | | | |
| **console** | | | | 2 | | 2 | — | | | | | | | | 27 | 3 | | | | | | | | | | | | | | |
| **db** | | | | 2 | | 2 | | — | | | | | | | 58 | 4 | | | | | | | | | | | | | | |
| **hacking** | | | | | | | | | — | | | | | | | | | | | | | | | | | | | | | |
| **image** | | | | | | 3 | | | | — | | | | | 22 | 4 | | | | | | | 2 | | | | | | | |
| **keymgr** | | | | | | 1 | | | | | — | | | | 5 | | | | | | | | | | | | | | | |
| **limit** | | | | | | 3 | | | | | | — | | | 9 | 6 | | | | 4 | | | | | | | | | | |
| **network** | 4 | | | 2 | | 1 | | | | | | | — | | 85 | 20 | 6 | 1 | | | | | | | | | | | | |
| **notifications** | | | | | | 2 | | | | 2 | | | | — | 10 | 125 | | | | | | | | | | | | | | |
| **nova** | | 3 | | 3 | 2 | 16 | | 13 | | | | 7 | | 6 | — | 37 | 2 | 2 | | 5 | 2 | | | 11 | | | | 26 | | 2 |
| **objects** | | | | 14 | 2 | 6 | | 248 | | | | | 6 | 12 | 170 | — | | | | 2 | | 2 | | 7 | | | | | | |
| **pci** | | | | | | 2 | | | | | | | 1 | | 27 | 17 | — | | | | | | | | | | | | | |
| **policies** | | | | | | | | | | | | | | | | | | — | | | | | | | | | | | | |
| **privsep** | | | | | | 1 | | | | | | | | | 7 | | | | — | | | | | | | | | | | |
| **scheduler** | | | | 12 | | 23 | | | | | | | 2 | | 91 | 57 | 4 | | | — | 4 | | | 25 | | | | | | |
| **servicegroup** | | | | | | 3 | | | | | | | | | 7 | | | | | | — | | | | | | | | | |
| **share** | | | | | | 1 | | | | | | | | | 10 | | | | | | | — | | | | | | | | |
| **storage** | | | | | | 1 | | | | | | | | | 10 | | | | | | | | — | | | | | | | |
| **virt** | | 10 | | 47 | | 62 | 18 | | | 10 | | | 17 | | 468 | 108 | 20 | | 96 | 4 | 2 | | 6 | — | 2 | | | | | |
| **volume** | | | | | | 1 | | | | | | | | | 21 | | | | | | | | | | — | | | | | |
| **wsgi** | | 4 | | | | | | | | | | | | | 4 | | | | | | | | | | | — | | | | |
| **tests** | | | | | | | | | | | | | | | | | | | | | | | | | | | — | | | |
| **tests-fixtures** | | 4 | | 4 | | 11 | | 7 | | | | | 3 | | 45 | 9 | | 2 | 1 | 2 | | | | 42 | | | | — | 2 | 1 |
| **tests-functional** | | 8 | 9 | 70 | 2 | 34 | | 73 | | 1 | | 2 | 17 | | 616 | 421 | 2 | 11 | | 17 | | | | 52 | 4 | | 2 | 625 | — | 78 |
| **tests-unit** | 8 | 428 | 30 | 319 | 33 | 68 | 37 | 300 | 14 | 34 | 2 | 29 | 176 | 30 | 2232 | 1752 | 59 | 71 | 69 | 206 | 13 | 3 | 9 | 795 | 18 | | 3 | 246 | | — |

**Derivation:** All cell values are the sum of `resolved` entries in the Link Graph `fileEdges` for the given `(fromComponent, toComponent)` pair, as listed in `.aee/link-summary.md` (batch `c7e94e29`, section "Component Dependencies"). Empty cells indicate no edge found in the link summary for that pair — per protocol this means no edge was found, not that the two components are independent. Cross-component resolved total: 15,256. Intra-component resolved (diagonal, not broken down): 3,556.

No confirmed taint chains (`.aee/security-chains.json`, `summary.confirmedChains: 0`); no cells are bolded.

The Link Graph is incomplete by construction (static imports and shared literals only). Known blind spots: (1) scheduler filters loaded dynamically from config; (2) `privsep/` functions dispatched via oslo.privsep IPC; (3) local-variable dispatch patterns invisible to static analysis.

---

## Cross-Component Seams

| Component A | Component B | Kind | Literal |
|-------------|-------------|------|---------|
| — | — | — | — |

No cross-component seams were found. (`.aee/link-summary.md`, `summary.seams: 0`). Seams have no direction and are not counted in the matrix above.
