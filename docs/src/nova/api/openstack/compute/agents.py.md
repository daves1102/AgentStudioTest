# src/nova/api/openstack/compute/agents.py

## Overview

This file implements the `agents` module, defining 1 class, 4 methods, 1 variable, 4 imports, 1 side effect, 2 security surface entries.

Lines: total 60, code 37, comment 13, blank 10

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `_removal_reason` | variable | — | unexported | not declared | — | `src/nova/api/openstack/compute/agents.py:L22–L26` |
| `AgentController` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/agents.py:L30–L60` |
| `AgentController.index` | method | (self, req) | public | not declared | 1/2 | `src/nova/api/openstack/compute/agents.py:L39–L40` |
| `AgentController.update` | method | (self, req, id, body) | public | not declared | 1/2 | `src/nova/api/openstack/compute/agents.py:L46–L47` |
| `AgentController.delete` | method | (self, req, id) | public | not declared | 1/2 | `src/nova/api/openstack/compute/agents.py:L52–L53` |
| `AgentController.create` | method | (self, req, body) | public | not declared | 1/2 | `src/nova/api/openstack/compute/agents.py:L59–L60` |

## Dependencies

- `webob`: imports `exc` (src/nova/api/openstack/compute/agents.py:L16)
- `nova.api.openstack.compute.schemas`: imports `agents as schema` (src/nova/api/openstack/compute/agents.py:L18)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/openstack/compute/agents.py:L19)
- `nova.api`: imports `validation` (src/nova/api/openstack/compute/agents.py:L20)

## Side Effects

- **network**: from nova.api.openstack.compute.schemas import agents as schema (src/nova/api/openstack/compute/agents.py:L18)

## Security Surface

- **sink** (`db-write`): @validation.schema(schema.update) (src/nova/api/openstack/compute/agents.py:L44)
- **sink** (`db-write`): def update(self, req, id, body): (src/nova/api/openstack/compute/agents.py:L46)

