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

#define DEVICE_MAX 128

struct device_entry {
    char name[64];
    unsigned int value;
    int active;
};

static struct device_entry device_table[DEVICE_MAX];
static int device_count;

int device_add(const char *name, unsigned int value)
{
    if (device_count >= DEVICE_MAX || name == NULL) {
        return -1;
    }
    strncpy(device_table[device_count].name, name,
            sizeof(device_table[device_count].name) - 1);
    device_table[device_count].name[sizeof(device_table[device_count].name) - 1] = '\0';
    device_table[device_count].value = value;
    device_table[device_count].active = 1;
    device_count++;
    return 0;
}

int device_find(const char *name)
{
    int i;
    for (i = 0; i < device_count; i++) {
        if (strcmp(device_table[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}

unsigned int device_total(void)
{
    int i;
    unsigned int total = 0;
    for (i = 0; i < device_count; i++) {
        if (device_table[i].active) {
            total += device_table[i].value;
        }
    }
    return total;
}

void device_clear(void)
{
    device_count = 0;
    memset(device_table, 0, sizeof(device_table));
}
