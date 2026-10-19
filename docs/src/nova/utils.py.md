# src/nova/utils.py

## Overview

This file implements the `utils` module, defining 2 classs, 7 constants, 62 functions, 5 methods, 3 variables, 33 imports, 12 side effects, 5 security surface entries.

Lines: total 1209, code 829, comment 155, blank 225

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/utils.py:L51–L51` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/utils.py:L53–L53` |
| `synchronized` | variable | — | exported | not declared | — | `src/nova/utils.py:L55–L55` |
| `NOVA_FAIR_LOCKS` | constant | — | exported | not declared | — | `src/nova/utils.py:L56–L56` |
| `SM_IMAGE_PROP_PREFIX` | constant | — | exported | not declared | — | `src/nova/utils.py:L58–L58` |
| `SM_INHERITABLE_KEYS` | constant | — | exported | not declared | — | `src/nova/utils.py:L59–L61` |
| `SM_SKIP_KEYS` | constant | — | exported | not declared | — | `src/nova/utils.py:L65–L70` |
| `_FILE_CACHE` | variable | — | unexported | not declared | — | `src/nova/utils.py:L72–L72` |
| `_SERVICE_TYPES` | variable | — | unexported | not declared | — | `src/nova/utils.py:L74–L74` |
| `cooperative_yield` | function | — | exported | not declared | 2/3 | `src/nova/utils.py:L77–L81` |
| `get_eventlet` | function | — | exported | `None` (src/nova/utils.py:L86); `eventlet` (src/nova/utils.py:L89) | 2/5 | `src/nova/utils.py:L84–L89` |
| `get_root_helper` | function | — | exported | `cmd` (src/nova/utils.py:L99) | 2/6 | `src/nova/utils.py:L94–L99` |
| `ssh_execute` | function | (dest, *cmd, **kwargs) | exported | `processutils.execute(*ssh_cmd, **kwargs)` (src/nova/utils.py:L107) | 1/5 | `src/nova/utils.py:L102–L107` |
| `generate_uid` | function | (topic, size=8) | exported | `'%s-%s' % (topic, random_string)` (src/nova/utils.py:L112) | 1/3 | `src/nova/utils.py:L110–L112` |
| `generate_random_string` | function | (size=8) | exported | `''.join([random.choice(characters) for _x in range(size)])` (src/nova/utils.py:L117) | 2/3 | `src/nova/utils.py:L115–L117` |
| `DEFAULT_PASSWORD_SYMBOLS` | constant | — | exported | not declared | — | `src/nova/utils.py:L122–L124` |
| `last_completed_audit_period` | function | (unit=None, before=None) | exported | `(begin, end)` (src/nova/utils.py:L214) | 15/63 | `src/nova/utils.py:L127–L214` |
| `generate_password` | function | (length=None, symbolgroups=DEFAULT_PASSWORD_SYMBOLS) | exported | `''.join(password)` (src/nova/utils.py:L250) | 4/12 | `src/nova/utils.py:L217–L250` |
| `parse_server_string` | function | (server_str) | exported | `(server_str, '')` (src/nova/utils.py:L262); `(address, port)` (src/nova/utils.py:L267); `(server_str, '')` (src/nova/utils.py:L271); `(address, port)` (src/nova/utils.py:L275); `('', '')` (src/nova/utils.py:L279) | 5/14 | `src/nova/utils.py:L253–L279` |
| `get_shortened_ipv6` | function | (address) | exported | `str(addr.ipv6())` (src/nova/utils.py:L284) | 1/3 | `src/nova/utils.py:L282–L284` |
| `get_shortened_ipv6_cidr` | function | (address) | exported | `str(net.cidr)` (src/nova/utils.py:L289) | 1/3 | `src/nova/utils.py:L287–L289` |
| `safe_ip_format` | function | (ip) | exported | `'[%s]' % ip` (src/nova/utils.py:L300); `ip` (src/nova/utils.py:L304) | 3/7 | `src/nova/utils.py:L292–L304` |
| `format_remote_path` | function | (host, path) | exported | `path` (src/nova/utils.py:L316); `"%s:%s" % (safe_ip_format(host), path)` (src/nova/utils.py:L318) | 2/4 | `src/nova/utils.py:L307–L318` |
| `sanitize_hostname` | function | (hostname, default_name=None) | exported | `truncate_hostname(default_name)` (src/nova/utils.py:L353); `hostname` (src/nova/utils.py:L354) | 4/12 | `src/nova/utils.py:L321–L354` |
| `sanitize_hostname.truncate_hostname` | function | (name) | public | `name[:63]` (src/nova/utils.py:L339) | — | `src/nova/utils.py:L334–L339` |
| `temporary_mutation` | function | (obj, **kwargs) | exported | not declared | 5/18 | `src/nova/utils.py:L358–L403` |
| `temporary_mutation.is_dict_like` | function | (thing) | public | `hasattr(thing, 'has_key') or isinstance(thing, dict)` (src/nova/utils.py:L369) | — | `src/nova/utils.py:L368–L369` |
| `temporary_mutation.get` | function | (thing, attr, default) | public | `thing.get(attr, default)` (src/nova/utils.py:L373); `getattr(thing, attr, default)` (src/nova/utils.py:L375) | — | `src/nova/utils.py:L371–L375` |
| `temporary_mutation.set_value` | function | (thing, attr, val) | public | not declared | — | `src/nova/utils.py:L377–L381` |
| `temporary_mutation.delete` | function | (thing, attr) | public | not declared | — | `src/nova/utils.py:L383–L387` |
| `tempdir` | function | (**kwargs) | exported | not declared | 4/12 | `src/nova/utils.py:L407–L418` |
| `metadata_to_dict` | function | (metadata, include_deleted=False) | exported | `result` (src/nova/utils.py:L427) | 4/7 | `src/nova/utils.py:L421–L427` |
| `dict_to_metadata` | function | (metadata) | exported | `result` (src/nova/utils.py:L434) | 2/5 | `src/nova/utils.py:L430–L434` |
| `instance_meta` | function | (instance) | exported | `instance['metadata']` (src/nova/utils.py:L439); `metadata_to_dict(instance['metadata'])` (src/nova/utils.py:L441) | 2/5 | `src/nova/utils.py:L437–L441` |
| `instance_sys_meta` | function | (instance) | exported | `{}` (src/nova/utils.py:L448); `instance['system_metadata']` (src/nova/utils.py:L450); `metadata_to_dict(instance['system_metadata'], include_deleted=True)` (src/nova/utils.py:L452) | 3/8 | `src/nova/utils.py:L446–L453` |
| `expects_func_args` | function | (*args) | exported | `_decorator_checker` (src/nova/utils.py:L474) | 1/3 | `src/nova/utils.py:L456–L474` |
| `expects_func_args._decorator_checker` | function | (dec) | private | `_decorator` (src/nova/utils.py:L473) | — | `src/nova/utils.py:L457–L473` |
| `expects_func_args._decorator_checker._decorator` | function | (f) | private | `dec(f)` (src/nova/utils.py:L466) | — | `src/nova/utils.py:L459–L472` |
| `check_string_length` | function | (value, name=None, min_length=0, max_length=None) | exported | not declared | 2/7 | `src/nova/utils.py:L477–L489` |
| `validate_integer` | function | (value, name, min_value=None, max_value=None) | exported | `strutils.validate_integer(value, name, min_value, max_value)` (src/nova/utils.py:L503) | 2/5 | `src/nova/utils.py:L492–L505` |
| `is_none_string` | function | (val) | exported | `False` (src/nova/utils.py:L512); `val.lower() == 'none'` (src/nova/utils.py:L514) | 2/4 | `src/nova/utils.py:L508–L514` |
| `is_auto_disk_config_disabled` | function | (auto_disk_config_raw) | exported | `auto_disk_config_disabled` (src/nova/utils.py:L523) | 3/7 | `src/nova/utils.py:L517–L523` |
| `get_auto_disk_config_from_instance` | function | (instance=None, sys_meta=None) | exported | `sys_meta.get("image_auto_disk_config")` (src/nova/utils.py:L529) | 2/4 | `src/nova/utils.py:L526–L529` |
| `get_auto_disk_config_from_image_props` | function | (image_properties) | exported | `image_properties.get("auto_disk_config")` (src/nova/utils.py:L533) | 1/2 | `src/nova/utils.py:L532–L533` |
| `get_system_metadata_from_image` | function | (image_meta, flavor=None) | exported | `system_meta` (src/nova/utils.py:L561) | 9/19 | `src/nova/utils.py:L536–L561` |
| `get_image_from_system_metadata` | function | (system_meta) | exported | `image_meta` (src/nova/utils.py:L590) | 7/18 | `src/nova/utils.py:L564–L590` |
| `get_hash_str` | function | (base_str) | exported | `hashlib.md5(base_str, usedforsecurity=False).hexdigest()` (src/nova/utils.py:L600) | 2/4 | `src/nova/utils.py:L593–L600` |
| `get_sha256_str` | function | (base_str) | exported | `hashlib.sha256(base_str).hexdigest()` (src/nova/utils.py:L613) | 2/4 | `src/nova/utils.py:L603–L613` |
| `get_obj_repr_unicode` | function | (obj) | exported | `obj_repr` (src/nova/utils.py:L623) | 1/3 | `src/nova/utils.py:L616–L623` |
| `safe_truncate` | function | (value, length) | exported | `u_value` (src/nova/utils.py:L643) | 3/10 | `src/nova/utils.py:L626–L643` |
| `read_cached_file` | function | (filename, force_reload=False) | exported | `(reloaded, cache_info['data'])` (src/nova/utils.py:L666) | 4/13 | `src/nova/utils.py:L646–L666` |
| `delete_cached_file` | function | (filename) | exported | not declared | 2/3 | `src/nova/utils.py:L669–L675` |
| `isotime` | function | (at=None) | exported | `date_string` (src/nova/utils.py:L689) | 4/7 | `src/nova/utils.py:L678–L689` |
| `strtime` | function | (at) | exported | `at.strftime("%Y-%m-%dT%H:%M:%S.%f")` (src/nova/utils.py:L693) | 1/2 | `src/nova/utils.py:L692–L693` |
| `_get_conf_group` | function | (service_type) | unexported | `confgrp` (src/nova/utils.py:L707) | 5/7 | `src/nova/utils.py:L696–L707` |
| `_get_auth_and_session` | function | (confgrp, ksa_auth=None, ksa_session=None) | unexported | `ksa_auth, ksa_session` (src/nova/utils.py:L725) | 5/10 | `src/nova/utils.py:L710–L725` |
| `get_ksa_adapter` | function | (service_type, ksa_auth=None, ksa_session=None, min_version=None, max_version=None) | exported | `ks_loading.load_adapter_from_conf_options( CONF, confgrp, session=ksa_session, auth=ksa_auth, min_version=min_version, max_version=max_version, raise_exc=False)` (src/nova/utils.py:L766) | 1/8 | `src/nova/utils.py:L728–L768` |
| `get_sdk_adapter` | function | (service_type, admin, check_service=False, conf_group=None, context=None, ksa_auth=None, **kwargs) | exported | `getattr(conn, service_type.replace('-', '_'))` (src/nova/utils.py:L854) | 7/38 | `src/nova/utils.py:L771–L854` |
| `generate_hostid` | function | (host, project_id) | exported | `sha_hash.hexdigest()` (src/nova/utils.py:L870); `""` (src/nova/utils.py:L871) | 2/6 | `src/nova/utils.py:L857–L871` |
| `nested_contexts` | function | (*contexts) | exported | not declared | 2/3 | `src/nova/utils.py:L875–L877` |
| `normalize_rc_name` | function | (rc_name) | exported | `None` (src/nova/utils.py:L883); `norm_name` (src/nova/utils.py:L889) | 2/7 | `src/nova/utils.py:L880–L889` |
| `raise_if_old_compute` | function | — | exported | `` (src/nova/utils.py:L929) | 5/33 | `src/nova/utils.py:L892–L939` |
| `run_once` | function | (message, logger, cleanup=None) | exported | `outer_wrapper` (src/nova/utils.py:L986) | 1/3 | `src/nova/utils.py:L942–L986` |
| `run_once.outer_wrapper` | function | (func) | public | `wrapper` (src/nova/utils.py:L985) | — | `src/nova/utils.py:L952–L985` |
| `run_once.outer_wrapper.wrapper` | function | (*args, **kwargs) | public | `func(*args, **kwargs)` (src/nova/utils.py:L963) | — | `src/nova/utils.py:L955–L967` |
| `run_once.outer_wrapper.reset` | function | (wrapper, *args, **kwargs) | public | `cleanup(*args, **kwargs)` (src/nova/utils.py:L980) | — | `src/nova/utils.py:L971–L982` |
| `_SentinelException` | class | — | unexported | not declared | — | `src/nova/utils.py:L989–L990` |
| `latch_error_on_raise` | function | (retryable=(_SentinelException,)) | exported | `outer_wrapper` (src/nova/utils.py:L1026) | 1/3 | `src/nova/utils.py:L993–L1026` |
| `latch_error_on_raise.outer_wrapper` | function | (func) | public | `wrapper` (src/nova/utils.py:L1025) | — | `src/nova/utils.py:L1002–L1025` |
| `latch_error_on_raise.outer_wrapper.wrapper` | function | (*args, **kwargs) | public | `func(*args, **kwargs)` (src/nova/utils.py:L1009) | — | `src/nova/utils.py:L1005–L1017` |
| `latch_error_on_raise.outer_wrapper.reset` | function | (wrapper) | public | not declared | — | `src/nova/utils.py:L1021–L1022` |
| `FairLockGuard` | class | — | exported | not declared | — | `src/nova/utils.py:L1029–L1190` |
| `FairLockGuard.__init__` | method | (self, names) | public | not declared | 1/7 | `src/nova/utils.py:L1079–L1097` |
| `FairLockGuard._release_locks` | method | (locks) | private | not declared | 4/7 | `src/nova/utils.py:L1100–L1106` |
| `FairLockGuard.__enter__` | method | (self) | public | `` (src/nova/utils.py:L1117) | 5/20 | `src/nova/utils.py:L1108–L1152` |
| `FairLockGuard.__exit__` | method | (self, exc_type, exc_value, traceback) | public | `` (src/nova/utils.py:L1164); `` (src/nova/utils.py:L1169) | 3/13 | `src/nova/utils.py:L1154–L1176` |
| `FairLockGuard.is_locked` | method | (self) | public | `( self.locks and all(lock.is_writer() for lock in self.locks))` (src/nova/utils.py:L1189) | 3/4 | `src/nova/utils.py:L1178–L1190` |
| `concurrency_mode_threading` | function | — | exported | `not monkey_patch.is_patched()` (src/nova/utils.py:L1198) | 1/3 | `src/nova/utils.py:L1193–L1198` |
| `tpool_wrap` | function | (target, autowrap=()) | exported | `target` (src/nova/utils.py:L1206); `get_eventlet().tpool.Proxy(target, autowrap=autowrap)` (src/nova/utils.py:L1209) | 2/5 | `src/nova/utils.py:L1201–L1209` |

