# src/nova/accelerator/cyborg.py

## Overview

This file implements Nova's client interface to the OpenStack Cyborg accelerator service. It provides module-level helper functions for retrieving device profile groups, building request group objects, computing accelerator quantities, and constructing PCI device info dictionaries from ARQ data. The private `_CyborgClient` class encapsulates all HTTP communication with the Cyborg REST API, covering the full lifecycle of Accelerator Requests (ARQs): creation, binding, retrieval, and deletion. The adapter to Cyborg is created lazily on first use, deferring endpoint discovery until an actual API call is needed.

Lines: total 419, code 324, comment 26, blank 69

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | — | — | `src/nova/accelerator/cyborg.py:L53–L53` |
| `get_client` | function | `(context)` | exported | `_CyborgClient(context)` (L57) | 1/2 | `src/nova/accelerator/cyborg.py:L56–L57` |
| `get_device_profile_group_requester_id` | function | `(dp_group_id, owner)` | exported | `req_id` (L72) | 2/4 | `src/nova/accelerator/cyborg.py:L60–L72` |
| `get_arq_pci_device_profile` | function | `(arq)` | exported | `{ 'physical_network': pci_info["physical_network"], 'pci_slot': "%s:%s:%s.%s" % ( pci_info["domain"], pci_info["bus"], pci_info["device"], pci_info["function"]), 'arq_uuid': arq['uuid'] }` (L79) | 1/9 | `src/nova/accelerator/cyborg.py:L75–L85` |
| `get_device_profile_request_groups` | function | `(context, dp_name, owner=None)` | exported | `cyclient.get_device_request_groups(dp_groups, owner)` (L91) | 1/4 | `src/nova/accelerator/cyborg.py:L88–L91` |
| `get_device_amount_of_dp_groups` | function | `(dp_groups)` | exported | `devices_amount` (L109) | 5/11 | `src/nova/accelerator/cyborg.py:L94–L109` |
| `_CyborgClient` | class | — | unexported | — | — | `src/nova/accelerator/cyborg.py:L112–L419` |
| `_CyborgClient.DEVICE_PROFILE_URL` | constant | — | public | — | — | `src/nova/accelerator/cyborg.py:L113–L113` |
| `_CyborgClient.ARQ_URL` | constant | — | public | — | — | `src/nova/accelerator/cyborg.py:L114–L114` |
| `_CyborgClient.__init__` | method | `(self, context)` | public | not declared | 1/3 | `src/nova/accelerator/cyborg.py:L116–L118` |
| `_CyborgClient._client` | property | — | private | — | — | `src/nova/accelerator/cyborg.py:L120–L134` |
| `_CyborgClient._client` | method | `(self)` | private | `self._adapter` (L134) | 2/7 | `src/nova/accelerator/cyborg.py:L121–L134` |
| `_CyborgClient._call_cyborg` | method | `(self, method, *args, **kwargs)` | private | `resp, err_msg` (L147) | 3/11 | `src/nova/accelerator/cyborg.py:L136–L147` |
| `_CyborgClient._get_device_profile_list` | method | `(self, dp_name)` | private | `resp.json().get('device_profiles')` (L159) | 2/8 | `src/nova/accelerator/cyborg.py:L149–L159` |
| `_CyborgClient.get_device_profile_groups` | method | `(self, dp_name)` | public | `dp_list[0]['groups']` (L177) | 3/9 | `src/nova/accelerator/cyborg.py:L161–L177` |
| `_CyborgClient.get_device_request_groups` | method | `(self, dp_groups, owner)` | public | `request_groups` (L201) | 6/16 | `src/nova/accelerator/cyborg.py:L179–L201` |
| `_CyborgClient._create_arqs` | method | `(self, dp_name)` | private | `resp.json().get('arqs')` (L211) | 2/7 | `src/nova/accelerator/cyborg.py:L203–L211` |
| `_CyborgClient.create_arqs` | method | `(self, dp_name)` | public | `arqs` (L220) | 2/7 | `src/nova/accelerator/cyborg.py:L213–L220` |
| `_CyborgClient.create_arqs_and_match_resource_providers` | method | `(self, dp_name, rg_rp_map)` | public | `arqs` (L241) | 2/9 | `src/nova/accelerator/cyborg.py:L222–L241` |
| `_CyborgClient.get_arq_device_rp_uuid` | method | `(self, arq, rg_rp_map, owner)` | public | `rg_rp_map[requester_id][0]` (L253) | 1/5 | `src/nova/accelerator/cyborg.py:L243–L253` |
| `_CyborgClient.bind_arqs` | method | `(self, bindings)` | public | not declared | 4/17 | `src/nova/accelerator/cyborg.py:L255–L289` |
| `_CyborgClient.get_arqs_for_instance` | method | `(self, instance_uuid, only_resolved=False)` | public | `arqs` (L335) | 6/17 | `src/nova/accelerator/cyborg.py:L291–L335` |
| `_CyborgClient.get_arq_by_uuid` | method | `(self, arq_uuid)` | public | `arq` (L368) | 2/9 | `src/nova/accelerator/cyborg.py:L337–L368` |
| `_CyborgClient.delete_arqs_for_instance` | method | `(self, instance_uuid)` | public | not declared | 2/8 | `src/nova/accelerator/cyborg.py:L370–L383` |
| `_CyborgClient.delete_arqs_by_uuid` | method | `(self, arq_uuids)` | public | not declared | 2/7 | `src/nova/accelerator/cyborg.py:L385–L410` |
| `_CyborgClient.get_arq_uuids_for_instance` | method | `(self, instance)` | public | `[arq['uuid'] for arq in self.get_arqs_for_instance(instance.uuid)]` (L418) | 2/3 | `src/nova/accelerator/cyborg.py:L412–L419` |

