## Overview

Source file `src/aurora/aurora-identity/src/main/java/cloud/aurora/identity/RouteService.java` written in Java belonging to package `cloud.aurora.identity` within the `aurora-identity` component . It contains 7 defined symbol(s), 3 dependency/dependencies.


Lines: total 44, code 25, comment 10, blank 9

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `RouteService` | class | `RouteService` | — | — | — | L18–L44 (src/aurora/aurora-identity/src/main/java/cloud/aurora/identity/RouteService.java:L18–L44) |
| `items` | field | `items` | — | — | — | L20 (src/aurora/aurora-identity/src/main/java/cloud/aurora/identity/RouteService.java:L20) |
| `add` | method | `add(id: String) → void` | — | — | 3/6 | L22–L27 (src/aurora/aurora-identity/src/main/java/cloud/aurora/identity/RouteService.java:L22–L27) |
| `find` | method | `find(id: String) → Optional<String>` | — | `items.stream().filter(i -> i.equals(id)).findFirst()` (L30) | 1/3 | L29–L31 (src/aurora/aurora-identity/src/main/java/cloud/aurora/identity/RouteService.java:L29–L31) |
| `all` | method | `all() → List<String>` | — | `new ArrayList<>(items)` (L34) | 1/3 | L33–L35 (src/aurora/aurora-identity/src/main/java/cloud/aurora/identity/RouteService.java:L33–L35) |
| `remove` | method | `remove(id: String) → boolean` | — | `items.remove(id)` (L38) | 1/3 | L37–L39 (src/aurora/aurora-identity/src/main/java/cloud/aurora/identity/RouteService.java:L37–L39) |
| `size` | method | `size() → int` | — | `items.size()` (L42) | 1/3 | L41–L43 (src/aurora/aurora-identity/src/main/java/cloud/aurora/identity/RouteService.java:L41–L43) |

## Dependencies

- `java.util` imports: `{'alias': None, 'name': 'ArrayList'}` (src/aurora/aurora-identity/src/main/java/cloud/aurora/identity/RouteService.java:L13)
- `java.util` imports: `{'alias': None, 'name': 'List'}` (src/aurora/aurora-identity/src/main/java/cloud/aurora/identity/RouteService.java:L14)
- `java.util` imports: `{'alias': None, 'name': 'Optional'}` (src/aurora/aurora-identity/src/main/java/cloud/aurora/identity/RouteService.java:L15)
