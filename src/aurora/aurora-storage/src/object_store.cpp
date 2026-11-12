/*
 * Copyright 2026 Aurora Cloud Systems
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 */

#include <fstream>
#include <string>
#include <map>
#include <mutex>

namespace aurora {

class ObjectStore {
public:
    explicit ObjectStore(std::string root) : root_(std::move(root)) {}

    bool put(const std::string &key, const std::string &body)
    {
        std::lock_guard<std::mutex> guard(lock_);
        std::ofstream out(path_for(key), std::ios::binary);
        if (!out) {
            return false;
        }
        out.write(body.data(), static_cast<std::streamsize>(body.size()));
        index_[key] = body.size();
        return true;
    }

    bool get(const std::string &key, std::string *body) const
    {
        std::ifstream in(path_for(key), std::ios::binary);
        if (!in) {
            return false;
        }
        body->assign((std::istreambuf_iterator<char>(in)),
                     std::istreambuf_iterator<char>());
        return true;
    }

    size_t count() const { return index_.size(); }

private:
    std::string path_for(const std::string &key) const
    {
        return root_ + "/" + key;
    }

    std::string root_;
    std::map<std::string, size_t> index_;
    mutable std::mutex lock_;
};

}  // namespace aurora
