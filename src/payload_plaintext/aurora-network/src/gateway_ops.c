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

#define GATEWAY_MAX 128

struct gateway_entry {
    char name[64];
    unsigned int value;
    int active;
};

static struct gateway_entry gateway_table[GATEWAY_MAX];
static int gateway_count;

int gateway_add(const char *name, unsigned int value)
{
    if (gateway_count >= GATEWAY_MAX || name == NULL) {
        return -1;
    }
    strncpy(gateway_table[gateway_count].name, name,
            sizeof(gateway_table[gateway_count].name) - 1);
    gateway_table[gateway_count].name[sizeof(gateway_table[gateway_count].name) - 1] = '\0';
    gateway_table[gateway_count].value = value;
    gateway_table[gateway_count].active = 1;
    gateway_count++;
    return 0;
}

int gateway_find(const char *name)
{
    int i;
    for (i = 0; i < gateway_count; i++) {
        if (strcmp(gateway_table[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}

unsigned int gateway_total(void)
{
    int i;
    unsigned int total = 0;
    for (i = 0; i < gateway_count; i++) {
        if (gateway_table[i].active) {
            total += gateway_table[i].value;
        }
    }
    return total;
}

void gateway_clear(void)
{
    gateway_count = 0;
    memset(gateway_table, 0, sizeof(gateway_table));
}
