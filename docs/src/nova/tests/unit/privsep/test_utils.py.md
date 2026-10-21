# src/nova/tests/unit/privsep/test_utils.py

## Overview

This file implements the `test_utils` module, defining 1 class, 7 methods, 6 imports, 10 side effects, 9 security surface entries.

Lines: total 136, code 83, comment 30, blank 23

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `SupportDirectIOTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/privsep/test_utils.py:L24–L136` |
| `SupportDirectIOTestCase.setUp` | method | (self) | public | not declared | 2/29 | `src/nova/tests/unit/privsep/test_utils.py:L25–L65` |
| `SupportDirectIOTestCase.test_supports_direct_io` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/privsep/test_utils.py:L67–L77` |
| `SupportDirectIOTestCase.test_supports_direct_io_with_exception_in_write` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/privsep/test_utils.py:L79–L91` |
| `SupportDirectIOTestCase.test_supports_direct_io_with_exception_in_open` | method | (self) | public | not declared | 1/9 | `src/nova/tests/unit/privsep/test_utils.py:L93–L103` |
| `SupportDirectIOTestCase.test_supports_direct_io_with_oserror_in_write` | method | (self) | public | not declared | 1/8 | `src/nova/tests/unit/privsep/test_utils.py:L105–L116` |
| `SupportDirectIOTestCase.test_supports_direct_io_with_oserror_in_open_einval` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/privsep/test_utils.py:L118–L126` |
| `SupportDirectIOTestCase.test_supports_direct_io_with_oserror_in_open_enoent` | method | (self) | public | not declared | 1/7 | `src/nova/tests/unit/privsep/test_utils.py:L128–L136` |

## Dependencies

- `import errno` (src/nova/tests/unit/privsep/test_utils.py:L15)
- `import fixtures` (src/nova/tests/unit/privsep/test_utils.py:L16)
- `import os` (src/nova/tests/unit/privsep/test_utils.py:L17)
- `unittest`: imports `mock` (src/nova/tests/unit/privsep/test_utils.py:L18)
- `import nova.privsep.utils` (src/nova/tests/unit/privsep/test_utils.py:L20)
- `nova`: imports `test` (src/nova/tests/unit/privsep/test_utils.py:L21)

## Side Effects

- **process-spawn**: import nova.privsep.utils (src/nova/tests/unit/privsep/test_utils.py:L20)
- **file-io**: self.test_path = os.path.join('.', '.directio.test.123') (src/nova/tests/unit/privsep/test_utils.py:L40)
- **process-spawn**: 'nova.privsep.utils.generate_random_string', return_value='123') (src/nova/tests/unit/privsep/test_utils.py:L48)
- **process-spawn**: "nova.privsep.utils.LOG", mock.Mock())) (src/nova/tests/unit/privsep/test_utils.py:L65)
- **process-spawn**: self.assertTrue(nova.privsep.utils.supports_direct_io('.')) (src/nova/tests/unit/privsep/test_utils.py:L70)
- **process-spawn**: self.assertRaises(ValueError, nova.privsep.utils.supports_direct_io, (src/nova/tests/unit/privsep/test_utils.py:L83)
- **process-spawn**: self.assertRaises(ValueError, nova.privsep.utils.supports_direct_io, (src/nova/tests/unit/privsep/test_utils.py:L97)
- **process-spawn**: self.assertFalse(nova.privsep.utils.supports_direct_io('.')) (src/nova/tests/unit/privsep/test_utils.py:L109)
- **process-spawn**: self.assertFalse(nova.privsep.utils.supports_direct_io('.')) (src/nova/tests/unit/privsep/test_utils.py:L121)
- **process-spawn**: self.assertFalse(nova.privsep.utils.supports_direct_io('.')) (src/nova/tests/unit/privsep/test_utils.py:L131)

## Security Surface

- **privilege** (`privsep-entrypoint`): import nova.privsep.utils (src/nova/tests/unit/privsep/test_utils.py:L20)
- **privilege** (`privsep-entrypoint`): 'nova.privsep.utils.generate_random_string', return_value='123') (src/nova/tests/unit/privsep/test_utils.py:L48)
- **privilege** (`privsep-entrypoint`): "nova.privsep.utils.LOG", mock.Mock())) (src/nova/tests/unit/privsep/test_utils.py:L65)
- **privilege** (`privsep-entrypoint`): self.assertTrue(nova.privsep.utils.supports_direct_io('.')) (src/nova/tests/unit/privsep/test_utils.py:L70)
- **privilege** (`privsep-entrypoint`): self.assertRaises(ValueError, nova.privsep.utils.supports_direct_io, (src/nova/tests/unit/privsep/test_utils.py:L83)
- **privilege** (`privsep-entrypoint`): self.assertRaises(ValueError, nova.privsep.utils.supports_direct_io, (src/nova/tests/unit/privsep/test_utils.py:L97)
- **privilege** (`privsep-entrypoint`): self.assertFalse(nova.privsep.utils.supports_direct_io('.')) (src/nova/tests/unit/privsep/test_utils.py:L109)
- **privilege** (`privsep-entrypoint`): self.assertFalse(nova.privsep.utils.supports_direct_io('.')) (src/nova/tests/unit/privsep/test_utils.py:L121)
- **privilege** (`privsep-entrypoint`): self.assertFalse(nova.privsep.utils.supports_direct_io('.')) (src/nova/tests/unit/privsep/test_utils.py:L131)

