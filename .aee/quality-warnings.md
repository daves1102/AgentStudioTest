# Quality Analysis Warnings

- pylint emitted `E0401` (import-error) messages for `oslo_log`, `nova`, and related packages — environment noise (packages not installed in the analysis container), dropped per procedure.
- No project `pyproject.toml`, `ruff.toml`, or `.pylintrc` found; all linters ran with defaults.
- `tox.ini` not present; `tox -e lint` was not attempted.
- OVo framework patterns (`fields = {...}` class-level dicts, `attribute-defined-outside-init`, `too-few-public-methods`, `protected-access`, `super-with-arguments`) are intentional framework idioms and were suppressed across all `objects/` files.
- `RUF012` (mutable default class attributes) — 115 hits across the batch — are OVo `fields` dicts and intentional class-level constants; not reported.
- `SIM102` (merged nested if) — 34 hits — suppressed as style-only churn.
- `RUF100` (unused noqa) in `objects/__init__.py` — the noqa directives are under `TYPE_CHECKING` guards; not reported.

## Batch 3 (2026-10-20) — Additional suppressions

- `I001` (import sort, 181 hits), `UP031` (printf→f-string, 156), `RUF100` (unused noqa, 119), `UP008` (super() args, 93), `C408` (dict literal, 48), `UP004` (object inheritance, 42) — style-only, suppressed across all 311 files.
- `SIM102` (nested-if merging, 26 hits), `PIE790` (unnecessary pass, 11), `TRY201` (re-raise style, 14) — style churn, suppressed.
- `RUF012` (mutable class attribute) — 12 hits, OVo `fields` dicts, suppressed.
- `too-many-arguments` / `too-many-positional-arguments` (183 each), `too-many-locals` (106), `too-many-statements` (40) — suppressed as structural noise in OpenStack API layer; individual complexity tracked via lizard CCN.
- pylint `redefined-outer-name` (63 hits), `duplicate-code` (59 hits), `protected-access` (59 hits) — suppressed (OVo pattern / cross-file metric).
- Pylint E0401 import errors dropped (environment noise) across all 7 chunks of 50 files.
- Ruff `S`-prefixed rules (security) deferred to Security Analyzer — not reported here.

## Batch 5 Suppressions (nova/db, nova/scheduler, nova/notifications, nova/pci, nova/policies, nova/privsep)

### False positives suppressed
- `scheduler/filters/utils.py` L60 `comparison-with-callable`: `if based_on == min:` intentionally compares a callable — the function selects a min/max aggregation strategy. Not a bug.
- `scheduler/client/report.py` L1373 `try-except-raise`: pattern catches two specific exceptions to let them propagate while wrapping all others with logging. First except clause is necessary to prevent the general wrapper from obscuring domain exceptions.
- `db/main/api.py` B018 `expression-not-assigned` (multiple): SQLAlchemy lazy-load attribute-access probes in try/except blocks — intentional.
- `scheduler/manager.py` L76 B018: `self.placement_client` attribute-access probe in try/except during service init — intentional test for endpoint reachability.
- `notifications/objects/base.py` L157 broad-exception-caught: uses `excutils.save_and_reraise_exception()` — not a swallow, exception is re-raised after logging.

### Framework patterns suppressed (OVo, oslo patterns)
- `super-with-arguments` across all nova.notifications.objects files: legacy Python 2 super() calls, harmless.
- `too-few-public-methods` across all scheduler filters, weights, and notification object files: single-method plugin pattern by design.
- `useless-object-inheritance` across multiple files: Python 2 legacy, no functional impact.
- `attribute-defined-outside-init` in host_manager.py: framework-managed attribute lifecycle.
- `too-many-public-methods` in scheduler/client/report.py: placement API client class, interface by design.

### Noise suppressed (style/info level not meeting quality bar)
- `missing-module-docstring` and `missing-function-docstring` across all nova/policies/*.py files: policy definition modules are formulaic; missing docstrings are convention noise only.
- `invalid-name` across all migration files (alembic `op`, `sa`, `conn` variables): alembic convention.
- `consider-using-f-string` (UP031) across all files: batch-level style nit, not individual findings.
- `no-else-return`, `no-else-raise`, `superfluous-parens` across multiple files: style nits, info level.
- `unused-variable` for single-character loop counters (`d`, `_`): idiomatic Python.
- `duplicate-code` in host_manager.py: cross-file analysis required, not in scope.

### Tools not covering JavaScript, Go, C, C++
No files of these types in batch 5.

### Configuration applied
- ruff: project's `ruff.toml` / `pyproject.toml` (if present), else defaults
- pylint: defaults (import errors E0401 dropped as environment noise)
- lizard: default thresholds (CCN ≥ 15 = medium, CCN > 25 = high)
