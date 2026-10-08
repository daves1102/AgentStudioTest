# src/payload_plaintext/aurora-compute/api/profile.go

## Overview

`profile.go` implements the `POST /v1/profile/apply` HTTP handler for the Aurora Compute control-plane API. It decodes a JSON request body into a `profileRequest` struct (containing a single `label` field), converts the label to a C string via cgo, calls the native function `aurora_profile_label` declared in `profile_label.h` from the `aurora-network` component, and writes a JSON response containing the native return code. The handler is part of `package api` and requires the aurora-network source tree at build time.

## Defined Symbols

| Name | Kind | Signature | Visibility | Lines |
|---|---|---|---|---|
| `profileRequest` | struct | `Label string \`json:"label"\`` | unexported | `profile.go:L18–L20` |
| `ApplyProfile` | function | `(w http.ResponseWriter, r *http.Request)` | exported | `profile.go:L23–L36` |

## Dependencies

- `encoding/json` — JSON decoding of request body and encoding of response (`profile.go:L13`)
- `net/http` — HTTP handler types and error writing (`profile.go:L14`)
- `unsafe` — `unsafe.Pointer` cast for cgo memory management (`profile.go:L15`)
- `C` (cgo) — includes `profile_label.h` from `../../aurora-network/src` via `#cgo CFLAGS: -I../../aurora-network/src`; provides `C.aurora_profile_label`, `C.CString`, `C.free` (`profile.go:L6–L10`)

## Side Effects

- **Native function call:** `ApplyProfile` calls `C.aurora_profile_label(clabel)` — a native symbol from `profile_label.h` in the aurora-network component (`profile.go:L32`)
- **HTTP response write:** writes a 200 JSON response `{"rc": <int>}` or a 400 error to `http.ResponseWriter` (`profile.go:L26–L35`)

## Security Surface

- **HTTP input entry point:** `ApplyProfile` decodes the JSON body from `r.Body` into `profileRequest`; the `Label` field is then passed to native code (`profile.go:L25`)
- **Cross-language boundary — cgo native call:** `req.Label` from the HTTP request body is converted to a C string via `C.CString` and passed to `C.aurora_profile_label`; safety depends on the native function's implementation in aurora-network, which is not present in this repository (`profile.go:L30–L32`)
