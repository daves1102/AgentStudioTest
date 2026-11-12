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

#define VOLUME_MAX 128

struct volume_entry {
    char name[64];
    unsigned int value;
    int active;
};

static struct volume_entry volume_table[VOLUME_MAX];
static int volume_count;

int volume_add(const char *name, unsigned int value)
{
    if (volume_count >= VOLUME_MAX || name == NULL) {
        return -1;
    }
    strncpy(volume_table[volume_count].name, name,
            sizeof(volume_table[volume_count].name) - 1);
    volume_table[volume_count].name[sizeof(volume_table[volume_count].name) - 1] = '\0';
    volume_table[volume_count].value = value;
    volume_table[volume_count].active = 1;
    volume_count++;
    return 0;
}

int volume_find(const char *name)
{
    int i;
    for (i = 0; i < volume_count; i++) {
        if (strcmp(volume_table[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}

unsigned int volume_total(void)
{
    int i;
    unsigned int total = 0;
    for (i = 0; i < volume_count; i++) {
        if (volume_table[i].active) {
            total += volume_table[i].value;
        }
    }
    return total;
}

void volume_clear(void)
{
    volume_count = 0;
    memset(volume_table, 0, sizeof(volume_table));
}
