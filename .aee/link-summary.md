# Link Summary

## Counts

| Metric | Value |
|---|---|
| Files | 198 |
| File edges | 8 |
| Cross-component edges | 0 |
| Resolved | 18 |
| Ambiguous | 0 |
| Unresolved | 0 |
| External imports | 517 |
| Seams | 6 |

## Component Dependencies

No cross-component file edges.

## Seams

| Kind | Count |
|---|---|
| http-endpoint | 2 |
| bus-topic | 0 |
| db-table | 1 |
| env-var | 2 |
| executable | 0 |
| native-symbol | 1 |

| Component A | Component B | Kind | Literal |
|---|---|---|---|
| aurora-cli | aurora-compute | env-var | AURORA_ADMIN_TOKEN |
| aurora-cli | aurora-compute | http-endpoint | /v1/profile/apply |
| aurora-cli | aurora-compute | http-endpoint | /v1/profile/list |
| aurora-compute | aurora-network | native-symbol | aurora_profile_label |
| aurora-identity | aurora-portal | db-table | tenant_region_assignment |
| aurora-portal | deploy | env-var | AURORA_DB_PASSWORD |

Kinds that produced no seams: bus-topic, executable.

## Unresolved Imports

None.

## Ambiguous References

None.

## Warnings

None.
