# src/nova/virt/ironic/ironic_states.py

## Overview

This file implements the `ironic_states` module, defining 65 constants, 2 variables, 65 side effects.

Lines: total 343, code 228, comment 28, blank 87

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `VERBS` | constant | — | exported | not declared | — | `src/nova/virt/ironic/ironic_states.py:L28–L43` |
| `NOSTATE` | constant | — | exported | not declared | — | `src/nova/virt/ironic/ironic_states.py:L56–L56` |
| `ENROLL` | constant | — | exported | not declared | — | `src/nova/virt/ironic/ironic_states.py:L63–L63` |
| `VERIFYING` | constant | — | exported | not declared | — | `src/nova/virt/ironic/ironic_states.py:L69–L69` |
| `MANAGEABLE` | constant | — | exported | not declared | — | `src/nova/virt/ironic/ironic_states.py:L72–L72` |
| `AVAILABLE` | constant | — | exported | not declared | — | `src/nova/virt/ironic/ironic_states.py:L80–L80` |
| `ACTIVE` | constant | — | exported | not declared | — | `src/nova/virt/ironic/ironic_states.py:L86–L86` |
| `DEPLOY` | constant | — | exported | not declared | — | `src/nova/virt/ironic/ironic_states.py:L89–L89` |
| `DEPLOYWAIT` | constant | — | exported | not declared | — | `src/nova/virt/ironic/ironic_states.py:L94–L94` |
| `DEPLOYING` | constant | — | exported | not declared | — | `src/nova/virt/ironic/ironic_states.py:L101–L101` |
| `DEPLOYFAIL` | constant | — | exported | not declared | — | `src/nova/virt/ironic/ironic_states.py:L110–L110` |
| `DEPLOYDONE` | constant | — | exported | not declared | — | `src/nova/virt/ironic/ironic_states.py:L113–L113` |
| `DEPLOYHOLD` | constant | — | exported | not declared | — | `src/nova/virt/ironic/ironic_states.py:L120–L120` |
| `DELETING` | constant | — | exported | not declared | — | `src/nova/virt/ironic/ironic_states.py:L123–L123` |
| `DELETED` | constant | — | exported | not declared | — | `src/nova/virt/ironic/ironic_states.py:L126–L126` |
| `CLEANING` | constant | — | exported | not declared | — | `src/nova/virt/ironic/ironic_states.py:L133–L133` |
| `UNDEPLOY` | constant | — | exported | not declared | — | `src/nova/virt/ironic/ironic_states.py:L136–L136` |
| `CLEANWAIT` | constant | — | exported | not declared | — | `src/nova/virt/ironic/ironic_states.py:L142–L142` |
| `CLEANFAIL` | constant | — | exported | not declared | — | `src/nova/virt/ironic/ironic_states.py:L149–L149` |
| `CLEANHOLD` | constant | — | exported | not declared | — | `src/nova/virt/ironic/ironic_states.py:L152–L152` |
| `ERROR` | constant | — | exported | not declared | — | `src/nova/virt/ironic/ironic_states.py:L155–L155` |
| `REBUILD` | constant | — | exported | not declared | — | `src/nova/virt/ironic/ironic_states.py:L161–L161` |
| `INSPECTING` | constant | — | exported | not declared | — | `src/nova/virt/ironic/ironic_states.py:L168–L168` |
| `INSPECTFAIL` | constant | — | exported | not declared | — | `src/nova/virt/ironic/ironic_states.py:L176–L176` |
| `INSPECTWAIT` | constant | — | exported | not declared | — | `src/nova/virt/ironic/ironic_states.py:L179–L179` |
| `ADOPTING` | constant | — | exported | not declared | — | `src/nova/virt/ironic/ironic_states.py:L186–L186` |
| `ADOPTFAIL` | constant | — | exported | not declared | — | `src/nova/virt/ironic/ironic_states.py:L194–L194` |
| `RESCUE` | constant | — | exported | not declared | — | `src/nova/virt/ironic/ironic_states.py:L202–L202` |
| `RESCUEFAIL` | constant | — | exported | not declared | — | `src/nova/virt/ironic/ironic_states.py:L205–L205` |
| `RESCUEWAIT` | constant | — | exported | not declared | — | `src/nova/virt/ironic/ironic_states.py:L208–L208` |
| `RESCUING` | constant | — | exported | not declared | — | `src/nova/virt/ironic/ironic_states.py:L215–L215` |
| `UNRESCUEFAIL` | constant | — | exported | not declared | — | `src/nova/virt/ironic/ironic_states.py:L218–L218` |
| `UNRESCUING` | constant | — | exported | not declared | — | `src/nova/virt/ironic/ironic_states.py:L221–L221` |
| `SERVICE` | constant | — | exported | not declared | — | `src/nova/virt/ironic/ironic_states.py:L224–L224` |
| `SERVICING` | constant | — | exported | not declared | — | `src/nova/virt/ironic/ironic_states.py:L227–L227` |
| `SERVICEWAIT` | constant | — | exported | not declared | — | `src/nova/virt/ironic/ironic_states.py:L230–L230` |
| `SERVICEFAIL` | constant | — | exported | not declared | — | `src/nova/virt/ironic/ironic_states.py:L233–L233` |
| `SERVICEHOLD` | constant | — | exported | not declared | — | `src/nova/virt/ironic/ironic_states.py:L236–L236` |
| `SERVICING_STATES` | constant | — | exported | not declared | — | `src/nova/virt/ironic/ironic_states.py:L241–L242` |
| `UPDATE_ALLOWED_STATES` | constant | — | exported | not declared | — | `src/nova/virt/ironic/ironic_states.py:L247–L249` |
| `DELETE_ALLOWED_STATES` | constant | — | exported | not declared | — | `src/nova/virt/ironic/ironic_states.py:L252–L252` |
| `STABLE_STATES` | constant | — | exported | not declared | — | `src/nova/virt/ironic/ironic_states.py:L255–L255` |
| `UNSTABLE_STATES` | constant | — | exported | not declared | — | `src/nova/virt/ironic/ironic_states.py:L258–L260` |
| `STUCK_STATES_TREATED_AS_FAIL` | constant | — | exported | not declared | — | `src/nova/virt/ironic/ironic_states.py:L263–L265` |
| `_LOOKUP_ALLOWED_STATES` | variable | — | unexported | not declared | — | `src/nova/virt/ironic/ironic_states.py:L273–L274` |
| `LOOKUP_ALLOWED_STATES` | constant | — | exported | not declared | — | `src/nova/virt/ironic/ironic_states.py:L275–L275` |
| `_FASTTRACK_LOOKUP_ALLOWED_STATES` | variable | — | unexported | not declared | — | `src/nova/virt/ironic/ironic_states.py:L279–L285` |
| `FASTTRACK_LOOKUP_ALLOWED_STATES` | constant | — | exported | not declared | — | `src/nova/virt/ironic/ironic_states.py:L286–L286` |
| `FAILURE_STATES` | constant | — | exported | not declared | — | `src/nova/virt/ironic/ironic_states.py:L289–L291` |
| `ALL_STATES` | constant | — | exported | not declared | — | `src/nova/virt/ironic/ironic_states.py:L295–L300` |
| `POWER_ON` | constant | — | exported | not declared | — | `src/nova/virt/ironic/ironic_states.py:L306–L306` |
| `POWER_OFF` | constant | — | exported | not declared | — | `src/nova/virt/ironic/ironic_states.py:L309–L309` |
| `REBOOT` | constant | — | exported | not declared | — | `src/nova/virt/ironic/ironic_states.py:L312–L312` |
| `SOFT_REBOOT` | constant | — | exported | not declared | — | `src/nova/virt/ironic/ironic_states.py:L315–L315` |
| `SOFT_POWER_OFF` | constant | — | exported | not declared | — | `src/nova/virt/ironic/ironic_states.py:L318–L318` |
| `ALLOCATING` | constant | — | exported | not declared | — | `src/nova/virt/ironic/ironic_states.py:L325–L325` |
| `PROVISIONING` | constant | — | exported | not declared | — | `src/nova/virt/ironic/ironic_states.py:L333–L333` |
| `TAKEOVER` | constant | — | exported | not declared | — | `src/nova/virt/ironic/ironic_states.py:L334–L334` |
| `INTROSPECTION` | constant | — | exported | not declared | — | `src/nova/virt/ironic/ironic_states.py:L335–L335` |
| `CONDUCTOR` | constant | — | exported | not declared | — | `src/nova/virt/ironic/ironic_states.py:L336–L336` |
| `TRANSITION` | constant | — | exported | not declared | — | `src/nova/virt/ironic/ironic_states.py:L337–L337` |
| `STARTFAIL` | constant | — | exported | not declared | — | `src/nova/virt/ironic/ironic_states.py:L338–L338` |
| `UNPROVISION` | constant | — | exported | not declared | — | `src/nova/virt/ironic/ironic_states.py:L339–L339` |
| `ADOPTION` | constant | — | exported | not declared | — | `src/nova/virt/ironic/ironic_states.py:L340–L340` |
| `CONSOLE` | constant | — | exported | not declared | — | `src/nova/virt/ironic/ironic_states.py:L341–L341` |
| `MONITORING` | constant | — | exported | not declared | — | `src/nova/virt/ironic/ironic_states.py:L342–L342` |
| `VERIFY` | constant | — | exported | not declared | — | `src/nova/virt/ironic/ironic_states.py:L343–L343` |

