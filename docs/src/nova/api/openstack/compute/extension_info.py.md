# src/nova/api/openstack/compute/extension_info.py

## Overview

This file implements the `extension_info` module, defining 1 class, 3 constants, 2 methods, 5 imports, 104 side effects, 4 security surface entries.

Lines: total 891, code 859, comment 18, blank 14

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `EXTENSION_LIST` | constant | — | exported | not declared | — | `src/nova/api/openstack/compute/extension_info.py:L23–L839` |
| `EXTENSION_LIST_LEGACY_V2_COMPATIBLE` | constant | — | exported | not declared | — | `src/nova/api/openstack/compute/extension_info.py:L842–L842` |
| `EXTENSION_LIST_LEGACY_V2_COMPATIBLE` | constant | — | exported | not declared | — | `src/nova/api/openstack/compute/extension_info.py:L851–L852` |
| `ExtensionInfoController` | class | — | exported | not declared | — | `src/nova/api/openstack/compute/extension_info.py:L856–L891` |
| `ExtensionInfoController.index` | method | (self, req) | public | `dict(extensions=EXTENSION_LIST_LEGACY_V2_COMPATIBLE)` (src/nova/api/openstack/compute/extension_info.py:L869); `dict(extensions=EXTENSION_LIST)` (src/nova/api/openstack/compute/extension_info.py:L871) | 2/6 | `src/nova/api/openstack/compute/extension_info.py:L862–L871` |
| `ExtensionInfoController.show` | method | (self, req, id) | public | `dict(extension=ext)` (src/nova/api/openstack/compute/extension_info.py:L889) | 4/10 | `src/nova/api/openstack/compute/extension_info.py:L877–L891` |

## Dependencies

- `import webob.exc` (src/nova/api/openstack/compute/extension_info.py:L15)
- `nova.api.openstack.compute.schemas`: imports `extension_info as schema` (src/nova/api/openstack/compute/extension_info.py:L17)
- `nova.api.openstack`: imports `wsgi` (src/nova/api/openstack/compute/extension_info.py:L18)
- `nova.api`: imports `validation` (src/nova/api/openstack/compute/extension_info.py:L19)
- `nova.policies`: imports `extensions as ext_policies` (src/nova/api/openstack/compute/extension_info.py:L20)

## Side Effects

- **network**: from nova.api.openstack.compute.schemas import extension_info as schema (src/nova/api/openstack/compute/extension_info.py:L17)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L29)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L37)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L45)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L53)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L61)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L69)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L77)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L85)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L93)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L101)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L109)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L117)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L125)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L135)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L143)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L151)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L159)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L167)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L175)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L185)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L193)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L201)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L209)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L217)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L225)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L235)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L243)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L257)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L266)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L274)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L282)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L290)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L298)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L306)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L314)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L322)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L330)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L339)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L348)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L356)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L364)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L373)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L382)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L390)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L398)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L406)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L414)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L422)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L430)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L438)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L446)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L454)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L462)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L470)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L478)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L486)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L494)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L502)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L510)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L518)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L526)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L534)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L543)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L551)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L559)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L567)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L575)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L583)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L591)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L599)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L607)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L615)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L623)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L632)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L640)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L648)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L656)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L664)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L672)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L681)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L689)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L697)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L705)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L714)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L722)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L730)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L738)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L746)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L754)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L762)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L770)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L778)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L787)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L796)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L804)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L812)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L820)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L828)
- **network**: "namespace": "http://docs.openstack.org/compute/ext/fake_xml", (src/nova/api/openstack/compute/extension_info.py:L836)
- **network**: 'namespace': 'http://docs.openstack.org/compute/ext/fake_xml', (src/nova/api/openstack/compute/extension_info.py:L848)
- **global-mutation**: EXTENSION_LIST = [ (src/nova/api/openstack/compute/extension_info.py:L23)
- **global-mutation**: EXTENSION_LIST_LEGACY_V2_COMPATIBLE = EXTENSION_LIST[:] (src/nova/api/openstack/compute/extension_info.py:L842)
- **global-mutation**: EXTENSION_LIST_LEGACY_V2_COMPATIBLE = sorted( (src/nova/api/openstack/compute/extension_info.py:L851)

## Security Surface

- **sink** (`db-write`): "alias": "os-cloudpipe-update", (src/nova/api/openstack/compute/extension_info.py:L261)
- **sink** (`db-write`): "Scheduler will select one to target.", (src/nova/api/openstack/compute/extension_info.py:L336)
- **sink** (`db-write`): "optionally force the update Quota command.", (src/nova/api/openstack/compute/extension_info.py:L370)
- **sink** (`db-write`): "alias": "os-volume-attachment-update", (src/nova/api/openstack/compute/extension_info.py:L824)

