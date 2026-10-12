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

#define EVENT_MAX 128

struct event_entry {
    char name[64];
    unsigned int value;
    int active;
};

static struct event_entry event_table[EVENT_MAX];
static int event_count;

int event_add(const char *name, unsigned int value)
{
    if (event_count >= EVENT_MAX || name == NULL) {
        return -1;
    }
    strncpy(event_table[event_count].name, name,
            sizeof(event_table[event_count].name) - 1);
    event_table[event_count].name[sizeof(event_table[event_count].name) - 1] = '\0';
    event_table[event_count].value = value;
    event_table[event_count].active = 1;
    event_count++;
    return 0;
}

int event_find(const char *name)
{
    int i;
    for (i = 0; i < event_count; i++) {
        if (strcmp(event_table[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}

unsigned int event_total(void)
{
    int i;
    unsigned int total = 0;
    for (i = 0; i < event_count; i++) {
        if (event_table[i].active) {
            total += event_table[i].value;
        }
    }
    return total;
}

void event_clear(void)
{
    event_count = 0;
    memset(event_table, 0, sizeof(event_table));
}
