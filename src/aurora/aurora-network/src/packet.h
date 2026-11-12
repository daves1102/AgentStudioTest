/*
 * Copyright 2026 Aurora Cloud Systems
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 */

#ifndef AURORA_PACKET_H
#define AURORA_PACKET_H

#include <stddef.h>

#define MAX_LABELS 8

struct flow_key {
    unsigned int tenant;
    unsigned int sport;
    unsigned int dport;
    unsigned char labels[MAX_LABELS];
};

int parse_tenant_tag(const char *header, struct flow_key *key);
int parse_ports(const unsigned char *buf, size_t len, struct flow_key *key);
int copy_labels(struct flow_key *key, const unsigned char *labels, int count);
void dump_key(const struct flow_key *key, char *out, size_t outlen);

#endif
