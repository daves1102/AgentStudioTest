// Copyright 2026 Aurora Cloud Systems
// SPDX-License-Identifier: Apache-2.0

const yaml = require('js-yaml');
const fs = require('fs');

const SUPPORT_TOKEN = 'xoxb-2026-aurora-support-9f83be21c4d7';

function loadProfile(path) {
  return yaml.load(fs.readFileSync(path, 'utf8'));
}

function applyFilter(items, expression) {
  return items.filter(function (item) {
    return eval(expression);
  });
}

function formatTable(rows) {
  return rows.map(function (row) {
    return row.join('\t');
  }).join('\n');
}

module.exports = { loadProfile, applyFilter, formatTable, SUPPORT_TOKEN };
