# Quality Analysis Summary

## Overview

| Metric | Batch 1 (2026-10-16) | Batch 2 (2026-10-19) | Total |
|---|---|---|---|
| Files analyzed | 2 | 53 | 55 |
| Files with findings | 1 | 19 | 20 |
| High | 0 | 11 | 11 |
| Medium | 2 | 6 | 8 |
| Low | 2 | 10 | 12 |
| Info | 3 | 7 | 10 |

**Batch 2 findings by category:**

| Category | Count |
|---|---|
| complexity | 11 |
| error-handling | 5 |
| maintainability | 5 |
| bug-risk | 4 |
| readability | 2 |
| style | 2 |
| documentation | 1 |

**Configuration applied:** ruff defaults, pylint defaults, lizard defaults. No project `pyproject.toml`, `ruff.toml`, or `.pylintrc` found. All pylint `E0401` import errors dropped as environment noise. OVo (oslo.versionedobjects) framework patterns — `fields = {...}` class-level dicts, `attribute-defined-outside-init`, `too-few-public-methods`, `protected-access` — were not reported as they are intentional framework conventions.

---

## Hotspots

**Highest-complexity functions (CCN > 15):**

| Function | CCN | NLOC | File |
|---|---|---|---|
| `obj_make_compatible` | 42 | 112 | `objects/image_meta.py:216` |
| `_pass_exact_filters` | 32 | 49 | `objects/build_request.py:290` |
| `obj_make_compatible` | 31 | 51 | `objects/migrate_data.py:303` |
| `create` | 26 | 97 | `objects/instance.py:550` |
| `_extra_attributes_from_db_object` | 25 | 58 | `objects/instance.py:456` |
| `obj_make_compatible` | 25 | 36 | `objects/compute_node.py:105` |
| `save` | 22 | 60 | `objects/instance.py:790` |
| `_obj_load_attr` | 20 | 41 | `objects/instance.py:1154` |
| `get_by_filters` | 19 | 55 | `objects/build_request.py:381` |
| `_from_db_object` | 18 | 53 | `objects/instance.py:383` |
| `to_legacy_filter_properties_dict` | 18 | 21 | `objects/request_spec.py:459` |
| `obj_make_compatible` | 17 | 24 | `objects/request_spec.py:132` |

**Files with most findings:**

| File | Findings | High | Medium |
|---|---|---|---|
| `objects/instance.py` | 6 | 5 | 1 |
| `objects/request_spec.py` | 3 | 2 | 0 |
| `exception.py` | 3 | 0 | 0 |
| `objects/build_request.py` | 2 | 2 | 0 |
| `objects/image_meta.py` | 2 | 1 | 0 |
| `objects/migrate_data.py` | 2 | 1 | 0 |

**Files over 1000 lines:**

| File | Lines |
|---|---|
| `exception.py` | 2682 |
| `objects/instance.py` | 1715 |
| `objects/request_spec.py` | 1565 |
| `objects/fields.py` | 1469 |
| `utils.py` | 1209 |

---

## Selected Medium+ Findings

- **`objects/service.py:401`** — `except Exception: return` silently swallows all errors when embedding compute node data into versioned service objects.
- **`utils.py:162–214`** — 8 naive `datetime.datetime()` calls without `tzinfo` in audit-period calculation.
- **`utils.py:1103–1105`** — `try: lock.release_write_lock() except Exception: pass` — silent lock release failure may cause deadlock.
- **`objects/flavor.py:172`** — `except Exception as e: raise db_exc.DBError(e)` discards original exception type and traceback.
- **`objects/quotas.py:524,536`** — `QuotasNoOp.reserve` and `check_deltas` use wrong first-parameter names (`context`/`cls`) without `@staticmethod`/`@classmethod`; instance passed to wrong parameter.
- **`objects/instance_action.py:264`** — `finish_with_failure` called with `exc_val` set both positionally and by keyword; possible `TypeError` depending on remotable decorator behaviour.
- **`objects/diagnostics.py:132`** — 11-parameter constructor.

---

## Languages Not Linted

None. All 55 files are Python and were covered by ruff, pylint, and lizard.

## Tools Skipped or Failed

No tools skipped or failed. All pylint `E0401` import errors were dropped as environment noise.

## Notes

- `obj_make_compatible` methods dominate the high-complexity list across `image_meta.py`, `migrate_data.py`, `compute_node.py`, and `request_spec.py`. These are all OVo versioning methods that grow linearly with each API version. A shared pattern of version-dispatch tables would reduce this class of finding systematically.
- The `B018` "pointless statement" pattern (SQLAlchemy lazy-load trigger) appears in four places. Three (`host_mapping.py`, `instance_mapping.py` x2) have explanatory comments; `aggregate.py:191` does not.
- `tox.ini` and `pyproject.toml` are absent; no project-level linter configuration was applied.
