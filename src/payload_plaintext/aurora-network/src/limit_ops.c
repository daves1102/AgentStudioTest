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

#define LIMIT_MAX 128

struct limit_entry {
    char name[64];
    unsigned int value;
    int active;
};

static struct limit_entry limit_table[LIMIT_MAX];
static int limit_count;

int limit_add(const char *name, unsigned int value)
{
    if (limit_count >= LIMIT_MAX || name == NULL) {
        return -1;
    }
    strncpy(limit_table[limit_count].name, name,
            sizeof(limit_table[limit_count].name) - 1);
    limit_table[limit_count].name[sizeof(limit_table[limit_count].name) - 1] = '\0';
    limit_table[limit_count].value = value;
    limit_table[limit_count].active = 1;
    limit_count++;
    return 0;
}

int limit_find(const char *name)
{
    int i;
    for (i = 0; i < limit_count; i++) {
        if (strcmp(limit_table[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}

unsigned int limit_total(void)
{
    int i;
    unsigned int total = 0;
    for (i = 0; i < limit_count; i++) {
        if (limit_table[i].active) {
            total += limit_table[i].value;
        }
    }
    return total;
}

void limit_clear(void)
{
    limit_count = 0;
    memset(limit_table, 0, sizeof(limit_table));
}
