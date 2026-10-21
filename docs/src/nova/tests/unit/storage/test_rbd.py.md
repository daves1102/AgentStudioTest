# src/nova/tests/unit/storage/test_rbd.py

## Overview

This file implements the `test_rbd` module, defining 2 classs, 2 constants, 4 functions, 53 methods, 10 imports, 2 side effects.

Lines: total 704, code 578, comment 24, blank 102

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CEPH_MON_DUMP` | constant | — | exported | not declared | — | `src/nova/tests/unit/storage/test_rbd.py:L27–L52` |
| `CEPH_DF` | constant | — | exported | not declared | — | `src/nova/tests/unit/storage/test_rbd.py:L56–L99` |
| `FakeException` | class | — | exported | not declared | — | `src/nova/tests/unit/storage/test_rbd.py:L102–L103` |
| `RbdTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/storage/test_rbd.py:L106–L704` |
| `RbdTestCase.setUp` | method | (self) | public | not declared | 1/34 | `src/nova/tests/unit/storage/test_rbd.py:L108–L146` |
| `RbdTestCase.test_rbdproxy_wraps_rbd` | method | (self) | public | not declared | 2/7 | `src/nova/tests/unit/storage/test_rbd.py:L148–L154` |
| `RbdTestCase.test_rbdproxy_attribute_access_proxying` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/storage/test_rbd.py:L156–L160` |
| `RbdTestCase.test_good_locations` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/storage/test_rbd.py:L162–L165` |
| `RbdTestCase.test_bad_locations` | method | (self) | public | not declared | 2/14 | `src/nova/tests/unit/storage/test_rbd.py:L167–L181` |
| `RbdTestCase.test_rbddriver` | method | (self, mock_client) | public | not declared | 1/5 | `src/nova/tests/unit/storage/test_rbd.py:L184–L188` |
| `RbdTestCase.test_cloneable` | method | (self, mock_get_fsid) | public | not declared | 1/6 | `src/nova/tests/unit/storage/test_rbd.py:L191–L196` |
| `RbdTestCase.test_uncloneable_different_fsid` | method | (self, mock_get_fsid) | public | not declared | 1/7 | `src/nova/tests/unit/storage/test_rbd.py:L199–L205` |
| `RbdTestCase.test_uncloneable_unreadable` | method | (self, mock_proxy, mock_get_fsid) | public | not declared | 1/11 | `src/nova/tests/unit/storage/test_rbd.py:L209–L221` |
| `RbdTestCase.test_uncloneable_bad_format` | method | (self, mock_get_fsid) | public | not declared | 2/9 | `src/nova/tests/unit/storage/test_rbd.py:L224–L232` |
| `RbdTestCase.test_uncloneable_missing_format` | method | (self, mock_get_fsid) | public | not declared | 1/7 | `src/nova/tests/unit/storage/test_rbd.py:L235–L241` |
| `RbdTestCase.test_get_mon_addrs` | method | (self, mock_execute) | public | not declared | 1/5 | `src/nova/tests/unit/storage/test_rbd.py:L244–L248` |
| `RbdTestCase.test_get_mon_addrs_with_brackets` | method | (self, mock_execute) | public | not declared | 1/6 | `src/nova/tests/unit/storage/test_rbd.py:L251–L256` |
| `RbdTestCase.test_rbd_conf_features` | method | (self, mock_connect) | public | not declared | 1/10 | `src/nova/tests/unit/storage/test_rbd.py:L259–L269` |
| `RbdTestCase.test_clone` | method | (self, mock_client) | public | not declared | 1/16 | `src/nova/tests/unit/storage/test_rbd.py:L272–L298` |
| `RbdTestCase.test_clone.mock__enter__` | function | (inst) | public | `_inner` (src/nova/tests/unit/storage/test_rbd.py:L284) | — | `src/nova/tests/unit/storage/test_rbd.py:L280–L284` |
| `RbdTestCase.test_clone.mock__enter__._inner` | function | — | private | `inst` (src/nova/tests/unit/storage/test_rbd.py:L283) | — | `src/nova/tests/unit/storage/test_rbd.py:L281–L283` |
| `RbdTestCase.test_clone_eperm` | method | (self, mock_client) | public | not declared | 1/14 | `src/nova/tests/unit/storage/test_rbd.py:L301–L323` |
| `RbdTestCase.test_clone_eperm.mock__enter__` | function | (inst) | public | `_inner` (src/nova/tests/unit/storage/test_rbd.py:L313) | — | `src/nova/tests/unit/storage/test_rbd.py:L309–L313` |
| `RbdTestCase.test_clone_eperm.mock__enter__._inner` | function | — | private | `inst` (src/nova/tests/unit/storage/test_rbd.py:L312) | — | `src/nova/tests/unit/storage/test_rbd.py:L310–L312` |
| `RbdTestCase.test_resize` | method | (self, mock_proxy) | public | not declared | 1/6 | `src/nova/tests/unit/storage/test_rbd.py:L326–L331` |
| `RbdTestCase.test_rbd_volume_proxy_init` | method | (self, mock_connect_from_rados, mock_disconnect_from_rados) | public | not declared | 1/8 | `src/nova/tests/unit/storage/test_rbd.py:L335–L344` |
| `RbdTestCase.test_connect_to_rados_default` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/storage/test_rbd.py:L346–L352` |
| `RbdTestCase.test_connect_to_rados_different_pool` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/storage/test_rbd.py:L354–L360` |
| `RbdTestCase.test_connect_to_rados_error` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/storage/test_rbd.py:L362–L368` |
| `RbdTestCase.test_connect_to_rados_unicode_arg` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/storage/test_rbd.py:L370–L373` |
| `RbdTestCase.test_ceph_args_none` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/storage/test_rbd.py:L375–L378` |
| `RbdTestCase.test_ceph_args_rbd_user` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/storage/test_rbd.py:L380–L383` |
| `RbdTestCase.test_ceph_args_ceph_conf` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/storage/test_rbd.py:L385–L389` |
| `RbdTestCase.test_ceph_args_rbd_user_and_ceph_conf` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/storage/test_rbd.py:L391–L395` |
| `RbdTestCase.test_exists` | method | (self, mock_proxy) | public | not declared | 1/8 | `src/nova/tests/unit/storage/test_rbd.py:L398–L405` |
| `RbdTestCase.test_cleanup_volumes` | method | (self, mock_client) | public | not declared | 1/13 | `src/nova/tests/unit/storage/test_rbd.py:L408–L424` |
| `RbdTestCase._test_cleanup_exception` | method | (self, exception_name, mock_client) | private | not declared | 1/14 | `src/nova/tests/unit/storage/test_rbd.py:L429–L446` |
| `RbdTestCase.test_cleanup_volumes_fail_not_found` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/storage/test_rbd.py:L448–L449` |
| `RbdTestCase.test_cleanup_volumes_fail_snapshots` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/storage/test_rbd.py:L451–L452` |
| `RbdTestCase.test_cleanup_volumes_fail_other` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/storage/test_rbd.py:L454–L456` |
| `RbdTestCase.test_cleanup_volumes_pending_resize` | method | (self, mock_proxy, mock_client) | public | not declared | 1/24 | `src/nova/tests/unit/storage/test_rbd.py:L460–L486` |
| `RbdTestCase.test_cleanup_volumes_reverting_resize` | method | (self, mock_client) | public | not declared | 2/15 | `src/nova/tests/unit/storage/test_rbd.py:L489–L506` |
| `RbdTestCase.test_destroy_volume` | method | (self, mock_client) | public | not declared | 1/9 | `src/nova/tests/unit/storage/test_rbd.py:L509–L517` |
| `RbdTestCase.test_destroy_volume_with_retries` | method | (self, mock_loopingcall, mock_client) | public | not declared | 1/12 | `src/nova/tests/unit/storage/test_rbd.py:L521–L538` |
| `RbdTestCase.test_remove_image` | method | (self, mock_client) | public | not declared | 1/9 | `src/nova/tests/unit/storage/test_rbd.py:L541–L552` |
| `RbdTestCase.test_create_snap` | method | (self, mock_proxy) | public | not declared | 1/5 | `src/nova/tests/unit/storage/test_rbd.py:L555–L559` |
| `RbdTestCase.test_create_protected_snap` | method | (self, mock_proxy) | public | not declared | 1/8 | `src/nova/tests/unit/storage/test_rbd.py:L562–L569` |
| `RbdTestCase.test_remove_snap` | method | (self, mock_proxy) | public | not declared | 1/7 | `src/nova/tests/unit/storage/test_rbd.py:L572–L578` |
| `RbdTestCase.test_remove_snap_force` | method | (self, mock_proxy) | public | not declared | 1/9 | `src/nova/tests/unit/storage/test_rbd.py:L581–L589` |
| `RbdTestCase.test_remove_snap_does_nothing_when_no_snapshot` | method | (self, mock_proxy) | public | not declared | 1/6 | `src/nova/tests/unit/storage/test_rbd.py:L592–L597` |
| `RbdTestCase.test_remove_snap_does_nothing_when_protected` | method | (self, mock_proxy) | public | not declared | 1/7 | `src/nova/tests/unit/storage/test_rbd.py:L600–L606` |
| `RbdTestCase.test_remove_snap_protected_ignore_errors` | method | (self, mock_proxy) | public | not declared | 1/8 | `src/nova/tests/unit/storage/test_rbd.py:L609–L616` |
| `RbdTestCase.test_parent_info` | method | (self, mock_proxy) | public | not declared | 1/5 | `src/nova/tests/unit/storage/test_rbd.py:L619–L623` |
| `RbdTestCase.test_parent_info_throws_exception_on_error` | method | (self, mock_proxy) | public | not declared | 1/7 | `src/nova/tests/unit/storage/test_rbd.py:L626–L632` |
| `RbdTestCase.test_flatten` | method | (self, mock_proxy) | public | not declared | 1/5 | `src/nova/tests/unit/storage/test_rbd.py:L635–L639` |
| `RbdTestCase.test_rollback_to_snap` | method | (self, mock_proxy) | public | not declared | 1/9 | `src/nova/tests/unit/storage/test_rbd.py:L642–L651` |
| `RbdTestCase.test_get_pool_info` | method | (self, mock_execute) | public | not declared | 1/7 | `src/nova/tests/unit/storage/test_rbd.py:L654–L660` |
| `RbdTestCase.test_get_pool_info_execute_failed` | method | (self, mock_execute) | public | not declared | 1/2 | `src/nova/tests/unit/storage/test_rbd.py:L664–L665` |
| `RbdTestCase.test_get_pool_info_not_found` | method | (self, mock_execute) | public | not declared | 1/4 | `src/nova/tests/unit/storage/test_rbd.py:L668–L672` |
| `RbdTestCase.test_export_image` | method | (self, mock_execute) | public | not declared | 1/14 | `src/nova/tests/unit/storage/test_rbd.py:L675–L689` |
| `RbdTestCase.test_export_image_default_pool` | method | (self, mock_execute) | public | not declared | 1/12 | `src/nova/tests/unit/storage/test_rbd.py:L692–L704` |

## Dependencies

- `unittest`: imports `mock` (src/nova/tests/unit/storage/test_rbd.py:L13)
- `oslo_concurrency`: imports `processutils` (src/nova/tests/unit/storage/test_rbd.py:L15)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/storage/test_rbd.py:L16)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/unit/storage/test_rbd.py:L17)
- `nova.compute`: imports `task_states` (src/nova/tests/unit/storage/test_rbd.py:L19)
- `nova`: imports `exception` (src/nova/tests/unit/storage/test_rbd.py:L20)
- `nova`: imports `objects` (src/nova/tests/unit/storage/test_rbd.py:L21)
- `nova.storage`: imports `rbd_utils` (src/nova/tests/unit/storage/test_rbd.py:L22)
- `nova`: imports `test` (src/nova/tests/unit/storage/test_rbd.py:L23)
- `nova`: imports `utils` (src/nova/tests/unit/storage/test_rbd.py:L24)

## Side Effects

- **global-mutation**: CEPH_MON_DUMP = r"""dumped monmap epoch 1 (src/nova/tests/unit/storage/test_rbd.py:L27)
- **global-mutation**: CEPH_DF = """ (src/nova/tests/unit/storage/test_rbd.py:L56)

