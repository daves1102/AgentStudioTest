# src/nova/tests/unit/compute/test_flavors.py

## Overview

This file implements the `test_flavors` module, defining 6 classs, 33 methods, 8 imports.

Lines: total 366, code 273, comment 24, blank 69

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `TestValidateExtraSpecKeys` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_flavors.py:L28–L38` |
| `TestValidateExtraSpecKeys.test_flavor_validate_extra_spec_keys_invalid_input` | method | (self) | public | not declared | 2/5 | `src/nova/tests/unit/compute/test_flavors.py:L30–L34` |
| `TestValidateExtraSpecKeys.test_flavor_validate_extra_spec_keys` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_flavors.py:L36–L38` |
| `TestGetFlavorByFlavorID` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_flavors.py:L41–L57` |
| `TestGetFlavorByFlavorID.test_will_not_get_instance_by_unknown_flavor_id` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_flavors.py:L44–L49` |
| `TestGetFlavorByFlavorID.test_will_get_instance_by_flavor_id` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/compute/test_flavors.py:L51–L57` |
| `TestExtractFlavor` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_flavors.py:L60–L97` |
| `TestExtractFlavor.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_flavors.py:L62–L64` |
| `TestExtractFlavor._dict_to_metadata` | method | (self, data) | private | `[{'key': key, 'value': value} for key, value in data.items()]` (src/nova/tests/unit/compute/test_flavors.py:L67) | 2/2 | `src/nova/tests/unit/compute/test_flavors.py:L66–L67` |
| `TestExtractFlavor._test_extract_flavor` | method | (self, prefix) | private | not declared | 3/13 | `src/nova/tests/unit/compute/test_flavors.py:L69–L84` |
| `TestExtractFlavor.test_extract_flavor` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_flavors.py:L86–L87` |
| `TestExtractFlavor.test_extract_flavor_no_sysmeta` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_flavors.py:L89–L94` |
| `TestExtractFlavor.test_extract_flavor_prefix` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_flavors.py:L96–L97` |
| `TestSaveFlavorInfo` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_flavors.py:L100–L141` |
| `TestSaveFlavorInfo.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_flavors.py:L102–L104` |
| `TestSaveFlavorInfo.test_save_flavor_info` | method | (self) | public | not declared | 2/13 | `src/nova/tests/unit/compute/test_flavors.py:L106–L122` |
| `TestSaveFlavorInfo.test_flavor_numa_extras_are_saved` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/compute/test_flavors.py:L124–L141` |
| `TestCreateFlavor` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_flavors.py:L144–L296` |
| `TestCreateFlavor.assertInvalidInput` | method | (self, *create_args, **create_kwargs) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_flavors.py:L146–L149` |
| `TestCreateFlavor.test_memory_must_be_positive_db_integer` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/compute/test_flavors.py:L151–L156` |
| `TestCreateFlavor.test_vcpus_must_be_positive_db_integer` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/compute/test_flavors.py:L158–L163` |
| `TestCreateFlavor.test_root_gb_must_be_nonnegative_db_integer` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/compute/test_flavors.py:L165–L170` |
| `TestCreateFlavor.test_ephemeral_gb_must_be_nonnegative_db_integer` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/compute/test_flavors.py:L172–L178` |
| `TestCreateFlavor.test_swap_must_be_nonnegative_db_integer` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/compute/test_flavors.py:L180–L186` |
| `TestCreateFlavor.test_rxtx_factor_must_be_positive_float` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/compute/test_flavors.py:L188–L197` |
| `TestCreateFlavor.test_rxtx_factor_must_be_within_sql_float_range` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/compute/test_flavors.py:L199–L209` |
| `TestCreateFlavor.test_is_public_must_be_valid_bool_string` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/compute/test_flavors.py:L211–L222` |
| `TestCreateFlavor.test_flavorid_populated` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/compute/test_flavors.py:L224–L232` |
| `TestCreateFlavor.test_default_values` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/compute/test_flavors.py:L234–L240` |
| `TestCreateFlavor.test_basic_create` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/compute/test_flavors.py:L242–L258` |
| `TestCreateFlavor.test_create_then_delete` | method | (self) | public | not declared | 2/17 | `src/nova/tests/unit/compute/test_flavors.py:L260–L282` |
| `TestCreateFlavor.test_duplicate_names_fail` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_flavors.py:L284–L289` |
| `TestCreateFlavor.test_duplicate_flavorids_fail` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_flavors.py:L291–L296` |
| `RedirectedUSBPortsFlavorTests` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_flavors.py:L299–L366` |
| `RedirectedUSBPortsFlavorTests.setUp` | method | (self) | public | not declared | 1/26 | `src/nova/tests/unit/compute/test_flavors.py:L300–L326` |
| `RedirectedUSBPortsFlavorTests.test_redirected_usb_ports_flavor_specs_integer` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/compute/test_flavors.py:L328–L336` |
| `RedirectedUSBPortsFlavorTests.test_redirected_usb_ports_flavor_specs_integer_as_string` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/compute/test_flavors.py:L338–L346` |
| `RedirectedUSBPortsFlavorTests.test_redirected_usb_ports_flavor_specs_integer_is_negative` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/compute/test_flavors.py:L348–L356` |
| `RedirectedUSBPortsFlavorTests.test_redirected_usb_ports_flavor_specs_non_integer` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/compute/test_flavors.py:L358–L366` |

## Dependencies

- `nova.compute`: imports `flavors` (src/nova/tests/unit/compute/test_flavors.py:L18)
- `nova`: imports `context` (src/nova/tests/unit/compute/test_flavors.py:L19)
- `nova.db`: imports `constants as db_const` (src/nova/tests/unit/compute/test_flavors.py:L20)
- `nova`: imports `exception` (src/nova/tests/unit/compute/test_flavors.py:L21)
- `nova`: imports `objects` (src/nova/tests/unit/compute/test_flavors.py:L22)
- `nova.objects`: imports `base as obj_base` (src/nova/tests/unit/compute/test_flavors.py:L23)
- `nova`: imports `test` (src/nova/tests/unit/compute/test_flavors.py:L24)
- `nova.virt.hardware`: imports `get_redirected_usb_ports` (src/nova/tests/unit/compute/test_flavors.py:L25)

