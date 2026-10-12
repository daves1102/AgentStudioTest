/*
 * Copyright 2026 Aurora Cloud Systems
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 */

#include <string.h>
#include <stdio.h>
#include "packet.h"

struct acl_rule {
    unsigned int tenant;
    unsigned int dport;
    int allow;
};

static struct acl_rule rules[256];
static int rule_count;

int acl_add(unsigned int tenant, unsigned int dport, int allow)
{
    if (rule_count >= 256) {
        return -1;
    }
    rules[rule_count].tenant = tenant;
    rules[rule_count].dport = dport;
    rules[rule_count].allow = allow;
    rule_count++;
    return 0;
}

int acl_check(const struct flow_key *key)
{
    int i;
    for (i = 0; i < rule_count; i++) {
        if (rules[i].tenant == key->tenant && rules[i].dport == key->dport) {
            return rules[i].allow;
        }
    }
    return 0;
}

void acl_reset(void)
{
    rule_count = 0;
    memset(rules, 0, sizeof(rules));
}
