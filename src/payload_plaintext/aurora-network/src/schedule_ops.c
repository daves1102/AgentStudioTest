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

#define SCHEDULE_MAX 128

struct schedule_entry {
    char name[64];
    unsigned int value;
    int active;
};

static struct schedule_entry schedule_table[SCHEDULE_MAX];
static int schedule_count;

int schedule_add(const char *name, unsigned int value)
{
    if (schedule_count >= SCHEDULE_MAX || name == NULL) {
        return -1;
    }
    strncpy(schedule_table[schedule_count].name, name,
            sizeof(schedule_table[schedule_count].name) - 1);
    schedule_table[schedule_count].name[sizeof(schedule_table[schedule_count].name) - 1] = '\0';
    schedule_table[schedule_count].value = value;
    schedule_table[schedule_count].active = 1;
    schedule_count++;
    return 0;
}

int schedule_find(const char *name)
{
    int i;
    for (i = 0; i < schedule_count; i++) {
        if (strcmp(schedule_table[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}

unsigned int schedule_total(void)
{
    int i;
    unsigned int total = 0;
    for (i = 0; i < schedule_count; i++) {
        if (schedule_table[i].active) {
            total += schedule_table[i].value;
        }
    }
    return total;
}

void schedule_clear(void)
{
    schedule_count = 0;
    memset(schedule_table, 0, sizeof(schedule_table));
}
