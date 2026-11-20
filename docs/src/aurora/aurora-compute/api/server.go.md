## Overview

Source file `src/aurora/aurora-compute/api/server.go` written in Go belonging to package `api` within the `aurora-compute` component . It contains 4 defined symbol(s), 4 dependency/dependencies.


Lines: total 31, code 22, comment 3, blank 6

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `metricsToken` | constant | `metricsToken` | — | — | — | L13 (src/aurora/aurora-compute/api/server.go:L13) |
| `newClient` | function | `newClient() → *http.Client` | — | `&http.Client{Transport: tr}` (L19) | 1/6 | L15–L20 (src/aurora/aurora-compute/api/server.go:L15–L20) |
| `Console` | function | `Console(instance: string) → ([]byte, error)` | — | `cmd.CombinedOutput()` (L25) | 1/4 | L23–L26 (src/aurora/aurora-compute/api/server.go:L23–L26) |
| `Health` | function | `Health(w: http.ResponseWriter, r: *http.Request)` | — | — | 1/4 | L28–L31 (src/aurora/aurora-compute/api/server.go:L28–L31) |

## Dependencies

- `crypto/tls` (src/aurora/aurora-compute/api/server.go:L7)
- `fmt` (src/aurora/aurora-compute/api/server.go:L8)
- `net/http` (src/aurora/aurora-compute/api/server.go:L9)
- `os/exec` (src/aurora/aurora-compute/api/server.go:L10)

## Side Effects

-  (src/aurora/aurora-compute/api/server.go:L15)
-  (src/aurora/aurora-compute/api/server.go:L16)
-  (src/aurora/aurora-compute/api/server.go:L19)
-  (src/aurora/aurora-compute/api/server.go:L24)

## Security Surface

- **sink (http-client)**: outgoing HTTP request (src/aurora/aurora-compute/api/server.go:L15)
- **sink (http-client)**: outgoing HTTP request (src/aurora/aurora-compute/api/server.go:L16)
- **sink (tls-config)**: TLS client configuration (src/aurora/aurora-compute/api/server.go:L17)
- **sink (http-client)**: outgoing HTTP request (src/aurora/aurora-compute/api/server.go:L19)
- **sink (command-exec)**: process execution (src/aurora/aurora-compute/api/server.go:L24)
