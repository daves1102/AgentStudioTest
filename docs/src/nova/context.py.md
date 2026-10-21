# src/nova/context.py

## Overview

This file implements the `context` module, defining 2 classs, 1 classmethod, 5 constants, 1 field, 19 functions, 15 methods, 1 variable, 19 imports, 8 side effects, 6 security surface entries.

Lines: total 612, code 445, comment 59, blank 108

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/context.py:L40–L40` |
| `CONF` | constant | — | exported | not declared | — | `src/nova/context.py:L41–L41` |
| `CELL_CACHE` | constant | — | exported | not declared | — | `src/nova/context.py:L42–L42` |
| `did_not_respond_sentinel` | variable | — | exported | not declared | — | `src/nova/context.py:L45–L45` |
| `CELLS` | constant | — | exported | not declared | — | `src/nova/context.py:L49–L49` |
| `CELL_TIMEOUT` | constant | — | exported | not declared | — | `src/nova/context.py:L51–L51` |
| `reset_globals` | function | — | exported | not declared | 1/6 | `src/nova/context.py:L54–L59` |
| `_ContextAuthPlugin` | class | — | unexported | not declared | — | `src/nova/context.py:L62–L107` |
| `_ContextAuthPlugin.__init__` | method | (self, auth_token, sc) | public | not declared | 1/4 | `src/nova/context.py:L70–L74` |
| `_ContextAuthPlugin.get_token` | method | (self, *args, **kwargs) | public | `self.auth_token` (src/nova/context.py:L77) | 1/2 | `src/nova/context.py:L76–L77` |
| `_ContextAuthPlugin.get_endpoint` | method | (self, session, service_type=None, interface=None, region_name=None, service_name=None, **kwargs) | public | `self.service_catalog.url_for(service_type=service_type, service_name=service_name, interface=interface, region_name=region_name)` (src/nova/context.py:L81) | 1/6 | `src/nova/context.py:L79–L84` |
| `_ContextAuthPlugin.get_endpoint_data` | method | (self, session, *, endpoint_override=None, discover_versions=True, **kwargs) | public | `super().get_endpoint_data( session, endpoint_override=endpoint_override, discover_versions=discover_versions, **kwargs)` (src/nova/context.py:L105) | 2/7 | `src/nova/context.py:L86–L107` |
| `RequestContext` | class | — | exported | not declared | — | `src/nova/context.py:L111–L286` |
| `RequestContext.__init__` | method | (self, user_id=None, project_id=None, is_admin=None, read_deleted="no", remote_address=None, timestamp=None, quota_class=None, service_catalog=None, user_auth_plugin=None, **kwargs) | public | not declared | 9/30 | `src/nova/context.py:L118–L172` |
| `RequestContext.get_auth_plugin` | method | (self) | public | `self.user_auth_plugin` (src/nova/context.py:L176); `_ContextAuthPlugin(self.auth_token, self.service_catalog)` (src/nova/context.py:L178) | 2/5 | `src/nova/context.py:L174–L178` |
| `RequestContext._get_read_deleted` | method | (self) | private | `self._read_deleted` (src/nova/context.py:L181) | 1/2 | `src/nova/context.py:L180–L181` |
| `RequestContext._set_read_deleted` | method | (self, read_deleted) | private | not declared | 2/5 | `src/nova/context.py:L183–L187` |
| `RequestContext._del_read_deleted` | method | (self) | private | not declared | 1/2 | `src/nova/context.py:L189–L190` |
| `RequestContext.read_deleted` | field | — | public | not declared | — | `src/nova/context.py:L192–L193` |
| `RequestContext.to_dict` | method | (self) | public | `values` (src/nova/context.py:L221) | 2/20 | `src/nova/context.py:L195–L221` |
| `RequestContext.from_dict` | method | (cls, values) | public | `super(RequestContext, cls).from_dict( values, user_id=values.get('user_id'), project_id=values.get('project_id'), # TODO(sdague): oslo.context has show_deleted, if # possible, we should migrate to tha` (src/nova/context.py:L225) | 1/11 | `src/nova/context.py:L224–L237` |
| `RequestContext.elevated` | method | (self, read_deleted=None) | public | `context` (src/nova/context.py:L253) | 3/9 | `src/nova/context.py:L239–L253` |
| `RequestContext.can` | method | (self, action, target=None, fatal=True) | public | `policy.authorize(self, action, target)` (src/nova/context.py:L274); `False` (src/nova/context.py:L278) | 3/7 | `src/nova/context.py:L255–L278` |
| `RequestContext.to_policy_values` | method | (self) | public | `policy` (src/nova/context.py:L283) | 1/4 | `src/nova/context.py:L280–L283` |
| `RequestContext.__str__` | method | (self) | public | `"<Context %s>" % self.to_dict()` (src/nova/context.py:L286) | 1/2 | `src/nova/context.py:L285–L286` |
| `get_context` | function | — | exported | `RequestContext(user_id=None, project_id=None, is_admin=False, overwrite=False)` (src/nova/context.py:L295) | 1/5 | `src/nova/context.py:L289–L298` |
| `get_admin_context` | function | (read_deleted="no") | exported | `RequestContext(user_id=None, project_id=None, is_admin=True, read_deleted=read_deleted, overwrite=False)` (src/nova/context.py:L308) | 1/6 | `src/nova/context.py:L301–L312` |
| `get_nova_service_user_context` | function | — | exported | `RequestContext(user_id=auth.get_user_id(session), project_id=auth.get_project_id(session), roles=auth.get_access(session).role_names, user_auth_plugin=auth, overwrite=False)` (src/nova/context.py:L336) | 3/13 | `src/nova/context.py:L315–L339` |
| `is_user_context` | function | (context) | exported | `False` (src/nova/context.py:L345); `False` (src/nova/context.py:L347); `False` (src/nova/context.py:L349); `True` (src/nova/context.py:L350) | 5/8 | `src/nova/context.py:L342–L350` |
| `require_context` | function | (ctxt) | exported | not declared | 3/3 | `src/nova/context.py:L353–L358` |
| `authorize_project_context` | function | (context, project_id) | exported | not declared | 4/6 | `src/nova/context.py:L361–L367` |
| `authorize_user_context` | function | (context, user_id) | exported | not declared | 4/6 | `src/nova/context.py:L370–L376` |
| `authorize_quota_class_context` | function | (context, class_name) | exported | not declared | 4/6 | `src/nova/context.py:L379–L385` |
| `set_target_cell` | function | (context, cell_mapping) | exported | not declared | 2/11 | `src/nova/context.py:L388–L429` |
| `set_target_cell.get_or_set_cached_cell_and_set_connections` | function | — | public | not declared | — | `src/nova/context.py:L407–L423` |
| `target_cell` | function | (context, cell_mapping) | exported | not declared | 1/4 | `src/nova/context.py:L433–L453` |
| `scatter_gather_cells` | function | (context, cell_mappings, timeout, fn, *args, **kwargs) | exported | `results` (src/nova/context.py:L525) | 6/37 | `src/nova/context.py:L456–L525` |
| `scatter_gather_cells.gather_result` | function | (cell_uuid, fn, *args, **kwargs) | public | `result` (src/nova/context.py:L488) | — | `src/nova/context.py:L479–L488` |
| `load_cells` | function | — | exported | not declared | 4/9 | `src/nova/context.py:L528–L537` |
| `is_cell_failure_sentinel` | function | (record) | exported | `(record is did_not_respond_sentinel or isinstance(record, Exception))` (src/nova/context.py:L541) | 2/3 | `src/nova/context.py:L540–L542` |
| `scatter_gather_skip_cell0` | function | (context, fn, *args, **kwargs) | exported | `scatter_gather_cells(context, cell_mappings, CELL_TIMEOUT, fn, *args, **kwargs)` (src/nova/context.py:L565) | 3/5 | `src/nova/context.py:L545–L566` |
| `scatter_gather_single_cell` | function | (context, cell_mapping, fn, *args, **kwargs) | exported | `scatter_gather_cells(context, [cell_mapping], CELL_TIMEOUT, fn, *args, **kwargs)` (src/nova/context.py:L588) | 1/3 | `src/nova/context.py:L569–L589` |
| `scatter_gather_all_cells` | function | (context, fn, *args, **kwargs) | exported | `scatter_gather_cells(context, CELLS, CELL_TIMEOUT, fn, *args, **kwargs)` (src/nova/context.py:L611) | 1/4 | `src/nova/context.py:L592–L612` |
| `RequestContext.from_dict` | classmethod | — | public | not declared | — | `src/nova/context.py:L223–L237` |

## Dependencies

- `contextlib`: imports `contextmanager` (src/nova/context.py:L20)
- `import copy` (src/nova/context.py:L21)
- `import futurist.waiters` (src/nova/context.py:L23)
- `keystoneauth1.access`: imports `service_catalog as ksa_service_catalog` (src/nova/context.py:L24)
- `keystoneauth1`: imports `plugin` (src/nova/context.py:L25)
- `oslo_context`: imports `context` (src/nova/context.py:L26)
- `oslo_db.sqlalchemy`: imports `enginefacade` (src/nova/context.py:L27)
- `oslo_log`: imports `log as logging` (src/nova/context.py:L28)
- `oslo_utils`: imports `timeutils` (src/nova/context.py:L29)
- `import nova.conf` (src/nova/context.py:L31)
- `nova`: imports `exception` (src/nova/context.py:L32)
- `nova.i18n`: imports `_` (src/nova/context.py:L33)
- `nova`: imports `objects` (src/nova/context.py:L34)
- `nova`: imports `policy` (src/nova/context.py:L35)
- `nova`: imports `service_auth` (src/nova/context.py:L36)
- `nova`: imports `thread_pool_factory` (src/nova/context.py:L37)
- `nova`: imports `utils` (src/nova/context.py:L38)
- `nova.db.main`: imports `api as db` (src/nova/context.py:L402)
- `nova`: imports `rpc` (src/nova/context.py:L403)

## Side Effects

- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/context.py:L40)
- **global-mutation**: CONF = nova.conf.CONF (src/nova/context.py:L41)
- **global-mutation**: CELL_CACHE = {} (src/nova/context.py:L42)
- **global-mutation**: CELLS = [] (src/nova/context.py:L49)
- **global-mutation**: CELL_TIMEOUT = 60 (src/nova/context.py:L51)
- **global-mutation**: CELL_CACHE = {} (src/nova/context.py:L57)
- **global-mutation**: CELLS = [] (src/nova/context.py:L58)
- **global-mutation**: CELLS = objects.CellMappingList.get_all(get_admin_context()) (src/nova/context.py:L531)

## Security Surface

- **privilege** (`crypto-key`): from keystoneauth1.access import service_catalog as ksa_service_catalog (src/nova/context.py:L24)
- **privilege** (`crypto-key`): from keystoneauth1 import plugin (src/nova/context.py:L25)
- **privilege** (`crypto-key`): """A keystoneauth auth plugin that uses the values from the Context. (src/nova/context.py:L63)
- **sink** (`db-write`): values.update({ (src/nova/context.py:L200)
- **sink** (`db-write`): values.update({ (src/nova/context.py:L218)
- **sink** (`db-write`): Note that overwrite is False here so this context will not update the (src/nova/context.py:L292)

