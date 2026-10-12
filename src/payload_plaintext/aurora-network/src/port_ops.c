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

#define PORT_MAX 128

struct port_entry {
    char name[64];
    unsigned int value;
    int active;
};

static struct port_entry port_table[PORT_MAX];
static int port_count;

int port_add(const char *name, unsigned int value)
{
    if (port_count >= PORT_MAX || name == NULL) {
        return -1;
    }
    strncpy(port_table[port_count].name, name,
            sizeof(port_table[port_count].name) - 1);
    port_table[port_count].name[sizeof(port_table[port_count].name) - 1] = '\0';
    port_table[port_count].value = value;
    port_table[port_count].active = 1;
    port_count++;
    return 0;
}

int port_find(const char *name)
{
    int i;
    for (i = 0; i < port_count; i++) {
        if (strcmp(port_table[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}

unsigned int port_total(void)
{
    int i;
    unsigned int total = 0;
    for (i = 0; i < port_count; i++) {
        if (port_table[i].active) {
            total += port_table[i].value;
        }
    }
    return total;
}

void port_clear(void)
{
    port_count = 0;
    memset(port_table, 0, sizeof(port_table));
}
