# src/payload_plaintext/aurora-compute/lifecycle/instance.go

## Overview

`instance.go` defines the data model and state-machine logic for a compute instance in the Aurora Compute lifecycle package. It declares a `State` string type with four named constants (`Building`, `Active`, `Stopped`, `Error`) and the `Instance` struct holding an ID, project identifier, state, and creation timestamp. `Instance.Transition` enforces the valid state transitions: `Building → Active|Error`, `Active → Stopped|Error`, `Stopped → Active`. The package-level function `Age` computes how long an instance has existed from a caller-supplied reference time. The module has no side effects and no security surface.

## Defined Symbols

| Name | Kind | Signature | Visibility | Lines |
|---|---|---|---|---|
| `State` | type | underlying `string` | exported | `instance.go:L8` |
| `Building` | constant | `State` | exported | `instance.go:L11` |
| `Active` | constant | `State` | exported | `instance.go:L12` |
| `Stopped` | constant | `State` | exported | `instance.go:L13` |
| `Error` | constant | `State` | exported | `instance.go:L14` |
| `Instance` | struct | `ID string; Project string; State State; CreatedAt time.Time` | exported | `instance.go:L17–L22` |
| `Instance.Transition` | receiver method | `(next State) bool` (receiver `*Instance`) | exported | `instance.go:L24–L35` |
| `Age` | function | `(i Instance, now time.Time) time.Duration` | exported | `instance.go:L37–L39` |

## Dependencies

- `time` — `time.Time` (field type and parameter) and `time.Duration` (return type of `Age`) (`instance.go:L6`)
