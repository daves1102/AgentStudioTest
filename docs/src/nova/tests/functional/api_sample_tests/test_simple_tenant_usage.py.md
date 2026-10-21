# src/nova/tests/functional/api_sample_tests/test_simple_tenant_usage.py

## Overview

This file implements the `test_simple_tenant_usage` module, defining 2 classs, 3 constants, 4 fields, 11 methods, 6 imports, 3 side effects, 2 security surface entries.

Lines: total 156, code 105, comment 21, blank 30

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `SimpleTenantUsageSampleJsonTest` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_simple_tenant_usage.py:L25–L72` |
| `SimpleTenantUsageSampleJsonTest.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_simple_tenant_usage.py:L27–L27` |
| `SimpleTenantUsageSampleJsonTest.sample_dir` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_simple_tenant_usage.py:L28–L28` |
| `SimpleTenantUsageSampleJsonTest.setUp` | method | (self) | public | not declared | 1/11 | `src/nova/tests/functional/api_sample_tests/test_simple_tenant_usage.py:L30–L44` |
| `SimpleTenantUsageSampleJsonTest.tearDown` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/api_sample_tests/test_simple_tenant_usage.py:L46–L49` |
| `SimpleTenantUsageSampleJsonTest.test_get_tenants_usage` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/api_sample_tests/test_simple_tenant_usage.py:L51–L55` |
| `SimpleTenantUsageSampleJsonTest.test_get_tenants_usage_with_detail` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/api_sample_tests/test_simple_tenant_usage.py:L57–L64` |
| `SimpleTenantUsageSampleJsonTest.test_get_tenant_usage_details` | method | (self) | public | not declared | 1/6 | `src/nova/tests/functional/api_sample_tests/test_simple_tenant_usage.py:L66–L72` |
| `SimpleTenantUsageV240Test` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_simple_tenant_usage.py:L75–L156` |
| `SimpleTenantUsageV240Test.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_simple_tenant_usage.py:L77–L77` |
| `SimpleTenantUsageV240Test.USE_PROJECT_ID` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_simple_tenant_usage.py:L78–L78` |
| `SimpleTenantUsageV240Test.sample_dir` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_simple_tenant_usage.py:L80–L80` |
| `SimpleTenantUsageV240Test.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_simple_tenant_usage.py:L81–L81` |
| `SimpleTenantUsageV240Test.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_simple_tenant_usage.py:L82–L82` |
| `SimpleTenantUsageV240Test.setUp` | method | (self) | public | not declared | 2/23 | `src/nova/tests/functional/api_sample_tests/test_simple_tenant_usage.py:L84–L112` |
| `SimpleTenantUsageV240Test.tearDown` | method | (self) | public | not declared | 1/3 | `src/nova/tests/functional/api_sample_tests/test_simple_tenant_usage.py:L114–L116` |
| `SimpleTenantUsageV240Test.test_get_tenants_usage` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/api_sample_tests/test_simple_tenant_usage.py:L118–L122` |
| `SimpleTenantUsageV240Test.test_get_tenants_usage_with_detail` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/api_sample_tests/test_simple_tenant_usage.py:L124–L130` |
| `SimpleTenantUsageV240Test.test_get_tenant_usage_details` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/api_sample_tests/test_simple_tenant_usage.py:L132–L138` |
| `SimpleTenantUsageV240Test.test_get_tenants_usage_end_marker` | method | (self) | public | not declared | 1/12 | `src/nova/tests/functional/api_sample_tests/test_simple_tenant_usage.py:L140–L156` |

## Dependencies

- `import datetime` (src/nova/tests/functional/api_sample_tests/test_simple_tenant_usage.py:L15)
- `unittest`: imports `mock` (src/nova/tests/functional/api_sample_tests/test_simple_tenant_usage.py:L16)
- `urllib`: imports `parse` (src/nova/tests/functional/api_sample_tests/test_simple_tenant_usage.py:L17)
- `oslo_utils`: imports `timeutils` (src/nova/tests/functional/api_sample_tests/test_simple_tenant_usage.py:L19)
- `nova.tests.functional.api_sample_tests`: imports `test_servers` (src/nova/tests/functional/api_sample_tests/test_simple_tenant_usage.py:L21)
- `import nova.tests.functional.api_samples_test_base as astb` (src/nova/tests/functional/api_sample_tests/test_simple_tenant_usage.py:L22)

## Side Effects

- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/api_sample_tests/test_simple_tenant_usage.py:L27)
- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/api_sample_tests/test_simple_tenant_usage.py:L77)
- **global-mutation**: USE_PROJECT_ID = False (src/nova/tests/functional/api_sample_tests/test_simple_tenant_usage.py:L78)

## Security Surface

- **sink** (`db-write`): query.update({'detailed': 1}) (src/nova/tests/functional/api_sample_tests/test_simple_tenant_usage.py:L60)
- **sink** (`db-write`): query.update({'detailed': 1}) (src/nova/tests/functional/api_sample_tests/test_simple_tenant_usage.py:L126)

