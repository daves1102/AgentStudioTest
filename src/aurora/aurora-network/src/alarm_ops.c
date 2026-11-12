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

#define ALARM_MAX 128

struct alarm_entry {
    char name[64];
    unsigned int value;
    int active;
};

static struct alarm_entry alarm_table[ALARM_MAX];
static int alarm_count;

int alarm_add(const char *name, unsigned int value)
{
    if (alarm_count >= ALARM_MAX || name == NULL) {
        return -1;
    }
    strncpy(alarm_table[alarm_count].name, name,
            sizeof(alarm_table[alarm_count].name) - 1);
    alarm_table[alarm_count].name[sizeof(alarm_table[alarm_count].name) - 1] = '\0';
    alarm_table[alarm_count].value = value;
    alarm_table[alarm_count].active = 1;
    alarm_count++;
    return 0;
}

int alarm_find(const char *name)
{
    int i;
    for (i = 0; i < alarm_count; i++) {
        if (strcmp(alarm_table[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}

unsigned int alarm_total(void)
{
    int i;
    unsigned int total = 0;
    for (i = 0; i < alarm_count; i++) {
        if (alarm_table[i].active) {
            total += alarm_table[i].value;
        }
    }
    return total;
}

void alarm_clear(void)
{
    alarm_count = 0;
    memset(alarm_table, 0, sizeof(alarm_table));
}
