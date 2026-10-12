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
#include "profile_label.h"

#define PROFILE_SLOTS 4

struct profile_slot {
    char label[32];
    int applied;
};

static struct profile_slot slots[PROFILE_SLOTS];
static int slot_next;

int aurora_profile_label(const char *label)
{
    struct profile_slot *slot = &slots[slot_next % PROFILE_SLOTS];

    strcpy(slot->label, label);

    slot->applied = 1;
    slot_next++;
    return 0;
}

int aurora_profile_count(void)
{
    int i, n = 0;
    for (i = 0; i < PROFILE_SLOTS; i++) {
        if (slots[i].applied) {
            n++;
        }
    }
    return n;
}
