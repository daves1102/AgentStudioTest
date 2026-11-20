## Overview

Source file `src/aurora/aurora-identity/src/main/java/cloud/aurora/identity/UserRepository.java` written in Java belonging to package `cloud.aurora.identity` within the `aurora-identity` component . It contains 5 defined symbol(s), 3 dependency/dependencies.


Lines: total 37, code 21, comment 9, blank 7

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `UserRepository` | class | `UserRepository` | — | — | — | L17–L37 (src/aurora/aurora-identity/src/main/java/cloud/aurora/identity/UserRepository.java:L17–L37) |
| `connection` | field | `connection` | — | — | — | L19 (src/aurora/aurora-identity/src/main/java/cloud/aurora/identity/UserRepository.java:L19) |
| `UserRepository` | method | `UserRepository(connection: Connection)` | — | — | 1/3 | L21–L23 (src/aurora/aurora-identity/src/main/java/cloud/aurora/identity/UserRepository.java:L21–L23) |
| `findByName` | method | `findByName(name: String) → ResultSet` | — | `statement.executeQuery(sql)` (L28) | 1/5 | L25–L29 (src/aurora/aurora-identity/src/main/java/cloud/aurora/identity/UserRepository.java:L25–L29) |
| `countByProject` | method | `countByProject(project: String) → int` | — | `rs.next() ? rs.getInt(1) : 0` (L35) | 2/6 | L31–L36 (src/aurora/aurora-identity/src/main/java/cloud/aurora/identity/UserRepository.java:L31–L36) |

## Dependencies

- `java.sql` imports: `{'alias': None, 'name': 'Connection'}` (src/aurora/aurora-identity/src/main/java/cloud/aurora/identity/UserRepository.java:L13)
- `java.sql` imports: `{'alias': None, 'name': 'ResultSet'}` (src/aurora/aurora-identity/src/main/java/cloud/aurora/identity/UserRepository.java:L14)
- `java.sql` imports: `{'alias': None, 'name': 'Statement'}` (src/aurora/aurora-identity/src/main/java/cloud/aurora/identity/UserRepository.java:L15)

## Side Effects

-  (src/aurora/aurora-identity/src/main/java/cloud/aurora/identity/UserRepository.java:L26)
-  (src/aurora/aurora-identity/src/main/java/cloud/aurora/identity/UserRepository.java:L28)
-  (src/aurora/aurora-identity/src/main/java/cloud/aurora/identity/UserRepository.java:L32)
-  (src/aurora/aurora-identity/src/main/java/cloud/aurora/identity/UserRepository.java:L33)

## Security Surface

- **sink (sql)**: SQL statement execution (src/aurora/aurora-identity/src/main/java/cloud/aurora/identity/UserRepository.java:L26)
- **sink (sql)**: SQL statement execution (src/aurora/aurora-identity/src/main/java/cloud/aurora/identity/UserRepository.java:L28)
- **sink (sql)**: SQL statement execution (src/aurora/aurora-identity/src/main/java/cloud/aurora/identity/UserRepository.java:L32)
- **sink (sql)**: SQL statement execution (src/aurora/aurora-identity/src/main/java/cloud/aurora/identity/UserRepository.java:L33)
