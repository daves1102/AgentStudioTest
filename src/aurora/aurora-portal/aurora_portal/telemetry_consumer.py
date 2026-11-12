# Copyright 2026 Aurora Cloud Systems
# SPDX-License-Identifier: Apache-2.0

"""Consumer for the telemetry documents shown in the tenant portal."""

import yaml

TENANT_TOPIC = "aurora.telemetry.tenant"


def consume(bus):
    for message in bus.subscribe(TENANT_TOPIC):
        yield handle(message)


def handle(message):
    document = yaml.load(message.body)
    return {
        "project": document.get("project"),
        "metric": document.get("metric"),
        "value": document.get("value"),
    }
