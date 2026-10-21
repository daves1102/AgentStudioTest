# src/nova/tests/fixtures/policy.py

## Overview

This file implements the `policy` module, defining 4 classs, 1 constant, 9 methods, 9 imports, 7 side effects, 3 security surface entries.

Lines: total 172, code 115, comment 22, blank 35

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/policy.py:L27–L27` |
| `RealPolicyFixture` | class | — | exported | not declared | — | `src/nova/tests/fixtures/policy.py:L30–L78` |
| `RealPolicyFixture._prepare_policy` | method | (self) | private | not declared | 1/2 | `src/nova/tests/fixtures/policy.py:L43–L45` |
| `RealPolicyFixture.setUp` | method | (self) | public | not declared | 1/8 | `src/nova/tests/fixtures/policy.py:L47–L58` |
| `RealPolicyFixture.set_rules` | method | (self, rules, overwrite=True) | public | not declared | 1/4 | `src/nova/tests/fixtures/policy.py:L60–L63` |
| `RealPolicyFixture.add_missing_default_rules` | method | (self, rules) | public | not declared | 4/4 | `src/nova/tests/fixtures/policy.py:L65–L78` |
| `PolicyFixture` | class | — | exported | not declared | — | `src/nova/tests/fixtures/policy.py:L81–L107` |
| `PolicyFixture._prepare_policy` | method | (self) | private | not declared | 1/9 | `src/nova/tests/fixtures/policy.py:L97–L107` |
| `RoleBasedPolicyFixture` | class | — | exported | not declared | — | `src/nova/tests/fixtures/policy.py:L110–L133` |
| `RoleBasedPolicyFixture.__init__` | method | (self, role="admin", *args, **kwargs) | public | not declared | 1/3 | `src/nova/tests/fixtures/policy.py:L120–L122` |
| `RoleBasedPolicyFixture._prepare_policy` | method | (self) | private | not declared | 2/8 | `src/nova/tests/fixtures/policy.py:L124–L133` |
| `OverridePolicyFixture` | class | — | exported | not declared | — | `src/nova/tests/fixtures/policy.py:L136–L172` |
| `OverridePolicyFixture.__init__` | method | (self, rules_in_file, *args, **kwargs) | public | not declared | 1/3 | `src/nova/tests/fixtures/policy.py:L162–L164` |
| `OverridePolicyFixture._prepare_policy` | method | (self) | private | not declared | 1/7 | `src/nova/tests/fixtures/policy.py:L166–L172` |

## Dependencies

- `import os` (src/nova/tests/fixtures/policy.py:L15)
- `import fixtures` (src/nova/tests/fixtures/policy.py:L17)
- `oslo_policy`: imports `policy as oslo_policy` (src/nova/tests/fixtures/policy.py:L18)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/fixtures/policy.py:L19)
- `import nova.conf` (src/nova/tests/fixtures/policy.py:L21)
- `nova.conf`: imports `paths` (src/nova/tests/fixtures/policy.py:L22)
- `nova`: imports `policies` (src/nova/tests/fixtures/policy.py:L23)
- `import nova.policy` (src/nova/tests/fixtures/policy.py:L24)
- `nova.tests.unit`: imports `fake_policy` (src/nova/tests/fixtures/policy.py:L25)

## Side Effects

- **file-io**: self.policy_file = os.path.join(self.policy_dir.path, (src/nova/tests/fixtures/policy.py:L99)
- **file-io**: with open(self.policy_file, 'w') as f: (src/nova/tests/fixtures/policy.py:L105)
- **file-io**: self.policy_file = os.path.join(self.policy_dir.path, 'policy.yaml') (src/nova/tests/fixtures/policy.py:L131)
- **file-io**: with open(self.policy_file, 'w') as f: (src/nova/tests/fixtures/policy.py:L132)
- **file-io**: self.policy_file = os.path.join(self.policy_dir.path, (src/nova/tests/fixtures/policy.py:L168)
- **file-io**: with open(self.policy_file, 'w') as f: (src/nova/tests/fixtures/policy.py:L170)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/tests/fixtures/policy.py:L27)

## Security Surface

- **sink** (`file-write`): with open(self.policy_file, 'w') as f: (src/nova/tests/fixtures/policy.py:L105)
- **sink** (`file-write`): with open(self.policy_file, 'w') as f: (src/nova/tests/fixtures/policy.py:L132)
- **sink** (`file-write`): with open(self.policy_file, 'w') as f: (src/nova/tests/fixtures/policy.py:L170)

