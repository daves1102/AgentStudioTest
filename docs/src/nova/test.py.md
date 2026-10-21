# src/nova/test.py

## Overview

This file implements the `test` module, defining 10 classs, 1 classmethod, 10 constants, 2 fields, 11 functions, 40 methods, 5 staticmethods, 2 variables, 48 imports, 18 side effects.

Lines: total 1046, code 663, comment 187, blank 196

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CONF` | constant | — | exported | not declared | — | `src/nova/test.py:L73–L73` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/test.py:L79–L79` |
| `_TRUE_VALUES` | variable | — | unexported | not declared | — | `src/nova/test.py:L81–L81` |
| `CELL1_NAME` | constant | — | exported | not declared | — | `src/nova/test.py:L82–L82` |
| `nested` | variable | — | exported | not declared | — | `src/nova/test.py:L86–L86` |
| `TestingException` | class | — | exported | not declared | — | `src/nova/test.py:L89–L90` |
| `_poison_unfair_compute_resource_semaphore_locking` | function | — | unexported | not declared | 1/4 | `src/nova/test.py:L100–L125` |
| `_poison_unfair_compute_resource_semaphore_locking.poisoned_synchronized` | function | (*args, **kwargs) | public | `orig_synchronized(*args, **kwargs)` (src/nova/test.py:L121) | — | `src/nova/test.py:L106–L121` |
| `NovaExceptionReraiseFormatError` | class | — | exported | not declared | — | `src/nova/test.py:L133–L144` |
| `NovaExceptionReraiseFormatError.real_log_exception` | field | — | public | not declared | — | `src/nova/test.py:L134–L134` |
| `NovaExceptionReraiseFormatError.patch` | method | (cls) | public | not declared | 1/2 | `src/nova/test.py:L137–L138` |
| `NovaExceptionReraiseFormatError._wrap_log_exception` | method | (self) | private | not declared | 1/4 | `src/nova/test.py:L141–L144` |
| `TestCase` | class | — | exported | not declared | — | `src/nova/test.py:L153–L741` |
| `TestCase.USES_DB` | constant | — | public | not declared | — | `src/nova/test.py:L160–L160` |
| `TestCase.USES_DB_SELF` | constant | — | public | not declared | — | `src/nova/test.py:L167–L167` |
| `TestCase.REQUIRES_LOCKING` | constant | — | public | not declared | — | `src/nova/test.py:L168–L168` |
| `TestCase.STUB_RPC` | constant | — | public | not declared | — | `src/nova/test.py:L171–L171` |
| `TestCase.NUMBER_OF_CELLS` | constant | — | public | not declared | — | `src/nova/test.py:L175–L175` |
| `TestCase.STUB_COMPUTE_ID` | constant | — | public | not declared | — | `src/nova/test.py:L181–L181` |
| `TestCase.setUp` | method | (self) | public | not declared | 6/73 | `src/nova/test.py:L183–L350` |
| `TestCase._setup_cells` | method | (self) | private | not declared | 2/26 | `src/nova/test.py:L352–L388` |
| `TestCase._restore_obj_registry` | method | (self) | private | not declared | 1/3 | `src/nova/test.py:L390–L392` |
| `TestCase._clear_attrs` | method | (self) | private | not declared | 5/4 | `src/nova/test.py:L394–L405` |
| `TestCase.stub_out` | method | (self, old, new) | public | not declared | 1/2 | `src/nova/test.py:L407–L414` |
| `TestCase.patch_exists` | method | (patched_path, result, other=None) | public | `patch_exists(patched_path, result, other)` (src/nova/test.py:L426) | 1/2 | `src/nova/test.py:L417–L426` |
| `TestCase.patch_open` | method | (patched_path, read_data) | public | `patch_open(patched_path, read_data)` (src/nova/test.py:L437) | 1/2 | `src/nova/test.py:L429–L437` |
| `TestCase.flags` | method | (self, **kw) | public | not declared | 4/6 | `src/nova/test.py:L439–L447` |
| `TestCase.reset_flags` | method | (self, *k, **kw) | public | not declared | 2/4 | `src/nova/test.py:L449–L453` |
| `TestCase.enforce_fk_constraints` | method | (self, engine=None) | public | not declared | 3/6 | `src/nova/test.py:L455–L460` |
| `TestCase.start_service` | method | (self, name, host=None, cell_name=None, **kwargs) | public | `svc.service` (src/nova/test.py:L524) | 12/35 | `src/nova/test.py:L462–L524` |
| `TestCase.start_service.patch_stop` | function | (*a, **k) | public | `real_stop(*a, **k)` (src/nova/test.py:L520) | — | `src/nova/test.py:L518–L520` |
| `TestCase._start_compute` | method | (self, host, cell_name=None) | private | `compute` (src/nova/test.py:L537) | 1/4 | `src/nova/test.py:L526–L537` |
| `TestCase._run_periodics` | method | (self, raise_on_error=False) | private | not declared | 4/12 | `src/nova/test.py:L539–L563` |
| `TestCase.restart_compute_service` | method | (self, compute, keep_hypervisor_state=True) | public | `new_compute` (src/nova/test.py:L613) | 2/14 | `src/nova/test.py:L565–L613` |
| `TestCase.assertJsonEqual` | method | (self, expected, observed, message='') | public | not declared | 5/23 | `src/nova/test.py:L615–L703` |
| `TestCase.assertJsonEqual.sort_key` | function | (x) | public | `str(x)` (src/nova/test.py:L638); `sorted(items)` (src/nova/test.py:L642); `x` (src/nova/test.py:L643) | — | `src/nova/test.py:L636–L643` |
| `TestCase.assertJsonEqual.inner` | function | (expected, observed, path='root') | public | not declared | — | `src/nova/test.py:L645–L686` |
| `TestCase.assertXmlEqual` | method | (self, expected, observed, **options) | public | not declared | 1/2 | `src/nova/test.py:L705–L706` |
| `TestCase.assertPublicAPISignatures` | method | (self, baseinst, inst) | public | not declared | 4/18 | `src/nova/test.py:L708–L741` |
| `TestCase.assertPublicAPISignatures.get_public_apis` | function | (inst) | public | `methods` (src/nova/test.py:L719) | — | `src/nova/test.py:L709–L719` |
| `TestCase.assertPublicAPISignatures.get_public_apis.findmethods` | function | (object) | public | `inspect.ismethod(object) or inspect.isfunction(object)` (src/nova/test.py:L713) | — | `src/nova/test.py:L712–L713` |
| `APICoverage` | class | — | exported | not declared | — | `src/nova/test.py:L744–L756` |
| `APICoverage.cover_api` | field | — | public | not declared | — | `src/nova/test.py:L746–L746` |
| `APICoverage.test_api_methods` | method | (self) | public | not declared | 5/9 | `src/nova/test.py:L748–L756` |
| `NoDBTestCase` | class | — | exported | not declared | — | `src/nova/test.py:L759–L764` |
| `NoDBTestCase.USES_DB` | constant | — | public | not declared | — | `src/nova/test.py:L764–L764` |
| `SubclassSignatureTestCase` | class | — | exported | not declared | — | `src/nova/test.py:L767–L851` |
| `SubclassSignatureTestCase._get_base_class` | method | (self) | private | not declared | 1/2 | `src/nova/test.py:L782–L783` |
| `SubclassSignatureTestCase.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/test.py:L785–L787` |
| `SubclassSignatureTestCase._get_argspecs` | method | (cls) | private | `argspecs` (src/nova/test.py:L823) | 5/11 | `src/nova/test.py:L790–L823` |
| `SubclassSignatureTestCase._clsname` | method | (cls) | private | `"%s.%s" % (cls.__module__, cls.__name__)` (src/nova/test.py:L828) | 1/2 | `src/nova/test.py:L826–L828` |
| `SubclassSignatureTestCase._test_signatures_recurse` | method | (self, base, base_argspecs) | private | not declared | 4/12 | `src/nova/test.py:L830–L848` |
| `SubclassSignatureTestCase.test_signatures` | method | (self) | public | not declared | 1/2 | `src/nova/test.py:L850–L851` |
| `TimeOverride` | class | — | exported | not declared | — | `src/nova/test.py:L854–L863` |
| `TimeOverride.__init__` | method | (self, override_time=None) | public | not declared | 1/2 | `src/nova/test.py:L857–L858` |
| `TimeOverride.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/test.py:L860–L863` |
| `MatchType` | class | — | exported | not declared | — | `src/nova/test.py:L866–L893` |
| `MatchType.__init__` | method | (self, wanttype) | public | not declared | 1/2 | `src/nova/test.py:L883–L884` |
| `MatchType.__eq__` | method | (self, other) | public | `type(other) is self.wanttype` (src/nova/test.py:L887) | 1/2 | `src/nova/test.py:L886–L887` |
| `MatchType.__ne__` | method | (self, other) | public | `type(other) is not self.wanttype` (src/nova/test.py:L890) | 1/2 | `src/nova/test.py:L889–L890` |
| `MatchType.__repr__` | method | (self) | public | `"<MatchType:" + str(self.wanttype) + ">"` (src/nova/test.py:L893) | 1/2 | `src/nova/test.py:L892–L893` |
| `MatchObjPrims` | class | — | exported | not declared | — | `src/nova/test.py:L896–L909` |
| `MatchObjPrims.__init__` | method | (self, want_obj) | public | not declared | 1/2 | `src/nova/test.py:L899–L900` |
| `MatchObjPrims.__eq__` | method | (self, other) | public | `objects_base.obj_equal_prims(other, self.want_obj)` (src/nova/test.py:L903) | 1/2 | `src/nova/test.py:L902–L903` |
| `MatchObjPrims.__ne__` | method | (self, other) | public | `not other == self.want_obj` (src/nova/test.py:L906) | 1/2 | `src/nova/test.py:L905–L906` |
| `MatchObjPrims.__repr__` | method | (self) | public | `'<MatchObjPrims:' + str(self.want_obj) + '>'` (src/nova/test.py:L909) | 1/2 | `src/nova/test.py:L908–L909` |
| `ContainKeyValue` | class | — | exported | not declared | — | `src/nova/test.py:L912–L947` |
| `ContainKeyValue.__init__` | method | (self, wantkey, wantvalue) | public | not declared | 1/3 | `src/nova/test.py:L929–L931` |
| `ContainKeyValue.__eq__` | method | (self, other) | public | `other[self.wantkey] == self.wantvalue` (src/nova/test.py:L935); `False` (src/nova/test.py:L937) | 2/5 | `src/nova/test.py:L933–L937` |
| `ContainKeyValue.__ne__` | method | (self, other) | public | `other[self.wantkey] != self.wantvalue` (src/nova/test.py:L941); `True` (src/nova/test.py:L943) | 2/5 | `src/nova/test.py:L939–L943` |
| `ContainKeyValue.__repr__` | method | (self) | public | `"<ContainKeyValue: key " + str(self.wantkey) + \ " and value " + str(self.wantvalue) + ">"` (src/nova/test.py:L946) | 1/3 | `src/nova/test.py:L945–L947` |
| `patch_exists` | function | (patched_path, result, other=None) | exported | not declared | 1/6 | `src/nova/test.py:L951–L997` |
| `patch_exists.fake_exists` | function | (path) | public | `result` (src/nova/test.py:L989); `other` (src/nova/test.py:L991); `real_exists(path)` (src/nova/test.py:L993) | — | `src/nova/test.py:L987–L993` |
| `patch_open` | function | (patched_path, read_data) | exported | not declared | 1/7 | `src/nova/test.py:L1001–L1046` |
| `patch_open.selective_fake_open` | function | (path, *args, **kwargs) | public | `m(patched_path)` (src/nova/test.py:L1041); `real_open(path, *args, **kwargs)` (src/nova/test.py:L1042) | — | `src/nova/test.py:L1039–L1042` |
| `NovaExceptionReraiseFormatError.patch` | classmethod | — | public | not declared | — | `src/nova/test.py:L136–L138` |
| `NovaExceptionReraiseFormatError._wrap_log_exception` | staticmethod | — | private | not declared | — | `src/nova/test.py:L140–L144` |
| `TestCase.patch_exists` | staticmethod | — | public | not declared | — | `src/nova/test.py:L416–L426` |
| `TestCase.patch_open` | staticmethod | — | public | not declared | — | `src/nova/test.py:L428–L437` |
| `SubclassSignatureTestCase._get_argspecs` | staticmethod | — | private | not declared | — | `src/nova/test.py:L789–L823` |
| `SubclassSignatureTestCase._clsname` | staticmethod | — | private | not declared | — | `src/nova/test.py:L825–L828` |

