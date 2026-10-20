# src/nova/api/validation/parameter_types.py

## Overview

This file implements the `parameter_types` module, defining 1 class, 9 functions, 1 method, 57 variables, 6 imports.

Lines: total 537, code 372, comment 78, blank 87

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `_REGEX_RANGE_CACHE` | variable | — | unexported | not declared | — | `src/nova/api/validation/parameter_types.py:L27–L27` |
| `memorize` | function | (func) | exported | `memorizer` (src/nova/api/validation/parameter_types.py:L40) | 1/4 | `src/nova/api/validation/parameter_types.py:L30–L40` |
| `memorize.memorizer` | function | (*args, **kwargs) | public | `value` (src/nova/api/validation/parameter_types.py:L38) | — | `src/nova/api/validation/parameter_types.py:L32–L38` |
| `_reset_cache` | function | — | unexported | not declared | 1/3 | `src/nova/api/validation/parameter_types.py:L43–L45` |
| `single_param` | function | (schema) | exported | `ret` (src/nova/api/validation/parameter_types.py:L54) | 1/4 | `src/nova/api/validation/parameter_types.py:L48–L54` |
| `multi_params` | function | (schema) | exported | `{'type': 'array', 'items': schema}` (src/nova/api/validation/parameter_types.py:L61) | 1/2 | `src/nova/api/validation/parameter_types.py:L57–L61` |
| `common_query_param` | variable | — | exported | not declared | — | `src/nova/api/validation/parameter_types.py:L69–L69` |
| `common_query_regex_param` | variable | — | exported | not declared | — | `src/nova/api/validation/parameter_types.py:L70–L70` |
| `ValidationRegex` | class | — | exported | not declared | — | `src/nova/api/validation/parameter_types.py:L73–L76` |
| `ValidationRegex.__init__` | method | (self, regex, reason) | public | not declared | 1/3 | `src/nova/api/validation/parameter_types.py:L74–L76` |
| `_is_printable` | function | (char) | unexported | `(not category.startswith("C") and (not category.startswith("Z") or category == "Zs"))` (src/nova/api/validation/parameter_types.py:L89) | 3/4 | `src/nova/api/validation/parameter_types.py:L79–L90` |
| `_get_all_chars` | function | — | unexported | not declared | 2/3 | `src/nova/api/validation/parameter_types.py:L93–L95` |
| `_build_regex_range` | function | (ws=True, invert=False, exclude=None) | unexported | `regex` (src/nova/api/validation/parameter_types.py:L163) | 8/23 | `src/nova/api/validation/parameter_types.py:L108–L163` |
| `_build_regex_range.valid_char` | function | (char) | public | `not result` (src/nova/api/validation/parameter_types.py:L145); `result` (src/nova/api/validation/parameter_types.py:L146) | — | `src/nova/api/validation/parameter_types.py:L135–L146` |
| `valid_name_regex_base` | variable | — | exported | not declared | — | `src/nova/api/validation/parameter_types.py:L166–L166` |
| `valid_name_regex` | variable | — | exported | not declared | — | `src/nova/api/validation/parameter_types.py:L168–L173` |
| `valid_name_leading_trailing_spaces_regex_base` | variable | — | exported | not declared | — | `src/nova/api/validation/parameter_types.py:L176–L178` |
| `valid_az_name_regex` | variable | — | exported | not declared | — | `src/nova/api/validation/parameter_types.py:L180–L186` |
| `valid_az_name_leading_trailing_spaces_regex` | variable | — | exported | not declared | — | `src/nova/api/validation/parameter_types.py:L189–L194` |
| `valid_name_leading_trailing_spaces_regex` | variable | — | exported | not declared | — | `src/nova/api/validation/parameter_types.py:L196–L200` |
| `valid_description_regex_base` | variable | — | exported | not declared | — | `src/nova/api/validation/parameter_types.py:L202–L202` |
| `valid_description_regex` | variable | — | exported | not declared | — | `src/nova/api/validation/parameter_types.py:L204–L204` |
| `boolean` | variable | — | exported | not declared | — | `src/nova/api/validation/parameter_types.py:L206–L212` |
| `name_or_none` | variable | — | exported | not declared | — | `src/nova/api/validation/parameter_types.py:L215–L220` |
| `positive_integer` | variable | — | exported | not declared | — | `src/nova/api/validation/parameter_types.py:L222–L227` |
| `non_negative_integer` | variable | — | exported | not declared | — | `src/nova/api/validation/parameter_types.py:L229–L234` |
| `hostname` | variable | — | exported | not declared | — | `src/nova/api/validation/parameter_types.py:L261–L266` |
| `fqdn` | variable | — | exported | not declared | — | `src/nova/api/validation/parameter_types.py:L268–L278` |
| `name` | variable | — | exported | not declared | — | `src/nova/api/validation/parameter_types.py:L280–L289` |
| `az_name` | variable | — | exported | not declared | — | `src/nova/api/validation/parameter_types.py:L291–L296` |
| `keypair_name_special_chars` | variable | — | exported | not declared | — | `src/nova/api/validation/parameter_types.py:L298–L308` |
| `keypair_name_special_chars_v292` | variable | — | exported | not declared | — | `src/nova/api/validation/parameter_types.py:L310–L320` |
| `az_name_with_leading_trailing_spaces` | variable | — | exported | not declared | — | `src/nova/api/validation/parameter_types.py:L322–L327` |
| `name_with_leading_trailing_spaces` | variable | — | exported | not declared | — | `src/nova/api/validation/parameter_types.py:L329–L334` |
| `description` | variable | — | exported | not declared | — | `src/nova/api/validation/parameter_types.py:L336–L341` |
| `project_id` | variable | — | exported | not declared | — | `src/nova/api/validation/parameter_types.py:L343–L348` |
| `user_id` | variable | — | exported | not declared | — | `src/nova/api/validation/parameter_types.py:L350–L355` |
| `server_id` | variable | — | exported | not declared | — | `src/nova/api/validation/parameter_types.py:L357–L360` |
| `image_id` | variable | — | exported | not declared | — | `src/nova/api/validation/parameter_types.py:L362–L365` |
| `share_id` | variable | — | exported | not declared | — | `src/nova/api/validation/parameter_types.py:L367–L369` |
| `share_tag` | variable | — | exported | not declared | — | `src/nova/api/validation/parameter_types.py:L371–L374` |
| `share_export_location` | variable | — | exported | not declared | — | `src/nova/api/validation/parameter_types.py:L376–L378` |
| `share_status` | variable | — | exported | not declared | — | `src/nova/api/validation/parameter_types.py:L380–L383` |
| `image_id_or_empty_string` | variable | — | exported | not declared | — | `src/nova/api/validation/parameter_types.py:L385–L390` |
| `volume_id` | variable | — | exported | not declared | — | `src/nova/api/validation/parameter_types.py:L392–L395` |
| `attachment_id` | variable | — | exported | not declared | — | `src/nova/api/validation/parameter_types.py:L397–L400` |
| `volume_type` | variable | — | exported | not declared | — | `src/nova/api/validation/parameter_types.py:L402–L406` |
| `network_id` | variable | — | exported | not declared | — | `src/nova/api/validation/parameter_types.py:L408–L411` |
| `network_port_id` | variable | — | exported | not declared | — | `src/nova/api/validation/parameter_types.py:L413–L416` |
| `admin_password` | variable | — | exported | not declared | — | `src/nova/api/validation/parameter_types.py:L418–L425` |
| `flavor_ref` | variable | — | exported | not declared | — | `src/nova/api/validation/parameter_types.py:L427–L429` |
| `metadata` | variable | — | exported | not declared | — | `src/nova/api/validation/parameter_types.py:L431–L439` |
| `metadata_with_null` | variable | — | exported | not declared | — | `src/nova/api/validation/parameter_types.py:L441–L441` |
| `mac_address` | variable | — | exported | not declared | — | `src/nova/api/validation/parameter_types.py:L445–L448` |
| `ip_address` | variable | — | exported | not declared | — | `src/nova/api/validation/parameter_types.py:L450–L456` |
| `ipv4` | variable | — | exported | not declared | — | `src/nova/api/validation/parameter_types.py:L458–L460` |
| `ipv6` | variable | — | exported | not declared | — | `src/nova/api/validation/parameter_types.py:L462–L464` |
| `cidr` | variable | — | exported | not declared | — | `src/nova/api/validation/parameter_types.py:L466–L468` |
| `volume_size` | variable | — | exported | not declared | — | `src/nova/api/validation/parameter_types.py:L470–L477` |
| `disk_config` | variable | — | exported | not declared | — | `src/nova/api/validation/parameter_types.py:L479–L482` |
| `accessIPv4` | variable | — | exported | not declared | — | `src/nova/api/validation/parameter_types.py:L484–L487` |
| `accessIPv6` | variable | — | exported | not declared | — | `src/nova/api/validation/parameter_types.py:L489–L492` |
| `flavor_param_positive` | variable | — | exported | not declared | — | `src/nova/api/validation/parameter_types.py:L494–L494` |
| `flavor_param_non_negative` | variable | — | exported | not declared | — | `src/nova/api/validation/parameter_types.py:L496–L496` |
| `personality` | variable | — | exported | not declared | — | `src/nova/api/validation/parameter_types.py:L499–L512` |
| `tag` | variable | — | exported | not declared | — | `src/nova/api/validation/parameter_types.py:L514–L519` |
| `pagination_parameters` | variable | — | exported | not declared | — | `src/nova/api/validation/parameter_types.py:L521–L524` |
| `trusted_certs` | variable | — | exported | not declared | — | `src/nova/api/validation/parameter_types.py:L528–L537` |

## Dependencies

- `import copy` (src/nova/api/validation/parameter_types.py:L19)
- `import functools` (src/nova/api/validation/parameter_types.py:L20)
- `import re` (src/nova/api/validation/parameter_types.py:L21)
- `import unicodedata` (src/nova/api/validation/parameter_types.py:L22)
- `nova.i18n`: imports `_` (src/nova/api/validation/parameter_types.py:L24)
- `nova.objects`: imports `tag` (src/nova/api/validation/parameter_types.py:L25)

