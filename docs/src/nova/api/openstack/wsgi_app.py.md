# src/nova/api/openstack/wsgi_app.py

## Overview

This file implements the `wsgi_app` module, defining 3 constants, 6 functions, 17 imports, 4 side effects, 2 security surface entries.

Lines: total 156, code 91, comment 36, blank 29

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/api/openstack/wsgi_app.py:L34–L34` |
| `CONFIG_FILES` | constant | — | exported | not declared | — | `src/nova/api/openstack/wsgi_app.py:L36–L36` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/api/openstack/wsgi_app.py:L38–L38` |
| `_get_config_files` | function | (env=None) | unexported | `[os.path.join(dirname, config_file) for config_file in files]` (src/nova/api/openstack/wsgi_app.py:L50) | 4/9 | `src/nova/api/openstack/wsgi_app.py:L43–L51` |
| `_setup_service` | function | (host, name) | unexported | not declared | 6/26 | `src/nova/api/openstack/wsgi_app.py:L54–L87` |
| `error_application` | function | (exc, name) | exported | `application` (src/nova/api/openstack/wsgi_app.py:L96) | 1/3 | `src/nova/api/openstack/wsgi_app.py:L90–L96` |
| `error_application.application` | function | (environ, start_response) | public | `['Out of date %s service %s\n' % (name, exc)]` (src/nova/api/openstack/wsgi_app.py:L95) | — | `src/nova/api/openstack/wsgi_app.py:L92–L95` |
| `init_global_data` | function | (conf_files, service_name, prog) | exported | not declared | 1/10 | `src/nova/api/openstack/wsgi_app.py:L101–L121` |
| `init_application` | function | (name, prog) | exported | `error_application(exc, name)` (src/nova/api/openstack/wsgi_app.py:L139); `app` (src/nova/api/openstack/wsgi_app.py:L156) | 3/15 | `src/nova/api/openstack/wsgi_app.py:L125–L156` |

## Dependencies

- `import os` (src/nova/api/openstack/wsgi_app.py:L14)
- `import sys` (src/nova/api/openstack/wsgi_app.py:L15)
- `oslo_config`: imports `cfg` (src/nova/api/openstack/wsgi_app.py:L17)
- `oslo_db`: imports `exception as odbe` (src/nova/api/openstack/wsgi_app.py:L18)
- `oslo_log`: imports `log as logging` (src/nova/api/openstack/wsgi_app.py:L19)
- `oslo_reports`: imports `guru_meditation_report as gmr` (src/nova/api/openstack/wsgi_app.py:L20)
- `oslo_reports`: imports `opts as gmr_opts` (src/nova/api/openstack/wsgi_app.py:L21)
- `oslo_service`: imports `_options as service_opts` (src/nova/api/openstack/wsgi_app.py:L22)
- `paste`: imports `deploy` (src/nova/api/openstack/wsgi_app.py:L23)
- `nova`: imports `config` (src/nova/api/openstack/wsgi_app.py:L25)
- `nova`: imports `context` (src/nova/api/openstack/wsgi_app.py:L26)
- `nova`: imports `exception` (src/nova/api/openstack/wsgi_app.py:L27)
- `nova`: imports `objects` (src/nova/api/openstack/wsgi_app.py:L28)
- `nova.pci`: imports `request` (src/nova/api/openstack/wsgi_app.py:L29)
- `nova`: imports `service` (src/nova/api/openstack/wsgi_app.py:L30)
- `nova`: imports `utils` (src/nova/api/openstack/wsgi_app.py:L31)
- `nova`: imports `version` (src/nova/api/openstack/wsgi_app.py:L32)

## Side Effects

- **file-io**: return [os.path.join(dirname, config_file) (src/nova/api/openstack/wsgi_app.py:L50)
- **global-mutation**: CONF = cfg.CONF (src/nova/api/openstack/wsgi_app.py:L34)
- **global-mutation**: CONFIG_FILES = ['api-paste.ini', 'nova.conf'] (src/nova/api/openstack/wsgi_app.py:L36)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/api/openstack/wsgi_app.py:L38)

## Security Surface

- **entry-point** (`env`): env = os.environ (src/nova/api/openstack/wsgi_app.py:L45)
- **entry-point** (`cli-args`): sys.argv, (src/nova/api/openstack/wsgi_app.py:L109)

