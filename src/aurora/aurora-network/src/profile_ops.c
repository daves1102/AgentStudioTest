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

#define PROFILE_MAX 128

struct profile_entry {
    char name[64];
    unsigned int value;
    int active;
};

static struct profile_entry profile_table[PROFILE_MAX];
static int profile_count;

int profile_add(const char *name, unsigned int value)
{
    if (profile_count >= PROFILE_MAX || name == NULL) {
        return -1;
    }
    strncpy(profile_table[profile_count].name, name,
            sizeof(profile_table[profile_count].name) - 1);
    profile_table[profile_count].name[sizeof(profile_table[profile_count].name) - 1] = '\0';
    profile_table[profile_count].value = value;
    profile_table[profile_count].active = 1;
    profile_count++;
    return 0;
}

int profile_find(const char *name)
{
    int i;
    for (i = 0; i < profile_count; i++) {
        if (strcmp(profile_table[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}

unsigned int profile_total(void)
{
    int i;
    unsigned int total = 0;
    for (i = 0; i < profile_count; i++) {
        if (profile_table[i].active) {
            total += profile_table[i].value;
        }
    }
    return total;
}

void profile_clear(void)
{
    profile_count = 0;
    memset(profile_table, 0, sizeof(profile_table));
}
