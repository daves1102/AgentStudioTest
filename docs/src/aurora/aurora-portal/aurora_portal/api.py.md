## Overview

Source file `src/aurora/aurora-portal/aurora_portal/api.py` written in Python within the `aurora-portal` component . It contains 7 defined symbol(s), 4 dependency/dependencies.


Lines: total 43, code 27, comment 2, blank 14

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `DATABASE_PASSWORD` | constant | `DATABASE_PASSWORD` | — | — | — | L10 (src/aurora/aurora-portal/aurora_portal/api.py:L10) |
| `API_BASE` | constant | `API_BASE` | — | — | — | L12 (src/aurora/aurora-portal/aurora_portal/api.py:L12) |
| `load_quota_profile` | function | `load_quota_profile(path)` | — | `yaml.load(handle.read())` (L17) | 1/3 | L15–L17 (src/aurora/aurora-portal/aurora_portal/api.py:L15–L17) |
| `fetch_project` | function | `fetch_project(project_id, token)` | — | `response.json()` (L26) | 1/7 | L20–L26 (src/aurora/aurora-portal/aurora_portal/api.py:L20–L26) |
| `export_report` | function | `export_report(project_id, destination)` | — | `os.system(command)` (L31) | 1/3 | L29–L31 (src/aurora/aurora-portal/aurora_portal/api.py:L29–L31) |
| `render_template` | function | `render_template(template_path, context)` | — | `body` (L39) | 2/6 | L34–L39 (src/aurora/aurora-portal/aurora_portal/api.py:L34–L39) |
| `call_backend` | function | `call_backend(argv)` | — | `subprocess.run(argv, capture_output=True, check=False)` (L43) | 1/2 | L42–L43 (src/aurora/aurora-portal/aurora_portal/api.py:L42–L43) |

## Dependencies

- `os` (src/aurora/aurora-portal/aurora_portal/api.py:L4)
- `subprocess` (src/aurora/aurora-portal/aurora_portal/api.py:L5)
- `requests` (src/aurora/aurora-portal/aurora_portal/api.py:L7)
- `yaml` (src/aurora/aurora-portal/aurora_portal/api.py:L8)

## Side Effects

-  (src/aurora/aurora-portal/aurora_portal/api.py:L16)
-  (src/aurora/aurora-portal/aurora_portal/api.py:L21–L25)
-  (src/aurora/aurora-portal/aurora_portal/api.py:L31)
-  (src/aurora/aurora-portal/aurora_portal/api.py:L35)
-  (src/aurora/aurora-portal/aurora_portal/api.py:L43)

## Security Surface

- **sink (file-access)**: call to open: file access (src/aurora/aurora-portal/aurora_portal/api.py:L16)
- **sink (deserialization)**: call to yaml.load: deserialization of data (src/aurora/aurora-portal/aurora_portal/api.py:L17)
- **sink (http-client)**: call to requests.get: outgoing HTTP request (src/aurora/aurora-portal/aurora_portal/api.py:L21–L25)
- **sink (command-exec)**: call to os.system: process / shell execution (src/aurora/aurora-portal/aurora_portal/api.py:L31)
- **sink (file-access)**: call to open: file access (src/aurora/aurora-portal/aurora_portal/api.py:L35)
- **sink (command-exec)**: call to subprocess.run: process / shell execution (src/aurora/aurora-portal/aurora_portal/api.py:L43)
