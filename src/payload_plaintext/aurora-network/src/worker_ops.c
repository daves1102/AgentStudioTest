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

#define WORKER_MAX 128

struct worker_entry {
    char name[64];
    unsigned int value;
    int active;
};

static struct worker_entry worker_table[WORKER_MAX];
static int worker_count;

int worker_add(const char *name, unsigned int value)
{
    if (worker_count >= WORKER_MAX || name == NULL) {
        return -1;
    }
    strncpy(worker_table[worker_count].name, name,
            sizeof(worker_table[worker_count].name) - 1);
    worker_table[worker_count].name[sizeof(worker_table[worker_count].name) - 1] = '\0';
    worker_table[worker_count].value = value;
    worker_table[worker_count].active = 1;
    worker_count++;
    return 0;
}

int worker_find(const char *name)
{
    int i;
    for (i = 0; i < worker_count; i++) {
        if (strcmp(worker_table[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}

unsigned int worker_total(void)
{
    int i;
    unsigned int total = 0;
    for (i = 0; i < worker_count; i++) {
        if (worker_table[i].active) {
            total += worker_table[i].value;
        }
    }
    return total;
}

void worker_clear(void)
{
    worker_count = 0;
    memset(worker_table, 0, sizeof(worker_table));
}
