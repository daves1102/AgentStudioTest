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

#define USAGE_MAX 128

struct usage_entry {
    char name[64];
    unsigned int value;
    int active;
};

static struct usage_entry usage_table[USAGE_MAX];
static int usage_count;

int usage_add(const char *name, unsigned int value)
{
    if (usage_count >= USAGE_MAX || name == NULL) {
        return -1;
    }
    strncpy(usage_table[usage_count].name, name,
            sizeof(usage_table[usage_count].name) - 1);
    usage_table[usage_count].name[sizeof(usage_table[usage_count].name) - 1] = '\0';
    usage_table[usage_count].value = value;
    usage_table[usage_count].active = 1;
    usage_count++;
    return 0;
}

int usage_find(const char *name)
{
    int i;
    for (i = 0; i < usage_count; i++) {
        if (strcmp(usage_table[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}

unsigned int usage_total(void)
{
    int i;
    unsigned int total = 0;
    for (i = 0; i < usage_count; i++) {
        if (usage_table[i].active) {
            total += usage_table[i].value;
        }
    }
    return total;
}

void usage_clear(void)
{
    usage_count = 0;
    memset(usage_table, 0, sizeof(usage_table));
}
