# src/nova/tests/unit/objects/test_fields.py

## Overview

This file implements the `test_fields` module, defining 44 classs, 12 constants, 106 methods, 1 variable, 12 imports, 12 side effects, 2 security surface entries.

Lines: total 744, code 564, comment 17, blank 163

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `os_uname` | variable | — | exported | not declared | — | `src/nova/tests/unit/objects/test_fields.py:L30–L32` |
| `FakeFieldType` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_fields.py:L35–L43` |
| `FakeFieldType.coerce` | method | (self, obj, attr, value) | public | `'*%s*' % value` (src/nova/tests/unit/objects/test_fields.py:L37) | 1/2 | `src/nova/tests/unit/objects/test_fields.py:L36–L37` |
| `FakeFieldType.to_primitive` | method | (self, obj, attr, value) | public | `'!%s!' % value` (src/nova/tests/unit/objects/test_fields.py:L40) | 1/2 | `src/nova/tests/unit/objects/test_fields.py:L39–L40` |
| `FakeFieldType.from_primitive` | method | (self, obj, attr, value) | public | `value[1:-1]` (src/nova/tests/unit/objects/test_fields.py:L43) | 1/2 | `src/nova/tests/unit/objects/test_fields.py:L42–L43` |
| `FakeEnum` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_fields.py:L46–L55` |
| `FakeEnum.FROG` | constant | — | public | not declared | — | `src/nova/tests/unit/objects/test_fields.py:L47–L47` |
| `FakeEnum.PLATYPUS` | constant | — | public | not declared | — | `src/nova/tests/unit/objects/test_fields.py:L48–L48` |
| `FakeEnum.ALLIGATOR` | constant | — | public | not declared | — | `src/nova/tests/unit/objects/test_fields.py:L49–L49` |
| `FakeEnum.ALL` | constant | — | public | not declared | — | `src/nova/tests/unit/objects/test_fields.py:L51–L51` |
| `FakeEnum.__init__` | method | (self, **kwargs) | public | not declared | 1/3 | `src/nova/tests/unit/objects/test_fields.py:L53–L55` |
| `FakeEnumAlt` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_fields.py:L58–L67` |
| `FakeEnumAlt.FROG` | constant | — | public | not declared | — | `src/nova/tests/unit/objects/test_fields.py:L59–L59` |
| `FakeEnumAlt.PLATYPUS` | constant | — | public | not declared | — | `src/nova/tests/unit/objects/test_fields.py:L60–L60` |
| `FakeEnumAlt.AARDVARK` | constant | — | public | not declared | — | `src/nova/tests/unit/objects/test_fields.py:L61–L61` |
| `FakeEnumAlt.ALL` | constant | — | public | not declared | — | `src/nova/tests/unit/objects/test_fields.py:L63–L63` |
| `FakeEnumAlt.__init__` | method | (self, **kwargs) | public | not declared | 1/3 | `src/nova/tests/unit/objects/test_fields.py:L65–L67` |
| `FakeAddress` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_fields.py:L70–L71` |
| `FakeAddress.PATTERN` | constant | — | public | not declared | — | `src/nova/tests/unit/objects/test_fields.py:L71–L71` |
| `FakeAddressField` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_fields.py:L74–L75` |
| `FakeAddressField.AUTO_TYPE` | constant | — | public | not declared | — | `src/nova/tests/unit/objects/test_fields.py:L75–L75` |
| `FakeEnumField` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_fields.py:L78–L79` |
| `FakeEnumField.AUTO_TYPE` | constant | — | public | not declared | — | `src/nova/tests/unit/objects/test_fields.py:L79–L79` |
| `FakeEnumAltField` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_fields.py:L82–L83` |
| `FakeEnumAltField.AUTO_TYPE` | constant | — | public | not declared | — | `src/nova/tests/unit/objects/test_fields.py:L83–L83` |
| `TestField` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_fields.py:L86–L118` |
| `TestField.setUp` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_fields.py:L87–L93` |
| `TestField.test_coerce_good_values` | method | (self) | public | not declared | 2/3 | `src/nova/tests/unit/objects/test_fields.py:L95–L97` |
| `TestField.test_coerce_bad_values` | method | (self) | public | not declared | 2/4 | `src/nova/tests/unit/objects/test_fields.py:L99–L102` |
| `TestField.test_to_primitive` | method | (self) | public | not declared | 2/4 | `src/nova/tests/unit/objects/test_fields.py:L104–L107` |
| `TestField.test_from_primitive` | method | (self) | public | not declared | 2/6 | `src/nova/tests/unit/objects/test_fields.py:L109–L115` |
| `TestField.test_from_primitive.ObjectLikeThing` | class | — | public | not declared | — | `src/nova/tests/unit/objects/test_fields.py:L110–L111` |
| `TestField.test_stringify` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/objects/test_fields.py:L117–L118` |
| `TestString` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_fields.py:L121–L131` |
| `TestString.setUp` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_fields.py:L122–L128` |
| `TestString.test_stringify` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/objects/test_fields.py:L130–L131` |
| `TestBaseEnum` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_fields.py:L134–L156` |
| `TestBaseEnum.setUp` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/objects/test_fields.py:L135–L143` |
| `TestBaseEnum.test_stringify` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/objects/test_fields.py:L145–L146` |
| `TestBaseEnum.test_stringify_invalid` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/objects/test_fields.py:L148–L149` |
| `TestBaseEnum.test_fingerprint` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_fields.py:L151–L156` |
| `TestEnum` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_fields.py:L159–L188` |
| `TestEnum.setUp` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_fields.py:L160–L167` |
| `TestEnum.test_stringify` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/objects/test_fields.py:L169–L170` |
| `TestEnum.test_stringify_invalid` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/objects/test_fields.py:L172–L173` |
| `TestEnum.test_fingerprint` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_fields.py:L175–L180` |
| `TestEnum.test_without_valid_values` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/objects/test_fields.py:L182–L184` |
| `TestEnum.test_with_empty_values` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/objects/test_fields.py:L186–L188` |
| `TestArchitecture` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_fields.py:L191–L238` |
| `TestArchitecture.test_host` | method | (self, mock_uname) | public | not declared | 1/10 | `src/nova/tests/unit/objects/test_fields.py:L193–L203` |
| `TestArchitecture.test_valid_string` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/objects/test_fields.py:L205–L206` |
| `TestArchitecture.test_valid_constant` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/objects/test_fields.py:L208–L210` |
| `TestArchitecture.test_valid_bogus` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/objects/test_fields.py:L212–L213` |
| `TestArchitecture.test_canonicalize_i386` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/objects/test_fields.py:L215–L217` |
| `TestArchitecture.test_canonicalize_amd64` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/objects/test_fields.py:L219–L221` |
| `TestArchitecture.test_canonicalize_case` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/objects/test_fields.py:L223–L225` |
| `TestArchitecture.test_canonicalize_compat_xen1` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/objects/test_fields.py:L227–L229` |
| `TestArchitecture.test_canonicalize_compat_xen2` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/objects/test_fields.py:L231–L233` |
| `TestArchitecture.test_canonicalize_invalid` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_fields.py:L235–L238` |
| `TestHVType` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_fields.py:L241–L275` |
| `TestHVType.test_valid_string` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/objects/test_fields.py:L242–L243` |
| `TestHVType.test_valid_constant` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/objects/test_fields.py:L245–L246` |
| `TestHVType.test_valid_docker` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/objects/test_fields.py:L248–L249` |
| `TestHVType.test_valid_lxd` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/objects/test_fields.py:L251–L252` |
| `TestHVType.test_valid_vz` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/objects/test_fields.py:L254–L256` |
| `TestHVType.test_valid_bogus` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/objects/test_fields.py:L258–L259` |
| `TestHVType.test_canonicalize_none` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/objects/test_fields.py:L261–L262` |
| `TestHVType.test_canonicalize_case` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/objects/test_fields.py:L264–L266` |
| `TestHVType.test_canonicalize_xapi` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/objects/test_fields.py:L268–L270` |
| `TestHVType.test_canonicalize_invalid` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_fields.py:L272–L275` |
| `TestVMMode` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_fields.py:L278–L331` |
| `TestVMMode._fake_object` | method | (self, updates) | private | `fake_instance.fake_instance_obj(None, **updates)` (src/nova/tests/unit/objects/test_fields.py:L280) | 1/2 | `src/nova/tests/unit/objects/test_fields.py:L279–L280` |
| `TestVMMode.test_case` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_fields.py:L282–L285` |
| `TestVMMode.test_legacy_pv` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_fields.py:L287–L290` |
| `TestVMMode.test_legacy_hv` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_fields.py:L292–L295` |
| `TestVMMode.test_bogus` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_fields.py:L297–L301` |
| `TestVMMode.test_good` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_fields.py:L303–L306` |
| `TestVMMode.test_canonicalize_pv_compat` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/objects/test_fields.py:L308–L310` |
| `TestVMMode.test_canonicalize_hv_compat` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/objects/test_fields.py:L312–L314` |
| `TestVMMode.test_canonicalize_baremetal_compat` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/objects/test_fields.py:L316–L318` |
| `TestVMMode.test_canonicalize_hvm` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/objects/test_fields.py:L320–L322` |
| `TestVMMode.test_canonicalize_none` | method | (self) | public | not declared | 1/3 | `src/nova/tests/unit/objects/test_fields.py:L324–L326` |
| `TestVMMode.test_canonicalize_invalid` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_fields.py:L328–L331` |
| `TestInteger` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_fields.py:L334–L341` |
| `TestInteger.setUp` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_fields.py:L335–L341` |
| `TestNonNegativeInteger` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_fields.py:L344–L348` |
| `TestNonNegativeInteger.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_fields.py:L345–L348` |
| `TestFloat` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_fields.py:L351–L358` |
| `TestFloat.setUp` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_fields.py:L352–L358` |
| `TestNonNegativeFloat` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_fields.py:L361–L365` |
| `TestNonNegativeFloat.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_fields.py:L362–L365` |
| `TestBoolean` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_fields.py:L368–L376` |
| `TestBoolean.setUp` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_fields.py:L369–L376` |
| `TestDateTime` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_fields.py:L379–L395` |
| `TestDateTime.setUp` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/objects/test_fields.py:L380–L388` |
| `TestDateTime.test_stringify` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_fields.py:L390–L395` |
| `TestDict` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_fields.py:L398–L409` |
| `TestDict.setUp` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_fields.py:L399–L406` |
| `TestDict.test_stringify` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/objects/test_fields.py:L408–L409` |
| `TestDictOfStrings` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_fields.py:L412–L423` |
| `TestDictOfStrings.setUp` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_fields.py:L413–L420` |
| `TestDictOfStrings.test_stringify` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/objects/test_fields.py:L422–L423` |
| `TestDictOfIntegers` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_fields.py:L426–L438` |
| `TestDictOfIntegers.setUp` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/objects/test_fields.py:L427–L435` |
| `TestDictOfIntegers.test_stringify` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/objects/test_fields.py:L437–L438` |
| `TestDictOfStringsNone` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_fields.py:L441–L455` |
| `TestDictOfStringsNone.setUp` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/objects/test_fields.py:L442–L450` |
| `TestDictOfStringsNone.test_stringify` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_fields.py:L452–L455` |
| `TestListOfDictOfNullableStringsField` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_fields.py:L458–L478` |
| `TestListOfDictOfNullableStringsField.setUp` | method | (self) | public | not declared | 1/15 | `src/nova/tests/unit/objects/test_fields.py:L459–L473` |
| `TestListOfDictOfNullableStringsField.test_stringify` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/objects/test_fields.py:L475–L478` |
| `TestList` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_fields.py:L481–L491` |
| `TestList.setUp` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_fields.py:L482–L488` |
| `TestList.test_stringify` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/objects/test_fields.py:L490–L491` |
| `TestListOfStrings` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_fields.py:L494–L504` |
| `TestListOfStrings.setUp` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_fields.py:L495–L501` |
| `TestListOfStrings.test_stringify` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/objects/test_fields.py:L503–L504` |
| `TestSet` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_fields.py:L507–L518` |
| `TestSet.setUp` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_fields.py:L508–L515` |
| `TestSet.test_stringify` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/objects/test_fields.py:L517–L518` |
| `TestSetOfIntegers` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_fields.py:L521–L532` |
| `TestSetOfIntegers.setUp` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_fields.py:L522–L529` |
| `TestSetOfIntegers.test_stringify` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/objects/test_fields.py:L531–L532` |
| `TestListOfSetsOfIntegers` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_fields.py:L535–L546` |
| `TestListOfSetsOfIntegers.setUp` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_fields.py:L536–L543` |
| `TestListOfSetsOfIntegers.test_stringify` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/objects/test_fields.py:L545–L546` |
| `TestNetworkModel` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_fields.py:L549–L564` |
| `TestNetworkModel.setUp` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/objects/test_fields.py:L550–L557` |
| `TestNetworkModel.test_stringify` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/objects/test_fields.py:L559–L564` |
| `TestNetworkVIFModel` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_fields.py:L567–L576` |
| `TestNetworkVIFModel.setUp` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/objects/test_fields.py:L568–L576` |
| `TestNotificationPriority` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_fields.py:L579–L597` |
| `TestNotificationPriority.setUp` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/objects/test_fields.py:L580–L591` |
| `TestNotificationPriority.test_stringify` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/objects/test_fields.py:L593–L594` |
| `TestNotificationPriority.test_stringify_invalid` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/objects/test_fields.py:L596–L597` |
| `TestNotificationPhase` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_fields.py:L600–L615` |
| `TestNotificationPhase.setUp` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/objects/test_fields.py:L601–L609` |
| `TestNotificationPhase.test_stringify` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/objects/test_fields.py:L611–L612` |
| `TestNotificationPhase.test_stringify_invalid` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/objects/test_fields.py:L614–L615` |
| `TestNotificationAction` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_fields.py:L618–L631` |
| `TestNotificationAction.setUp` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_fields.py:L619–L625` |
| `TestNotificationAction.test_stringify` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/objects/test_fields.py:L627–L628` |
| `TestNotificationAction.test_stringify_invalid` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/objects/test_fields.py:L630–L631` |
| `TestUSBAddress` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_fields.py:L634–L646` |
| `TestUSBAddress.setUp` | method | (self) | public | not declared | 1/12 | `src/nova/tests/unit/objects/test_fields.py:L635–L646` |
| `TestSCSIAddress` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_fields.py:L649–L662` |
| `TestSCSIAddress.setUp` | method | (self) | public | not declared | 1/13 | `src/nova/tests/unit/objects/test_fields.py:L650–L662` |
| `TestIDEAddress` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_fields.py:L665–L676` |
| `TestIDEAddress.setUp` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/objects/test_fields.py:L666–L676` |
| `TestXenAddress` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_fields.py:L679–L690` |
| `TestXenAddress.setUp` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/objects/test_fields.py:L680–L690` |
| `TestMemEncryptionModel` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_fields.py:L693–L708` |
| `TestMemEncryptionModel.setUp` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/objects/test_fields.py:L694–L702` |
| `TestMemEncryptionModel.test_stringify` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/objects/test_fields.py:L704–L705` |
| `TestMemEncryptionModel.test_stringify_invalid` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/objects/test_fields.py:L707–L708` |
| `TestSecureBoot` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_fields.py:L711–L726` |
| `TestSecureBoot.setUp` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/objects/test_fields.py:L712–L720` |
| `TestSecureBoot.test_stringify` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/objects/test_fields.py:L722–L723` |
| `TestSecureBoot.test_stringify_invalid` | method | (self) | public | not declared | 1/2 | `src/nova/tests/unit/objects/test_fields.py:L725–L726` |
| `TestSchemaGeneration` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_fields.py:L729–L734` |
| `TestSchemaGeneration.test_address_base_get_schema` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/objects/test_fields.py:L730–L734` |
| `TestNotificationSource` | class | — | exported | not declared | — | `src/nova/tests/unit/objects/test_fields.py:L737–L744` |
| `TestNotificationSource.test_get_source_by_binary` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/objects/test_fields.py:L738–L744` |

