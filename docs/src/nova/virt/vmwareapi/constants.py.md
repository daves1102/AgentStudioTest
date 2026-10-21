# src/nova/virt/vmwareapi/constants.py

## Overview

This file implements the `constants` module, defining 40 constants, 2 imports, 41 side effects.

Lines: total 235, code 197, comment 21, blank 17

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `MIN_VC_VERSION` | constant | — | exported | not declared | — | `src/nova/virt/vmwareapi/constants.py:L22–L22` |
| `NEXT_MIN_VC_VERSION` | constant | — | exported | not declared | — | `src/nova/virt/vmwareapi/constants.py:L23–L23` |
| `MIN_VC_OVS_VERSION` | constant | — | exported | not declared | — | `src/nova/virt/vmwareapi/constants.py:L25–L25` |
| `DISK_FORMAT_ISO` | constant | — | exported | not declared | — | `src/nova/virt/vmwareapi/constants.py:L27–L27` |
| `DISK_FORMAT_VMDK` | constant | — | exported | not declared | — | `src/nova/virt/vmwareapi/constants.py:L28–L28` |
| `DISK_FORMAT_ISCSI` | constant | — | exported | not declared | — | `src/nova/virt/vmwareapi/constants.py:L29–L29` |
| `DISK_FORMAT_FCD` | constant | — | exported | not declared | — | `src/nova/virt/vmwareapi/constants.py:L30–L30` |
| `DISK_FORMATS_ALL` | constant | — | exported | not declared | — | `src/nova/virt/vmwareapi/constants.py:L31–L31` |
| `DISK_TYPE_THIN` | constant | — | exported | not declared | — | `src/nova/virt/vmwareapi/constants.py:L33–L33` |
| `CONTAINER_FORMAT_BARE` | constant | — | exported | not declared | — | `src/nova/virt/vmwareapi/constants.py:L34–L34` |
| `CONTAINER_FORMAT_OVA` | constant | — | exported | not declared | — | `src/nova/virt/vmwareapi/constants.py:L35–L35` |
| `CONTAINER_FORMATS_ALL` | constant | — | exported | not declared | — | `src/nova/virt/vmwareapi/constants.py:L36–L36` |
| `DISK_TYPE_SPARSE` | constant | — | exported | not declared | — | `src/nova/virt/vmwareapi/constants.py:L38–L38` |
| `DISK_TYPE_PREALLOCATED` | constant | — | exported | not declared | — | `src/nova/virt/vmwareapi/constants.py:L39–L39` |
| `DISK_TYPE_STREAM_OPTIMIZED` | constant | — | exported | not declared | — | `src/nova/virt/vmwareapi/constants.py:L40–L40` |
| `DISK_TYPE_EAGER_ZEROED_THICK` | constant | — | exported | not declared | — | `src/nova/virt/vmwareapi/constants.py:L41–L41` |
| `DATASTORE_TYPE_VMFS` | constant | — | exported | not declared | — | `src/nova/virt/vmwareapi/constants.py:L43–L43` |
| `DATASTORE_TYPE_NFS` | constant | — | exported | not declared | — | `src/nova/virt/vmwareapi/constants.py:L44–L44` |
| `DATASTORE_TYPE_NFS41` | constant | — | exported | not declared | — | `src/nova/virt/vmwareapi/constants.py:L45–L45` |
| `DATASTORE_TYPE_VSAN` | constant | — | exported | not declared | — | `src/nova/virt/vmwareapi/constants.py:L46–L46` |
| `DEFAULT_VIF_MODEL` | constant | — | exported | not declared | — | `src/nova/virt/vmwareapi/constants.py:L48–L48` |
| `DEFAULT_OS_TYPE` | constant | — | exported | not declared | — | `src/nova/virt/vmwareapi/constants.py:L49–L49` |
| `DEFAULT_ADAPTER_TYPE` | constant | — | exported | not declared | — | `src/nova/virt/vmwareapi/constants.py:L50–L50` |
| `DEFAULT_DISK_TYPE` | constant | — | exported | not declared | — | `src/nova/virt/vmwareapi/constants.py:L51–L51` |
| `DEFAULT_DISK_FORMAT` | constant | — | exported | not declared | — | `src/nova/virt/vmwareapi/constants.py:L52–L52` |
| `DEFAULT_CONTAINER_FORMAT` | constant | — | exported | not declared | — | `src/nova/virt/vmwareapi/constants.py:L53–L53` |
| `IMAGE_VM_PREFIX` | constant | — | exported | not declared | — | `src/nova/virt/vmwareapi/constants.py:L55–L55` |
| `SNAPSHOT_VM_PREFIX` | constant | — | exported | not declared | — | `src/nova/virt/vmwareapi/constants.py:L56–L56` |
| `ADAPTER_TYPE_BUSLOGIC` | constant | — | exported | not declared | — | `src/nova/virt/vmwareapi/constants.py:L58–L58` |
| `ADAPTER_TYPE_IDE` | constant | — | exported | not declared | — | `src/nova/virt/vmwareapi/constants.py:L59–L59` |
| `ADAPTER_TYPE_LSILOGICSAS` | constant | — | exported | not declared | — | `src/nova/virt/vmwareapi/constants.py:L60–L60` |
| `ADAPTER_TYPE_PARAVIRTUAL` | constant | — | exported | not declared | — | `src/nova/virt/vmwareapi/constants.py:L61–L61` |
| `SCSI_ADAPTER_TYPES` | constant | — | exported | not declared | — | `src/nova/virt/vmwareapi/constants.py:L63–L64` |
| `SUPPORTED_FLAT_VARIANTS` | constant | — | exported | not declared | — | `src/nova/virt/vmwareapi/constants.py:L66–L66` |
| `EXTENSION_KEY` | constant | — | exported | not declared | — | `src/nova/virt/vmwareapi/constants.py:L68–L68` |
| `EXTENSION_TYPE_INSTANCE` | constant | — | exported | not declared | — | `src/nova/virt/vmwareapi/constants.py:L69–L69` |
| `SCSI_MAX_CONNECT_NUMBER` | constant | — | exported | not declared | — | `src/nova/virt/vmwareapi/constants.py:L73–L73` |
| `SCSI_MAX_CONTROLLER_NUMBER` | constant | — | exported | not declared | — | `src/nova/virt/vmwareapi/constants.py:L76–L76` |
| `VALID_OS_TYPES` | constant | — | exported | not declared | — | `src/nova/virt/vmwareapi/constants.py:L82–L231` |
| `POWER_STATES` | constant | — | exported | not declared | — | `src/nova/virt/vmwareapi/constants.py:L233–L235` |

