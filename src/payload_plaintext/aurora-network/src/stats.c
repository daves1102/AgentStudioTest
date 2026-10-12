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

struct counters {
    unsigned long rx;
    unsigned long tx;
    unsigned long drop;
};

static struct counters global;

void stats_rx(unsigned long n) { global.rx += n; }
void stats_tx(unsigned long n) { global.tx += n; }
void stats_drop(unsigned long n) { global.drop += n; }

void stats_render(char *out, size_t len)
{
    snprintf(out, len, "rx=%lu tx=%lu drop=%lu",
             global.rx, global.tx, global.drop);
}

void stats_reset(void)
{
    memset(&global, 0, sizeof(global));
}
