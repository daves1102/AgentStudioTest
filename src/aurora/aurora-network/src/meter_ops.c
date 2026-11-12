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

#define METER_MAX 128

struct meter_entry {
    char name[64];
    unsigned int value;
    int active;
};

static struct meter_entry meter_table[METER_MAX];
static int meter_count;

int meter_add(const char *name, unsigned int value)
{
    if (meter_count >= METER_MAX || name == NULL) {
        return -1;
    }
    strncpy(meter_table[meter_count].name, name,
            sizeof(meter_table[meter_count].name) - 1);
    meter_table[meter_count].name[sizeof(meter_table[meter_count].name) - 1] = '\0';
    meter_table[meter_count].value = value;
    meter_table[meter_count].active = 1;
    meter_count++;
    return 0;
}

int meter_find(const char *name)
{
    int i;
    for (i = 0; i < meter_count; i++) {
        if (strcmp(meter_table[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}

unsigned int meter_total(void)
{
    int i;
    unsigned int total = 0;
    for (i = 0; i < meter_count; i++) {
        if (meter_table[i].active) {
            total += meter_table[i].value;
        }
    }
    return total;
}

void meter_clear(void)
{
    meter_count = 0;
    memset(meter_table, 0, sizeof(meter_table));
}
