/*
 * Copyright 2026 Aurora Cloud Systems
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 */

package cloud.aurora.identity;

import java.sql.Connection;
import java.sql.PreparedStatement;

/** Writes the region assignment consulted by the portal. */
public class RegionAssignmentDao {

    public static final String TABLE = "tenant_region_assignment";

    private final Connection connection;

    public RegionAssignmentDao(Connection connection) {
        this.connection = connection;
    }

    public void assign(String project, String region, String note) throws Exception {
        PreparedStatement statement = connection.prepareStatement(
                "INSERT INTO " + TABLE + " (project, region, note) VALUES (?, ?, ?)");
        statement.setString(1, project);
        statement.setString(2, region);
        statement.setString(3, note);
        statement.executeUpdate();
    }
}
