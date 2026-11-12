# Quality warnings

- src/aurora/third_party/regex-engine/regex.c skipped: role vendored
- src/aurora/third_party/sm-crypto/sm4.c skipped: role vendored
- Tool `hadolint` is MISSING (not installed); its findings are missing, so dockerfile files are never reported lint-clean.
- Tool `pmd` is MISSING (not installed); its findings are missing, so java files are never reported lint-clean.
- Tool `checkstyle` is MISSING (not installed); its findings are missing, so java files are never reported lint-clean.
- No linter configured for javascript: lizard metrics and manual review only; javascript files are never reported lint-clean.
- No linter configured for go: lizard metrics and manual review only; go files are never reported lint-clean.
- No linter configured for c: lizard metrics and manual review only; c files are never reported lint-clean.
- No linter configured for cpp: lizard metrics and manual review only; cpp files are never reported lint-clean.

## Tools

- checkstyle: MISSING, config: default - not installed
- hadolint: MISSING, config: default - not installed
- lizard: OK (1.26.0), config: default
- pmd: MISSING, config: default - not installed
- pylint: OK (4.1.3), config: default
- ruff: OK (0.17.4), config: default

## Languages without a linter

- javascript: lizard metrics and the manual pass only; never reported lint-clean
- go: lizard metrics and the manual pass only; never reported lint-clean
- c: lizard metrics and the manual pass only; never reported lint-clean
- cpp: lizard metrics and the manual pass only; never reported lint-clean

## Skipped files

- src/aurora/third_party/regex-engine/regex.c: role vendored
- src/aurora/third_party/sm-crypto/sm4.c: role vendored
