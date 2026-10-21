# src/nova/tests/unit/cmd/test_status.py

## Overview

This file implements the `test_status` module, defining 7 classs, 2 constants, 1 function, 40 methods, 17 imports, 2 side effects, 3 security surface entries.

Lines: total 464, code 357, comment 29, blank 78

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/unit/cmd/test_status.py:L46–L46` |
| `TestNovaStatusMain` | class | — | exported | not declared | — | `src/nova/tests/unit/cmd/test_status.py:L49–L100` |
| `TestNovaStatusMain.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/cmd/test_status.py:L52–L55` |
| `TestNovaStatusMain._check_main` | method | (self, mock_CONF, mock_parse_args, category_name='check', expected_return_value=0) | private | not declared | 1/7 | `src/nova/tests/unit/cmd/test_status.py:L59–L66` |
| `TestNovaStatusMain.test_main_version` | method | (self, mock_version_string) | public | not declared | 1/3 | `src/nova/tests/unit/cmd/test_status.py:L70–L72` |
| `TestNovaStatusMain.test_main_bash_completion` | method | (self, mock_print_bash) | public | not declared | 1/3 | `src/nova/tests/unit/cmd/test_status.py:L75–L77` |
| `TestNovaStatusMain.test_main` | method | (self, mock_get_action_fn) | public | not declared | 1/9 | `src/nova/tests/unit/cmd/test_status.py:L80–L89` |
| `TestNovaStatusMain.test_main_error` | method | (self, mock_get_action_fn) | public | not declared | 1/7 | `src/nova/tests/unit/cmd/test_status.py:L92–L100` |
| `TestPlacementCheck` | class | — | exported | not declared | — | `src/nova/tests/unit/cmd/test_status.py:L103–L259` |
| `TestPlacementCheck.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/cmd/test_status.py:L112–L116` |
| `TestPlacementCheck.test_no_auth` | method | (self, auth) | public | not declared | 1/5 | `src/nova/tests/unit/cmd/test_status.py:L119–L129` |
| `TestPlacementCheck._test_placement_get_interface` | method | (self, expected_interface, mock_get, mock_auth) | private | not declared | 1/7 | `src/nova/tests/unit/cmd/test_status.py:L133–L147` |
| `TestPlacementCheck._test_placement_get_interface.fake_request` | function | (path, method, *a, **kw) | public | `mock.Mock(autospec=models.Response)` (src/nova/tests/unit/cmd/test_status.py:L142) | — | `src/nova/tests/unit/cmd/test_status.py:L136–L142` |
| `TestPlacementCheck.test_placement_get_interface_default` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/cmd/test_status.py:L149–L151` |
| `TestPlacementCheck.test_placement_get_interface_internal` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/cmd/test_status.py:L153–L156` |
| `TestPlacementCheck.test_invalid_auth` | method | (self, get) | public | not declared | 1/5 | `src/nova/tests/unit/cmd/test_status.py:L159–L171` |
| `TestPlacementCheck.test_invalid_endpoint` | method | (self, get) | public | not declared | 1/5 | `src/nova/tests/unit/cmd/test_status.py:L174–L184` |
| `TestPlacementCheck.test_discovery_failure` | method | (self, get) | public | not declared | 1/5 | `src/nova/tests/unit/cmd/test_status.py:L187–L197` |
| `TestPlacementCheck.test_down_endpoint` | method | (self, get) | public | not declared | 1/5 | `src/nova/tests/unit/cmd/test_status.py:L200–L209` |
| `TestPlacementCheck.test_valid_version` | method | (self, get) | public | not declared | 1/12 | `src/nova/tests/unit/cmd/test_status.py:L212–L223` |
| `TestPlacementCheck.test_version_comparison_does_not_use_floats` | method | (self, get) | public | not declared | 1/12 | `src/nova/tests/unit/cmd/test_status.py:L226–L243` |
| `TestPlacementCheck.test_invalid_version` | method | (self, get) | public | not declared | 1/14 | `src/nova/tests/unit/cmd/test_status.py:L246–L259` |
| `TestUpgradeCheckCellsV2` | class | — | exported | not declared | — | `src/nova/tests/unit/cmd/test_status.py:L262–L353` |
| `TestUpgradeCheckCellsV2.USES_DB_SELF` | constant | — | public | not declared | — | `src/nova/tests/unit/cmd/test_status.py:L267–L267` |
| `TestUpgradeCheckCellsV2.setUp` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/cmd/test_status.py:L269–L274` |
| `TestUpgradeCheckCellsV2.test_check_no_cell_mappings` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/cmd/test_status.py:L276–L282` |
| `TestUpgradeCheckCellsV2._create_cell_mapping` | method | (self, uuid) | private | `cm` (src/nova/tests/unit/cmd/test_status.py:L292) | 1/9 | `src/nova/tests/unit/cmd/test_status.py:L284–L292` |
| `TestUpgradeCheckCellsV2.test_check_no_cell0_mapping` | method | (self) | public | not declared | 2/7 | `src/nova/tests/unit/cmd/test_status.py:L294–L302` |
| `TestUpgradeCheckCellsV2.test_check_no_host_mappings_with_computes` | method | (self) | public | not declared | 1/19 | `src/nova/tests/unit/cmd/test_status.py:L304–L326` |
| `TestUpgradeCheckCellsV2.test_check_no_host_mappings_no_computes` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/cmd/test_status.py:L328–L337` |
| `TestUpgradeCheckCellsV2.test_check_success` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/cmd/test_status.py:L339–L353` |
| `TestUpgradeCheckCinderAPI` | class | — | exported | not declared | — | `src/nova/tests/unit/cmd/test_status.py:L356–L392` |
| `TestUpgradeCheckCinderAPI.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/cmd/test_status.py:L358–L360` |
| `TestUpgradeCheckCinderAPI.test_cinder_not_configured` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/cmd/test_status.py:L362–L365` |
| `TestUpgradeCheckCinderAPI.test_microversion_not_available` | method | (self, mock_version_check) | public | not declared | 1/7 | `src/nova/tests/unit/cmd/test_status.py:L370–L376` |
| `TestUpgradeCheckCinderAPI.test_unknown_error` | method | (self, mock_version_check) | public | not declared | 1/6 | `src/nova/tests/unit/cmd/test_status.py:L380–L385` |
| `TestUpgradeCheckCinderAPI.test_microversion_available` | method | (self, mock_version_check) | public | not declared | 1/5 | `src/nova/tests/unit/cmd/test_status.py:L388–L392` |
| `TestUpgradeCheckOldCompute` | class | — | exported | not declared | — | `src/nova/tests/unit/cmd/test_status.py:L395–L421` |
| `TestUpgradeCheckOldCompute.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/cmd/test_status.py:L397–L399` |
| `TestUpgradeCheckOldCompute.test_no_compute` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/cmd/test_status.py:L401–L403` |
| `TestUpgradeCheckOldCompute.test_only_new_compute` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/cmd/test_status.py:L405–L412` |
| `TestUpgradeCheckOldCompute.test_old_compute` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/cmd/test_status.py:L414–L421` |
| `TestCheckMachineTypeUnset` | class | — | exported | not declared | — | `src/nova/tests/unit/cmd/test_status.py:L424–L448` |
| `TestCheckMachineTypeUnset.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/cmd/test_status.py:L426–L428` |
| `TestCheckMachineTypeUnset.test_instances_found_without_hw_machine_type` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/cmd/test_status.py:L433–L438` |
| `TestCheckMachineTypeUnset.test_instances_not_found_without_hw_machine_type` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/cmd/test_status.py:L443–L448` |
| `TestUpgradeCheckServiceUserToken` | class | — | exported | not declared | — | `src/nova/tests/unit/cmd/test_status.py:L451–L464` |
| `TestUpgradeCheckServiceUserToken.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/cmd/test_status.py:L453–L455` |
| `TestUpgradeCheckServiceUserToken.test_service_user_token_not_configured` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/cmd/test_status.py:L457–L459` |
| `TestUpgradeCheckServiceUserToken.test_service_user_token_configured` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/cmd/test_status.py:L461–L464` |

## Dependencies

- `io`: imports `StringIO` (src/nova/tests/unit/cmd/test_status.py:L23)
- `unittest`: imports `mock` (src/nova/tests/unit/cmd/test_status.py:L24)
- `import fixtures` (src/nova/tests/unit/cmd/test_status.py:L26)
- `keystoneauth1`: imports `exceptions as ks_exc` (src/nova/tests/unit/cmd/test_status.py:L27)
- `keystoneauth1`: imports `loading as keystone` (src/nova/tests/unit/cmd/test_status.py:L28)
- `keystoneauth1`: imports `session` (src/nova/tests/unit/cmd/test_status.py:L29)
- `oslo_upgradecheck`: imports `upgradecheck` (src/nova/tests/unit/cmd/test_status.py:L30)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/cmd/test_status.py:L31)
- `requests`: imports `models` (src/nova/tests/unit/cmd/test_status.py:L32)
- `nova.cmd`: imports `status` (src/nova/tests/unit/cmd/test_status.py:L34)
- `import nova.conf` (src/nova/tests/unit/cmd/test_status.py:L35)
- `nova`: imports `context` (src/nova/tests/unit/cmd/test_status.py:L36)
- `nova`: imports `exception` (src/nova/tests/unit/cmd/test_status.py:L37)
- `nova`: imports `objects` (src/nova/tests/unit/cmd/test_status.py:L40)
- `nova.objects`: imports `service` (src/nova/tests/unit/cmd/test_status.py:L41)
- `nova`: imports `test` (src/nova/tests/unit/cmd/test_status.py:L42)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/unit/cmd/test_status.py:L43)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/tests/unit/cmd/test_status.py:L46)
- **global-mutation**: USES_DB_SELF = True (src/nova/tests/unit/cmd/test_status.py:L267)

## Security Surface

- **privilege** (`crypto-key`): from keystoneauth1 import exceptions as ks_exc (src/nova/tests/unit/cmd/test_status.py:L27)
- **privilege** (`crypto-key`): from keystoneauth1 import loading as keystone (src/nova/tests/unit/cmd/test_status.py:L28)
- **privilege** (`crypto-key`): from keystoneauth1 import session (src/nova/tests/unit/cmd/test_status.py:L29)

