# src/nova/api/openstack/compute/views/keypairs.py

## Overview

This file implements the `keypairs` module, defining 1 class, 6 fields, 5 methods, 1 staticmethod, 1 import.

Lines: total 74, code 42, comment 19, blank 13

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ViewBuilder` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/views/keypairs.py:L19–L74` |
| `ViewBuilder._collection_name` | field | — | private | not declared | — | `src/nova/api/openstack/compute/views/keypairs.py:L21–L21` |
| `ViewBuilder._index_params` | field | — | private | not declared | — | `src/nova/api/openstack/compute/views/keypairs.py:L24–L24` |
| `ViewBuilder._create_params` | field | — | private | not declared | — | `src/nova/api/openstack/compute/views/keypairs.py:L25–L25` |
| `ViewBuilder._show_params` | field | — | private | not declared | — | `src/nova/api/openstack/compute/views/keypairs.py:L26–L27` |
| `ViewBuilder._index_params_v2_2` | field | — | private | not declared | — | `src/nova/api/openstack/compute/views/keypairs.py:L28–L28` |
| `ViewBuilder._show_params_v2_2` | field | — | private | not declared | — | `src/nova/api/openstack/compute/views/keypairs.py:L29–L29` |
| `ViewBuilder.get_links` | method | (self, request, keypairs) | public | `self._get_collection_links(request, keypairs, self._collection_name, 'name')` (src/nova/api/openstack/compute/views/keypairs.py:L32) | 1/3 | `src/nova/api/openstack/compute/views/keypairs.py:L31–L33` |
| `ViewBuilder._build_keypair` | method | (keypair, attrs) | private | `body` (src/nova/api/openstack/compute/views/keypairs.py:L43) | 2/5 | `src/nova/api/openstack/compute/views/keypairs.py:L39–L43` |
| `ViewBuilder.create` | method | (self, keypair, private_key=False, key_type=False) | public | `{'keypair': self._build_keypair(keypair, params)}` (src/nova/api/openstack/compute/views/keypairs.py:L53) | 3/8 | `src/nova/api/openstack/compute/views/keypairs.py:L45–L53` |
| `ViewBuilder.index` | method | (self, req, key_pairs, key_type=False, links=False) | public | `keypairs_dict` (src/nova/api/openstack/compute/views/keypairs.py:L69) | 5/12 | `src/nova/api/openstack/compute/views/keypairs.py:L55–L69` |
| `ViewBuilder.show` | method | (self, keypair, key_type=False) | public | `{'keypair': self._build_keypair( keypair, self._show_params_v2_2 if key_type else self._show_params)}` (src/nova/api/openstack/compute/views/keypairs.py:L72) | 2/4 | `src/nova/api/openstack/compute/views/keypairs.py:L71–L74` |
| `ViewBuilder._build_keypair` | staticmethod | — | private | not declared | — | `src/nova/api/openstack/compute/views/keypairs.py:L38–L43` |

## Dependencies

- `nova.api.openstack`: imports `common` (src/nova/api/openstack/compute/views/keypairs.py:L16)

