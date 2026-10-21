# src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py

## Overview

This file implements the `test_flavor_manage` module, defining 5 classs, 1 constant, 4 fields, 3 functions, 69 methods, 10 imports, 4 side effects, 9 security surface entries.

Lines: total 587, code 460, comment 29, blank 98

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `fake_create` | function | (newflavor) | exported | not declared | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L30–L40` |
| `fake_create_without_swap` | function | (newflavor) | exported | not declared | 1/12 | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L43–L54` |
| `FlavorManageTestV21` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L57–L351` |
| `FlavorManageTestV21.microversion` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L58–L58` |
| `FlavorManageTestV21.setUp` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L60–L78` |
| `FlavorManageTestV21._get_http_request` | method | (self, url='') | private | `fakes.HTTPRequest.blank(url, version=self.microversion, use_admin_context=True)` (src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L81) | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L80–L82` |
| `FlavorManageTestV21.test_delete` | method | (self, mock_destroy) | public | not declared | 1/9 | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L85–L96` |
| `FlavorManageTestV21._test_create_missing_parameter` | method | (self, parameter) | private | not declared | 1/18 | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L98–L117` |
| `FlavorManageTestV21.test_create_missing_name` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L119–L120` |
| `FlavorManageTestV21.test_create_missing_ram` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L122–L123` |
| `FlavorManageTestV21.test_create_missing_vcpus` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L125–L126` |
| `FlavorManageTestV21.test_create_missing_disk` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L128–L129` |
| `FlavorManageTestV21.test_create` | method | (self) | public | not declared | 2/6 | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L131–L136` |
| `FlavorManageTestV21.test_create_public_default` | method | (self) | public | not declared | 2/7 | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L138–L144` |
| `FlavorManageTestV21.test_create_without_flavorid` | method | (self) | public | not declared | 2/7 | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L146–L152` |
| `FlavorManageTestV21._create_flavor_bad_request_case` | method | (self, body) | private | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L154–L157` |
| `FlavorManageTestV21.test_create_invalid_name` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L159–L161` |
| `FlavorManageTestV21.test_create_flavor_name_is_whitespace` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L163–L165` |
| `FlavorManageTestV21.test_create_with_name_too_long` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L167–L169` |
| `FlavorManageTestV21.test_create_with_short_name` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L171–L173` |
| `FlavorManageTestV21.test_create_with_name_leading_trailing_spaces` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L175–L177` |
| `FlavorManageTestV21.test_create_with_name_leading_trailing_spaces_compat_mode` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L179–L184` |
| `FlavorManageTestV21.test_create_without_flavorname` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L186–L188` |
| `FlavorManageTestV21.test_create_empty_body` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L190–L194` |
| `FlavorManageTestV21.test_create_no_body` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L196–L198` |
| `FlavorManageTestV21.test_create_invalid_format_body` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L200–L204` |
| `FlavorManageTestV21.test_create_invalid_flavorid` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L206–L208` |
| `FlavorManageTestV21.test_create_check_flavor_id_length` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L210–L213` |
| `FlavorManageTestV21.test_create_with_leading_trailing_whitespaces_in_flavor_id` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L215–L217` |
| `FlavorManageTestV21.test_create_without_ram` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L219–L221` |
| `FlavorManageTestV21.test_create_with_0_ram` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L223–L225` |
| `FlavorManageTestV21.test_create_with_ram_exceed_max_limit` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L227–L229` |
| `FlavorManageTestV21.test_create_with_minus_ram` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L231–L233` |
| `FlavorManageTestV21.test_create_with_invalid_ram` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L235–L237` |
| `FlavorManageTestV21.test_create_without_vcpus` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L239–L241` |
| `FlavorManageTestV21.test_create_with_0_vcpus` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L243–L245` |
| `FlavorManageTestV21.test_create_with_vcpus_exceed_max_limit` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L247–L249` |
| `FlavorManageTestV21.test_create_with_minus_vcpus` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L251–L253` |
| `FlavorManageTestV21.test_create_with_invalid_vcpus` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L255–L257` |
| `FlavorManageTestV21.test_create_without_disk` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L259–L261` |
| `FlavorManageTestV21.test_create_with_disk_exceed_max_limit` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L263–L265` |
| `FlavorManageTestV21.test_create_with_minus_disk` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L267–L269` |
| `FlavorManageTestV21.test_create_with_invalid_disk` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L271–L273` |
| `FlavorManageTestV21.test_create_with_minus_ephemeral` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L275–L277` |
| `FlavorManageTestV21.test_create_with_invalid_ephemeral` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L279–L281` |
| `FlavorManageTestV21.test_create_with_ephemeral_exceed_max_limit` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L283–L286` |
| `FlavorManageTestV21.test_create_with_minus_swap` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L288–L290` |
| `FlavorManageTestV21.test_create_with_invalid_swap` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L292–L294` |
| `FlavorManageTestV21.test_create_with_swap_exceed_max_limit` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L296–L298` |
| `FlavorManageTestV21.test_create_with_minus_rxtx_factor` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L300–L302` |
| `FlavorManageTestV21.test_create_with_rxtx_factor_exceed_max_limit` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L304–L307` |
| `FlavorManageTestV21.test_create_with_non_boolean_is_public` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L309–L311` |
| `FlavorManageTestV21.test_flavor_exists_exception_returns_409` | method | (self) | public | not declared | 1/18 | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L313–L334` |
| `FlavorManageTestV21.test_flavor_exists_exception_returns_409.fake_create` | function | (name, memory_mb, vcpus, root_gb, ephemeral_gb, flavorid, swap, rxtx_factor, is_public, description) | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L328–L330` |
| `FlavorManageTestV21.test_create_with_description` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L336–L342` |
| `FlavorManageTestV21.test_flavor_update_description` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L344–L351` |
| `FlavorManageTestV255` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L354–L450` |
| `FlavorManageTestV255.microversion` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L355–L355` |
| `FlavorManageTestV255.get_flavor` | method | (self, flavor, **kwargs) | public | `objects.Flavor( flavorid=flavor['id'], name=flavor['name'], memory_mb=flavor['ram'], vcpus=flavor['vcpus'], root_gb=flavor['disk'], swap=flavor['swap'], ephemeral_gb=flavor['OS-FLV-EXT-DATA:ephemeral'` (src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L358) | 1/11 | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L357–L367` |
| `FlavorManageTestV255.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L369–L372` |
| `FlavorManageTestV255.test_create_with_description` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L374–L376` |
| `FlavorManageTestV255.test_flavor_update_description` | method | (self, mock_flavor_save, mock_get) | public | not declared | 1/12 | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L380–L395` |
| `FlavorManageTestV255.test_flavor_update_not_found` | method | (self, mock_get) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L399–L404` |
| `FlavorManageTestV255.test_flavor_update_missing_description` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L406–L413` |
| `FlavorManageTestV255.test_create_with_invalid_description` | method | (self) | public | not declared | 2/7 | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L415–L424` |
| `FlavorManageTestV255.test_update_with_invalid_description` | method | (self, mock_flavor_save, mock_get) | public | not declared | 2/19 | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L428–L450` |
| `FlavorManageTestV261` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L453–L476` |
| `FlavorManageTestV261.microversion` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L455–L455` |
| `FlavorManageTestV261.get_flavor` | method | (self, flavor) | public | `super().get_flavor( flavor, extra_specs={"key1": "value1"})` (src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L458) | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L457–L459` |
| `FlavorManageTestV261.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L461–L464` |
| `FlavorManageTestV261.test_flavor_update_extra_spec` | method | (self, mock_flavor_save, mock_get) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L468–L476` |
| `FlavorManageTestV275` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L479–L540` |
| `FlavorManageTestV275.microversion` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L480–L480` |
| `FlavorManageTestV275.FLAVOR_WITH_NO_SWAP` | constant | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L482–L494` |
| `FlavorManageTestV275.test_create_flavor_default_swap_value_old_version` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L496–L502` |
| `FlavorManageTestV275.test_update_flavor_default_swap_value_old_version` | method | (self, mock_save, mock_get) | public | not declared | 1/12 | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L506–L518` |
| `FlavorManageTestV275.test_create_flavor_default_swap_value` | method | (self, mock_get) | public | not declared | 1/6 | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L521–L526` |
| `FlavorManageTestV275.test_update_flavor_default_swap_value` | method | (self, mock_save, mock_get) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L530–L540` |
| `PrivateFlavorManageTestV21` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L543–L587` |
| `PrivateFlavorManageTestV21.setUp` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L545–L559` |
| `PrivateFlavorManageTestV21.test_create_private_flavor_should_not_grant_flavor_access` | method | (self) | public | not declared | 2/16 | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L561–L579` |
| `PrivateFlavorManageTestV21.test_create_public_flavor_should_not_create_flavor_access` | method | (self) | public | not declared | 2/7 | `src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L581–L587` |

## Dependencies

- `import copy` (src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L16)
- `unittest`: imports `mock` (src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L17)
- `import webob` (src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L19)
- `nova.api.openstack.compute`: imports `flavor_access` (src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L21)
- `nova.api.openstack.compute`: imports `flavors` (src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L22)
- `nova.db`: imports `constants as db_const` (src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L23)
- `nova`: imports `exception` (src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L24)
- `nova`: imports `objects` (src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L25)
- `nova`: imports `test` (src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L26)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L27)

## Side Effects

- **network**: from nova.api.openstack.compute import flavor_access (src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L21)
- **network**: from nova.api.openstack.compute import flavors (src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L22)
- **global-mutation**: MAX_LENGTH = 255 (src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L211)
- **global-mutation**: FLAVOR_WITH_NO_SWAP = objects.Flavor( (src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L482)

## Security Surface

- **sink** (`db-write`): exception.VersionNotFoundForAPIMethod, self.controller.update, (src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L349)
- **sink** (`db-write`): flavor = self.controller.update( (src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L389)
- **sink** (`db-write`): self.controller.update, (src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L402)
- **sink** (`db-write`): is provided in the update request body. (src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L408)
- **sink** (`db-write`): self.controller.update, (src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L411)
- **sink** (`db-write`): exception.ValidationError, self.controller.update, (src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L448)
- **sink** (`db-write`): flavor = self.controller.update( (src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L473)
- **sink** (`db-write`): flavor = self.controller.update( (src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L515)
- **sink** (`db-write`): flavor = self.controller.update( (src/nova/tests/unit/api/openstack/compute/test_flavor_manage.py:L537)

