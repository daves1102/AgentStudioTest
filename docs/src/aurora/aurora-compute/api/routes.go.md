## Overview

Source file `src/aurora/aurora-compute/api/routes.go` written in Go belonging to package `api` within the `aurora-compute` component . It contains 3 defined symbol(s), 2 dependency/dependencies.


Lines: total 32, code 23, comment 4, blank 5

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `Register` | function | `Register(mux: *http.ServeMux)` | — | — | 1/5 | L12–L16 (src/aurora/aurora-compute/api/routes.go:L12–L16) |
| `requireToken` | function | `requireToken(next: http.HandlerFunc) → http.HandlerFunc` | — | `func(w http.ResponseWriter, r *http.Request) { if r.Header.Get("X-Aurora-Token") != os.Getenv("AURORA_ADMIN_TOKEN") { http.Error(w, "forbidden", http.StatusForbidden) return } next(w, r) }` (L19) | 1/3 | L18–L26 (src/aurora/aurora-compute/api/routes.go:L18–L26) |
| `ListProfiles` | function | `ListProfiles(w: http.ResponseWriter, r: *http.Request)` | — | — | 1/4 | L29–L32 (src/aurora/aurora-compute/api/routes.go:L29–L32) |

## Dependencies

- `net/http` (src/aurora/aurora-compute/api/routes.go:L7)
- `os` (src/aurora/aurora-compute/api/routes.go:L8)

## Security Surface

- **entry-point (http-route)**: HTTP route registration (src/aurora/aurora-compute/api/routes.go:L13)
- **entry-point (http-route)**: HTTP route registration (src/aurora/aurora-compute/api/routes.go:L14)
- **entry-point (http-route)**: HTTP route registration (src/aurora/aurora-compute/api/routes.go:L15)
- **entry-point (env)**: environment variable (src/aurora/aurora-compute/api/routes.go:L20)
