# src/payload_plaintext/aurora-compute/api/routes.go

## Overview

`routes.go` wires the Aurora Compute control-plane HTTP routes and provides the shared token-authentication middleware. `Register` registers three routes on a `*http.ServeMux`: `/v1/profile/apply` and `/v1/profile/list` are wrapped with `requireToken`, while `/v1/health` is unprotected. `requireToken` compares the `X-Aurora-Token` request header against the `AURORA_ADMIN_TOKEN` environment variable and returns 403 if they do not match. `ListProfiles` is a stub that always returns an empty profile list.

## Defined Symbols

| Name | Kind | Signature | Visibility | Lines |
|---|---|---|---|---|
| `Register` | function | `(mux *http.ServeMux)` | exported | `routes.go:L12–L16` |
| `requireToken` | function | `(next http.HandlerFunc) http.HandlerFunc` | unexported | `routes.go:L18–L26` |
| `ListProfiles` | function | `(w http.ResponseWriter, r *http.Request)` | exported | `routes.go:L29–L32` |

## Dependencies

- `net/http` — HTTP mux, handler types, and error writing (`routes.go:L7`)
- `os` — `os.Getenv` to read `AURORA_ADMIN_TOKEN` (`routes.go:L8`)

## Side Effects

- **Environment variable read:** `requireToken` reads `AURORA_ADMIN_TOKEN` via `os.Getenv` on every authenticated request (`routes.go:L20`)
- **HTTP response write:** `requireToken` writes a 403 response when the token is missing or wrong; `ListProfiles` writes a 200 response with a static JSON body (`routes.go:L21` and `routes.go:L30–L31`)

## Security Surface

- **HTTP input entry point — authentication header:** `requireToken` reads the `X-Aurora-Token` header and compares it to `AURORA_ADMIN_TOKEN` using the `!=` operator (non-constant-time string comparison) (`routes.go:L20`)
- **Env var — authentication secret:** `AURORA_ADMIN_TOKEN` is read from the environment to authenticate API requests to `/v1/profile/apply` and `/v1/profile/list` (`routes.go:L20`)
- **HTTP routes registered:** `/v1/profile/apply` and `/v1/profile/list` require a valid token; `/v1/health` is unprotected (`routes.go:L13–L15`)
