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

#define INVENTORY_MAX 128

struct inventory_entry {
    char name[64];
    unsigned int value;
    int active;
};

static struct inventory_entry inventory_table[INVENTORY_MAX];
static int inventory_count;

int inventory_add(const char *name, unsigned int value)
{
    if (inventory_count >= INVENTORY_MAX || name == NULL) {
        return -1;
    }
    strncpy(inventory_table[inventory_count].name, name,
            sizeof(inventory_table[inventory_count].name) - 1);
    inventory_table[inventory_count].name[sizeof(inventory_table[inventory_count].name) - 1] = '\0';
    inventory_table[inventory_count].value = value;
    inventory_table[inventory_count].active = 1;
    inventory_count++;
    return 0;
}

int inventory_find(const char *name)
{
    int i;
    for (i = 0; i < inventory_count; i++) {
        if (strcmp(inventory_table[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}

unsigned int inventory_total(void)
{
    int i;
    unsigned int total = 0;
    for (i = 0; i < inventory_count; i++) {
        if (inventory_table[i].active) {
            total += inventory_table[i].value;
        }
    }
    return total;
}

void inventory_clear(void)
{
    inventory_count = 0;
    memset(inventory_table, 0, sizeof(inventory_table));
}
