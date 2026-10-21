# src/nova/tests/functional/test_servers_provider_tree.py

## Overview

This file implements the `test_servers_provider_tree` module, defining 2 classs, 1 constant, 4 fields, 5 functions, 17 methods, 8 imports, 1 side effect, 4 security surface entries.

Lines: total 763, code 577, comment 96, blank 90

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/tests/functional/test_servers_provider_tree.py:L29–L29` |
| `ProviderTreeTests` | class | — | exported | not declared | — | `src/nova/tests/functional/test_servers_provider_tree.py:L32–L574` |
| `ProviderTreeTests.compute_driver` | field | — | public | not declared | — | `src/nova/tests/functional/test_servers_provider_tree.py:L33–L33` |
| `ProviderTreeTests.expected_fake_driver_capability_traits` | field | — | public | not declared | — | `src/nova/tests/functional/test_servers_provider_tree.py:L37–L54` |
| `ProviderTreeTests.setUp` | method | (self) | public | not declared | 1/42 | `src/nova/tests/functional/test_servers_provider_tree.py:L56–L110` |
| `ProviderTreeTests._run_update_available_resource` | method | (self, startup) | private | not declared | 1/3 | `src/nova/tests/functional/test_servers_provider_tree.py:L112–L114` |
| `ProviderTreeTests._run_update_available_resource_and_assert_raises` | method | (self, exc=exception.ResourceProviderSyncFailed, startup=False) | private | not declared | 1/3 | `src/nova/tests/functional/test_servers_provider_tree.py:L116–L125` |
| `ProviderTreeTests.test_update_provider_tree_associated_info` | method | (self) | public | not declared | 1/43 | `src/nova/tests/functional/test_servers_provider_tree.py:L127–L180` |
| `ProviderTreeTests.test_update_provider_tree_associated_info.update_provider_tree` | function | (prov_tree, nodename) | public | not declared | — | `src/nova/tests/functional/test_servers_provider_tree.py:L161–L164` |
| `ProviderTreeTests._update_provider_tree_multiple_providers` | method | (self, startup=False, do_reshape=False) | private | not declared | 8/71 | `src/nova/tests/functional/test_servers_provider_tree.py:L182–L402` |
| `ProviderTreeTests._update_provider_tree_multiple_providers.update_provider_tree` | function | (prov_tree, nodename, allocations=None) | public | not declared | — | `src/nova/tests/functional/test_servers_provider_tree.py:L216–L307` |
| `ProviderTreeTests.test_update_provider_tree_multiple_providers` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/test_servers_provider_tree.py:L404–L405` |
| `ProviderTreeTests.test_update_provider_tree_multiple_providers_startup` | method | (self) | public | not declared | 1/2 | `src/nova/tests/functional/test_servers_provider_tree.py:L407–L409` |
| `ProviderTreeTests.test_update_provider_tree_bogus_resource_class` | method | (self) | public | not declared | 1/10 | `src/nova/tests/functional/test_servers_provider_tree.py:L411–L424` |
| `ProviderTreeTests.test_update_provider_tree_bogus_resource_class.update_provider_tree` | function | (prov_tree, nodename) | public | not declared | — | `src/nova/tests/functional/test_servers_provider_tree.py:L412–L413` |
| `ProviderTreeTests.test_update_provider_tree_bogus_trait` | method | (self) | public | not declared | 1/10 | `src/nova/tests/functional/test_servers_provider_tree.py:L426–L439` |
| `ProviderTreeTests.test_update_provider_tree_bogus_trait.update_provider_tree` | function | (prov_tree, nodename) | public | not declared | — | `src/nova/tests/functional/test_servers_provider_tree.py:L427–L428` |
| `ProviderTreeTests._create_instance` | method | (self, flavor) | private | `self._create_server( image_uuid='155d900f-4e14-4e4c-a73d-069cbf4541e6', flavor_id=flavor['id'], networks='none', az='nova:host1')` (src/nova/tests/functional/test_servers_provider_tree.py:L442) | 1/5 | `src/nova/tests/functional/test_servers_provider_tree.py:L441–L445` |
| `ProviderTreeTests.test_reshape` | method | (self) | public | not declared | 1/100 | `src/nova/tests/functional/test_servers_provider_tree.py:L447–L574` |
| `TraitsTrackingTests` | class | — | exported | not declared | — | `src/nova/tests/functional/test_servers_provider_tree.py:L577–L763` |
| `TraitsTrackingTests.compute_driver` | field | — | public | not declared | — | `src/nova/tests/functional/test_servers_provider_tree.py:L578–L578` |
| `TraitsTrackingTests.fake_caps` | field | — | public | not declared | — | `src/nova/tests/functional/test_servers_provider_tree.py:L580–L583` |
| `TraitsTrackingTests._mock_upt` | method | (self, traits_to_add, traits_to_remove) | private | not declared | 1/5 | `src/nova/tests/functional/test_servers_provider_tree.py:L585–L601` |
| `TraitsTrackingTests._mock_upt.fake_upt` | function | (self2, ptree, nodename, allocations=None) | public | not declared | — | `src/nova/tests/functional/test_servers_provider_tree.py:L591–L598` |
| `TraitsTrackingTests.test_resource_provider_traits` | method | (self) | public | not declared | 1/35 | `src/nova/tests/functional/test_servers_provider_tree.py:L605–L666` |
| `TraitsTrackingTests.test_admin_traits_preserved` | method | (self) | public | not declared | 1/14 | `src/nova/tests/functional/test_servers_provider_tree.py:L670–L691` |
| `TraitsTrackingTests.test_driver_removing_support_for_trait_via_capability` | method | (self) | public | not declared | 1/10 | `src/nova/tests/functional/test_servers_provider_tree.py:L695–L711` |
| `TraitsTrackingTests.test_driver_removing_trait_via_upt` | method | (self) | public | not declared | 1/12 | `src/nova/tests/functional/test_servers_provider_tree.py:L713–L733` |
| `TraitsTrackingTests.test_driver_removes_unsupported_trait_from_admin` | method | (self) | public | not declared | 1/13 | `src/nova/tests/functional/test_servers_provider_tree.py:L737–L763` |

## Dependencies

- `import os_traits` (src/nova/tests/functional/test_servers_provider_tree.py:L17)
- `unittest`: imports `mock` (src/nova/tests/functional/test_servers_provider_tree.py:L18)
- `oslo_log`: imports `log as logging` (src/nova/tests/functional/test_servers_provider_tree.py:L20)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/functional/test_servers_provider_tree.py:L21)
- `nova`: imports `context` (src/nova/tests/functional/test_servers_provider_tree.py:L23)
- `nova`: imports `exception` (src/nova/tests/functional/test_servers_provider_tree.py:L24)
- `nova.tests.functional`: imports `integrated_helpers` (src/nova/tests/functional/test_servers_provider_tree.py:L25)
- `nova.virt`: imports `fake` (src/nova/tests/functional/test_servers_provider_tree.py:L26)

## Side Effects

- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/tests/functional/test_servers_provider_tree.py:L29)

## Security Surface

- **sink** (`db-write`): expected_traits.update( (src/nova/tests/functional/test_servers_provider_tree.py:L654)
- **sink** (`db-write`): capability, then at the next periodic update doesn't report (src/nova/tests/functional/test_servers_provider_tree.py:L697)
- **sink** (`db-write`): initially, but at the next periodic update doesn't report it (src/nova/tests/functional/test_servers_provider_tree.py:L715)
- **sink** (`db-write`): reset, the driver will remove it during the next update. (src/nova/tests/functional/test_servers_provider_tree.py:L740)

