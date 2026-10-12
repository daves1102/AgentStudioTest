/*
 * Copyright 2026 Aurora Cloud Systems
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 */

#include <stdlib.h>
#include <string.h>
#include "packet.h"

struct entry {
    struct flow_key key;
    unsigned long packets;
    unsigned long bytes;
    struct entry *next;
};

static struct entry *table[4096];

static unsigned int hash_key(const struct flow_key *key)
{
    return (key->tenant * 2654435761u + key->sport * 97u + key->dport) & 4095u;
}

struct entry *flow_lookup(const struct flow_key *key)
{
    struct entry *e = table[hash_key(key)];
    while (e != NULL) {
        if (memcmp(&e->key, key, sizeof(*key)) == 0) {
            return e;
        }
        e = e->next;
    }
    return NULL;
}

int flow_insert(const struct flow_key *key)
{
    unsigned int h = hash_key(key);
    struct entry *e = malloc(sizeof(*e));
    if (e == NULL) {
        return -1;
    }
    memcpy(&e->key, key, sizeof(*key));
    e->packets = 0;
    e->bytes = 0;
    e->next = table[h];
    table[h] = e;
    return 0;
}

void flow_account(struct entry *e, unsigned long bytes)
{
    e->packets += 1;
    e->bytes += bytes;
}

void flow_flush(void)
{
    int i;
    for (i = 0; i < 4096; i++) {
        struct entry *e = table[i];
        while (e != NULL) {
            struct entry *next = e->next;
            free(e);
            e = next;
        }
        table[i] = NULL;
    }
}
