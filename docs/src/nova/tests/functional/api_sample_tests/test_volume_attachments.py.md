# src/nova/tests/functional/api_sample_tests/test_volume_attachments.py

## Overview

This file implements the `test_volume_attachments` module, defining 7 classs, 3 constants, 13 fields, 11 methods, 2 imports, 3 side effects, 2 security surface entries.

Lines: total 180, code 130, comment 21, blank 29

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `VolumeAttachmentsSample` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_volume_attachments.py:L20–L91` |
| `VolumeAttachmentsSample.sample_dir` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_volume_attachments.py:L21–L21` |
| `VolumeAttachmentsSample.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_volume_attachments.py:L24–L24` |
| `VolumeAttachmentsSample.OLD_VOLUME_ID` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_volume_attachments.py:L26–L26` |
| `VolumeAttachmentsSample.NEW_VOLUME_ID` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_volume_attachments.py:L27–L27` |
| `VolumeAttachmentsSample.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/functional/api_sample_tests/test_volume_attachments.py:L29–L32` |
| `VolumeAttachmentsSample._get_vol_attachment_subs` | method | (self, subs) | private | `subs` (src/nova/tests/functional/api_sample_tests/test_volume_attachments.py:L36) | 1/2 | `src/nova/tests/functional/api_sample_tests/test_volume_attachments.py:L34–L36` |
| `VolumeAttachmentsSample.test_attach_volume_to_server` | method | (self) | public | `subs` (src/nova/tests/functional/api_sample_tests/test_volume_attachments.py:L49) | 1/12 | `src/nova/tests/functional/api_sample_tests/test_volume_attachments.py:L38–L49` |
| `VolumeAttachmentsSample.test_list_volume_attachments` | method | (self) | public | not declared | 1/13 | `src/nova/tests/functional/api_sample_tests/test_volume_attachments.py:L51–L65` |
| `VolumeAttachmentsSample.test_volume_attachment_detail` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/api_sample_tests/test_volume_attachments.py:L67–L73` |
| `VolumeAttachmentsSample.test_volume_attachment_delete` | method | (self) | public | not declared | 1/7 | `src/nova/tests/functional/api_sample_tests/test_volume_attachments.py:L75–L81` |
| `VolumeAttachmentsSample.test_volume_attachment_update` | method | (self) | public | not declared | 1/9 | `src/nova/tests/functional/api_sample_tests/test_volume_attachments.py:L83–L91` |
| `VolumeAttachmentsSampleV249` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_volume_attachments.py:L94–L109` |
| `VolumeAttachmentsSampleV249.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_volume_attachments.py:L96–L96` |
| `VolumeAttachmentsSampleV249.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_volume_attachments.py:L97–L97` |
| `VolumeAttachmentsSampleV249.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/api_sample_tests/test_volume_attachments.py:L99–L106` |
| `VolumeAttachmentsSampleV249._get_vol_attachment_subs` | method | (self, subs) | private | `dict(subs, tag='foo')` (src/nova/tests/functional/api_sample_tests/test_volume_attachments.py:L109) | 1/2 | `src/nova/tests/functional/api_sample_tests/test_volume_attachments.py:L108–L109` |
| `VolumeAttachmentsSampleV270` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_volume_attachments.py:L112–L115` |
| `VolumeAttachmentsSampleV270.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_volume_attachments.py:L114–L114` |
| `VolumeAttachmentsSampleV270.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_volume_attachments.py:L115–L115` |
| `VolumeAttachmentsSampleV279` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_volume_attachments.py:L118–L123` |
| `VolumeAttachmentsSampleV279.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_volume_attachments.py:L122–L122` |
| `VolumeAttachmentsSampleV279.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_volume_attachments.py:L123–L123` |
| `VolumeAttachmentsSampleV285` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_volume_attachments.py:L126–L153` |
| `VolumeAttachmentsSampleV285.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_volume_attachments.py:L133–L133` |
| `VolumeAttachmentsSampleV285.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_volume_attachments.py:L134–L134` |
| `VolumeAttachmentsSampleV285.test_volume_attachment_update` | method | (self) | public | not declared | 1/16 | `src/nova/tests/functional/api_sample_tests/test_volume_attachments.py:L136–L153` |
| `VolumeAttachmentsSampleV289` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_volume_attachments.py:L156–L161` |
| `VolumeAttachmentsSampleV289.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_volume_attachments.py:L160–L160` |
| `VolumeAttachmentsSampleV289.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_volume_attachments.py:L161–L161` |
| `VolumeAttachmentsSampleV2101` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_volume_attachments.py:L164–L180` |
| `VolumeAttachmentsSampleV2101.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_volume_attachments.py:L166–L166` |
| `VolumeAttachmentsSampleV2101.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_volume_attachments.py:L167–L167` |
| `VolumeAttachmentsSampleV2101.test_attach_volume_to_server` | method | (self) | public | `subs` (src/nova/tests/functional/api_sample_tests/test_volume_attachments.py:L180) | 1/12 | `src/nova/tests/functional/api_sample_tests/test_volume_attachments.py:L169–L180` |

## Dependencies

- `nova.tests`: imports `fixtures` (src/nova/tests/functional/api_sample_tests/test_volume_attachments.py:L16)
- `nova.tests.functional.api_sample_tests`: imports `test_servers` (src/nova/tests/functional/api_sample_tests/test_volume_attachments.py:L17)

## Side Effects

- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/api_sample_tests/test_volume_attachments.py:L24)
- **global-mutation**: OLD_VOLUME_ID = fixtures.CinderFixture.SWAP_OLD_VOL (src/nova/tests/functional/api_sample_tests/test_volume_attachments.py:L26)
- **global-mutation**: NEW_VOLUME_ID = fixtures.CinderFixture.SWAP_NEW_VOL (src/nova/tests/functional/api_sample_tests/test_volume_attachments.py:L27)

## Security Surface

- **sink** (`db-write`): 'update-volume-req', subs) (src/nova/tests/functional/api_sample_tests/test_volume_attachments.py:L89)
- **sink** (`db-write`): 'update-volume-attachment-delete-flag-req', subs) (src/nova/tests/functional/api_sample_tests/test_volume_attachments.py:L143)

