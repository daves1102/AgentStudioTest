# src/nova/compute/provider_tree.py

## Overview

This file implements the `provider_tree` module, defining 3 classs, 1 classmethod, 1 constant, 51 methods, 2 propertys, 2 variables, 8 imports, 1 side effect, 12 security surface entries.

Lines: total 794, code 617, comment 64, blank 113

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/compute/provider_tree.py:L32–L32` |
| `_LOCK_NAME` | variable | — | unexported | not declared | — | `src/nova/compute/provider_tree.py:L33–L33` |
| `ProviderData` | variable | — | exported | not declared | — | `src/nova/compute/provider_tree.py:L42–L44` |
| `_Provider` | class | — | unexported | not declared | — | `src/nova/compute/provider_tree.py:L47–L246` |
| `_Provider.__init__` | method | (self, name, uuid=None, generation=None, parent_uuid=None) | public | not declared | 2/12 | `src/nova/compute/provider_tree.py:L53–L71` |
| `_Provider.from_dict` | method | (cls, pdict) | public | `cls(pdict['name'], uuid=pdict.get('uuid'), generation=pdict.get('generation'), parent_uuid=pdict.get('parent_provider_uuid'))` (src/nova/compute/provider_tree.py:L82) | 1/4 | `src/nova/compute/provider_tree.py:L74–L84` |
| `_Provider.data` | method | (self) | public | `ProviderData( self.uuid, self.name, self.generation, self.parent_uuid, inventory, traits, aggregates, resources)` (src/nova/compute/provider_tree.py:L91) | 1/8 | `src/nova/compute/provider_tree.py:L86–L93` |
| `_Provider.get_provider_uuids` | method | (self) | public | `ret` (src/nova/compute/provider_tree.py:L102) | 2/5 | `src/nova/compute/provider_tree.py:L95–L102` |
| `_Provider.find` | method | (self, search) | public | `self` (src/nova/compute/provider_tree.py:L106); `self.children[search]` (src/nova/compute/provider_tree.py:L108); `child` (src/nova/compute/provider_tree.py:L114); `subchild` (src/nova/compute/provider_tree.py:L117); `None` (src/nova/compute/provider_tree.py:L118) | 8/13 | `src/nova/compute/provider_tree.py:L104–L118` |
| `_Provider.add_child` | method | (self, provider) | public | not declared | 1/2 | `src/nova/compute/provider_tree.py:L120–L121` |
| `_Provider.remove_child` | method | (self, provider) | public | not declared | 2/3 | `src/nova/compute/provider_tree.py:L123–L125` |
| `_Provider.has_inventory` | method | (self) | public | `self.inventory != {}` (src/nova/compute/provider_tree.py:L129) | 1/2 | `src/nova/compute/provider_tree.py:L127–L129` |
| `_Provider.has_inventory_changed` | method | (self, new) | public | `True` (src/nova/compute/provider_tree.py:L135); `True` (src/nova/compute/provider_tree.py:L142); `True` (src/nova/compute/provider_tree.py:L154); `False` (src/nova/compute/provider_tree.py:L155) | 7/14 | `src/nova/compute/provider_tree.py:L131–L155` |
| `_Provider._update_generation` | method | (self, generation, operation) | private | not declared | 3/12 | `src/nova/compute/provider_tree.py:L157–L168` |
| `_Provider.update_inventory` | method | (self, inventory, generation) | public | `True` (src/nova/compute/provider_tree.py:L180); `False` (src/nova/compute/provider_tree.py:L183) | 2/10 | `src/nova/compute/provider_tree.py:L170–L183` |
| `_Provider.have_traits_changed` | method | (self, new) | public | `set(new) != self.traits` (src/nova/compute/provider_tree.py:L187) | 1/2 | `src/nova/compute/provider_tree.py:L185–L187` |
| `_Provider.update_traits` | method | (self, new, generation=None) | public | `True` (src/nova/compute/provider_tree.py:L197); `False` (src/nova/compute/provider_tree.py:L198) | 2/6 | `src/nova/compute/provider_tree.py:L189–L198` |
| `_Provider.has_traits` | method | (self, traits) | public | `not bool(set(traits) - self.traits)` (src/nova/compute/provider_tree.py:L208) | 1/2 | `src/nova/compute/provider_tree.py:L200–L208` |
| `_Provider.have_aggregates_changed` | method | (self, new) | public | `set(new) != self.aggregates` (src/nova/compute/provider_tree.py:L212) | 1/2 | `src/nova/compute/provider_tree.py:L210–L212` |
| `_Provider.update_aggregates` | method | (self, new, generation=None) | public | `True` (src/nova/compute/provider_tree.py:L222); `False` (src/nova/compute/provider_tree.py:L223) | 2/6 | `src/nova/compute/provider_tree.py:L214–L223` |
| `_Provider.in_aggregates` | method | (self, aggregates) | public | `not bool(set(aggregates) - self.aggregates)` (src/nova/compute/provider_tree.py:L233) | 1/2 | `src/nova/compute/provider_tree.py:L225–L233` |
| `_Provider.have_resources_changed` | method | (self, new) | public | `self.resources != new` (src/nova/compute/provider_tree.py:L237) | 1/2 | `src/nova/compute/provider_tree.py:L235–L237` |
| `_Provider.update_resources` | method | (self, resources) | public | `True` (src/nova/compute/provider_tree.py:L245); `False` (src/nova/compute/provider_tree.py:L246) | 2/5 | `src/nova/compute/provider_tree.py:L239–L246` |
| `ProviderTree` | class | — | exported | not declared | — | `src/nova/compute/provider_tree.py:L249–L776` |
| `ProviderTree.__init__` | method | (self) | public | not declared | 1/4 | `src/nova/compute/provider_tree.py:L251–L255` |
| `ProviderTree.roots` | method | (self) | public | `self.roots_by_uuid.values()` (src/nova/compute/provider_tree.py:L259) | 1/2 | `src/nova/compute/provider_tree.py:L258–L259` |
| `ProviderTree.get_provider_uuids` | method | (self, name_or_uuid=None) | public | `self._find_with_lock(name_or_uuid).get_provider_uuids()` (src/nova/compute/provider_tree.py:L272); `ret` (src/nova/compute/provider_tree.py:L279) | 3/9 | `src/nova/compute/provider_tree.py:L261–L279` |
| `ProviderTree.get_provider_uuids_in_tree` | method | (self, name_or_uuid) | public | `self._find_with_lock( name_or_uuid, return_root=True).get_provider_uuids()` (src/nova/compute/provider_tree.py:L290) | 1/4 | `src/nova/compute/provider_tree.py:L281–L291` |
| `ProviderTree.populate_from_iterable` | method | (self, provider_dicts) | public | `` (src/nova/compute/provider_tree.py:L312) | 12/39 | `src/nova/compute/provider_tree.py:L293–L377` |
| `ProviderTree._remove_with_lock` | method | (self, name_or_uuid) | private | not declared | 2/8 | `src/nova/compute/provider_tree.py:L379–L386` |
| `ProviderTree.remove` | method | (self, name_or_uuid) | public | not declared | 1/3 | `src/nova/compute/provider_tree.py:L388–L397` |
| `ProviderTree.new_root` | method | (self, name, uuid, generation=None) | public | `p.uuid` (src/nova/compute/provider_tree.py:L424) | 3/14 | `src/nova/compute/provider_tree.py:L399–L424` |
| `ProviderTree._find_with_lock` | method | (self, name_or_uuid, return_root=False) | private | `found` (src/nova/compute/provider_tree.py:L431); `found` (src/nova/compute/provider_tree.py:L434); `root if return_root else found` (src/nova/compute/provider_tree.py:L440) | 6/12 | `src/nova/compute/provider_tree.py:L426–L441` |
| `ProviderTree.data` | method | (self, name_or_uuid) | public | `self._find_with_lock(name_or_uuid).data()` (src/nova/compute/provider_tree.py:L453) | 1/3 | `src/nova/compute/provider_tree.py:L443–L453` |
| `ProviderTree.exists` | method | (self, name_or_uuid) | public | `True` (src/nova/compute/provider_tree.py:L462); `False` (src/nova/compute/provider_tree.py:L464) | 2/7 | `src/nova/compute/provider_tree.py:L455–L464` |
| `ProviderTree.new_child` | method | (self, name, parent, uuid=None, generation=None) | public | `p.uuid` (src/nova/compute/provider_tree.py:L492) | 4/13 | `src/nova/compute/provider_tree.py:L466–L492` |
| `ProviderTree.has_inventory` | method | (self, name_or_uuid) | public | `p.has_inventory()` (src/nova/compute/provider_tree.py:L503) | 1/4 | `src/nova/compute/provider_tree.py:L494–L503` |
| `ProviderTree.has_inventory_changed` | method | (self, name_or_uuid, inventory) | public | `provider.has_inventory_changed(inventory)` (src/nova/compute/provider_tree.py:L518) | 1/4 | `src/nova/compute/provider_tree.py:L505–L518` |
| `ProviderTree.update_inventory` | method | (self, name_or_uuid, inventory, generation=None) | public | `provider.update_inventory(inventory, generation)` (src/nova/compute/provider_tree.py:L541) | 1/4 | `src/nova/compute/provider_tree.py:L520–L541` |
| `ProviderTree.has_sharing_provider` | method | (self, resource_class) | public | `True` (src/nova/compute/provider_tree.py:L552); `False` (src/nova/compute/provider_tree.py:L553) | 4/8 | `src/nova/compute/provider_tree.py:L543–L553` |
| `ProviderTree.has_traits` | method | (self, name_or_uuid, traits) | public | `provider.has_traits(traits)` (src/nova/compute/provider_tree.py:L571) | 1/4 | `src/nova/compute/provider_tree.py:L555–L571` |
| `ProviderTree.have_traits_changed` | method | (self, name_or_uuid, traits) | public | `provider.have_traits_changed(traits)` (src/nova/compute/provider_tree.py:L586) | 1/4 | `src/nova/compute/provider_tree.py:L573–L586` |
| `ProviderTree.update_traits` | method | (self, name_or_uuid, traits, generation=None) | public | `provider.update_traits(traits, generation=generation)` (src/nova/compute/provider_tree.py:L607) | 1/4 | `src/nova/compute/provider_tree.py:L588–L607` |
| `ProviderTree.add_traits` | method | (self, name_or_uuid, *traits) | public | `` (src/nova/compute/provider_tree.py:L617) | 2/7 | `src/nova/compute/provider_tree.py:L609–L621` |
| `ProviderTree.remove_traits` | method | (self, name_or_uuid, *traits) | public | `` (src/nova/compute/provider_tree.py:L631) | 2/7 | `src/nova/compute/provider_tree.py:L623–L635` |
| `ProviderTree.in_aggregates` | method | (self, name_or_uuid, aggregates) | public | `provider.in_aggregates(aggregates)` (src/nova/compute/provider_tree.py:L653) | 1/4 | `src/nova/compute/provider_tree.py:L637–L653` |
| `ProviderTree.have_aggregates_changed` | method | (self, name_or_uuid, aggregates) | public | `provider.have_aggregates_changed(aggregates)` (src/nova/compute/provider_tree.py:L668) | 1/4 | `src/nova/compute/provider_tree.py:L655–L668` |
| `ProviderTree.update_aggregates` | method | (self, name_or_uuid, aggregates, generation=None) | public | `provider.update_aggregates(aggregates, generation=generation)` (src/nova/compute/provider_tree.py:L690) | 1/5 | `src/nova/compute/provider_tree.py:L670–L691` |
| `ProviderTree.add_aggregates` | method | (self, name_or_uuid, *aggregates) | public | not declared | 1/5 | `src/nova/compute/provider_tree.py:L693–L703` |
| `ProviderTree.remove_aggregates` | method | (self, name_or_uuid, *aggregates) | public | not declared | 1/5 | `src/nova/compute/provider_tree.py:L705–L716` |
| `ProviderTree.update_resources` | method | (self, name_or_uuid, resources) | public | `provider.update_resources(resources)` (src/nova/compute/provider_tree.py:L730) | 1/4 | `src/nova/compute/provider_tree.py:L718–L730` |
| `ProviderTree.subtree` | method | (self, name_or_uuid) | public | `new_sub_tree` (src/nova/compute/provider_tree.py:L756) | 2/11 | `src/nova/compute/provider_tree.py:L732–L756` |
| `ProviderTree.__getstate__` | method | (self) | public | `state` (src/nova/compute/provider_tree.py:L767) | 1/4 | `src/nova/compute/provider_tree.py:L758–L767` |
| `ProviderTree.__setstate__` | method | (self, state) | public | not declared | 1/3 | `src/nova/compute/provider_tree.py:L769–L776` |
| `ProviderSubTree` | class | — | exported | not declared | — | `src/nova/compute/provider_tree.py:L779–L794` |
| `ProviderSubTree.__init__` | method | (self, scope_rp_uuid) | public | not declared | 1/3 | `src/nova/compute/provider_tree.py:L788–L790` |
| `ProviderSubTree.scope_rp_uuid` | method | (self) | public | `self._scope_rp_uuid` (src/nova/compute/provider_tree.py:L794) | 1/2 | `src/nova/compute/provider_tree.py:L793–L794` |
| `_Provider.from_dict` | classmethod | — | public | not declared | — | `src/nova/compute/provider_tree.py:L73–L84` |
| `ProviderTree.roots` | property | — | public | not declared | — | `src/nova/compute/provider_tree.py:L257–L259` |
| `ProviderSubTree.scope_rp_uuid` | property | — | public | not declared | — | `src/nova/compute/provider_tree.py:L792–L794` |

## Dependencies

- `import collections` (src/nova/compute/provider_tree.py:L21)
- `import copy` (src/nova/compute/provider_tree.py:L22)
- `typing`: imports `Final` (src/nova/compute/provider_tree.py:L23)
- `import os_traits` (src/nova/compute/provider_tree.py:L25)
- `oslo_concurrency`: imports `lockutils` (src/nova/compute/provider_tree.py:L26)
- `oslo_log`: imports `log as logging` (src/nova/compute/provider_tree.py:L27)
- `oslo_utils`: imports `uuidutils` (src/nova/compute/provider_tree.py:L28)
- `nova.i18n`: imports `_` (src/nova/compute/provider_tree.py:L30)

## Side Effects

- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/compute/provider_tree.py:L32)

## Security Surface

- **sink** (`db-write`): """Update the stored inventory for the provider along with a resource (src/nova/compute/provider_tree.py:L171)
- **sink** (`db-write`): """Update the stored traits for the provider along with a resource (src/nova/compute/provider_tree.py:L190)
- **sink** (`db-write`): """Update the stored aggregates for the provider along with a resource (src/nova/compute/provider_tree.py:L215)
- **sink** (`db-write`): """Update the stored resources for the provider. The method returns (src/nova/compute/provider_tree.py:L240)
- **sink** (`db-write`): records, update the provider's inventory and set the provider's (src/nova/compute/provider_tree.py:L522)
- **sink** (`db-write`): update inventory for. (src/nova/compute/provider_tree.py:L533)
- **sink** (`db-write`): names, update the provider's traits and set the provider's generation. (src/nova/compute/provider_tree.py:L590)
- **sink** (`db-write`): update traits for. (src/nova/compute/provider_tree.py:L600)
- **sink** (`db-write`): aggregate UUIDs, update the provider's aggregates and set the (src/nova/compute/provider_tree.py:L672)
- **sink** (`db-write`): update aggregates for. (src/nova/compute/provider_tree.py:L683)
- **sink** (`db-write`): update the provider's resources. (src/nova/compute/provider_tree.py:L720)
- **sink** (`db-write`): self.__dict__.update(state) (src/nova/compute/provider_tree.py:L776)

