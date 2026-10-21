# src/nova/tests/unit/policies/test_limits.py

## Overview

This file implements the `test_limits` module, defining 2 classs, 1 constant, 2 fields, 1 function, 4 methods, 9 imports, 2 side effects.

Lines: total 109, code 75, comment 15, blank 19

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/unit/policies/test_limits.py:L24–L24` |
| `LimitsPolicyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_limits.py:L27–L89` |
| `LimitsPolicyTest.setUp` | method | (self) | public | not declared | 1/28 | `src/nova/tests/unit/policies/test_limits.py:L36–L72` |
| `LimitsPolicyTest.setUp.stub_get_project_quotas` | function | (context, project_id, usages=True) | public | `{k: dict(limit=v, in_use=v // 2) for k, v in self.absolute_limits.items()}` (src/nova/tests/unit/policies/test_limits.py:L57) | — | `src/nova/tests/unit/policies/test_limits.py:L56–L58` |
| `LimitsPolicyTest.test_get_limits_policy` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/policies/test_limits.py:L74–L78` |
| `LimitsPolicyTest.test_get_other_limits_policy` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/policies/test_limits.py:L80–L89` |
| `LimitsNoLegacyTest` | class | — | exported | not declared | — | `src/nova/tests/unit/policies/test_limits.py:L92–L109` |
| `LimitsNoLegacyTest.without_deprecated_rules` | field | — | public | not declared | — | `src/nova/tests/unit/policies/test_limits.py:L97–L97` |
| `LimitsNoLegacyTest.rules_without_deprecation` | field | — | public | not declared | — | `src/nova/tests/unit/policies/test_limits.py:L98–L100` |
| `LimitsNoLegacyTest.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/policies/test_limits.py:L102–L109` |

## Dependencies

- `import functools` (src/nova/tests/unit/policies/test_limits.py:L13)
- `unittest`: imports `mock` (src/nova/tests/unit/policies/test_limits.py:L14)
- `nova.api.openstack.compute`: imports `limits` (src/nova/tests/unit/policies/test_limits.py:L16)
- `import nova.conf` (src/nova/tests/unit/policies/test_limits.py:L17)
- `nova.policies`: imports `base as base_policy` (src/nova/tests/unit/policies/test_limits.py:L18)
- `nova.policies`: imports `limits as limits_policies` (src/nova/tests/unit/policies/test_limits.py:L19)
- `nova`: imports `quota` (src/nova/tests/unit/policies/test_limits.py:L20)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/policies/test_limits.py:L21)
- `nova.tests.unit.policies`: imports `base` (src/nova/tests/unit/policies/test_limits.py:L22)

## Side Effects

- **network**: from nova.api.openstack.compute import limits (src/nova/tests/unit/policies/test_limits.py:L16)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/tests/unit/policies/test_limits.py:L24)

