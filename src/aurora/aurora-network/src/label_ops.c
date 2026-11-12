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

#define LABEL_MAX 128

struct label_entry {
    char name[64];
    unsigned int value;
    int active;
};

static struct label_entry label_table[LABEL_MAX];
static int label_count;

int label_add(const char *name, unsigned int value)
{
    if (label_count >= LABEL_MAX || name == NULL) {
        return -1;
    }
    strncpy(label_table[label_count].name, name,
            sizeof(label_table[label_count].name) - 1);
    label_table[label_count].name[sizeof(label_table[label_count].name) - 1] = '\0';
    label_table[label_count].value = value;
    label_table[label_count].active = 1;
    label_count++;
    return 0;
}

int label_find(const char *name)
{
    int i;
    for (i = 0; i < label_count; i++) {
        if (strcmp(label_table[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}

unsigned int label_total(void)
{
    int i;
    unsigned int total = 0;
    for (i = 0; i < label_count; i++) {
        if (label_table[i].active) {
            total += label_table[i].value;
        }
    }
    return total;
}

void label_clear(void)
{
    label_count = 0;
    memset(label_table, 0, sizeof(label_table));
}