## Dependencies

- `import contextlib` (src/nova/utils.py:L19)
- `import datetime` (src/nova/utils.py:L20)
- `import functools` (src/nova/utils.py:L21)
- `import hashlib` (src/nova/utils.py:L22)
- `import inspect` (src/nova/utils.py:L23)
- `import os` (src/nova/utils.py:L24)
- `import random` (src/nova/utils.py:L25)
- `import re` (src/nova/utils.py:L26)
- `import shutil` (src/nova/utils.py:L27)
- `import tempfile` (src/nova/utils.py:L28)
- `import threading` (src/nova/utils.py:L29)
- `import time` (src/nova/utils.py:L30)
- `import typing as ty` (src/nova/utils.py:L31)
- `keystoneauth1`: imports `loading as ks_loading` (src/nova/utils.py:L33)
- `import netaddr` (src/nova/utils.py:L34)
- `openstack`: imports `connection` (src/nova/utils.py:L35)
- `openstack`: imports `exceptions as sdk_exc` (src/nova/utils.py:L36)
- `import os_resource_classes as orc` (src/nova/utils.py:L37)
- `os_service_types`: imports `service_types` (src/nova/utils.py:L38)
- `oslo_concurrency`: imports `lockutils` (src/nova/utils.py:L39)
- `oslo_concurrency`: imports `processutils` (src/nova/utils.py:L40)
- `oslo_log`: imports `log as logging` (src/nova/utils.py:L41)
- `oslo_utils`: imports `encodeutils` (src/nova/utils.py:L42)
- `oslo_utils`: imports `strutils` (src/nova/utils.py:L43)
- `oslo_utils`: imports `timeutils` (src/nova/utils.py:L44)
- `import nova.conf` (src/nova/utils.py:L46)
- `nova`: imports `exception` (src/nova/utils.py:L47)
- `nova.i18n`: imports `_` (src/nova/utils.py:L48)
- `nova`: imports `safe_utils` (src/nova/utils.py:L49)
- `import eventlet` (src/nova/utils.py:L88)
- `nova`: imports `context as nova_context` (src/nova/utils.py:L894)
- `nova.objects`: imports `service` (src/nova/utils.py:L895)
- `nova`: imports `monkey_patch` (src/nova/utils.py:L1197)

