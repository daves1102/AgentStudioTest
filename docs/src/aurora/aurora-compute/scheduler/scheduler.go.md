## Overview

Source file `src/aurora/aurora-compute/scheduler/scheduler.go` written in Go belonging to package `scheduler` within the `aurora-compute` component . It contains 4 defined symbol(s), 2 dependency/dependencies.


Lines: total 43, code 34, comment 3, blank 6

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `Host` | type | `Host` | — | — | — | L11–L16 (src/aurora/aurora-compute/scheduler/scheduler.go:L11–L16) |
| `Request` | type | `Request` | — | — | — | L18–L21 (src/aurora/aurora-compute/scheduler/scheduler.go:L18–L21) |
| `ErrNoCapacity` | variable | `ErrNoCapacity` | — | — | — | L23 (src/aurora/aurora-compute/scheduler/scheduler.go:L23) |
| `Select` | function | `Select(hosts: []Host, req: Request) → (Host, error)` | — | `Host{}, ErrNoCapacity` (L37), `candidates[0], nil` (L42) | 6/16 | L26–L43 (src/aurora/aurora-compute/scheduler/scheduler.go:L26–L43) |

## Dependencies

- `errors` (src/aurora/aurora-compute/scheduler/scheduler.go:L7)
- `sort` (src/aurora/aurora-compute/scheduler/scheduler.go:L8)
