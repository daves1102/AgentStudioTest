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

#define OBJECT_MAX 128

struct object_entry {
    char name[64];
    unsigned int value;
    int active;
};

static struct object_entry object_table[OBJECT_MAX];
static int object_count;

int object_add(const char *name, unsigned int value)
{
    if (object_count >= OBJECT_MAX || name == NULL) {
        return -1;
    }
    strncpy(object_table[object_count].name, name,
            sizeof(object_table[object_count].name) - 1);
    object_table[object_count].name[sizeof(object_table[object_count].name) - 1] = '\0';
    object_table[object_count].value = value;
    object_table[object_count].active = 1;
    object_count++;
    return 0;
}

int object_find(const char *name)
{
    int i;
    for (i = 0; i < object_count; i++) {
        if (strcmp(object_table[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}

unsigned int object_total(void)
{
    int i;
    unsigned int total = 0;
    for (i = 0; i < object_count; i++) {
        if (object_table[i].active) {
            total += object_table[i].value;
        }
    }
    return total;
}

void object_clear(void)
{
    object_count = 0;
    memset(object_table, 0, sizeof(object_table));
}
