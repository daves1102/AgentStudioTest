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

#define TAG_MAX 128

struct tag_entry {
    char name[64];
    unsigned int value;
    int active;
};

static struct tag_entry tag_table[TAG_MAX];
static int tag_count;

int tag_add(const char *name, unsigned int value)
{
    if (tag_count >= TAG_MAX || name == NULL) {
        return -1;
    }
    strncpy(tag_table[tag_count].name, name,
            sizeof(tag_table[tag_count].name) - 1);
    tag_table[tag_count].name[sizeof(tag_table[tag_count].name) - 1] = '\0';
    tag_table[tag_count].value = value;
    tag_table[tag_count].active = 1;
    tag_count++;
    return 0;
}

int tag_find(const char *name)
{
    int i;
    for (i = 0; i < tag_count; i++) {
        if (strcmp(tag_table[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}

unsigned int tag_total(void)
{
    int i;
    unsigned int total = 0;
    for (i = 0; i < tag_count; i++) {
        if (tag_table[i].active) {
            total += tag_table[i].value;
        }
    }
    return total;
}

void tag_clear(void)
{
    tag_count = 0;
    memset(tag_table, 0, sizeof(tag_table));
}
