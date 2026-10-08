# src/payload_plaintext/aurora-compute/services/dnsproxy/dnsproxy.go

## Overview

`dnsproxy.go` implements the in-memory record store for the Aurora Compute dnsproxy service. It defines a `Record` struct (ID, Project, Value int64, Tags []string) and a `Store` backed by an in-memory map. `NewStore` constructs an empty store. The receiver methods `Put`, `Get`, `ByProject`, `Total`, and `Count` provide basic CRUD and aggregation over the map. The package-level function `Normalise` lower-cases and trims whitespace from a tag string. The module has no file-system, network, or process side effects and no security surface.

## Defined Symbols

| Name | Kind | Signature | Visibility | Lines |
|---|---|---|---|---|
| `Record` | struct | `ID string; Project string; Value int64; Tags []string` | exported | `dnsproxy.go:L12–L17` |
| `ErrNotFound` | variable | `error` | exported | `dnsproxy.go:L19` |
| `Store` | struct | `records map[string]Record` (unexported field) | exported | `dnsproxy.go:L21–L23` |
| `NewStore` | function | `() *Store` | exported | `dnsproxy.go:L25–L27` |
| `Store.Put` | receiver method | `(r Record)` (receiver `*Store`) | exported | `dnsproxy.go:L29–L31` |
| `Store.Get` | receiver method | `(id string) (Record, error)` (receiver `*Store`) | exported | `dnsproxy.go:L33–L39` |
| `Store.ByProject` | receiver method | `(project string) []Record` (receiver `*Store`) | exported | `dnsproxy.go:L41–L49` |
| `Store.Total` | receiver method | `(project string) int64` (receiver `*Store`) | exported | `dnsproxy.go:L51–L57` |
| `Normalise` | function | `(tag string) string` | exported | `dnsproxy.go:L59–L61` |
| `Store.Count` | receiver method | `() int` (receiver `*Store`) | exported | `dnsproxy.go:L63–L65` |

## Dependencies

- `errors` — `errors.New` used to initialise `ErrNotFound` (`dnsproxy.go:L7`)
- `strings` — `strings.ToLower` and `strings.TrimSpace` used in `Normalise` (`dnsproxy.go:L8`)
