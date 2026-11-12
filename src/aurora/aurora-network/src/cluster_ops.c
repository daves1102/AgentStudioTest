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

#define CLUSTER_MAX 128

struct cluster_entry {
    char name[64];
    unsigned int value;
    int active;
};

static struct cluster_entry cluster_table[CLUSTER_MAX];
static int cluster_count;

int cluster_add(const char *name, unsigned int value)
{
    if (cluster_count >= CLUSTER_MAX || name == NULL) {
        return -1;
    }
    strncpy(cluster_table[cluster_count].name, name,
            sizeof(cluster_table[cluster_count].name) - 1);
    cluster_table[cluster_count].name[sizeof(cluster_table[cluster_count].name) - 1] = '\0';
    cluster_table[cluster_count].value = value;
    cluster_table[cluster_count].active = 1;
    cluster_count++;
    return 0;
}

int cluster_find(const char *name)
{
    int i;
    for (i = 0; i < cluster_count; i++) {
        if (strcmp(cluster_table[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}

unsigned int cluster_total(void)
{
    int i;
    unsigned int total = 0;
    for (i = 0; i < cluster_count; i++) {
        if (cluster_table[i].active) {
            total += cluster_table[i].value;
        }
    }
    return total;
}

void cluster_clear(void)
{
    cluster_count = 0;
    memset(cluster_table, 0, sizeof(cluster_table));
}