## Dependencies

- `import abc` (src/nova/test.py:L23)
- `import builtins` (src/nova/test.py:L24)
- `import collections` (src/nova/test.py:L25)
- `import contextlib` (src/nova/test.py:L26)
- `import copy` (src/nova/test.py:L27)
- `import datetime` (src/nova/test.py:L28)
- `import inspect` (src/nova/test.py:L29)
- `import itertools` (src/nova/test.py:L30)
- `import os` (src/nova/test.py:L31)
- `import os.path` (src/nova/test.py:L32)
- `import pprint` (src/nova/test.py:L33)
- `import sys` (src/nova/test.py:L34)
- `unittest`: imports `mock` (src/nova/test.py:L35)
- `import fixtures` (src/nova/test.py:L37)
- `import futurist` (src/nova/test.py:L38)
- `oslo_cache`: imports `core as cache` (src/nova/test.py:L39)
- `oslo_concurrency`: imports `lockutils` (src/nova/test.py:L40)
- `oslo_config`: imports `cfg` (src/nova/test.py:L41)
- `oslo_config`: imports `fixture as config_fixture` (src/nova/test.py:L42)
- `oslo_log.fixture`: imports `logging_error as log_fixture` (src/nova/test.py:L43)
- `oslo_log`: imports `log as logging` (src/nova/test.py:L44)
- `oslo_serialization`: imports `jsonutils` (src/nova/test.py:L45)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/test.py:L46)
- `oslo_utils`: imports `timeutils` (src/nova/test.py:L47)
- `oslo_versionedobjects`: imports `fixture as ovo_fixture` (src/nova/test.py:L48)
- `oslotest`: imports `base` (src/nova/test.py:L49)
- `oslotest`: imports `mock_fixture` (src/nova/test.py:L50)
- `sqlalchemy.dialects`: imports `sqlite` (src/nova/test.py:L51)
- `import testtools` (src/nova/test.py:L52)
- `nova.api.openstack`: imports `wsgi_app` (src/nova/test.py:L54)
- `nova.compute`: imports `rpcapi as compute_rpcapi` (src/nova/test.py:L55)
- `nova`: imports `context` (src/nova/test.py:L56)
- `import nova.crypto` (src/nova/test.py:L57)
- `nova.db.main`: imports `api as db_api` (src/nova/test.py:L58)
- `nova`: imports `exception` (src/nova/test.py:L59)
- `nova`: imports `objects` (src/nova/test.py:L60)
- `nova.objects`: imports `base as objects_base` (src/nova/test.py:L61)
- `nova.pci`: imports `request` (src/nova/test.py:L62)
- `nova`: imports `quota` (src/nova/test.py:L63)
- `nova.scheduler.client`: imports `report` (src/nova/test.py:L64)
- `nova.scheduler`: imports `utils as scheduler_utils` (src/nova/test.py:L65)
- `import nova.service_auth` (src/nova/test.py:L66)
- `nova.tests`: imports `fixtures as nova_fixtures` (src/nova/test.py:L67)
- `nova.tests.unit`: imports `matchers` (src/nova/test.py:L68)
- `nova`: imports `utils` (src/nova/test.py:L69)
- `nova.virt`: imports `images` (src/nova/test.py:L70)
- `nova.virt.libvirt`: imports `driver as libvirt_driver` (src/nova/test.py:L71)
- `nova.compute`: imports `api` (src/nova/test.py:L255)

