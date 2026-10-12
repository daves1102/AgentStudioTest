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

#define QUOTA_MAX 128

struct quota_entry {
    char name[64];
    unsigned int value;
    int active;
};

static struct quota_entry quota_table[QUOTA_MAX];
static int quota_count;

int quota_add(const char *name, unsigned int value)
{
    if (quota_count >= QUOTA_MAX || name == NULL) {
        return -1;
    }
    strncpy(quota_table[quota_count].name, name,
            sizeof(quota_table[quota_count].name) - 1);
    quota_table[quota_count].name[sizeof(quota_table[quota_count].name) - 1] = '\0';
    quota_table[quota_count].value = value;
    quota_table[quota_count].active = 1;
    quota_count++;
    return 0;
}

int quota_find(const char *name)
{
    int i;
    for (i = 0; i < quota_count; i++) {
        if (strcmp(quota_table[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}

unsigned int quota_total(void)
{
    int i;
    unsigned int total = 0;
    for (i = 0; i < quota_count; i++) {
        if (quota_table[i].active) {
            total += quota_table[i].value;
        }
    }
    return total;
}

void quota_clear(void)
{
    quota_count = 0;
    memset(quota_table, 0, sizeof(quota_table));
}
