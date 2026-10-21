# src/nova/tests/unit/privsep/test_idmapshift.py

## Overview

This file implements the `test_idmapshift` module, defining 8 classs, 6 functions, 26 methods, 5 imports, 73 side effects, 65 security surface entries.

Lines: total 417, code 316, comment 16, blank 85

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `join_side_effect` | function | (root, *args) | exported | `path` (src/nova/tests/unit/privsep/test_idmapshift.py:L29) | 2/6 | `src/nova/tests/unit/privsep/test_idmapshift.py:L24–L29` |
| `FakeStat` | class | — | exported | not declared | — | `src/nova/tests/unit/privsep/test_idmapshift.py:L32–L35` |
| `FakeStat.__init__` | method | (self, uid, gid) | public | not declared | 1/3 | `src/nova/tests/unit/privsep/test_idmapshift.py:L33–L35` |
| `BaseTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/privsep/test_idmapshift.py:L38–L44` |
| `BaseTestCase.setUp` | method | (self) | public | not declared | 1/5 | `src/nova/tests/unit/privsep/test_idmapshift.py:L39–L44` |
| `FindTargetIDTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/privsep/test_idmapshift.py:L47–L101` |
| `FindTargetIDTestCase.test_find_target_id_range_1_first` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/privsep/test_idmapshift.py:L48–L51` |
| `FindTargetIDTestCase.test_find_target_id_inside_range_1` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/privsep/test_idmapshift.py:L53–L56` |
| `FindTargetIDTestCase.test_find_target_id_range_2_first` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/privsep/test_idmapshift.py:L58–L61` |
| `FindTargetIDTestCase.test_find_target_id_inside_range_2` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/privsep/test_idmapshift.py:L63–L66` |
| `FindTargetIDTestCase.test_find_target_id_outside_range` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/privsep/test_idmapshift.py:L68–L71` |
| `FindTargetIDTestCase.test_find_target_id_no_mappings` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/privsep/test_idmapshift.py:L73–L76` |
| `FindTargetIDTestCase.test_find_target_id_updates_memo` | method | (self) | public | not declared | 1/6 | `src/nova/tests/unit/privsep/test_idmapshift.py:L78–L83` |
| `FindTargetIDTestCase.test_find_target_guest_id_greater_than_count` | method | (self) | public | not declared | 1/11 | `src/nova/tests/unit/privsep/test_idmapshift.py:L85–L101` |
| `ShiftPathTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/privsep/test_idmapshift.py:L104–L113` |
| `ShiftPathTestCase.test_shift_path` | method | (self, mock_lstat, mock_lchown) | public | not declared | 1/7 | `src/nova/tests/unit/privsep/test_idmapshift.py:L107–L113` |
| `ShiftDirTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/privsep/test_idmapshift.py:L116–L138` |
| `ShiftDirTestCase.test_shift_dir` | method | (self, mock_walk, mock_join, mock_shift_path) | public | not declared | 3/16 | `src/nova/tests/unit/privsep/test_idmapshift.py:L120–L138` |
| `ConfirmPathTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/privsep/test_idmapshift.py:L141–L212` |
| `ConfirmPathTestCase.test_confirm_path` | method | (self, mock_lstat) | public | not declared | 1/8 | `src/nova/tests/unit/privsep/test_idmapshift.py:L143–L152` |
| `ConfirmPathTestCase.test_confirm_path_nobody` | method | (self, mock_lstat) | public | not declared | 1/8 | `src/nova/tests/unit/privsep/test_idmapshift.py:L155–L164` |
| `ConfirmPathTestCase.test_confirm_path_uid_mismatch` | method | (self, mock_lstat) | public | not declared | 1/8 | `src/nova/tests/unit/privsep/test_idmapshift.py:L167–L176` |
| `ConfirmPathTestCase.test_confirm_path_gid_mismatch` | method | (self, mock_lstat) | public | not declared | 1/8 | `src/nova/tests/unit/privsep/test_idmapshift.py:L179–L188` |
| `ConfirmPathTestCase.test_confirm_path_uid_nobody` | method | (self, mock_lstat) | public | not declared | 1/8 | `src/nova/tests/unit/privsep/test_idmapshift.py:L191–L200` |
| `ConfirmPathTestCase.test_confirm_path_gid_nobody` | method | (self, mock_lstat) | public | not declared | 1/8 | `src/nova/tests/unit/privsep/test_idmapshift.py:L203–L212` |
| `ConfirmDirTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/privsep/test_idmapshift.py:L215–L316` |
| `ConfirmDirTestCase.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/privsep/test_idmapshift.py:L216–L219` |
| `ConfirmDirTestCase.test_confirm_dir` | method | (self, mock_walk, mock_join, mock_confirm_path) | public | not declared | 3/16 | `src/nova/tests/unit/privsep/test_idmapshift.py:L224–L242` |
| `ConfirmDirTestCase.test_confirm_dir_short_circuit_root` | method | (self, mock_walk, mock_join, mock_confirm_path) | public | not declared | 1/11 | `src/nova/tests/unit/privsep/test_idmapshift.py:L247–L259` |
| `ConfirmDirTestCase.test_confirm_dir_short_circuit_file` | method | (self, mock_walk, mock_join, mock_confirm_path) | public | not declared | 1/15 | `src/nova/tests/unit/privsep/test_idmapshift.py:L264–L286` |
| `ConfirmDirTestCase.test_confirm_dir_short_circuit_file.confirm_path_side_effect` | function | (path, *args) | public | `False` (src/nova/tests/unit/privsep/test_idmapshift.py:L271); `True` (src/nova/tests/unit/privsep/test_idmapshift.py:L272) | — | `src/nova/tests/unit/privsep/test_idmapshift.py:L269–L272` |
| `ConfirmDirTestCase.test_confirm_dir_short_circuit_dir` | method | (self, mock_walk, mock_join, mock_confirm_path) | public | not declared | 3/18 | `src/nova/tests/unit/privsep/test_idmapshift.py:L291–L316` |
| `ConfirmDirTestCase.test_confirm_dir_short_circuit_dir.confirm_path_side_effect` | function | (path, *args) | public | `False` (src/nova/tests/unit/privsep/test_idmapshift.py:L298); `True` (src/nova/tests/unit/privsep/test_idmapshift.py:L299) | — | `src/nova/tests/unit/privsep/test_idmapshift.py:L296–L299` |
| `IntegrationTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/privsep/test_idmapshift.py:L319–L417` |
| `IntegrationTestCase.test_integrated_shift_dir` | method | (self, mock_walk, mock_join, mock_lstat, mock_lchown) | public | not declared | 1/21 | `src/nova/tests/unit/privsep/test_idmapshift.py:L324–L358` |
| `IntegrationTestCase.test_integrated_shift_dir.lstat` | function | (path) | public | `stats[path[-1]]` (src/nova/tests/unit/privsep/test_idmapshift.py:L340) | — | `src/nova/tests/unit/privsep/test_idmapshift.py:L330–L340` |
| `IntegrationTestCase.test_integrated_confirm_dir_shifted` | method | (self, mock_walk, mock_join, mock_lstat) | public | not declared | 1/11 | `src/nova/tests/unit/privsep/test_idmapshift.py:L363–L388` |
| `IntegrationTestCase.test_integrated_confirm_dir_shifted.lstat` | function | (path) | public | `stats[path[-1]]` (src/nova/tests/unit/privsep/test_idmapshift.py:L380) | — | `src/nova/tests/unit/privsep/test_idmapshift.py:L369–L380` |
| `IntegrationTestCase.test_integrated_confirm_dir_unshifted` | method | (self, mock_walk, mock_join, mock_lstat) | public | not declared | 1/11 | `src/nova/tests/unit/privsep/test_idmapshift.py:L393–L417` |
| `IntegrationTestCase.test_integrated_confirm_dir_unshifted.lstat` | function | (path) | public | `stats[path[-1]]` (src/nova/tests/unit/privsep/test_idmapshift.py:L409) | — | `src/nova/tests/unit/privsep/test_idmapshift.py:L399–L409` |

