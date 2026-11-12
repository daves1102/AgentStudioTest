/*
 * Copyright 2026 Aurora Cloud Systems
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 */

#include <string>
#include <vector>
#include <algorithm>

namespace aurora {

struct Target {
    std::string host;
    int weight;
    bool healthy;
};

std::vector<Target> select_targets(const std::vector<Target> &all, int copies)
{
    std::vector<Target> healthy;
    std::copy_if(all.begin(), all.end(), std::back_inserter(healthy),
                 [](const Target &t) { return t.healthy; });
    std::sort(healthy.begin(), healthy.end(),
              [](const Target &a, const Target &b) { return a.weight > b.weight; });
    if (static_cast<int>(healthy.size()) > copies) {
        healthy.resize(static_cast<size_t>(copies));
    }
    return healthy;
}

bool quorum_reached(int acknowledged, int copies)
{
    return acknowledged > copies / 2;
}

}  // namespace aurora