## Dependencies

- `oslo_log`: imports `log` as `logging` (`src/nova/accelerator/cyborg.py:L44`)
- `nova`: imports `exception` (`src/nova/accelerator/cyborg.py:L46`)
- `nova.i18n`: imports `_` (`src/nova/accelerator/cyborg.py:L47`)
- `nova`: imports `objects` (`src/nova/accelerator/cyborg.py:L48`)
- `nova.scheduler`: imports `utils` as `schedutils` (`src/nova/accelerator/cyborg.py:L49`)
- `nova`: imports `service_auth` (`src/nova/accelerator/cyborg.py:L50`)
- `nova`: imports `utils` (`src/nova/accelerator/cyborg.py:L51`)

## Side Effects

- Module-level assignment of `LOG` (module-level logger instance) via `logging.getLogger(__name__)` (`src/nova/accelerator/cyborg.py:L53–L53`)
- Network: HTTP GET to Cyborg REST API `/device_profiles` (`src/nova/accelerator/cyborg.py:L153–L154`)
- Network: HTTP POST to Cyborg REST API `/accelerator_requests` (`src/nova/accelerator/cyborg.py:L205–L205`)
- Network: HTTP PATCH to Cyborg REST API `/accelerator_requests` (`src/nova/accelerator/cyborg.py:L282–L283`)
- Network: HTTP GET to Cyborg REST API `/accelerator_requests` (`src/nova/accelerator/cyborg.py:L318–L318`)
- Network: HTTP GET to Cyborg REST API `/accelerator_requests/{arq_uuid}` (`src/nova/accelerator/cyborg.py:L358–L359`)
- Network: HTTP DELETE to Cyborg REST API `/accelerator_requests` (by instance) (`src/nova/accelerator/cyborg.py:L378–L379`)
- Network: HTTP DELETE to Cyborg REST API `/accelerator_requests` (by UUID list) (`src/nova/accelerator/cyborg.py:L406–L407`)

## Security Surface

- **Entry point** (`http-param`): `context` parameter carries caller authentication/session state into `get_client` and `_CyborgClient.__init__` (`src/nova/accelerator/cyborg.py:L56–L56`)
- **Entry point** (`http-param`): `dp_name` parameter accepted from caller and forwarded to Cyborg API query in `_get_device_profile_list` and `_create_arqs` (`src/nova/accelerator/cyborg.py:L88–L88`)
- **Entry point** (`http-param`): `instance_uuid` accepted from caller and used as Cyborg API query parameter in `get_arqs_for_instance` and `delete_arqs_for_instance` (`src/nova/accelerator/cyborg.py:L291–L291`)
- **Entry point** (`http-param`): `arq_uuid` accepted from caller and interpolated into Cyborg API URL path in `get_arq_by_uuid` (`src/nova/accelerator/cyborg.py:L337–L337`)
- **Entry point** (`http-param`): `bindings` dict accepted from caller and serialized as RFC 6902 JSON patch body sent to Cyborg in `bind_arqs` (`src/nova/accelerator/cyborg.py:L255–L255`)
- **Sink** (`network-send`): HTTP GET `/device_profiles` with caller-supplied `dp_name` as query parameter (`src/nova/accelerator/cyborg.py:L153–L154`)
- **Sink** (`network-send`): HTTP POST `/accelerator_requests` with caller-supplied `dp_name` in JSON body (`src/nova/accelerator/cyborg.py:L205–L205`)
- **Sink** (`network-send`): HTTP PATCH `/accelerator_requests` with caller-supplied `bindings` serialized as RFC 6902 JSON patch (`src/nova/accelerator/cyborg.py:L282–L283`)
- **Sink** (`network-send`): HTTP GET `/accelerator_requests` with caller-supplied `instance_uuid` as query parameter (`src/nova/accelerator/cyborg.py:L318–L318`)
- **Sink** (`network-send`): HTTP GET `/accelerator_requests/{arq_uuid}` with caller-supplied `arq_uuid` interpolated into path (`src/nova/accelerator/cyborg.py:L358–L359`)
- **Sink** (`network-send`): HTTP DELETE `/accelerator_requests` with caller-supplied `instance_uuid` as query parameter (`src/nova/accelerator/cyborg.py:L378–L379`)
- **Sink** (`network-send`): HTTP DELETE `/accelerator_requests` with caller-supplied `arq_uuids` joined as comma-separated query parameter (`src/nova/accelerator/cyborg.py:L406–L407`)
- **Privilege** (`crypto-key`): Retrieves service user token auth plugin credentials via `service_auth.get_service_user_token_auth_plugin` for authenticating outbound Cyborg calls (`src/nova/accelerator/cyborg.py:L130–L131`)
