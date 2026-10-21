# src/nova/tests/unit/db/main/test_migrations.py

## Overview

This file implements the `test_migrations` module, defining 8 classs, 7 constants, 33 methods, 18 imports, 7 side effects, 4 security surface entries.

Lines: total 463, code 337, comment 43, blank 83

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/tests/unit/db/main/test_migrations.py:L49–L49` |
| `NovaModelsMigrationsSync` | class | — | exported | not declared | — | `src/nova/tests/unit/db/main/test_migrations.py:L52–L120` |
| `NovaModelsMigrationsSync.TIMEOUT_SCALING_FACTOR` | constant | — | public | not declared | — | `src/nova/tests/unit/db/main/test_migrations.py:L57–L57` |
| `NovaModelsMigrationsSync.setUp` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/db/main/test_migrations.py:L59–L69` |
| `NovaModelsMigrationsSync.db_sync` | method | (self, engine) | public | not declared | 1/3 | `src/nova/tests/unit/db/main/test_migrations.py:L71–L73` |
| `NovaModelsMigrationsSync.get_engine` | method | (self) | public | `self.engine` (src/nova/tests/unit/db/main/test_migrations.py:L76) | 1/2 | `src/nova/tests/unit/db/main/test_migrations.py:L75–L76` |
| `NovaModelsMigrationsSync.get_metadata` | method | (self) | public | `models.BASE.metadata` (src/nova/tests/unit/db/main/test_migrations.py:L79) | 1/2 | `src/nova/tests/unit/db/main/test_migrations.py:L78–L79` |
| `NovaModelsMigrationsSync.include_object` | method | (self, object_, name, type_, reflected, compare_to) | public | `False` (src/nova/tests/unit/db/main/test_migrations.py:L86); `name not in models.REMOVED_TABLES` (src/nova/tests/unit/db/main/test_migrations.py:L91); `True` (src/nova/tests/unit/db/main/test_migrations.py:L93) | 3/6 | `src/nova/tests/unit/db/main/test_migrations.py:L81–L93` |
| `NovaModelsMigrationsSync.filter_metadata_diff` | method | (self, diff) | public | `new_diff` (src/nova/tests/unit/db/main/test_migrations.py:L120) | 7/19 | `src/nova/tests/unit/db/main/test_migrations.py:L95–L120` |
| `TestModelsSyncSQLite` | class | — | exported | not declared | — | `src/nova/tests/unit/db/main/test_migrations.py:L123–L128` |
| `TestModelsSyncMySQL` | class | — | exported | not declared | — | `src/nova/tests/unit/db/main/test_migrations.py:L131–L163` |
| `TestModelsSyncMySQL.FIXTURE` | constant | — | public | not declared | — | `src/nova/tests/unit/db/main/test_migrations.py:L136–L136` |
| `TestModelsSyncMySQL.test_innodb_tables` | method | (self) | public | not declared | 1/24 | `src/nova/tests/unit/db/main/test_migrations.py:L138–L163` |
| `TestModelsSyncPostgreSQL` | class | — | exported | not declared | — | `src/nova/tests/unit/db/main/test_migrations.py:L166–L171` |
| `TestModelsSyncPostgreSQL.FIXTURE` | constant | — | public | not declared | — | `src/nova/tests/unit/db/main/test_migrations.py:L171–L171` |
| `NovaMigrationsWalk` | class | — | exported | not declared | — | `src/nova/tests/unit/db/main/test_migrations.py:L174–L439` |
| `NovaMigrationsWalk.TIMEOUT_SCALING_FACTOR` | constant | — | public | not declared | — | `src/nova/tests/unit/db/main/test_migrations.py:L180–L180` |
| `NovaMigrationsWalk.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/db/main/test_migrations.py:L182–L186` |
| `NovaMigrationsWalk.assertIndexExists` | method | (self, connection, table_name, index) | public | not declared | 1/5 | `src/nova/tests/unit/db/main/test_migrations.py:L188–L192` |
| `NovaMigrationsWalk.assertIndexNotExists` | method | (self, connection, table_name, index) | public | not declared | 1/5 | `src/nova/tests/unit/db/main/test_migrations.py:L194–L198` |
| `NovaMigrationsWalk.assertColumnExists` | method | (self, connection, table_name, column) | public | not declared | 1/5 | `src/nova/tests/unit/db/main/test_migrations.py:L200–L204` |
| `NovaMigrationsWalk.assertColumnNotExists` | method | (self, connection, table_name, column) | public | not declared | 1/5 | `src/nova/tests/unit/db/main/test_migrations.py:L206–L210` |
| `NovaMigrationsWalk.assertForeignKeyExists` | method | (self, connection, table_name, column) | public | not declared | 1/6 | `src/nova/tests/unit/db/main/test_migrations.py:L212–L217` |
| `NovaMigrationsWalk.assertForeignKeyNotExists` | method | (self, connection, table_name, column) | public | not declared | 1/7 | `src/nova/tests/unit/db/main/test_migrations.py:L219–L225` |
| `NovaMigrationsWalk.assertTableExists` | method | (self, connection, table_name) | public | not declared | 1/5 | `src/nova/tests/unit/db/main/test_migrations.py:L227–L233` |
| `NovaMigrationsWalk.assertTableNotExists` | method | (self, connection, table_name) | public | not declared | 1/4 | `src/nova/tests/unit/db/main/test_migrations.py:L235–L238` |
| `NovaMigrationsWalk._migrate_up` | method | (self, connection, revision) | private | `` (src/nova/tests/unit/db/main/test_migrations.py:L243) | 4/17 | `src/nova/tests/unit/db/main/test_migrations.py:L240–L260` |
| `NovaMigrationsWalk._pre_upgrade_16f1fbcab42b` | method | (self, connection) | private | not declared | 1/7 | `src/nova/tests/unit/db/main/test_migrations.py:L262–L268` |
| `NovaMigrationsWalk._check_16f1fbcab42b` | method | (self, connection) | private | not declared | 1/7 | `src/nova/tests/unit/db/main/test_migrations.py:L270–L278` |
| `NovaMigrationsWalk._check_ccb0fa1a2252` | method | (self, connection) | private | `` (src/nova/tests/unit/db/main/test_migrations.py:L297) | 3/20 | `src/nova/tests/unit/db/main/test_migrations.py:L280–L305` |
| `NovaMigrationsWalk._check_960aac0e09ea` | method | (self, connection) | private | not declared | 1/8 | `src/nova/tests/unit/db/main/test_migrations.py:L307–L314` |
| `NovaMigrationsWalk._check_1b91788ec3a6` | method | (self, connection) | private | not declared | 1/2 | `src/nova/tests/unit/db/main/test_migrations.py:L316–L319` |
| `NovaMigrationsWalk._check_1acf2c98e646` | method | (self, connection) | private | not declared | 3/17 | `src/nova/tests/unit/db/main/test_migrations.py:L321–L337` |
| `NovaMigrationsWalk._pre_upgrade_13863f4e1612` | method | (self, connection) | private | not declared | 1/2 | `src/nova/tests/unit/db/main/test_migrations.py:L339–L340` |
| `NovaMigrationsWalk._check_13863f4e1612` | method | (self, connection) | private | not declared | 2/23 | `src/nova/tests/unit/db/main/test_migrations.py:L342–L365` |
| `NovaMigrationsWalk._pre_upgrade_d60bddf7a903` | method | (self, connection) | private | not declared | 1/2 | `src/nova/tests/unit/db/main/test_migrations.py:L367–L372` |
| `NovaMigrationsWalk._check_d60bddf7a903` | method | (self, connection) | private | not declared | 1/2 | `src/nova/tests/unit/db/main/test_migrations.py:L374–L375` |
| `NovaMigrationsWalk._check_2903cd72dc14` | method | (self, connection) | private | not declared | 1/4 | `src/nova/tests/unit/db/main/test_migrations.py:L377–L380` |
| `NovaMigrationsWalk._check_ab450ba04102` | method | (self, connection) | private | not declared | 1/11 | `src/nova/tests/unit/db/main/test_migrations.py:L382–L392` |
| `NovaMigrationsWalk.test_single_base_revision` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/db/main/test_migrations.py:L394–L403` |
| `NovaMigrationsWalk.test_single_head_revision` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/db/main/test_migrations.py:L405–L414` |
| `NovaMigrationsWalk.test_walk_versions` | method | (self) | public | not declared | 3/10 | `src/nova/tests/unit/db/main/test_migrations.py:L416–L429` |
| `NovaMigrationsWalk.test_db_version_alembic` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/db/main/test_migrations.py:L431–L439` |
| `TestMigrationsWalkSQLite` | class | — | exported | not declared | — | `src/nova/tests/unit/db/main/test_migrations.py:L442–L447` |
| `TestMigrationsWalkMySQL` | class | — | exported | not declared | — | `src/nova/tests/unit/db/main/test_migrations.py:L450–L455` |
| `TestMigrationsWalkMySQL.FIXTURE` | constant | — | public | not declared | — | `src/nova/tests/unit/db/main/test_migrations.py:L455–L455` |
| `TestMigrationsWalkPostgreSQL` | class | — | exported | not declared | — | `src/nova/tests/unit/db/main/test_migrations.py:L458–L463` |
| `TestMigrationsWalkPostgreSQL.FIXTURE` | constant | — | public | not declared | — | `src/nova/tests/unit/db/main/test_migrations.py:L463–L463` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/db/main/test_migrations.py:L28)
- `alembic`: imports `command as alembic_api` (src/nova/tests/unit/db/main/test_migrations.py:L30)
- `alembic`: imports `script as alembic_script` (src/nova/tests/unit/db/main/test_migrations.py:L31)
- `import fixtures` (src/nova/tests/unit/db/main/test_migrations.py:L32)
- `oslo_db.sqlalchemy`: imports `enginefacade` (src/nova/tests/unit/db/main/test_migrations.py:L33)
- `oslo_db.sqlalchemy`: imports `test_fixtures` (src/nova/tests/unit/db/main/test_migrations.py:L34)
- `oslo_db.sqlalchemy`: imports `test_migrations` (src/nova/tests/unit/db/main/test_migrations.py:L35)
- `oslo_db.sqlalchemy`: imports `utils as oslodbutils` (src/nova/tests/unit/db/main/test_migrations.py:L36)
- `oslo_log.fixture`: imports `logging_error as log_fixture` (src/nova/tests/unit/db/main/test_migrations.py:L37)
- `oslo_log`: imports `log as logging` (src/nova/tests/unit/db/main/test_migrations.py:L38)
- `oslotest`: imports `base` (src/nova/tests/unit/db/main/test_migrations.py:L39)
- `import sqlalchemy as sa` (src/nova/tests/unit/db/main/test_migrations.py:L40)
- `import sqlalchemy.exc` (src/nova/tests/unit/db/main/test_migrations.py:L41)
- `sqlalchemy`: imports `Table` (src/nova/tests/unit/db/main/test_migrations.py:L42)
- `nova.db.main`: imports `models` (src/nova/tests/unit/db/main/test_migrations.py:L44)
- `nova.db`: imports `migration` (src/nova/tests/unit/db/main/test_migrations.py:L45)
- `nova`: imports `test` (src/nova/tests/unit/db/main/test_migrations.py:L46)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/unit/db/main/test_migrations.py:L47)

## Side Effects

- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/tests/unit/db/main/test_migrations.py:L49)
- **global-mutation**: TIMEOUT_SCALING_FACTOR = 4 (src/nova/tests/unit/db/main/test_migrations.py:L57)
- **global-mutation**: FIXTURE = test_fixtures.MySQLOpportunisticFixture (src/nova/tests/unit/db/main/test_migrations.py:L136)
- **global-mutation**: FIXTURE = test_fixtures.PostgresqlOpportunisticFixture (src/nova/tests/unit/db/main/test_migrations.py:L171)
- **global-mutation**: TIMEOUT_SCALING_FACTOR = 4 (src/nova/tests/unit/db/main/test_migrations.py:L180)
- **global-mutation**: FIXTURE = test_fixtures.MySQLOpportunisticFixture (src/nova/tests/unit/db/main/test_migrations.py:L455)
- **global-mutation**: FIXTURE = test_fixtures.PostgresqlOpportunisticFixture (src/nova/tests/unit/db/main/test_migrations.py:L463)

## Security Surface

- **sink** (`db-write`): sa.text( (src/nova/tests/unit/db/main/test_migrations.py:L143)
- **sink** (`db-write`): "SELECT count(*) " (src/nova/tests/unit/db/main/test_migrations.py:L144)
- **sink** (`db-write`): sa.text( (src/nova/tests/unit/db/main/test_migrations.py:L154)
- **sink** (`db-write`): "SELECT count(*) " (src/nova/tests/unit/db/main/test_migrations.py:L155)

