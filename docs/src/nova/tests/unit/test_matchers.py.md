# src/nova/tests/unit/test_matchers.py

## Overview

This file implements the `test_matchers` module, defining 9 classs, 46 fields, 5 imports.

Lines: total 597, code 519, comment 13, blank 65

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `TestDictMatches` | class | — | exported | not declared | — | `src/nova/tests/unit/test_matchers.py:L23–L60` |
| `TestDictMatches.matches_dict` | field | — | public | not declared | — | `src/nova/tests/unit/test_matchers.py:L25–L26` |
| `TestDictMatches.matches_matcher` | field | — | public | not declared | — | `src/nova/tests/unit/test_matchers.py:L27–L29` |
| `TestDictMatches.matches_matches` | field | — | public | not declared | — | `src/nova/tests/unit/test_matchers.py:L31–L34` |
| `TestDictMatches.matches_mismatches` | field | — | public | not declared | — | `src/nova/tests/unit/test_matchers.py:L36–L44` |
| `TestDictMatches.str_examples` | field | — | public | not declared | — | `src/nova/tests/unit/test_matchers.py:L46–L49` |
| `TestDictMatches.describe_examples` | field | — | public | not declared | — | `src/nova/tests/unit/test_matchers.py:L51–L60` |
| `TestDictListMatches` | class | — | exported | not declared | — | `src/nova/tests/unit/test_matchers.py:L63–L108` |
| `TestDictListMatches.matches_matcher` | field | — | public | not declared | — | `src/nova/tests/unit/test_matchers.py:L65–L69` |
| `TestDictListMatches.matches_matches` | field | — | public | not declared | — | `src/nova/tests/unit/test_matchers.py:L71–L78` |
| `TestDictListMatches.matches_mismatches` | field | — | public | not declared | — | `src/nova/tests/unit/test_matchers.py:L80–L92` |
| `TestDictListMatches.str_examples` | field | — | public | not declared | — | `src/nova/tests/unit/test_matchers.py:L94–L99` |
| `TestDictListMatches.describe_examples` | field | — | public | not declared | — | `src/nova/tests/unit/test_matchers.py:L101–L108` |
| `TestIsSubDictOf` | class | — | exported | not declared | — | `src/nova/tests/unit/test_matchers.py:L111–L146` |
| `TestIsSubDictOf.matches_matcher` | field | — | public | not declared | — | `src/nova/tests/unit/test_matchers.py:L113–L116` |
| `TestIsSubDictOf.matches_matches` | field | — | public | not declared | — | `src/nova/tests/unit/test_matchers.py:L118–L121` |
| `TestIsSubDictOf.matches_mismatches` | field | — | public | not declared | — | `src/nova/tests/unit/test_matchers.py:L123–L129` |
| `TestIsSubDictOf.str_examples` | field | — | public | not declared | — | `src/nova/tests/unit/test_matchers.py:L131–L137` |
| `TestIsSubDictOf.describe_examples` | field | — | public | not declared | — | `src/nova/tests/unit/test_matchers.py:L139–L146` |
| `TestXMLMatches` | class | — | exported | not declared | — | `src/nova/tests/unit/test_matchers.py:L149–L408` |
| `TestXMLMatches.matches_matcher` | field | — | public | not declared | — | `src/nova/tests/unit/test_matchers.py:L151–L163` |
| `TestXMLMatches.matches_matches` | field | — | public | not declared | — | `src/nova/tests/unit/test_matchers.py:L165–L186` |
| `TestXMLMatches.matches_mismatches` | field | — | public | not declared | — | `src/nova/tests/unit/test_matchers.py:L188–L281` |
| `TestXMLMatches.str_examples` | field | — | public | not declared | — | `src/nova/tests/unit/test_matchers.py:L283–L297` |
| `TestXMLMatches.describe_examples` | field | — | public | not declared | — | `src/nova/tests/unit/test_matchers.py:L299–L408` |
| `TestXMLMatchesUnorderedNodes` | class | — | exported | not declared | — | `src/nova/tests/unit/test_matchers.py:L411–L469` |
| `TestXMLMatchesUnorderedNodes.matches_matcher` | field | — | public | not declared | — | `src/nova/tests/unit/test_matchers.py:L414–L426` |
| `TestXMLMatchesUnorderedNodes.matches_matches` | field | — | public | not declared | — | `src/nova/tests/unit/test_matchers.py:L428–L439` |
| `TestXMLMatchesUnorderedNodes.matches_mismatches` | field | — | public | not declared | — | `src/nova/tests/unit/test_matchers.py:L441–L452` |
| `TestXMLMatchesUnorderedNodes.describe_examples` | field | — | public | not declared | — | `src/nova/tests/unit/test_matchers.py:L454–L467` |
| `TestXMLMatchesUnorderedNodes.str_examples` | field | — | public | not declared | — | `src/nova/tests/unit/test_matchers.py:L469–L469` |
| `TestXMLMatchesOrderedMissingChildren` | class | — | exported | not declared | — | `src/nova/tests/unit/test_matchers.py:L472–L501` |
| `TestXMLMatchesOrderedMissingChildren.matches_matcher` | field | — | public | not declared | — | `src/nova/tests/unit/test_matchers.py:L475–L483` |
| `TestXMLMatchesOrderedMissingChildren.matches_matches` | field | — | public | not declared | — | `src/nova/tests/unit/test_matchers.py:L485–L485` |
| `TestXMLMatchesOrderedMissingChildren.matches_mismatches` | field | — | public | not declared | — | `src/nova/tests/unit/test_matchers.py:L487–L487` |
| `TestXMLMatchesOrderedMissingChildren.describe_examples` | field | — | public | not declared | — | `src/nova/tests/unit/test_matchers.py:L489–L499` |
| `TestXMLMatchesOrderedMissingChildren.str_examples` | field | — | public | not declared | — | `src/nova/tests/unit/test_matchers.py:L501–L501` |
| `TestXMLMatchesUnorderedMissingChildren` | class | — | exported | not declared | — | `src/nova/tests/unit/test_matchers.py:L504–L533` |
| `TestXMLMatchesUnorderedMissingChildren.matches_matcher` | field | — | public | not declared | — | `src/nova/tests/unit/test_matchers.py:L507–L515` |
| `TestXMLMatchesUnorderedMissingChildren.matches_matches` | field | — | public | not declared | — | `src/nova/tests/unit/test_matchers.py:L517–L517` |
| `TestXMLMatchesUnorderedMissingChildren.matches_mismatches` | field | — | public | not declared | — | `src/nova/tests/unit/test_matchers.py:L519–L519` |
| `TestXMLMatchesUnorderedMissingChildren.describe_examples` | field | — | public | not declared | — | `src/nova/tests/unit/test_matchers.py:L521–L531` |
| `TestXMLMatchesUnorderedMissingChildren.str_examples` | field | — | public | not declared | — | `src/nova/tests/unit/test_matchers.py:L533–L533` |
| `TestXMLMatchesOrderedExtraChildren` | class | — | exported | not declared | — | `src/nova/tests/unit/test_matchers.py:L536–L565` |
| `TestXMLMatchesOrderedExtraChildren.matches_matcher` | field | — | public | not declared | — | `src/nova/tests/unit/test_matchers.py:L539–L545` |
| `TestXMLMatchesOrderedExtraChildren.matches_matches` | field | — | public | not declared | — | `src/nova/tests/unit/test_matchers.py:L547–L547` |
| `TestXMLMatchesOrderedExtraChildren.matches_mismatches` | field | — | public | not declared | — | `src/nova/tests/unit/test_matchers.py:L549–L549` |
| `TestXMLMatchesOrderedExtraChildren.describe_examples` | field | — | public | not declared | — | `src/nova/tests/unit/test_matchers.py:L551–L563` |
| `TestXMLMatchesOrderedExtraChildren.str_examples` | field | — | public | not declared | — | `src/nova/tests/unit/test_matchers.py:L565–L565` |
| `TestXMLMatchesUnorderedExtraChildren` | class | — | exported | not declared | — | `src/nova/tests/unit/test_matchers.py:L568–L597` |
| `TestXMLMatchesUnorderedExtraChildren.matches_matcher` | field | — | public | not declared | — | `src/nova/tests/unit/test_matchers.py:L571–L577` |
| `TestXMLMatchesUnorderedExtraChildren.matches_matches` | field | — | public | not declared | — | `src/nova/tests/unit/test_matchers.py:L579–L579` |
| `TestXMLMatchesUnorderedExtraChildren.matches_mismatches` | field | — | public | not declared | — | `src/nova/tests/unit/test_matchers.py:L581–L581` |
| `TestXMLMatchesUnorderedExtraChildren.describe_examples` | field | — | public | not declared | — | `src/nova/tests/unit/test_matchers.py:L583–L595` |
| `TestXMLMatchesUnorderedExtraChildren.str_examples` | field | — | public | not declared | — | `src/nova/tests/unit/test_matchers.py:L597–L597` |

## Dependencies

- `collections`: imports `OrderedDict` (src/nova/tests/unit/test_matchers.py:L14)
- `import pprint` (src/nova/tests/unit/test_matchers.py:L15)
- `import testtools` (src/nova/tests/unit/test_matchers.py:L17)
- `testtools.tests.matchers`: imports `helpers` (src/nova/tests/unit/test_matchers.py:L18)
- `nova.tests.unit`: imports `matchers` (src/nova/tests/unit/test_matchers.py:L20)

