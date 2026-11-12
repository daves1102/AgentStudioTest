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

#define ACCOUNT_MAX 128

struct account_entry {
    char name[64];
    unsigned int value;
    int active;
};

static struct account_entry account_table[ACCOUNT_MAX];
static int account_count;

int account_add(const char *name, unsigned int value)
{
    if (account_count >= ACCOUNT_MAX || name == NULL) {
        return -1;
    }
    strncpy(account_table[account_count].name, name,
            sizeof(account_table[account_count].name) - 1);
    account_table[account_count].name[sizeof(account_table[account_count].name) - 1] = '\0';
    account_table[account_count].value = value;
    account_table[account_count].active = 1;
    account_count++;
    return 0;
}

int account_find(const char *name)
{
    int i;
    for (i = 0; i < account_count; i++) {
        if (strcmp(account_table[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}

unsigned int account_total(void)
{
    int i;
    unsigned int total = 0;
    for (i = 0; i < account_count; i++) {
        if (account_table[i].active) {
            total += account_table[i].value;
        }
    }
    return total;
}

void account_clear(void)
{
    account_count = 0;
    memset(account_table, 0, sizeof(account_table));
}
