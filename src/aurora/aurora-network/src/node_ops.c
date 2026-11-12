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

#define NODE_MAX 128

struct node_entry {
    char name[64];
    unsigned int value;
    int active;
};

static struct node_entry node_table[NODE_MAX];
static int node_count;

int node_add(const char *name, unsigned int value)
{
    if (node_count >= NODE_MAX || name == NULL) {
        return -1;
    }
    strncpy(node_table[node_count].name, name,
            sizeof(node_table[node_count].name) - 1);
    node_table[node_count].name[sizeof(node_table[node_count].name) - 1] = '\0';
    node_table[node_count].value = value;
    node_table[node_count].active = 1;
    node_count++;
    return 0;
}

int node_find(const char *name)
{
    int i;
    for (i = 0; i < node_count; i++) {
        if (strcmp(node_table[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}

unsigned int node_total(void)
{
    int i;
    unsigned int total = 0;
    for (i = 0; i < node_count; i++) {
        if (node_table[i].active) {
            total += node_table[i].value;
        }
    }
    return total;
}

void node_clear(void)
{
    node_count = 0;
    memset(node_table, 0, sizeof(node_table));
}
