## Overview

Source file `src/aurora/aurora-compute/api/profile.go` written in Go belonging to package `api` within the `aurora-compute` component . It contains 2 defined symbol(s), 4 dependency/dependencies.


Lines: total 36, code 22, comment 7, blank 7

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `profileRequest` | type | `profileRequest` | — | — | — | L18–L20 (src/aurora/aurora-compute/api/profile.go:L18–L20) |
| `ApplyProfile` | function | `ApplyProfile(w: http.ResponseWriter, r: *http.Request)` | — | L27 | 2/12 | L23–L36 (src/aurora/aurora-compute/api/profile.go:L23–L36) |

## Dependencies

- `C` (src/aurora/aurora-compute/api/profile.go:L10)
- `encoding/json` (src/aurora/aurora-compute/api/profile.go:L13)
- `net/http` (src/aurora/aurora-compute/api/profile.go:L14)
- `unsafe` (src/aurora/aurora-compute/api/profile.go:L15)

## Security Surface

- **entry-point (http-param)**: request data (src/aurora/aurora-compute/api/profile.go:L25)
