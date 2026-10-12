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

#define ZONE_MAX 128

struct zone_entry {
    char name[64];
    unsigned int value;
    int active;
};

static struct zone_entry zone_table[ZONE_MAX];
static int zone_count;

int zone_add(const char *name, unsigned int value)
{
    if (zone_count >= ZONE_MAX || name == NULL) {
        return -1;
    }
    strncpy(zone_table[zone_count].name, name,
            sizeof(zone_table[zone_count].name) - 1);
    zone_table[zone_count].name[sizeof(zone_table[zone_count].name) - 1] = '\0';
    zone_table[zone_count].value = value;
    zone_table[zone_count].active = 1;
    zone_count++;
    return 0;
}

int zone_find(const char *name)
{
    int i;
    for (i = 0; i < zone_count; i++) {
        if (strcmp(zone_table[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}

unsigned int zone_total(void)
{
    int i;
    unsigned int total = 0;
    for (i = 0; i < zone_count; i++) {
        if (zone_table[i].active) {
            total += zone_table[i].value;
        }
    }
    return total;
}

void zone_clear(void)
{
    zone_count = 0;
    memset(zone_table, 0, sizeof(zone_table));
}
