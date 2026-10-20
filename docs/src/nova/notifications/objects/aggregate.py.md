# src/nova/notifications/objects/aggregate.py

## Overview

This file implements the `aggregate` module, defining 4 classs, 6 constants, 4 fields, 2 methods, 3 imports, 6 side effects.

Lines: total 115, code 74, comment 22, blank 19

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `AggregatePayload` | class | — | exported | not declared | — | `src/nova/notifications/objects/aggregate.py:L19–L42` |
| `AggregatePayload.SCHEMA` | constant | — | public | not declared | — | `src/nova/notifications/objects/aggregate.py:L20–L26` |
| `AggregatePayload.VERSION` | constant | — | public | not declared | — | `src/nova/notifications/objects/aggregate.py:L29–L29` |
| `AggregatePayload.fields` | field | — | public | not declared | — | `src/nova/notifications/objects/aggregate.py:L30–L38` |
| `AggregatePayload.__init__` | method | (self, aggregate) | public | not declared | 1/3 | `src/nova/notifications/objects/aggregate.py:L40–L42` |
| `AggregateNotification` | class | — | exported | not declared | — | `src/nova/notifications/objects/aggregate.py:L60–L66` |
| `AggregateNotification.VERSION` | constant | — | public | not declared | — | `src/nova/notifications/objects/aggregate.py:L62–L62` |
| `AggregateNotification.fields` | field | — | public | not declared | — | `src/nova/notifications/objects/aggregate.py:L64–L66` |
| `AggregateCachePayload` | class | — | exported | not declared | — | `src/nova/notifications/objects/aggregate.py:L70–L104` |
| `AggregateCachePayload.SCHEMA` | constant | — | public | not declared | — | `src/nova/notifications/objects/aggregate.py:L71–L75` |
| `AggregateCachePayload.VERSION` | constant | — | public | not declared | — | `src/nova/notifications/objects/aggregate.py:L78–L78` |
| `AggregateCachePayload.fields` | field | — | public | not declared | — | `src/nova/notifications/objects/aggregate.py:L80–L97` |
| `AggregateCachePayload.__init__` | method | (self, aggregate, host, index, total) | public | not declared | 1/6 | `src/nova/notifications/objects/aggregate.py:L99–L104` |
| `AggregateCacheNotification` | class | — | exported | not declared | — | `src/nova/notifications/objects/aggregate.py:L109–L115` |
| `AggregateCacheNotification.VERSION` | constant | — | public | not declared | — | `src/nova/notifications/objects/aggregate.py:L111–L111` |
| `AggregateCacheNotification.fields` | field | — | public | not declared | — | `src/nova/notifications/objects/aggregate.py:L113–L115` |

## Dependencies

- `nova.notifications.objects`: imports `base` (src/nova/notifications/objects/aggregate.py:L13)
- `nova.objects`: imports `base as nova_base` (src/nova/notifications/objects/aggregate.py:L14)
- `nova.objects`: imports `fields` (src/nova/notifications/objects/aggregate.py:L15)

## Side Effects

- **global-mutation**: SCHEMA = { (src/nova/notifications/objects/aggregate.py:L20)
- **global-mutation**: VERSION = '1.1' (src/nova/notifications/objects/aggregate.py:L29)
- **global-mutation**: VERSION = '1.0' (src/nova/notifications/objects/aggregate.py:L62)
- **global-mutation**: SCHEMA = { (src/nova/notifications/objects/aggregate.py:L71)
- **global-mutation**: VERSION = '1.0' (src/nova/notifications/objects/aggregate.py:L78)
- **global-mutation**: VERSION = '1.0' (src/nova/notifications/objects/aggregate.py:L111)

