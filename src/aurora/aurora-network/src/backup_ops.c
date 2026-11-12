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

#define BACKUP_MAX 128

struct backup_entry {
    char name[64];
    unsigned int value;
    int active;
};

static struct backup_entry backup_table[BACKUP_MAX];
static int backup_count;

int backup_add(const char *name, unsigned int value)
{
    if (backup_count >= BACKUP_MAX || name == NULL) {
        return -1;
    }
    strncpy(backup_table[backup_count].name, name,
            sizeof(backup_table[backup_count].name) - 1);
    backup_table[backup_count].name[sizeof(backup_table[backup_count].name) - 1] = '\0';
    backup_table[backup_count].value = value;
    backup_table[backup_count].active = 1;
    backup_count++;
    return 0;
}

int backup_find(const char *name)
{
    int i;
    for (i = 0; i < backup_count; i++) {
        if (strcmp(backup_table[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}

unsigned int backup_total(void)
{
    int i;
    unsigned int total = 0;
    for (i = 0; i < backup_count; i++) {
        if (backup_table[i].active) {
            total += backup_table[i].value;
        }
    }
    return total;
}

void backup_clear(void)
{
    backup_count = 0;
    memset(backup_table, 0, sizeof(backup_table));
}
