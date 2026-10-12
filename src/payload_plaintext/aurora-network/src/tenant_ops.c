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

#define TENANT_MAX 128

struct tenant_entry {
    char name[64];
    unsigned int value;
    int active;
};

static struct tenant_entry tenant_table[TENANT_MAX];
static int tenant_count;

int tenant_add(const char *name, unsigned int value)
{
    if (tenant_count >= TENANT_MAX || name == NULL) {
        return -1;
    }
    strncpy(tenant_table[tenant_count].name, name,
            sizeof(tenant_table[tenant_count].name) - 1);
    tenant_table[tenant_count].name[sizeof(tenant_table[tenant_count].name) - 1] = '\0';
    tenant_table[tenant_count].value = value;
    tenant_table[tenant_count].active = 1;
    tenant_count++;
    return 0;
}

int tenant_find(const char *name)
{
    int i;
    for (i = 0; i < tenant_count; i++) {
        if (strcmp(tenant_table[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}

unsigned int tenant_total(void)
{
    int i;
    unsigned int total = 0;
    for (i = 0; i < tenant_count; i++) {
        if (tenant_table[i].active) {
            total += tenant_table[i].value;
        }
    }
    return total;
}

void tenant_clear(void)
{
    tenant_count = 0;
    memset(tenant_table, 0, sizeof(tenant_table));
}
