# src/payload_plaintext/aurora-portal/aurora_portal/api.py

## Overview

`api.py` provides top-level utility functions for the Aurora Portal service: loading a YAML-formatted quota profile from disk, fetching a project record from the Aurora REST API, exporting a project report via a shell command, rendering a simple `{{ key }}` template from a file, and invoking an arbitrary subprocess command. The file also declares two module-level constants — a database password and the API base URL. It depends on the third-party `requests` and `yaml` libraries.

## Defined Symbols

| Name | Kind | Signature | Visibility | Lines |
|---|---|---|---|---|
| `DATABASE_PASSWORD` | module-level constant | `str` | module | `api.py:L10` |
| `API_BASE` | module-level constant | `str` | module | `api.py:L12` |
| `load_quota_profile` | function | `(path: str) -> Any` | module | `api.py:L15–L17` |
| `fetch_project` | function | `(project_id: str, token: str) -> Any` | module | `api.py:L20–L26` |
| `export_report` | function | `(project_id: str, destination: str) -> int` | module | `api.py:L29–L31` |
| `render_template` | function | `(template_path: str, context: dict) -> str` | module | `api.py:L34–L39` |
| `call_backend` | function | `(argv: list) -> subprocess.CompletedProcess` | module | `api.py:L42–L43` |

## Dependencies

- `os` — used for shell command execution via `os.system` (`api.py:L4`)
- `subprocess` — used to spawn subprocesses in `call_backend` (`api.py:L5`)
- `requests` — used for outbound HTTP calls in `fetch_project` (`api.py:L7`)
- `yaml` — used for YAML deserialisation in `load_quota_profile` (`api.py:L8`)

## Side Effects

- **File-system read:** `load_quota_profile` opens the caller-supplied `path` and reads its full contents (`api.py:L16–L17`)
- **Network call:** `fetch_project` issues a GET request to `https://api.aurora.example.com/v1/projects/<project_id>` with a Bearer token header (`api.py:L21–L25`)
- **Process spawn:** `export_report` executes `aurora-cli report --project <project_id> > <destination>` via `os.system` (`api.py:L30–L31`)
- **File-system read:** `render_template` opens the caller-supplied `template_path` and reads its full contents (`api.py:L35–L36`)
- **Process spawn:** `call_backend` passes the caller-supplied `argv` list to `subprocess.run` (`api.py:L43`)

## Security Surface

- **Hardcoded credential:** `DATABASE_PASSWORD` is assigned a plaintext password literal directly in source (`api.py:L10`)
- **Command injection:** `export_report` constructs a shell command by string interpolation of `project_id` and `destination` then executes it with `os.system()` — neither argument is sanitised (`api.py:L30–L31`)
- **Insecure deserialization:** `load_quota_profile` calls `yaml.load(handle.read())` without a `Loader` argument, allowing arbitrary Python object instantiation from the caller-supplied file (`api.py:L17`)
- **TLS verification disabled:** `fetch_project` passes `verify=False` to `requests.get()`, disabling certificate verification (`api.py:L24`)
- **Input entry point — function parameter:** `fetch_project(project_id, token)`: `project_id` is interpolated into the request URL; `token` is sent as a Bearer header (`api.py:L20–L26`)
- **Input entry point — function parameter:** `export_report(project_id, destination)`: both parameters are interpolated unescaped into the shell command string (`api.py:L29–L31`)
- **Input entry point — function parameter:** `call_backend(argv)`: the argv list is passed directly to `subprocess.run()` without validation (`api.py:L42–L43`)
- **Network sink:** `fetch_project` returns the response body (parsed JSON) to the caller; outbound request carries the Bearer token (`api.py:L21–L26`)
