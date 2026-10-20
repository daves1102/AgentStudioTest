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
