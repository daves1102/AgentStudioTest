## Overview

Source file `src/aurora/aurora-portal/aurora_portal/telemetry_consumer.py` written in Python within the `aurora-portal` component . It contains 3 defined symbol(s), 1 dependency/dependencies.


Lines: total 22, code 13, comment 2, blank 7

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `TENANT_TOPIC` | constant | `TENANT_TOPIC` | — | — | — | L8 (src/aurora/aurora-portal/aurora_portal/telemetry_consumer.py:L8) |
| `consume` | function | `consume(bus)` | — | — | 2/3 | L11–L13 (src/aurora/aurora-portal/aurora_portal/telemetry_consumer.py:L11–L13) |
| `handle` | function | `handle(message)` | — | `{ "project": document.get("project"), "metric": document.get("metric"), "value": document.get("value"), }` (L18) | 1/7 | L16–L22 (src/aurora/aurora-portal/aurora_portal/telemetry_consumer.py:L16–L22) |

## Dependencies

- `yaml` (src/aurora/aurora-portal/aurora_portal/telemetry_consumer.py:L6)

## Security Surface

- **sink (deserialization)**: call to yaml.load: deserialization of data (src/aurora/aurora-portal/aurora_portal/telemetry_consumer.py:L17)
