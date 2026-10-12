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

#define ROUTE_MAX 128

struct route_entry {
    char name[64];
    unsigned int value;
    int active;
};

static struct route_entry route_table[ROUTE_MAX];
static int route_count;

int route_add(const char *name, unsigned int value)
{
    if (route_count >= ROUTE_MAX || name == NULL) {
        return -1;
    }
    strncpy(route_table[route_count].name, name,
            sizeof(route_table[route_count].name) - 1);
    route_table[route_count].name[sizeof(route_table[route_count].name) - 1] = '\0';
    route_table[route_count].value = value;
    route_table[route_count].active = 1;
    route_count++;
    return 0;
}

int route_find(const char *name)
{
    int i;
    for (i = 0; i < route_count; i++) {
        if (strcmp(route_table[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}

unsigned int route_total(void)
{
    int i;
    unsigned int total = 0;
    for (i = 0; i < route_count; i++) {
        if (route_table[i].active) {
            total += route_table[i].value;
        }
    }
    return total;
}

void route_clear(void)
{
    route_count = 0;
    memset(route_table, 0, sizeof(route_table));
}
