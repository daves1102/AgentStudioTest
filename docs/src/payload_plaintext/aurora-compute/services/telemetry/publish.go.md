# src/payload_plaintext/aurora-compute/services/telemetry/publish.go

## Overview

`publish.go` provides the producer side of the `aurora.telemetry.tenant` message-bus topic for the Aurora Compute telemetry service. The constant `TenantTopic` names the topic. The `Sample` struct holds the telemetry fields (Project, Metric, Value, Source) with YAML tags. `Encode` marshals a `Sample` to YAML bytes using `gopkg.in/yaml.v2`. `Publish` encodes a sample and hands the bytes to a caller-supplied `Bus.Send()` implementation. The `Bus` interface is defined in this file and requires only a `Send(topic, body)` method. This is the producer counterpart of the consumer in `aurora-portal/aurora_portal/telemetry_consumer.py`.

## Defined Symbols

| Name | Kind | Signature | Visibility | Lines |
|---|---|---|---|---|
| `TenantTopic` | constant | `string` | exported | `publish.go:L9` |
| `Sample` | struct | `Project string; Metric string; Value int64; Source string` (yaml tags) | exported | `publish.go:L11–L16` |
| `Encode` | function | `(s Sample) ([]byte, error)` | exported | `publish.go:L19–L21` |
| `Publish` | function | `(bus Bus, s Sample) error` | exported | `publish.go:L24–L30` |
| `Bus` | interface | `Send(topic string, body []byte) error` | exported | `publish.go:L33–L35` |

## Dependencies

- `gopkg.in/yaml.v2` — `yaml.Marshal` used in `Encode` (`publish.go:L6`)

## Side Effects

- **External I/O — message bus publish:** `Publish()` calls `bus.Send(TenantTopic, body)` on the caller-supplied `Bus` implementation, sending the YAML-encoded sample to topic `aurora.telemetry.tenant` (`publish.go:L29`)

## Security Surface

- **Bus topic publish:** `Publish()` serialises a `Sample` as YAML and sends it to `aurora.telemetry.tenant` — this is the producer side of the cross-component seam consumed by `aurora-portal/aurora_portal/telemetry_consumer.py` (`publish.go:L24–L30`)
