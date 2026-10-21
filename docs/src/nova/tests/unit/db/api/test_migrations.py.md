# src/nova/tests/unit/db/api/test_migrations.py

## Overview

This file implements the `test_migrations` module, defining 8 classs, 7 constants, 1 field, 15 methods, 12 imports, 7 side effects.

Lines: total 268, code 183, comment 29, blank 56

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/tests/unit/db/api/test_migrations.py:L39–L39` |
| `NovaModelsMigrationsSync` | class | — | exported | not declared | — | `src/nova/tests/unit/db/api/test_migrations.py:L42–L97` |
| `NovaModelsMigrationsSync.TIMEOUT_SCALING_FACTOR` | constant | — | public | not declared | — | `src/nova/tests/unit/db/api/test_migrations.py:L47–L47` |
| `NovaModelsMigrationsSync.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/db/api/test_migrations.py:L49–L51` |
| `NovaModelsMigrationsSync.db_sync` | method | (self, engine) | public | not declared | 1/3 | `src/nova/tests/unit/db/api/test_migrations.py:L53–L55` |
| `NovaModelsMigrationsSync.get_engine` | method | (self) | public | `self.engine` (src/nova/tests/unit/db/api/test_migrations.py:L58) | 1/2 | `src/nova/tests/unit/db/api/test_migrations.py:L57–L58` |
| `NovaModelsMigrationsSync.get_metadata` | method | (self) | public | `models.BASE.metadata` (src/nova/tests/unit/db/api/test_migrations.py:L61) | 1/2 | `src/nova/tests/unit/db/api/test_migrations.py:L60–L61` |
| `NovaModelsMigrationsSync.include_object` | method | (self, object_, name, type_, reflected, compare_to) | public | `name not in models.REMOVED_TABLES` (src/nova/tests/unit/db/api/test_migrations.py:L68); `True` (src/nova/tests/unit/db/api/test_migrations.py:L70) | 2/4 | `src/nova/tests/unit/db/api/test_migrations.py:L63–L70` |
| `NovaModelsMigrationsSync.filter_metadata_diff` | method | (self, diff) | public | `new_diff` (src/nova/tests/unit/db/api/test_migrations.py:L97) | 7/19 | `src/nova/tests/unit/db/api/test_migrations.py:L72–L97` |
| `TestModelsSyncSQLite` | class | — | exported | not declared | — | `src/nova/tests/unit/db/api/test_migrations.py:L100–L105` |
| `TestModelsSyncMySQL` | class | — | exported | not declared | — | `src/nova/tests/unit/db/api/test_migrations.py:L108–L113` |
| `TestModelsSyncMySQL.FIXTURE` | constant | — | public | not declared | — | `src/nova/tests/unit/db/api/test_migrations.py:L113–L113` |
| `TestModelsSyncPostgreSQL` | class | — | exported | not declared | — | `src/nova/tests/unit/db/api/test_migrations.py:L116–L121` |
| `TestModelsSyncPostgreSQL.FIXTURE` | constant | — | public | not declared | — | `src/nova/tests/unit/db/api/test_migrations.py:L121–L121` |
| `NovaMigrationsWalk` | class | — | exported | not declared | — | `src/nova/tests/unit/db/api/test_migrations.py:L124–L244` |
| `NovaMigrationsWalk.TIMEOUT_SCALING_FACTOR` | constant | — | public | not declared | — | `src/nova/tests/unit/db/api/test_migrations.py:L130–L130` |
| `NovaMigrationsWalk.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/db/api/test_migrations.py:L132–L136` |
| `NovaMigrationsWalk._migrate_up` | method | (self, connection, revision) | private | `` (src/nova/tests/unit/db/api/test_migrations.py:L141) | 4/17 | `src/nova/tests/unit/db/api/test_migrations.py:L138–L158` |
| `NovaMigrationsWalk._b30f573d3377_removed_columns` | field | — | private | not declared | — | `src/nova/tests/unit/db/api/test_migrations.py:L160–L176` |
| `NovaMigrationsWalk._pre_upgrade_b30f573d3377` | method | (self, connection) | private | not declared | 3/5 | `src/nova/tests/unit/db/api/test_migrations.py:L178–L184` |
| `NovaMigrationsWalk._check_b30f573d3377` | method | (self, connection) | private | not declared | 3/5 | `src/nova/tests/unit/db/api/test_migrations.py:L186–L192` |
| `NovaMigrationsWalk._check_cdeec0c85668` | method | (self, connection) | private | not declared | 1/2 | `src/nova/tests/unit/db/api/test_migrations.py:L194–L197` |
| `NovaMigrationsWalk.test_single_base_revision` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/db/api/test_migrations.py:L199–L208` |
| `NovaMigrationsWalk.test_single_head_revision` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/db/api/test_migrations.py:L210–L219` |
| `NovaMigrationsWalk.test_walk_versions` | method | (self) | public | not declared | 3/10 | `src/nova/tests/unit/db/api/test_migrations.py:L221–L234` |
| `NovaMigrationsWalk.test_db_version_alembic` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/db/api/test_migrations.py:L236–L244` |
| `TestMigrationsWalkSQLite` | class | — | exported | not declared | — | `src/nova/tests/unit/db/api/test_migrations.py:L247–L252` |
| `TestMigrationsWalkMySQL` | class | — | exported | not declared | — | `src/nova/tests/unit/db/api/test_migrations.py:L255–L260` |
| `TestMigrationsWalkMySQL.FIXTURE` | constant | — | public | not declared | — | `src/nova/tests/unit/db/api/test_migrations.py:L260–L260` |
| `TestMigrationsWalkPostgreSQL` | class | — | exported | not declared | — | `src/nova/tests/unit/db/api/test_migrations.py:L263–L268` |
| `TestMigrationsWalkPostgreSQL.FIXTURE` | constant | — | public | not declared | — | `src/nova/tests/unit/db/api/test_migrations.py:L268–L268` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/db/api/test_migrations.py:L24)
- `alembic`: imports `command as alembic_api` (src/nova/tests/unit/db/api/test_migrations.py:L26)
- `alembic`: imports `script as alembic_script` (src/nova/tests/unit/db/api/test_migrations.py:L27)
- `oslo_db.sqlalchemy`: imports `enginefacade` (src/nova/tests/unit/db/api/test_migrations.py:L28)
- `oslo_db.sqlalchemy`: imports `test_fixtures` (src/nova/tests/unit/db/api/test_migrations.py:L29)
- `oslo_db.sqlalchemy`: imports `test_migrations` (src/nova/tests/unit/db/api/test_migrations.py:L30)
- `oslo_log`: imports `log as logging` (src/nova/tests/unit/db/api/test_migrations.py:L31)
- `import sqlalchemy` (src/nova/tests/unit/db/api/test_migrations.py:L32)
- `import testtools` (src/nova/tests/unit/db/api/test_migrations.py:L33)
- `nova.db.api`: imports `models` (src/nova/tests/unit/db/api/test_migrations.py:L35)
- `nova.db`: imports `migration` (src/nova/tests/unit/db/api/test_migrations.py:L36)
- `nova`: imports `test` (src/nova/tests/unit/db/api/test_migrations.py:L37)

## Side Effects

- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/tests/unit/db/api/test_migrations.py:L39)
- **global-mutation**: TIMEOUT_SCALING_FACTOR = 4 (src/nova/tests/unit/db/api/test_migrations.py:L47)
- **global-mutation**: FIXTURE = test_fixtures.MySQLOpportunisticFixture (src/nova/tests/unit/db/api/test_migrations.py:L113)
- **global-mutation**: FIXTURE = test_fixtures.PostgresqlOpportunisticFixture (src/nova/tests/unit/db/api/test_migrations.py:L121)
- **global-mutation**: TIMEOUT_SCALING_FACTOR = 4 (src/nova/tests/unit/db/api/test_migrations.py:L130)
- **global-mutation**: FIXTURE = test_fixtures.MySQLOpportunisticFixture (src/nova/tests/unit/db/api/test_migrations.py:L260)
- **global-mutation**: FIXTURE = test_fixtures.PostgresqlOpportunisticFixture (src/nova/tests/unit/db/api/test_migrations.py:L268)