## Dependencies

None.

## Side Effects

- **global-mutation**: VERBS = { (src/nova/virt/ironic/ironic_states.py:L28)
- **global-mutation**: NOSTATE = None (src/nova/virt/ironic/ironic_states.py:L56)
- **global-mutation**: ENROLL = 'enroll' (src/nova/virt/ironic/ironic_states.py:L63)
- **global-mutation**: VERIFYING = 'verifying' (src/nova/virt/ironic/ironic_states.py:L69)
- **global-mutation**: MANAGEABLE = 'manageable' (src/nova/virt/ironic/ironic_states.py:L72)
- **global-mutation**: AVAILABLE = 'available' (src/nova/virt/ironic/ironic_states.py:L80)
- **global-mutation**: ACTIVE = 'active' (src/nova/virt/ironic/ironic_states.py:L86)
- **global-mutation**: DEPLOY = 'deploy' (src/nova/virt/ironic/ironic_states.py:L89)
- **global-mutation**: DEPLOYWAIT = 'wait call-back' (src/nova/virt/ironic/ironic_states.py:L94)
- **global-mutation**: DEPLOYING = 'deploying' (src/nova/virt/ironic/ironic_states.py:L101)
- **global-mutation**: DEPLOYFAIL = 'deploy failed' (src/nova/virt/ironic/ironic_states.py:L110)
- **global-mutation**: DEPLOYDONE = 'deploy complete' (src/nova/virt/ironic/ironic_states.py:L113)
- **global-mutation**: DEPLOYHOLD = 'deploy hold' (src/nova/virt/ironic/ironic_states.py:L120)
- **global-mutation**: DELETING = 'deleting' (src/nova/virt/ironic/ironic_states.py:L123)
- **global-mutation**: DELETED = 'deleted' (src/nova/virt/ironic/ironic_states.py:L126)
- **global-mutation**: CLEANING = 'cleaning' (src/nova/virt/ironic/ironic_states.py:L133)
- **global-mutation**: UNDEPLOY = 'undeploy' (src/nova/virt/ironic/ironic_states.py:L136)
- **global-mutation**: CLEANWAIT = 'clean wait' (src/nova/virt/ironic/ironic_states.py:L142)
- **global-mutation**: CLEANFAIL = 'clean failed' (src/nova/virt/ironic/ironic_states.py:L149)
- **global-mutation**: CLEANHOLD = 'clean hold' (src/nova/virt/ironic/ironic_states.py:L152)
- **global-mutation**: ERROR = 'error' (src/nova/virt/ironic/ironic_states.py:L155)
- **global-mutation**: REBUILD = 'rebuild' (src/nova/virt/ironic/ironic_states.py:L161)
- **global-mutation**: INSPECTING = 'inspecting' (src/nova/virt/ironic/ironic_states.py:L168)
- **global-mutation**: INSPECTFAIL = 'inspect failed' (src/nova/virt/ironic/ironic_states.py:L176)
- **global-mutation**: INSPECTWAIT = 'inspect wait' (src/nova/virt/ironic/ironic_states.py:L179)
- **global-mutation**: ADOPTING = 'adopting' (src/nova/virt/ironic/ironic_states.py:L186)
- **global-mutation**: ADOPTFAIL = 'adopt failed' (src/nova/virt/ironic/ironic_states.py:L194)
- **global-mutation**: RESCUE = 'rescue' (src/nova/virt/ironic/ironic_states.py:L202)
- **global-mutation**: RESCUEFAIL = 'rescue failed' (src/nova/virt/ironic/ironic_states.py:L205)
- **global-mutation**: RESCUEWAIT = 'rescue wait' (src/nova/virt/ironic/ironic_states.py:L208)
- **global-mutation**: RESCUING = 'rescuing' (src/nova/virt/ironic/ironic_states.py:L215)
- **global-mutation**: UNRESCUEFAIL = 'unrescue failed' (src/nova/virt/ironic/ironic_states.py:L218)
- **global-mutation**: UNRESCUING = 'unrescuing' (src/nova/virt/ironic/ironic_states.py:L221)
- **global-mutation**: SERVICE = 'service' (src/nova/virt/ironic/ironic_states.py:L224)
- **global-mutation**: SERVICING = 'servicing' (src/nova/virt/ironic/ironic_states.py:L227)
- **global-mutation**: SERVICEWAIT = 'service wait' (src/nova/virt/ironic/ironic_states.py:L230)
- **global-mutation**: SERVICEFAIL = 'service failed' (src/nova/virt/ironic/ironic_states.py:L233)
- **global-mutation**: SERVICEHOLD = 'service hold' (src/nova/virt/ironic/ironic_states.py:L236)
- **global-mutation**: SERVICING_STATES = frozenset((SERVICING, SERVICEWAIT, (src/nova/virt/ironic/ironic_states.py:L241)
- **global-mutation**: UPDATE_ALLOWED_STATES = (DEPLOYFAIL, INSPECTING, INSPECTFAIL, INSPECTWAIT, (src/nova/virt/ironic/ironic_states.py:L247)
- **global-mutation**: DELETE_ALLOWED_STATES = (MANAGEABLE, ENROLL, ADOPTFAIL) (src/nova/virt/ironic/ironic_states.py:L252)
- **global-mutation**: STABLE_STATES = (ENROLL, MANAGEABLE, AVAILABLE, ACTIVE, ERROR, RESCUE) (src/nova/virt/ironic/ironic_states.py:L255)
- **global-mutation**: UNSTABLE_STATES = (DEPLOYING, DEPLOYWAIT, CLEANING, CLEANWAIT, VERIFYING, (src/nova/virt/ironic/ironic_states.py:L258)
- **global-mutation**: STUCK_STATES_TREATED_AS_FAIL = (DEPLOYING, CLEANING, VERIFYING, INSPECTING, (src/nova/virt/ironic/ironic_states.py:L263)
- **global-mutation**: LOOKUP_ALLOWED_STATES = frozenset(_LOOKUP_ALLOWED_STATES) (src/nova/virt/ironic/ironic_states.py:L275)
- **global-mutation**: FASTTRACK_LOOKUP_ALLOWED_STATES = frozenset(_FASTTRACK_LOOKUP_ALLOWED_STATES) (src/nova/virt/ironic/ironic_states.py:L286)
- **global-mutation**: FAILURE_STATES = frozenset((DEPLOYFAIL, CLEANFAIL, INSPECTFAIL, (src/nova/virt/ironic/ironic_states.py:L289)
- **global-mutation**: ALL_STATES = frozenset((ACTIVE, ADOPTFAIL, ADOPTING, AVAILABLE, CLEANFAIL, (src/nova/virt/ironic/ironic_states.py:L295)
- **global-mutation**: POWER_ON = 'power on' (src/nova/virt/ironic/ironic_states.py:L306)
- **global-mutation**: POWER_OFF = 'power off' (src/nova/virt/ironic/ironic_states.py:L309)
- **global-mutation**: REBOOT = 'rebooting' (src/nova/virt/ironic/ironic_states.py:L312)
- **global-mutation**: SOFT_REBOOT = 'soft rebooting' (src/nova/virt/ironic/ironic_states.py:L315)
- **global-mutation**: SOFT_POWER_OFF = 'soft power off' (src/nova/virt/ironic/ironic_states.py:L318)
- **global-mutation**: ALLOCATING = 'allocating' (src/nova/virt/ironic/ironic_states.py:L325)
- **global-mutation**: PROVISIONING = "provisioning" (src/nova/virt/ironic/ironic_states.py:L333)
- **global-mutation**: TAKEOVER = "takeover" (src/nova/virt/ironic/ironic_states.py:L334)
- **global-mutation**: INTROSPECTION = "introspection" (src/nova/virt/ironic/ironic_states.py:L335)
- **global-mutation**: CONDUCTOR = "conductor" (src/nova/virt/ironic/ironic_states.py:L336)
- **global-mutation**: TRANSITION = "transition" (src/nova/virt/ironic/ironic_states.py:L337)
- **global-mutation**: STARTFAIL = "startup failure" (src/nova/virt/ironic/ironic_states.py:L338)
- **global-mutation**: UNPROVISION = "unprovision" (src/nova/virt/ironic/ironic_states.py:L339)
- **global-mutation**: ADOPTION = "adoption" (src/nova/virt/ironic/ironic_states.py:L340)
- **global-mutation**: CONSOLE = "console" (src/nova/virt/ironic/ironic_states.py:L341)
- **global-mutation**: MONITORING = "monitoring" (src/nova/virt/ironic/ironic_states.py:L342)
- **global-mutation**: VERIFY = "verify" (src/nova/virt/ironic/ironic_states.py:L343)

