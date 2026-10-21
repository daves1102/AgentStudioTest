# src/nova/tests/unit/api/openstack/test_wsgi_app.py

## Overview

This file implements the `test_wsgi_app` module, defining 1 class, 1 field, 7 methods, 10 imports, 4 side effects, 3 security surface entries.

Lines: total 153, code 107, comment 30, blank 16

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `WSGIAppTest` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/test_wsgi_app.py:L27–L153` |
| `WSGIAppTest._paste_config` | field | — | private | not declared | — | `src/nova/tests/unit/api/openstack/test_wsgi_app.py:L29–L33` |
| `WSGIAppTest.setUp` | method | (self) | public | not declared | 1/10 | `src/nova/tests/unit/api/openstack/test_wsgi_app.py:L35–L48` |
| `WSGIAppTest.test_init_application_called_twice` | method | (self, mock_get_files, mock_setup, mock_main_db_configure, mock_api_db_configure, mock_argv) | public | not declared | 1/14 | `src/nova/tests/unit/api/openstack/test_wsgi_app.py:L55–L93` |
| `WSGIAppTest.test_init_application_called_unrecoverable` | method | (self, mock_get_files) | public | not declared | 2/11 | `src/nova/tests/unit/api/openstack/test_wsgi_app.py:L98–L114` |
| `WSGIAppTest.test_setup_service_version_workaround` | method | (self, mock_check_old, mock_get) | public | not declared | 1/12 | `src/nova/tests/unit/api/openstack/test_wsgi_app.py:L118–L130` |
| `WSGIAppTest.test_setup_service_pci_alias_validation` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/api/openstack/test_wsgi_app.py:L132–L138` |
| `WSGIAppTest.test__get_config_files_empty_env` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/test_wsgi_app.py:L140–L144` |
| `WSGIAppTest.test__get_config_files_with_env` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/api/openstack/test_wsgi_app.py:L146–L153` |

## Dependencies

- `import tempfile` (src/nova/tests/unit/api/openstack/test_wsgi_app.py:L13)
- `unittest`: imports `mock` (src/nova/tests/unit/api/openstack/test_wsgi_app.py:L14)
- `import fixtures` (src/nova/tests/unit/api/openstack/test_wsgi_app.py:L16)
- `oslo_config`: imports `fixture as config_fixture` (src/nova/tests/unit/api/openstack/test_wsgi_app.py:L17)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/api/openstack/test_wsgi_app.py:L18)
- `oslotest`: imports `base` (src/nova/tests/unit/api/openstack/test_wsgi_app.py:L19)
- `nova.api.openstack`: imports `wsgi_app` (src/nova/tests/unit/api/openstack/test_wsgi_app.py:L21)
- `nova`: imports `exception` (src/nova/tests/unit/api/openstack/test_wsgi_app.py:L22)
- `nova`: imports `test` (src/nova/tests/unit/api/openstack/test_wsgi_app.py:L23)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/tests/unit/api/openstack/test_wsgi_app.py:L24)

## Side Effects

- **file-io**: self.conf = tempfile.NamedTemporaryFile(mode='w+t') (src/nova/tests/unit/api/openstack/test_wsgi_app.py:L41)
- **network**: @mock.patch('nova.api.openstack.wsgi_app._setup_service') (src/nova/tests/unit/api/openstack/test_wsgi_app.py:L53)
- **network**: @mock.patch('nova.api.openstack.wsgi_app._get_config_files') (src/nova/tests/unit/api/openstack/test_wsgi_app.py:L54)
- **network**: @mock.patch('nova.api.openstack.wsgi_app._get_config_files') (src/nova/tests/unit/api/openstack/test_wsgi_app.py:L97)

## Security Surface

- **sink** (`file-write`): self.conf.write(self._paste_config.lstrip()) (src/nova/tests/unit/api/openstack/test_wsgi_app.py:L42)
- **entry-point** (`cli-args`): @mock.patch('sys.argv', return_value=mock.sentinel.argv) (src/nova/tests/unit/api/openstack/test_wsgi_app.py:L50)
- **entry-point** (`cli-args`): 'sys.argv', new=mock.MagicMock(return_value=mock.sentinel.argv)) (src/nova/tests/unit/api/openstack/test_wsgi_app.py:L96)

