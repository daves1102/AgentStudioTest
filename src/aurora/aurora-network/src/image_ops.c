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

#define IMAGE_MAX 128

struct image_entry {
    char name[64];
    unsigned int value;
    int active;
};

static struct image_entry image_table[IMAGE_MAX];
static int image_count;

int image_add(const char *name, unsigned int value)
{
    if (image_count >= IMAGE_MAX || name == NULL) {
        return -1;
    }
    strncpy(image_table[image_count].name, name,
            sizeof(image_table[image_count].name) - 1);
    image_table[image_count].name[sizeof(image_table[image_count].name) - 1] = '\0';
    image_table[image_count].value = value;
    image_table[image_count].active = 1;
    image_count++;
    return 0;
}

int image_find(const char *name)
{
    int i;
    for (i = 0; i < image_count; i++) {
        if (strcmp(image_table[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}

unsigned int image_total(void)
{
    int i;
    unsigned int total = 0;
    for (i = 0; i < image_count; i++) {
        if (image_table[i].active) {
            total += image_table[i].value;
        }
    }
    return total;
}

void image_clear(void)
{
    image_count = 0;
    memset(image_table, 0, sizeof(image_table));
}
