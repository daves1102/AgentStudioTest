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

#define HEALTH_MAX 128

struct health_entry {
    char name[64];
    unsigned int value;
    int active;
};

static struct health_entry health_table[HEALTH_MAX];
static int health_count;

int health_add(const char *name, unsigned int value)
{
    if (health_count >= HEALTH_MAX || name == NULL) {
        return -1;
    }
    strncpy(health_table[health_count].name, name,
            sizeof(health_table[health_count].name) - 1);
    health_table[health_count].name[sizeof(health_table[health_count].name) - 1] = '\0';
    health_table[health_count].value = value;
    health_table[health_count].active = 1;
    health_count++;
    return 0;
}

int health_find(const char *name)
{
    int i;
    for (i = 0; i < health_count; i++) {
        if (strcmp(health_table[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}

unsigned int health_total(void)
{
    int i;
    unsigned int total = 0;
    for (i = 0; i < health_count; i++) {
        if (health_table[i].active) {
            total += health_table[i].value;
        }
    }
    return total;
}

void health_clear(void)
{
    health_count = 0;
    memset(health_table, 0, sizeof(health_table));
}
