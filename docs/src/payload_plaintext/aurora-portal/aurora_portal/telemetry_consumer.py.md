# src/payload_plaintext/aurora-portal/aurora_portal/telemetry_consumer.py

## Overview

`telemetry_consumer.py` subscribes to the `aurora.telemetry.tenant` message-bus topic and yields parsed telemetry documents to callers. The `consume()` generator iterates over messages delivered by a caller-supplied bus object, passing each message to `handle()`. `handle()` deserialises the message body with `yaml.load()` and extracts the `project`, `metric`, and `value` fields. The module depends on the third-party `yaml` library and the topic name is held in the module-level constant `TENANT_TOPIC`.

## Defined Symbols

| Name | Kind | Signature | Visibility | Lines |
|---|---|---|---|---|
| `TENANT_TOPIC` | module-level constant | `str` | module | `telemetry_consumer.py:L8` |
| `consume` | generator function | `(bus: Any) -> Generator` | module | `telemetry_consumer.py:L11–L13` |
| `handle` | function | `(message: Any) -> dict` | module | `telemetry_consumer.py:L16–L22` |

## Dependencies

- `yaml` — used for YAML deserialisation of message bodies in `handle` (`telemetry_consumer.py:L6`)

## Side Effects

- **External I/O — message bus subscription:** `consume()` calls `bus.subscribe(TENANT_TOPIC)` on the caller-supplied bus object, subscribing to topic `aurora.telemetry.tenant` (`telemetry_consumer.py:L12`)

## Security Surface

- **Insecure deserialization:** `handle()` calls `yaml.load(message.body)` without a `Loader` argument, allowing arbitrary Python object instantiation from the message content (`telemetry_consumer.py:L17`)
- **Input entry point — deserialization:** `message.body` from bus topic `aurora.telemetry.tenant` is deserialized with unsafe `yaml.load`; a crafted message body can execute arbitrary Python code (`telemetry_consumer.py:L17`)
