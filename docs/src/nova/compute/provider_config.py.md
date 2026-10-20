# src/nova/compute/provider_config.py

## Overview

This file implements the `provider_config` module, defining 3 constants, 6 functions, 10 imports, 6 side effects.

Lines: total 421, code 299, comment 88, blank 34

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/compute/provider_config.py:L26–L26` |
| `SUPPORTED_SCHEMA_VERSIONS` | constant | — | exported | not declared | — | `src/nova/compute/provider_config.py:L30–L32` |
| `SCHEMA_V1` | constant | — | exported | not declared | — | `src/nova/compute/provider_config.py:L35–L212` |
| `_load_yaml_file` | function | (path) | unexported | `yaml.safe_load(open_file)` (src/nova/compute/provider_config.py:L226) | 4/17 | `src/nova/compute/provider_config.py:L215–L238` |
| `_validate_provider_config` | function | (config, provider_config_path) | unexported | `valid_providers` (src/nova/compute/provider_config.py:L310) | 5/21 | `src/nova/compute/provider_config.py:L241–L310` |
| `_validate_provider_config._validate_traits` | function | (provider) | private | `additional_traits` (src/nova/compute/provider_config.py:L263) | — | `src/nova/compute/provider_config.py:L251–L263` |
| `_validate_provider_config._validate_rc` | function | (provider) | private | `additional_inventories` (src/nova/compute/provider_config.py:L281) | — | `src/nova/compute/provider_config.py:L265–L281` |
| `_parse_provider_yaml` | function | (path) | unexported | `yaml_file` (src/nova/compute/provider_config.py:L356) | 5/29 | `src/nova/compute/provider_config.py:L313–L356` |
| `get_provider_configs` | function | (provider_config_dir) | exported | `provider_configs` (src/nova/compute/provider_config.py:L394); `provider_configs` (src/nova/compute/provider_config.py:L421) | 6/35 | `src/nova/compute/provider_config.py:L359–L421` |

## Dependencies

- `import glob` (src/nova/compute/provider_config.py:L13)
- `import jsonschema` (src/nova/compute/provider_config.py:L14)
- `import logging` (src/nova/compute/provider_config.py:L15)
- `import microversion_parse` (src/nova/compute/provider_config.py:L16)
- `import os` (src/nova/compute/provider_config.py:L17)
- `import yaml` (src/nova/compute/provider_config.py:L18)
- `import os_resource_classes` (src/nova/compute/provider_config.py:L20)
- `import os_traits` (src/nova/compute/provider_config.py:L21)
- `nova`: imports `exception as nova_exc` (src/nova/compute/provider_config.py:L23)
- `nova.i18n`: imports `_` (src/nova/compute/provider_config.py:L24)

## Side Effects

- **file-io**: with open(path) as open_file: (src/nova/compute/provider_config.py:L224)
- **file-io**: os.path.join(provider_config_dir, "*.yaml")) (src/nova/compute/provider_config.py:L383)
- **file-io**: provider['__source_file'] = os.path.basename(provider_config_path) (src/nova/compute/provider_config.py:L402)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/compute/provider_config.py:L26)
- **global-mutation**: SUPPORTED_SCHEMA_VERSIONS = { (src/nova/compute/provider_config.py:L30)
- **global-mutation**: SCHEMA_V1 = { (src/nova/compute/provider_config.py:L35)

