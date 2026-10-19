# src/nova/db/api/models.py

## Overview

This file implements the `models` module, defining 21 classs, 5 constants, 153 fields, 7 methods, 7 propertys, 7 imports, 5 side effects, 4 security surface entries.

Lines: total 495, code 371, comment 29, blank 95

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `LOG` | constant | — | exported | not declared | — | `src/nova/db/api/models.py:L23–L23` |
| `REMOVED_COLUMNS` | constant | — | exported | not declared | — | `src/nova/db/api/models.py:L35–L35` |
| `REMOVED_FKEYS` | constant | — | exported | not declared | — | `src/nova/db/api/models.py:L39–L39` |
| `REMOVED_TABLES` | constant | — | exported | not declared | — | `src/nova/db/api/models.py:L42–L57` |
| `_NovaAPIBase` | class | — | unexported | not declared | — | `src/nova/db/api/models.py:L60–L61` |
| `BASE` | constant | — | exported | not declared | — | `src/nova/db/api/models.py:L64–L64` |
| `AggregateHost` | class | — | exported | not declared | — | `src/nova/db/api/models.py:L67–L78` |
| `AggregateHost.__tablename__` | field | — | public | not declared | — | `src/nova/db/api/models.py:L69–L69` |
| `AggregateHost.__table_args__` | field | — | public | not declared | — | `src/nova/db/api/models.py:L70–L74` |
| `AggregateHost.id` | field | — | public | not declared | — | `src/nova/db/api/models.py:L75–L75` |
| `AggregateHost.host` | field | — | public | not declared | — | `src/nova/db/api/models.py:L76–L76` |
| `AggregateHost.aggregate_id` | field | — | public | not declared | — | `src/nova/db/api/models.py:L77–L78` |
| `AggregateMetadata` | class | — | exported | not declared | — | `src/nova/db/api/models.py:L81–L94` |
| `AggregateMetadata.__tablename__` | field | — | public | not declared | — | `src/nova/db/api/models.py:L83–L83` |
| `AggregateMetadata.__table_args__` | field | — | public | not declared | — | `src/nova/db/api/models.py:L84–L89` |
| `AggregateMetadata.id` | field | — | public | not declared | — | `src/nova/db/api/models.py:L90–L90` |
| `AggregateMetadata.key` | field | — | public | not declared | — | `src/nova/db/api/models.py:L91–L91` |
| `AggregateMetadata.value` | field | — | public | not declared | — | `src/nova/db/api/models.py:L92–L92` |
| `AggregateMetadata.aggregate_id` | field | — | public | not declared | — | `src/nova/db/api/models.py:L93–L94` |
| `Aggregate` | class | — | exported | not declared | — | `src/nova/db/api/models.py:L97–L132` |
| `Aggregate.__tablename__` | field | — | public | not declared | — | `src/nova/db/api/models.py:L99–L99` |
| `Aggregate.__table_args__` | field | — | public | not declared | — | `src/nova/db/api/models.py:L100–L103` |
| `Aggregate.id` | field | — | public | not declared | — | `src/nova/db/api/models.py:L104–L104` |
| `Aggregate.uuid` | field | — | public | not declared | — | `src/nova/db/api/models.py:L105–L105` |
| `Aggregate.name` | field | — | public | not declared | — | `src/nova/db/api/models.py:L106–L106` |
| `Aggregate._hosts` | field | — | private | not declared | — | `src/nova/db/api/models.py:L107–L110` |
| `Aggregate._metadata` | field | — | private | not declared | — | `src/nova/db/api/models.py:L111–L114` |
| `Aggregate._extra_keys` | method | (self) | private | `['hosts', 'metadetails', 'availability_zone']` (src/nova/db/api/models.py:L118) | 1/2 | `src/nova/db/api/models.py:L117–L118` |
| `Aggregate.hosts` | method | (self) | public | `[h.host for h in self._hosts]` (src/nova/db/api/models.py:L122) | 2/2 | `src/nova/db/api/models.py:L121–L122` |
| `Aggregate.metadetails` | method | (self) | public | `{m.key: m.value for m in self._metadata}` (src/nova/db/api/models.py:L126) | 2/2 | `src/nova/db/api/models.py:L125–L126` |
| `Aggregate.availability_zone` | method | (self) | public | `None` (src/nova/db/api/models.py:L131); `self.metadetails['availability_zone']` (src/nova/db/api/models.py:L132) | 2/4 | `src/nova/db/api/models.py:L129–L132` |
| `CellMapping` | class | — | exported | not declared | — | `src/nova/db/api/models.py:L135–L157` |
| `CellMapping.__tablename__` | field | — | public | not declared | — | `src/nova/db/api/models.py:L137–L137` |
| `CellMapping.__table_args__` | field | — | public | not declared | — | `src/nova/db/api/models.py:L138–L141` |
| `CellMapping.id` | field | — | public | not declared | — | `src/nova/db/api/models.py:L143–L143` |
| `CellMapping.uuid` | field | — | public | not declared | — | `src/nova/db/api/models.py:L144–L144` |
| `CellMapping.name` | field | — | public | not declared | — | `src/nova/db/api/models.py:L145–L145` |
| `CellMapping.transport_url` | field | — | public | not declared | — | `src/nova/db/api/models.py:L146–L146` |
| `CellMapping.database_connection` | field | — | public | not declared | — | `src/nova/db/api/models.py:L147–L147` |
| `CellMapping.disabled` | field | — | public | not declared | — | `src/nova/db/api/models.py:L148–L148` |
| `CellMapping.host_mapping` | field | — | public | not declared | — | `src/nova/db/api/models.py:L150–L153` |
| `CellMapping.instance_mapping` | field | — | public | not declared | — | `src/nova/db/api/models.py:L154–L157` |
| `InstanceMapping` | class | — | exported | not declared | — | `src/nova/db/api/models.py:L160–L188` |
| `InstanceMapping.__tablename__` | field | — | public | not declared | — | `src/nova/db/api/models.py:L162–L162` |
| `InstanceMapping.__table_args__` | field | — | public | not declared | — | `src/nova/db/api/models.py:L163–L173` |
| `InstanceMapping.id` | field | — | public | not declared | — | `src/nova/db/api/models.py:L175–L175` |
| `InstanceMapping.instance_uuid` | field | — | public | not declared | — | `src/nova/db/api/models.py:L176–L176` |
| `InstanceMapping.cell_id` | field | — | public | not declared | — | `src/nova/db/api/models.py:L177–L178` |
| `InstanceMapping.project_id` | field | — | public | not declared | — | `src/nova/db/api/models.py:L179–L179` |
| `InstanceMapping.user_id` | field | — | public | not declared | — | `src/nova/db/api/models.py:L182–L182` |
| `InstanceMapping.queued_for_delete` | field | — | public | not declared | — | `src/nova/db/api/models.py:L183–L183` |
| `InstanceMapping.cell_mapping` | field | — | public | not declared | — | `src/nova/db/api/models.py:L185–L188` |
| `HostMapping` | class | — | exported | not declared | — | `src/nova/db/api/models.py:L191–L207` |
| `HostMapping.__tablename__` | field | — | public | not declared | — | `src/nova/db/api/models.py:L193–L193` |
| `HostMapping.__table_args__` | field | — | public | not declared | — | `src/nova/db/api/models.py:L194–L197` |
| `HostMapping.id` | field | — | public | not declared | — | `src/nova/db/api/models.py:L199–L199` |
| `HostMapping.cell_id` | field | — | public | not declared | — | `src/nova/db/api/models.py:L200–L201` |
| `HostMapping.host` | field | — | public | not declared | — | `src/nova/db/api/models.py:L202–L202` |
| `HostMapping.cell_mapping` | field | — | public | not declared | — | `src/nova/db/api/models.py:L204–L207` |
| `RequestSpec` | class | — | exported | not declared | — | `src/nova/db/api/models.py:L210–L222` |
| `RequestSpec.__tablename__` | field | — | public | not declared | — | `src/nova/db/api/models.py:L213–L213` |
| `RequestSpec.__table_args__` | field | — | public | not declared | — | `src/nova/db/api/models.py:L214–L218` |
| `RequestSpec.id` | field | — | public | not declared | — | `src/nova/db/api/models.py:L220–L220` |
| `RequestSpec.instance_uuid` | field | — | public | not declared | — | `src/nova/db/api/models.py:L221–L221` |
| `RequestSpec.spec` | field | — | public | not declared | — | `src/nova/db/api/models.py:L222–L222` |
| `Flavors` | class | — | exported | not declared | — | `src/nova/db/api/models.py:L225–L247` |
| `Flavors.__tablename__` | field | — | public | not declared | — | `src/nova/db/api/models.py:L227–L227` |
| `Flavors.__table_args__` | field | — | public | not declared | — | `src/nova/db/api/models.py:L228–L230` |
| `Flavors.id` | field | — | public | not declared | — | `src/nova/db/api/models.py:L232–L232` |
| `Flavors.name` | field | — | public | not declared | — | `src/nova/db/api/models.py:L233–L233` |
| `Flavors.memory_mb` | field | — | public | not declared | — | `src/nova/db/api/models.py:L234–L234` |
| `Flavors.vcpus` | field | — | public | not declared | — | `src/nova/db/api/models.py:L235–L235` |
| `Flavors.root_gb` | field | — | public | not declared | — | `src/nova/db/api/models.py:L236–L236` |
| `Flavors.ephemeral_gb` | field | — | public | not declared | — | `src/nova/db/api/models.py:L237–L237` |
| `Flavors.flavorid` | field | — | public | not declared | — | `src/nova/db/api/models.py:L238–L238` |
| `Flavors.swap` | field | — | public | not declared | — | `src/nova/db/api/models.py:L239–L239` |
| `Flavors.rxtx_factor` | field | — | public | not declared | — | `src/nova/db/api/models.py:L240–L240` |
| `Flavors.vcpu_weight` | field | — | public | not declared | — | `src/nova/db/api/models.py:L241–L241` |
| `Flavors.disabled` | field | — | public | not declared | — | `src/nova/db/api/models.py:L242–L242` |
| `Flavors.is_public` | field | — | public | not declared | — | `src/nova/db/api/models.py:L243–L243` |
| `Flavors.description` | field | — | public | not declared | — | `src/nova/db/api/models.py:L244–L244` |
| `Flavors.extra_specs` | field | — | public | not declared | — | `src/nova/db/api/models.py:L246–L246` |
| `Flavors.projects` | field | — | public | not declared | — | `src/nova/db/api/models.py:L247–L247` |
| `FlavorExtraSpecs` | class | — | exported | not declared | — | `src/nova/db/api/models.py:L250–L266` |
| `FlavorExtraSpecs.__tablename__` | field | — | public | not declared | — | `src/nova/db/api/models.py:L252–L252` |
| `FlavorExtraSpecs.__table_args__` | field | — | public | not declared | — | `src/nova/db/api/models.py:L253–L258` |
| `FlavorExtraSpecs.id` | field | — | public | not declared | — | `src/nova/db/api/models.py:L260–L260` |
| `FlavorExtraSpecs.key` | field | — | public | not declared | — | `src/nova/db/api/models.py:L261–L261` |
| `FlavorExtraSpecs.value` | field | — | public | not declared | — | `src/nova/db/api/models.py:L262–L262` |
| `FlavorExtraSpecs.flavor_id` | field | — | public | not declared | — | `src/nova/db/api/models.py:L263–L264` |
| `FlavorExtraSpecs.flavor` | field | — | public | not declared | — | `src/nova/db/api/models.py:L266–L266` |
| `FlavorProjects` | class | — | exported | not declared | — | `src/nova/db/api/models.py:L269–L280` |
| `FlavorProjects.__tablename__` | field | — | public | not declared | — | `src/nova/db/api/models.py:L271–L271` |
| `FlavorProjects.__table_args__` | field | — | public | not declared | — | `src/nova/db/api/models.py:L272–L273` |
| `FlavorProjects.id` | field | — | public | not declared | — | `src/nova/db/api/models.py:L275–L275` |
| `FlavorProjects.flavor_id` | field | — | public | not declared | — | `src/nova/db/api/models.py:L276–L277` |
| `FlavorProjects.project_id` | field | — | public | not declared | — | `src/nova/db/api/models.py:L278–L278` |
| `FlavorProjects.flavor` | field | — | public | not declared | — | `src/nova/db/api/models.py:L280–L280` |
| `BuildRequest` | class | — | exported | not declared | — | `src/nova/db/api/models.py:L283–L300` |
| `BuildRequest.__tablename__` | field | — | public | not declared | — | `src/nova/db/api/models.py:L286–L286` |
| `BuildRequest.__table_args__` | field | — | public | not declared | — | `src/nova/db/api/models.py:L287–L292` |
| `BuildRequest.id` | field | — | public | not declared | — | `src/nova/db/api/models.py:L294–L294` |
| `BuildRequest.instance_uuid` | field | — | public | not declared | — | `src/nova/db/api/models.py:L296–L296` |
| `BuildRequest.project_id` | field | — | public | not declared | — | `src/nova/db/api/models.py:L297–L297` |
| `BuildRequest.instance` | field | — | public | not declared | — | `src/nova/db/api/models.py:L298–L298` |
| `BuildRequest.block_device_mappings` | field | — | public | not declared | — | `src/nova/db/api/models.py:L299–L299` |
| `BuildRequest.tags` | field | — | public | not declared | — | `src/nova/db/api/models.py:L300–L300` |
| `KeyPair` | class | — | exported | not declared | — | `src/nova/db/api/models.py:L303–L318` |
| `KeyPair.__tablename__` | field | — | public | not declared | — | `src/nova/db/api/models.py:L305–L305` |
| `KeyPair.__table_args__` | field | — | public | not declared | — | `src/nova/db/api/models.py:L306–L309` |
| `KeyPair.id` | field | — | public | not declared | — | `src/nova/db/api/models.py:L311–L311` |
| `KeyPair.name` | field | — | public | not declared | — | `src/nova/db/api/models.py:L312–L312` |
| `KeyPair.user_id` | field | — | public | not declared | — | `src/nova/db/api/models.py:L313–L313` |
| `KeyPair.fingerprint` | field | — | public | not declared | — | `src/nova/db/api/models.py:L314–L314` |
| `KeyPair.public_key` | field | — | public | not declared | — | `src/nova/db/api/models.py:L315–L315` |
| `KeyPair.type` | field | — | public | not declared | — | `src/nova/db/api/models.py:L316–L318` |
| `InstanceGroupMember` | class | — | exported | not declared | — | `src/nova/db/api/models.py:L321–L330` |
| `InstanceGroupMember.__tablename__` | field | — | public | not declared | — | `src/nova/db/api/models.py:L323–L323` |
| `InstanceGroupMember.__table_args__` | field | — | public | not declared | — | `src/nova/db/api/models.py:L324–L326` |
| `InstanceGroupMember.id` | field | — | public | not declared | — | `src/nova/db/api/models.py:L327–L327` |
| `InstanceGroupMember.instance_uuid` | field | — | public | not declared | — | `src/nova/db/api/models.py:L328–L328` |
| `InstanceGroupMember.group_id` | field | — | public | not declared | — | `src/nova/db/api/models.py:L329–L330` |
| `InstanceGroupPolicy` | class | — | exported | not declared | — | `src/nova/db/api/models.py:L333–L344` |
| `InstanceGroupPolicy.__tablename__` | field | — | public | not declared | — | `src/nova/db/api/models.py:L335–L335` |
| `InstanceGroupPolicy.__table_args__` | field | — | public | not declared | — | `src/nova/db/api/models.py:L336–L338` |
| `InstanceGroupPolicy.id` | field | — | public | not declared | — | `src/nova/db/api/models.py:L340–L340` |
| `InstanceGroupPolicy.policy` | field | — | public | not declared | — | `src/nova/db/api/models.py:L341–L341` |
| `InstanceGroupPolicy.group_id` | field | — | public | not declared | — | `src/nova/db/api/models.py:L342–L343` |
| `InstanceGroupPolicy.rules` | field | — | public | not declared | — | `src/nova/db/api/models.py:L344–L344` |
| `InstanceGroup` | class | — | exported | not declared | — | `src/nova/db/api/models.py:L347–L380` |
| `InstanceGroup.__tablename__` | field | — | public | not declared | — | `src/nova/db/api/models.py:L354–L354` |
| `InstanceGroup.__table_args__` | field | — | public | not declared | — | `src/nova/db/api/models.py:L355–L357` |
| `InstanceGroup.id` | field | — | public | not declared | — | `src/nova/db/api/models.py:L359–L359` |
| `InstanceGroup.user_id` | field | — | public | not declared | — | `src/nova/db/api/models.py:L360–L360` |
| `InstanceGroup.project_id` | field | — | public | not declared | — | `src/nova/db/api/models.py:L361–L361` |
| `InstanceGroup.uuid` | field | — | public | not declared | — | `src/nova/db/api/models.py:L362–L362` |
| `InstanceGroup.name` | field | — | public | not declared | — | `src/nova/db/api/models.py:L363–L363` |
| `InstanceGroup._policies` | field | — | private | not declared | — | `src/nova/db/api/models.py:L365–L365` |
| `InstanceGroup._members` | field | — | private | not declared | — | `src/nova/db/api/models.py:L366–L366` |
| `InstanceGroup.policy` | method | (self) | public | `self._policies[0] if self._policies else None` (src/nova/db/api/models.py:L376) | 4/8 | `src/nova/db/api/models.py:L369–L376` |
| `InstanceGroup.members` | method | (self) | public | `[m.instance_uuid for m in self._members]` (src/nova/db/api/models.py:L380) | 2/2 | `src/nova/db/api/models.py:L379–L380` |
| `Quota` | class | — | exported | not declared | — | `src/nova/db/api/models.py:L383–L404` |
| `Quota.__tablename__` | field | — | public | not declared | — | `src/nova/db/api/models.py:L392–L392` |
| `Quota.__table_args__` | field | — | public | not declared | — | `src/nova/db/api/models.py:L393–L399` |
| `Quota.id` | field | — | public | not declared | — | `src/nova/db/api/models.py:L401–L401` |
| `Quota.project_id` | field | — | public | not declared | — | `src/nova/db/api/models.py:L402–L402` |
| `Quota.resource` | field | — | public | not declared | — | `src/nova/db/api/models.py:L403–L403` |
| `Quota.hard_limit` | field | — | public | not declared | — | `src/nova/db/api/models.py:L404–L404` |
| `ProjectUserQuota` | class | — | exported | not declared | — | `src/nova/db/api/models.py:L407–L428` |
| `ProjectUserQuota.__tablename__` | field | — | public | not declared | — | `src/nova/db/api/models.py:L410–L410` |
| `ProjectUserQuota.__table_args__` | field | — | public | not declared | — | `src/nova/db/api/models.py:L411–L422` |
| `ProjectUserQuota.id` | field | — | public | not declared | — | `src/nova/db/api/models.py:L424–L424` |
| `ProjectUserQuota.project_id` | field | — | public | not declared | — | `src/nova/db/api/models.py:L425–L425` |
| `ProjectUserQuota.user_id` | field | — | public | not declared | — | `src/nova/db/api/models.py:L426–L426` |
| `ProjectUserQuota.resource` | field | — | public | not declared | — | `src/nova/db/api/models.py:L427–L427` |
| `ProjectUserQuota.hard_limit` | field | — | public | not declared | — | `src/nova/db/api/models.py:L428–L428` |
| `QuotaClass` | class | — | exported | not declared | — | `src/nova/db/api/models.py:L431–L448` |
| `QuotaClass.__tablename__` | field | — | public | not declared | — | `src/nova/db/api/models.py:L439–L439` |
| `QuotaClass.__table_args__` | field | — | public | not declared | — | `src/nova/db/api/models.py:L440–L442` |
| `QuotaClass.id` | field | — | public | not declared | — | `src/nova/db/api/models.py:L443–L443` |
| `QuotaClass.class_name` | field | — | public | not declared | — | `src/nova/db/api/models.py:L445–L445` |
| `QuotaClass.resource` | field | — | public | not declared | — | `src/nova/db/api/models.py:L447–L447` |
| `QuotaClass.hard_limit` | field | — | public | not declared | — | `src/nova/db/api/models.py:L448–L448` |
| `QuotaUsage` | class | — | exported | not declared | — | `src/nova/db/api/models.py:L451–L471` |
| `QuotaUsage.__tablename__` | field | — | public | not declared | — | `src/nova/db/api/models.py:L454–L454` |
| `QuotaUsage.__table_args__` | field | — | public | not declared | — | `src/nova/db/api/models.py:L455–L458` |
| `QuotaUsage.id` | field | — | public | not declared | — | `src/nova/db/api/models.py:L460–L460` |
| `QuotaUsage.project_id` | field | — | public | not declared | — | `src/nova/db/api/models.py:L461–L461` |
| `QuotaUsage.user_id` | field | — | public | not declared | — | `src/nova/db/api/models.py:L462–L462` |
| `QuotaUsage.resource` | field | — | public | not declared | — | `src/nova/db/api/models.py:L463–L463` |
| `QuotaUsage.in_use` | field | — | public | not declared | — | `src/nova/db/api/models.py:L464–L464` |
| `QuotaUsage.reserved` | field | — | public | not declared | — | `src/nova/db/api/models.py:L465–L465` |
| `QuotaUsage.total` | method | (self) | public | `self.in_use + self.reserved` (src/nova/db/api/models.py:L469) | 1/2 | `src/nova/db/api/models.py:L468–L469` |
| `QuotaUsage.until_refresh` | field | — | public | not declared | — | `src/nova/db/api/models.py:L471–L471` |
| `Reservation` | class | — | exported | not declared | — | `src/nova/db/api/models.py:L474–L495` |
| `Reservation.__tablename__` | field | — | public | not declared | — | `src/nova/db/api/models.py:L477–L477` |
| `Reservation.__table_args__` | field | — | public | not declared | — | `src/nova/db/api/models.py:L478–L483` |
| `Reservation.id` | field | — | public | not declared | — | `src/nova/db/api/models.py:L485–L485` |
| `Reservation.uuid` | field | — | public | not declared | — | `src/nova/db/api/models.py:L486–L486` |
| `Reservation.usage_id` | field | — | public | not declared | — | `src/nova/db/api/models.py:L487–L488` |
| `Reservation.project_id` | field | — | public | not declared | — | `src/nova/db/api/models.py:L489–L489` |
| `Reservation.user_id` | field | — | public | not declared | — | `src/nova/db/api/models.py:L490–L490` |
| `Reservation.resource` | field | — | public | not declared | — | `src/nova/db/api/models.py:L491–L491` |
| `Reservation.delta` | field | — | public | not declared | — | `src/nova/db/api/models.py:L492–L492` |
| `Reservation.expire` | field | — | public | not declared | — | `src/nova/db/api/models.py:L493–L493` |
| `Reservation.usage` | field | — | public | not declared | — | `src/nova/db/api/models.py:L495–L495` |
| `Aggregate._extra_keys` | property | — | private | not declared | — | `src/nova/db/api/models.py:L116–L118` |
| `Aggregate.hosts` | property | — | public | not declared | — | `src/nova/db/api/models.py:L120–L122` |
| `Aggregate.metadetails` | property | — | public | not declared | — | `src/nova/db/api/models.py:L124–L126` |
| `Aggregate.availability_zone` | property | — | public | not declared | — | `src/nova/db/api/models.py:L128–L132` |
| `InstanceGroup.policy` | property | — | public | not declared | — | `src/nova/db/api/models.py:L368–L376` |
| `InstanceGroup.members` | property | — | public | not declared | — | `src/nova/db/api/models.py:L378–L380` |
| `QuotaUsage.total` | property | — | public | not declared | — | `src/nova/db/api/models.py:L467–L469` |

