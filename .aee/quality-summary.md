# Quality Analysis Summary

## Overview

| Metric | Value |
|---|---|
| Files analyzed | 2 |
| Files with findings | 1 |
| Total findings | 7 |
| High | 0 |
| Medium | 2 |
| Low | 2 |
| Info | 3 |

**Findings by category:**

| Category | Count |
|---|---|
| error-handling | 1 |
| bug-risk | 1 |
| dead-code | 1 |
| documentation | 1 |
| style | 3 |

**Configuration applied:** ruff defaults (no project `ruff.toml` or `pyproject.toml` found); pylint defaults; lizard defaults.

---

## Files

### `src/nova/accelerator/__init__.py`
Empty file — no findings.

### `src/nova/accelerator/cyborg.py`
7 findings (0 high, 2 medium, 2 low, 3 info). 419 lines total, 324 lines of code. Maximum cyclomatic complexity: 6 (`get_device_request_groups`, `get_arqs_for_instance`). All functions are well within the complexity threshold of 15.

**Medium findings:**
- **W0718 — Broad `except Exception` in `_call_cyborg` (line 143):** Catches all exception types including programming errors; discards exception type information; callers receive only a string error message.
- **Bug-risk — Unguarded `rg_rp_map` key lookup in `create_arqs_and_match_resource_providers` (line 240):** Missing key raises raw `KeyError`, leaving orphaned ARQs.

**Low findings:**
- **RUF059/W0612 — Unused `resp` in three methods (lines 282, 378, 406):** Dead variable name in `bind_arqs`, `delete_arqs_for_instance`, `delete_arqs_by_uuid`.
- **C0116 — Missing docstrings on `get_client` and `get_device_profile_request_groups`:** Both are exported entry points called by other nova components.

**Info (style) findings:**
- **I001** — Import block not sorted per isort convention (lines 44–51).
- **UP004/R0205** — Redundant `object` base class on `_CyborgClient` (line 112).
- **UP031/C0209** — Legacy `%`-style format string in `get_arq_pci_device_profile` (line 81).

---

## Hotspots

**Highest-complexity functions:**

| Function | CCN | Lines |
|---|---|---|
| `get_device_request_groups` | 6 | 179–201 |
| `get_arqs_for_instance` | 6 | 291–335 |
| `bind_arqs` | 4 | 255–289 |
| `get_device_amount_of_dp_groups` | 5 | 94–109 |
| `_call_cyborg` | 3 | 136–147 |

**Files with most findings:** `src/nova/accelerator/cyborg.py` — 7 findings.

---

## Languages Not Linted

None. Both files are Python and were covered by ruff, pylint, and lizard.

---

## Tools Skipped or Failed

No tools skipped or failed. All pylint `E0401` import errors were dropped as environment noise (nova and oslo_log packages are not installed in the analysis container).

---

## Notes

- `tox.ini` and `pyproject.toml` are not present in the repository; linters ran with defaults.
- No Dockerfiles or shell scripts were present in the assigned file set.
