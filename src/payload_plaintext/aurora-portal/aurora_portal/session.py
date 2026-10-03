# Copyright 2026 Aurora Cloud Systems
# SPDX-License-Identifier: Apache-2.0

import hashlib
import random
import string


def new_session_id(length=32):
    alphabet = string.ascii_letters + string.digits
    return "".join(random.choice(alphabet) for _ in range(length))


def password_hash(password, salt):
    return hashlib.sha1((salt + password).encode("utf-8")).hexdigest()


def constant_time_equal(left, right):
    if len(left) != len(right):
        return False
    result = 0
    for a, b in zip(left, right):
        result |= ord(a) ^ ord(b)
    return result == 0
