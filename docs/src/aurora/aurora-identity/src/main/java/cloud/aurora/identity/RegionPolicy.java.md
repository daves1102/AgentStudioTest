## Overview

Source file `src/aurora/aurora-identity/src/main/java/cloud/aurora/identity/RegionPolicy.java` written in Java belonging to package `cloud.aurora.identity` within the `aurora-identity` component . It contains 5 defined symbol(s), 2 dependency/dependencies.


Lines: total 32, code 16, comment 9, blank 7

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `RegionPolicy` | class | `RegionPolicy` | — | — | — | L16–L32 (src/aurora/aurora-identity/src/main/java/cloud/aurora/identity/RegionPolicy.java:L16–L32) |
| `regionOfProject` | field | `regionOfProject` | — | — | — | L18 (src/aurora/aurora-identity/src/main/java/cloud/aurora/identity/RegionPolicy.java:L18) |
| `assign` | method | `assign(project: String, region: String) → void` | — | — | 1/3 | L20–L22 (src/aurora/aurora-identity/src/main/java/cloud/aurora/identity/RegionPolicy.java:L20–L22) |
| `allowed` | method | `allowed(project: String, region: String) → boolean` | — | `assigned != null && assigned.equals(region)` (L26) | 2/4 | L24–L27 (src/aurora/aurora-identity/src/main/java/cloud/aurora/identity/RegionPolicy.java:L24–L27) |
| `size` | method | `size() → int` | — | `regionOfProject.size()` (L30) | 1/3 | L29–L31 (src/aurora/aurora-identity/src/main/java/cloud/aurora/identity/RegionPolicy.java:L29–L31) |

## Dependencies

- `java.util` imports: `{'alias': None, 'name': 'HashMap'}` (src/aurora/aurora-identity/src/main/java/cloud/aurora/identity/RegionPolicy.java:L13)
- `java.util` imports: `{'alias': None, 'name': 'Map'}` (src/aurora/aurora-identity/src/main/java/cloud/aurora/identity/RegionPolicy.java:L14)
