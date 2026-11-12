# Release package

A release is delivered as a directory containing

- `release.json` describing the release and the parts
- `parts.sha256` listing the digest of every encrypted part
- `release.json.sig` and `parts.sha256.sig`, detached signatures
- `part-0000.bin` and further parts, each an encrypted archive slice
- `READY`, written last, marking the release as complete

The receiving side verifies the signatures, verifies the part digests,
decrypts the parts, reassembles the archive and verifies the manifest
held inside the archive before any file is used.
