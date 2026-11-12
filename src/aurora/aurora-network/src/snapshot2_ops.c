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

#define SNAPSHOT2_MAX 128

struct snapshot2_entry {
    char name[64];
    unsigned int value;
    int active;
};

static struct snapshot2_entry snapshot2_table[SNAPSHOT2_MAX];
static int snapshot2_count;

int snapshot2_add(const char *name, unsigned int value)
{
    if (snapshot2_count >= SNAPSHOT2_MAX || name == NULL) {
        return -1;
    }
    strncpy(snapshot2_table[snapshot2_count].name, name,
            sizeof(snapshot2_table[snapshot2_count].name) - 1);
    snapshot2_table[snapshot2_count].name[sizeof(snapshot2_table[snapshot2_count].name) - 1] = '\0';
    snapshot2_table[snapshot2_count].value = value;
    snapshot2_table[snapshot2_count].active = 1;
    snapshot2_count++;
    return 0;
}

int snapshot2_find(const char *name)
{
    int i;
    for (i = 0; i < snapshot2_count; i++) {
        if (strcmp(snapshot2_table[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}

unsigned int snapshot2_total(void)
{
    int i;
    unsigned int total = 0;
    for (i = 0; i < snapshot2_count; i++) {
        if (snapshot2_table[i].active) {
            total += snapshot2_table[i].value;
        }
    }
    return total;
}

void snapshot2_clear(void)
{
    snapshot2_count = 0;
    memset(snapshot2_table, 0, sizeof(snapshot2_table));
}