## Dependencies

- `nova.compute`: imports `power_state` (src/nova/virt/vmwareapi/constants.py:L19)
- `nova.network`: imports `model as network_model` (src/nova/virt/vmwareapi/constants.py:L20)

## Side Effects

- **network**: EXTENSION_KEY = 'org.openstack.compute' (src/nova/virt/vmwareapi/constants.py:L68)
- **global-mutation**: MIN_VC_VERSION = '5.1.0' (src/nova/virt/vmwareapi/constants.py:L22)
- **global-mutation**: NEXT_MIN_VC_VERSION = '5.5.0' (src/nova/virt/vmwareapi/constants.py:L23)
- **global-mutation**: MIN_VC_OVS_VERSION = '5.5.0' (src/nova/virt/vmwareapi/constants.py:L25)
- **global-mutation**: DISK_FORMAT_ISO = 'iso' (src/nova/virt/vmwareapi/constants.py:L27)
- **global-mutation**: DISK_FORMAT_VMDK = 'vmdk' (src/nova/virt/vmwareapi/constants.py:L28)
- **global-mutation**: DISK_FORMAT_ISCSI = 'iscsi' (src/nova/virt/vmwareapi/constants.py:L29)
- **global-mutation**: DISK_FORMAT_FCD = 'vstorageobject' (src/nova/virt/vmwareapi/constants.py:L30)
- **global-mutation**: DISK_FORMATS_ALL = [DISK_FORMAT_ISO, DISK_FORMAT_VMDK, DISK_FORMAT_FCD] (src/nova/virt/vmwareapi/constants.py:L31)
- **global-mutation**: DISK_TYPE_THIN = 'thin' (src/nova/virt/vmwareapi/constants.py:L33)
- **global-mutation**: CONTAINER_FORMAT_BARE = 'bare' (src/nova/virt/vmwareapi/constants.py:L34)
- **global-mutation**: CONTAINER_FORMAT_OVA = 'ova' (src/nova/virt/vmwareapi/constants.py:L35)
- **global-mutation**: CONTAINER_FORMATS_ALL = [CONTAINER_FORMAT_BARE, CONTAINER_FORMAT_OVA] (src/nova/virt/vmwareapi/constants.py:L36)
- **global-mutation**: DISK_TYPE_SPARSE = 'sparse' (src/nova/virt/vmwareapi/constants.py:L38)
- **global-mutation**: DISK_TYPE_PREALLOCATED = 'preallocated' (src/nova/virt/vmwareapi/constants.py:L39)
- **global-mutation**: DISK_TYPE_STREAM_OPTIMIZED = 'streamOptimized' (src/nova/virt/vmwareapi/constants.py:L40)
- **global-mutation**: DISK_TYPE_EAGER_ZEROED_THICK = 'eagerZeroedThick' (src/nova/virt/vmwareapi/constants.py:L41)
- **global-mutation**: DATASTORE_TYPE_VMFS = 'VMFS' (src/nova/virt/vmwareapi/constants.py:L43)
- **global-mutation**: DATASTORE_TYPE_NFS = 'NFS' (src/nova/virt/vmwareapi/constants.py:L44)
- **global-mutation**: DATASTORE_TYPE_NFS41 = 'NFS41' (src/nova/virt/vmwareapi/constants.py:L45)
- **global-mutation**: DATASTORE_TYPE_VSAN = 'vsan' (src/nova/virt/vmwareapi/constants.py:L46)
- **global-mutation**: DEFAULT_VIF_MODEL = network_model.VIF_MODEL_E1000 (src/nova/virt/vmwareapi/constants.py:L48)
- **global-mutation**: DEFAULT_OS_TYPE = "otherGuest" (src/nova/virt/vmwareapi/constants.py:L49)
- **global-mutation**: DEFAULT_ADAPTER_TYPE = "lsiLogic" (src/nova/virt/vmwareapi/constants.py:L50)
- **global-mutation**: DEFAULT_DISK_TYPE = DISK_TYPE_PREALLOCATED (src/nova/virt/vmwareapi/constants.py:L51)
- **global-mutation**: DEFAULT_DISK_FORMAT = DISK_FORMAT_VMDK (src/nova/virt/vmwareapi/constants.py:L52)
- **global-mutation**: DEFAULT_CONTAINER_FORMAT = CONTAINER_FORMAT_BARE (src/nova/virt/vmwareapi/constants.py:L53)
- **global-mutation**: IMAGE_VM_PREFIX = "OSTACK_IMG" (src/nova/virt/vmwareapi/constants.py:L55)
- **global-mutation**: SNAPSHOT_VM_PREFIX = "OSTACK_SNAP" (src/nova/virt/vmwareapi/constants.py:L56)
- **global-mutation**: ADAPTER_TYPE_BUSLOGIC = "busLogic" (src/nova/virt/vmwareapi/constants.py:L58)
- **global-mutation**: ADAPTER_TYPE_IDE = "ide" (src/nova/virt/vmwareapi/constants.py:L59)
- **global-mutation**: ADAPTER_TYPE_LSILOGICSAS = "lsiLogicsas" (src/nova/virt/vmwareapi/constants.py:L60)
- **global-mutation**: ADAPTER_TYPE_PARAVIRTUAL = "paraVirtual" (src/nova/virt/vmwareapi/constants.py:L61)
- **global-mutation**: SCSI_ADAPTER_TYPES = [DEFAULT_ADAPTER_TYPE, ADAPTER_TYPE_LSILOGICSAS, (src/nova/virt/vmwareapi/constants.py:L63)
- **global-mutation**: SUPPORTED_FLAT_VARIANTS = ["thin", "preallocated", "thick", "eagerZeroedThick"] (src/nova/virt/vmwareapi/constants.py:L66)
- **global-mutation**: EXTENSION_KEY = 'org.openstack.compute' (src/nova/virt/vmwareapi/constants.py:L68)
- **global-mutation**: EXTENSION_TYPE_INSTANCE = 'instance' (src/nova/virt/vmwareapi/constants.py:L69)
- **global-mutation**: SCSI_MAX_CONNECT_NUMBER = 15 (src/nova/virt/vmwareapi/constants.py:L73)
- **global-mutation**: SCSI_MAX_CONTROLLER_NUMBER = 4 (src/nova/virt/vmwareapi/constants.py:L76)
- **global-mutation**: VALID_OS_TYPES = set([ (src/nova/virt/vmwareapi/constants.py:L82)
- **global-mutation**: POWER_STATES = {'poweredOff': power_state.SHUTDOWN, (src/nova/virt/vmwareapi/constants.py:L233)

