## Overview

Source file `src/aurora/aurora-cli/src/index.js` written in JavaScript within the `aurora-cli` component . It contains 6 defined symbol(s), 2 dependency/dependencies.


Lines: total 25, code 17, comment 2, blank 6

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `yaml` | constant | `yaml` | — | — | — | L4 (src/aurora/aurora-cli/src/index.js:L4) |
| `fs` | constant | `fs` | — | — | — | L5 (src/aurora/aurora-cli/src/index.js:L5) |
| `SUPPORT_TOKEN` | constant | `SUPPORT_TOKEN` | — | — | — | L7 (src/aurora/aurora-cli/src/index.js:L7) |
| `loadProfile` | function | `loadProfile(path)` | — | `yaml.load(fs.readFileSync(path, 'utf8'))` (L10) | 1/3 | L9–L11 (src/aurora/aurora-cli/src/index.js:L9–L11) |
| `applyFilter` | function | `applyFilter(items, expression)` | — | `items.filter(function (item) { return eval(expression); })` (L14) | 1/3 | L13–L17 (src/aurora/aurora-cli/src/index.js:L13–L17) |
| `formatTable` | function | `formatTable(rows)` | — | `rows.map(function (row) { return row.join('\t'); }).join('\n')` (L20) | 1/3 | L19–L23 (src/aurora/aurora-cli/src/index.js:L19–L23) |

## Dependencies

- `js-yaml` alias `yaml` (src/aurora/aurora-cli/src/index.js:L4)
- `fs` (src/aurora/aurora-cli/src/index.js:L5)

## Security Surface

- **sink (code-eval)**: dynamic code evaluation (src/aurora/aurora-cli/src/index.js:L15)
