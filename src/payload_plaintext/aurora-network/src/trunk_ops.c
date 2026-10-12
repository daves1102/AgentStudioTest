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
#include <stdlib.h>
#include <string.h>

#define TRUNK_MAX 128

struct trunk_entry {
    char name[64];
    unsigned int value;
    int active;
};

static struct trunk_entry trunk_table[TRUNK_MAX];
static int trunk_count;

int trunk_add(const char *name, unsigned int value)
{
    if (trunk_count >= TRUNK_MAX || name == NULL) {
        return -1;
    }
    strncpy(trunk_table[trunk_count].name, name,
            sizeof(trunk_table[trunk_count].name) - 1);
    trunk_table[trunk_count].name[sizeof(trunk_table[trunk_count].name) - 1] = '\0';
    trunk_table[trunk_count].value = value;
    trunk_table[trunk_count].active = 1;
    trunk_count++;
    return 0;
}

int trunk_find(const char *name)
{
    int i;
    for (i = 0; i < trunk_count; i++) {
        if (strcmp(trunk_table[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}

unsigned int trunk_total(void)
{
    int i;
    unsigned int total = 0;
    for (i = 0; i < trunk_count; i++) {
        if (trunk_table[i].active) {
            total += trunk_table[i].value;
        }
    }
    return total;
}

void trunk_clear(void)
{
    trunk_count = 0;
    memset(trunk_table, 0, sizeof(trunk_table));
}
