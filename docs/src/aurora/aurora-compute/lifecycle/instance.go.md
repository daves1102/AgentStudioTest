## Overview

Source file `src/aurora/aurora-compute/lifecycle/instance.go` written in Go belonging to package `lifecycle` within the `aurora-compute` component . It contains 8 defined symbol(s), 1 dependency/dependencies.


Lines: total 39, code 30, comment 2, blank 7

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `State` | type | `State` | — | — | — | L8 (src/aurora/aurora-compute/lifecycle/instance.go:L8) |
| `Building` | constant | `Building` | — | — | — | L11 (src/aurora/aurora-compute/lifecycle/instance.go:L11) |
| `Active` | constant | `Active` | — | — | — | L12 (src/aurora/aurora-compute/lifecycle/instance.go:L12) |
| `Stopped` | constant | `Stopped` | — | — | — | L13 (src/aurora/aurora-compute/lifecycle/instance.go:L13) |
| `Error` | constant | `Error` | — | — | — | L14 (src/aurora/aurora-compute/lifecycle/instance.go:L14) |
| `Instance` | type | `Instance` | — | — | — | L17–L22 (src/aurora/aurora-compute/lifecycle/instance.go:L17–L22) |
| `Transition` | method | `Transition(next: State) → bool` | — | `next == Active || next == Error` (L27), `next == Stopped || next == Error` (L29), `next == Active` (L31), `false` (L33) | 6/12 | L24–L35 (src/aurora/aurora-compute/lifecycle/instance.go:L24–L35) |
| `Age` | function | `Age(i: Instance, now: time.Time) → time.Duration` | — | `now.Sub(i.CreatedAt)` (L38) | 1/3 | L37–L39 (src/aurora/aurora-compute/lifecycle/instance.go:L37–L39) |

## Dependencies

- `time` (src/aurora/aurora-compute/lifecycle/instance.go:L6)
