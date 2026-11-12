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

#define SHARE_MAX 128

struct share_entry {
    char name[64];
    unsigned int value;
    int active;
};

static struct share_entry share_table[SHARE_MAX];
static int share_count;

int share_add(const char *name, unsigned int value)
{
    if (share_count >= SHARE_MAX || name == NULL) {
        return -1;
    }
    strncpy(share_table[share_count].name, name,
            sizeof(share_table[share_count].name) - 1);
    share_table[share_count].name[sizeof(share_table[share_count].name) - 1] = '\0';
    share_table[share_count].value = value;
    share_table[share_count].active = 1;
    share_count++;
    return 0;
}

int share_find(const char *name)
{
    int i;
    for (i = 0; i < share_count; i++) {
        if (strcmp(share_table[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}

unsigned int share_total(void)
{
    int i;
    unsigned int total = 0;
    for (i = 0; i < share_count; i++) {
        if (share_table[i].active) {
            total += share_table[i].value;
        }
    }
    return total;
}

void share_clear(void)
{
    share_count = 0;
    memset(share_table, 0, sizeof(share_table));
}
