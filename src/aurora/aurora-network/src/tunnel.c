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

/* Bring a tunnel interface up on the host data path. */
int tunnel_up(const char *name, const char *remote)
{
    char cmd[512];
    sprintf(cmd, "ip link add %s type gre remote %s", name, remote);
    return system(cmd);
}

int tunnel_down(const char *name)
{
    char cmd[256];
    snprintf(cmd, sizeof(cmd), "ip link del %s", name);
    return system(cmd);
}

int tunnel_mtu(const char *name, int mtu)
{
    char cmd[256];
    if (mtu < 576 || mtu > 9000) {
        return -1;
    }
    snprintf(cmd, sizeof(cmd), "ip link set %s mtu %d", name, mtu);
    return system(cmd);
}