## Dependencies

- `oslo_db.sqlalchemy`: imports `models` (src/nova/db/api/models.py:L14)
- `oslo_log`: imports `log as logging` (src/nova/db/api/models.py:L15)
- `import sqlalchemy as sa` (src/nova/db/api/models.py:L16)
- `import sqlalchemy.dialects.mysql` (src/nova/db/api/models.py:L17)
- `sqlalchemy`: imports `orm` (src/nova/db/api/models.py:L18)
- `sqlalchemy`: imports `schema` (src/nova/db/api/models.py:L19)
- `nova.db`: imports `types` (src/nova/db/api/models.py:L21)

## Side Effects

- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/db/api/models.py:L23)
- **global-mutation**: REMOVED_COLUMNS = [] (src/nova/db/api/models.py:L35)
- **global-mutation**: REMOVED_FKEYS = [] (src/nova/db/api/models.py:L39)
- **global-mutation**: REMOVED_TABLES = { (src/nova/db/api/models.py:L42)
- **global-mutation**: BASE = orm.declarative_base(cls=_NovaAPIBase) (src/nova/db/api/models.py:L64)

## Security Surface

- **sink** (`db-write`): transport_url = sa.Column(sa.Text()) (src/nova/db/api/models.py:L146)
- **sink** (`db-write`): database_connection = sa.Column(sa.Text()) (src/nova/db/api/models.py:L147)
- **sink** (`db-write`): tags = sa.Column(sa.Text()) (src/nova/db/api/models.py:L300)
- **sink** (`db-write`): public_key = sa.Column(sa.Text()) (src/nova/db/api/models.py:L315)

