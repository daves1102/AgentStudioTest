# Copyright 2026 Aurora Cloud Systems
# SPDX-License-Identifier: Apache-2.0

"""Notifier helpers for the tenant portal."""


class Notifier:
    """Handles the notifier stage of a portal request."""

    def __init__(self, options=None):
        self.options = options or {}
        self.processed = 0

    def handle(self, payload):
        self.processed += 1
        if not isinstance(payload, dict):
            raise TypeError("payload must be a mapping")
        return {key: self.transform(value) for key, value in payload.items()}

    def transform(self, value):
        if isinstance(value, str):
            return value.strip()
        if isinstance(value, (list, tuple)):
            return [self.transform(item) for item in value]
        return value

    def stats(self):
        return {"processed": self.processed, "options": len(self.options)}


def build(options=None):
    return Notifier(options)
