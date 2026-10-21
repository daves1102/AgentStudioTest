# src/nova/tests/functional/api_sample_tests/test_server_topology.py

## Overview

This file implements the `test_server_topology` module, defining 3 classs, 2 constants, 3 fields, 2 functions, 3 methods, 3 imports, 2 side effects.

Lines: total 69, code 41, comment 12, blank 16

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `fake_get_numa` | function | — | exported | `numa.InstanceNUMATopology(cells=[cell_0, cell_1])` (src/nova/tests/functional/api_sample_tests/test_server_topology.py:L34) | 1/14 | `src/nova/tests/functional/api_sample_tests/test_server_topology.py:L19–L34` |
| `ServerTopologySamplesJson` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_server_topology.py:L37–L49` |
| `ServerTopologySamplesJson.microversion` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_server_topology.py:L38–L38` |
| `ServerTopologySamplesJson.scenarios` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_server_topology.py:L39–L39` |
| `ServerTopologySamplesJson.sample_dir` | field | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_server_topology.py:L40–L40` |
| `ServerTopologySamplesJson.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/api_sample_tests/test_server_topology.py:L42–L49` |
| `ServerTopologySamplesJson.setUp._load_numa` | function | (self, *args, **argv) | private | not declared | — | `src/nova/tests/functional/api_sample_tests/test_server_topology.py:L45–L46` |
| `ServerTopologySamplesJsonTestV278_Admin` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_server_topology.py:L52–L59` |
| `ServerTopologySamplesJsonTestV278_Admin.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_server_topology.py:L53–L53` |
| `ServerTopologySamplesJsonTestV278_Admin.test_get_servers_topology_admin` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/api_sample_tests/test_server_topology.py:L55–L59` |
| `ServerTopologySamplesJsonTestV278` | class | — | exported | not declared | — | `src/nova/tests/functional/api_sample_tests/test_server_topology.py:L62–L69` |
| `ServerTopologySamplesJsonTestV278.ADMIN_API` | constant | — | public | not declared | — | `src/nova/tests/functional/api_sample_tests/test_server_topology.py:L63–L63` |
| `ServerTopologySamplesJsonTestV278.test_get_servers_topology_user` | method | (self) | public | not declared | 1/5 | `src/nova/tests/functional/api_sample_tests/test_server_topology.py:L65–L69` |

## Dependencies

- `nova.objects`: imports `instance_numa as numa` (src/nova/tests/functional/api_sample_tests/test_server_topology.py:L14)
- `nova.objects`: imports `virt_cpu_topology as cpu_topo` (src/nova/tests/functional/api_sample_tests/test_server_topology.py:L15)
- `nova.tests.functional.api_sample_tests`: imports `test_servers` (src/nova/tests/functional/api_sample_tests/test_server_topology.py:L16)

## Side Effects

- **global-mutation**: ADMIN_API = True (src/nova/tests/functional/api_sample_tests/test_server_topology.py:L53)
- **global-mutation**: ADMIN_API = False (src/nova/tests/functional/api_sample_tests/test_server_topology.py:L63)

