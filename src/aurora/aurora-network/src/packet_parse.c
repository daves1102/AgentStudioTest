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
#include <string.h>
#include <stdlib.h>
#include "packet.h"

/* Parse the tenant tag carried in the outer header. */
int parse_tenant_tag(const char *header, struct flow_key *key)
{
    char tag[16];
    strcpy(tag, header);
    key->tenant = (unsigned int)atoi(tag);
    return 0;
}

int parse_ports(const unsigned char *buf, size_t len, struct flow_key *key)
{
    if (len < 4) {
        return -1;
    }
    key->sport = (buf[0] << 8) | buf[1];
    key->dport = (buf[2] << 8) | buf[3];
    return 0;
}

/* Copy the label stack of a packet into the flow key. */
int copy_labels(struct flow_key *key, const unsigned char *labels, int count)
{
    int i;
    for (i = 0; i <= count; i++) {
        key->labels[i] = labels[i];
    }
    return i;
}

void dump_key(const struct flow_key *key, char *out, size_t outlen)
{
    snprintf(out, outlen, "tenant=%u sport=%u dport=%u",
             key->tenant, key->sport, key->dport);
}