## Dependencies

- `import collections` (src/nova/tests/unit/objects/test_fields.py:L15)
- `import datetime` (src/nova/tests/unit/objects/test_fields.py:L16)
- `import os` (src/nova/tests/unit/objects/test_fields.py:L17)
- `unittest`: imports `mock` (src/nova/tests/unit/objects/test_fields.py:L18)
- `oslo_serialization`: imports `jsonutils` (src/nova/tests/unit/objects/test_fields.py:L20)
- `oslo_versionedobjects`: imports `exception as ovo_exc` (src/nova/tests/unit/objects/test_fields.py:L21)
- `nova`: imports `exception` (src/nova/tests/unit/objects/test_fields.py:L23)
- `nova.network`: imports `model as network_model` (src/nova/tests/unit/objects/test_fields.py:L24)
- `nova.objects`: imports `fields` (src/nova/tests/unit/objects/test_fields.py:L25)
- `nova`: imports `test` (src/nova/tests/unit/objects/test_fields.py:L26)
- `nova.tests.unit`: imports `fake_instance` (src/nova/tests/unit/objects/test_fields.py:L27)
- `nova`: imports `utils` (src/nova/tests/unit/objects/test_fields.py:L28)

## Side Effects

- **global-mutation**: FROG = "frog" (src/nova/tests/unit/objects/test_fields.py:L47)
- **global-mutation**: PLATYPUS = "platypus" (src/nova/tests/unit/objects/test_fields.py:L48)
- **global-mutation**: ALLIGATOR = "alligator" (src/nova/tests/unit/objects/test_fields.py:L49)
- **global-mutation**: ALL = (FROG, PLATYPUS, ALLIGATOR) (src/nova/tests/unit/objects/test_fields.py:L51)
- **global-mutation**: FROG = "frog" (src/nova/tests/unit/objects/test_fields.py:L59)
- **global-mutation**: PLATYPUS = "platypus" (src/nova/tests/unit/objects/test_fields.py:L60)
- **global-mutation**: AARDVARK = "aardvark" (src/nova/tests/unit/objects/test_fields.py:L61)
- **global-mutation**: ALL = (FROG, PLATYPUS, AARDVARK) (src/nova/tests/unit/objects/test_fields.py:L63)
- **global-mutation**: PATTERN = '[a-z]+[0-9]+' (src/nova/tests/unit/objects/test_fields.py:L71)
- **global-mutation**: AUTO_TYPE = FakeAddress() (src/nova/tests/unit/objects/test_fields.py:L75)
- **global-mutation**: AUTO_TYPE = FakeEnum() (src/nova/tests/unit/objects/test_fields.py:L79)
- **global-mutation**: AUTO_TYPE = FakeEnumAlt() (src/nova/tests/unit/objects/test_fields.py:L83)

## Security Surface

- **sink** (`db-write`): self.coerce_good_values = [('update', 'update')] (src/nova/tests/unit/objects/test_fields.py:L622)
- **sink** (`db-write`): self.assertEqual("'update'", self.field.stringify('update')) (src/nova/tests/unit/objects/test_fields.py:L628)