## Dependencies

- `io`: imports `StringIO` (src/nova/tests/unit/privsep/test_idmapshift.py:L15)
- `unittest`: imports `mock` (src/nova/tests/unit/privsep/test_idmapshift.py:L16)
- `import fixtures` (src/nova/tests/unit/privsep/test_idmapshift.py:L18)
- `import nova.privsep.idmapshift` (src/nova/tests/unit/privsep/test_idmapshift.py:L20)
- `nova`: imports `test` (src/nova/tests/unit/privsep/test_idmapshift.py:L21)

## Side Effects

- **process-spawn**: import nova.privsep.idmapshift (src/nova/tests/unit/privsep/test_idmapshift.py:L20)
- **process-spawn**: actual_target = nova.privsep.idmapshift.find_target_id( (src/nova/tests/unit/privsep/test_idmapshift.py:L49)
- **process-spawn**: 0, self.uid_maps, nova.privsep.idmapshift.NOBODY_ID, dict()) (src/nova/tests/unit/privsep/test_idmapshift.py:L50)
- **process-spawn**: actual_target = nova.privsep.idmapshift.find_target_id( (src/nova/tests/unit/privsep/test_idmapshift.py:L54)
- **process-spawn**: 2, self.uid_maps, nova.privsep.idmapshift.NOBODY_ID, dict()) (src/nova/tests/unit/privsep/test_idmapshift.py:L55)
- **process-spawn**: actual_target = nova.privsep.idmapshift.find_target_id( (src/nova/tests/unit/privsep/test_idmapshift.py:L59)
- **process-spawn**: 10, self.uid_maps, nova.privsep.idmapshift.NOBODY_ID, dict()) (src/nova/tests/unit/privsep/test_idmapshift.py:L60)
- **process-spawn**: actual_target = nova.privsep.idmapshift.find_target_id( (src/nova/tests/unit/privsep/test_idmapshift.py:L64)
- **process-spawn**: 100, self.uid_maps, nova.privsep.idmapshift.NOBODY_ID, dict()) (src/nova/tests/unit/privsep/test_idmapshift.py:L65)
- **process-spawn**: actual_target = nova.privsep.idmapshift.find_target_id( (src/nova/tests/unit/privsep/test_idmapshift.py:L69)
- **process-spawn**: 10000, self.uid_maps, nova.privsep.idmapshift.NOBODY_ID, dict()) (src/nova/tests/unit/privsep/test_idmapshift.py:L70)
- **process-spawn**: self.assertEqual(nova.privsep.idmapshift.NOBODY_ID, actual_target) (src/nova/tests/unit/privsep/test_idmapshift.py:L71)
- **process-spawn**: actual_target = nova.privsep.idmapshift.find_target_id( (src/nova/tests/unit/privsep/test_idmapshift.py:L74)
- **process-spawn**: 0, [], nova.privsep.idmapshift.NOBODY_ID, dict()) (src/nova/tests/unit/privsep/test_idmapshift.py:L75)
- **process-spawn**: self.assertEqual(nova.privsep.idmapshift.NOBODY_ID, actual_target) (src/nova/tests/unit/privsep/test_idmapshift.py:L76)
- **process-spawn**: nova.privsep.idmapshift.find_target_id( (src/nova/tests/unit/privsep/test_idmapshift.py:L80)
- **process-spawn**: 0, self.uid_maps, nova.privsep.idmapshift.NOBODY_ID, memo) (src/nova/tests/unit/privsep/test_idmapshift.py:L81)
- **process-spawn**: actual_target = nova.privsep.idmapshift.find_target_id( (src/nova/tests/unit/privsep/test_idmapshift.py:L89)
- **process-spawn**: 499, uid_maps, nova.privsep.idmapshift.NOBODY_ID, dict()) (src/nova/tests/unit/privsep/test_idmapshift.py:L90)
- **process-spawn**: self.assertEqual(nova.privsep.idmapshift.NOBODY_ID, actual_target) (src/nova/tests/unit/privsep/test_idmapshift.py:L91)
- **process-spawn**: actual_target = nova.privsep.idmapshift.find_target_id( (src/nova/tests/unit/privsep/test_idmapshift.py:L94)
- **process-spawn**: 501, uid_maps, nova.privsep.idmapshift.NOBODY_ID, dict()) (src/nova/tests/unit/privsep/test_idmapshift.py:L95)
- **process-spawn**: actual_target = nova.privsep.idmapshift.find_target_id( (src/nova/tests/unit/privsep/test_idmapshift.py:L99)
- **process-spawn**: 510, uid_maps, nova.privsep.idmapshift.NOBODY_ID, dict()) (src/nova/tests/unit/privsep/test_idmapshift.py:L100)
- **process-spawn**: self.assertEqual(nova.privsep.idmapshift.NOBODY_ID, actual_target) (src/nova/tests/unit/privsep/test_idmapshift.py:L101)
- **process-spawn**: nova.privsep.idmapshift.shift_path( (src/nova/tests/unit/privsep/test_idmapshift.py:L109)
- **process-spawn**: nova.privsep.idmapshift.NOBODY_ID, dict(), dict()) (src/nova/tests/unit/privsep/test_idmapshift.py:L111)
- **process-spawn**: @mock.patch('nova.privsep.idmapshift.shift_path') (src/nova/tests/unit/privsep/test_idmapshift.py:L117)
- **file-io**: @mock.patch('os.path.join') (src/nova/tests/unit/privsep/test_idmapshift.py:L118)
- **process-spawn**: nova.privsep.idmapshift.shift_dir('/', self.uid_maps, self.gid_maps, (src/nova/tests/unit/privsep/test_idmapshift.py:L124)
- **process-spawn**: nova.privsep.idmapshift.NOBODY_ID) (src/nova/tests/unit/privsep/test_idmapshift.py:L125)
- **process-spawn**: nova.privsep.idmapshift.NOBODY_ID) (src/nova/tests/unit/privsep/test_idmapshift.py:L133)
- **process-spawn**: result = nova.privsep.idmapshift.confirm_path( (src/nova/tests/unit/privsep/test_idmapshift.py:L148)
- **process-spawn**: result = nova.privsep.idmapshift.confirm_path( (src/nova/tests/unit/privsep/test_idmapshift.py:L160)
- **process-spawn**: result = nova.privsep.idmapshift.confirm_path( (src/nova/tests/unit/privsep/test_idmapshift.py:L172)
- **process-spawn**: result = nova.privsep.idmapshift.confirm_path( (src/nova/tests/unit/privsep/test_idmapshift.py:L184)
- **process-spawn**: result = nova.privsep.idmapshift.confirm_path( (src/nova/tests/unit/privsep/test_idmapshift.py:L196)
- **process-spawn**: result = nova.privsep.idmapshift.confirm_path( (src/nova/tests/unit/privsep/test_idmapshift.py:L208)
- **process-spawn**: self.uid_map_ranges = nova.privsep.idmapshift.get_ranges(self.uid_maps) (src/nova/tests/unit/privsep/test_idmapshift.py:L218)
- **process-spawn**: self.gid_map_ranges = nova.privsep.idmapshift.get_ranges(self.gid_maps) (src/nova/tests/unit/privsep/test_idmapshift.py:L219)
- **process-spawn**: @mock.patch('nova.privsep.idmapshift.confirm_path') (src/nova/tests/unit/privsep/test_idmapshift.py:L221)
- **file-io**: @mock.patch('os.path.join') (src/nova/tests/unit/privsep/test_idmapshift.py:L222)
- **process-spawn**: nova.privsep.idmapshift.confirm_dir('/', self.uid_maps, self.gid_maps, (src/nova/tests/unit/privsep/test_idmapshift.py:L229)
- **process-spawn**: nova.privsep.idmapshift.NOBODY_ID) (src/nova/tests/unit/privsep/test_idmapshift.py:L230)
- **process-spawn**: nova.privsep.idmapshift.NOBODY_ID) (src/nova/tests/unit/privsep/test_idmapshift.py:L238)
- **process-spawn**: @mock.patch('nova.privsep.idmapshift.confirm_path') (src/nova/tests/unit/privsep/test_idmapshift.py:L244)
- **file-io**: @mock.patch('os.path.join') (src/nova/tests/unit/privsep/test_idmapshift.py:L245)
- **process-spawn**: nova.privsep.idmapshift.confirm_dir('/', self.uid_maps, self.gid_maps, (src/nova/tests/unit/privsep/test_idmapshift.py:L253)
- **process-spawn**: nova.privsep.idmapshift.NOBODY_ID) (src/nova/tests/unit/privsep/test_idmapshift.py:L254)
- **process-spawn**: nova.privsep.idmapshift.NOBODY_ID) (src/nova/tests/unit/privsep/test_idmapshift.py:L257)
- **process-spawn**: @mock.patch('nova.privsep.idmapshift.confirm_path') (src/nova/tests/unit/privsep/test_idmapshift.py:L261)
- **file-io**: @mock.patch('os.path.join') (src/nova/tests/unit/privsep/test_idmapshift.py:L262)
- **process-spawn**: nova.privsep.idmapshift.confirm_dir('/', self.uid_maps, self.gid_maps, (src/nova/tests/unit/privsep/test_idmapshift.py:L276)
- **process-spawn**: nova.privsep.idmapshift.NOBODY_ID) (src/nova/tests/unit/privsep/test_idmapshift.py:L277)
- **process-spawn**: nova.privsep.idmapshift.NOBODY_ID) (src/nova/tests/unit/privsep/test_idmapshift.py:L283)
- **process-spawn**: @mock.patch('nova.privsep.idmapshift.confirm_path') (src/nova/tests/unit/privsep/test_idmapshift.py:L288)
- **file-io**: @mock.patch('os.path.join') (src/nova/tests/unit/privsep/test_idmapshift.py:L289)
- **process-spawn**: nova.privsep.idmapshift.confirm_dir('/', self.uid_maps, self.gid_maps, (src/nova/tests/unit/privsep/test_idmapshift.py:L303)
- **process-spawn**: nova.privsep.idmapshift.NOBODY_ID) (src/nova/tests/unit/privsep/test_idmapshift.py:L304)
- **process-spawn**: nova.privsep.idmapshift.NOBODY_ID) (src/nova/tests/unit/privsep/test_idmapshift.py:L312)
- **file-io**: @mock.patch('os.path.join') (src/nova/tests/unit/privsep/test_idmapshift.py:L322)
- **process-spawn**: nova.privsep.idmapshift.shift_dir('/tmp/test', self.uid_maps, (src/nova/tests/unit/privsep/test_idmapshift.py:L344)
- **process-spawn**: nova.privsep.idmapshift.NOBODY_ID) (src/nova/tests/unit/privsep/test_idmapshift.py:L346)
- **process-spawn**: mock.call('/tmp/test/c', nova.privsep.idmapshift.NOBODY_ID, (src/nova/tests/unit/privsep/test_idmapshift.py:L352)
- **process-spawn**: nova.privsep.idmapshift.NOBODY_ID), (src/nova/tests/unit/privsep/test_idmapshift.py:L353)
- **file-io**: @mock.patch('os.path.join') (src/nova/tests/unit/privsep/test_idmapshift.py:L361)
- **process-spawn**: 'c': FakeStat(nova.privsep.idmapshift.NOBODY_ID, (src/nova/tests/unit/privsep/test_idmapshift.py:L374)
- **process-spawn**: nova.privsep.idmapshift.NOBODY_ID), (src/nova/tests/unit/privsep/test_idmapshift.py:L375)
- **process-spawn**: result = nova.privsep.idmapshift.confirm_dir( (src/nova/tests/unit/privsep/test_idmapshift.py:L384)
- **process-spawn**: nova.privsep.idmapshift.NOBODY_ID) (src/nova/tests/unit/privsep/test_idmapshift.py:L386)
- **file-io**: @mock.patch('os.path.join') (src/nova/tests/unit/privsep/test_idmapshift.py:L391)
- **process-spawn**: result = nova.privsep.idmapshift.confirm_dir( (src/nova/tests/unit/privsep/test_idmapshift.py:L413)
- **process-spawn**: nova.privsep.idmapshift.NOBODY_ID) (src/nova/tests/unit/privsep/test_idmapshift.py:L415)

## Security Surface

- **privilege** (`privsep-entrypoint`): import nova.privsep.idmapshift (src/nova/tests/unit/privsep/test_idmapshift.py:L20)
- **privilege** (`privsep-entrypoint`): actual_target = nova.privsep.idmapshift.find_target_id( (src/nova/tests/unit/privsep/test_idmapshift.py:L49)
- **privilege** (`privsep-entrypoint`): 0, self.uid_maps, nova.privsep.idmapshift.NOBODY_ID, dict()) (src/nova/tests/unit/privsep/test_idmapshift.py:L50)
- **privilege** (`privsep-entrypoint`): actual_target = nova.privsep.idmapshift.find_target_id( (src/nova/tests/unit/privsep/test_idmapshift.py:L54)
- **privilege** (`privsep-entrypoint`): 2, self.uid_maps, nova.privsep.idmapshift.NOBODY_ID, dict()) (src/nova/tests/unit/privsep/test_idmapshift.py:L55)
- **privilege** (`privsep-entrypoint`): actual_target = nova.privsep.idmapshift.find_target_id( (src/nova/tests/unit/privsep/test_idmapshift.py:L59)
- **privilege** (`privsep-entrypoint`): 10, self.uid_maps, nova.privsep.idmapshift.NOBODY_ID, dict()) (src/nova/tests/unit/privsep/test_idmapshift.py:L60)
- **privilege** (`privsep-entrypoint`): actual_target = nova.privsep.idmapshift.find_target_id( (src/nova/tests/unit/privsep/test_idmapshift.py:L64)
- **privilege** (`privsep-entrypoint`): 100, self.uid_maps, nova.privsep.idmapshift.NOBODY_ID, dict()) (src/nova/tests/unit/privsep/test_idmapshift.py:L65)
- **privilege** (`privsep-entrypoint`): actual_target = nova.privsep.idmapshift.find_target_id( (src/nova/tests/unit/privsep/test_idmapshift.py:L69)
- **privilege** (`privsep-entrypoint`): 10000, self.uid_maps, nova.privsep.idmapshift.NOBODY_ID, dict()) (src/nova/tests/unit/privsep/test_idmapshift.py:L70)
- **privilege** (`privsep-entrypoint`): self.assertEqual(nova.privsep.idmapshift.NOBODY_ID, actual_target) (src/nova/tests/unit/privsep/test_idmapshift.py:L71)
- **privilege** (`privsep-entrypoint`): actual_target = nova.privsep.idmapshift.find_target_id( (src/nova/tests/unit/privsep/test_idmapshift.py:L74)
- **privilege** (`privsep-entrypoint`): 0, [], nova.privsep.idmapshift.NOBODY_ID, dict()) (src/nova/tests/unit/privsep/test_idmapshift.py:L75)
- **privilege** (`privsep-entrypoint`): self.assertEqual(nova.privsep.idmapshift.NOBODY_ID, actual_target) (src/nova/tests/unit/privsep/test_idmapshift.py:L76)
- **privilege** (`privsep-entrypoint`): nova.privsep.idmapshift.find_target_id( (src/nova/tests/unit/privsep/test_idmapshift.py:L80)
- **privilege** (`privsep-entrypoint`): 0, self.uid_maps, nova.privsep.idmapshift.NOBODY_ID, memo) (src/nova/tests/unit/privsep/test_idmapshift.py:L81)
- **privilege** (`privsep-entrypoint`): actual_target = nova.privsep.idmapshift.find_target_id( (src/nova/tests/unit/privsep/test_idmapshift.py:L89)
- **privilege** (`privsep-entrypoint`): 499, uid_maps, nova.privsep.idmapshift.NOBODY_ID, dict()) (src/nova/tests/unit/privsep/test_idmapshift.py:L90)
- **privilege** (`privsep-entrypoint`): self.assertEqual(nova.privsep.idmapshift.NOBODY_ID, actual_target) (src/nova/tests/unit/privsep/test_idmapshift.py:L91)
- **privilege** (`privsep-entrypoint`): actual_target = nova.privsep.idmapshift.find_target_id( (src/nova/tests/unit/privsep/test_idmapshift.py:L94)
- **privilege** (`privsep-entrypoint`): 501, uid_maps, nova.privsep.idmapshift.NOBODY_ID, dict()) (src/nova/tests/unit/privsep/test_idmapshift.py:L95)
- **privilege** (`privsep-entrypoint`): actual_target = nova.privsep.idmapshift.find_target_id( (src/nova/tests/unit/privsep/test_idmapshift.py:L99)
- **privilege** (`privsep-entrypoint`): 510, uid_maps, nova.privsep.idmapshift.NOBODY_ID, dict()) (src/nova/tests/unit/privsep/test_idmapshift.py:L100)
- **privilege** (`privsep-entrypoint`): self.assertEqual(nova.privsep.idmapshift.NOBODY_ID, actual_target) (src/nova/tests/unit/privsep/test_idmapshift.py:L101)
- **privilege** (`privsep-entrypoint`): nova.privsep.idmapshift.shift_path( (src/nova/tests/unit/privsep/test_idmapshift.py:L109)
- **privilege** (`privsep-entrypoint`): nova.privsep.idmapshift.NOBODY_ID, dict(), dict()) (src/nova/tests/unit/privsep/test_idmapshift.py:L111)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.idmapshift.shift_path') (src/nova/tests/unit/privsep/test_idmapshift.py:L117)
- **privilege** (`privsep-entrypoint`): nova.privsep.idmapshift.shift_dir('/', self.uid_maps, self.gid_maps, (src/nova/tests/unit/privsep/test_idmapshift.py:L124)
- **privilege** (`privsep-entrypoint`): nova.privsep.idmapshift.NOBODY_ID) (src/nova/tests/unit/privsep/test_idmapshift.py:L125)
- **privilege** (`privsep-entrypoint`): nova.privsep.idmapshift.NOBODY_ID) (src/nova/tests/unit/privsep/test_idmapshift.py:L133)
- **privilege** (`privsep-entrypoint`): result = nova.privsep.idmapshift.confirm_path( (src/nova/tests/unit/privsep/test_idmapshift.py:L148)
- **privilege** (`privsep-entrypoint`): result = nova.privsep.idmapshift.confirm_path( (src/nova/tests/unit/privsep/test_idmapshift.py:L160)
- **privilege** (`privsep-entrypoint`): result = nova.privsep.idmapshift.confirm_path( (src/nova/tests/unit/privsep/test_idmapshift.py:L172)
- **privilege** (`privsep-entrypoint`): result = nova.privsep.idmapshift.confirm_path( (src/nova/tests/unit/privsep/test_idmapshift.py:L184)
- **privilege** (`privsep-entrypoint`): result = nova.privsep.idmapshift.confirm_path( (src/nova/tests/unit/privsep/test_idmapshift.py:L196)
- **privilege** (`privsep-entrypoint`): result = nova.privsep.idmapshift.confirm_path( (src/nova/tests/unit/privsep/test_idmapshift.py:L208)
- **privilege** (`privsep-entrypoint`): self.uid_map_ranges = nova.privsep.idmapshift.get_ranges(self.uid_maps) (src/nova/tests/unit/privsep/test_idmapshift.py:L218)
- **privilege** (`privsep-entrypoint`): self.gid_map_ranges = nova.privsep.idmapshift.get_ranges(self.gid_maps) (src/nova/tests/unit/privsep/test_idmapshift.py:L219)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.idmapshift.confirm_path') (src/nova/tests/unit/privsep/test_idmapshift.py:L221)
- **privilege** (`privsep-entrypoint`): nova.privsep.idmapshift.confirm_dir('/', self.uid_maps, self.gid_maps, (src/nova/tests/unit/privsep/test_idmapshift.py:L229)
- **privilege** (`privsep-entrypoint`): nova.privsep.idmapshift.NOBODY_ID) (src/nova/tests/unit/privsep/test_idmapshift.py:L230)
- **privilege** (`privsep-entrypoint`): nova.privsep.idmapshift.NOBODY_ID) (src/nova/tests/unit/privsep/test_idmapshift.py:L238)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.idmapshift.confirm_path') (src/nova/tests/unit/privsep/test_idmapshift.py:L244)
- **privilege** (`privsep-entrypoint`): nova.privsep.idmapshift.confirm_dir('/', self.uid_maps, self.gid_maps, (src/nova/tests/unit/privsep/test_idmapshift.py:L253)
- **privilege** (`privsep-entrypoint`): nova.privsep.idmapshift.NOBODY_ID) (src/nova/tests/unit/privsep/test_idmapshift.py:L254)
- **privilege** (`privsep-entrypoint`): nova.privsep.idmapshift.NOBODY_ID) (src/nova/tests/unit/privsep/test_idmapshift.py:L257)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.idmapshift.confirm_path') (src/nova/tests/unit/privsep/test_idmapshift.py:L261)
- **privilege** (`privsep-entrypoint`): nova.privsep.idmapshift.confirm_dir('/', self.uid_maps, self.gid_maps, (src/nova/tests/unit/privsep/test_idmapshift.py:L276)
- **privilege** (`privsep-entrypoint`): nova.privsep.idmapshift.NOBODY_ID) (src/nova/tests/unit/privsep/test_idmapshift.py:L277)
- **privilege** (`privsep-entrypoint`): nova.privsep.idmapshift.NOBODY_ID) (src/nova/tests/unit/privsep/test_idmapshift.py:L283)
- **privilege** (`privsep-entrypoint`): @mock.patch('nova.privsep.idmapshift.confirm_path') (src/nova/tests/unit/privsep/test_idmapshift.py:L288)
- **privilege** (`privsep-entrypoint`): nova.privsep.idmapshift.confirm_dir('/', self.uid_maps, self.gid_maps, (src/nova/tests/unit/privsep/test_idmapshift.py:L303)
- **privilege** (`privsep-entrypoint`): nova.privsep.idmapshift.NOBODY_ID) (src/nova/tests/unit/privsep/test_idmapshift.py:L304)
- **privilege** (`privsep-entrypoint`): nova.privsep.idmapshift.NOBODY_ID) (src/nova/tests/unit/privsep/test_idmapshift.py:L312)
- **privilege** (`privsep-entrypoint`): nova.privsep.idmapshift.shift_dir('/tmp/test', self.uid_maps, (src/nova/tests/unit/privsep/test_idmapshift.py:L344)
- **privilege** (`privsep-entrypoint`): nova.privsep.idmapshift.NOBODY_ID) (src/nova/tests/unit/privsep/test_idmapshift.py:L346)
- **privilege** (`privsep-entrypoint`): mock.call('/tmp/test/c', nova.privsep.idmapshift.NOBODY_ID, (src/nova/tests/unit/privsep/test_idmapshift.py:L352)
- **privilege** (`privsep-entrypoint`): nova.privsep.idmapshift.NOBODY_ID), (src/nova/tests/unit/privsep/test_idmapshift.py:L353)
- **privilege** (`privsep-entrypoint`): 'c': FakeStat(nova.privsep.idmapshift.NOBODY_ID, (src/nova/tests/unit/privsep/test_idmapshift.py:L374)
- **privilege** (`privsep-entrypoint`): nova.privsep.idmapshift.NOBODY_ID), (src/nova/tests/unit/privsep/test_idmapshift.py:L375)
- **privilege** (`privsep-entrypoint`): result = nova.privsep.idmapshift.confirm_dir( (src/nova/tests/unit/privsep/test_idmapshift.py:L384)
- **privilege** (`privsep-entrypoint`): nova.privsep.idmapshift.NOBODY_ID) (src/nova/tests/unit/privsep/test_idmapshift.py:L386)
- **privilege** (`privsep-entrypoint`): result = nova.privsep.idmapshift.confirm_dir( (src/nova/tests/unit/privsep/test_idmapshift.py:L413)
- **privilege** (`privsep-entrypoint`): nova.privsep.idmapshift.NOBODY_ID) (src/nova/tests/unit/privsep/test_idmapshift.py:L415)

