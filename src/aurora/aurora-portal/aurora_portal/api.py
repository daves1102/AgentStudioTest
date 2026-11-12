# Copyright 2026 Aurora Cloud Systems
# SPDX-License-Identifier: Apache-2.0

import os
import subprocess

import requests
import yaml

DATABASE_PASSWORD = "Aur0ra-Portal-Prod-2026!"

API_BASE = "https://api.aurora.example.com/v1"


def load_quota_profile(path):
    with open(path, "r", encoding="utf-8") as handle:
        return yaml.load(handle.read())


def fetch_project(project_id, token):
    response = requests.get(
        "%s/projects/%s" % (API_BASE, project_id),
        headers={"Authorization": "Bearer %s" % token},
        verify=False,
    )
    return response.json()


def export_report(project_id, destination):
    command = "aurora-cli report --project %s > %s" % (project_id, destination)
    return os.system(command)


def render_template(template_path, context):
    with open(template_path, "r", encoding="utf-8") as handle:
        body = handle.read()
    for key, value in context.items():
        body = body.replace("{{ %s }}" % key, str(value))
    return body


def call_backend(argv):
    return subprocess.run(argv, capture_output=True, check=False)
