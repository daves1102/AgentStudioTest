# src/nova/objects/image_meta.py

## Overview

This file implements the `image_meta` module, defining 2 classs, 5 constants, 3 fields, 12 methods, 1 variable, 8 imports, 5 side effects.

Lines: total 812, code 408, comment 259, blank 145

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `NULLABLE_STRING_FIELDS` | constant | — | exported | not declared | — | `src/nova/objects/image_meta.py:L27–L28` |
| `NULLABLE_INTEGER_FIELDS` | constant | — | exported | not declared | — | `src/nova/objects/image_meta.py:L29–L29` |
| `__all__` | variable | — | unexported | not declared | — | `src/nova/objects/image_meta.py:L31–L34` |
| `ImageMeta` | class | — | exported | not declared | — | `src/nova/objects/image_meta.py:L38–L159` |
| `ImageMeta.VERSION` | constant | — | public | not declared | — | `src/nova/objects/image_meta.py:L48–L48` |
| `ImageMeta.fields` | field | — | public | not declared | — | `src/nova/objects/image_meta.py:L62–L81` |
| `ImageMeta.from_dict` | method | (cls, image_meta) | public | `cls(**image_meta)` (src/nova/objects/image_meta.py:L116) | 8/14 | `src/nova/objects/image_meta.py:L84–L116` |
| `ImageMeta.from_instance` | method | (cls, instance) | public | `cls.from_dict(image_meta)` (src/nova/objects/image_meta.py:L140) | 3/6 | `src/nova/objects/image_meta.py:L119–L140` |
| `ImageMeta.from_image_ref` | method | (cls, context, image_api, image_ref) | public | `image` (src/nova/objects/image_meta.py:L159) | 1/5 | `src/nova/objects/image_meta.py:L143–L159` |
| `ImageMetaProps` | class | — | exported | not declared | — | `src/nova/objects/image_meta.py:L163–L812` |
| `ImageMetaProps.VERSION` | constant | — | public | not declared | — | `src/nova/objects/image_meta.py:L214–L214` |
| `ImageMetaProps.obj_make_compatible` | method | (self, primitive, target_version) | public | not declared | 42/112 | `src/nova/objects/image_meta.py:L216–L332` |
| `ImageMetaProps.NUMA_NODES_MAX` | constant | — | public | not declared | — | `src/nova/objects/image_meta.py:L335–L335` |
| `ImageMetaProps.fields` | field | — | public | not declared | — | `src/nova/objects/image_meta.py:L342–L656` |
| `ImageMetaProps._legacy_property_map` | field | — | private | not declared | — | `src/nova/objects/image_meta.py:L660–L684` |
| `ImageMetaProps._set_attr_from_legacy_names` | method | (self, image_props) | private | not declared | 5/12 | `src/nova/objects/image_meta.py:L688–L702` |
| `ImageMetaProps._set_numa_mem` | method | (self, image_props) | private | not declared | 4/12 | `src/nova/objects/image_meta.py:L704–L716` |
| `ImageMetaProps._set_numa_cpus` | method | (self, image_props) | private | not declared | 4/13 | `src/nova/objects/image_meta.py:L718–L731` |
| `ImageMetaProps._set_attr_from_current_names` | method | (self, image_props) | private | not declared | 6/10 | `src/nova/objects/image_meta.py:L733–L747` |
| `ImageMetaProps._set_attr_from_trait_names` | method | (self, image_props) | private | not declared | 6/7 | `src/nova/objects/image_meta.py:L749–L755` |
| `ImageMetaProps.from_dict` | method | (cls, image_props) | public | `obj` (src/nova/objects/image_meta.py:L778) | 1/6 | `src/nova/objects/image_meta.py:L758–L778` |
| `ImageMetaProps.to_dict` | method | (self) | public | `base.obj_to_primitive(self)` (src/nova/objects/image_meta.py:L782) | 1/2 | `src/nova/objects/image_meta.py:L780–L782` |
| `ImageMetaProps.get` | method | (self, name, defvalue=None) | public | `defvalue` (src/nova/objects/image_meta.py:L810); `getattr(self, name)` (src/nova/objects/image_meta.py:L812) | 2/4 | `src/nova/objects/image_meta.py:L784–L812` |

## Dependencies

- `import copy` (src/nova/objects/image_meta.py:L15)
- `oslo_utils`: imports `versionutils` (src/nova/objects/image_meta.py:L17)
- `nova.network`: imports `model as network_model` (src/nova/objects/image_meta.py:L19)
- `nova`: imports `objects` (src/nova/objects/image_meta.py:L20)
- `nova.objects`: imports `base` (src/nova/objects/image_meta.py:L21)
- `nova.objects`: imports `fields` (src/nova/objects/image_meta.py:L22)
- `nova`: imports `utils` (src/nova/objects/image_meta.py:L23)
- `nova.virt`: imports `hardware` (src/nova/objects/image_meta.py:L24)

## Side Effects

- **global-mutation**: NULLABLE_STRING_FIELDS = ['name', 'checksum', 'owner', (src/nova/objects/image_meta.py:L27)
- **global-mutation**: NULLABLE_INTEGER_FIELDS = ['size', 'virtual_size'] (src/nova/objects/image_meta.py:L29)
- **global-mutation**: VERSION = '1.8' (src/nova/objects/image_meta.py:L48)
- **global-mutation**: VERSION = '1.44' (src/nova/objects/image_meta.py:L214)
- **global-mutation**: NUMA_NODES_MAX = 128 (src/nova/objects/image_meta.py:L335)

