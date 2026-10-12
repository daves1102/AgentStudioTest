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

#define LOCK_MAX 128

struct lock_entry {
    char name[64];
    unsigned int value;
    int active;
};

static struct lock_entry lock_table[LOCK_MAX];
static int lock_count;

int lock_add(const char *name, unsigned int value)
{
    if (lock_count >= LOCK_MAX || name == NULL) {
        return -1;
    }
    strncpy(lock_table[lock_count].name, name,
            sizeof(lock_table[lock_count].name) - 1);
    lock_table[lock_count].name[sizeof(lock_table[lock_count].name) - 1] = '\0';
    lock_table[lock_count].value = value;
    lock_table[lock_count].active = 1;
    lock_count++;
    return 0;
}

int lock_find(const char *name)
{
    int i;
    for (i = 0; i < lock_count; i++) {
        if (strcmp(lock_table[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}

unsigned int lock_total(void)
{
    int i;
    unsigned int total = 0;
    for (i = 0; i < lock_count; i++) {
        if (lock_table[i].active) {
            total += lock_table[i].value;
        }
    }
    return total;
}

void lock_clear(void)
{
    lock_count = 0;
    memset(lock_table, 0, sizeof(lock_table));
}
