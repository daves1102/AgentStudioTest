# src/payload_plaintext/aurora-compute/scheduler/scheduler.go

## Overview

`scheduler.go` implements a best-fit host selector for the Aurora Compute scheduler. It defines two structs — `Host` (with available VCPU, memory, and a reserved flag) and `Request` (desired VCPU and memory) — and a sentinel error `ErrNoCapacity`. The exported function `Select` filters out reserved hosts and those with insufficient resources, sorts the remaining candidates by ascending free VCPU (tightest fit), and returns the best candidate or `ErrNoCapacity` if none qualify. The module has no I/O side effects and no security surface.

## Defined Symbols

| Name | Kind | Signature | Visibility | Lines |
|---|---|---|---|---|
| `Host` | struct | `Name string; FreeVCPU int; FreeMiB int; Reserved bool` | exported | `scheduler.go:L11–L16` |
| `Request` | struct | `VCPU int; MiB int` | exported | `scheduler.go:L18–L21` |
| `ErrNoCapacity` | variable | `error` | exported | `scheduler.go:L23` |
| `Select` | function | `(hosts []Host, req Request) (Host, error)` | exported | `scheduler.go:L26–L43` |

## Dependencies

- `errors` — `errors.New` used to initialise `ErrNoCapacity` (`scheduler.go:L7`)
- `sort` — `sort.Slice` used to order candidates by free VCPU ascending (`scheduler.go:L8`)
