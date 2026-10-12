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

#define DOMAIN_MAX 128

struct domain_entry {
    char name[64];
    unsigned int value;
    int active;
};

static struct domain_entry domain_table[DOMAIN_MAX];
static int domain_count;

int domain_add(const char *name, unsigned int value)
{
    if (domain_count >= DOMAIN_MAX || name == NULL) {
        return -1;
    }
    strncpy(domain_table[domain_count].name, name,
            sizeof(domain_table[domain_count].name) - 1);
    domain_table[domain_count].name[sizeof(domain_table[domain_count].name) - 1] = '\0';
    domain_table[domain_count].value = value;
    domain_table[domain_count].active = 1;
    domain_count++;
    return 0;
}

int domain_find(const char *name)
{
    int i;
    for (i = 0; i < domain_count; i++) {
        if (strcmp(domain_table[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}

unsigned int domain_total(void)
{
    int i;
    unsigned int total = 0;
    for (i = 0; i < domain_count; i++) {
        if (domain_table[i].active) {
            total += domain_table[i].value;
        }
    }
    return total;
}

void domain_clear(void)
{
    domain_count = 0;
    memset(domain_table, 0, sizeof(domain_table));
}
