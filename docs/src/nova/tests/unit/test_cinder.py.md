# src/nova/tests/unit/test_cinder.py

## Overview

This file implements the `test_cinder` module, defining 4 classs, 3 constants, 20 methods, 12 variables, 10 imports, 8 side effects, 1 security surface entry.

Lines: total 257, code 185, comment 26, blank 46

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/unit/test_cinder.py:L29–L29` |
| `_image_metadata` | variable | — | unexported | not declared | — | `src/nova/tests/unit/test_cinder.py:L31–L34` |
| `_volume_id` | variable | — | unexported | not declared | — | `src/nova/tests/unit/test_cinder.py:L37–L37` |
| `_instance_uuid` | variable | — | unexported | not declared | — | `src/nova/tests/unit/test_cinder.py:L38–L38` |
| `_instance_uuid_2` | variable | — | unexported | not declared | — | `src/nova/tests/unit/test_cinder.py:L39–L39` |
| `_attachment_id` | variable | — | unexported | not declared | — | `src/nova/tests/unit/test_cinder.py:L40–L40` |
| `_attachment_id_2` | variable | — | unexported | not declared | — | `src/nova/tests/unit/test_cinder.py:L41–L41` |
| `_device` | variable | — | unexported | not declared | — | `src/nova/tests/unit/test_cinder.py:L42–L42` |
| `_device_2` | variable | — | unexported | not declared | — | `src/nova/tests/unit/test_cinder.py:L43–L43` |
| `_volume_attachment` | variable | — | unexported | not declared | — | `src/nova/tests/unit/test_cinder.py:L46–L53` |
| `_volume_attachment_2` | variable | — | unexported | not declared | — | `src/nova/tests/unit/test_cinder.py:L56–L56` |
| `exp_volume_attachment` | variable | — | exported | not declared | — | `src/nova/tests/unit/test_cinder.py:L65–L65` |
| `exp_volume_attachment_2` | variable | — | exported | not declared | — | `src/nova/tests/unit/test_cinder.py:L68–L68` |
| `BaseCinderTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_cinder.py:L73–L115` |
| `BaseCinderTestCase.setUp` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/test_cinder.py:L75–L84` |
| `BaseCinderTestCase.flags` | method | (self, *args, **kwargs) | public | not declared | 1/3 | `src/nova/tests/unit/test_cinder.py:L86–L88` |
| `BaseCinderTestCase.create_client` | method | (self) | public | `cinder.cinderclient(self.context)` (src/nova/tests/unit/test_cinder.py:L91) | 1/2 | `src/nova/tests/unit/test_cinder.py:L90–L91` |
| `BaseCinderTestCase.test_context_with_catalog` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/test_cinder.py:L93–L94` |
| `BaseCinderTestCase.test_cinder_http_retries` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/test_cinder.py:L96–L99` |
| `BaseCinderTestCase.test_cinder_api_insecure` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/test_cinder.py:L101–L105` |
| `BaseCinderTestCase.test_cinder_http_timeout` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/test_cinder.py:L107–L110` |
| `BaseCinderTestCase.test_cinder_api_cacert_file` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/test_cinder.py:L112–L115` |
| `CinderV1TestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_cinder.py:L120–L136` |
| `CinderV1TestCase.test_cinderclient_unsupported_v1` | method | (self, get_api_version) | public | not declared | 1/11 | `src/nova/tests/unit/test_cinder.py:L124–L136` |
| `CinderV2TestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_cinder.py:L141–L157` |
| `CinderV2TestCase.test_cinderclient_unsupported_v2` | method | (self, get_api_version) | public | not declared | 1/11 | `src/nova/tests/unit/test_cinder.py:L145–L157` |
| `CinderV3TestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/test_cinder.py:L160–L257` |
| `CinderV3TestCase.URL` | constant | — | public | not declared | — | `src/nova/tests/unit/test_cinder.py:L163–L163` |
| `CinderV3TestCase.CATALOG` | constant | — | public | not declared | — | `src/nova/tests/unit/test_cinder.py:L165–L169` |
| `CinderV3TestCase.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/test_cinder.py:L171–L173` |
| `CinderV3TestCase.create_client` | method | (self) | public | `c` (src/nova/tests/unit/test_cinder.py:L179) | 1/5 | `src/nova/tests/unit/test_cinder.py:L175–L179` |
| `CinderV3TestCase.stub_volume` | method | (self, **kwargs) | public | `volume` (src/nova/tests/unit/test_cinder.py:L198) | 1/18 | `src/nova/tests/unit/test_cinder.py:L181–L198` |
| `CinderV3TestCase.test_cinder_endpoint_template` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/test_cinder.py:L200–L204` |
| `CinderV3TestCase.test_get_non_existing_volume` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/test_cinder.py:L206–L211` |
| `CinderV3TestCase.test_volume_with_image_metadata` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/test_cinder.py:L213–L218` |
| `CinderV3TestCase.test_volume_without_attachment` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/test_cinder.py:L220–L224` |
| `CinderV3TestCase.test_volume_with_one_attachment` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/test_cinder.py:L226–L231` |
| `CinderV3TestCase.test_volume_with_two_attachments` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/test_cinder.py:L233–L238` |
| `CinderV3TestCase.test_create_client_with_no_service_name` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/test_cinder.py:L240–L257` |

## Dependencies

- `import collections` (src/nova/tests/unit/test_cinder.py:L15)
- `unittest`: imports `mock` (src/nova/tests/unit/test_cinder.py:L16)
- `cinderclient.v3`: imports `client as cinder_client_v3` (src/nova/tests/unit/test_cinder.py:L18)
- `requests_mock.contrib`: imports `fixture` (src/nova/tests/unit/test_cinder.py:L19)
- `import nova.conf` (src/nova/tests/unit/test_cinder.py:L21)
- `nova`: imports `context` (src/nova/tests/unit/test_cinder.py:L22)
- `nova`: imports `exception` (src/nova/tests/unit/test_cinder.py:L23)
- `nova`: imports `service_auth` (src/nova/tests/unit/test_cinder.py:L24)
- `nova`: imports `test` (src/nova/tests/unit/test_cinder.py:L25)
- `nova.volume`: imports `cinder` (src/nova/tests/unit/test_cinder.py:L26)

## Side Effects

- **network**: self.requests.get(self.URL + '/volumes/nonexisting', (src/nova/tests/unit/test_cinder.py:L207)
- **network**: self.requests.get(self.URL + '/volumes/5678', json={'volume': v}) (src/nova/tests/unit/test_cinder.py:L215)
- **network**: self.requests.get(self.URL + '/volumes/5678', json={'volume': v}) (src/nova/tests/unit/test_cinder.py:L222)
- **network**: self.requests.get(self.URL + '/volumes/5678', json={'volume': v}) (src/nova/tests/unit/test_cinder.py:L228)
- **network**: self.requests.get(self.URL + '/volumes/5678', json={'volume': v}) (src/nova/tests/unit/test_cinder.py:L235)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/tests/unit/test_cinder.py:L29)
- **global-mutation**: URL = "http://localhost:8776/v3/project_id" (src/nova/tests/unit/test_cinder.py:L163)
- **global-mutation**: CATALOG = [{ (src/nova/tests/unit/test_cinder.py:L165)

## Security Surface

- **sink** (`db-write`): volume.update(kwargs) (src/nova/tests/unit/test_cinder.py:L197)