## Side Effects

- **file-io**: tmpdir = tempfile.mkdtemp(**argdict) (src/nova/utils.py:L411)
- **file-io**: shutil.rmtree(tmpdir) (src/nova/utils.py:L416)
- **file-io**: mtime = os.path.getmtime(filename) (src/nova/utils.py:L657)
- **file-io**: with open(filename) as fap: (src/nova/utils.py:L662)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/utils.py:L51)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/utils.py:L53)
- **global-mutation**: NOVA_FAIR_LOCKS = lockutils.FairLocks() (src/nova/utils.py:L56)
- **global-mutation**: SM_IMAGE_PROP_PREFIX = "image_" (src/nova/utils.py:L58)
- **global-mutation**: SM_INHERITABLE_KEYS = ( (src/nova/utils.py:L59)
- **global-mutation**: SM_SKIP_KEYS = ( (src/nova/utils.py:L65)
- **global-mutation**: DEFAULT_PASSWORD_SYMBOLS = ('23456789',  # Removed: 0,1 (src/nova/utils.py:L122)
- **global-mutation**: NOT_PRESENT = object() (src/nova/utils.py:L389)

## Security Surface

- **privilege** (`crypto-key`): from keystoneauth1 import loading as ks_loading (src/nova/utils.py:L33)
- **privilege** (`crypto-key`): """Construct a keystoneauth1 Adapter for a given service type. (src/nova/utils.py:L730)
- **privilege** (`crypto-key`): :param ksa_auth: A keystoneauth1 auth plugin. If not specified, we attempt (src/nova/utils.py:L744)
- **privilege** (`crypto-key`): :param ksa_session: A keystoneauth1 Session.  If not specified, we attempt (src/nova/utils.py:L747)
- **privilege** (`crypto-key`): :return: A keystoneauth1 Adapter object for the specified service_type. (src/nova/utils.py:L757)

