## Overview

Source file `src/aurora/aurora-cli/src/profile.js` written in JavaScript within the `aurora-cli` component . It contains 5 defined symbol(s), 2 dependency/dependencies.


Lines: total 26, code 18, comment 3, blank 5

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `axios` | constant | `axios` | — | — | — | L4 (src/aurora/aurora-cli/src/profile.js:L4) |
| `minimist` | constant | `minimist` | — | — | — | L5 (src/aurora/aurora-cli/src/profile.js:L5) |
| `CONTROL_PLANE` | constant | `CONTROL_PLANE` | — | — | — | L7 (src/aurora/aurora-cli/src/profile.js:L7) |
| `profileApply` | function | `profileApply(argv)` | — | `response.data` (L18) | 1/10 | L10–L19 (src/aurora/aurora-cli/src/profile.js:L10–L19) |
| `profileList` | function | `profileList()` | — | `response.data` (L23) | 1/4 | L21–L24 (src/aurora/aurora-cli/src/profile.js:L21–L24) |

## Dependencies

- `axios` (src/aurora/aurora-cli/src/profile.js:L4)
- `minimist` (src/aurora/aurora-cli/src/profile.js:L5)

## Security Surface

- **entry-point (env)**: environment variable (src/aurora/aurora-cli/src/profile.js:L7)
- **entry-point (env)**: environment variable (src/aurora/aurora-cli/src/profile.js:L16)
