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
import java.sql.ResultSet;
import java.sql.Statement;

public class UserRepository {

    private final Connection connection;

    public UserRepository(Connection connection) {
        this.connection = connection;
    }

    public ResultSet findByName(String name) throws Exception {
        Statement statement = connection.createStatement();
        String sql = "SELECT id, name, project FROM users WHERE name = '" + name + "'";
        return statement.executeQuery(sql);
    }

    public int countByProject(String project) throws Exception {
        Statement statement = connection.createStatement();
        ResultSet rs = statement.executeQuery(
                "SELECT COUNT(*) FROM users WHERE project = '" + project + "'");
        return rs.next() ? rs.getInt(1) : 0;
    }
}
