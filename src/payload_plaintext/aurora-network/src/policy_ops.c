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

#define POLICY_MAX 128

struct policy_entry {
    char name[64];
    unsigned int value;
    int active;
};

static struct policy_entry policy_table[POLICY_MAX];
static int policy_count;

int policy_add(const char *name, unsigned int value)
{
    if (policy_count >= POLICY_MAX || name == NULL) {
        return -1;
    }
    strncpy(policy_table[policy_count].name, name,
            sizeof(policy_table[policy_count].name) - 1);
    policy_table[policy_count].name[sizeof(policy_table[policy_count].name) - 1] = '\0';
    policy_table[policy_count].value = value;
    policy_table[policy_count].active = 1;
    policy_count++;
    return 0;
}

int policy_find(const char *name)
{
    int i;
    for (i = 0; i < policy_count; i++) {
        if (strcmp(policy_table[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}

unsigned int policy_total(void)
{
    int i;
    unsigned int total = 0;
    for (i = 0; i < policy_count; i++) {
        if (policy_table[i].active) {
            total += policy_table[i].value;
        }
    }
    return total;
}

void policy_clear(void)
{
    policy_count = 0;
    memset(policy_table, 0, sizeof(policy_table));
}
