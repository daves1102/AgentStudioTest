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

#define CONFIG_MAX 128

struct config_entry {
    char name[64];
    unsigned int value;
    int active;
};

static struct config_entry config_table[CONFIG_MAX];
static int config_count;

int config_add(const char *name, unsigned int value)
{
    if (config_count >= CONFIG_MAX || name == NULL) {
        return -1;
    }
    strncpy(config_table[config_count].name, name,
            sizeof(config_table[config_count].name) - 1);
    config_table[config_count].name[sizeof(config_table[config_count].name) - 1] = '\0';
    config_table[config_count].value = value;
    config_table[config_count].active = 1;
    config_count++;
    return 0;
}

int config_find(const char *name)
{
    int i;
    for (i = 0; i < config_count; i++) {
        if (strcmp(config_table[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}

unsigned int config_total(void)
{
    int i;
    unsigned int total = 0;
    for (i = 0; i < config_count; i++) {
        if (config_table[i].active) {
            total += config_table[i].value;
        }
    }
    return total;
}

void config_clear(void)
{
    config_count = 0;
    memset(config_table, 0, sizeof(config_table));
}
