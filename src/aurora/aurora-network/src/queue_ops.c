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

#define QUEUE_MAX 128

struct queue_entry {
    char name[64];
    unsigned int value;
    int active;
};

static struct queue_entry queue_table[QUEUE_MAX];
static int queue_count;

int queue_add(const char *name, unsigned int value)
{
    if (queue_count >= QUEUE_MAX || name == NULL) {
        return -1;
    }
    strncpy(queue_table[queue_count].name, name,
            sizeof(queue_table[queue_count].name) - 1);
    queue_table[queue_count].name[sizeof(queue_table[queue_count].name) - 1] = '\0';
    queue_table[queue_count].value = value;
    queue_table[queue_count].active = 1;
    queue_count++;
    return 0;
}

int queue_find(const char *name)
{
    int i;
    for (i = 0; i < queue_count; i++) {
        if (strcmp(queue_table[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}

unsigned int queue_total(void)
{
    int i;
    unsigned int total = 0;
    for (i = 0; i < queue_count; i++) {
        if (queue_table[i].active) {
            total += queue_table[i].value;
        }
    }
    return total;
}

void queue_clear(void)
{
    queue_count = 0;
    memset(queue_table, 0, sizeof(queue_table));
}
