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

#define KEYPAIR_MAX 128

struct keypair_entry {
    char name[64];
    unsigned int value;
    int active;
};

static struct keypair_entry keypair_table[KEYPAIR_MAX];
static int keypair_count;

int keypair_add(const char *name, unsigned int value)
{
    if (keypair_count >= KEYPAIR_MAX || name == NULL) {
        return -1;
    }
    strncpy(keypair_table[keypair_count].name, name,
            sizeof(keypair_table[keypair_count].name) - 1);
    keypair_table[keypair_count].name[sizeof(keypair_table[keypair_count].name) - 1] = '\0';
    keypair_table[keypair_count].value = value;
    keypair_table[keypair_count].active = 1;
    keypair_count++;
    return 0;
}

int keypair_find(const char *name)
{
    int i;
    for (i = 0; i < keypair_count; i++) {
        if (strcmp(keypair_table[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}

unsigned int keypair_total(void)
{
    int i;
    unsigned int total = 0;
    for (i = 0; i < keypair_count; i++) {
        if (keypair_table[i].active) {
            total += keypair_table[i].value;
        }
    }
    return total;
}

void keypair_clear(void)
{
    keypair_count = 0;
    memset(keypair_table, 0, sizeof(keypair_table));
}
