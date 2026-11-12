# Aurora Cloud Stack

Aurora Cloud Stack is the control plane distribution used by the Aurora
public and sovereign cloud regions. The distribution is made of six
components that are released together as one versioned delivery.

| Component        | Language | Purpose                                   |
|------------------|----------|-------------------------------------------|
| aurora-compute   | Go       | Instance lifecycle and scheduling          |
| aurora-network   | C        | Data path helpers and flow programming     |
| aurora-storage   | C++      | Object storage daemon and replication      |
| aurora-identity  | Java     | Authentication, tokens and tenancy         |
| aurora-portal    | Python   | Tenant facing API and web portal           |
| aurora-cli       | Node.js  | Operator command line client               |

## Building

Each component builds independently. See `docs/BUILD.md`.

## Release contents

A release is delivered as a signed and encrypted package. See
`docs/RELEASE.md` for the package layout and the verification steps.
