## Overview

Source file `src/aurora/aurora-compute/services/telemetry/publish.go` written in Go belonging to package `telemetry` within the `aurora-compute` component . It contains 5 defined symbol(s), 1 dependency/dependencies.


Lines: total 35, code 22, comment 6, blank 7

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `TenantTopic` | constant | `TenantTopic` | — | — | — | L9 (src/aurora/aurora-compute/services/telemetry/publish.go:L9) |
| `Sample` | type | `Sample` | — | — | — | L11–L16 (src/aurora/aurora-compute/services/telemetry/publish.go:L11–L16) |
| `Encode` | function | `Encode(s: Sample) → ([]byte, error)` | — | `yaml.Marshal(s)` (L20) | 1/3 | L19–L21 (src/aurora/aurora-compute/services/telemetry/publish.go:L19–L21) |
| `Publish` | function | `Publish(bus: Bus, s: Sample) → error` | — | `err` (L27), `bus.Send(TenantTopic, body)` (L29) | 2/7 | L24–L30 (src/aurora/aurora-compute/services/telemetry/publish.go:L24–L30) |
| `Bus` | type | `Bus` | — | — | — | L33–L35 (src/aurora/aurora-compute/services/telemetry/publish.go:L33–L35) |

## Dependencies

- `gopkg.in/yaml.v2` (src/aurora/aurora-compute/services/telemetry/publish.go:L6)
