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

#define SESSION_MAX 128

struct session_entry {
    char name[64];
    unsigned int value;
    int active;
};

static struct session_entry session_table[SESSION_MAX];
static int session_count;

int session_add(const char *name, unsigned int value)
{
    if (session_count >= SESSION_MAX || name == NULL) {
        return -1;
    }
    strncpy(session_table[session_count].name, name,
            sizeof(session_table[session_count].name) - 1);
    session_table[session_count].name[sizeof(session_table[session_count].name) - 1] = '\0';
    session_table[session_count].value = value;
    session_table[session_count].active = 1;
    session_count++;
    return 0;
}

int session_find(const char *name)
{
    int i;
    for (i = 0; i < session_count; i++) {
        if (strcmp(session_table[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}

unsigned int session_total(void)
{
    int i;
    unsigned int total = 0;
    for (i = 0; i < session_count; i++) {
        if (session_table[i].active) {
            total += session_table[i].value;
        }
    }
    return total;
}

void session_clear(void)
{
    session_count = 0;
    memset(session_table, 0, sizeof(session_table));
}
