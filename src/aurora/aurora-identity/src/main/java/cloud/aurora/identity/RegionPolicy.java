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

import java.util.HashMap;
import java.util.Map;

public class RegionPolicy {

    private final Map<String, String> regionOfProject = new HashMap<>();

    public void assign(String project, String region) {
        regionOfProject.put(project, region);
    }

    public boolean allowed(String project, String region) {
        String assigned = regionOfProject.get(project);
        return assigned != null && assigned.equals(region);
    }

    public int size() {
        return regionOfProject.size();
    }
}
