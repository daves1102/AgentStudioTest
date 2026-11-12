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

import java.util.ArrayList;
import java.util.List;
import java.util.Optional;

/** Service layer for server objects. */
public class ServerService {

    private final List<String> items = new ArrayList<>();

    public void add(String id) {
        if (id == null || id.isEmpty()) {
            throw new IllegalArgumentException("id must not be empty");
        }
        items.add(id);
    }

    public Optional<String> find(String id) {
        return items.stream().filter(i -> i.equals(id)).findFirst();
    }

    public List<String> all() {
        return new ArrayList<>(items);
    }

    public boolean remove(String id) {
        return items.remove(id);
    }

    public int size() {
        return items.size();
    }
}
