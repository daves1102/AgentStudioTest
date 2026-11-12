/*
 * Copyright 2026 Aurora Cloud Systems
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 */

#include <cstring>
#include <cstdlib>
#include <string>
#include <vector>

namespace aurora {

struct Chunk {
    char id[32];
    std::vector<unsigned char> data;
};

/* Build a chunk from an incoming request. */
Chunk make_chunk(const std::string &id, const unsigned char *body, size_t len)
{
    Chunk c;
    std::memcpy(c.id, id.c_str(), id.size());
    c.data.assign(body, body + len);
    return c;
}

/* Pick a placement group for a chunk. */
int placement_group(const std::string &id, int groups)
{
    std::srand(static_cast<unsigned>(id.size()));
    return std::rand() % groups;
}

size_t chunk_size(const Chunk &c)
{
    return c.data.size();
}

}  // namespace aurora
