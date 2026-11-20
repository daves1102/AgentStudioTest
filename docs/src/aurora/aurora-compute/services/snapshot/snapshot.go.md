## Overview

Source file `src/aurora/aurora-compute/services/snapshot/snapshot.go` written in Go belonging to package `snapshot` within the `aurora-compute` component . It contains 10 defined symbol(s), 2 dependency/dependencies.


Lines: total 65, code 50, comment 3, blank 12

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `Record` | type | `Record` | — | — | — | L12–L17 (src/aurora/aurora-compute/services/snapshot/snapshot.go:L12–L17) |
| `ErrNotFound` | variable | `ErrNotFound` | — | — | — | L19 (src/aurora/aurora-compute/services/snapshot/snapshot.go:L19) |
| `Store` | type | `Store` | — | — | — | L21–L23 (src/aurora/aurora-compute/services/snapshot/snapshot.go:L21–L23) |
| `NewStore` | function | `NewStore() → *Store` | — | `&Store{records: make(map[string]Record)}` (L26) | 1/3 | L25–L27 (src/aurora/aurora-compute/services/snapshot/snapshot.go:L25–L27) |
| `Put` | method | `Put(r: Record)` | — | — | 1/3 | L29–L31 (src/aurora/aurora-compute/services/snapshot/snapshot.go:L29–L31) |
| `Get` | method | `Get(id: string) → (Record, error)` | — | `Record{}, ErrNotFound` (L36), `r, nil` (L38) | 2/7 | L33–L39 (src/aurora/aurora-compute/services/snapshot/snapshot.go:L33–L39) |
| `ByProject` | method | `ByProject(project: string) → []Record` | — | `out` (L48) | 3/9 | L41–L49 (src/aurora/aurora-compute/services/snapshot/snapshot.go:L41–L49) |
| `Total` | method | `Total(project: string) → int64` | — | `total` (L56) | 2/7 | L51–L57 (src/aurora/aurora-compute/services/snapshot/snapshot.go:L51–L57) |
| `Normalise` | function | `Normalise(tag: string) → string` | — | `strings.ToLower(strings.TrimSpace(tag))` (L60) | 1/3 | L59–L61 (src/aurora/aurora-compute/services/snapshot/snapshot.go:L59–L61) |
| `Count` | method | `Count() → int` | — | `len(s.records)` (L64) | 1/3 | L63–L65 (src/aurora/aurora-compute/services/snapshot/snapshot.go:L63–L65) |

## Dependencies

- `errors` (src/aurora/aurora-compute/services/snapshot/snapshot.go:L7)
- `strings` (src/aurora/aurora-compute/services/snapshot/snapshot.go:L8)
