# src/payload_plaintext/aurora-network/src/main.c

## Overview

`main.c` is the CLI entry point for the aurora-network component. It allocates a `flow_key` on the stack, zero-initialises it with `memset`, conditionally calls `parse_tenant_tag` on the first command-line argument when one is present, formats the key to a 128-byte output buffer via `dump_key`, and prints it to stdout. Both `parse_tenant_tag` and `dump_key` are declared in `packet.h` and implemented in `packet_parse.c`.

## Defined Symbols

| Name | Kind | Signature | Visibility | Returns | Complexity | Lines |
|---|---|---|---|---|---|---|
| `main` | function | `int main(int argc, char **argv)` | exported | `0` (L26) | 12/2 | `main.c:L15–L27` |

## Dependencies

- `<stdio.h>` — `printf` (`main.c:L11`)
- `<string.h>` — `memset` (`main.c:L12`)
- `"packet.h"` — `flow_key`, `parse_tenant_tag`, `dump_key` (`main.c:L13`)

## Side Effects

- **stdout write:** `printf("%s\n", out)` writes the formatted key to standard output (`main.c:L24`)

## Security Surface

- **Unsanitised CLI input:** `argv[1]` is passed directly to `parse_tenant_tag()` without length or content validation (`main.c:L21–L22`); `parse_tenant_tag` in `packet_parse.c` copies this string into a 16-byte local buffer via `strcpy` — an argument longer than 15 characters overflows that buffer
