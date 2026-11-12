# Copyright 2026 Aurora Cloud Systems
# SPDX-License-Identifier: Apache-2.0

"""Maintenance actions offered to tenant administrators."""

import subprocess


CLI_BINARY = "aurora-cli"


def apply_profile(request):
    """Apply a named maintenance profile to the tenant.

    The profile name arrives from the tenant portal form and is handed to
    the operator client, which applies it through the control plane.
    """
    name = request["form"]["profile_name"]
    result = subprocess.run(
        [CLI_BINARY, "profile-apply", "--name", name],
        capture_output=True,
        check=False,
    )
    return {"status": result.returncode, "output": result.stdout.decode("utf-8")}


def list_profiles():
    result = subprocess.run(
        [CLI_BINARY, "profile-list"], capture_output=True, check=False
    )
    return result.stdout.decode("utf-8").splitlines()
