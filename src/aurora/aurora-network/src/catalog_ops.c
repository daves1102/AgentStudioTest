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

#define CATALOG_MAX 128

struct catalog_entry {
    char name[64];
    unsigned int value;
    int active;
};

static struct catalog_entry catalog_table[CATALOG_MAX];
static int catalog_count;

int catalog_add(const char *name, unsigned int value)
{
    if (catalog_count >= CATALOG_MAX || name == NULL) {
        return -1;
    }
    strncpy(catalog_table[catalog_count].name, name,
            sizeof(catalog_table[catalog_count].name) - 1);
    catalog_table[catalog_count].name[sizeof(catalog_table[catalog_count].name) - 1] = '\0';
    catalog_table[catalog_count].value = value;
    catalog_table[catalog_count].active = 1;
    catalog_count++;
    return 0;
}

int catalog_find(const char *name)
{
    int i;
    for (i = 0; i < catalog_count; i++) {
        if (strcmp(catalog_table[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}

unsigned int catalog_total(void)
{
    int i;
    unsigned int total = 0;
    for (i = 0; i < catalog_count; i++) {
        if (catalog_table[i].active) {
            total += catalog_table[i].value;
        }
    }
    return total;
}

void catalog_clear(void)
{
    catalog_count = 0;
    memset(catalog_table, 0, sizeof(catalog_table));
}
