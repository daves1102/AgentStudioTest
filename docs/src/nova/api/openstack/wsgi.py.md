# src/nova/api/openstack/wsgi.py

## Overview

This file implements the `wsgi` module, defining 11 classs, 5 constants, 3 fields, 15 functions, 45 methods, 2 propertys, 1 staticmethod, 3 variables, 13 imports, 7 side effects, 7 security surface entries.

Lines: total 937, code 637, comment 107, blank 193

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/api/openstack/wsgi.py:L34–L34` |
| `_SUPPORTED_CONTENT_TYPES` | variable | — | unexported | not declared | — | `src/nova/api/openstack/wsgi.py:L36–L39` |
| `_ROUTES_METHODS` | variable | — | unexported | not declared | — | `src/nova/api/openstack/wsgi.py:L43–L48` |
| `_METHODS_WITH_BODY` | variable | — | unexported | not declared | — | `src/nova/api/openstack/wsgi.py:L50–L53` |
| `DEFAULT_API_VERSION` | constant | — | exported | not declared | — | `src/nova/api/openstack/wsgi.py:L58–L58` |
| `API_VERSION_REQUEST_HEADER` | constant | — | exported | not declared | — | `src/nova/api/openstack/wsgi.py:L62–L62` |
| `LEGACY_API_VERSION_REQUEST_HEADER` | constant | — | exported | not declared | — | `src/nova/api/openstack/wsgi.py:L63–L63` |
| `ENV_LEGACY_V2` | constant | — | exported | not declared | — | `src/nova/api/openstack/wsgi.py:L66–L66` |
| `get_supported_content_types` | function | — | exported | `_SUPPORTED_CONTENT_TYPES` (src/nova/api/openstack/wsgi.py:L70) | 1/2 | `src/nova/api/openstack/wsgi.py:L69–L70` |
| `Request` | class | — | exported | not declared | — | `src/nova/api/openstack/wsgi.py:L73–L180` |
| `Request.__init__` | method | (self, *args, **kwargs) | public | not declared | 2/4 | `src/nova/api/openstack/wsgi.py:L76–L79` |
| `Request.best_match_content_type` | method | (self) | public | `self.environ['nova.best_content_type']` (src/nova/api/openstack/wsgi.py:L103) | 7/16 | `src/nova/api/openstack/wsgi.py:L81–L103` |
| `Request.get_content_type` | method | (self) | public | `None` (src/nova/api/openstack/wsgi.py:L112); `None` (src/nova/api/openstack/wsgi.py:L120); `content_type` (src/nova/api/openstack/wsgi.py:L125) | 5/9 | `src/nova/api/openstack/wsgi.py:L105–L125` |
| `Request.best_match_language` | method | (self) | public | `None` (src/nova/api/openstack/wsgi.py:L134); `best_match` (src/nova/api/openstack/wsgi.py:L147) | 3/8 | `src/nova/api/openstack/wsgi.py:L127–L147` |
| `Request.set_api_version_request` | method | (self) | public | not declared | 4/19 | `src/nova/api/openstack/wsgi.py:L149–L174` |
| `Request.set_legacy_v2` | method | (self) | public | not declared | 1/2 | `src/nova/api/openstack/wsgi.py:L176–L177` |
| `Request.is_legacy_v2` | method | (self) | public | `self.environ.get(ENV_LEGACY_V2, False)` (src/nova/api/openstack/wsgi.py:L180) | 1/2 | `src/nova/api/openstack/wsgi.py:L179–L180` |
| `ActionDispatcher` | class | — | exported | not declared | — | `src/nova/api/openstack/wsgi.py:L183–L193` |
| `ActionDispatcher.dispatch` | method | (self, *args, **kwargs) | public | `action_method(*args, **kwargs)` (src/nova/api/openstack/wsgi.py:L190) | 1/4 | `src/nova/api/openstack/wsgi.py:L186–L190` |
| `ActionDispatcher.default` | method | (self, data) | public | not declared | 1/2 | `src/nova/api/openstack/wsgi.py:L192–L193` |
| `JSONDeserializer` | class | — | exported | not declared | — | `src/nova/api/openstack/wsgi.py:L196–L209` |
| `JSONDeserializer._from_json` | method | (self, datastring) | private | `jsonutils.loads(datastring)` (src/nova/api/openstack/wsgi.py:L200) | 2/6 | `src/nova/api/openstack/wsgi.py:L198–L203` |
| `JSONDeserializer.deserialize` | method | (self, datastring, action='default') | public | `self.dispatch(datastring, action=action)` (src/nova/api/openstack/wsgi.py:L206) | 1/2 | `src/nova/api/openstack/wsgi.py:L205–L206` |
| `JSONDeserializer.default` | method | (self, datastring) | public | `{'body': self._from_json(datastring)}` (src/nova/api/openstack/wsgi.py:L209) | 1/2 | `src/nova/api/openstack/wsgi.py:L208–L209` |
| `JSONDictSerializer` | class | — | exported | not declared | — | `src/nova/api/openstack/wsgi.py:L212–L219` |
| `JSONDictSerializer.serialize` | method | (self, data, action='default') | public | `self.dispatch(data, action=action)` (src/nova/api/openstack/wsgi.py:L216) | 1/2 | `src/nova/api/openstack/wsgi.py:L215–L216` |
| `JSONDictSerializer.default` | method | (self, data) | public | `str(jsonutils.dumps(data))` (src/nova/api/openstack/wsgi.py:L219) | 1/2 | `src/nova/api/openstack/wsgi.py:L218–L219` |
| `WSGICodes` | class | — | exported | not declared | — | `src/nova/api/openstack/wsgi.py:L222–L248` |
| `WSGICodes.__init__` | method | (self) | public | not declared | 1/2 | `src/nova/api/openstack/wsgi.py:L229–L230` |
| `WSGICodes.add_code` | method | (self, code) | public | not declared | 1/4 | `src/nova/api/openstack/wsgi.py:L232–L235` |
| `WSGICodes.__call__` | method | (self, req) | public | `code` (src/nova/api/openstack/wsgi.py:L244) | 3/10 | `src/nova/api/openstack/wsgi.py:L237–L248` |
| `response` | function | (code, min_version=None, max_version=None) | exported | `decorator` (src/nova/api/openstack/wsgi.py:L268) | 1/7 | `src/nova/api/openstack/wsgi.py:L251–L268` |
| `response.decorator` | function | (func) | public | `func` (src/nova/api/openstack/wsgi.py:L267) | — | `src/nova/api/openstack/wsgi.py:L263–L267` |
| `ResponseObject` | class | — | exported | not declared | — | `src/nova/api/openstack/wsgi.py:L271–L344` |
| `ResponseObject.__init__` | method | (self, obj, code=None, headers=None) | public | not declared | 2/6 | `src/nova/api/openstack/wsgi.py:L279–L286` |
| `ResponseObject.__getitem__` | method | (self, key) | public | `self._headers[key.lower()]` (src/nova/api/openstack/wsgi.py:L291) | 1/2 | `src/nova/api/openstack/wsgi.py:L288–L291` |
| `ResponseObject.__setitem__` | method | (self, key, value) | public | not declared | 1/2 | `src/nova/api/openstack/wsgi.py:L293–L296` |
| `ResponseObject.__delitem__` | method | (self, key) | public | not declared | 1/2 | `src/nova/api/openstack/wsgi.py:L298–L301` |
| `ResponseObject.serialize` | method | (self, request, content_type) | public | `response` (src/nova/api/openstack/wsgi.py:L332) | 4/15 | `src/nova/api/openstack/wsgi.py:L303–L332` |
| `ResponseObject.code` | method | (self) | public | `self._code or self._default_code` (src/nova/api/openstack/wsgi.py:L338) | 2/2 | `src/nova/api/openstack/wsgi.py:L335–L338` |
| `ResponseObject.headers` | method | (self) | public | `self._headers.copy()` (src/nova/api/openstack/wsgi.py:L344) | 1/2 | `src/nova/api/openstack/wsgi.py:L341–L344` |
| `action_peek` | function | (body) | exported | `list(decoded.keys())[0]` (src/nova/api/openstack/wsgi.py:L366) | 3/10 | `src/nova/api/openstack/wsgi.py:L347–L366` |
| `ResourceExceptionHandler` | class | — | exported | not declared | — | `src/nova/api/openstack/wsgi.py:L369–L406` |
| `ResourceExceptionHandler.__enter__` | method | (self) | public | `None` (src/nova/api/openstack/wsgi.py:L378) | 1/2 | `src/nova/api/openstack/wsgi.py:L377–L378` |
| `ResourceExceptionHandler.__exit__` | method | (self, ex_type, ex_value, ex_traceback) | public | `True` (src/nova/api/openstack/wsgi.py:L382); `False` (src/nova/api/openstack/wsgi.py:L406) | 8/24 | `src/nova/api/openstack/wsgi.py:L380–L406` |
| `Resource` | class | — | exported | not declared | — | `src/nova/api/openstack/wsgi.py:L409–L667` |
| `Resource.support_api_request_version` | field | — | public | not declared | — | `src/nova/api/openstack/wsgi.py:L424–L424` |
| `Resource.__init__` | method | (self, controller) | public | not declared | 2/7 | `src/nova/api/openstack/wsgi.py:L426–L438` |
| `Resource.register_actions` | method | (self, controller) | public | not declared | 2/4 | `src/nova/api/openstack/wsgi.py:L440–L445` |
| `Resource.register_subcontroller_actions` | method | (self, sub_controller) | public | not declared | 2/5 | `src/nova/api/openstack/wsgi.py:L447–L452` |
| `Resource.get_action_args` | method | (self, request_environment) | public | `self.controller.get_action_args(request_environment)` (src/nova/api/openstack/wsgi.py:L460); `{}` (src/nova/api/openstack/wsgi.py:L465); `args` (src/nova/api/openstack/wsgi.py:L477) | 5/16 | `src/nova/api/openstack/wsgi.py:L454–L477` |
| `Resource.get_body` | method | (self, request) | public | `content_type, request.body` (src/nova/api/openstack/wsgi.py:L482) | 1/3 | `src/nova/api/openstack/wsgi.py:L479–L482` |
| `Resource.deserialize` | method | (self, body) | public | `JSONDeserializer().deserialize(body)` (src/nova/api/openstack/wsgi.py:L485) | 1/2 | `src/nova/api/openstack/wsgi.py:L484–L485` |
| `Resource._should_have_body` | method | (self, request) | private | `request.method in _METHODS_WITH_BODY` (src/nova/api/openstack/wsgi.py:L488) | 1/2 | `src/nova/api/openstack/wsgi.py:L487–L488` |
| `Resource.__call__` | method | (self, request) | public | `Fault(webob.exc.HTTPBadRequest( explanation=e.format_message()))` (src/nova/api/openstack/wsgi.py:L499); `Fault(webob.exc.HTTPNotAcceptable( explanation=e.format_message()))` (src/nova/api/openstack/wsgi.py:L502); `Fault(webob.exc.HTTPUnsupportedMediaType(explanation=msg))` (src/nova/api/openstack/wsgi.py:L517); `self._process_stack(request, action, action_args, content_type, body, accept)` (src/nova/api/openstack/wsgi.py:L524) | 5/20 | `src/nova/api/openstack/wsgi.py:L491–L525` |
| `Resource._process_stack` | method | (self, request, action, action_args, content_type, body, accept) | private | `Fault(webob.exc.HTTPNotFound())` (src/nova/api/openstack/wsgi.py:L536); `Fault(webob.exc.HTTPBadRequest(explanation=msg))` (src/nova/api/openstack/wsgi.py:L539); `Fault(webob.exc.HTTPBadRequest(explanation=msg))` (src/nova/api/openstack/wsgi.py:L542); `Fault(webob.exc.HTTPBadRequest(explanation=msg))` (src/nova/api/openstack/wsgi.py:L559); `Fault(webob.exc.HTTPBadRequest(explanation=msg))` (src/nova/api/openstack/wsgi.py:L572); `response` (src/nova/api/openstack/wsgi.py:L617) | 22/70 | `src/nova/api/openstack/wsgi.py:L527–L617` |
| `Resource._get_request_content` | method | (self, body, request) | private | `contents` (src/nova/api/openstack/wsgi.py:L627) | 4/8 | `src/nova/api/openstack/wsgi.py:L619–L627` |
| `Resource.get_method` | method | (self, request, action, content_type, body) | public | `meth` (src/nova/api/openstack/wsgi.py:L634) | 1/6 | `src/nova/api/openstack/wsgi.py:L629–L634` |
| `Resource._get_method` | method | (self, request, action, content_type, body) | private | `meth` (src/nova/api/openstack/wsgi.py:L644); `(self.wsgi_actions[action_name])` (src/nova/api/openstack/wsgi.py:L656) | 6/16 | `src/nova/api/openstack/wsgi.py:L636–L656` |
| `Resource.dispatch` | method | (self, method, request, action_args) | public | `method(req=request, **action_args)` (src/nova/api/openstack/wsgi.py:L662); `Fault(webob.exc.HTTPNotFound())` (src/nova/api/openstack/wsgi.py:L667) | 2/5 | `src/nova/api/openstack/wsgi.py:L658–L667` |
| `action` | function | (name) | exported | `decorator` (src/nova/api/openstack/wsgi.py:L682) | 1/3 | `src/nova/api/openstack/wsgi.py:L670–L682` |
| `action.decorator` | function | (func) | public | `func` (src/nova/api/openstack/wsgi.py:L681) | — | `src/nova/api/openstack/wsgi.py:L679–L681` |
| `removed` | function | (version, reason) | exported | `decorator` (src/nova/api/openstack/wsgi.py:L695) | 1/3 | `src/nova/api/openstack/wsgi.py:L685–L695` |
| `removed.decorator` | function | (func) | public | `func` (src/nova/api/openstack/wsgi.py:L694) | — | `src/nova/api/openstack/wsgi.py:L690–L694` |
| `api_version` | function | (min_version=None, max_version=None) | exported | `decorator` (src/nova/api/openstack/wsgi.py:L735) | 1/6 | `src/nova/api/openstack/wsgi.py:L698–L735` |
| `api_version.decorator` | function | (f) | public | `wrapped` (src/nova/api/openstack/wsgi.py:L733) | — | `src/nova/api/openstack/wsgi.py:L709–L733` |
| `api_version.decorator.wrapped` | function | (*args, **kwargs) | public | `f(*args, **kwargs)` (src/nova/api/openstack/wsgi.py:L728) | — | `src/nova/api/openstack/wsgi.py:L711–L728` |
| `expected_errors` | function | (errors, min_version=None, max_version=None) | exported | `decorator` (src/nova/api/openstack/wsgi.py:L817) | 1/7 | `src/nova/api/openstack/wsgi.py:L738–L817` |
| `expected_errors.decorator` | function | (f) | public | `wrapped` (src/nova/api/openstack/wsgi.py:L815) | — | `src/nova/api/openstack/wsgi.py:L749–L815` |
| `expected_errors.decorator.wrapped` | function | (*args, **kwargs) | public | `f(*args, **kwargs)` (src/nova/api/openstack/wsgi.py:L766) | — | `src/nova/api/openstack/wsgi.py:L751–L813` |
| `ControllerMetaclass` | class | — | exported | not declared | — | `src/nova/api/openstack/wsgi.py:L820–L846` |
| `ControllerMetaclass.__new__` | method | (mcs, name, bases, cls_dict) | public | `super(ControllerMetaclass, mcs).__new__(mcs, name, bases, cls_dict)` (src/nova/api/openstack/wsgi.py:L845) | 5/12 | `src/nova/api/openstack/wsgi.py:L827–L846` |
| `Controller` | class | — | exported | not declared | — | `src/nova/api/openstack/wsgi.py:L849–L873` |
| `Controller._view_builder_class` | field | — | private | not declared | — | `src/nova/api/openstack/wsgi.py:L852–L852` |
| `Controller.__init__` | method | (self) | public | not declared | 2/5 | `src/nova/api/openstack/wsgi.py:L854–L859` |
| `Controller.is_valid_body` | method | (body, entity_name) | public | `False` (src/nova/api/openstack/wsgi.py:L864); `is_dict(body[entity_name])` (src/nova/api/openstack/wsgi.py:L873) | 3/5 | `src/nova/api/openstack/wsgi.py:L862–L873` |
| `Controller.is_valid_body.is_dict` | function | (d) | public | `True` (src/nova/api/openstack/wsgi.py:L869); `False` (src/nova/api/openstack/wsgi.py:L871) | — | `src/nova/api/openstack/wsgi.py:L866–L871` |
| `Fault` | class | — | exported | not declared | — | `src/nova/api/openstack/wsgi.py:L876–L937` |
| `Fault._fault_names` | field | — | private | not declared | — | `src/nova/api/openstack/wsgi.py:L879–L890` |
| `Fault.__init__` | method | (self, exception) | public | not declared | 2/5 | `src/nova/api/openstack/wsgi.py:L892–L897` |
| `Fault.__call__` | method | (self, req) | public | `self.wrapped_exc` (src/nova/api/openstack/wsgi.py:L934) | 5/28 | `src/nova/api/openstack/wsgi.py:L900–L934` |
| `Fault.__str__` | method | (self) | public | `self.wrapped_exc.__str__()` (src/nova/api/openstack/wsgi.py:L937) | 1/2 | `src/nova/api/openstack/wsgi.py:L936–L937` |
| `ResponseObject.code` | property | — | public | not declared | — | `src/nova/api/openstack/wsgi.py:L334–L338` |
| `ResponseObject.headers` | property | — | public | not declared | — | `src/nova/api/openstack/wsgi.py:L340–L344` |
| `Controller.is_valid_body` | staticmethod | — | public | not declared | — | `src/nova/api/openstack/wsgi.py:L861–L873` |

## Dependencies

- `import functools` (src/nova/api/openstack/wsgi.py:L17)
- `import microversion_parse` (src/nova/api/openstack/wsgi.py:L19)
- `oslo_log`: imports `log as logging` (src/nova/api/openstack/wsgi.py:L20)
- `oslo_serialization`: imports `jsonutils` (src/nova/api/openstack/wsgi.py:L21)
- `oslo_utils`: imports `encodeutils` (src/nova/api/openstack/wsgi.py:L22)
- `oslo_utils`: imports `strutils` (src/nova/api/openstack/wsgi.py:L23)
- `import webob` (src/nova/api/openstack/wsgi.py:L24)
- `nova.api.openstack`: imports `api_version_request` (src/nova/api/openstack/wsgi.py:L26)
- `nova.api`: imports `wsgi` (src/nova/api/openstack/wsgi.py:L27)
- `nova`: imports `exception` (src/nova/api/openstack/wsgi.py:L28)
- `nova`: imports `i18n` (src/nova/api/openstack/wsgi.py:L29)
- `nova.i18n`: imports `_` (src/nova/api/openstack/wsgi.py:L30)
- `nova`: imports `version` (src/nova/api/openstack/wsgi.py:L31)

## Side Effects

- **network**: 'application/vnd.openstack.compute+json', (src/nova/api/openstack/wsgi.py:L38)
- **network**: ENV_LEGACY_V2 = 'openstack.legacy_v2' (src/nova/api/openstack/wsgi.py:L66)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/api/openstack/wsgi.py:L34)
- **global-mutation**: DEFAULT_API_VERSION = "2.1" (src/nova/api/openstack/wsgi.py:L58)
- **global-mutation**: API_VERSION_REQUEST_HEADER = 'OpenStack-API-Version' (src/nova/api/openstack/wsgi.py:L62)
- **global-mutation**: LEGACY_API_VERSION_REQUEST_HEADER = 'X-OpenStack-Nova-API-Version' (src/nova/api/openstack/wsgi.py:L63)
- **global-mutation**: ENV_LEGACY_V2 = 'openstack.legacy_v2' (src/nova/api/openstack/wsgi.py:L66)

## Security Surface

- **sink** (`db-write`): 'update', (src/nova/api/openstack/wsgi.py:L47)
- **entry-point** (`http-param`): class Request(wsgi.Request): (src/nova/api/openstack/wsgi.py:L73)
- **entry-point** (`http-param`): """Add some OpenStack API-specific logic to the base webob.Request.""" (src/nova/api/openstack/wsgi.py:L74)
- **entry-point** (`http-param`): incoming wsgi.Request. If the operation is a PUT or POST, the controller (src/nova/api/openstack/wsgi.py:L415)
- **entry-point** (`http-param`): return content_type, request.body (src/nova/api/openstack/wsgi.py:L482)
- **sink** (`db-write`): action_args.update(contents) (src/nova/api/openstack/wsgi.py:L562)
- **sink** (`db-write`): actions.update(getattr(base, 'wsgi_actions', {})) (src/nova/api/openstack/wsgi.py:L834)

