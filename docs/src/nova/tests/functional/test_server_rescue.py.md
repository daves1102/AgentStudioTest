# src/nova/tests/functional/test_server_rescue.py

## Overview

This file implements the `test_server_rescue` module, defining 7 classs, 12 fields, 9 methods, 5 imports, 1 security surface entry.

Lines: total 168, code 130, comment 12, blank 26

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `BFVRescue` | class | — | exported | not declared | — | `src/nova/tests/functional/test_server_rescue.py:L22–L70` |
| `BFVRescue.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/test_server_rescue.py:L25–L28` |
| `BFVRescue._create_image` | method | (self, metadata=None) | private | `self.glance.create(None, image)` (src/nova/tests/functional/test_server_rescue.py:L57) | 2/28 | `src/nova/tests/functional/test_server_rescue.py:L30–L57` |
| `BFVRescue._create_bfv_server` | method | (self, metadata=None) | private | `server, image` (src/nova/tests/functional/test_server_rescue.py:L70) | 1/12 | `src/nova/tests/functional/test_server_rescue.py:L59–L70` |
| `DisallowBFVRescuev286` | class | — | exported | not declared | — | `src/nova/tests/functional/test_server_rescue.py:L73–L86` |
| `DisallowBFVRescuev286.compute_driver` | field | — | public | not declared | — | `src/nova/tests/functional/test_server_rescue.py:L76–L76` |
| `DisallowBFVRescuev286.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/test_server_rescue.py:L77–L77` |
| `DisallowBFVRescuev286.test_bfv_rescue_not_supported` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/test_server_rescue.py:L79–L86` |
| `DisallowBFVRescuev286WithTrait` | class | — | exported | not declared | — | `src/nova/tests/functional/test_server_rescue.py:L89–L103` |
| `DisallowBFVRescuev286WithTrait.compute_driver` | field | — | public | not declared | — | `src/nova/tests/functional/test_server_rescue.py:L93–L93` |
| `DisallowBFVRescuev286WithTrait.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/test_server_rescue.py:L94–L94` |
| `DisallowBFVRescuev286WithTrait.test_bfv_rescue_not_supported` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/test_server_rescue.py:L96–L103` |
| `DisallowBFVRescuev287WithoutTrait` | class | — | exported | not declared | — | `src/nova/tests/functional/test_server_rescue.py:L106–L120` |
| `DisallowBFVRescuev287WithoutTrait.compute_driver` | field | — | public | not declared | — | `src/nova/tests/functional/test_server_rescue.py:L110–L110` |
| `DisallowBFVRescuev287WithoutTrait.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/test_server_rescue.py:L111–L111` |
| `DisallowBFVRescuev287WithoutTrait.test_bfv_rescue_not_supported` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/test_server_rescue.py:L113–L120` |
| `AllowBFVRescuev287WithTrait` | class | — | exported | not declared | — | `src/nova/tests/functional/test_server_rescue.py:L123–L134` |
| `AllowBFVRescuev287WithTrait.compute_driver` | field | — | public | not declared | — | `src/nova/tests/functional/test_server_rescue.py:L127–L127` |
| `AllowBFVRescuev287WithTrait.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/test_server_rescue.py:L128–L128` |
| `AllowBFVRescuev287WithTrait.test_bfv_rescue_supported` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/test_server_rescue.py:L130–L134` |
| `DisallowBFVRescuev287WithoutRescueImageProperties` | class | — | exported | not declared | — | `src/nova/tests/functional/test_server_rescue.py:L137–L153` |
| `DisallowBFVRescuev287WithoutRescueImageProperties.compute_driver` | field | — | public | not declared | — | `src/nova/tests/functional/test_server_rescue.py:L142–L142` |
| `DisallowBFVRescuev287WithoutRescueImageProperties.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/test_server_rescue.py:L143–L143` |
| `DisallowBFVRescuev287WithoutRescueImageProperties.test_bfv_rescue_failed` | method | (self) | public | not declared | 1/8 | `src/nova/tests/functional/test_server_rescue.py:L145–L153` |
| `AllowBFVRescuev287WithRescueImageProperties` | class | — | exported | not declared | — | `src/nova/tests/functional/test_server_rescue.py:L156–L168` |
| `AllowBFVRescuev287WithRescueImageProperties.compute_driver` | field | — | public | not declared | — | `src/nova/tests/functional/test_server_rescue.py:L161–L161` |
| `AllowBFVRescuev287WithRescueImageProperties.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/test_server_rescue.py:L162–L162` |
| `AllowBFVRescuev287WithRescueImageProperties.test_bfv_rescue_done` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/test_server_rescue.py:L164–L168` |

## Dependencies

- `import datetime` (src/nova/tests/functional/test_server_rescue.py:L13)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/functional/test_server_rescue.py:L15)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/functional/test_server_rescue.py:L17)
- `nova.tests.functional.api`: imports `client` (src/nova/tests/functional/test_server_rescue.py:L18)
- `nova.tests.functional`: imports `integrated_helpers` (src/nova/tests/functional/test_server_rescue.py:L19)

## Security Surface

- **sink** (`db-write`): image['properties'].update(metadata) (src/nova/tests/functional/test_server_rescue.py:L56)

