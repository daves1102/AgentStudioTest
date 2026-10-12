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

#define FIREWALL_MAX 128

struct firewall_entry {
    char name[64];
    unsigned int value;
    int active;
};

static struct firewall_entry firewall_table[FIREWALL_MAX];
static int firewall_count;

int firewall_add(const char *name, unsigned int value)
{
    if (firewall_count >= FIREWALL_MAX || name == NULL) {
        return -1;
    }
    strncpy(firewall_table[firewall_count].name, name,
            sizeof(firewall_table[firewall_count].name) - 1);
    firewall_table[firewall_count].name[sizeof(firewall_table[firewall_count].name) - 1] = '\0';
    firewall_table[firewall_count].value = value;
    firewall_table[firewall_count].active = 1;
    firewall_count++;
    return 0;
}

int firewall_find(const char *name)
{
    int i;
    for (i = 0; i < firewall_count; i++) {
        if (strcmp(firewall_table[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}

unsigned int firewall_total(void)
{
    int i;
    unsigned int total = 0;
    for (i = 0; i < firewall_count; i++) {
        if (firewall_table[i].active) {
            total += firewall_table[i].value;
        }
    }
    return total;
}

void firewall_clear(void)
{
    firewall_count = 0;
    memset(firewall_table, 0, sizeof(firewall_table));
}
