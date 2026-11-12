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

#define SERVER_MAX 128

struct server_entry {
    char name[64];
    unsigned int value;
    int active;
};

static struct server_entry server_table[SERVER_MAX];
static int server_count;

int server_add(const char *name, unsigned int value)
{
    if (server_count >= SERVER_MAX || name == NULL) {
        return -1;
    }
    strncpy(server_table[server_count].name, name,
            sizeof(server_table[server_count].name) - 1);
    server_table[server_count].name[sizeof(server_table[server_count].name) - 1] = '\0';
    server_table[server_count].value = value;
    server_table[server_count].active = 1;
    server_count++;
    return 0;
}

int server_find(const char *name)
{
    int i;
    for (i = 0; i < server_count; i++) {
        if (strcmp(server_table[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}

unsigned int server_total(void)
{
    int i;
    unsigned int total = 0;
    for (i = 0; i < server_count; i++) {
        if (server_table[i].active) {
            total += server_table[i].value;
        }
    }
    return total;
}

void server_clear(void)
{
    server_count = 0;
    memset(server_table, 0, sizeof(server_table));
}
