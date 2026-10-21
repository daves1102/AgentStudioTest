# src/nova/tests/unit/compute/test_virtapi.py

## Overview

This file implements the `test_virtapi` module, defining 4 classs, 3 fields, 10 functions, 23 methods, 12 imports.

Lines: total 382, code 305, comment 19, blank 58

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `VirtAPIBaseTest` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_virtapi.py:L31–L57` |
| `VirtAPIBaseTest.cover_api` | field | — | public | not declared | — | `src/nova/tests/unit/compute/test_virtapi.py:L33–L33` |
| `VirtAPIBaseTest.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_virtapi.py:L35–L37` |
| `VirtAPIBaseTest.set_up_virtapi` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_virtapi.py:L39–L40` |
| `VirtAPIBaseTest.assertExpected` | method | (self, method, *args, **kwargs) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_virtapi.py:L42–L45` |
| `VirtAPIBaseTest.test_wait_for_instance_event` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_virtapi.py:L47–L49` |
| `VirtAPIBaseTest.test_exit_wait_early` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_virtapi.py:L51–L52` |
| `VirtAPIBaseTest.test_update_compute_provider_status` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/compute/test_virtapi.py:L54–L57` |
| `FakeVirtAPITest` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_virtapi.py:L60–L78` |
| `FakeVirtAPITest.cover_api` | field | — | public | not declared | — | `src/nova/tests/unit/compute/test_virtapi.py:L62–L62` |
| `FakeVirtAPITest.set_up_virtapi` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/compute/test_virtapi.py:L64–L65` |
| `FakeVirtAPITest.assertExpected` | method | (self, method, *args, **kwargs) | public | not declared | 4/12 | `src/nova/tests/unit/compute/test_virtapi.py:L67–L78` |
| `FakeCompute` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_virtapi.py:L81–L117` |
| `FakeCompute.__init__` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/compute/test_virtapi.py:L82–L95` |
| `FakeCompute._get_provider_traits` | method | (self, context, rp_uuid) | private | `mock.Mock(traits=self.provider_traits[rp_uuid])` (src/nova/tests/unit/compute/test_virtapi.py:L98) | 1/2 | `src/nova/tests/unit/compute/test_virtapi.py:L97–L98` |
| `FakeCompute._set_traits_for_provider` | method | (self, context, rp_uuid, traits, generation=None) | private | not declared | 1/3 | `src/nova/tests/unit/compute/test_virtapi.py:L100–L102` |
| `FakeCompute._event_waiter` | method | (self, *args, **kwargs) | private | `event` (src/nova/tests/unit/compute/test_virtapi.py:L107) | 1/4 | `src/nova/tests/unit/compute/test_virtapi.py:L104–L107` |
| `FakeCompute._prepare_for_instance_event` | method | (self, instance, name, tag) | private | `m` (src/nova/tests/unit/compute/test_virtapi.py:L117) | 1/9 | `src/nova/tests/unit/compute/test_virtapi.py:L109–L117` |
| `ComputeVirtAPITest` | class | — | exported | not declared | — | `src/nova/tests/unit/compute/test_virtapi.py:L120–L382` |
| `ComputeVirtAPITest.cover_api` | field | — | public | not declared | — | `src/nova/tests/unit/compute/test_virtapi.py:L122–L122` |
| `ComputeVirtAPITest.set_up_virtapi` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/compute/test_virtapi.py:L124–L126` |
| `ComputeVirtAPITest.test_exit_wait_early` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_virtapi.py:L128–L132` |
| `ComputeVirtAPITest.test_wait_for_instance_event` | method | (self, mock_log) | public | not declared | 2/21 | `src/nova/tests/unit/compute/test_virtapi.py:L135–L156` |
| `ComputeVirtAPITest.test_wait_for_instance_event_failed` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_virtapi.py:L158–L170` |
| `ComputeVirtAPITest.test_wait_for_instance_event_failed._failer` | function | (*args, **kwargs) | private | `event` (src/nova/tests/unit/compute/test_virtapi.py:L162) | — | `src/nova/tests/unit/compute/test_virtapi.py:L159–L162` |
| `ComputeVirtAPITest.test_wait_for_instance_event_failed.do_test` | function | — | public | not declared | — | `src/nova/tests/unit/compute/test_virtapi.py:L165–L168` |
| `ComputeVirtAPITest.test_wait_for_instance_event_failed_callback` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/compute/test_virtapi.py:L172–L187` |
| `ComputeVirtAPITest.test_wait_for_instance_event_failed_callback._failer` | function | (*args, **kwargs) | private | `event` (src/nova/tests/unit/compute/test_virtapi.py:L176) | — | `src/nova/tests/unit/compute/test_virtapi.py:L173–L176` |
| `ComputeVirtAPITest.test_wait_for_instance_event_failed_callback.do_test` | function | — | public | not declared | — | `src/nova/tests/unit/compute/test_virtapi.py:L179–L185` |
| `ComputeVirtAPITest.test_wait_for_instance_event_timeout` | method | (self) | public | not declared | 1/26 | `src/nova/tests/unit/compute/test_virtapi.py:L192–L223` |
| `ComputeVirtAPITest.test_wait_for_instance_event_timeout.do_test` | function | (mock_waiter) | public | not declared | — | `src/nova/tests/unit/compute/test_virtapi.py:L205–L208` |
| `ComputeVirtAPITest.test_wait_for_instance_event_one_received_one_timed_out` | method | (self) | public | not declared | 1/26 | `src/nova/tests/unit/compute/test_virtapi.py:L228–L267` |
| `ComputeVirtAPITest.test_wait_for_instance_event_one_received_one_timed_out.fake_event_waiter` | function | (*args, **kwargs) | public | `event` (src/nova/tests/unit/compute/test_virtapi.py:L241); `compute_manager.ThreadingEventWithResult.FAILED_SENTINEL` (src/nova/tests/unit/compute/test_virtapi.py:L243) | — | `src/nova/tests/unit/compute/test_virtapi.py:L237–L243` |
| `ComputeVirtAPITest.test_wait_for_instance_event_one_received_one_timed_out.do_test` | function | (mock_waiter) | public | not declared | — | `src/nova/tests/unit/compute/test_virtapi.py:L248–L251` |
| `ComputeVirtAPITest.test_wait_for_instance_event_multiple_events` | method | (self) | public | not declared | 1/38 | `src/nova/tests/unit/compute/test_virtapi.py:L272–L344` |
| `ComputeVirtAPITest.test_wait_for_instance_event_multiple_events.fake_event_waiter` | function | (*args, **kwargs) | public | `event` (src/nova/tests/unit/compute/test_virtapi.py:L285); `compute_manager.ThreadingEventWithResult.FAILED_SENTINEL` (src/nova/tests/unit/compute/test_virtapi.py:L287) | — | `src/nova/tests/unit/compute/test_virtapi.py:L281–L287` |
| `ComputeVirtAPITest.test_wait_for_instance_event_multiple_events.fake_prepare_for_instance_event` | function | (instance, name, tag) | public | `m` (src/nova/tests/unit/compute/test_virtapi.py:L300) | — | `src/nova/tests/unit/compute/test_virtapi.py:L289–L300` |
| `ComputeVirtAPITest.test_wait_for_instance_event_multiple_events.do_test` | function | — | public | not declared | — | `src/nova/tests/unit/compute/test_virtapi.py:L306–L317` |
| `ComputeVirtAPITest.test_wait_for_instance_event_exit_early` | method | (self) | public | not declared | 3/12 | `src/nova/tests/unit/compute/test_virtapi.py:L346–L360` |
| `ComputeVirtAPITest.test_update_compute_provider_status` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/compute/test_virtapi.py:L362–L382` |

## Dependencies

- `import collections` (src/nova/tests/unit/compute/test_virtapi.py:L15)
- `unittest`: imports `mock` (src/nova/tests/unit/compute/test_virtapi.py:L16)
- `import os_traits` (src/nova/tests/unit/compute/test_virtapi.py:L18)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/compute/test_virtapi.py:L19)
- `nova.compute`: imports `manager as compute_manager` (src/nova/tests/unit/compute/test_virtapi.py:L21)
- `nova`: imports `context as nova_context` (src/nova/tests/unit/compute/test_virtapi.py:L22)
- `nova`: imports `exception` (src/nova/tests/unit/compute/test_virtapi.py:L23)
- `nova`: imports `objects` (src/nova/tests/unit/compute/test_virtapi.py:L24)
- `nova.scheduler.client`: imports `report` (src/nova/tests/unit/compute/test_virtapi.py:L25)
- `nova`: imports `test` (src/nova/tests/unit/compute/test_virtapi.py:L26)
- `nova.virt`: imports `fake` (src/nova/tests/unit/compute/test_virtapi.py:L27)
- `nova.virt`: imports `virtapi` (src/nova/tests/unit/compute/test_virtapi.py:L28)

