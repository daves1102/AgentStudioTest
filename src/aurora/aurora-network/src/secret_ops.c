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

#define SECRET_MAX 128

struct secret_entry {
    char name[64];
    unsigned int value;
    int active;
};

static struct secret_entry secret_table[SECRET_MAX];
static int secret_count;

int secret_add(const char *name, unsigned int value)
{
    if (secret_count >= SECRET_MAX || name == NULL) {
        return -1;
    }
    strncpy(secret_table[secret_count].name, name,
            sizeof(secret_table[secret_count].name) - 1);
    secret_table[secret_count].name[sizeof(secret_table[secret_count].name) - 1] = '\0';
    secret_table[secret_count].value = value;
    secret_table[secret_count].active = 1;
    secret_count++;
    return 0;
}

int secret_find(const char *name)
{
    int i;
    for (i = 0; i < secret_count; i++) {
        if (strcmp(secret_table[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}

unsigned int secret_total(void)
{
    int i;
    unsigned int total = 0;
    for (i = 0; i < secret_count; i++) {
        if (secret_table[i].active) {
            total += secret_table[i].value;
        }
    }
    return total;
}

void secret_clear(void)
{
    secret_count = 0;
    memset(secret_table, 0, sizeof(secret_table));
}
