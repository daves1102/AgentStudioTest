## Overview

Source file `src/aurora/aurora-identity/src/main/java/cloud/aurora/identity/RegionAssignmentDao.java` written in Java belonging to package `cloud.aurora.identity` within the `aurora-identity` component . It contains 5 defined symbol(s), 2 dependency/dependencies.


Lines: total 35, code 18, comment 10, blank 7

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `RegionAssignmentDao` | class | `RegionAssignmentDao` | — | — | — | L17–L35 (src/aurora/aurora-identity/src/main/java/cloud/aurora/identity/RegionAssignmentDao.java:L17–L35) |
| `TABLE` | constant | `TABLE` | — | — | — | L19 (src/aurora/aurora-identity/src/main/java/cloud/aurora/identity/RegionAssignmentDao.java:L19) |
| `connection` | field | `connection` | — | — | — | L21 (src/aurora/aurora-identity/src/main/java/cloud/aurora/identity/RegionAssignmentDao.java:L21) |
| `RegionAssignmentDao` | method | `RegionAssignmentDao(connection: Connection)` | — | — | 1/3 | L23–L25 (src/aurora/aurora-identity/src/main/java/cloud/aurora/identity/RegionAssignmentDao.java:L23–L25) |
| `assign` | method | `assign(project: String, region: String, note: String) → void` | — | — | 1/8 | L27–L34 (src/aurora/aurora-identity/src/main/java/cloud/aurora/identity/RegionAssignmentDao.java:L27–L34) |

## Dependencies

- `java.sql` imports: `{'alias': None, 'name': 'Connection'}` (src/aurora/aurora-identity/src/main/java/cloud/aurora/identity/RegionAssignmentDao.java:L13)
- `java.sql` imports: `{'alias': None, 'name': 'PreparedStatement'}` (src/aurora/aurora-identity/src/main/java/cloud/aurora/identity/RegionAssignmentDao.java:L14)

## Side Effects

-  (src/aurora/aurora-identity/src/main/java/cloud/aurora/identity/RegionAssignmentDao.java:L28)
-  (src/aurora/aurora-identity/src/main/java/cloud/aurora/identity/RegionAssignmentDao.java:L33)

## Security Surface

- **sink (sql)**: SQL statement execution (src/aurora/aurora-identity/src/main/java/cloud/aurora/identity/RegionAssignmentDao.java:L28)
- **sink (sql)**: SQL statement execution (src/aurora/aurora-identity/src/main/java/cloud/aurora/identity/RegionAssignmentDao.java:L33)
