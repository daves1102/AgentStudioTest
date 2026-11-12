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

#define REGION_MAX 128

struct region_entry {
    char name[64];
    unsigned int value;
    int active;
};

static struct region_entry region_table[REGION_MAX];
static int region_count;

int region_add(const char *name, unsigned int value)
{
    if (region_count >= REGION_MAX || name == NULL) {
        return -1;
    }
    strncpy(region_table[region_count].name, name,
            sizeof(region_table[region_count].name) - 1);
    region_table[region_count].name[sizeof(region_table[region_count].name) - 1] = '\0';
    region_table[region_count].value = value;
    region_table[region_count].active = 1;
    region_count++;
    return 0;
}

int region_find(const char *name)
{
    int i;
    for (i = 0; i < region_count; i++) {
        if (strcmp(region_table[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}

unsigned int region_total(void)
{
    int i;
    unsigned int total = 0;
    for (i = 0; i < region_count; i++) {
        if (region_table[i].active) {
            total += region_table[i].value;
        }
    }
    return total;
}

void region_clear(void)
{
    region_count = 0;
    memset(region_table, 0, sizeof(region_table));
}
