## Overview

Source file `src/aurora/aurora-identity/src/main/java/cloud/aurora/identity/TokenService.java` written in Java belonging to package `cloud.aurora.identity` within the `aurora-identity` component . It contains 4 defined symbol(s), 2 dependency/dependencies.


Lines: total 37, code 22, comment 9, blank 6

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `TokenService` | class | `TokenService` | — | — | — | L16–L37 (src/aurora/aurora-identity/src/main/java/cloud/aurora/identity/TokenService.java:L16–L37) |
| `SIGNING_KEY` | constant | `SIGNING_KEY` | — | — | — | L18 (src/aurora/aurora-identity/src/main/java/cloud/aurora/identity/TokenService.java:L18) |
| `issue` | method | `issue(subject: String, validitySeconds: long) → String` | — | `Base64.getEncoder().encodeToString(payload.getBytes("UTF-8")) + "." + Base64.getEncoder().encodeToString(digest)` (L24) | 1/7 | L20–L26 (src/aurora/aurora-identity/src/main/java/cloud/aurora/identity/TokenService.java:L20–L26) |
| `expired` | method | `expired(token: String) → boolean` | — | `true` (L31), `Long.parseLong(fields[1]) < System.currentTimeMillis() / 1000` (L35) | 2/9 | L28–L36 (src/aurora/aurora-identity/src/main/java/cloud/aurora/identity/TokenService.java:L28–L36) |

## Dependencies

- `java.security` imports: `{'alias': None, 'name': 'MessageDigest'}` (src/aurora/aurora-identity/src/main/java/cloud/aurora/identity/TokenService.java:L13)
- `java.util` imports: `{'alias': None, 'name': 'Base64'}` (src/aurora/aurora-identity/src/main/java/cloud/aurora/identity/TokenService.java:L14)

## Security Surface

- **sink (crypto)**: cryptographic primitive (src/aurora/aurora-identity/src/main/java/cloud/aurora/identity/TokenService.java:L22)