## Side Effects

- **file-io**: """Selectively patch os.path.exists() so that if it's called with (src/nova/test.py:L952)
- **file-io**: through to the real os.path.exists() function if other is not provided. (src/nova/test.py:L954)
- **file-io**: @mock.patch('os.path.exists', return_value=True) (src/nova/test.py:L980)
- **file-io**: real_exists = os.path.exists (src/nova/test.py:L985)
- **file-io**: """Selectively patch open() so that if it's called with patched_path, (src/nova/test.py:L1002)
- **file-io**: real open() function. (src/nova/test.py:L1005)
- **file-io**: - You expect open() to be called multiple times on the same path (src/nova/test.py:L1022)
- **file-io**: open() once, in which case it's slightly overkill to do (src/nova/test.py:L1027)
- **global-mutation**: CONF = cfg.CONF (src/nova/test.py:L73)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/test.py:L79)
- **global-mutation**: CELL1_NAME = 'cell1' (src/nova/test.py:L82)
- **global-mutation**: USES_DB = True (src/nova/test.py:L160)
- **global-mutation**: USES_DB_SELF = False (src/nova/test.py:L167)
- **global-mutation**: REQUIRES_LOCKING = False (src/nova/test.py:L168)
- **global-mutation**: STUB_RPC = True (src/nova/test.py:L171)
- **global-mutation**: NUMBER_OF_CELLS = 1 (src/nova/test.py:L175)
- **global-mutation**: STUB_COMPUTE_ID = True (src/nova/test.py:L181)
- **global-mutation**: USES_DB = False (src/nova/test.py:L764)

