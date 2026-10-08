# src/payload_plaintext/aurora-compute/api/server.go

## Overview

`server.go` provides three package-level declarations for the Aurora Compute API: a hardcoded string constant `metricsToken`, a factory `newClient` that creates an `*http.Client` with TLS certificate verification disabled, and `Console`, which attaches to an instance serial console by spawning `virsh console <instance>` through `sh -c`. The file also defines the `Health` handler that responds with a plain-text `"ok"`.

## Defined Symbols

| Name | Kind | Signature | Visibility | Lines |
|---|---|---|---|---|
| `metricsToken` | constant | `string` | unexported | `server.go:L13` |
| `newClient` | function | `() *http.Client` | unexported | `server.go:L15–L20` |
| `Console` | function | `(instance string) ([]byte, error)` | exported | `server.go:L23–L26` |
| `Health` | function | `(w http.ResponseWriter, r *http.Request)` | exported | `server.go:L28–L31` |

## Dependencies

- `crypto/tls` — `tls.Config` used in `newClient` to disable certificate verification (`server.go:L7`)
- `fmt` — `fmt.Sprintf` for shell command construction; `fmt.Fprintf` for health response (`server.go:L8`)
- `net/http` — `http.Transport`, `http.Client`, and `http.ResponseWriter` (`server.go:L9`)
- `os/exec` — `exec.Command` to spawn the `virsh console` subprocess (`server.go:L10`)

## Side Effects

- **Process spawn:** `Console` executes `sh -c "virsh console <instance>"` via `exec.Command` and captures combined output (`server.go:L24–L25`)
- **HTTP response write:** `Health` writes a 200 `"ok"` response to `http.ResponseWriter` (`server.go:L29–L30`)

## Security Surface

- **Hardcoded credential:** `metricsToken` is assigned the literal string `"AKIAIOSFODNN7EXAMPLE"`, which matches AWS access key format (`server.go:L13`)
- **TLS verification disabled:** `newClient()` constructs an `*http.Client` with `tls.Config{InsecureSkipVerify: true}`, disabling certificate validation for all outbound TLS connections that use this client (`server.go:L17`)
- **Command injection:** `Console()` constructs the shell command via `fmt.Sprintf("virsh console %s", instance)` and passes it to `exec.Command("sh", "-c", ...)` — the `instance` argument is caller-supplied and not validated or escaped (`server.go:L24`)
- **Input entry point — function parameter:** `Console(instance string)`: `instance` is used unvalidated in shell command construction (`server.go:L23`)
