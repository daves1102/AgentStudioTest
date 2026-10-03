# src/payload_plaintext/aurora-portal/aurora_portal/maintenance.py

## Overview

`maintenance.py` provides maintenance actions for tenant administrators in the Aurora Portal. It defines two functions: `apply_profile`, which reads a profile name from a form request and invokes `aurora-cli profile-apply` via `subprocess.run`, and `list_profiles`, which runs `aurora-cli profile-list` and returns the output as a list of strings. A module-level constant `CLI_BINARY` holds the executable name. The only external dependency is the stdlib `subprocess` module.

## Defined Symbols

| Name | Kind | Signature | Visibility | Lines |
|---|---|---|---|---|
| `CLI_BINARY` | module-level constant | `str` | module | `maintenance.py:L9` |
| `apply_profile` | function | `(request: dict) -> dict` | module | `maintenance.py:L12–L24` |
| `list_profiles` | function | `() -> list[str]` | module | `maintenance.py:L27–L31` |

## Dependencies

- `subprocess` — used to spawn `aurora-cli` subprocesses in both functions (`maintenance.py:L6`)

## Side Effects

- **Process spawn:** `apply_profile` runs `[aurora-cli, profile-apply, --name, <profile_name>]` via `subprocess.run` (`maintenance.py:L19–L23`)
- **Process spawn:** `list_profiles` runs `[aurora-cli, profile-list]` via `subprocess.run` (`maintenance.py:L28–L30`)

## Security Surface

- **Input entry point — form data:** `apply_profile(request)` reads `profile_name` from `request["form"]["profile_name"]` — user-supplied form input used as a CLI argument value (`maintenance.py:L18`)
- **Process spawn with user-controlled argument:** the form-supplied `profile_name` is passed as the `--name` argument value to `subprocess.run` as a list (not a shell string), so no shell injection is possible, but the value is otherwise unvalidated user input (`maintenance.py:L19–L23`)
