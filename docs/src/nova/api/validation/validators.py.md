# src/nova/api/validation/validators.py

## Overview

This file implements the `validators` module, defining 1 class, 2 fields, 11 functions, 5 methods, 1 variable, 11 imports.

Lines: total 346, code 235, comment 55, blank 56

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `_FORMAT_CHECKER` | variable | — | unexported | not declared | — | `src/nova/api/validation/validators.py:L34–L34` |
| `_validate_regex_format` | function | (instance) | unexported | `True` (src/nova/api/validation/validators.py:L42); `False` (src/nova/api/validation/validators.py:L47); `False` (src/nova/api/validation/validators.py:L52); `True` (src/nova/api/validation/validators.py:L53) | 4/10 | `src/nova/api/validation/validators.py:L38–L53` |
| `_validate_datetime_format` | function | (instance) | unexported | `True` (src/nova/api/validation/validators.py:L61); `False` (src/nova/api/validation/validators.py:L66); `True` (src/nova/api/validation/validators.py:L68) | 3/9 | `src/nova/api/validation/validators.py:L57–L68` |
| `_validate_base64_format` | function | (instance) | unexported | `True` (src/nova/api/validation/validators.py:L76); `False` (src/nova/api/validation/validators.py:L85); `True` (src/nova/api/validation/validators.py:L87) | 4/10 | `src/nova/api/validation/validators.py:L72–L87` |
| `_validate_cidr_format` | function | (instance) | unexported | `True` (src/nova/api/validation/validators.py:L95); `False` (src/nova/api/validation/validators.py:L100); `False` (src/nova/api/validation/validators.py:L103); `False` (src/nova/api/validation/validators.py:L106); `True` (src/nova/api/validation/validators.py:L108) | 5/12 | `src/nova/api/validation/validators.py:L91–L108` |
| `_validate_uuid_format` | function | (instance) | unexported | `True` (src/nova/api/validation/validators.py:L116); `uuidutils.is_uuid_like(instance)` (src/nova/api/validation/validators.py:L118) | 2/4 | `src/nova/api/validation/validators.py:L112–L118` |
| `_validate_uri` | function | (instance) | unexported | `True` (src/nova/api/validation/validators.py:L126); `False` (src/nova/api/validation/validators.py:L137); `True` (src/nova/api/validation/validators.py:L139) | 3/14 | `src/nova/api/validation/validators.py:L122–L139` |
| `_validate_name_with_leading_trailing_spaces` | function | (instance) | unexported | `True` (src/nova/api/validation/validators.py:L148) | 3/8 | `src/nova/api/validation/validators.py:L144–L153` |
| `_validate_name` | function | (instance) | unexported | `True` (src/nova/api/validation/validators.py:L161) | 3/8 | `src/nova/api/validation/validators.py:L157–L166` |
| `_validate_az_name_with_leading_trailing_spaces` | function | (instance) | unexported | `True` (src/nova/api/validation/validators.py:L175) | 3/8 | `src/nova/api/validation/validators.py:L171–L180` |
| `_validate_az_name` | function | (instance) | unexported | `True` (src/nova/api/validation/validators.py:L188) | 3/8 | `src/nova/api/validation/validators.py:L184–L193` |
| `_soft_validate_additional_properties` | function | (validator, value, instance, schema) | unexported | `` (src/nova/api/validation/validators.py:L223); `` (src/nova/api/validation/validators.py:L237); `` (src/nova/api/validation/validators.py:L242) | 13/29 | `src/nova/api/validation/validators.py:L200–L255` |
| `_SchemaValidator` | class | — | unexported | not declared | — | `src/nova/api/validation/validators.py:L258–L346` |
| `_SchemaValidator.validator` | field | — | public | not declared | — | `src/nova/api/validation/validators.py:L268–L268` |
| `_SchemaValidator.validator_org` | field | — | public | not declared | — | `src/nova/api/validation/validators.py:L269–L269` |
| `_SchemaValidator.__init__` | method | (self, schema, relax_additional_properties=False, is_body=True) | public | not declared | 2/13 | `src/nova/api/validation/validators.py:L271–L284` |
| `_SchemaValidator.validate` | method | (self, *args, **kwargs) | public | not declared | 6/25 | `src/nova/api/validation/validators.py:L286–L322` |
| `_SchemaValidator._number_from_str` | method | (self, instance) | private | `None` (src/nova/api/validation/validators.py:L331); `value` (src/nova/api/validation/validators.py:L332) | 3/9 | `src/nova/api/validation/validators.py:L324–L332` |
| `_SchemaValidator._validate_minimum` | method | (self, validator, minimum, instance, schema) | private | `` (src/nova/api/validation/validators.py:L337); `self.validator_org.VALIDATORS['minimum'](validator, minimum, instance, schema)` (src/nova/api/validation/validators.py:L338) | 2/6 | `src/nova/api/validation/validators.py:L334–L339` |
| `_SchemaValidator._validate_maximum` | method | (self, validator, maximum, instance, schema) | private | `` (src/nova/api/validation/validators.py:L344); `self.validator_org.VALIDATORS['maximum'](validator, maximum, instance, schema)` (src/nova/api/validation/validators.py:L345) | 2/6 | `src/nova/api/validation/validators.py:L341–L346` |

## Dependencies

- `import re` (src/nova/api/validation/validators.py:L19)
- `import jsonschema` (src/nova/api/validation/validators.py:L21)
- `jsonschema`: imports `exceptions as jsonschema_exc` (src/nova/api/validation/validators.py:L22)
- `import netaddr` (src/nova/api/validation/validators.py:L23)
- `oslo_serialization`: imports `base64` (src/nova/api/validation/validators.py:L24)
- `oslo_utils`: imports `timeutils` (src/nova/api/validation/validators.py:L25)
- `oslo_utils`: imports `uuidutils` (src/nova/api/validation/validators.py:L26)
- `import rfc3986` (src/nova/api/validation/validators.py:L27)
- `nova.api.validation`: imports `parameter_types` (src/nova/api/validation/validators.py:L29)
- `nova`: imports `exception` (src/nova/api/validation/validators.py:L30)
- `nova.i18n`: imports `_` (src/nova/api/validation/validators.py:L31)

