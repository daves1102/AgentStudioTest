# src/nova/tests/unit/cmd/test_baseproxy.py

## Overview

This file implements the `test_baseproxy` module, defining 1 class, 7 methods, 10 imports, 6 side effects.

Lines: total 128, code 101, comment 15, blank 12

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `BaseProxyTestCase` | class | — | exported | not declared | — | `src/nova/tests/unit/cmd/test_baseproxy.py:L30–L128` |
| `BaseProxyTestCase.setUp` | method | (self) | public | not declared | 1/4 | `src/nova/tests/unit/cmd/test_baseproxy.py:L32–L35` |
| `BaseProxyTestCase.test_proxy_ssl_without_cert` | method | (self, mock_exit, mock_exists) | public | not declared | 1/7 | `src/nova/tests/unit/cmd/test_baseproxy.py:L41–L47` |
| `BaseProxyTestCase.test_proxy_web_dir_does_not_exist` | method | (self, mock_exit, mock_exists) | public | not declared | 1/5 | `src/nova/tests/unit/cmd/test_baseproxy.py:L51–L55` |
| `BaseProxyTestCase.test_proxy` | method | (self, mock_select_ssl_version, mock_start, mock_init, mock_gmr, mock_log, mock_exists) | public | not declared | 1/13 | `src/nova/tests/unit/cmd/test_baseproxy.py:L65–L77` |
| `BaseProxyTestCase.test_proxy_exit_with_error` | method | (self, mock_exit, mock_exists) | public | not declared | 1/7 | `src/nova/tests/unit/cmd/test_baseproxy.py:L81–L87` |
| `BaseProxyTestCase.test_proxy_ssl_settings` | method | (self, mock_start, mock_init, mock_exists) | public | not declared | 1/11 | `src/nova/tests/unit/cmd/test_baseproxy.py:L93–L103` |
| `BaseProxyTestCase.test_proxy_with_traffic_logging` | method | (self, mock_select_ssl_version, mock_start, mock_init, mock_gmr, mock_log, mock_exists) | public | not declared | 1/16 | `src/nova/tests/unit/cmd/test_baseproxy.py:L113–L128` |

## Dependencies

- `io`: imports `StringIO` (src/nova/tests/unit/cmd/test_baseproxy.py:L15)
- `unittest`: imports `mock` (src/nova/tests/unit/cmd/test_baseproxy.py:L16)
- `import fixtures` (src/nova/tests/unit/cmd/test_baseproxy.py:L18)
- `oslo_log`: imports `log as logging` (src/nova/tests/unit/cmd/test_baseproxy.py:L19)
- `oslo_reports`: imports `guru_meditation_report as gmr` (src/nova/tests/unit/cmd/test_baseproxy.py:L20)
- `nova.cmd`: imports `baseproxy` (src/nova/tests/unit/cmd/test_baseproxy.py:L22)
- `nova`: imports `config` (src/nova/tests/unit/cmd/test_baseproxy.py:L23)
- `nova.console`: imports `websocketproxy` (src/nova/tests/unit/cmd/test_baseproxy.py:L24)
- `nova`: imports `test` (src/nova/tests/unit/cmd/test_baseproxy.py:L25)
- `nova`: imports `version` (src/nova/tests/unit/cmd/test_baseproxy.py:L26)

## Side Effects

- **file-io**: @mock.patch('os.path.exists', return_value=False) (src/nova/tests/unit/cmd/test_baseproxy.py:L37)
- **file-io**: @mock.patch('os.path.exists', return_value=False) (src/nova/tests/unit/cmd/test_baseproxy.py:L49)
- **file-io**: @mock.patch('os.path.exists', return_value=True) (src/nova/tests/unit/cmd/test_baseproxy.py:L57)
- **file-io**: @mock.patch('os.path.exists', return_value=False) (src/nova/tests/unit/cmd/test_baseproxy.py:L79)
- **file-io**: @mock.patch('os.path.exists', return_value=True) (src/nova/tests/unit/cmd/test_baseproxy.py:L89)
- **file-io**: @mock.patch('os.path.exists', return_value=True) (src/nova/tests/unit/cmd/test_baseproxy.py:L105)

