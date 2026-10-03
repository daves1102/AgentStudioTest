# Copyright 2026 Aurora Cloud Systems
# SPDX-License-Identifier: Apache-2.0

"""Reads the region assignment written by the identity service."""

TABLE = "tenant_region_assignment"


def region_for(cursor, project):
    cursor.execute(
        "SELECT region, note FROM %s WHERE project = '%s'" % (TABLE, project)
    )
    row = cursor.fetchone()
    return {"region": row[0], "note": row[1]} if row else None
