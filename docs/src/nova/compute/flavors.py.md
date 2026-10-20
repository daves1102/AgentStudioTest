# src/nova/compute/flavors.py

## Overview

This file implements the `flavors` module, defining 2 constants, 6 functions, 2 variables, 10 imports, 2 side effects, 1 security surface entry.

Lines: total 210, code 127, comment 42, blank 41

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/compute/flavors.py:L34–L34` |
| `VALID_EXTRASPEC_NAME_REGEX` | constant | — | exported | not declared | — | `src/nova/compute/flavors.py:L37–L37` |
| `_int_or_none` | function | (val) | unexported | `int(val)` (src/nova/compute/flavors.py:L42) | 2/3 | `src/nova/compute/flavors.py:L40–L42` |
| `system_metadata_flavor_props` | variable | — | exported | not declared | — | `src/nova/compute/flavors.py:L45–L56` |
| `system_metadata_flavor_extra_props` | variable | — | exported | not declared | — | `src/nova/compute/flavors.py:L59–L61` |
| `create` | function | (name, memory, vcpus, root_gb, ephemeral_gb=0, flavorid=None, swap=0, rxtx_factor=1.0, is_public=True, description=None) | exported | `flavor` (src/nova/compute/flavors.py:L126) | 8/47 | `src/nova/compute/flavors.py:L64–L126` |
| `get_flavor_by_flavor_id` | function | (ctxt, flavorid, read_deleted="yes") | exported | `objects.Flavor.get_by_flavor_id(ctxt, flavorid, read_deleted)` (src/nova/compute/flavors.py:L136) | 1/2 | `src/nova/compute/flavors.py:L131–L136` |
| `extract_flavor` | function | (instance, prefix='') | exported | `None` (src/nova/compute/flavors.py:L151); `flavor` (src/nova/compute/flavors.py:L169) | 7/16 | `src/nova/compute/flavors.py:L142–L169` |
| `save_flavor_info` | function | (metadata, flavor, prefix='') | exported | `metadata` (src/nova/compute/flavors.py:L202) | 5/11 | `src/nova/compute/flavors.py:L176–L202` |
| `validate_extra_spec_keys` | function | (key_names_list) | exported | not declared | 3/6 | `src/nova/compute/flavors.py:L205–L210` |

## Dependencies

- `import re` (src/nova/compute/flavors.py:L21)
- `oslo_utils`: imports `strutils` (src/nova/compute/flavors.py:L23)
- `oslo_utils`: imports `uuidutils` (src/nova/compute/flavors.py:L24)
- `import nova.conf` (src/nova/compute/flavors.py:L26)
- `nova`: imports `context` (src/nova/compute/flavors.py:L27)
- `nova.db`: imports `constants as db_const` (src/nova/compute/flavors.py:L28)
- `nova`: imports `exception` (src/nova/compute/flavors.py:L29)
- `nova.i18n`: imports `_` (src/nova/compute/flavors.py:L30)
- `nova`: imports `objects` (src/nova/compute/flavors.py:L31)
- `nova`: imports `utils` (src/nova/compute/flavors.py:L32)

## Side Effects

- **global-mutation**: CONF = nova.conf.CONF (src/nova/compute/flavors.py:L34)
- **global-mutation**: VALID_EXTRASPEC_NAME_REGEX = re.compile(r"[\w\.\- :]+$", re.UNICODE) (src/nova/compute/flavors.py:L37)

## Security Surface

- **sink** (`db-write`): This can be used to update system_metadata in place from a type, as well (src/nova/compute/flavors.py:L182)

