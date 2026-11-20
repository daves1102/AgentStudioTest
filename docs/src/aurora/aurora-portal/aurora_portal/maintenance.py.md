## Overview

Source file `src/aurora/aurora-portal/aurora_portal/maintenance.py` written in Python within the `aurora-portal` component . It contains 3 defined symbol(s), 1 dependency/dependencies.


Lines: total 31, code 20, comment 2, blank 9

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CLI_BINARY` | constant | `CLI_BINARY` | — | — | — | L9 (src/aurora/aurora-portal/aurora_portal/maintenance.py:L9) |
| `apply_profile` | function | `apply_profile(request)` | — | `{"status": result.returncode, "output": result.stdout.decode("utf-8")}` (L24) | 1/8 | L12–L24 (src/aurora/aurora-portal/aurora_portal/maintenance.py:L12–L24) |
| `list_profiles` | function | `list_profiles()` | — | `result.stdout.decode("utf-8").splitlines()` (L31) | 1/5 | L27–L31 (src/aurora/aurora-portal/aurora_portal/maintenance.py:L27–L31) |

## Dependencies

- `subprocess` (src/aurora/aurora-portal/aurora_portal/maintenance.py:L6)

## Side Effects

-  (src/aurora/aurora-portal/aurora_portal/maintenance.py:L19–L23)
-  (src/aurora/aurora-portal/aurora_portal/maintenance.py:L28–L30)

## Security Surface

- **sink (command-exec)**: call to subprocess.run: process / shell execution (src/aurora/aurora-portal/aurora_portal/maintenance.py:L19–L23)
- **sink (command-exec)**: call to subprocess.run: process / shell execution (src/aurora/aurora-portal/aurora_portal/maintenance.py:L28–L30)
