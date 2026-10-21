# src/nova/tests/unit/matchers.py

## Overview

This file implements the `matchers` module, defining 19 classs, 1 constant, 52 methods, 2 staticmethods, 6 imports, 1 side effect.

Lines: total 583, code 437, comment 35, blank 111

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `DictKeysMismatch` | class | — | exported | not declared | — | `src/nova/tests/unit/matchers.py:L28–L39` |
| `DictKeysMismatch.__init__` | method | (self, d1only, d2only) | public | not declared | 1/3 | `src/nova/tests/unit/matchers.py:L29–L31` |
| `DictKeysMismatch.describe` | method | (self) | public | `('Keys in d1 and not d2: %(d1only)s.' ' Keys in d2 and not d1: %(d2only)s' % {'d1only': self.d1only, 'd2only': self.d2only})` (src/nova/tests/unit/matchers.py:L34) | 1/4 | `src/nova/tests/unit/matchers.py:L33–L36` |
| `DictKeysMismatch.get_details` | method | (self) | public | `{}` (src/nova/tests/unit/matchers.py:L39) | 1/2 | `src/nova/tests/unit/matchers.py:L38–L39` |
| `DictMismatch` | class | — | exported | not declared | — | `src/nova/tests/unit/matchers.py:L42–L55` |
| `DictMismatch.__init__` | method | (self, key, d1_value, d2_value) | public | not declared | 1/4 | `src/nova/tests/unit/matchers.py:L43–L46` |
| `DictMismatch.describe` | method | (self) | public | `("Dictionaries do not match at %(key)s." " d1: %(d1_value)s d2: %(d2_value)s" % {'key': self.key, 'd1_value': self.d1_value, 'd2_value': self.d2_value})` (src/nova/tests/unit/matchers.py:L49) | 1/5 | `src/nova/tests/unit/matchers.py:L48–L52` |
| `DictMismatch.get_details` | method | (self) | public | `{}` (src/nova/tests/unit/matchers.py:L55) | 1/2 | `src/nova/tests/unit/matchers.py:L54–L55` |
| `DictMatches` | class | — | exported | not declared | — | `src/nova/tests/unit/matchers.py:L58–L112` |
| `DictMatches.__init__` | method | (self, d1, approx_equal=False, tolerance=0.001) | public | not declared | 1/4 | `src/nova/tests/unit/matchers.py:L60–L63` |
| `DictMatches.__str__` | method | (self) | public | `'DictMatches(%s)' % (pprint.pformat(self.d1))` (src/nova/tests/unit/matchers.py:L66) | 1/2 | `src/nova/tests/unit/matchers.py:L65–L66` |
| `DictMatches.match` | method | (self, d2) | public | `DictKeysMismatch(d1only, d2only)` (src/nova/tests/unit/matchers.py:L88); `did_match` (src/nova/tests/unit/matchers.py:L106); `DictMismatch(key, d1value, d2value)` (src/nova/tests/unit/matchers.py:L112) | 11/26 | `src/nova/tests/unit/matchers.py:L69–L112` |
| `ListLengthMismatch` | class | — | exported | not declared | — | `src/nova/tests/unit/matchers.py:L115–L125` |
| `ListLengthMismatch.__init__` | method | (self, len1, len2) | public | not declared | 1/3 | `src/nova/tests/unit/matchers.py:L116–L118` |
| `ListLengthMismatch.describe` | method | (self) | public | `('Length mismatch: len(L1)=%(len1)d != ' 'len(L2)=%(len2)d' % {'len1': self.len1, 'len2': self.len2})` (src/nova/tests/unit/matchers.py:L121) | 1/3 | `src/nova/tests/unit/matchers.py:L120–L122` |
| `ListLengthMismatch.get_details` | method | (self) | public | `{}` (src/nova/tests/unit/matchers.py:L125) | 1/2 | `src/nova/tests/unit/matchers.py:L124–L125` |
| `DictListMatches` | class | — | exported | not declared | — | `src/nova/tests/unit/matchers.py:L128–L153` |
| `DictListMatches.__init__` | method | (self, l1, approx_equal=False, tolerance=0.001) | public | not declared | 1/4 | `src/nova/tests/unit/matchers.py:L130–L133` |
| `DictListMatches.__str__` | method | (self) | public | `'DictListMatches(%s)' % (pprint.pformat(self.l1))` (src/nova/tests/unit/matchers.py:L136) | 1/2 | `src/nova/tests/unit/matchers.py:L135–L136` |
| `DictListMatches.match` | method | (self, l2) | public | `ListLengthMismatch(l1count, l2count)` (src/nova/tests/unit/matchers.py:L145); `did_match` (src/nova/tests/unit/matchers.py:L153) | 4/12 | `src/nova/tests/unit/matchers.py:L139–L153` |
| `SubDictMismatch` | class | — | exported | not declared | — | `src/nova/tests/unit/matchers.py:L156–L177` |
| `SubDictMismatch.__init__` | method | (self, key=None, sub_value=None, super_value=None, keys=False) | public | not declared | 1/9 | `src/nova/tests/unit/matchers.py:L157–L165` |
| `SubDictMismatch.describe` | method | (self) | public | `"Keys between dictionaries did not match"` (src/nova/tests/unit/matchers.py:L169); `("Dictionaries do not match at %s. d1: %s d2: %s" % (self.key, self.super_value, self.sub_value))` (src/nova/tests/unit/matchers.py:L171) | 2/8 | `src/nova/tests/unit/matchers.py:L167–L174` |
| `SubDictMismatch.get_details` | method | (self) | public | `{}` (src/nova/tests/unit/matchers.py:L177) | 1/2 | `src/nova/tests/unit/matchers.py:L176–L177` |
| `IsSubDictOf` | class | — | exported | not declared | — | `src/nova/tests/unit/matchers.py:L180–L203` |
| `IsSubDictOf.__init__` | method | (self, super_dict) | public | not declared | 1/2 | `src/nova/tests/unit/matchers.py:L182–L183` |
| `IsSubDictOf.__str__` | method | (self) | public | `'IsSubDictOf(%s)' % (self.super_dict)` (src/nova/tests/unit/matchers.py:L186) | 1/2 | `src/nova/tests/unit/matchers.py:L185–L186` |
| `IsSubDictOf.match` | method | (self, sub_dict) | public | `SubDictMismatch(keys=True)` (src/nova/tests/unit/matchers.py:L191); `did_match` (src/nova/tests/unit/matchers.py:L198); `SubDictMismatch(k, sub_value, super_value)` (src/nova/tests/unit/matchers.py:L203) | 7/15 | `src/nova/tests/unit/matchers.py:L188–L203` |
| `FunctionCallMatcher` | class | — | exported | not declared | — | `src/nova/tests/unit/matchers.py:L206–L218` |
| `FunctionCallMatcher.__init__` | method | (self, expected_func_calls) | public | not declared | 1/3 | `src/nova/tests/unit/matchers.py:L208–L210` |
| `FunctionCallMatcher.call` | method | (self, *args, **kwargs) | public | not declared | 1/3 | `src/nova/tests/unit/matchers.py:L212–L214` |
| `FunctionCallMatcher.match` | method | (self) | public | `dict_list_matcher.match(self.actual_func_calls)` (src/nova/tests/unit/matchers.py:L218) | 1/3 | `src/nova/tests/unit/matchers.py:L216–L218` |
| `XMLMismatch` | class | — | exported | not declared | — | `src/nova/tests/unit/matchers.py:L221–L236` |
| `XMLMismatch.__init__` | method | (self, state) | public | not declared | 1/4 | `src/nova/tests/unit/matchers.py:L224–L227` |
| `XMLMismatch.describe` | method | (self) | public | `"%(path)s: XML does not match" % {'path': self.path}` (src/nova/tests/unit/matchers.py:L230) | 1/2 | `src/nova/tests/unit/matchers.py:L229–L230` |
| `XMLMismatch.get_details` | method | (self) | public | `{ 'expected': content.text_content(self.expected), 'actual': content.text_content(self.actual), }` (src/nova/tests/unit/matchers.py:L233) | 1/5 | `src/nova/tests/unit/matchers.py:L232–L236` |
| `XMLDocInfoMismatch` | class | — | exported | not declared | — | `src/nova/tests/unit/matchers.py:L239–L257` |
| `XMLDocInfoMismatch.__init__` | method | (self, state, expected_doc_info, actual_doc_info) | public | not declared | 1/4 | `src/nova/tests/unit/matchers.py:L242–L245` |
| `XMLDocInfoMismatch.describe` | method | (self) | public | `("%(path)s: XML information mismatch(version, encoding) " "expected version %(expected_version)s, " "expected encoding %(expected_encoding)s; " "actual version %(actual_version)s, " "actual encoding %` (src/nova/tests/unit/matchers.py:L248) | 1/11 | `src/nova/tests/unit/matchers.py:L247–L257` |
| `XMLTagMismatch` | class | — | exported | not declared | — | `src/nova/tests/unit/matchers.py:L260–L275` |
| `XMLTagMismatch.__init__` | method | (self, state, idx, expected_tag, actual_tag) | public | not declared | 1/5 | `src/nova/tests/unit/matchers.py:L263–L267` |
| `XMLTagMismatch.describe` | method | (self) | public | `("%(path)s: XML tag mismatch at index %(idx)d: " "expected tag <%(expected_tag)s>; " "actual tag <%(actual_tag)s>" % {'path': self.path, 'idx': self.idx, 'expected_tag': self.expected_tag, 'actual_tag` (src/nova/tests/unit/matchers.py:L270) | 1/7 | `src/nova/tests/unit/matchers.py:L269–L275` |
| `XMLAttrKeysMismatch` | class | — | exported | not declared | — | `src/nova/tests/unit/matchers.py:L278–L291` |
| `XMLAttrKeysMismatch.__init__` | method | (self, state, expected_only, actual_only) | public | not declared | 1/4 | `src/nova/tests/unit/matchers.py:L281–L284` |
| `XMLAttrKeysMismatch.describe` | method | (self) | public | `("%(path)s: XML attributes mismatch: " "keys only in expected: %(expected_only)s; " "keys only in actual: %(actual_only)s" % {'path': self.path, 'expected_only': self.expected_only, 'actual_only': sel` (src/nova/tests/unit/matchers.py:L287) | 1/6 | `src/nova/tests/unit/matchers.py:L286–L291` |
| `XMLAttrValueMismatch` | class | — | exported | not declared | — | `src/nova/tests/unit/matchers.py:L294–L309` |
| `XMLAttrValueMismatch.__init__` | method | (self, state, key, expected_value, actual_value) | public | not declared | 1/5 | `src/nova/tests/unit/matchers.py:L297–L301` |
| `XMLAttrValueMismatch.describe` | method | (self) | public | `("%(path)s: XML attribute value mismatch: " "expected value of attribute %(key)s: %(expected_value)r; " "actual value: %(actual_value)r" % {'path': self.path, 'key': self.key, 'expected_value': self.e` (src/nova/tests/unit/matchers.py:L304) | 1/7 | `src/nova/tests/unit/matchers.py:L303–L309` |
| `XMLTextValueMismatch` | class | — | exported | not declared | — | `src/nova/tests/unit/matchers.py:L312–L325` |
| `XMLTextValueMismatch.__init__` | method | (self, state, expected_text, actual_text) | public | not declared | 1/4 | `src/nova/tests/unit/matchers.py:L315–L318` |
| `XMLTextValueMismatch.describe` | method | (self) | public | `("%(path)s: XML text value mismatch: " "expected text value: %(expected_text)r; " "actual value: %(actual_text)r" % {'path': self.path, 'expected_text': self.expected_text, 'actual_text': self.actual_` (src/nova/tests/unit/matchers.py:L321) | 1/6 | `src/nova/tests/unit/matchers.py:L320–L325` |
| `XMLUnexpectedChild` | class | — | exported | not declared | — | `src/nova/tests/unit/matchers.py:L328–L339` |
| `XMLUnexpectedChild.__init__` | method | (self, state, tag, idx) | public | not declared | 1/4 | `src/nova/tests/unit/matchers.py:L331–L334` |
| `XMLUnexpectedChild.describe` | method | (self) | public | `("%(path)s: XML unexpected child element <%(tag)s> " "present at index %(idx)d" % {'path': self.path, 'tag': self.tag, 'idx': self.idx})` (src/nova/tests/unit/matchers.py:L337) | 1/4 | `src/nova/tests/unit/matchers.py:L336–L339` |
| `XMLExpectedChild` | class | — | exported | not declared | — | `src/nova/tests/unit/matchers.py:L342–L363` |
| `XMLExpectedChild.__init__` | method | (self, state, tag, idx) | public | not declared | 1/4 | `src/nova/tests/unit/matchers.py:L349–L352` |
| `XMLExpectedChild.describe` | method | (self) | public | `s` (src/nova/tests/unit/matchers.py:L363) | 2/7 | `src/nova/tests/unit/matchers.py:L354–L363` |
| `XMLMatchState` | class | — | exported | not declared | — | `src/nova/tests/unit/matchers.py:L366–L401` |
| `XMLMatchState.__init__` | method | (self, expected, actual) | public | not declared | 1/4 | `src/nova/tests/unit/matchers.py:L373–L376` |
| `XMLMatchState.__str__` | method | (self) | public | `'/' + '/'.join(self.path)` (src/nova/tests/unit/matchers.py:L379) | 1/2 | `src/nova/tests/unit/matchers.py:L378–L379` |
| `XMLMatchState.node` | method | (self, tag, idx) | public | `new_state` (src/nova/tests/unit/matchers.py:L401) | 2/7 | `src/nova/tests/unit/matchers.py:L381–L401` |
| `XMLMatches` | class | — | exported | not declared | — | `src/nova/tests/unit/matchers.py:L404–L557` |
| `XMLMatches.SKIP_TAGS` | constant | — | public | not declared | — | `src/nova/tests/unit/matchers.py:L407–L407` |
| `XMLMatches._parse` | method | (text_or_bytes) | private | `etree.parse(io.BytesIO(text_or_bytes), parser)` (src/nova/tests/unit/matchers.py:L414) | 2/5 | `src/nova/tests/unit/matchers.py:L410–L414` |
| `XMLMatches.__init__` | method | (self, expected, allow_mixed_nodes=False, skip_empty_text_nodes=True, skip_values=('DONTCARE',)) | public | not declared | 1/7 | `src/nova/tests/unit/matchers.py:L416–L422` |
| `XMLMatches.__str__` | method | (self) | public | `'XMLMatches(%r)' % self.expected_xml` (src/nova/tests/unit/matchers.py:L425) | 1/2 | `src/nova/tests/unit/matchers.py:L424–L425` |
| `XMLMatches.match` | method | (self, actual_xml) | public | `XMLDocInfoMismatch(state, expected_doc_info, actual_doc_info)` (src/nova/tests/unit/matchers.py:L434); `XMLMismatch(state)` (src/nova/tests/unit/matchers.py:L440); `result` (src/nova/tests/unit/matchers.py:L442) | 4/14 | `src/nova/tests/unit/matchers.py:L427–L442` |
| `XMLMatches._get_xml_docinfo` | method | (xml_document) | private | `{'version': xml_document.docinfo.xml_version, 'encoding': xml_document.docinfo.encoding}` (src/nova/tests/unit/matchers.py:L446) | 1/3 | `src/nova/tests/unit/matchers.py:L445–L447` |
| `XMLMatches._compare_text_nodes` | method | (self, expected, actual, state) | private | `` (src/nova/tests/unit/matchers.py:L461); `XMLTextValueMismatch(state, expected_text, actual_text)` (src/nova/tests/unit/matchers.py:L467) | 13/18 | `src/nova/tests/unit/matchers.py:L449–L467` |
| `XMLMatches._compare_node` | method | (self, expected, actual, state, idx) | private | `XMLTagMismatch(state, idx, expected.tag, actual.tag)` (src/nova/tests/unit/matchers.py:L474); `XMLAttrKeysMismatch(new_state, expected_only, actual_only)` (src/nova/tests/unit/matchers.py:L484); `XMLAttrValueMismatch(new_state, key, expected_value, actual_value)` (src/nova/tests/unit/matchers.py:L495); `text_nodes_mismatch` (src/nova/tests/unit/matchers.py:L502); `result` (src/nova/tests/unit/matchers.py:L534); `result` (src/nova/tests/unit/matchers.py:L543); `XMLExpectedChild(new_state, expected_child.tag, expected_child_idx)` (src/nova/tests/unit/matchers.py:L548); `XMLUnexpectedChild(new_state, actual_child.tag, actual_child_idx)` (src/nova/tests/unit/matchers.py:L554); `True` (src/nova/tests/unit/matchers.py:L557) | 22/69 | `src/nova/tests/unit/matchers.py:L469–L557` |
| `EncodedByUTF8` | class | — | exported | not declared | — | `src/nova/tests/unit/matchers.py:L560–L583` |
| `EncodedByUTF8.match` | method | (self, obj) | public | `testtools.matchers.Mismatch( "%s is not encoded in UTF-8." % obj)` (src/nova/tests/unit/matchers.py:L567); `testtools.matchers.Mismatch( "%s cannot be encoded in UTF-8." % obj)` (src/nova/tests/unit/matchers.py:L573); `testtools.matchers.Mismatch(reason)` (src/nova/tests/unit/matchers.py:L583) | 6/23 | `src/nova/tests/unit/matchers.py:L561–L583` |
| `XMLMatches._parse` | staticmethod | — | private | not declared | — | `src/nova/tests/unit/matchers.py:L409–L414` |
| `XMLMatches._get_xml_docinfo` | staticmethod | — | private | not declared | — | `src/nova/tests/unit/matchers.py:L444–L447` |

## Dependencies

- `import copy` (src/nova/tests/unit/matchers.py:L19)
- `import io` (src/nova/tests/unit/matchers.py:L20)
- `import pprint` (src/nova/tests/unit/matchers.py:L21)
- `lxml`: imports `etree` (src/nova/tests/unit/matchers.py:L23)
- `testtools`: imports `content` (src/nova/tests/unit/matchers.py:L24)
- `import testtools.matchers` (src/nova/tests/unit/matchers.py:L25)

## Side Effects

- **global-mutation**: SKIP_TAGS = (etree.Comment, etree.ProcessingInstruction) (src/nova/tests/unit/matchers.py:L407)

