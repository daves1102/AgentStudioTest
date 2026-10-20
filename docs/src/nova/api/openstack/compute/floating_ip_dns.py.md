# src/nova/api/openstack/compute/floating_ip_dns.py

## Overview

This file implements the `floating_ip_dns` module, defining 2 classs, 6 methods, 1 variable, 4 imports, 1 side effect, 4 security surface entries.

Lines: total 76, code 50, comment 13, blank 13

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `_removal_reason` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/floating_ip_dns.py:L21–L26` |
| `FloatingIPDNSDomainController` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/floating_ip_dns.py:L30–L51` |
| `FloatingIPDNSDomainController.index` | method | (self, req) | public | not declared | 1/2 | `src/nova/api/openstack/compute/floating_ip_dns.py:L37–L38` |
| `FloatingIPDNSDomainController.update` | method | (self, req, id, body) | public | not declared | 1/2 | `src/nova/api/openstack/compute/floating_ip_dns.py:L44–L45` |
| `FloatingIPDNSDomainController.delete` | method | (self, req, id) | public | not declared | 1/2 | `src/nova/api/openstack/compute/floating_ip_dns.py:L50–L51` |
| `FloatingIPDNSEntryController` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/floating_ip_dns.py:L55–L76` |
| `FloatingIPDNSEntryController.show` | method | (self, req, domain_id, id) | public | not declared | 1/2 | `src/nova/api/openstack/compute/floating_ip_dns.py:L62–L63` |
| `FloatingIPDNSEntryController.update` | method | (self, req, domain_id, id, body) | public | not declared | 1/2 | `src/nova/api/openstack/compute/floating_ip_dns.py:L69–L70` |
| `FloatingIPDNSEntryController.delete` | method | (self, req, domain_id, id) | public | not declared | 1/2 | `src/nova/api/openstack/compute/floating_ip_dns.py:L75–L76` |

## Dependencies

- `webob`: imports `exc` (src/nova/api/openstack/compute/floating_ip_dns.py:L15)
- `nova.api.openstack.compute.schemas`: imports `floating_ip_dns as schema` (src/nova/api/openstack/compute/floating_ip_dns.py:L17)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/openstack/compute/floating_ip_dns.py:L18)
- `nova.api`: imports `validation` (src/nova/api/openstack/compute/floating_ip_dns.py:L19)

## Side Effects

- **network**: from nova.api.openstack.compute.schemas import floating_ip_dns as schema (src/nova/api/openstack/compute/floating_ip_dns.py:L17)

## Security Surface

- **sink** (`db-write`): @validation.schema(schema.update) (src/nova/api/openstack/compute/floating_ip_dns.py:L42)
- **sink** (`db-write`): def update(self, req, id, body): (src/nova/api/openstack/compute/floating_ip_dns.py:L44)
- **sink** (`db-write`): @validation.schema(schema.update) (src/nova/api/openstack/compute/floating_ip_dns.py:L67)
- **sink** (`db-write`): def update(self, req, domain_id, id, body): (src/nova/api/openstack/compute/floating_ip_dns.py:L69)

