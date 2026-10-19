# src/nova/objects/fields.py

## Overview

This file implements the `fields` module, defining 122 classs, 476 constants, 5 fields, 33 methods, 52 variables, 9 imports, 475 side effects.

Lines: total 1469, code 957, comment 94, blank 418

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `KeyTypeError` | variable | — | exported | not declared | — | `src/nova/objects/fields.py:L29–L29` |
| `ElementTypeError` | variable | — | exported | not declared | — | `src/nova/objects/fields.py:L30–L30` |
| `BooleanField` | variable | — | exported | not declared | — | `src/nova/objects/fields.py:L34–L34` |
| `UnspecifiedDefault` | variable | — | exported | not declared | — | `src/nova/objects/fields.py:L35–L35` |
| `IntegerField` | variable | — | exported | not declared | — | `src/nova/objects/fields.py:L36–L36` |
| `NonNegativeIntegerField` | variable | — | exported | not declared | — | `src/nova/objects/fields.py:L37–L37` |
| `UUIDField` | variable | — | exported | not declared | — | `src/nova/objects/fields.py:L38–L38` |
| `FloatField` | variable | — | exported | not declared | — | `src/nova/objects/fields.py:L39–L39` |
| `NonNegativeFloatField` | variable | — | exported | not declared | — | `src/nova/objects/fields.py:L40–L40` |
| `StringField` | variable | — | exported | not declared | — | `src/nova/objects/fields.py:L41–L41` |
| `SensitiveStringField` | variable | — | exported | not declared | — | `src/nova/objects/fields.py:L42–L42` |
| `EnumField` | variable | — | exported | not declared | — | `src/nova/objects/fields.py:L43–L43` |
| `DateTimeField` | variable | — | exported | not declared | — | `src/nova/objects/fields.py:L44–L44` |
| `DictOfStringsField` | variable | — | exported | not declared | — | `src/nova/objects/fields.py:L45–L45` |
| `DictOfNullableStringsField` | variable | — | exported | not declared | — | `src/nova/objects/fields.py:L46–L46` |
| `DictOfIntegersField` | variable | — | exported | not declared | — | `src/nova/objects/fields.py:L47–L47` |
| `ListOfStringsField` | variable | — | exported | not declared | — | `src/nova/objects/fields.py:L48–L48` |
| `ListOfUUIDField` | variable | — | exported | not declared | — | `src/nova/objects/fields.py:L49–L49` |
| `SetOfIntegersField` | variable | — | exported | not declared | — | `src/nova/objects/fields.py:L50–L50` |
| `ListOfSetsOfIntegersField` | variable | — | exported | not declared | — | `src/nova/objects/fields.py:L51–L51` |
| `ListOfDictOfNullableStringsField` | variable | — | exported | not declared | — | `src/nova/objects/fields.py:L52–L52` |
| `DictProxyField` | variable | — | exported | not declared | — | `src/nova/objects/fields.py:L53–L53` |
| `ObjectField` | variable | — | exported | not declared | — | `src/nova/objects/fields.py:L54–L54` |
| `ListOfObjectsField` | variable | — | exported | not declared | — | `src/nova/objects/fields.py:L55–L55` |
| `VersionPredicateField` | variable | — | exported | not declared | — | `src/nova/objects/fields.py:L56–L56` |
| `FlexibleBooleanField` | variable | — | exported | not declared | — | `src/nova/objects/fields.py:L57–L57` |
| `DictOfListOfStringsField` | variable | — | exported | not declared | — | `src/nova/objects/fields.py:L58–L58` |
| `IPAddressField` | variable | — | exported | not declared | — | `src/nova/objects/fields.py:L59–L59` |
| `IPV4AddressField` | variable | — | exported | not declared | — | `src/nova/objects/fields.py:L60–L60` |
| `IPV6AddressField` | variable | — | exported | not declared | — | `src/nova/objects/fields.py:L61–L61` |
| `IPV4AndV6AddressField` | variable | — | exported | not declared | — | `src/nova/objects/fields.py:L62–L62` |
| `IPNetworkField` | variable | — | exported | not declared | — | `src/nova/objects/fields.py:L63–L63` |
| `IPV4NetworkField` | variable | — | exported | not declared | — | `src/nova/objects/fields.py:L64–L64` |
| `IPV6NetworkField` | variable | — | exported | not declared | — | `src/nova/objects/fields.py:L65–L65` |
| `AutoTypedField` | variable | — | exported | not declared | — | `src/nova/objects/fields.py:L66–L66` |
| `BaseEnumField` | variable | — | exported | not declared | — | `src/nova/objects/fields.py:L67–L67` |
| `MACAddressField` | variable | — | exported | not declared | — | `src/nova/objects/fields.py:L68–L68` |
| `ListOfIntegersField` | variable | — | exported | not declared | — | `src/nova/objects/fields.py:L69–L69` |
| `PCIAddressField` | variable | — | exported | not declared | — | `src/nova/objects/fields.py:L70–L70` |
| `Enum` | variable | — | exported | not declared | — | `src/nova/objects/fields.py:L78–L78` |
| `Field` | variable | — | exported | not declared | — | `src/nova/objects/fields.py:L79–L79` |
| `FieldType` | variable | — | exported | not declared | — | `src/nova/objects/fields.py:L80–L80` |
| `Set` | variable | — | exported | not declared | — | `src/nova/objects/fields.py:L81–L81` |
| `Dict` | variable | — | exported | not declared | — | `src/nova/objects/fields.py:L82–L82` |
| `List` | variable | — | exported | not declared | — | `src/nova/objects/fields.py:L83–L83` |
| `Object` | variable | — | exported | not declared | — | `src/nova/objects/fields.py:L84–L84` |
| `IPAddress` | variable | — | exported | not declared | — | `src/nova/objects/fields.py:L85–L85` |
| `IPV4Address` | variable | — | exported | not declared | — | `src/nova/objects/fields.py:L86–L86` |
| `IPV6Address` | variable | — | exported | not declared | — | `src/nova/objects/fields.py:L87–L87` |
| `IPNetwork` | variable | — | exported | not declared | — | `src/nova/objects/fields.py:L88–L88` |
| `IPV4Network` | variable | — | exported | not declared | — | `src/nova/objects/fields.py:L89–L89` |
| `IPV6Network` | variable | — | exported | not declared | — | `src/nova/objects/fields.py:L90–L90` |
| `ResourceClass` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L93–L103` |
| `ResourceClass.PATTERN` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L95–L95` |
| `ResourceClass._REGEX` | field | — | private | not declared | — | `src/nova/objects/fields.py:L96–L96` |
| `ResourceClass.coerce` | method | (self, obj, attr, value) | public | `uppered` (src/nova/objects/fields.py:L102) | 3/6 | `src/nova/objects/fields.py:L98–L103` |
| `ResourceClassField` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L106–L107` |
| `ResourceClassField.AUTO_TYPE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L107–L107` |
| `SetOfStringsField` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L110–L111` |
| `SetOfStringsField.AUTO_TYPE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L111–L111` |
| `BaseNovaEnum` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L114–L116` |
| `BaseNovaEnum.__init__` | method | (self, **kwargs) | public | not declared | 1/2 | `src/nova/objects/fields.py:L115–L116` |
| `Architecture` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L119–L227` |
| `Architecture.ALPHA` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L129–L129` |
| `Architecture.ARMV6` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L130–L130` |
| `Architecture.ARMV7` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L131–L131` |
| `Architecture.ARMV7B` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L132–L132` |
| `Architecture.AARCH64` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L134–L134` |
| `Architecture.CRIS` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L135–L135` |
| `Architecture.I686` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L136–L136` |
| `Architecture.IA64` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L137–L137` |
| `Architecture.LM32` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L138–L138` |
| `Architecture.M68K` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L140–L140` |
| `Architecture.MICROBLAZE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L141–L141` |
| `Architecture.MICROBLAZEEL` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L142–L142` |
| `Architecture.MIPS` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L143–L143` |
| `Architecture.MIPSEL` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L144–L144` |
| `Architecture.MIPS64` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L146–L146` |
| `Architecture.MIPS64EL` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L147–L147` |
| `Architecture.OPENRISC` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L148–L148` |
| `Architecture.PARISC` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L149–L149` |
| `Architecture.PARISC64` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L150–L150` |
| `Architecture.PPC` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L152–L152` |
| `Architecture.PPCLE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L153–L153` |
| `Architecture.PPC64` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L154–L154` |
| `Architecture.PPC64LE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L155–L155` |
| `Architecture.PPCEMB` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L156–L156` |
| `Architecture.S390` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L158–L158` |
| `Architecture.S390X` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L159–L159` |
| `Architecture.SH4` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L160–L160` |
| `Architecture.SH4EB` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L161–L161` |
| `Architecture.SPARC` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L162–L162` |
| `Architecture.SPARC64` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L164–L164` |
| `Architecture.UNICORE32` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L165–L165` |
| `Architecture.X86_64` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L166–L166` |
| `Architecture.XTENSA` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L167–L167` |
| `Architecture.XTENSAEB` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L168–L168` |
| `Architecture.ALL` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L170–L170` |
| `Architecture.from_host` | method | (cls) | public | `cls.canonicalize(os.uname().machine)` (src/nova/objects/fields.py:L179) | 1/2 | `src/nova/objects/fields.py:L173–L179` |
| `Architecture.is_valid` | method | (cls, name) | public | `name in cls.ALL` (src/nova/objects/fields.py:L190) | 1/2 | `src/nova/objects/fields.py:L182–L190` |
| `Architecture.canonicalize` | method | (cls, name) | public | `None` (src/nova/objects/fields.py:L202); `newname` (src/nova/objects/fields.py:L219) | 6/13 | `src/nova/objects/fields.py:L193–L219` |
| `Architecture.coerce` | method | (self, obj, attr, value) | public | `super(Architecture, self).coerce(obj, attr, value)` (src/nova/objects/fields.py:L227) | 2/7 | `src/nova/objects/fields.py:L221–L227` |
| `BlockDeviceDestinationType` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L230–L236` |
| `BlockDeviceDestinationType.LOCAL` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L233–L233` |
| `BlockDeviceDestinationType.VOLUME` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L234–L234` |
| `BlockDeviceDestinationType.ALL` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L236–L236` |
| `BlockDeviceSourceType` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L239–L247` |
| `BlockDeviceSourceType.BLANK` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L242–L242` |
| `BlockDeviceSourceType.IMAGE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L243–L243` |
| `BlockDeviceSourceType.SNAPSHOT` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L244–L244` |
| `BlockDeviceSourceType.VOLUME` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L245–L245` |
| `BlockDeviceSourceType.ALL` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L247–L247` |
| `BlockDeviceType` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L250–L259` |
| `BlockDeviceType.CDROM` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L253–L253` |
| `BlockDeviceType.DISK` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L254–L254` |
| `BlockDeviceType.FLOPPY` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L255–L255` |
| `BlockDeviceType.FS` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L256–L256` |
| `BlockDeviceType.LUN` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L257–L257` |
| `BlockDeviceType.ALL` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L259–L259` |
| `BlockDeviceEncryptionFormatType` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L262–L267` |
| `BlockDeviceEncryptionFormatType.PLAIN` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L263–L263` |
| `BlockDeviceEncryptionFormatType.LUKS` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L264–L264` |
| `BlockDeviceEncryptionFormatType.LUKSv2` | field | — | public | not declared | — | `src/nova/objects/fields.py:L265–L265` |
| `BlockDeviceEncryptionFormatType.ALL` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L267–L267` |
| `ConfigDrivePolicy` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L270–L274` |
| `ConfigDrivePolicy.OPTIONAL` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L271–L271` |
| `ConfigDrivePolicy.MANDATORY` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L272–L272` |
| `ConfigDrivePolicy.ALL` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L274–L274` |
| `CPUAllocationPolicy` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L277–L283` |
| `CPUAllocationPolicy.DEDICATED` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L279–L279` |
| `CPUAllocationPolicy.SHARED` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L280–L280` |
| `CPUAllocationPolicy.MIXED` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L281–L281` |
| `CPUAllocationPolicy.ALL` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L283–L283` |
| `CPUThreadAllocationPolicy` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L286–L303` |
| `CPUThreadAllocationPolicy.PREFER` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L291–L291` |
| `CPUThreadAllocationPolicy.ISOLATE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L298–L298` |
| `CPUThreadAllocationPolicy.REQUIRE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L301–L301` |
| `CPUThreadAllocationPolicy.ALL` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L303–L303` |
| `CPUEmulatorThreadsPolicy` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L306–L314` |
| `CPUEmulatorThreadsPolicy.SHARE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L310–L310` |
| `CPUEmulatorThreadsPolicy.ISOLATE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L312–L312` |
| `CPUEmulatorThreadsPolicy.ALL` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L314–L314` |
| `CPUMode` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L317–L323` |
| `CPUMode.CUSTOM` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L319–L319` |
| `CPUMode.HOST_MODEL` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L320–L320` |
| `CPUMode.HOST_PASSTHROUGH` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L321–L321` |
| `CPUMode.ALL` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L323–L323` |
| `CPUMatch` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L326–L332` |
| `CPUMatch.MINIMUM` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L328–L328` |
| `CPUMatch.EXACT` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L329–L329` |
| `CPUMatch.STRICT` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L330–L330` |
| `CPUMatch.ALL` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L332–L332` |
| `CPUFeaturePolicy` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L335–L343` |
| `CPUFeaturePolicy.FORCE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L337–L337` |
| `CPUFeaturePolicy.REQUIRE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L338–L338` |
| `CPUFeaturePolicy.OPTIONAL` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L339–L339` |
| `CPUFeaturePolicy.DISABLE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L340–L340` |
| `CPUFeaturePolicy.FORBID` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L341–L341` |
| `CPUFeaturePolicy.ALL` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L343–L343` |
| `DiskBus` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L346–L362` |
| `DiskBus.FDC` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L352–L352` |
| `DiskBus.IDE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L353–L353` |
| `DiskBus.SATA` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L354–L354` |
| `DiskBus.SCSI` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L355–L355` |
| `DiskBus.USB` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L356–L356` |
| `DiskBus.VIRTIO` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L357–L357` |
| `DiskBus.XEN` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L358–L358` |
| `DiskBus.LXC` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L359–L359` |
| `DiskBus.UML` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L360–L360` |
| `DiskBus.ALL` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L362–L362` |
| `DiskConfig` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L365–L374` |
| `DiskConfig.MANUAL` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L367–L367` |
| `DiskConfig.AUTO` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L368–L368` |
| `DiskConfig.ALL` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L370–L370` |
| `DiskConfig.coerce` | method | (self, obj, attr, value) | public | `super(DiskConfig, self).coerce(obj, attr, enum_value)` (src/nova/objects/fields.py:L374) | 2/3 | `src/nova/objects/fields.py:L372–L374` |
| `FirmwareType` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L377–L382` |
| `FirmwareType.UEFI` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L379–L379` |
| `FirmwareType.BIOS` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L380–L380` |
| `FirmwareType.ALL` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L382–L382` |
| `HVType` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L385–L459` |
| `HVType.BAREMETAL` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L394–L394` |
| `HVType.BHYVE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L395–L395` |
| `HVType.DOCKER` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L396–L396` |
| `HVType.FAKE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L397–L397` |
| `HVType.HYPERV` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L398–L398` |
| `HVType.IRONIC` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L399–L399` |
| `HVType.KQEMU` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L400–L400` |
| `HVType.KVM` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L401–L401` |
| `HVType.LXC` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L402–L402` |
| `HVType.LXD` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L403–L403` |
| `HVType.OPENVZ` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L404–L404` |
| `HVType.PARALLELS` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L405–L405` |
| `HVType.VIRTUOZZO` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L406–L406` |
| `HVType.PHYP` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L407–L407` |
| `HVType.QEMU` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L408–L408` |
| `HVType.TEST` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L409–L409` |
| `HVType.UML` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L410–L410` |
| `HVType.VBOX` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L411–L411` |
| `HVType.VMWARE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L412–L412` |
| `HVType.XEN` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L413–L413` |
| `HVType.ZVM` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L414–L414` |
| `HVType.PRSM` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L415–L415` |
| `HVType.ALL` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L417–L419` |
| `HVType.coerce` | method | (self, obj, attr, value) | public | `super(HVType, self).coerce(obj, attr, value)` (src/nova/objects/fields.py:L428) | 2/7 | `src/nova/objects/fields.py:L421–L428` |
| `HVType.is_valid` | method | (cls, name) | public | `name in cls.ALL` (src/nova/objects/fields.py:L438) | 1/2 | `src/nova/objects/fields.py:L431–L438` |
| `HVType.canonicalize` | method | (cls, name) | public | `None` (src/nova/objects/fields.py:L449); `newname` (src/nova/objects/fields.py:L459) | 4/9 | `src/nova/objects/fields.py:L441–L459` |
| `ImageSignatureHashType` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L462–L464` |
| `ImageSignatureHashType.ALL` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L464–L464` |
| `ImageSignatureKeyType` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L467–L472` |
| `ImageSignatureKeyType.ALL` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L469–L472` |
| `InputBus` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L475–L480` |
| `InputBus.USB` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L477–L477` |
| `InputBus.VIRTIO` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L478–L478` |
| `InputBus.ALL` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L480–L480` |
| `MigrationType` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L483–L490` |
| `MigrationType.MIGRATION` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L485–L485` |
| `MigrationType.RESIZE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L486–L486` |
| `MigrationType.LIVE_MIGRATION` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L487–L487` |
| `MigrationType.EVACUATION` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L488–L488` |
| `MigrationType.ALL` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L490–L490` |
| `OSType` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L493–L504` |
| `OSType.LINUX` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L495–L495` |
| `OSType.WINDOWS` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L496–L496` |
| `OSType.ALL` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L498–L498` |
| `OSType.coerce` | method | (self, obj, attr, value) | public | `super(OSType, self).coerce(obj, attr, value)` (src/nova/objects/fields.py:L504) | 1/3 | `src/nova/objects/fields.py:L500–L504` |
| `RNGModel` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L507–L525` |
| `RNGModel.VIRTIO` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L523–L523` |
| `RNGModel.ALL` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L525–L525` |
| `ShareMappingStatus` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L528–L537` |
| `ShareMappingStatus.ATTACHING` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L531–L531` |
| `ShareMappingStatus.DETACHING` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L532–L532` |
| `ShareMappingStatus.ACTIVE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L533–L533` |
| `ShareMappingStatus.INACTIVE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L534–L534` |
| `ShareMappingStatus.ERROR` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L535–L535` |
| `ShareMappingStatus.ALL` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L537–L537` |
| `ShareMappingProto` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L540–L546` |
| `ShareMappingProto.NFS` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L543–L543` |
| `ShareMappingProto.CEPHFS` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L544–L544` |
| `ShareMappingProto.ALL` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L546–L546` |
| `TPMModel` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L549–L554` |
| `TPMModel.TIS` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L551–L551` |
| `TPMModel.CRB` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L552–L552` |
| `TPMModel.ALL` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L554–L554` |
| `TPMVersion` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L557–L561` |
| `TPMVersion.v1_2` | field | — | public | not declared | — | `src/nova/objects/fields.py:L558–L558` |
| `TPMVersion.v2_0` | field | — | public | not declared | — | `src/nova/objects/fields.py:L559–L559` |
| `TPMVersion.ALL` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L561–L561` |
| `MemEncryptionModel` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L564–L570` |
| `MemEncryptionModel.AMD_SEV` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L565–L565` |
| `MemEncryptionModel.AMD_SEV_ES` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L566–L566` |
| `MemEncryptionModel.AMD_SEV_SNP` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L567–L567` |
| `MemEncryptionModel.INTEL_TDX` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L568–L568` |
| `MemEncryptionModel.ALL` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L570–L570` |
| `MaxPhyAddrMode` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L573–L577` |
| `MaxPhyAddrMode.PASSTHROUGH` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L574–L574` |
| `MaxPhyAddrMode.EMULATE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L575–L575` |
| `MaxPhyAddrMode.ALL` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L577–L577` |
| `SCSIModel` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L580–L602` |
| `SCSIModel.BUSLOGIC` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L582–L582` |
| `SCSIModel.IBMVSCSI` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L583–L583` |
| `SCSIModel.LSILOGIC` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L584–L584` |
| `SCSIModel.LSISAS1068` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L585–L585` |
| `SCSIModel.LSISAS1078` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L586–L586` |
| `SCSIModel.VIRTIO_SCSI` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L587–L587` |
| `SCSIModel.VMPVSCSI` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L588–L588` |
| `SCSIModel.ALL` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L590–L591` |
| `SCSIModel.coerce` | method | (self, obj, attr, value) | public | `super(SCSIModel, self).coerce(obj, attr, value)` (src/nova/objects/fields.py:L602) | 3/7 | `src/nova/objects/fields.py:L593–L602` |
| `SecureBoot` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L605–L611` |
| `SecureBoot.REQUIRED` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L607–L607` |
| `SecureBoot.DISABLED` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L608–L608` |
| `SecureBoot.OPTIONAL` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L609–L609` |
| `SecureBoot.ALL` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L611–L611` |
| `VideoModel` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L614–L626` |
| `VideoModel.CIRRUS` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L616–L616` |
| `VideoModel.QXL` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L617–L617` |
| `VideoModel.VGA` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L618–L618` |
| `VideoModel.VMVGA` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L619–L619` |
| `VideoModel.XEN` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L620–L620` |
| `VideoModel.VIRTIO` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L621–L621` |
| `VideoModel.GOP` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L622–L622` |
| `VideoModel.NONE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L623–L623` |
| `VideoModel.BOCHS` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L624–L624` |
| `VideoModel.ALL` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L626–L626` |
| `VIFModel` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L629–L652` |
| `VIFModel.LEGACY_VALUES` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L631–L643` |
| `VIFModel.ALL` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L645–L645` |
| `VIFModel.coerce` | method | (self, obj, attr, value) | public | `super(VIFModel, self).coerce(obj, attr, value)` (src/nova/objects/fields.py:L652) | 1/4 | `src/nova/objects/fields.py:L647–L652` |
| `VIOMMUModel` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L655–L662` |
| `VIOMMUModel.INTEL` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L657–L657` |
| `VIOMMUModel.SMMUV3` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L658–L658` |
| `VIOMMUModel.VIRTIO` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L659–L659` |
| `VIOMMUModel.AUTO` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L660–L660` |
| `VIOMMUModel.ALL` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L662–L662` |
| `VMMode` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L665–L738` |
| `VMMode.HVM` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L674–L674` |
| `VMMode.XEN` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L675–L675` |
| `VMMode.UML` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L676–L676` |
| `VMMode.EXE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L677–L677` |
| `VMMode.ALL` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L679–L679` |
| `VMMode.coerce` | method | (self, obj, attr, value) | public | `super(VMMode, self).coerce(obj, attr, value)` (src/nova/objects/fields.py:L688) | 2/7 | `src/nova/objects/fields.py:L681–L688` |
| `VMMode.get_from_instance` | method | (cls, instance) | public | `cls.canonicalize(mode)` (src/nova/objects/fields.py:L700) | 1/3 | `src/nova/objects/fields.py:L691–L700` |
| `VMMode.is_valid` | method | (cls, name) | public | `name in cls.ALL` (src/nova/objects/fields.py:L710) | 1/2 | `src/nova/objects/fields.py:L703–L710` |
| `VMMode.canonicalize` | method | (cls, mode) | public | `None` (src/nova/objects/fields.py:L721); `mode` (src/nova/objects/fields.py:L738) | 6/13 | `src/nova/objects/fields.py:L713–L738` |
| `WatchdogAction` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L741–L749` |
| `WatchdogAction.NONE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L743–L743` |
| `WatchdogAction.PAUSE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L744–L744` |
| `WatchdogAction.POWEROFF` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L745–L745` |
| `WatchdogAction.RESET` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L746–L746` |
| `WatchdogAction.DISABLED` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L747–L747` |
| `WatchdogAction.ALL` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L749–L749` |
| `MonitorMetricType` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L752–L780` |
| `MonitorMetricType.CPU_FREQUENCY` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L754–L754` |
| `MonitorMetricType.CPU_USER_TIME` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L755–L755` |
| `MonitorMetricType.CPU_KERNEL_TIME` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L756–L756` |
| `MonitorMetricType.CPU_IDLE_TIME` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L757–L757` |
| `MonitorMetricType.CPU_IOWAIT_TIME` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L758–L758` |
| `MonitorMetricType.CPU_USER_PERCENT` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L759–L759` |
| `MonitorMetricType.CPU_KERNEL_PERCENT` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L760–L760` |
| `MonitorMetricType.CPU_IDLE_PERCENT` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L761–L761` |
| `MonitorMetricType.CPU_IOWAIT_PERCENT` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L762–L762` |
| `MonitorMetricType.CPU_PERCENT` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L763–L763` |
| `MonitorMetricType.NUMA_MEM_BW_MAX` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L764–L764` |
| `MonitorMetricType.NUMA_MEM_BW_CURRENT` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L765–L765` |
| `MonitorMetricType.ALL` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L767–L780` |
| `HostStatus` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L783–L791` |
| `HostStatus.UP` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L785–L785` |
| `HostStatus.DOWN` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L786–L786` |
| `HostStatus.MAINTENANCE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L787–L787` |
| `HostStatus.UNKNOWN` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L788–L788` |
| `HostStatus.NONE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L789–L789` |
| `HostStatus.ALL` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L791–L791` |
| `PciDeviceStatus` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L794–L805` |
| `PciDeviceStatus.AVAILABLE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L796–L796` |
| `PciDeviceStatus.CLAIMED` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L797–L797` |
| `PciDeviceStatus.ALLOCATED` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L798–L798` |
| `PciDeviceStatus.REMOVED` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L799–L799` |
| `PciDeviceStatus.DELETED` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L800–L800` |
| `PciDeviceStatus.UNCLAIMABLE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L801–L801` |
| `PciDeviceStatus.UNAVAILABLE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L802–L802` |
| `PciDeviceStatus.ALL` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L804–L805` |
| `PciDeviceType` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L808–L820` |
| `PciDeviceType.STANDARD` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L812–L812` |
| `PciDeviceType.SRIOV_PF` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L813–L813` |
| `PciDeviceType.SRIOV_VF` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L814–L814` |
| `PciDeviceType.VDPA` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L818–L818` |
| `PciDeviceType.ALL` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L820–L820` |
| `PCINUMAAffinityPolicy` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L823–L830` |
| `PCINUMAAffinityPolicy.REQUIRED` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L825–L825` |
| `PCINUMAAffinityPolicy.LEGACY` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L826–L826` |
| `PCINUMAAffinityPolicy.PREFERRED` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L827–L827` |
| `PCINUMAAffinityPolicy.SOCKET` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L828–L828` |
| `PCINUMAAffinityPolicy.ALL` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L830–L830` |
| `DiskFormat` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L833–L844` |
| `DiskFormat.RBD` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L834–L834` |
| `DiskFormat.LVM` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L835–L835` |
| `DiskFormat.QCOW2` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L836–L836` |
| `DiskFormat.RAW` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L837–L837` |
| `DiskFormat.PLOOP` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L838–L838` |
| `DiskFormat.VHD` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L839–L839` |
| `DiskFormat.VMDK` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L840–L840` |
| `DiskFormat.VDI` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L841–L841` |
| `DiskFormat.ISO` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L842–L842` |
| `DiskFormat.ALL` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L844–L844` |
| `HypervisorDriver` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L849–L856` |
| `HypervisorDriver.LIBVIRT` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L850–L850` |
| `HypervisorDriver.XENAPI` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L851–L851` |
| `HypervisorDriver.VMWAREAPI` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L852–L852` |
| `HypervisorDriver.IRONIC` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L853–L853` |
| `HypervisorDriver.HYPERV` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L854–L854` |
| `HypervisorDriver.ALL` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L856–L856` |
| `PointerModelType` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L859–L863` |
| `PointerModelType.USBTABLET` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L861–L861` |
| `PointerModelType.ALL` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L863–L863` |
| `SoundModelType` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L866–L877` |
| `SoundModelType.SB16` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L868–L868` |
| `SoundModelType.ES1370` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L869–L869` |
| `SoundModelType.PCSPK` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L870–L870` |
| `SoundModelType.AC97` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L871–L871` |
| `SoundModelType.ICH6` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L872–L872` |
| `SoundModelType.ICH9` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L873–L873` |
| `SoundModelType.USB` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L874–L874` |
| `SoundModelType.VIRTIO` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L875–L875` |
| `SoundModelType.ALL` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L877–L877` |
| `USBControllerModelType` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L880–L892` |
| `USBControllerModelType.NONE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L888–L888` |
| `USBControllerModelType.NEC_XHCI` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L889–L889` |
| `USBControllerModelType.QEMU_XHCI` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L890–L890` |
| `USBControllerModelType.ALL` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L892–L892` |
| `NotificationPriority` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L895–L904` |
| `NotificationPriority.AUDIT` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L896–L896` |
| `NotificationPriority.CRITICAL` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L897–L897` |
| `NotificationPriority.DEBUG` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L898–L898` |
| `NotificationPriority.INFO` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L899–L899` |
| `NotificationPriority.ERROR` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L900–L900` |
| `NotificationPriority.SAMPLE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L901–L901` |
| `NotificationPriority.WARN` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L902–L902` |
| `NotificationPriority.ALL` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L904–L904` |
| `NotificationPhase` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L907–L913` |
| `NotificationPhase.START` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L908–L908` |
| `NotificationPhase.END` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L909–L909` |
| `NotificationPhase.ERROR` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L910–L910` |
| `NotificationPhase.PROGRESS` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L911–L911` |
| `NotificationPhase.ALL` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L913–L913` |
| `NotificationSource` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L916–L952` |
| `NotificationSource.COMPUTE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L927–L927` |
| `NotificationSource.API` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L928–L928` |
| `NotificationSource.CONDUCTOR` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L929–L929` |
| `NotificationSource.SCHEDULER` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L930–L930` |
| `NotificationSource.NETWORK` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L933–L933` |
| `NotificationSource.CONSOLEAUTH` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L936–L936` |
| `NotificationSource.CELLS` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L939–L939` |
| `NotificationSource.CONSOLE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L942–L942` |
| `NotificationSource.METADATA` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L943–L943` |
| `NotificationSource.ALL` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L945–L946` |
| `NotificationSource.get_source_by_binary` | method | (binary) | public | `"nova-api" if binary == "nova-osapi_compute" else binary` (src/nova/objects/fields.py:L952) | 2/2 | `src/nova/objects/fields.py:L949–L952` |
| `NotificationAction` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L955–L1028` |
| `NotificationAction.UPDATE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L956–L956` |
| `NotificationAction.EXCEPTION` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L957–L957` |
| `NotificationAction.DELETE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L958–L958` |
| `NotificationAction.PAUSE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L959–L959` |
| `NotificationAction.UNPAUSE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L960–L960` |
| `NotificationAction.RESIZE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L961–L961` |
| `NotificationAction.VOLUME_SWAP` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L962–L962` |
| `NotificationAction.SUSPEND` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L963–L963` |
| `NotificationAction.POWER_ON` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L964–L964` |
| `NotificationAction.POWER_OFF` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L965–L965` |
| `NotificationAction.REBOOT` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L966–L966` |
| `NotificationAction.SHUTDOWN` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L967–L967` |
| `NotificationAction.SNAPSHOT` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L968–L968` |
| `NotificationAction.INTERFACE_ATTACH` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L969–L969` |
| `NotificationAction.SHELVE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L970–L970` |
| `NotificationAction.RESUME` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L971–L971` |
| `NotificationAction.RESTORE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L972–L972` |
| `NotificationAction.EXISTS` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L973–L973` |
| `NotificationAction.RESCUE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L974–L974` |
| `NotificationAction.VOLUME_ATTACH` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L975–L975` |
| `NotificationAction.VOLUME_DETACH` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L976–L976` |
| `NotificationAction.SHARE_ATTACH` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L977–L977` |
| `NotificationAction.SHARE_DETACH` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L978–L978` |
| `NotificationAction.CREATE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L979–L979` |
| `NotificationAction.IMPORT` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L980–L980` |
| `NotificationAction.EVACUATE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L981–L981` |
| `NotificationAction.RESIZE_FINISH` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L982–L982` |
| `NotificationAction.LIVE_MIGRATION_ABORT` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L983–L983` |
| `NotificationAction.LIVE_MIGRATION_POST_DEST` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L984–L984` |
| `NotificationAction.LIVE_MIGRATION_POST` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L985–L985` |
| `NotificationAction.LIVE_MIGRATION_PRE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L986–L986` |
| `NotificationAction.LIVE_MIGRATION_ROLLBACK_DEST` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L987–L987` |
| `NotificationAction.LIVE_MIGRATION_ROLLBACK` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L988–L988` |
| `NotificationAction.LIVE_MIGRATION_FORCE_COMPLETE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L989–L989` |
| `NotificationAction.REBUILD` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L990–L990` |
| `NotificationAction.REBUILD_SCHEDULED` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L991–L991` |
| `NotificationAction.INTERFACE_DETACH` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L992–L992` |
| `NotificationAction.RESIZE_CONFIRM` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L993–L993` |
| `NotificationAction.RESIZE_PREP` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L994–L994` |
| `NotificationAction.RESIZE_REVERT` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L995–L995` |
| `NotificationAction.SELECT_DESTINATIONS` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L996–L996` |
| `NotificationAction.SHELVE_OFFLOAD` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L997–L997` |
| `NotificationAction.SOFT_DELETE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L998–L998` |
| `NotificationAction.TRIGGER_CRASH_DUMP` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L999–L999` |
| `NotificationAction.UNRESCUE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1000–L1000` |
| `NotificationAction.UNSHELVE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1001–L1001` |
| `NotificationAction.ADD_HOST` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1002–L1002` |
| `NotificationAction.REMOVE_HOST` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1003–L1003` |
| `NotificationAction.ADD_MEMBER` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1004–L1004` |
| `NotificationAction.UPDATE_METADATA` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1005–L1005` |
| `NotificationAction.LOCK` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1006–L1006` |
| `NotificationAction.UNLOCK` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1007–L1007` |
| `NotificationAction.UPDATE_PROP` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1008–L1008` |
| `NotificationAction.CONNECT` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1009–L1009` |
| `NotificationAction.USAGE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1010–L1010` |
| `NotificationAction.BUILD_INSTANCES` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1011–L1011` |
| `NotificationAction.MIGRATE_SERVER` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1012–L1012` |
| `NotificationAction.REBUILD_SERVER` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1013–L1013` |
| `NotificationAction.IMAGE_CACHE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1014–L1014` |
| `NotificationAction.ALL` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1016–L1028` |
| `InstanceState` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L1034–L1049` |
| `InstanceState.ACTIVE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1035–L1035` |
| `InstanceState.BUILDING` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1036–L1036` |
| `InstanceState.PAUSED` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1037–L1037` |
| `InstanceState.SUSPENDED` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1038–L1038` |
| `InstanceState.STOPPED` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1039–L1039` |
| `InstanceState.RESCUED` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1040–L1040` |
| `InstanceState.RESIZED` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1041–L1041` |
| `InstanceState.SOFT_DELETED` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1042–L1042` |
| `InstanceState.DELETED` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1043–L1043` |
| `InstanceState.ERROR` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1044–L1044` |
| `InstanceState.SHELVED` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1045–L1045` |
| `InstanceState.SHELVED_OFFLOADED` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1046–L1046` |
| `InstanceState.ALL` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1048–L1049` |
| `InstanceTaskState` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L1055–L1109` |
| `InstanceTaskState.SCHEDULING` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1056–L1056` |
| `InstanceTaskState.BLOCK_DEVICE_MAPPING` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1057–L1057` |
| `InstanceTaskState.NETWORKING` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1058–L1058` |
| `InstanceTaskState.SPAWNING` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1059–L1059` |
| `InstanceTaskState.IMAGE_SNAPSHOT` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1060–L1060` |
| `InstanceTaskState.IMAGE_SNAPSHOT_PENDING` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1061–L1061` |
| `InstanceTaskState.IMAGE_PENDING_UPLOAD` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1062–L1062` |
| `InstanceTaskState.IMAGE_UPLOADING` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1063–L1063` |
| `InstanceTaskState.IMAGE_BACKUP` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1064–L1064` |
| `InstanceTaskState.UPDATING_PASSWORD` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1065–L1065` |
| `InstanceTaskState.RESIZE_PREP` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1066–L1066` |
| `InstanceTaskState.RESIZE_MIGRATING` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1067–L1067` |
| `InstanceTaskState.RESIZE_MIGRATED` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1068–L1068` |
| `InstanceTaskState.RESIZE_FINISH` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1069–L1069` |
| `InstanceTaskState.RESIZE_REVERTING` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1070–L1070` |
| `InstanceTaskState.RESIZE_CONFIRMING` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1071–L1071` |
| `InstanceTaskState.REBOOTING` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1072–L1072` |
| `InstanceTaskState.REBOOT_PENDING` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1073–L1073` |
| `InstanceTaskState.REBOOT_STARTED` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1074–L1074` |
| `InstanceTaskState.REBOOTING_HARD` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1075–L1075` |
| `InstanceTaskState.REBOOT_PENDING_HARD` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1076–L1076` |
| `InstanceTaskState.REBOOT_STARTED_HARD` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1077–L1077` |
| `InstanceTaskState.PAUSING` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1078–L1078` |
| `InstanceTaskState.UNPAUSING` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1079–L1079` |
| `InstanceTaskState.SUSPENDING` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1080–L1080` |
| `InstanceTaskState.RESUMING` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1081–L1081` |
| `InstanceTaskState.POWERING_OFF` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1082–L1082` |
| `InstanceTaskState.POWERING_ON` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1083–L1083` |
| `InstanceTaskState.RESCUING` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1084–L1084` |
| `InstanceTaskState.UNRESCUING` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1085–L1085` |
| `InstanceTaskState.REBUILDING` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1086–L1086` |
| `InstanceTaskState.REBUILD_BLOCK_DEVICE_MAPPING` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1087–L1087` |
| `InstanceTaskState.REBUILD_SPAWNING` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1088–L1088` |
| `InstanceTaskState.MIGRATING` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1089–L1089` |
| `InstanceTaskState.DELETING` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1090–L1090` |
| `InstanceTaskState.SOFT_DELETING` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1091–L1091` |
| `InstanceTaskState.RESTORING` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1092–L1092` |
| `InstanceTaskState.SHELVING` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1093–L1093` |
| `InstanceTaskState.SHELVING_IMAGE_PENDING_UPLOAD` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1094–L1094` |
| `InstanceTaskState.SHELVING_IMAGE_UPLOADING` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1095–L1095` |
| `InstanceTaskState.SHELVING_OFFLOADING` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1096–L1096` |
| `InstanceTaskState.UNSHELVING` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1097–L1097` |
| `InstanceTaskState.ALL` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1099–L1109` |
| `InstancePowerState` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L1112–L1153` |
| `InstancePowerState._UNUSED` | field | — | private | not declared | — | `src/nova/objects/fields.py:L1113–L1113` |
| `InstancePowerState.NOSTATE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1114–L1114` |
| `InstancePowerState.RUNNING` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1115–L1115` |
| `InstancePowerState.PAUSED` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1116–L1116` |
| `InstancePowerState.SHUTDOWN` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1117–L1117` |
| `InstancePowerState.CRASHED` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1118–L1118` |
| `InstancePowerState.SUSPENDED` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1119–L1119` |
| `InstancePowerState.ALL` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1122–L1131` |
| `InstancePowerState.__init__` | method | (self) | public | not declared | 1/3 | `src/nova/objects/fields.py:L1133–L1135` |
| `InstancePowerState.coerce` | method | (self, obj, attr, value) | public | `super(InstancePowerState, self).coerce(obj, attr, value)` (src/nova/objects/fields.py:L1143) | 2/7 | `src/nova/objects/fields.py:L1137–L1143` |
| `InstancePowerState.index` | method | (cls, value) | public | `cls.ALL.index(value)` (src/nova/objects/fields.py:L1148) | 1/2 | `src/nova/objects/fields.py:L1146–L1148` |
| `InstancePowerState.from_index` | method | (cls, index) | public | `cls.ALL[index]` (src/nova/objects/fields.py:L1153) | 1/2 | `src/nova/objects/fields.py:L1151–L1153` |
| `NetworkModel` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L1156–L1180` |
| `NetworkModel.coerce` | method | (self, obj, attr, value) | public | `value` (src/nova/objects/fields.py:L1159); `network_model.NetworkInfo.hydrate(value)` (src/nova/objects/fields.py:L1162) | 3/8 | `src/nova/objects/fields.py:L1157–L1165` |
| `NetworkModel.to_primitive` | method | (obj, attr, value) | public | `value.json()` (src/nova/objects/fields.py:L1169) | 1/2 | `src/nova/objects/fields.py:L1168–L1169` |
| `NetworkModel.from_primitive` | method | (obj, attr, value) | public | `network_model.NetworkInfo.hydrate(value)` (src/nova/objects/fields.py:L1173) | 1/2 | `src/nova/objects/fields.py:L1172–L1173` |
| `NetworkModel.stringify` | method | (self, value) | public | `'NetworkModel(%s)' % ( ','.join([str(vif['id']) for vif in value]))` (src/nova/objects/fields.py:L1176) | 2/3 | `src/nova/objects/fields.py:L1175–L1177` |
| `NetworkModel.get_schema` | method | (self) | public | `{'type': ['string']}` (src/nova/objects/fields.py:L1180) | 1/2 | `src/nova/objects/fields.py:L1179–L1180` |
| `NetworkVIFModel` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L1183–L1204` |
| `NetworkVIFModel.coerce` | method | (self, obj, attr, value) | public | `value` (src/nova/objects/fields.py:L1188); `self.from_primitive(obj, attr, value)` (src/nova/objects/fields.py:L1190) | 3/8 | `src/nova/objects/fields.py:L1186–L1193` |
| `NetworkVIFModel.to_primitive` | method | (obj, attr, value) | public | `jsonutils.dumps(value)` (src/nova/objects/fields.py:L1197) | 1/2 | `src/nova/objects/fields.py:L1196–L1197` |
| `NetworkVIFModel.from_primitive` | method | (obj, attr, value) | public | `network_model.VIF.hydrate(jsonutils.loads(value))` (src/nova/objects/fields.py:L1201) | 1/2 | `src/nova/objects/fields.py:L1200–L1201` |
| `NetworkVIFModel.get_schema` | method | (self) | public | `{'type': ['string']}` (src/nova/objects/fields.py:L1204) | 1/2 | `src/nova/objects/fields.py:L1203–L1204` |
| `AddressBase` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L1207–L1217` |
| `AddressBase.PATTERN` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1208–L1208` |
| `AddressBase.coerce` | method | (self, obj, attr, value) | public | `str(value)` (src/nova/objects/fields.py:L1212) | 2/5 | `src/nova/objects/fields.py:L1210–L1214` |
| `AddressBase.get_schema` | method | (self) | public | `{'type': ['string'], 'pattern': self.PATTERN}` (src/nova/objects/fields.py:L1217) | 1/2 | `src/nova/objects/fields.py:L1216–L1217` |
| `USBAddress` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L1220–L1221` |
| `USBAddress.PATTERN` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1221–L1221` |
| `SCSIAddress` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L1224–L1225` |
| `SCSIAddress.PATTERN` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1225–L1225` |
| `IDEAddress` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L1228–L1229` |
| `IDEAddress.PATTERN` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1229–L1229` |
| `XenAddress` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L1232–L1233` |
| `XenAddress.PATTERN` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1233–L1233` |
| `USBAddressField` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L1236–L1237` |
| `USBAddressField.AUTO_TYPE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1237–L1237` |
| `SCSIAddressField` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L1240–L1241` |
| `SCSIAddressField.AUTO_TYPE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1241–L1241` |
| `IDEAddressField` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L1244–L1245` |
| `IDEAddressField.AUTO_TYPE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1245–L1245` |
| `XenAddressField` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L1248–L1249` |
| `XenAddressField.AUTO_TYPE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1249–L1249` |
| `ArchitectureField` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L1252–L1253` |
| `ArchitectureField.AUTO_TYPE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1253–L1253` |
| `BlockDeviceDestinationTypeField` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L1256–L1257` |
| `BlockDeviceDestinationTypeField.AUTO_TYPE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1257–L1257` |
| `BlockDeviceSourceTypeField` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L1260–L1261` |
| `BlockDeviceSourceTypeField.AUTO_TYPE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1261–L1261` |
| `BlockDeviceTypeField` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L1264–L1265` |
| `BlockDeviceTypeField.AUTO_TYPE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1265–L1265` |
| `BlockDeviceEncryptionFormatTypeField` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L1268–L1269` |
| `BlockDeviceEncryptionFormatTypeField.AUTO_TYPE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1269–L1269` |
| `ConfigDrivePolicyField` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L1272–L1273` |
| `ConfigDrivePolicyField.AUTO_TYPE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1273–L1273` |
| `CPUAllocationPolicyField` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L1276–L1277` |
| `CPUAllocationPolicyField.AUTO_TYPE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1277–L1277` |
| `CPUThreadAllocationPolicyField` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L1280–L1281` |
| `CPUThreadAllocationPolicyField.AUTO_TYPE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1281–L1281` |
| `CPUEmulatorThreadsPolicyField` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L1284–L1285` |
| `CPUEmulatorThreadsPolicyField.AUTO_TYPE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1285–L1285` |
| `CPUModeField` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L1288–L1289` |
| `CPUModeField.AUTO_TYPE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1289–L1289` |
| `CPUMatchField` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L1292–L1293` |
| `CPUMatchField.AUTO_TYPE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1293–L1293` |
| `CPUFeaturePolicyField` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L1296–L1297` |
| `CPUFeaturePolicyField.AUTO_TYPE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1297–L1297` |
| `DiskBusField` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L1300–L1301` |
| `DiskBusField.AUTO_TYPE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1301–L1301` |
| `DiskConfigField` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L1304–L1305` |
| `DiskConfigField.AUTO_TYPE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1305–L1305` |
| `FirmwareTypeField` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L1308–L1309` |
| `FirmwareTypeField.AUTO_TYPE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1309–L1309` |
| `HVTypeField` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L1312–L1313` |
| `HVTypeField.AUTO_TYPE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1313–L1313` |
| `ImageSignatureHashTypeField` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L1316–L1317` |
| `ImageSignatureHashTypeField.AUTO_TYPE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1317–L1317` |
| `ImageSignatureKeyTypeField` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L1320–L1321` |
| `ImageSignatureKeyTypeField.AUTO_TYPE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1321–L1321` |
| `InputBusField` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L1324–L1325` |
| `InputBusField.AUTO_TYPE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1325–L1325` |
| `MaxPhysAddrModeField` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L1328–L1329` |
| `MaxPhysAddrModeField.AUTO_TYPE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1329–L1329` |
| `MigrationTypeField` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L1332–L1333` |
| `MigrationTypeField.AUTO_TYPE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1333–L1333` |
| `OSTypeField` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L1336–L1337` |
| `OSTypeField.AUTO_TYPE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1337–L1337` |
| `RNGModelField` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L1340–L1341` |
| `RNGModelField.AUTO_TYPE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1341–L1341` |
| `ShareMappingStatusField` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L1344–L1345` |
| `ShareMappingStatusField.AUTO_TYPE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1345–L1345` |
| `ShareMappingProtoField` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L1348–L1349` |
| `ShareMappingProtoField.AUTO_TYPE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1349–L1349` |
| `TPMModelField` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L1352–L1353` |
| `TPMModelField.AUTO_TYPE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1353–L1353` |
| `TPMVersionField` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L1356–L1357` |
| `TPMVersionField.AUTO_TYPE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1357–L1357` |
| `MemEncryptionModelField` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L1360–L1361` |
| `MemEncryptionModelField.AUTO_TYPE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1361–L1361` |
| `SCSIModelField` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L1364–L1365` |
| `SCSIModelField.AUTO_TYPE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1365–L1365` |
| `SecureBootField` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L1368–L1369` |
| `SecureBootField.AUTO_TYPE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1369–L1369` |
| `VideoModelField` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L1372–L1373` |
| `VideoModelField.AUTO_TYPE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1373–L1373` |
| `VIFModelField` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L1376–L1377` |
| `VIFModelField.AUTO_TYPE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1377–L1377` |
| `VIOMMUModelField` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L1380–L1381` |
| `VIOMMUModelField.AUTO_TYPE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1381–L1381` |
| `VMModeField` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L1384–L1385` |
| `VMModeField.AUTO_TYPE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1385–L1385` |
| `WatchdogActionField` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L1388–L1389` |
| `WatchdogActionField.AUTO_TYPE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1389–L1389` |
| `MonitorMetricTypeField` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L1392–L1393` |
| `MonitorMetricTypeField.AUTO_TYPE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1393–L1393` |
| `PciDeviceStatusField` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L1396–L1397` |
| `PciDeviceStatusField.AUTO_TYPE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1397–L1397` |
| `PciDeviceTypeField` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L1400–L1401` |
| `PciDeviceTypeField.AUTO_TYPE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1401–L1401` |
| `PCINUMAAffinityPolicyField` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L1404–L1405` |
| `PCINUMAAffinityPolicyField.AUTO_TYPE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1405–L1405` |
| `DiskFormatField` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L1408–L1409` |
| `DiskFormatField.AUTO_TYPE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1409–L1409` |
| `HypervisorDriverField` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L1412–L1413` |
| `HypervisorDriverField.AUTO_TYPE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1413–L1413` |
| `PointerModelField` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L1416–L1417` |
| `PointerModelField.AUTO_TYPE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1417–L1417` |
| `SoundModelField` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L1420–L1421` |
| `SoundModelField.AUTO_TYPE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1421–L1421` |
| `USBControllerModelField` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L1424–L1425` |
| `USBControllerModelField.AUTO_TYPE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1425–L1425` |
| `NotificationPriorityField` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L1428–L1429` |
| `NotificationPriorityField.AUTO_TYPE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1429–L1429` |
| `NotificationPhaseField` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L1432–L1433` |
| `NotificationPhaseField.AUTO_TYPE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1433–L1433` |
| `NotificationActionField` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L1436–L1437` |
| `NotificationActionField.AUTO_TYPE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1437–L1437` |
| `NotificationSourceField` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L1440–L1441` |
| `NotificationSourceField.AUTO_TYPE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1441–L1441` |
| `InstanceStateField` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L1444–L1445` |
| `InstanceStateField.AUTO_TYPE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1445–L1445` |
| `InstanceTaskStateField` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L1448–L1449` |
| `InstanceTaskStateField.AUTO_TYPE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1449–L1449` |
| `InstancePowerStateField` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L1452–L1453` |
| `InstancePowerStateField.AUTO_TYPE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1453–L1453` |
| `NetworkModelField` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L1456–L1457` |
| `NetworkModelField.AUTO_TYPE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1457–L1457` |
| `NetworkVIFModelField` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L1460–L1461` |
| `NetworkVIFModelField.AUTO_TYPE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1461–L1461` |
| `ListOfListsOfStringsField` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L1464–L1465` |
| `ListOfListsOfStringsField.AUTO_TYPE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1465–L1465` |
| `DictOfSetOfIntegersField` | class | — | exported | not declared | — | `src/nova/objects/fields.py:L1468–L1469` |
| `DictOfSetOfIntegersField.AUTO_TYPE` | constant | — | public | not declared | — | `src/nova/objects/fields.py:L1469–L1469` |

## Dependencies

- `import os` (src/nova/objects/fields.py:L15)
- `import re` (src/nova/objects/fields.py:L16)
- `cursive`: imports `signature_utils` (src/nova/objects/fields.py:L18)
- `oslo_serialization`: imports `jsonutils` (src/nova/objects/fields.py:L19)
- `oslo_versionedobjects`: imports `fields` (src/nova/objects/fields.py:L20)
- `nova`: imports `exception` (src/nova/objects/fields.py:L22)
- `nova.i18n`: imports `_` (src/nova/objects/fields.py:L23)
- `nova.network`: imports `model as network_model` (src/nova/objects/fields.py:L24)
- `nova.virt`: imports `arch` (src/nova/objects/fields.py:L25)

## Side Effects

- **global-mutation**: PATTERN = r"^[A-Z0-9_]+$" (src/nova/objects/fields.py:L95)
- **global-mutation**: AUTO_TYPE = ResourceClass() (src/nova/objects/fields.py:L107)
- **global-mutation**: AUTO_TYPE = Set(fields.String()) (src/nova/objects/fields.py:L111)
- **global-mutation**: ALPHA = arch.ALPHA (src/nova/objects/fields.py:L129)
- **global-mutation**: ARMV6 = arch.ARMV6 (src/nova/objects/fields.py:L130)
- **global-mutation**: ARMV7 = arch.ARMV7 (src/nova/objects/fields.py:L131)
- **global-mutation**: ARMV7B = arch.ARMV7B (src/nova/objects/fields.py:L132)
- **global-mutation**: AARCH64 = arch.AARCH64 (src/nova/objects/fields.py:L134)
- **global-mutation**: CRIS = arch.CRIS (src/nova/objects/fields.py:L135)
- **global-mutation**: I686 = arch.I686 (src/nova/objects/fields.py:L136)
- **global-mutation**: IA64 = arch.IA64 (src/nova/objects/fields.py:L137)
- **global-mutation**: LM32 = arch.LM32 (src/nova/objects/fields.py:L138)
- **global-mutation**: M68K = arch.M68K (src/nova/objects/fields.py:L140)
- **global-mutation**: MICROBLAZE = arch.MICROBLAZE (src/nova/objects/fields.py:L141)
- **global-mutation**: MICROBLAZEEL = arch.MICROBLAZEEL (src/nova/objects/fields.py:L142)
- **global-mutation**: MIPS = arch.MIPS (src/nova/objects/fields.py:L143)
- **global-mutation**: MIPSEL = arch.MIPSEL (src/nova/objects/fields.py:L144)
- **global-mutation**: MIPS64 = arch.MIPS64 (src/nova/objects/fields.py:L146)
- **global-mutation**: MIPS64EL = arch.MIPS64EL (src/nova/objects/fields.py:L147)
- **global-mutation**: OPENRISC = arch.OPENRISC (src/nova/objects/fields.py:L148)
- **global-mutation**: PARISC = arch.PARISC (src/nova/objects/fields.py:L149)
- **global-mutation**: PARISC64 = arch.PARISC64 (src/nova/objects/fields.py:L150)
- **global-mutation**: PPC = arch.PPC (src/nova/objects/fields.py:L152)
- **global-mutation**: PPCLE = arch.PPCLE (src/nova/objects/fields.py:L153)
- **global-mutation**: PPC64 = arch.PPC64 (src/nova/objects/fields.py:L154)
- **global-mutation**: PPC64LE = arch.PPC64LE (src/nova/objects/fields.py:L155)
- **global-mutation**: PPCEMB = arch.PPCEMB (src/nova/objects/fields.py:L156)
- **global-mutation**: S390 = arch.S390 (src/nova/objects/fields.py:L158)
- **global-mutation**: S390X = arch.S390X (src/nova/objects/fields.py:L159)
- **global-mutation**: SH4 = arch.SH4 (src/nova/objects/fields.py:L160)
- **global-mutation**: SH4EB = arch.SH4EB (src/nova/objects/fields.py:L161)
- **global-mutation**: SPARC = arch.SPARC (src/nova/objects/fields.py:L162)
- **global-mutation**: SPARC64 = arch.SPARC64 (src/nova/objects/fields.py:L164)
- **global-mutation**: UNICORE32 = arch.UNICORE32 (src/nova/objects/fields.py:L165)
- **global-mutation**: X86_64 = arch.X86_64 (src/nova/objects/fields.py:L166)
- **global-mutation**: XTENSA = arch.XTENSA (src/nova/objects/fields.py:L167)
- **global-mutation**: XTENSAEB = arch.XTENSAEB (src/nova/objects/fields.py:L168)
- **global-mutation**: ALL = arch.ALL (src/nova/objects/fields.py:L170)
- **global-mutation**: LOCAL = 'local' (src/nova/objects/fields.py:L233)
- **global-mutation**: VOLUME = 'volume' (src/nova/objects/fields.py:L234)
- **global-mutation**: ALL = (LOCAL, VOLUME) (src/nova/objects/fields.py:L236)
- **global-mutation**: BLANK = 'blank' (src/nova/objects/fields.py:L242)
- **global-mutation**: IMAGE = 'image' (src/nova/objects/fields.py:L243)
- **global-mutation**: SNAPSHOT = 'snapshot' (src/nova/objects/fields.py:L244)
- **global-mutation**: VOLUME = 'volume' (src/nova/objects/fields.py:L245)
- **global-mutation**: ALL = (BLANK, IMAGE, SNAPSHOT, VOLUME) (src/nova/objects/fields.py:L247)
- **global-mutation**: CDROM = 'cdrom' (src/nova/objects/fields.py:L253)
- **global-mutation**: DISK = 'disk' (src/nova/objects/fields.py:L254)
- **global-mutation**: FLOPPY = 'floppy' (src/nova/objects/fields.py:L255)
- **global-mutation**: FS = 'fs' (src/nova/objects/fields.py:L256)
- **global-mutation**: LUN = 'lun' (src/nova/objects/fields.py:L257)
- **global-mutation**: ALL = (CDROM, DISK, FLOPPY, FS, LUN) (src/nova/objects/fields.py:L259)
- **global-mutation**: PLAIN = 'plain' (src/nova/objects/fields.py:L263)
- **global-mutation**: LUKS = 'luks' (src/nova/objects/fields.py:L264)
- **global-mutation**: ALL = (PLAIN, LUKS, LUKSv2) (src/nova/objects/fields.py:L267)
- **global-mutation**: OPTIONAL = "optional" (src/nova/objects/fields.py:L271)
- **global-mutation**: MANDATORY = "mandatory" (src/nova/objects/fields.py:L272)
- **global-mutation**: ALL = (OPTIONAL, MANDATORY) (src/nova/objects/fields.py:L274)
- **global-mutation**: DEDICATED = "dedicated" (src/nova/objects/fields.py:L279)
- **global-mutation**: SHARED = "shared" (src/nova/objects/fields.py:L280)
- **global-mutation**: MIXED = "mixed" (src/nova/objects/fields.py:L281)
- **global-mutation**: ALL = (DEDICATED, SHARED, MIXED) (src/nova/objects/fields.py:L283)
- **global-mutation**: PREFER = "prefer" (src/nova/objects/fields.py:L291)
- **global-mutation**: ISOLATE = "isolate" (src/nova/objects/fields.py:L298)
- **global-mutation**: REQUIRE = "require" (src/nova/objects/fields.py:L301)
- **global-mutation**: ALL = (PREFER, ISOLATE, REQUIRE) (src/nova/objects/fields.py:L303)
- **global-mutation**: SHARE = "share" (src/nova/objects/fields.py:L310)
- **global-mutation**: ISOLATE = "isolate" (src/nova/objects/fields.py:L312)
- **global-mutation**: ALL = (SHARE, ISOLATE) (src/nova/objects/fields.py:L314)
- **global-mutation**: CUSTOM = 'custom' (src/nova/objects/fields.py:L319)
- **global-mutation**: HOST_MODEL = 'host-model' (src/nova/objects/fields.py:L320)
- **global-mutation**: HOST_PASSTHROUGH = 'host-passthrough' (src/nova/objects/fields.py:L321)
- **global-mutation**: ALL = (CUSTOM, HOST_MODEL, HOST_PASSTHROUGH) (src/nova/objects/fields.py:L323)
- **global-mutation**: MINIMUM = 'minimum' (src/nova/objects/fields.py:L328)
- **global-mutation**: EXACT = 'exact' (src/nova/objects/fields.py:L329)
- **global-mutation**: STRICT = 'strict' (src/nova/objects/fields.py:L330)
- **global-mutation**: ALL = (MINIMUM, EXACT, STRICT) (src/nova/objects/fields.py:L332)
- **global-mutation**: FORCE = 'force' (src/nova/objects/fields.py:L337)
- **global-mutation**: REQUIRE = 'require' (src/nova/objects/fields.py:L338)
- **global-mutation**: OPTIONAL = 'optional' (src/nova/objects/fields.py:L339)
- **global-mutation**: DISABLE = 'disable' (src/nova/objects/fields.py:L340)
- **global-mutation**: FORBID = 'forbid' (src/nova/objects/fields.py:L341)
- **global-mutation**: ALL = (FORCE, REQUIRE, OPTIONAL, DISABLE, FORBID) (src/nova/objects/fields.py:L343)
- **global-mutation**: FDC = "fdc" (src/nova/objects/fields.py:L352)
- **global-mutation**: IDE = "ide" (src/nova/objects/fields.py:L353)
- **global-mutation**: SATA = "sata" (src/nova/objects/fields.py:L354)
- **global-mutation**: SCSI = "scsi" (src/nova/objects/fields.py:L355)
- **global-mutation**: USB = "usb" (src/nova/objects/fields.py:L356)
- **global-mutation**: VIRTIO = "virtio" (src/nova/objects/fields.py:L357)
- **global-mutation**: XEN = "xen" (src/nova/objects/fields.py:L358)
- **global-mutation**: LXC = "lxc" (src/nova/objects/fields.py:L359)
- **global-mutation**: UML = "uml" (src/nova/objects/fields.py:L360)
- **global-mutation**: ALL = (FDC, IDE, SATA, SCSI, USB, VIRTIO, XEN, LXC, UML) (src/nova/objects/fields.py:L362)
- **global-mutation**: MANUAL = "MANUAL" (src/nova/objects/fields.py:L367)
- **global-mutation**: AUTO = "AUTO" (src/nova/objects/fields.py:L368)
- **global-mutation**: ALL = (MANUAL, AUTO) (src/nova/objects/fields.py:L370)
- **global-mutation**: UEFI = "uefi" (src/nova/objects/fields.py:L379)
- **global-mutation**: BIOS = "bios" (src/nova/objects/fields.py:L380)
- **global-mutation**: ALL = (UEFI, BIOS) (src/nova/objects/fields.py:L382)
- **global-mutation**: BAREMETAL = 'baremetal' (src/nova/objects/fields.py:L394)
- **global-mutation**: BHYVE = 'bhyve' (src/nova/objects/fields.py:L395)
- **global-mutation**: DOCKER = 'docker' (src/nova/objects/fields.py:L396)
- **global-mutation**: FAKE = 'fake' (src/nova/objects/fields.py:L397)
- **global-mutation**: HYPERV = 'hyperv' (src/nova/objects/fields.py:L398)
- **global-mutation**: IRONIC = 'ironic' (src/nova/objects/fields.py:L399)
- **global-mutation**: KQEMU = 'kqemu' (src/nova/objects/fields.py:L400)
- **global-mutation**: KVM = 'kvm' (src/nova/objects/fields.py:L401)
- **global-mutation**: LXC = 'lxc' (src/nova/objects/fields.py:L402)
- **global-mutation**: LXD = 'lxd' (src/nova/objects/fields.py:L403)
- **global-mutation**: OPENVZ = 'openvz' (src/nova/objects/fields.py:L404)
- **global-mutation**: PARALLELS = 'parallels' (src/nova/objects/fields.py:L405)
- **global-mutation**: VIRTUOZZO = 'vz' (src/nova/objects/fields.py:L406)
- **global-mutation**: PHYP = 'phyp' (src/nova/objects/fields.py:L407)
- **global-mutation**: QEMU = 'qemu' (src/nova/objects/fields.py:L408)
- **global-mutation**: TEST = 'test' (src/nova/objects/fields.py:L409)
- **global-mutation**: UML = 'uml' (src/nova/objects/fields.py:L410)
- **global-mutation**: VBOX = 'vbox' (src/nova/objects/fields.py:L411)
- **global-mutation**: VMWARE = 'vmware' (src/nova/objects/fields.py:L412)
- **global-mutation**: XEN = 'xen' (src/nova/objects/fields.py:L413)
- **global-mutation**: ZVM = 'zvm' (src/nova/objects/fields.py:L414)
- **global-mutation**: PRSM = 'prsm' (src/nova/objects/fields.py:L415)
- **global-mutation**: ALL = (BAREMETAL, BHYVE, DOCKER, FAKE, HYPERV, IRONIC, KQEMU, KVM, LXC, (src/nova/objects/fields.py:L417)
- **global-mutation**: ALL = tuple(sorted(signature_utils.HASH_METHODS.keys())) (src/nova/objects/fields.py:L464)
- **global-mutation**: ALL = ( (src/nova/objects/fields.py:L469)
- **global-mutation**: USB = 'usb' (src/nova/objects/fields.py:L477)
- **global-mutation**: VIRTIO = 'virtio' (src/nova/objects/fields.py:L478)
- **global-mutation**: ALL = (USB, VIRTIO) (src/nova/objects/fields.py:L480)
- **global-mutation**: MIGRATION = 'migration'  # cold migration (src/nova/objects/fields.py:L485)
- **global-mutation**: RESIZE = 'resize' (src/nova/objects/fields.py:L486)
- **global-mutation**: LIVE_MIGRATION = 'live-migration' (src/nova/objects/fields.py:L487)
- **global-mutation**: EVACUATION = 'evacuation' (src/nova/objects/fields.py:L488)
- **global-mutation**: ALL = (MIGRATION, RESIZE, LIVE_MIGRATION, EVACUATION) (src/nova/objects/fields.py:L490)
- **global-mutation**: LINUX = "linux" (src/nova/objects/fields.py:L495)
- **global-mutation**: WINDOWS = "windows" (src/nova/objects/fields.py:L496)
- **global-mutation**: ALL = (LINUX, WINDOWS) (src/nova/objects/fields.py:L498)
- **global-mutation**: VIRTIO = "virtio" (src/nova/objects/fields.py:L523)
- **global-mutation**: ALL = (VIRTIO,) (src/nova/objects/fields.py:L525)
- **global-mutation**: ATTACHING = "attaching" (src/nova/objects/fields.py:L531)
- **global-mutation**: DETACHING = "detaching" (src/nova/objects/fields.py:L532)
- **global-mutation**: ACTIVE = "active" (src/nova/objects/fields.py:L533)
- **global-mutation**: INACTIVE = "inactive" (src/nova/objects/fields.py:L534)
- **global-mutation**: ERROR = "error" (src/nova/objects/fields.py:L535)
- **global-mutation**: ALL = (ATTACHING, DETACHING, ACTIVE, INACTIVE, ERROR) (src/nova/objects/fields.py:L537)
- **global-mutation**: NFS = "NFS" (src/nova/objects/fields.py:L543)
- **global-mutation**: CEPHFS = "CEPHFS" (src/nova/objects/fields.py:L544)
- **global-mutation**: ALL = (NFS, CEPHFS) (src/nova/objects/fields.py:L546)
- **global-mutation**: TIS = "tpm-tis" (src/nova/objects/fields.py:L551)
- **global-mutation**: CRB = "tpm-crb" (src/nova/objects/fields.py:L552)
- **global-mutation**: ALL = (TIS, CRB) (src/nova/objects/fields.py:L554)
- **global-mutation**: ALL = (v1_2, v2_0) (src/nova/objects/fields.py:L561)
- **global-mutation**: AMD_SEV = "amd-sev" (src/nova/objects/fields.py:L565)
- **global-mutation**: AMD_SEV_ES = "amd-sev-es" (src/nova/objects/fields.py:L566)
- **global-mutation**: AMD_SEV_SNP = "amd-sev-snp" (src/nova/objects/fields.py:L567)
- **global-mutation**: INTEL_TDX = "intel-tdx" (src/nova/objects/fields.py:L568)
- **global-mutation**: ALL = (AMD_SEV, AMD_SEV_ES, AMD_SEV_SNP, INTEL_TDX) (src/nova/objects/fields.py:L570)
- **global-mutation**: PASSTHROUGH = "passthrough" (src/nova/objects/fields.py:L574)
- **global-mutation**: EMULATE = "emulate" (src/nova/objects/fields.py:L575)
- **global-mutation**: ALL = (PASSTHROUGH, EMULATE) (src/nova/objects/fields.py:L577)
- **global-mutation**: BUSLOGIC = "buslogic" (src/nova/objects/fields.py:L582)
- **global-mutation**: IBMVSCSI = "ibmvscsi" (src/nova/objects/fields.py:L583)
- **global-mutation**: LSILOGIC = "lsilogic" (src/nova/objects/fields.py:L584)
- **global-mutation**: LSISAS1068 = "lsisas1068" (src/nova/objects/fields.py:L585)
- **global-mutation**: LSISAS1078 = "lsisas1078" (src/nova/objects/fields.py:L586)
- **global-mutation**: VIRTIO_SCSI = "virtio-scsi" (src/nova/objects/fields.py:L587)
- **global-mutation**: VMPVSCSI = "vmpvscsi" (src/nova/objects/fields.py:L588)
- **global-mutation**: ALL = (BUSLOGIC, IBMVSCSI, LSILOGIC, LSISAS1068, (src/nova/objects/fields.py:L590)
- **global-mutation**: REQUIRED = "required" (src/nova/objects/fields.py:L607)
- **global-mutation**: DISABLED = "disabled" (src/nova/objects/fields.py:L608)
- **global-mutation**: OPTIONAL = "optional" (src/nova/objects/fields.py:L609)
- **global-mutation**: ALL = (REQUIRED, DISABLED, OPTIONAL) (src/nova/objects/fields.py:L611)
- **global-mutation**: CIRRUS = "cirrus" (src/nova/objects/fields.py:L616)
- **global-mutation**: QXL = "qxl" (src/nova/objects/fields.py:L617)
- **global-mutation**: VGA = "vga" (src/nova/objects/fields.py:L618)
- **global-mutation**: VMVGA = "vmvga" (src/nova/objects/fields.py:L619)
- **global-mutation**: XEN = "xen" (src/nova/objects/fields.py:L620)
- **global-mutation**: VIRTIO = 'virtio' (src/nova/objects/fields.py:L621)
- **global-mutation**: GOP = 'gop' (src/nova/objects/fields.py:L622)
- **global-mutation**: NONE = 'none' (src/nova/objects/fields.py:L623)
- **global-mutation**: BOCHS = 'bochs' (src/nova/objects/fields.py:L624)
- **global-mutation**: ALL = (CIRRUS, QXL, VGA, VMVGA, XEN, VIRTIO, GOP, NONE, BOCHS) (src/nova/objects/fields.py:L626)
- **global-mutation**: LEGACY_VALUES = {"virtuale1000": (src/nova/objects/fields.py:L631)
- **global-mutation**: ALL = network_model.VIF_MODEL_ALL (src/nova/objects/fields.py:L645)
- **global-mutation**: INTEL = 'intel' (src/nova/objects/fields.py:L657)
- **global-mutation**: SMMUV3 = 'smmuv3' (src/nova/objects/fields.py:L658)
- **global-mutation**: VIRTIO = 'virtio' (src/nova/objects/fields.py:L659)
- **global-mutation**: AUTO = 'auto' (src/nova/objects/fields.py:L660)
- **global-mutation**: ALL = (INTEL, SMMUV3, VIRTIO, AUTO) (src/nova/objects/fields.py:L662)
- **global-mutation**: HVM = 'hvm'  # Native ABI (aka fully virtualized) (src/nova/objects/fields.py:L674)
- **global-mutation**: XEN = 'xen'  # Xen 3.0 paravirtualized (src/nova/objects/fields.py:L675)
- **global-mutation**: UML = 'uml'  # User Mode Linux paravirtualized (src/nova/objects/fields.py:L676)
- **global-mutation**: EXE = 'exe'  # Executables in containers (src/nova/objects/fields.py:L677)
- **global-mutation**: ALL = (HVM, XEN, UML, EXE) (src/nova/objects/fields.py:L679)
- **global-mutation**: NONE = "none" (src/nova/objects/fields.py:L743)
- **global-mutation**: PAUSE = "pause" (src/nova/objects/fields.py:L744)
- **global-mutation**: POWEROFF = "poweroff" (src/nova/objects/fields.py:L745)
- **global-mutation**: RESET = "reset" (src/nova/objects/fields.py:L746)
- **global-mutation**: DISABLED = "disabled" (src/nova/objects/fields.py:L747)
- **global-mutation**: ALL = (NONE, PAUSE, POWEROFF, RESET, DISABLED) (src/nova/objects/fields.py:L749)
- **global-mutation**: CPU_FREQUENCY = "cpu.frequency" (src/nova/objects/fields.py:L754)
- **global-mutation**: CPU_USER_TIME = "cpu.user.time" (src/nova/objects/fields.py:L755)
- **global-mutation**: CPU_KERNEL_TIME = "cpu.kernel.time" (src/nova/objects/fields.py:L756)
- **global-mutation**: CPU_IDLE_TIME = "cpu.idle.time" (src/nova/objects/fields.py:L757)
- **global-mutation**: CPU_IOWAIT_TIME = "cpu.iowait.time" (src/nova/objects/fields.py:L758)
- **global-mutation**: CPU_USER_PERCENT = "cpu.user.percent" (src/nova/objects/fields.py:L759)
- **global-mutation**: CPU_KERNEL_PERCENT = "cpu.kernel.percent" (src/nova/objects/fields.py:L760)
- **global-mutation**: CPU_IDLE_PERCENT = "cpu.idle.percent" (src/nova/objects/fields.py:L761)
- **global-mutation**: CPU_IOWAIT_PERCENT = "cpu.iowait.percent" (src/nova/objects/fields.py:L762)
- **global-mutation**: CPU_PERCENT = "cpu.percent" (src/nova/objects/fields.py:L763)
- **global-mutation**: NUMA_MEM_BW_MAX = "numa.membw.max" (src/nova/objects/fields.py:L764)
- **global-mutation**: NUMA_MEM_BW_CURRENT = "numa.membw.current" (src/nova/objects/fields.py:L765)
- **global-mutation**: ALL = ( (src/nova/objects/fields.py:L767)
- **global-mutation**: UP = "UP"  # The nova-compute is up. (src/nova/objects/fields.py:L785)
- **global-mutation**: DOWN = "DOWN"  # The nova-compute is forced_down. (src/nova/objects/fields.py:L786)
- **global-mutation**: MAINTENANCE = "MAINTENANCE"  # The nova-compute is disabled. (src/nova/objects/fields.py:L787)
- **global-mutation**: UNKNOWN = "UNKNOWN"  # The nova-compute has not reported. (src/nova/objects/fields.py:L788)
- **global-mutation**: NONE = ""  # No host or nova-compute. (src/nova/objects/fields.py:L789)
- **global-mutation**: ALL = (UP, DOWN, MAINTENANCE, UNKNOWN, NONE) (src/nova/objects/fields.py:L791)
- **global-mutation**: AVAILABLE = "available" (src/nova/objects/fields.py:L796)
- **global-mutation**: CLAIMED = "claimed" (src/nova/objects/fields.py:L797)
- **global-mutation**: ALLOCATED = "allocated" (src/nova/objects/fields.py:L798)
- **global-mutation**: REMOVED = "removed"  # The device has been hot-removed and not yet deleted (src/nova/objects/fields.py:L799)
- **global-mutation**: DELETED = "deleted"  # The device is marked not available/deleted. (src/nova/objects/fields.py:L800)
- **global-mutation**: UNCLAIMABLE = "unclaimable" (src/nova/objects/fields.py:L801)
- **global-mutation**: UNAVAILABLE = "unavailable" (src/nova/objects/fields.py:L802)
- **global-mutation**: ALL = (AVAILABLE, CLAIMED, ALLOCATED, REMOVED, DELETED, UNAVAILABLE, (src/nova/objects/fields.py:L804)
- **global-mutation**: STANDARD = "type-PCI" (src/nova/objects/fields.py:L812)
- **global-mutation**: SRIOV_PF = "type-PF" (src/nova/objects/fields.py:L813)
- **global-mutation**: SRIOV_VF = "type-VF" (src/nova/objects/fields.py:L814)
- **global-mutation**: VDPA = "vdpa" (src/nova/objects/fields.py:L818)
- **global-mutation**: ALL = (STANDARD, SRIOV_PF, SRIOV_VF, VDPA) (src/nova/objects/fields.py:L820)
- **global-mutation**: REQUIRED = "required" (src/nova/objects/fields.py:L825)
- **global-mutation**: LEGACY = "legacy" (src/nova/objects/fields.py:L826)
- **global-mutation**: PREFERRED = "preferred" (src/nova/objects/fields.py:L827)
- **global-mutation**: SOCKET = "socket" (src/nova/objects/fields.py:L828)
- **global-mutation**: ALL = (REQUIRED, LEGACY, PREFERRED, SOCKET) (src/nova/objects/fields.py:L830)
- **global-mutation**: RBD = "rbd" (src/nova/objects/fields.py:L834)
- **global-mutation**: LVM = "lvm" (src/nova/objects/fields.py:L835)
- **global-mutation**: QCOW2 = "qcow2" (src/nova/objects/fields.py:L836)
- **global-mutation**: RAW = "raw" (src/nova/objects/fields.py:L837)
- **global-mutation**: PLOOP = "ploop" (src/nova/objects/fields.py:L838)
- **global-mutation**: VHD = "vhd" (src/nova/objects/fields.py:L839)
- **global-mutation**: VMDK = "vmdk" (src/nova/objects/fields.py:L840)
- **global-mutation**: VDI = "vdi" (src/nova/objects/fields.py:L841)
- **global-mutation**: ISO = "iso" (src/nova/objects/fields.py:L842)
- **global-mutation**: ALL = (RBD, LVM, QCOW2, RAW, PLOOP, VHD, VMDK, VDI, ISO) (src/nova/objects/fields.py:L844)
- **global-mutation**: LIBVIRT = "libvirt" (src/nova/objects/fields.py:L850)
- **global-mutation**: XENAPI = "xenapi" (src/nova/objects/fields.py:L851)
- **global-mutation**: VMWAREAPI = "vmwareapi" (src/nova/objects/fields.py:L852)
- **global-mutation**: IRONIC = "ironic" (src/nova/objects/fields.py:L853)
- **global-mutation**: HYPERV = "hyperv" (src/nova/objects/fields.py:L854)
- **global-mutation**: ALL = (LIBVIRT, XENAPI, VMWAREAPI, IRONIC, HYPERV) (src/nova/objects/fields.py:L856)
- **global-mutation**: USBTABLET = "usbtablet" (src/nova/objects/fields.py:L861)
- **global-mutation**: ALL = (USBTABLET,) (src/nova/objects/fields.py:L863)
- **global-mutation**: SB16 = 'sb16' (src/nova/objects/fields.py:L868)
- **global-mutation**: ES1370 = 'es1370' (src/nova/objects/fields.py:L869)
- **global-mutation**: PCSPK = 'pcspk' (src/nova/objects/fields.py:L870)
- **global-mutation**: AC97 = 'ac97' (src/nova/objects/fields.py:L871)
- **global-mutation**: ICH6 = 'ich6' (src/nova/objects/fields.py:L872)
- **global-mutation**: ICH9 = 'ich9' (src/nova/objects/fields.py:L873)
- **global-mutation**: USB = 'usb' (src/nova/objects/fields.py:L874)
- **global-mutation**: VIRTIO = 'virtio' (src/nova/objects/fields.py:L875)
- **global-mutation**: ALL = (SB16, ES1370, PCSPK, AC97, ICH6, ICH9, USB, VIRTIO,) (src/nova/objects/fields.py:L877)
- **global-mutation**: NONE = 'none' (src/nova/objects/fields.py:L888)
- **global-mutation**: NEC_XHCI = 'nec-xhci' (src/nova/objects/fields.py:L889)
- **global-mutation**: QEMU_XHCI = 'qemu-xhci' (src/nova/objects/fields.py:L890)
- **global-mutation**: ALL = (NONE, NEC_XHCI, QEMU_XHCI) (src/nova/objects/fields.py:L892)
- **global-mutation**: AUDIT = 'audit' (src/nova/objects/fields.py:L896)
- **global-mutation**: CRITICAL = 'critical' (src/nova/objects/fields.py:L897)
- **global-mutation**: DEBUG = 'debug' (src/nova/objects/fields.py:L898)
- **global-mutation**: INFO = 'info' (src/nova/objects/fields.py:L899)
- **global-mutation**: ERROR = 'error' (src/nova/objects/fields.py:L900)
- **global-mutation**: SAMPLE = 'sample' (src/nova/objects/fields.py:L901)
- **global-mutation**: WARN = 'warn' (src/nova/objects/fields.py:L902)
- **global-mutation**: ALL = (AUDIT, CRITICAL, DEBUG, INFO, ERROR, SAMPLE, WARN) (src/nova/objects/fields.py:L904)
- **global-mutation**: START = 'start' (src/nova/objects/fields.py:L908)
- **global-mutation**: END = 'end' (src/nova/objects/fields.py:L909)
- **global-mutation**: ERROR = 'error' (src/nova/objects/fields.py:L910)
- **global-mutation**: PROGRESS = 'progress' (src/nova/objects/fields.py:L911)
- **global-mutation**: ALL = (START, END, ERROR, PROGRESS) (src/nova/objects/fields.py:L913)
- **global-mutation**: COMPUTE = 'nova-compute' (src/nova/objects/fields.py:L927)
- **global-mutation**: API = 'nova-api' (src/nova/objects/fields.py:L928)
- **global-mutation**: CONDUCTOR = 'nova-conductor' (src/nova/objects/fields.py:L929)
- **global-mutation**: SCHEDULER = 'nova-scheduler' (src/nova/objects/fields.py:L930)
- **global-mutation**: NETWORK = 'nova-network' (src/nova/objects/fields.py:L933)
- **global-mutation**: CONSOLEAUTH = 'nova-consoleauth' (src/nova/objects/fields.py:L936)
- **global-mutation**: CELLS = 'nova-cells' (src/nova/objects/fields.py:L939)
- **global-mutation**: CONSOLE = 'nova-console' (src/nova/objects/fields.py:L942)
- **global-mutation**: METADATA = 'nova-metadata' (src/nova/objects/fields.py:L943)
- **global-mutation**: ALL = (API, COMPUTE, CONDUCTOR, SCHEDULER, (src/nova/objects/fields.py:L945)
- **global-mutation**: UPDATE = 'update' (src/nova/objects/fields.py:L956)
- **global-mutation**: EXCEPTION = 'exception' (src/nova/objects/fields.py:L957)
- **global-mutation**: DELETE = 'delete' (src/nova/objects/fields.py:L958)
- **global-mutation**: PAUSE = 'pause' (src/nova/objects/fields.py:L959)
- **global-mutation**: UNPAUSE = 'unpause' (src/nova/objects/fields.py:L960)
- **global-mutation**: RESIZE = 'resize' (src/nova/objects/fields.py:L961)
- **global-mutation**: VOLUME_SWAP = 'volume_swap' (src/nova/objects/fields.py:L962)
- **global-mutation**: SUSPEND = 'suspend' (src/nova/objects/fields.py:L963)
- **global-mutation**: POWER_ON = 'power_on' (src/nova/objects/fields.py:L964)
- **global-mutation**: POWER_OFF = 'power_off' (src/nova/objects/fields.py:L965)
- **global-mutation**: REBOOT = 'reboot' (src/nova/objects/fields.py:L966)
- **global-mutation**: SHUTDOWN = 'shutdown' (src/nova/objects/fields.py:L967)
- **global-mutation**: SNAPSHOT = 'snapshot' (src/nova/objects/fields.py:L968)
- **global-mutation**: INTERFACE_ATTACH = 'interface_attach' (src/nova/objects/fields.py:L969)
- **global-mutation**: SHELVE = 'shelve' (src/nova/objects/fields.py:L970)
- **global-mutation**: RESUME = 'resume' (src/nova/objects/fields.py:L971)
- **global-mutation**: RESTORE = 'restore' (src/nova/objects/fields.py:L972)
- **global-mutation**: EXISTS = 'exists' (src/nova/objects/fields.py:L973)
- **global-mutation**: RESCUE = 'rescue' (src/nova/objects/fields.py:L974)
- **global-mutation**: VOLUME_ATTACH = 'volume_attach' (src/nova/objects/fields.py:L975)
- **global-mutation**: VOLUME_DETACH = 'volume_detach' (src/nova/objects/fields.py:L976)
- **global-mutation**: SHARE_ATTACH = 'share_attach' (src/nova/objects/fields.py:L977)
- **global-mutation**: SHARE_DETACH = 'share_detach' (src/nova/objects/fields.py:L978)
- **global-mutation**: CREATE = 'create' (src/nova/objects/fields.py:L979)
- **global-mutation**: IMPORT = 'import' (src/nova/objects/fields.py:L980)
- **global-mutation**: EVACUATE = 'evacuate' (src/nova/objects/fields.py:L981)
- **global-mutation**: RESIZE_FINISH = 'resize_finish' (src/nova/objects/fields.py:L982)
- **global-mutation**: LIVE_MIGRATION_ABORT = 'live_migration_abort' (src/nova/objects/fields.py:L983)
- **global-mutation**: LIVE_MIGRATION_POST_DEST = 'live_migration_post_dest' (src/nova/objects/fields.py:L984)
- **global-mutation**: LIVE_MIGRATION_POST = 'live_migration_post' (src/nova/objects/fields.py:L985)
- **global-mutation**: LIVE_MIGRATION_PRE = 'live_migration_pre' (src/nova/objects/fields.py:L986)
- **global-mutation**: LIVE_MIGRATION_ROLLBACK_DEST = 'live_migration_rollback_dest' (src/nova/objects/fields.py:L987)
- **global-mutation**: LIVE_MIGRATION_ROLLBACK = 'live_migration_rollback' (src/nova/objects/fields.py:L988)
- **global-mutation**: LIVE_MIGRATION_FORCE_COMPLETE = 'live_migration_force_complete' (src/nova/objects/fields.py:L989)
- **global-mutation**: REBUILD = 'rebuild' (src/nova/objects/fields.py:L990)
- **global-mutation**: REBUILD_SCHEDULED = 'rebuild_scheduled' (src/nova/objects/fields.py:L991)
- **global-mutation**: INTERFACE_DETACH = 'interface_detach' (src/nova/objects/fields.py:L992)
- **global-mutation**: RESIZE_CONFIRM = 'resize_confirm' (src/nova/objects/fields.py:L993)
- **global-mutation**: RESIZE_PREP = 'resize_prep' (src/nova/objects/fields.py:L994)
- **global-mutation**: RESIZE_REVERT = 'resize_revert' (src/nova/objects/fields.py:L995)
- **global-mutation**: SELECT_DESTINATIONS = 'select_destinations' (src/nova/objects/fields.py:L996)
- **global-mutation**: SHELVE_OFFLOAD = 'shelve_offload' (src/nova/objects/fields.py:L997)
- **global-mutation**: SOFT_DELETE = 'soft_delete' (src/nova/objects/fields.py:L998)
- **global-mutation**: TRIGGER_CRASH_DUMP = 'trigger_crash_dump' (src/nova/objects/fields.py:L999)
- **global-mutation**: UNRESCUE = 'unrescue' (src/nova/objects/fields.py:L1000)
- **global-mutation**: UNSHELVE = 'unshelve' (src/nova/objects/fields.py:L1001)
- **global-mutation**: ADD_HOST = 'add_host' (src/nova/objects/fields.py:L1002)
- **global-mutation**: REMOVE_HOST = 'remove_host' (src/nova/objects/fields.py:L1003)
- **global-mutation**: ADD_MEMBER = 'add_member' (src/nova/objects/fields.py:L1004)
- **global-mutation**: UPDATE_METADATA = 'update_metadata' (src/nova/objects/fields.py:L1005)
- **global-mutation**: LOCK = 'lock' (src/nova/objects/fields.py:L1006)
- **global-mutation**: UNLOCK = 'unlock' (src/nova/objects/fields.py:L1007)
- **global-mutation**: UPDATE_PROP = 'update_prop' (src/nova/objects/fields.py:L1008)
- **global-mutation**: CONNECT = 'connect' (src/nova/objects/fields.py:L1009)
- **global-mutation**: USAGE = 'usage' (src/nova/objects/fields.py:L1010)
- **global-mutation**: BUILD_INSTANCES = 'build_instances' (src/nova/objects/fields.py:L1011)
- **global-mutation**: MIGRATE_SERVER = 'migrate_server' (src/nova/objects/fields.py:L1012)
- **global-mutation**: REBUILD_SERVER = 'rebuild_server' (src/nova/objects/fields.py:L1013)
- **global-mutation**: IMAGE_CACHE = 'cache_images' (src/nova/objects/fields.py:L1014)
- **global-mutation**: ALL = (UPDATE, EXCEPTION, DELETE, PAUSE, UNPAUSE, RESIZE, VOLUME_SWAP, (src/nova/objects/fields.py:L1016)
- **global-mutation**: ACTIVE = 'active' (src/nova/objects/fields.py:L1035)
- **global-mutation**: BUILDING = 'building' (src/nova/objects/fields.py:L1036)
- **global-mutation**: PAUSED = 'paused' (src/nova/objects/fields.py:L1037)
- **global-mutation**: SUSPENDED = 'suspended' (src/nova/objects/fields.py:L1038)
- **global-mutation**: STOPPED = 'stopped' (src/nova/objects/fields.py:L1039)
- **global-mutation**: RESCUED = 'rescued' (src/nova/objects/fields.py:L1040)
- **global-mutation**: RESIZED = 'resized' (src/nova/objects/fields.py:L1041)
- **global-mutation**: SOFT_DELETED = 'soft-delete' (src/nova/objects/fields.py:L1042)
- **global-mutation**: DELETED = 'deleted' (src/nova/objects/fields.py:L1043)
- **global-mutation**: ERROR = 'error' (src/nova/objects/fields.py:L1044)
- **global-mutation**: SHELVED = 'shelved' (src/nova/objects/fields.py:L1045)
- **global-mutation**: SHELVED_OFFLOADED = 'shelved_offloaded' (src/nova/objects/fields.py:L1046)
- **global-mutation**: ALL = (ACTIVE, BUILDING, PAUSED, SUSPENDED, STOPPED, RESCUED, RESIZED, (src/nova/objects/fields.py:L1048)
- **global-mutation**: SCHEDULING = 'scheduling' (src/nova/objects/fields.py:L1056)
- **global-mutation**: BLOCK_DEVICE_MAPPING = 'block_device_mapping' (src/nova/objects/fields.py:L1057)
- **global-mutation**: NETWORKING = 'networking' (src/nova/objects/fields.py:L1058)
- **global-mutation**: SPAWNING = 'spawning' (src/nova/objects/fields.py:L1059)
- **global-mutation**: IMAGE_SNAPSHOT = 'image_snapshot' (src/nova/objects/fields.py:L1060)
- **global-mutation**: IMAGE_SNAPSHOT_PENDING = 'image_snapshot_pending' (src/nova/objects/fields.py:L1061)
- **global-mutation**: IMAGE_PENDING_UPLOAD = 'image_pending_upload' (src/nova/objects/fields.py:L1062)
- **global-mutation**: IMAGE_UPLOADING = 'image_uploading' (src/nova/objects/fields.py:L1063)
- **global-mutation**: IMAGE_BACKUP = 'image_backup' (src/nova/objects/fields.py:L1064)
- **global-mutation**: UPDATING_PASSWORD = 'updating_password' (src/nova/objects/fields.py:L1065)
- **global-mutation**: RESIZE_PREP = 'resize_prep' (src/nova/objects/fields.py:L1066)
- **global-mutation**: RESIZE_MIGRATING = 'resize_migrating' (src/nova/objects/fields.py:L1067)
- **global-mutation**: RESIZE_MIGRATED = 'resize_migrated' (src/nova/objects/fields.py:L1068)
- **global-mutation**: RESIZE_FINISH = 'resize_finish' (src/nova/objects/fields.py:L1069)
- **global-mutation**: RESIZE_REVERTING = 'resize_reverting' (src/nova/objects/fields.py:L1070)
- **global-mutation**: RESIZE_CONFIRMING = 'resize_confirming' (src/nova/objects/fields.py:L1071)
- **global-mutation**: REBOOTING = 'rebooting' (src/nova/objects/fields.py:L1072)
- **global-mutation**: REBOOT_PENDING = 'reboot_pending' (src/nova/objects/fields.py:L1073)
- **global-mutation**: REBOOT_STARTED = 'reboot_started' (src/nova/objects/fields.py:L1074)
- **global-mutation**: REBOOTING_HARD = 'rebooting_hard' (src/nova/objects/fields.py:L1075)
- **global-mutation**: REBOOT_PENDING_HARD = 'reboot_pending_hard' (src/nova/objects/fields.py:L1076)
- **global-mutation**: REBOOT_STARTED_HARD = 'reboot_started_hard' (src/nova/objects/fields.py:L1077)
- **global-mutation**: PAUSING = 'pausing' (src/nova/objects/fields.py:L1078)
- **global-mutation**: UNPAUSING = 'unpausing' (src/nova/objects/fields.py:L1079)
- **global-mutation**: SUSPENDING = 'suspending' (src/nova/objects/fields.py:L1080)
- **global-mutation**: RESUMING = 'resuming' (src/nova/objects/fields.py:L1081)
- **global-mutation**: POWERING_OFF = 'powering-off' (src/nova/objects/fields.py:L1082)
- **global-mutation**: POWERING_ON = 'powering-on' (src/nova/objects/fields.py:L1083)
- **global-mutation**: RESCUING = 'rescuing' (src/nova/objects/fields.py:L1084)
- **global-mutation**: UNRESCUING = 'unrescuing' (src/nova/objects/fields.py:L1085)
- **global-mutation**: REBUILDING = 'rebuilding' (src/nova/objects/fields.py:L1086)
- **global-mutation**: REBUILD_BLOCK_DEVICE_MAPPING = "rebuild_block_device_mapping" (src/nova/objects/fields.py:L1087)
- **global-mutation**: REBUILD_SPAWNING = 'rebuild_spawning' (src/nova/objects/fields.py:L1088)
- **global-mutation**: MIGRATING = "migrating" (src/nova/objects/fields.py:L1089)
- **global-mutation**: DELETING = 'deleting' (src/nova/objects/fields.py:L1090)
- **global-mutation**: SOFT_DELETING = 'soft-deleting' (src/nova/objects/fields.py:L1091)
- **global-mutation**: RESTORING = 'restoring' (src/nova/objects/fields.py:L1092)
- **global-mutation**: SHELVING = 'shelving' (src/nova/objects/fields.py:L1093)
- **global-mutation**: SHELVING_IMAGE_PENDING_UPLOAD = 'shelving_image_pending_upload' (src/nova/objects/fields.py:L1094)
- **global-mutation**: SHELVING_IMAGE_UPLOADING = 'shelving_image_uploading' (src/nova/objects/fields.py:L1095)
- **global-mutation**: SHELVING_OFFLOADING = 'shelving_offloading' (src/nova/objects/fields.py:L1096)
- **global-mutation**: UNSHELVING = 'unshelving' (src/nova/objects/fields.py:L1097)
- **global-mutation**: ALL = (SCHEDULING, BLOCK_DEVICE_MAPPING, NETWORKING, SPAWNING, (src/nova/objects/fields.py:L1099)
- **global-mutation**: NOSTATE = 'pending' (src/nova/objects/fields.py:L1114)
- **global-mutation**: RUNNING = 'running' (src/nova/objects/fields.py:L1115)
- **global-mutation**: PAUSED = 'paused' (src/nova/objects/fields.py:L1116)
- **global-mutation**: SHUTDOWN = 'shutdown' (src/nova/objects/fields.py:L1117)
- **global-mutation**: CRASHED = 'crashed' (src/nova/objects/fields.py:L1118)
- **global-mutation**: SUSPENDED = 'suspended' (src/nova/objects/fields.py:L1119)
- **global-mutation**: ALL = ( (src/nova/objects/fields.py:L1122)
- **global-mutation**: PATTERN = '[a-f0-9]+:[a-f0-9]+' (src/nova/objects/fields.py:L1221)
- **global-mutation**: PATTERN = '[a-f0-9]+:[a-f0-9]+:[a-f0-9]+:[a-f0-9]+' (src/nova/objects/fields.py:L1225)
- **global-mutation**: PATTERN = '[0-1]:[0-1]' (src/nova/objects/fields.py:L1229)
- **global-mutation**: PATTERN = '(00[0-9]{2}00)|[1-9][0-9]+' (src/nova/objects/fields.py:L1233)
- **global-mutation**: AUTO_TYPE = USBAddress() (src/nova/objects/fields.py:L1237)
- **global-mutation**: AUTO_TYPE = SCSIAddress() (src/nova/objects/fields.py:L1241)
- **global-mutation**: AUTO_TYPE = IDEAddress() (src/nova/objects/fields.py:L1245)
- **global-mutation**: AUTO_TYPE = XenAddress() (src/nova/objects/fields.py:L1249)
- **global-mutation**: AUTO_TYPE = Architecture() (src/nova/objects/fields.py:L1253)
- **global-mutation**: AUTO_TYPE = BlockDeviceDestinationType() (src/nova/objects/fields.py:L1257)
- **global-mutation**: AUTO_TYPE = BlockDeviceSourceType() (src/nova/objects/fields.py:L1261)
- **global-mutation**: AUTO_TYPE = BlockDeviceType() (src/nova/objects/fields.py:L1265)
- **global-mutation**: AUTO_TYPE = BlockDeviceEncryptionFormatType() (src/nova/objects/fields.py:L1269)
- **global-mutation**: AUTO_TYPE = ConfigDrivePolicy() (src/nova/objects/fields.py:L1273)
- **global-mutation**: AUTO_TYPE = CPUAllocationPolicy() (src/nova/objects/fields.py:L1277)
- **global-mutation**: AUTO_TYPE = CPUThreadAllocationPolicy() (src/nova/objects/fields.py:L1281)
- **global-mutation**: AUTO_TYPE = CPUEmulatorThreadsPolicy() (src/nova/objects/fields.py:L1285)
- **global-mutation**: AUTO_TYPE = CPUMode() (src/nova/objects/fields.py:L1289)
- **global-mutation**: AUTO_TYPE = CPUMatch() (src/nova/objects/fields.py:L1293)
- **global-mutation**: AUTO_TYPE = CPUFeaturePolicy() (src/nova/objects/fields.py:L1297)
- **global-mutation**: AUTO_TYPE = DiskBus() (src/nova/objects/fields.py:L1301)
- **global-mutation**: AUTO_TYPE = DiskConfig() (src/nova/objects/fields.py:L1305)
- **global-mutation**: AUTO_TYPE = FirmwareType() (src/nova/objects/fields.py:L1309)
- **global-mutation**: AUTO_TYPE = HVType() (src/nova/objects/fields.py:L1313)
- **global-mutation**: AUTO_TYPE = ImageSignatureHashType() (src/nova/objects/fields.py:L1317)
- **global-mutation**: AUTO_TYPE = ImageSignatureKeyType() (src/nova/objects/fields.py:L1321)
- **global-mutation**: AUTO_TYPE = InputBus() (src/nova/objects/fields.py:L1325)
- **global-mutation**: AUTO_TYPE = MaxPhyAddrMode() (src/nova/objects/fields.py:L1329)
- **global-mutation**: AUTO_TYPE = MigrationType() (src/nova/objects/fields.py:L1333)
- **global-mutation**: AUTO_TYPE = OSType() (src/nova/objects/fields.py:L1337)
- **global-mutation**: AUTO_TYPE = RNGModel() (src/nova/objects/fields.py:L1341)
- **global-mutation**: AUTO_TYPE = ShareMappingStatus() (src/nova/objects/fields.py:L1345)
- **global-mutation**: AUTO_TYPE = ShareMappingProto() (src/nova/objects/fields.py:L1349)
- **global-mutation**: AUTO_TYPE = TPMModel() (src/nova/objects/fields.py:L1353)
- **global-mutation**: AUTO_TYPE = TPMVersion() (src/nova/objects/fields.py:L1357)
- **global-mutation**: AUTO_TYPE = MemEncryptionModel() (src/nova/objects/fields.py:L1361)
- **global-mutation**: AUTO_TYPE = SCSIModel() (src/nova/objects/fields.py:L1365)
- **global-mutation**: AUTO_TYPE = SecureBoot() (src/nova/objects/fields.py:L1369)
- **global-mutation**: AUTO_TYPE = VideoModel() (src/nova/objects/fields.py:L1373)
- **global-mutation**: AUTO_TYPE = VIFModel() (src/nova/objects/fields.py:L1377)
- **global-mutation**: AUTO_TYPE = VIOMMUModel() (src/nova/objects/fields.py:L1381)
- **global-mutation**: AUTO_TYPE = VMMode() (src/nova/objects/fields.py:L1385)
- **global-mutation**: AUTO_TYPE = WatchdogAction() (src/nova/objects/fields.py:L1389)
- **global-mutation**: AUTO_TYPE = MonitorMetricType() (src/nova/objects/fields.py:L1393)
- **global-mutation**: AUTO_TYPE = PciDeviceStatus() (src/nova/objects/fields.py:L1397)
- **global-mutation**: AUTO_TYPE = PciDeviceType() (src/nova/objects/fields.py:L1401)
- **global-mutation**: AUTO_TYPE = PCINUMAAffinityPolicy() (src/nova/objects/fields.py:L1405)
- **global-mutation**: AUTO_TYPE = DiskFormat() (src/nova/objects/fields.py:L1409)
- **global-mutation**: AUTO_TYPE = HypervisorDriver() (src/nova/objects/fields.py:L1413)
- **global-mutation**: AUTO_TYPE = PointerModelType() (src/nova/objects/fields.py:L1417)
- **global-mutation**: AUTO_TYPE = SoundModelType() (src/nova/objects/fields.py:L1421)
- **global-mutation**: AUTO_TYPE = USBControllerModelType() (src/nova/objects/fields.py:L1425)
- **global-mutation**: AUTO_TYPE = NotificationPriority() (src/nova/objects/fields.py:L1429)
- **global-mutation**: AUTO_TYPE = NotificationPhase() (src/nova/objects/fields.py:L1433)
- **global-mutation**: AUTO_TYPE = NotificationAction() (src/nova/objects/fields.py:L1437)
- **global-mutation**: AUTO_TYPE = NotificationSource() (src/nova/objects/fields.py:L1441)
- **global-mutation**: AUTO_TYPE = InstanceState() (src/nova/objects/fields.py:L1445)
- **global-mutation**: AUTO_TYPE = InstanceTaskState() (src/nova/objects/fields.py:L1449)
- **global-mutation**: AUTO_TYPE = InstancePowerState() (src/nova/objects/fields.py:L1453)
- **global-mutation**: AUTO_TYPE = NetworkModel() (src/nova/objects/fields.py:L1457)
- **global-mutation**: AUTO_TYPE = NetworkVIFModel() (src/nova/objects/fields.py:L1461)
- **global-mutation**: AUTO_TYPE = List(List(fields.String())) (src/nova/objects/fields.py:L1465)
- **global-mutation**: AUTO_TYPE = Dict(Set(fields.Integer())) (src/nova/objects/fields.py:L1469)

