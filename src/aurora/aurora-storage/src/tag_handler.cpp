/*
 * Copyright 2026 Aurora Cloud Systems
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 */

#include <map>
#include <string>
#include <vector>

namespace aurora {
namespace tag {

class Handler {
public:
    void set(const std::string &key, const std::string &value)
    {
        entries_[key] = value;
    }

    bool get(const std::string &key, std::string *out) const
    {
        auto it = entries_.find(key);
        if (it == entries_.end()) {
            return false;
        }
        *out = it->second;
        return true;
    }

    std::vector<std::string> keys() const
    {
        std::vector<std::string> out;
        out.reserve(entries_.size());
        for (const auto &pair : entries_) {
            out.push_back(pair.first);
        }
        return out;
    }

    size_t size() const { return entries_.size(); }

private:
    std::map<std::string, std::string> entries_;
};

}  // namespace tag
}  // namespace aurora
