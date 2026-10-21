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

## Batch 6 Suppressions (nova/servicegroup, nova/share, nova/storage, nova/tests/*)

### Suppressed in test files (all categories)
- `missing-function-docstring`, `missing-class-docstring`, `missing-module-docstring`: convention noise in tests — test methods do not require docstrings.
- `protected-access` (5685 occurrences): tests legitimately access internal APIs to verify behavior.
- `no-member`, `no-value-for-parameter` (8983 occurrences): mock/fixture environment — linter cannot resolve mock attributes.
- `too-few-public-methods`, `too-many-public-methods`: test classes with single or many test methods are expected patterns.
- `attribute-defined-outside-init` (439 occurrences): test setUp() patterns legitimately set test state outside __init__.
- `duplicate-code`: test methods are intentionally parallel with minor variation.
- `super-with-arguments`, `useless-object-inheritance`, `redundant-u-string-prefix`: Python 2 legacy, no functional impact.
- `TRY002` (raise Exception in fakes): normal in test fixtures that simulate generic failures.
- `BLE001` (broad catch in tests): accepted in test helpers that test error-handling paths.
- `UP031` (printf→f-string), `C405/C408` (set/dict literal), `UP025` (redundant u-prefix): style, info level only.
- `DTZ001` (naive datetime): common in test factories, not a test-correctness issue.
- `RUF059` (unused loop variable): idiomatic Python in test data builders.
- `invalid-name`: test fixtures use short names (m, e, ctx, etc.) by convention.
- `RUF012` (mutable class vars in OVo classes): intentional framework pattern.
- `redundant-u-string-prefix` (UP025 x709): Python 2 compat legacy, suppressed across all test files.
- All pylint complexity flags (too-many-arguments, too-many-locals, too-many-branches) in test helpers: parameterised test helpers intentionally accept many arguments.

### 76 test files between 1000–3000 lines
Not individually reported; typical for comprehensive test suites. Files with > 3000 lines are reported as medium or high.

### Languages not covered
No JavaScript, TypeScript, Go, Shell, Dockerfile, or Java files in batch 6.

## Batch 7 — nova/virt, nova/volume, nova/wsgi (2026-10-21)

### Suppressions applied

- **UP008** (271 hits): `super(ClassName, self)` → `super()` — Python 2 legacy pattern throughout nova/virt. Suppressed as style-only.
- **UP031** (178 hits): printf-style → f-string — style noise, suppressed.
- **SIM102** (40 hits): nested-if collapsing — style churn, suppressed.
- **BLE001 / broad-exception-caught**: Many instances use `excutils.save_and_reraise_exception()` (OpenStack idiom) — these suppressed. Only genuine swallows and best-effort catches reported.
- **PIE790** (unnecessary pass): Abstract interface stubs reported as `info`; driver/vfs interface pass-only stubs suppressed where alongside `raise NotImplementedError`.
- **W0613 unused-argument**: Interface method signatures throughout virt driver hierarchy — suppressed (framework contract).
- **R0902/R0904/R0913-R0915**: Too-many-* metrics — suppressed. Driver files are large by design (libvirt driver 14,026 lines).
- **missing-function-docstring** (479 hits): Pervasive — suppressed as convention noise.
- **super-with-arguments** (270 hits): Python 2 compat pattern — suppressed.
- **RUF012** (34 hits): OVo mutable class vars — suppressed (OVo pattern).

### Tools run

ruff 0.16.10, pylint 4.1.2, lizard 1.24.1 — all completed successfully for all 96 files.

## Batch 8 — nova/ top-level package files (2026-10-21)

### Suppressions applied

- **thread_pool_factory.py L513**: `except BaseException as e: task.future.set_exception(e)` — correct thread-pool pattern, propagating exceptions through Futures. Suppressed.
- **UP031** (38 hits): printf→f-string style noise — suppressed.
- **UP008** (19 hits): `super(Cls, self)` Python 2 compat — suppressed.
- **UP004** (17 hits): useless-object-inheritance Python 2 compat — suppressed.
- **I001** (18 hits): import sort — suppressed.
- **RUF012** (5 hits): OVo mutable class vars — suppressed.
- **manager.py PIE790** (6 hits): abstract/stub `pass` statements in nova.manager base class — suppressed (interface stubs).

### Tools run

ruff 0.16.10, pylint 4.1.2, lizard 1.24.1 — all completed successfully for all 25 files.

### Pipeline status

**All 1509 source files now analyzed. Pipeline complete.**
