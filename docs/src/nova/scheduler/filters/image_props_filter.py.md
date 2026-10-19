# src/nova/scheduler/filters/image_props_filter.py

## Overview

This file implements the `image_props_filter` module, defining 1 class, 3 constants, 1 field, 3 functions, 3 methods, 5 imports, 3 side effects.

Lines: total 129, code 84, comment 21, blank 24

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/scheduler/filters/image_props_filter.py:L25–L25` |
| `CONF` | constant | — | exported | not declared | — | `src/nova/scheduler/filters/image_props_filter.py:L27–L27` |
| `ImagePropertiesFilter` | class | — | exported | not declared | — | `src/nova/scheduler/filters/image_props_filter.py:L30–L129` |
| `ImagePropertiesFilter.RUN_ON_REBUILD` | constant | — | public | not declared | — | `src/nova/scheduler/filters/image_props_filter.py:L39–L39` |
| `ImagePropertiesFilter.run_filter_once_per_request` | field | — | public | not declared | — | `src/nova/scheduler/filters/image_props_filter.py:L43–L43` |
| `ImagePropertiesFilter._get_default_architecture` | method | (self) | private | `CONF.filter_scheduler.image_properties_default_architecture` (src/nova/scheduler/filters/image_props_filter.py:L46) | 1/2 | `src/nova/scheduler/filters/image_props_filter.py:L45–L46` |
| `ImagePropertiesFilter._instance_supported` | method | (self, host_state, image_props, hypervisor_version) | private | `True` (src/nova/scheduler/filters/image_props_filter.py:L63); `False` (src/nova/scheduler/filters/image_props_filter.py:L73); `True` (src/nova/scheduler/filters/image_props_filter.py:L105); `False` (src/nova/scheduler/filters/image_props_filter.py:L114) | 7/36 | `src/nova/scheduler/filters/image_props_filter.py:L48–L114` |
| `ImagePropertiesFilter._instance_supported._compare_props` | function | (props, other_props) | private | `False` (src/nova/scheduler/filters/image_props_filter.py:L78); `True` (src/nova/scheduler/filters/image_props_filter.py:L79) | — | `src/nova/scheduler/filters/image_props_filter.py:L75–L79` |
| `ImagePropertiesFilter._instance_supported._compare_product_version` | function | (hyper_version, image_props) | private | `True` (src/nova/scheduler/filters/image_props_filter.py:L84); `img_prop_predicate.satisfied_by(hyper_ver_str)` (src/nova/scheduler/filters/image_props_filter.py:L88) | — | `src/nova/scheduler/filters/image_props_filter.py:L81–L88` |
| `ImagePropertiesFilter._instance_supported._compare_maxphysaddr_bits` | function | (host_state, image_props) | private | `True` (src/nova/scheduler/filters/image_props_filter.py:L93); `True` (src/nova/scheduler/filters/image_props_filter.py:L97); `bits >= bits_required` (src/nova/scheduler/filters/image_props_filter.py:L99) | — | `src/nova/scheduler/filters/image_props_filter.py:L90–L99` |
| `ImagePropertiesFilter.host_passes` | method | (self, host_state, spec_obj) | public | `False` (src/nova/scheduler/filters/image_props_filter.py:L128); `True` (src/nova/scheduler/filters/image_props_filter.py:L129) | 3/8 | `src/nova/scheduler/filters/image_props_filter.py:L116–L129` |

## Dependencies

- `oslo_log`: imports `log as logging` (src/nova/scheduler/filters/image_props_filter.py:L17)
- `oslo_utils`: imports `versionutils` (src/nova/scheduler/filters/image_props_filter.py:L18)
- `import nova.conf` (src/nova/scheduler/filters/image_props_filter.py:L20)
- `nova.objects`: imports `fields` (src/nova/scheduler/filters/image_props_filter.py:L21)
- `nova.scheduler`: imports `filters` (src/nova/scheduler/filters/image_props_filter.py:L22)

## Side Effects

- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/scheduler/filters/image_props_filter.py:L25)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/scheduler/filters/image_props_filter.py:L27)
- **global-mutation**: RUN_ON_REBUILD = True (src/nova/scheduler/filters/image_props_filter.py:L39)

