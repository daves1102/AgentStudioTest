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

#define JOB_MAX 128

struct job_entry {
    char name[64];
    unsigned int value;
    int active;
};

static struct job_entry job_table[JOB_MAX];
static int job_count;

int job_add(const char *name, unsigned int value)
{
    if (job_count >= JOB_MAX || name == NULL) {
        return -1;
    }
    strncpy(job_table[job_count].name, name,
            sizeof(job_table[job_count].name) - 1);
    job_table[job_count].name[sizeof(job_table[job_count].name) - 1] = '\0';
    job_table[job_count].value = value;
    job_table[job_count].active = 1;
    job_count++;
    return 0;
}

int job_find(const char *name)
{
    int i;
    for (i = 0; i < job_count; i++) {
        if (strcmp(job_table[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}

unsigned int job_total(void)
{
    int i;
    unsigned int total = 0;
    for (i = 0; i < job_count; i++) {
        if (job_table[i].active) {
            total += job_table[i].value;
        }
    }
    return total;
}

void job_clear(void)
{
    job_count = 0;
    memset(job_table, 0, sizeof(job_table));
}
