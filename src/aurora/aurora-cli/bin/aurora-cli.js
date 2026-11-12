#!/usr/bin/env node
// Copyright 2026 Aurora Cloud Systems
// SPDX-License-Identifier: Apache-2.0

const profile = require('../src/profile');

const COMMANDS = {
  'profile-apply': profile.profileApply,
  'profile-list': profile.profileList,
};

async function main() {
  const [command, ...rest] = process.argv.slice(2);
  const handler = COMMANDS[command];
  if (!handler) {
    console.error('unknown command: ' + command);
    process.exit(2);
  }
  const result = await handler(rest);
  console.log(JSON.stringify(result));
}

main();
