# src/nova/tests/unit/scheduler/weights/test_weights_image_props.py

## Overview

This file implements the `test_weights_image_props` module, defining 3 classs, 5 constants, 1 function, 10 methods, 1 staticmethod, 9 imports, 5 side effects.

Lines: total 269, code 185, comment 49, blank 35

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `PROP_PC` | constant | — | exported | not declared | — | `src/nova/tests/unit/scheduler/weights/test_weights_image_props.py:L27–L28` |
| `PROP_WIN_PC` | constant | — | exported | not declared | — | `src/nova/tests/unit/scheduler/weights/test_weights_image_props.py:L30–L32` |
| `PROP_LIN` | constant | — | exported | not declared | — | `src/nova/tests/unit/scheduler/weights/test_weights_image_props.py:L34–L35` |
| `PROP_LIN_PC` | constant | — | exported | not declared | — | `src/nova/tests/unit/scheduler/weights/test_weights_image_props.py:L37–L38` |
| `_ImagePropertiesWeigherBase` | class | — | unexported | not declared | — | `src/nova/tests/unit/scheduler/weights/test_weights_image_props.py:L41–L93` |
| `_ImagePropertiesWeigherBase.setUp` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/scheduler/weights/test_weights_image_props.py:L43–L49` |
| `_ImagePropertiesWeigherBase._fake_image_meta_from_instance` | method | (self, inst) | private | `PROP_WIN_PC` (src/nova/tests/unit/scheduler/weights/test_weights_image_props.py:L55); `PROP_LIN` (src/nova/tests/unit/scheduler/weights/test_weights_image_props.py:L58); `PROP_LIN_PC` (src/nova/tests/unit/scheduler/weights/test_weights_image_props.py:L60); `PROP_LIN` (src/nova/tests/unit/scheduler/weights/test_weights_image_props.py:L63); `objects.ImageMeta(properties=objects.ImageMetaProps())` (src/nova/tests/unit/scheduler/weights/test_weights_image_props.py:L65) | 5/11 | `src/nova/tests/unit/scheduler/weights/test_weights_image_props.py:L52–L65` |
| `_ImagePropertiesWeigherBase._get_weighed_host` | method | (self, hosts, request_spec=None) | private | `self.weight_handler.get_weighed_objects(self.weighers, hosts, request_spec)[0]` (src/nova/tests/unit/scheduler/weights/test_weights_image_props.py:L70) | 2/5 | `src/nova/tests/unit/scheduler/weights/test_weights_image_props.py:L67–L71` |
| `_ImagePropertiesWeigherBase._get_all_hosts` | method | (self) | private | `[fakes.FakeHostState(host, node, values) for host, node, values in host_values]` (src/nova/tests/unit/scheduler/weights/test_weights_image_props.py:L92) | 2/14 | `src/nova/tests/unit/scheduler/weights/test_weights_image_props.py:L73–L93` |
| `ImagePropertiesWeigherTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/scheduler/weights/test_weights_image_props.py:L96–L201` |
| `ImagePropertiesWeigherTestCase.test_multiplier_default` | method | (self, mock_fm) | public | not declared | 1/6 | `src/nova/tests/unit/scheduler/weights/test_weights_image_props.py:L99–L105` |
| `ImagePropertiesWeigherTestCase.test_multiplier_windows_and_pc` | method | (self, mock_fm) | public | not declared | 1/11 | `src/nova/tests/unit/scheduler/weights/test_weights_image_props.py:L108–L121` |
| `ImagePropertiesWeigherTestCase.test_multiplier_pc` | method | (self, mock_fm) | public | not declared | 2/15 | `src/nova/tests/unit/scheduler/weights/test_weights_image_props.py:L124–L140` |
| `ImagePropertiesWeigherTestCase.test_multiplier_linux` | method | (self, mock_fm) | public | not declared | 2/15 | `src/nova/tests/unit/scheduler/weights/test_weights_image_props.py:L143–L159` |
| `ImagePropertiesWeigherTestCase.test_multiplier_per_property` | method | (self, mock_fm) | public | not declared | 3/29 | `src/nova/tests/unit/scheduler/weights/test_weights_image_props.py:L162–L201` |
| `TestTargetCellCalled` | class | — | exported | not declared | — | `src/nova/tests/unit/scheduler/weights/test_weights_image_props.py:L204–L269` |
| `TestTargetCellCalled.USES_DB_SELF` | constant | — | public | not declared | — | `src/nova/tests/unit/scheduler/weights/test_weights_image_props.py:L207–L207` |
| `TestTargetCellCalled.test_target_cell_called` | method | (self, mock_get_admin_context, mock_from_dict, mock_get_by_uuid, mock_target_cell, mock_fm) | public | not declared | 1/36 | `src/nova/tests/unit/scheduler/weights/test_weights_image_props.py:L214–L269` |
| `TestTargetCellCalled.test_target_cell_called._fake_fill_metadata` | function | (_self) | private | not declared | — | `src/nova/tests/unit/scheduler/weights/test_weights_image_props.py:L260–L261` |
| `_ImagePropertiesWeigherBase._fake_image_meta_from_instance` | staticmethod | — | private | not declared | — | `src/nova/tests/unit/scheduler/weights/test_weights_image_props.py:L51–L65` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/scheduler/weights/test_weights_image_props.py:L15)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/scheduler/weights/test_weights_image_props.py:L17)
- `nova`: imports `context as nova_context` (src/nova/tests/unit/scheduler/weights/test_weights_image_props.py:L19)
- `nova`: imports `exception` (src/nova/tests/unit/scheduler/weights/test_weights_image_props.py:L20)
- `nova`: imports `objects` (src/nova/tests/unit/scheduler/weights/test_weights_image_props.py:L21)
- `nova.scheduler`: imports `weights` (src/nova/tests/unit/scheduler/weights/test_weights_image_props.py:L22)
- `nova.scheduler.weights`: imports `image_props` (src/nova/tests/unit/scheduler/weights/test_weights_image_props.py:L23)
- `nova`: imports `test` (src/nova/tests/unit/scheduler/weights/test_weights_image_props.py:L24)
- `nova.tests.unit.scheduler`: imports `fakes` (src/nova/tests/unit/scheduler/weights/test_weights_image_props.py:L25)

## Side Effects

- **global-mutation**: PROP_PC = objects.ImageMeta( (src/nova/tests/unit/scheduler/weights/test_weights_image_props.py:L27)
- **global-mutation**: PROP_WIN_PC = objects.ImageMeta( (src/nova/tests/unit/scheduler/weights/test_weights_image_props.py:L30)
- **global-mutation**: PROP_LIN = objects.ImageMeta( (src/nova/tests/unit/scheduler/weights/test_weights_image_props.py:L34)
- **global-mutation**: PROP_LIN_PC = objects.ImageMeta( (src/nova/tests/unit/scheduler/weights/test_weights_image_props.py:L37)
- **global-mutation**: USES_DB_SELF = True (src/nova/tests/unit/scheduler/weights/test_weights_image_props.py:L207)

