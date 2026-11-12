# Copyright 2026 Aurora Cloud Systems
# SPDX-License-Identifier: Apache-2.0

from dataclasses import dataclass


@dataclass
class Quota:
    instances: int
    vcpus: int
    memory_mib: int
    volumes: int


DEFAULT = Quota(instances=10, vcpus=20, memory_mib=51200, volumes=20)


def remaining(limit, used):
    return Quota(
        instances=limit.instances - used.instances,
        vcpus=limit.vcpus - used.vcpus,
        memory_mib=limit.memory_mib - used.memory_mib,
        volumes=limit.volumes - used.volumes,
    )


def exceeded(limit, used):
    left = remaining(limit, used)
    return any(
        value < 0
        for value in (left.instances, left.vcpus, left.memory_mib, left.volumes)
    )
