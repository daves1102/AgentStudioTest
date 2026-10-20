# src/nova/api/openstack/compute/certificates.py

## Overview

This file implements the `certificates` module, defining 1 class, 2 methods, 1 variable, 4 imports, 1 side effect.

Lines: total 47, code 27, comment 13, blank 7

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `_removal_reason` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/certificates.py:L21–L26` |
| `CertificatesController` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/certificates.py:L30–L47` |
| `CertificatesController.show` | method | (self, req, id) | public | not declared | 1/2 | `src/nova/api/openstack/compute/certificates.py:L37–L39` |
| `CertificatesController.create` | method | (self, req, body=None) | public | not declared | 1/2 | `src/nova/api/openstack/compute/certificates.py:L45–L47` |

## Dependencies

- `import webob.exc` (src/nova/api/openstack/compute/certificates.py:L15)
- `nova.api.openstack.compute.schemas`: imports `certificates as schema` (src/nova/api/openstack/compute/certificates.py:L17)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/openstack/compute/certificates.py:L18)
- `nova.api`: imports `validation` (src/nova/api/openstack/compute/certificates.py:L19)

## Side Effects

- **network**: from nova.api.openstack.compute.schemas import certificates as schema (src/nova/api/openstack/compute/certificates.py:L17)

