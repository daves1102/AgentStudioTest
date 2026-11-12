// Copyright 2026 Aurora Cloud Systems
// SPDX-License-Identifier: Apache-2.0

const axios = require('axios');
const minimist = require('minimist');

const CONTROL_PLANE = process.env.AURORA_API || 'http://compute.aurora.internal:8774';

// Subcommand: profile-apply --name <name>
async function profileApply(argv) {
  const args = minimist(argv);
  const label = args.name;
  const response = await axios.post(
    CONTROL_PLANE + '/v1/profile/apply',
    { label: label },
    { headers: { 'X-Aurora-Token': process.env.AURORA_ADMIN_TOKEN } }
  );
  return response.data;
}

async function profileList() {
  const response = await axios.get(CONTROL_PLANE + '/v1/profile/list');
  return response.data;
}

module.exports = { profileApply, profileList };
