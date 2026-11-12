/*
 * Copyright 2026 Aurora Cloud Systems
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 */

#include <stdio.h>
#include <string.h>
#include "packet.h"

int main(int argc, char **argv)
{
    struct flow_key key;
    char out[128];

    memset(&key, 0, sizeof(key));
    if (argc > 1) {
        parse_tenant_tag(argv[1], &key);
    }
    dump_key(&key, out, sizeof(out));
    printf("%s\n", out);
    return 0;
}
