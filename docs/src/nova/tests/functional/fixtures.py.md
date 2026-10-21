# src/nova/tests/functional/fixtures.py

## Overview

This file implements the `fixtures` module, defining 2 classs, 12 methods, 1 staticmethod, 8 imports, 5 side effects, 4 security surface entries.

Lines: total 170, code 106, comment 41, blank 23

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `PlacementApiClient` | class | — | exported | not declared | — | `src/nova/tests/functional/fixtures.py:L25–L43` |
| `PlacementApiClient.__init__` | method | (self, placement_fixture) | public | not declared | 1/2 | `src/nova/tests/functional/fixtures.py:L26–L27` |
| `PlacementApiClient.get` | method | (self, url, **kwargs) | public | `client.APIResponse( self.fixture._fake_get(None, url, **kwargs))` (src/nova/tests/functional/fixtures.py:L30) | 1/3 | `src/nova/tests/functional/fixtures.py:L29–L31` |
| `PlacementApiClient.put` | method | (self, url, body, **kwargs) | public | `client.APIResponse( self.fixture._fake_put(None, url, body, **kwargs))` (src/nova/tests/functional/fixtures.py:L34) | 1/3 | `src/nova/tests/functional/fixtures.py:L33–L35` |
| `PlacementApiClient.post` | method | (self, url, body, **kwargs) | public | `client.APIResponse( self.fixture._fake_post(None, url, body, **kwargs))` (src/nova/tests/functional/fixtures.py:L38) | 1/3 | `src/nova/tests/functional/fixtures.py:L37–L39` |
| `PlacementApiClient.delete` | method | (self, url, **kwargs) | public | `client.APIResponse( self.fixture._fake_delete(None, url, **kwargs))` (src/nova/tests/functional/fixtures.py:L42) | 1/3 | `src/nova/tests/functional/fixtures.py:L41–L43` |
| `PlacementFixture` | class | — | exported | not declared | — | `src/nova/tests/functional/fixtures.py:L46–L170` |
| `PlacementFixture._configure_placement` | method | (self, conf_fixture) | private | not declared | 3/9 | `src/nova/tests/functional/fixtures.py:L65–L75` |
| `PlacementFixture.setUp` | method | (self) | public | not declared | 1/19 | `src/nova/tests/functional/fixtures.py:L77–L104` |
| `PlacementFixture._update_headers_with_version` | method | (headers, version) | private | not declared | 2/5 | `src/nova/tests/functional/fixtures.py:L107–L112` |
| `PlacementFixture._fake_get` | method | (self, client, url, version=None, global_request_id=None) | private | `self._client.get( url, endpoint_override=self.endpoint, headers=headers)` (src/nova/tests/functional/fixtures.py:L120) | 1/7 | `src/nova/tests/functional/fixtures.py:L114–L123` |
| `PlacementFixture._fake_post` | method | (self, client, url, data, version=None, global_request_id=None) | private | `self._client.post( url, json=data, endpoint_override=self.endpoint, headers=headers)` (src/nova/tests/functional/fixtures.py:L137) | 1/9 | `src/nova/tests/functional/fixtures.py:L125–L140` |
| `PlacementFixture._fake_put` | method | (self, client, url, data, version=None, global_request_id=None) | private | `self._client.put( url, json=data, endpoint_override=self.endpoint, headers=headers)` (src/nova/tests/functional/fixtures.py:L154) | 1/9 | `src/nova/tests/functional/fixtures.py:L142–L157` |
| `PlacementFixture._fake_delete` | method | (self, client, url, version=None, global_request_id=None) | private | `self._client.delete( url, endpoint_override=self.endpoint, headers=headers)` (src/nova/tests/functional/fixtures.py:L167) | 1/9 | `src/nova/tests/functional/fixtures.py:L159–L170` |
| `PlacementFixture._update_headers_with_version` | staticmethod | — | private | not declared | — | `src/nova/tests/functional/fixtures.py:L106–L112` |

## Dependencies

- `import fixtures` (src/nova/tests/functional/fixtures.py:L14)
- `keystoneauth1`: imports `adapter as ka` (src/nova/tests/functional/fixtures.py:L15)
- `keystoneauth1`: imports `session as ks` (src/nova/tests/functional/fixtures.py:L16)
- `placement.tests.functional.fixtures`: imports `placement as placement_fixtures` (src/nova/tests/functional/fixtures.py:L17)
- `requests`: imports `adapters` (src/nova/tests/functional/fixtures.py:L18)
- `nova.tests.fixtures.nova`: imports `_use_file_backed_sqlite_with_wal` (src/nova/tests/functional/fixtures.py:L20)
- `nova.tests.functional.api`: imports `client` (src/nova/tests/functional/fixtures.py:L21)
- `nova`: imports `utils` (src/nova/tests/functional/fixtures.py:L22)

## Side Effects

- **network**: self._client = ka.Adapter(ks.Session(auth=None), raise_exc=False) (src/nova/tests/functional/fixtures.py:L87)
- **network**: return self._client.get( (src/nova/tests/functional/fixtures.py:L120)
- **network**: return self._client.post( (src/nova/tests/functional/fixtures.py:L137)
- **network**: return self._client.put( (src/nova/tests/functional/fixtures.py:L154)
- **network**: return self._client.delete( (src/nova/tests/functional/fixtures.py:L167)

## Security Surface

- **privilege** (`crypto-key`): from keystoneauth1 import adapter as ka (src/nova/tests/functional/fixtures.py:L15)
- **privilege** (`crypto-key`): from keystoneauth1 import session as ks (src/nova/tests/functional/fixtures.py:L16)
- **privilege** (`crypto-key`): 'keystoneauth1.session.TCPKeepAliveAdapter.init_poolmanager', (src/nova/tests/functional/fixtures.py:L84)
- **sink** (`db-write`): headers.update({ (src/nova/tests/functional/fixtures.py:L110)

