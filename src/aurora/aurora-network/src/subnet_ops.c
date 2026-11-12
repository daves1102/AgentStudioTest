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

#define SUBNET_MAX 128

struct subnet_entry {
    char name[64];
    unsigned int value;
    int active;
};

static struct subnet_entry subnet_table[SUBNET_MAX];
static int subnet_count;

int subnet_add(const char *name, unsigned int value)
{
    if (subnet_count >= SUBNET_MAX || name == NULL) {
        return -1;
    }
    strncpy(subnet_table[subnet_count].name, name,
            sizeof(subnet_table[subnet_count].name) - 1);
    subnet_table[subnet_count].name[sizeof(subnet_table[subnet_count].name) - 1] = '\0';
    subnet_table[subnet_count].value = value;
    subnet_table[subnet_count].active = 1;
    subnet_count++;
    return 0;
}

int subnet_find(const char *name)
{
    int i;
    for (i = 0; i < subnet_count; i++) {
        if (strcmp(subnet_table[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}

unsigned int subnet_total(void)
{
    int i;
    unsigned int total = 0;
    for (i = 0; i < subnet_count; i++) {
        if (subnet_table[i].active) {
            total += subnet_table[i].value;
        }
    }
    return total;
}

void subnet_clear(void)
{
    subnet_count = 0;
    memset(subnet_table, 0, sizeof(subnet_table));
}
