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

#define NETWORK_MAX 128

struct network_entry {
    char name[64];
    unsigned int value;
    int active;
};

static struct network_entry network_table[NETWORK_MAX];
static int network_count;

int network_add(const char *name, unsigned int value)
{
    if (network_count >= NETWORK_MAX || name == NULL) {
        return -1;
    }
    strncpy(network_table[network_count].name, name,
            sizeof(network_table[network_count].name) - 1);
    network_table[network_count].name[sizeof(network_table[network_count].name) - 1] = '\0';
    network_table[network_count].value = value;
    network_table[network_count].active = 1;
    network_count++;
    return 0;
}

int network_find(const char *name)
{
    int i;
    for (i = 0; i < network_count; i++) {
        if (strcmp(network_table[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}

unsigned int network_total(void)
{
    int i;
    unsigned int total = 0;
    for (i = 0; i < network_count; i++) {
        if (network_table[i].active) {
            total += network_table[i].value;
        }
    }
    return total;
}

void network_clear(void)
{
    network_count = 0;
    memset(network_table, 0, sizeof(network_table));
}
