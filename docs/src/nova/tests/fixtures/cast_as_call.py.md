# src/nova/tests/fixtures/cast_as_call.py

## Overview

This file implements the `cast_as_call` module, defining 1 class, 1 function, 3 methods, 1 staticmethod, 3 imports, 2 side effects.

Lines: total 69, code 42, comment 15, blank 12

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `CastAsCallFixture` | class | — | exported | not declared | — | `src/nova/tests/fixtures/cast_as_call.py:L21–L69` |
| `CastAsCallFixture.__init__` | method | (self, testcase) | public | not declared | 1/3 | `src/nova/tests/fixtures/cast_as_call.py:L33–L35` |
| `CastAsCallFixture._stub_out` | method | (testcase, obj=None) | private | not declared | 3/19 | `src/nova/tests/fixtures/cast_as_call.py:L38–L65` |
| `CastAsCallFixture._stub_out.prepare` | function | (self, *args, **kwargs) | public | `cctxt` (src/nova/tests/fixtures/cast_as_call.py:L51) | — | `src/nova/tests/fixtures/cast_as_call.py:L44–L51` |
| `CastAsCallFixture.setUp` | method | (self) | public | not declared | 1/3 | `src/nova/tests/fixtures/cast_as_call.py:L67–L69` |
| `CastAsCallFixture._stub_out` | staticmethod | — | private | not declared | — | `src/nova/tests/fixtures/cast_as_call.py:L37–L65` |

## Dependencies

- `import sys` (src/nova/tests/fixtures/cast_as_call.py:L15)
- `import fixtures` (src/nova/tests/fixtures/cast_as_call.py:L17)
- `import oslo_messaging as messaging` (src/nova/tests/fixtures/cast_as_call.py:L18)

## Side Effects

- **network**: testcase.stub_out('oslo_messaging.RPCClient.prepare', prepare) (src/nova/tests/fixtures/cast_as_call.py:L63)
- **network**: testcase.stub_out('oslo_messaging.RPCClient.cast', (src/nova/tests/fixtures/cast_as_call.py:L64)

