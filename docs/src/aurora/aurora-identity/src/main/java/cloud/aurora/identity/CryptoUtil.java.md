## Overview

Source file `src/aurora/aurora-identity/src/main/java/cloud/aurora/identity/CryptoUtil.java` written in Java belonging to package `cloud.aurora.identity` within the `aurora-identity` component . It contains 3 defined symbol(s), 2 dependency/dependencies.


Lines: total 29, code 15, comment 9, blank 5

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CryptoUtil` | class | `CryptoUtil` | — | — | — | L16–L29 (src/aurora/aurora-identity/src/main/java/cloud/aurora/identity/CryptoUtil.java:L16–L29) |
| `seal` | method | `seal(plaintext: byte[], key: byte[]) → byte[]` | — | `cipher.doFinal(plaintext)` (L21) | 1/5 | L18–L22 (src/aurora/aurora-identity/src/main/java/cloud/aurora/identity/CryptoUtil.java:L18–L22) |
| `open` | method | `open(ciphertext: byte[], key: byte[]) → byte[]` | — | `cipher.doFinal(ciphertext)` (L27) | 1/5 | L24–L28 (src/aurora/aurora-identity/src/main/java/cloud/aurora/identity/CryptoUtil.java:L24–L28) |

## Dependencies

- `javax.crypto` imports: `{'alias': None, 'name': 'Cipher'}` (src/aurora/aurora-identity/src/main/java/cloud/aurora/identity/CryptoUtil.java:L13)
- `javax.crypto.spec` imports: `{'alias': None, 'name': 'SecretKeySpec'}` (src/aurora/aurora-identity/src/main/java/cloud/aurora/identity/CryptoUtil.java:L14)

## Security Surface

- **sink (crypto)**: cryptographic primitive (src/aurora/aurora-identity/src/main/java/cloud/aurora/identity/CryptoUtil.java:L19)
- **sink (crypto)**: cryptographic primitive (src/aurora/aurora-identity/src/main/java/cloud/aurora/identity/CryptoUtil.java:L20)
- **sink (crypto)**: cryptographic primitive (src/aurora/aurora-identity/src/main/java/cloud/aurora/identity/CryptoUtil.java:L25)
- **sink (crypto)**: cryptographic primitive (src/aurora/aurora-identity/src/main/java/cloud/aurora/identity/CryptoUtil.java:L26)
