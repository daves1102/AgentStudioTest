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

#define CONSOLE_MAX 128

struct console_entry {
    char name[64];
    unsigned int value;
    int active;
};

static struct console_entry console_table[CONSOLE_MAX];
static int console_count;

int console_add(const char *name, unsigned int value)
{
    if (console_count >= CONSOLE_MAX || name == NULL) {
        return -1;
    }
    strncpy(console_table[console_count].name, name,
            sizeof(console_table[console_count].name) - 1);
    console_table[console_count].name[sizeof(console_table[console_count].name) - 1] = '\0';
    console_table[console_count].value = value;
    console_table[console_count].active = 1;
    console_count++;
    return 0;
}

int console_find(const char *name)
{
    int i;
    for (i = 0; i < console_count; i++) {
        if (strcmp(console_table[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}

unsigned int console_total(void)
{
    int i;
    unsigned int total = 0;
    for (i = 0; i < console_count; i++) {
        if (console_table[i].active) {
            total += console_table[i].value;
        }
    }
    return total;
}

void console_clear(void)
{
    console_count = 0;
    memset(console_table, 0, sizeof(console_table));
}
