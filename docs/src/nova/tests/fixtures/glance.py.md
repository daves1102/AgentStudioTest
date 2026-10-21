# src/nova/tests/fixtures/glance.py

## Overview

This file implements the `glance` module, defining 1 class, 1 constant, 12 fields, 9 methods, 9 imports, 2 side effects, 6 security surface entries.

Lines: total 379, code 301, comment 29, blank 49

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/glance.py:L25–L25` |
| `GlanceFixture` | class | — | exported | not declared | — | `src/nova/tests/fixtures/glance.py:L28–L379` |
| `GlanceFixture.timestamp` | field | — | public | not declared | — | `src/nova/tests/fixtures/glance.py:L33–L35` |
| `GlanceFixture.image1` | field | — | public | not declared | — | `src/nova/tests/fixtures/glance.py:L37–L59` |
| `GlanceFixture.image2` | field | — | public | not declared | — | `src/nova/tests/fixtures/glance.py:L61–L82` |
| `GlanceFixture.image3` | field | — | public | not declared | — | `src/nova/tests/fixtures/glance.py:L84–L106` |
| `GlanceFixture.image4` | field | — | public | not declared | — | `src/nova/tests/fixtures/glance.py:L108–L129` |
| `GlanceFixture.image5` | field | — | public | not declared | — | `src/nova/tests/fixtures/glance.py:L131–L152` |
| `GlanceFixture.auto_disk_config_disabled_image` | field | — | public | not declared | — | `src/nova/tests/fixtures/glance.py:L154–L177` |
| `GlanceFixture.auto_disk_config_enabled_image` | field | — | public | not declared | — | `src/nova/tests/fixtures/glance.py:L179–L202` |
| `GlanceFixture.eph_encryption` | field | — | public | not declared | — | `src/nova/tests/fixtures/glance.py:L204–L204` |
| `GlanceFixture.eph_encryption_disabled` | field | — | public | not declared | — | `src/nova/tests/fixtures/glance.py:L210–L210` |
| `GlanceFixture.eph_encryption_luks` | field | — | public | not declared | — | `src/nova/tests/fixtures/glance.py:L216–L216` |
| `GlanceFixture.eph_encryption_plain` | field | — | public | not declared | — | `src/nova/tests/fixtures/glance.py:L223–L223` |
| `GlanceFixture.__init__` | method | (self, test) | public | not declared | 1/4 | `src/nova/tests/fixtures/glance.py:L230–L233` |
| `GlanceFixture.setUp` | method | (self) | public | not declared | 1/22 | `src/nova/tests/fixtures/glance.py:L235–L259` |
| `GlanceFixture.detail` | method | (self, context, **kwargs) | public | `copy.deepcopy(list(self.images.values()))` (src/nova/tests/fixtures/glance.py:L264) | 1/2 | `src/nova/tests/fixtures/glance.py:L262–L264` |
| `GlanceFixture.download` | method | (self, context, image_id, data=None, dst_path=None, trusted_certs=None) | public | not declared | 3/9 | `src/nova/tests/fixtures/glance.py:L266–L274` |
| `GlanceFixture.show` | method | (self, context, image_id, include_locations=False, show_deleted=True) | public | `copy.deepcopy(image)` (src/nova/tests/fixtures/glance.py:L285) | 2/10 | `src/nova/tests/fixtures/glance.py:L276–L290` |
| `GlanceFixture.create` | method | (self, context, metadata, data=None) | public | `self.images[image_id]` (src/nova/tests/fixtures/glance.py:L342) | 10/22 | `src/nova/tests/fixtures/glance.py:L292–L342` |
| `GlanceFixture.update` | method | (self, context, image_id, metadata, data=None, purge_props=False) | public | `self.images[image_id]` (src/nova/tests/fixtures/glance.py:L365) | 4/14 | `src/nova/tests/fixtures/glance.py:L344–L365` |
| `GlanceFixture.delete` | method | (self, context, image_id) | public | not declared | 2/4 | `src/nova/tests/fixtures/glance.py:L367–L374` |
| `GlanceFixture.get_location` | method | (self, context, image_id) | public | `'fake_location'` (src/nova/tests/fixtures/glance.py:L378); `None` (src/nova/tests/fixtures/glance.py:L379) | 2/4 | `src/nova/tests/fixtures/glance.py:L376–L379` |

## Dependencies

- `import copy` (src/nova/tests/fixtures/glance.py:L13)
- `import datetime` (src/nova/tests/fixtures/glance.py:L14)
- `import fixtures` (src/nova/tests/fixtures/glance.py:L16)
- `oslo_log`: imports `log as logging` (src/nova/tests/fixtures/glance.py:L17)
- `oslo_utils.fixture`: imports `uuidsentinel` (src/nova/tests/fixtures/glance.py:L18)
- `oslo_utils`: imports `uuidutils` (src/nova/tests/fixtures/glance.py:L19)
- `nova`: imports `exception` (src/nova/tests/fixtures/glance.py:L21)
- `nova.objects`: imports `fields as obj_fields` (src/nova/tests/fixtures/glance.py:L22)
- `nova.tests.fixtures`: imports `nova as nova_fixtures` (src/nova/tests/fixtures/glance.py:L23)

## Side Effects

- **file-io**: with open(dst_path, 'wb') as data: (src/nova/tests/fixtures/glance.py:L273)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/tests/fixtures/glance.py:L25)

## Security Surface

- **sink** (`file-write`): data.write(self._imagedata.get(image_id, b'')) (src/nova/tests/fixtures/glance.py:L271)
- **sink** (`file-write`): with open(dst_path, 'wb') as data: (src/nova/tests/fixtures/glance.py:L273)
- **sink** (`file-write`): data.write(self._imagedata.get(image_id, b'')) (src/nova/tests/fixtures/glance.py:L274)
- **sink** (`db-write`): def update(self, context, image_id, metadata, data=None, (src/nova/tests/fixtures/glance.py:L344)
- **sink** (`db-write`): image['properties'].update(metadata.pop('properties')) (src/nova/tests/fixtures/glance.py:L359)
- **sink** (`db-write`): image.update(metadata) (src/nova/tests/fixtures/glance.py:L363)

