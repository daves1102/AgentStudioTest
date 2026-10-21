# src/nova/tests/functional/wsgi/test_services.py

## Overview

This file implements the `test_services` module, defining 3 classs, 3 fields, 8 methods, 8 imports, 2 security surface entries.

Lines: total 387, code 239, comment 107, blank 41

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `TestServicesAPI` | class | — | exported | not declared | — | `src/nova/tests/functional/wsgi/test_services.py:L24–L260` |
| `TestServicesAPI.compute_driver` | field | — | public | not declared | — | `src/nova/tests/functional/wsgi/test_services.py:L25–L25` |
| `TestServicesAPI.test_compute_service_delete_ensure_related_cleanup` | method | (self) | public | not declared | 2/44 | `src/nova/tests/functional/wsgi/test_services.py:L27–L117` |
| `TestServicesAPI.test_evacuate_then_delete_compute_service` | method | (self) | public | not declared | 1/24 | `src/nova/tests/functional/wsgi/test_services.py:L119–L167` |
| `TestServicesAPI.test_migrate_confirm_after_deleted_source_compute` | method | (self) | public | not declared | 1/26 | `src/nova/tests/functional/wsgi/test_services.py:L169–L210` |
| `TestServicesAPI.test_resize_revert_after_deleted_source_compute` | method | (self) | public | not declared | 1/33 | `src/nova/tests/functional/wsgi/test_services.py:L212–L260` |
| `ComputeStatusFilterTest` | class | — | exported | not declared | — | `src/nova/tests/functional/wsgi/test_services.py:L263–L350` |
| `ComputeStatusFilterTest.compute_driver` | field | — | public | not declared | — | `src/nova/tests/functional/wsgi/test_services.py:L270–L270` |
| `ComputeStatusFilterTest._update_service` | method | (self, service, disabled, forced_down=None) | private | not declared | 3/6 | `src/nova/tests/functional/wsgi/test_services.py:L272–L284` |
| `ComputeStatusFilterTest.test_compute_status_filter` | method | (self) | public | not declared | 1/36 | `src/nova/tests/functional/wsgi/test_services.py:L286–L350` |
| `ComputeStatusFilterTest211` | class | — | exported | not declared | — | `src/nova/tests/functional/wsgi/test_services.py:L353–L387` |
| `ComputeStatusFilterTest211.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/wsgi/test_services.py:L357–L357` |
| `ComputeStatusFilterTest211._update_service` | method | (self, service, disabled, forced_down=None) | private | not declared | 3/12 | `src/nova/tests/functional/wsgi/test_services.py:L359–L381` |
| `ComputeStatusFilterTest211._get_provider_uuid_by_host` | method | (self, host) | private | `super(ComputeStatusFilterTest211, self)._get_provider_uuid_by_host(host)` (src/nova/tests/functional/wsgi/test_services.py:L386) | 1/4 | `src/nova/tests/functional/wsgi/test_services.py:L383–L387` |

## Dependencies

- `import os_resource_classes as orc` (src/nova/tests/functional/wsgi/test_services.py:L13)
- `import os_traits` (src/nova/tests/functional/wsgi/test_services.py:L14)
- `nova`: imports `context as nova_context` (src/nova/tests/functional/wsgi/test_services.py:L16)
- `nova`: imports `exception` (src/nova/tests/functional/wsgi/test_services.py:L17)
- `nova`: imports `objects` (src/nova/tests/functional/wsgi/test_services.py:L18)
- `nova.tests.functional.api`: imports `client as api_client` (src/nova/tests/functional/wsgi/test_services.py:L19)
- `nova.tests.functional`: imports `integrated_helpers` (src/nova/tests/functional/wsgi/test_services.py:L20)
- `nova`: imports `utils` (src/nova/tests/functional/wsgi/test_services.py:L21)

## Security Surface

- **sink** (`db-write`): """Update the service using the 2.53 request schema. (src/nova/tests/functional/wsgi/test_services.py:L273)
- **sink** (`db-write`): """Update the service using the 2.11 request schema. (src/nova/tests/functional/wsgi/test_services.py:L360)

