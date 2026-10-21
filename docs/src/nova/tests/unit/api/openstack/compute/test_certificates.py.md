# src/nova/tests/unit/api/openstack/compute/test_certificates.py

## Overview

This file implements the `test_certificates` module, defining 1 class, 3 fields, 3 methods, 5 imports, 1 side effect.

Lines: total 44, code 22, comment 15, blank 7

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CertificatesTestV21` | class | — | exported | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_certificates.py:L25–L44` |
| `CertificatesTestV21.base_path` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_certificates.py:L26–L26` |
| `CertificatesTestV21.certificate_show_extension` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_certificates.py:L27–L27` |
| `CertificatesTestV21.certificate_create_extension` | field | — | public | not declared | — | `src/nova/tests/unit/api/openstack/compute/test_certificates.py:L28–L29` |
| `CertificatesTestV21.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/api/openstack/compute/test_certificates.py:L31–L35` |
| `CertificatesTestV21.test_certificates_show_root` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/api/openstack/compute/test_certificates.py:L37–L39` |
| `CertificatesTestV21.test_certificates_create_certificate` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/api/openstack/compute/test_certificates.py:L41–L44` |

## Dependencies

- `import webob.exc` (src/nova/tests/unit/api/openstack/compute/test_certificates.py:L17)
- `nova.api.openstack.compute`: imports `certificates` (src/nova/tests/unit/api/openstack/compute/test_certificates.py:L19)
- `nova`: imports `context` (src/nova/tests/unit/api/openstack/compute/test_certificates.py:L20)
- `nova`: imports `test` (src/nova/tests/unit/api/openstack/compute/test_certificates.py:L21)
- `nova.tests.unit.api.openstack`: imports `fakes` (src/nova/tests/unit/api/openstack/compute/test_certificates.py:L22)

## Side Effects

- **network**: from nova.api.openstack.compute import certificates (src/nova/tests/unit/api/openstack/compute/test_certificates.py:L19)

