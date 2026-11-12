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

#define EXPORT_MAX 128

struct export_entry {
    char name[64];
    unsigned int value;
    int active;
};

static struct export_entry export_table[EXPORT_MAX];
static int export_count;

int export_add(const char *name, unsigned int value)
{
    if (export_count >= EXPORT_MAX || name == NULL) {
        return -1;
    }
    strncpy(export_table[export_count].name, name,
            sizeof(export_table[export_count].name) - 1);
    export_table[export_count].name[sizeof(export_table[export_count].name) - 1] = '\0';
    export_table[export_count].value = value;
    export_table[export_count].active = 1;
    export_count++;
    return 0;
}

int export_find(const char *name)
{
    int i;
    for (i = 0; i < export_count; i++) {
        if (strcmp(export_table[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}

unsigned int export_total(void)
{
    int i;
    unsigned int total = 0;
    for (i = 0; i < export_count; i++) {
        if (export_table[i].active) {
            total += export_table[i].value;
        }
    }
    return total;
}

void export_clear(void)
{
    export_count = 0;
    memset(export_table, 0, sizeof(export_table));
}
