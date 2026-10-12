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

#define TASK_MAX 128

struct task_entry {
    char name[64];
    unsigned int value;
    int active;
};

static struct task_entry task_table[TASK_MAX];
static int task_count;

int task_add(const char *name, unsigned int value)
{
    if (task_count >= TASK_MAX || name == NULL) {
        return -1;
    }
    strncpy(task_table[task_count].name, name,
            sizeof(task_table[task_count].name) - 1);
    task_table[task_count].name[sizeof(task_table[task_count].name) - 1] = '\0';
    task_table[task_count].value = value;
    task_table[task_count].active = 1;
    task_count++;
    return 0;
}

int task_find(const char *name)
{
    int i;
    for (i = 0; i < task_count; i++) {
        if (strcmp(task_table[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}

unsigned int task_total(void)
{
    int i;
    unsigned int total = 0;
    for (i = 0; i < task_count; i++) {
        if (task_table[i].active) {
            total += task_table[i].value;
        }
    }
    return total;
}

void task_clear(void)
{
    task_count = 0;
    memset(task_table, 0, sizeof(task_table));
}
