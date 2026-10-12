# src/payload_plaintext/aurora-network/src/tunnel.c

## Overview

`tunnel.c` manages GRE tunnel lifecycle operations for the aurora-network component. Three functions — `tunnel_up`, `tunnel_down`, and `tunnel_mtu` — construct shell command strings from caller-supplied parameters and execute them via `system()`. `tunnel_up` uses `sprintf` (unbounded) to build an `ip link add` command; `tunnel_down` and `tunnel_mtu` use `snprintf`. All three return the exit status of the spawned shell command. The caller-supplied `name` and `remote` strings are interpolated into the command without sanitisation, making all three functions command-injection sinks.

## Defined Symbols

| Name | Kind | Signature | Visibility | Returns | Complexity | Lines |
|---|---|---|---|---|---|---|
| `tunnel_up` | function | `int tunnel_up(const char *name, const char *remote)` | exported | `system(cmd)` (L20) | 6/1 | `tunnel.c:L16–L21` |
| `tunnel_down` | function | `int tunnel_down(const char *name)` | exported | `system(cmd)` (L27) | 6/1 | `tunnel.c:L23–L28` |
| `tunnel_mtu` | function | `int tunnel_mtu(const char *name, int mtu)` | exported | `-1` (L34), `system(cmd)` (L37) | 9/3 | `tunnel.c:L30–L38` |

## Dependencies

- `<stdio.h>` — `sprintf`, `snprintf` (`tunnel.c:L11`)
- `<stdlib.h>` — `system` (`tunnel.c:L12`)
- `<string.h>` — string operations (`tunnel.c:L13`)

## Side Effects

- **Process spawn:** `tunnel_up` calls `system("ip link add <name> type gre remote <remote>")` (`tunnel.c:L20`)
- **Process spawn:** `tunnel_down` calls `system("ip link del <name>")` (`tunnel.c:L27`)
- **Process spawn:** `tunnel_mtu` calls `system("ip link set <name> mtu <mtu>")` (`tunnel.c:L37`)

## Security Surface

- **Command injection — `tunnel_up`:** `sprintf(cmd[512], "ip link add %s type gre remote %s", name, remote)` — `sprintf` has no length bound on `name`+`remote`, risking stack buffer overflow; `system(cmd)` passes the resulting string to a shell with caller-supplied `name` and `remote` unvalidated (CWE-78, CWE-121) (`tunnel.c:L18–L20`)
- **Command injection — `tunnel_down`:** `system(cmd)` passes caller-supplied `name` to a shell via `snprintf`-formatted command; `name` is not validated against shell metacharacters (CWE-78) (`tunnel.c:L24–L27`)
- **Command injection — `tunnel_mtu`:** `system(cmd)` passes caller-supplied `name` to a shell via `snprintf`-formatted command; MTU value is range-checked but `name` is not validated against shell metacharacters (CWE-78) (`tunnel.c:L34–L37`)
