# src/nova/tests/fixtures/libvirt.py

## Overview

This file implements the `libvirt` module, defining 17 classs, 1 classmethod, 152 constants, 27 fields, 16 functions, 149 methods, 1 property, 8 variables, 17 imports, 154 side effects, 3 security surface entries.

Lines: total 2863, code 2249, comment 150, blank 464

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `allow_default_uri_connection` | variable | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L36–L36` |
| `connection_used` | variable | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L39–L39` |
| `_reset` | function | — | unexported | not declared | 1/3 | `src/nova/tests/fixtures/libvirt.py:L42–L44` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L47–L47` |
| `CONF` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L48–L48` |
| `VIR_DOMAIN_NOSTATE` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L51–L51` |
| `VIR_DOMAIN_RUNNING` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L52–L52` |
| `VIR_DOMAIN_BLOCKED` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L53–L53` |
| `VIR_DOMAIN_PAUSED` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L54–L54` |
| `VIR_DOMAIN_SHUTDOWN` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L55–L55` |
| `VIR_DOMAIN_SHUTOFF` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L56–L56` |
| `VIR_DOMAIN_CRASHED` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L57–L57` |
| `VIR_DOMAIN_XML_SECURE` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L60–L60` |
| `VIR_DOMAIN_XML_INACTIVE` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L61–L61` |
| `VIR_DOMAIN_XML_UPDATE_CPU` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L62–L62` |
| `VIR_DOMAIN_XML_MIGRATABLE` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L63–L63` |
| `VIR_DOMAIN_BLOCK_COPY_SHALLOW` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L65–L65` |
| `VIR_DOMAIN_BLOCK_COPY_REUSE_EXT` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L66–L66` |
| `VIR_DOMAIN_BLOCK_COPY_TRANSIENT_JOB` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L67–L67` |
| `VIR_DOMAIN_BLOCK_REBASE_SHALLOW` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L69–L69` |
| `VIR_DOMAIN_BLOCK_REBASE_REUSE_EXT` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L70–L70` |
| `VIR_DOMAIN_BLOCK_REBASE_COPY` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L71–L71` |
| `VIR_DOMAIN_BLOCK_REBASE_RELATIVE` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L72–L72` |
| `VIR_DOMAIN_BLOCK_REBASE_COPY_DEV` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L73–L73` |
| `VIR_DOMAIN_BLOCK_RESIZE_BYTES` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L76–L76` |
| `VIR_DOMAIN_BLOCK_JOB_ABORT_ASYNC` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L78–L78` |
| `VIR_DOMAIN_BLOCK_JOB_ABORT_PIVOT` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L79–L79` |
| `VIR_DOMAIN_EVENT_ID_LIFECYCLE` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L81–L81` |
| `VIR_DOMAIN_EVENT_DEFINED` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L83–L83` |
| `VIR_DOMAIN_EVENT_UNDEFINED` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L84–L84` |
| `VIR_DOMAIN_EVENT_STARTED` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L85–L85` |
| `VIR_DOMAIN_EVENT_SUSPENDED` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L86–L86` |
| `VIR_DOMAIN_EVENT_RESUMED` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L87–L87` |
| `VIR_DOMAIN_EVENT_STOPPED` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L88–L88` |
| `VIR_DOMAIN_EVENT_SHUTDOWN` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L89–L89` |
| `VIR_DOMAIN_EVENT_PMSUSPENDED` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L90–L90` |
| `VIR_DOMAIN_EVENT_ID_DEVICE_REMOVED` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L92–L92` |
| `VIR_DOMAIN_EVENT_ID_DEVICE_REMOVAL_FAILED` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L93–L93` |
| `VIR_DOMAIN_EVENT_SUSPENDED_MIGRATED` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L95–L95` |
| `VIR_DOMAIN_EVENT_SUSPENDED_POSTCOPY` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L96–L96` |
| `VIR_DOMAIN_UNDEFINE_MANAGED_SAVE` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L98–L98` |
| `VIR_DOMAIN_UNDEFINE_NVRAM` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L99–L99` |
| `VIR_DOMAIN_UNDEFINE_KEEP_TPM` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L100–L100` |
| `VIR_DOMAIN_UNDEFINE_KEEP_NVRAM` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L101–L101` |
| `VIR_DOMAIN_AFFECT_CURRENT` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L103–L103` |
| `VIR_DOMAIN_AFFECT_LIVE` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L104–L104` |
| `VIR_DOMAIN_AFFECT_CONFIG` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L105–L105` |
| `VIR_CPU_COMPARE_ERROR` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L107–L107` |
| `VIR_CPU_COMPARE_INCOMPATIBLE` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L108–L108` |
| `VIR_CPU_COMPARE_IDENTICAL` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L109–L109` |
| `VIR_CPU_COMPARE_SUPERSET` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L110–L110` |
| `VIR_CRED_USERNAME` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L112–L112` |
| `VIR_CRED_AUTHNAME` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L113–L113` |
| `VIR_CRED_LANGUAGE` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L114–L114` |
| `VIR_CRED_CNONCE` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L115–L115` |
| `VIR_CRED_PASSPHRASE` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L116–L116` |
| `VIR_CRED_ECHOPROMPT` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L117–L117` |
| `VIR_CRED_NOECHOPROMPT` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L118–L118` |
| `VIR_CRED_REALM` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L119–L119` |
| `VIR_CRED_EXTERNAL` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L120–L120` |
| `VIR_MIGRATE_LIVE` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L122–L122` |
| `VIR_MIGRATE_PEER2PEER` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L123–L123` |
| `VIR_MIGRATE_TUNNELLED` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L124–L124` |
| `VIR_MIGRATE_PERSIST_DEST` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L125–L125` |
| `VIR_MIGRATE_UNDEFINE_SOURCE` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L126–L126` |
| `VIR_MIGRATE_NON_SHARED_INC` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L127–L127` |
| `VIR_MIGRATE_AUTO_CONVERGE` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L128–L128` |
| `VIR_MIGRATE_PARALLEL` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L129–L129` |
| `VIR_MIGRATE_PARAM_PARALLEL_CONNECTIONS` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L130–L130` |
| `VIR_MIGRATE_POSTCOPY` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L131–L131` |
| `VIR_MIGRATE_TLS` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L132–L132` |
| `VIR_NODE_CPU_STATS_ALL_CPUS` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L134–L134` |
| `VIR_DOMAIN_START_PAUSED` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L136–L136` |
| `VIR_FROM_QEMU` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L142–L142` |
| `VIR_FROM_DOMAIN` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L143–L143` |
| `VIR_FROM_SECRET` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L144–L144` |
| `VIR_FROM_NWFILTER` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L145–L145` |
| `VIR_FROM_REMOTE` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L146–L146` |
| `VIR_FROM_RPC` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L147–L147` |
| `VIR_FROM_NODEDEV` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L148–L148` |
| `VIR_ERR_INVALID_ARG` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L150–L150` |
| `VIR_ERR_NO_SUPPORT` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L151–L151` |
| `VIR_ERR_XML_ERROR` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L152–L152` |
| `VIR_ERR_XML_DETAIL` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L153–L153` |
| `VIR_ERR_NO_DOMAIN` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L154–L154` |
| `VIR_ERR_OPERATION_FAILED` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L155–L155` |
| `VIR_ERR_OPERATION_INVALID` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L156–L156` |
| `VIR_ERR_OPERATION_TIMEOUT` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L157–L157` |
| `VIR_ERR_NO_NWFILTER` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L158–L158` |
| `VIR_ERR_SYSTEM_ERROR` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L159–L159` |
| `VIR_ERR_INTERNAL_ERROR` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L160–L160` |
| `VIR_ERR_CONFIG_UNSUPPORTED` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L161–L161` |
| `VIR_ERR_NO_NODE_DEVICE` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L162–L162` |
| `VIR_ERR_INVALID_SECRET` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L163–L163` |
| `VIR_ERR_NO_SECRET` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L164–L164` |
| `VIR_ERR_AGENT_UNRESPONSIVE` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L165–L165` |
| `VIR_ERR_ARGUMENT_UNSUPPORTED` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L166–L166` |
| `VIR_ERR_OPERATION_UNSUPPORTED` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L167–L167` |
| `VIR_ERR_DEVICE_MISSING` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L168–L168` |
| `VIR_CONNECT_RO` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L170–L170` |
| `VIR_CONNECT_BASELINE_CPU_EXPAND_FEATURES` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L173–L173` |
| `VIR_DOMAIN_SNAPSHOT_CREATE_NO_METADATA` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L176–L176` |
| `VIR_DOMAIN_SNAPSHOT_CREATE_DISK_ONLY` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L177–L177` |
| `VIR_DOMAIN_SNAPSHOT_CREATE_REUSE_EXT` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L178–L178` |
| `VIR_DOMAIN_SNAPSHOT_CREATE_QUIESCE` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L179–L179` |
| `VIR_DOMAIN_BLOCK_COMMIT_RELATIVE` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L182–L182` |
| `VIR_CONNECT_LIST_DOMAINS_ACTIVE` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L185–L185` |
| `VIR_CONNECT_LIST_DOMAINS_INACTIVE` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L186–L186` |
| `VIR_CONNECT_LIST_NODE_DEVICES_CAP_PCI_DEV` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L189–L189` |
| `VIR_CONNECT_LIST_NODE_DEVICES_CAP_NET` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L190–L190` |
| `VIR_CONNECT_LIST_NODE_DEVICES_CAP_VDPA` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L191–L191` |
| `VIR_CONNECT_LIST_NODE_DEVICES_CAP_MDEV` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L192–L192` |
| `VIR_CONNECT_LIST_NODE_DEVICES_INACTIVE` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L193–L193` |
| `VIR_SECRET_USAGE_TYPE_NONE` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L196–L196` |
| `VIR_SECRET_USAGE_TYPE_VOLUME` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L197–L197` |
| `VIR_SECRET_USAGE_TYPE_CEPH` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L198–L198` |
| `VIR_SECRET_USAGE_TYPE_ISCSI` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L199–L199` |
| `VIR_SECRET_USAGE_TYPE_VTPM` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L200–L200` |
| `VIR_DOMAIN_METADATA_DESCRIPTION` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L203–L203` |
| `VIR_DOMAIN_METADATA_TITLE` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L204–L204` |
| `VIR_DOMAIN_METADATA_ELEMENT` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L205–L205` |
| `FAKE_LIBVIRT_VERSION` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L208–L209` |
| `FAKE_QEMU_VERSION` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L211–L212` |
| `PCI_VEND_ID` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L214–L214` |
| `PCI_VEND_NAME` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L215–L215` |
| `PCI_PROD_ID` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L217–L217` |
| `PCI_PROD_NAME` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L218–L218` |
| `PCI_DRIVER_NAME` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L219–L219` |
| `PF_PROD_ID` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L221–L221` |
| `PF_PROD_NAME` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L222–L222` |
| `PF_DRIVER_NAME` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L223–L223` |
| `PF_CAP_TYPE` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L224–L224` |
| `VF_PROD_ID` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L226–L226` |
| `VF_PROD_NAME` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L227–L227` |
| `VF_DRIVER_NAME` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L228–L228` |
| `VF_CAP_TYPE` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L229–L229` |
| `MDEV_CAPABLE_VEND_ID` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L231–L231` |
| `MDEV_CAPABLE_VEND_NAME` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L232–L232` |
| `MDEV_CAPABLE_PROD_ID` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L233–L233` |
| `MDEV_CAPABLE_PROD_NAME` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L234–L234` |
| `MDEV_CAPABLE_DRIVER_NAME` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L235–L235` |
| `MDEV_CAPABLE_CAP_TYPE` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L236–L236` |
| `NVIDIA_11_VGPU_TYPE` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L238–L238` |
| `NVIDIA_12_VGPU_TYPE` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L239–L239` |
| `MLX5_CORE_TYPE` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L240–L240` |
| `MDEVCAP_DEV1_PCI_ADDR` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L241–L241` |
| `MDEVCAP_DEV2_PCI_ADDR` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L242–L242` |
| `MDEVCAP_DEV3_PCI_ADDR` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L243–L243` |
| `os_uname` | variable | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L245–L247` |
| `_get_libvirt_nodedev_name` | function | (bus, slot, function) | unexported | `f'pci_0000_{bus:02x}_{slot:02x}_{function:d}'` (src/nova/tests/fixtures/libvirt.py:L252) | 1/2 | `src/nova/tests/fixtures/libvirt.py:L250–L252` |
| `FakePCIDevice` | class | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L255–L512` |
| `FakePCIDevice.pci_default_parent` | field | — | public | not declared | — | `src/nova/tests/fixtures/libvirt.py:L266–L266` |
| `FakePCIDevice.pci_device_template` | field | — | public | not declared | — | `src/nova/tests/fixtures/libvirt.py:L267–L293` |
| `FakePCIDevice.cap_templ` | field | — | public | not declared | — | `src/nova/tests/fixtures/libvirt.py:L294–L294` |
| `FakePCIDevice.addr_templ` | field | — | public | not declared | — | `src/nova/tests/fixtures/libvirt.py:L295–L295` |
| `FakePCIDevice.mdevtypes_templ` | field | — | public | not declared | — | `src/nova/tests/fixtures/libvirt.py:L296–L300` |
| `FakePCIDevice.vpd_cap_templ` | field | — | public | not declared | — | `src/nova/tests/fixtures/libvirt.py:L302–L306` |
| `FakePCIDevice.vpd_fields_templ` | field | — | public | not declared | — | `src/nova/tests/fixtures/libvirt.py:L307–L308` |
| `FakePCIDevice.vpd_field_templ` | field | — | public | not declared | — | `src/nova/tests/fixtures/libvirt.py:L309–L309` |
| `FakePCIDevice.is_capable_of_mdevs` | field | — | public | not declared | — | `src/nova/tests/fixtures/libvirt.py:L311–L311` |
| `FakePCIDevice.__init__` | method | (self, dev_type, bus, slot, function, iommu_group, numa_node, *, vf_ratio=None, multiple_gpu_types=False, generic_types=False, parent=None, vend_id=None, vend_name=None, prod_id=None, prod_name=None, driver_name=None, vpd_fields=None, mac_address=None) | public | not declared | 1/24 | `src/nova/tests/fixtures/libvirt.py:L313–L363` |
| `FakePCIDevice.generate_xml` | method | (self, skip_capability=False) | public | not declared | 32/97 | `src/nova/tests/fixtures/libvirt.py:L365–L481` |
| `FakePCIDevice.format_vpd_cap` | method | (self) | public | `''` (src/nova/tests/fixtures/libvirt.py:L485); `self.vpd_cap_templ % { 'name': self.vpd_fields.get('name', ''), 'fields': '\n'.join(fields) }` (src/nova/tests/fixtures/libvirt.py:L502) | 5/23 | `src/nova/tests/fixtures/libvirt.py:L483–L505` |
| `FakePCIDevice.XMLDesc` | method | (self, flags) | public | `self.pci_device` (src/nova/tests/fixtures/libvirt.py:L508) | 1/2 | `src/nova/tests/fixtures/libvirt.py:L507–L508` |
| `FakePCIDevice.address` | method | (self) | public | `"0000:%02x:%02x.%1x" % (self.bus, self.slot, self.function)` (src/nova/tests/fixtures/libvirt.py:L512) | 1/2 | `src/nova/tests/fixtures/libvirt.py:L511–L512` |
| `HostPCIDevicesInfo` | class | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L517–L684` |
| `HostPCIDevicesInfo.TOTAL_NUMA_NODES` | constant | — | public | not declared | — | `src/nova/tests/fixtures/libvirt.py:L520–L520` |
| `HostPCIDevicesInfo.__init__` | method | (self, num_pci=0, num_pfs=2, num_vfs=8, num_mdevcap=0, numa_node=None, multiple_gpu_types=False, generic_types=False, bus=0x81, product_ids=["1515"]) | public | `` (src/nova/tests/fixtures/libvirt.py:L550) | 15/67 | `src/nova/tests/fixtures/libvirt.py:L522–L630` |
| `HostPCIDevicesInfo.add_device` | method | (self, dev_type, bus, slot, function, iommu_group, numa_node, vf_ratio=None, multiple_gpu_types=False, generic_types=False, parent=None, vend_id=None, vend_name=None, prod_id=None, prod_name=None, driver_name=None, vpd_fields=None, mac_address=None) | public | `dev` (src/nova/tests/fixtures/libvirt.py:L662) | 1/29 | `src/nova/tests/fixtures/libvirt.py:L632–L662` |
| `HostPCIDevicesInfo._calc_numa_node` | method | (cls, dev, numa_node) | private | `dev % cls.TOTAL_NUMA_NODES if numa_node is None else numa_node` (src/nova/tests/fixtures/libvirt.py:L666) | 2/2 | `src/nova/tests/fixtures/libvirt.py:L665–L666` |
| `HostPCIDevicesInfo.get_all_devices` | method | (self) | public | `self.devices.keys()` (src/nova/tests/fixtures/libvirt.py:L669) | 1/2 | `src/nova/tests/fixtures/libvirt.py:L668–L669` |
| `HostPCIDevicesInfo.get_device_by_name` | method | (self, device_name) | public | `pci_dev` (src/nova/tests/fixtures/libvirt.py:L673) | 1/3 | `src/nova/tests/fixtures/libvirt.py:L671–L673` |
| `HostPCIDevicesInfo.get_all_mdev_capable_devices` | method | (self) | public | `[dev for dev in self.devices if self.devices[dev].is_capable_of_mdevs]` (src/nova/tests/fixtures/libvirt.py:L676) | 3/3 | `src/nova/tests/fixtures/libvirt.py:L675–L677` |
| `HostPCIDevicesInfo.get_pci_address_mac_mapping` | method | (self) | public | `{ device.address: device.mac_address for dev_addr, device in self.devices.items() if device.mac_address }` (src/nova/tests/fixtures/libvirt.py:L680) | 3/6 | `src/nova/tests/fixtures/libvirt.py:L679–L684` |
| `FakeMdevDevice` | class | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L687–L710` |
| `FakeMdevDevice.template` | field | — | public | not declared | — | `src/nova/tests/fixtures/libvirt.py:L688–L701` |
| `FakeMdevDevice.__init__` | method | (self, dev_name, type_id, parent) | public | not declared | 1/5 | `src/nova/tests/fixtures/libvirt.py:L703–L707` |
| `FakeMdevDevice.XMLDesc` | method | (self, flags) | public | `self.xml` (src/nova/tests/fixtures/libvirt.py:L710) | 1/2 | `src/nova/tests/fixtures/libvirt.py:L709–L710` |
| `HostMdevDevicesInfo` | class | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L713–L725` |
| `HostMdevDevicesInfo.__init__` | method | (self, devices=None) | public | not declared | 2/5 | `src/nova/tests/fixtures/libvirt.py:L714–L718` |
| `HostMdevDevicesInfo.get_all_devices` | method | (self) | public | `self.devices.keys()` (src/nova/tests/fixtures/libvirt.py:L721) | 1/2 | `src/nova/tests/fixtures/libvirt.py:L720–L721` |
| `HostMdevDevicesInfo.get_device_by_name` | method | (self, device_name) | public | `dev` (src/nova/tests/fixtures/libvirt.py:L725) | 1/3 | `src/nova/tests/fixtures/libvirt.py:L723–L725` |
| `FakeVDPADevice` | class | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L728–L767` |
| `FakeVDPADevice.template` | field | — | public | not declared | — | `src/nova/tests/fixtures/libvirt.py:L730–L741` |
| `FakeVDPADevice.__init__` | method | (self, name, idx, parent) | public | not declared | 1/7 | `src/nova/tests/fixtures/libvirt.py:L743–L750` |
| `FakeVDPADevice.generate_xml` | method | (self) | public | not declared | 1/13 | `src/nova/tests/fixtures/libvirt.py:L752–L764` |
| `FakeVDPADevice.XMLDesc` | method | (self, flags) | public | `self.xml` (src/nova/tests/fixtures/libvirt.py:L767) | 1/2 | `src/nova/tests/fixtures/libvirt.py:L766–L767` |
| `HostVDPADevicesInfo` | class | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L770–L787` |
| `HostVDPADevicesInfo.__init__` | method | (self) | public | not declared | 1/2 | `src/nova/tests/fixtures/libvirt.py:L772–L773` |
| `HostVDPADevicesInfo.get_all_devices` | method | (self) | public | `self.devices.keys()` (src/nova/tests/fixtures/libvirt.py:L776) | 1/2 | `src/nova/tests/fixtures/libvirt.py:L775–L776` |
| `HostVDPADevicesInfo.get_device_by_name` | method | (self, device_name) | public | `dev` (src/nova/tests/fixtures/libvirt.py:L780) | 1/3 | `src/nova/tests/fixtures/libvirt.py:L778–L780` |
| `HostVDPADevicesInfo.add_device` | method | (self, name, idx, parent) | public | `dev` (src/nova/tests/fixtures/libvirt.py:L787) | 1/5 | `src/nova/tests/fixtures/libvirt.py:L782–L787` |
| `HostInfo` | class | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L790–L817` |
| `HostInfo.__init__` | method | (self, cpu_nodes=1, cpu_sockets=1, cpu_cores=2, cpu_threads=1, kB_mem=16780000, mempages=None) | public | not declared | 1/15 | `src/nova/tests/fixtures/libvirt.py:L792–L817` |
| `NUMATopology` | class | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L820–L859` |
| `NUMATopology.__init__` | method | (self, cpu_nodes=4, cpu_sockets=1, cpu_cores=1, cpu_threads=2, kb_mem=1048576, mempages=None, **kwargs) | public | not declared | 6/26 | `src/nova/tests/fixtures/libvirt.py:L827–L859` |
| `create_mempages` | function | (mappings) | exported | `mempages` (src/nova/tests/fixtures/libvirt.py:L877) | 2/8 | `src/nova/tests/fixtures/libvirt.py:L862–L877` |
| `VIR_DOMAIN_JOB_NONE` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L880–L880` |
| `VIR_DOMAIN_JOB_BOUNDED` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L881–L881` |
| `VIR_DOMAIN_JOB_UNBOUNDED` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L882–L882` |
| `VIR_DOMAIN_JOB_COMPLETED` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L883–L883` |
| `VIR_DOMAIN_JOB_FAILED` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L884–L884` |
| `VIR_DOMAIN_JOB_CANCELLED` | constant | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L885–L885` |
| `_parse_disk_info` | function | (element) | unexported | `disk_info` (src/nova/tests/fixtures/libvirt.py:L949) | 15/50 | `src/nova/tests/fixtures/libvirt.py:L888–L949` |
| `_parse_vcpu_info` | function | (element) | unexported | `vcpu_info` (src/nova/tests/fixtures/libvirt.py:L956) | 1/5 | `src/nova/tests/fixtures/libvirt.py:L952–L956` |
| `_parse_filesystem_info` | function | (element) | unexported | `filesystem_info` (src/nova/tests/fixtures/libvirt.py:L975) | 4/13 | `src/nova/tests/fixtures/libvirt.py:L959–L975` |
| `_parse_nic_info` | function | (element) | unexported | `nic_info` (src/nova/tests/fixtures/libvirt.py:L998) | 5/16 | `src/nova/tests/fixtures/libvirt.py:L978–L998` |
| `_parse_hostdev_info` | function | (element) | unexported | `hostdev_info` (src/nova/tests/fixtures/libvirt.py:L1019) | 4/16 | `src/nova/tests/fixtures/libvirt.py:L1001–L1019` |
| `disable_event_thread` | function | (self) | exported | not declared | 1/6 | `src/nova/tests/fixtures/libvirt.py:L1022–L1044` |
| `disable_event_thread.evloop` | function | (*args, **kwargs) | public | not declared | — | `src/nova/tests/fixtures/libvirt.py:L1039–L1040` |
| `libvirtError` | class | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L1047–L1118` |
| `libvirtError.__init__` | method | (self, defmsg, conn=None, dom=None, net=None, pool=None, vol=None) | public | not declared | 1/4 | `src/nova/tests/fixtures/libvirt.py:L1070–L1073` |
| `libvirtError.get_error_code` | method | (self) | public | `None` (src/nova/tests/fixtures/libvirt.py:L1077); `self.err[0]` (src/nova/tests/fixtures/libvirt.py:L1078) | 2/4 | `src/nova/tests/fixtures/libvirt.py:L1075–L1078` |
| `libvirtError.get_error_domain` | method | (self) | public | `None` (src/nova/tests/fixtures/libvirt.py:L1082); `self.err[1]` (src/nova/tests/fixtures/libvirt.py:L1083) | 2/4 | `src/nova/tests/fixtures/libvirt.py:L1080–L1083` |
| `libvirtError.get_error_message` | method | (self) | public | `None` (src/nova/tests/fixtures/libvirt.py:L1087); `self.err[2]` (src/nova/tests/fixtures/libvirt.py:L1088) | 2/4 | `src/nova/tests/fixtures/libvirt.py:L1085–L1088` |
| `libvirtError.get_error_level` | method | (self) | public | `None` (src/nova/tests/fixtures/libvirt.py:L1092); `self.err[3]` (src/nova/tests/fixtures/libvirt.py:L1093) | 2/4 | `src/nova/tests/fixtures/libvirt.py:L1090–L1093` |
| `libvirtError.get_str1` | method | (self) | public | `None` (src/nova/tests/fixtures/libvirt.py:L1097); `self.err[4]` (src/nova/tests/fixtures/libvirt.py:L1098) | 2/4 | `src/nova/tests/fixtures/libvirt.py:L1095–L1098` |
| `libvirtError.get_str2` | method | (self) | public | `None` (src/nova/tests/fixtures/libvirt.py:L1102); `self.err[5]` (src/nova/tests/fixtures/libvirt.py:L1103) | 2/4 | `src/nova/tests/fixtures/libvirt.py:L1100–L1103` |
| `libvirtError.get_str3` | method | (self) | public | `None` (src/nova/tests/fixtures/libvirt.py:L1107); `self.err[6]` (src/nova/tests/fixtures/libvirt.py:L1108) | 2/4 | `src/nova/tests/fixtures/libvirt.py:L1105–L1108` |
| `libvirtError.get_int1` | method | (self) | public | `None` (src/nova/tests/fixtures/libvirt.py:L1112); `self.err[7]` (src/nova/tests/fixtures/libvirt.py:L1113) | 2/4 | `src/nova/tests/fixtures/libvirt.py:L1110–L1113` |
| `libvirtError.get_int2` | method | (self) | public | `None` (src/nova/tests/fixtures/libvirt.py:L1117); `self.err[8]` (src/nova/tests/fixtures/libvirt.py:L1118) | 2/4 | `src/nova/tests/fixtures/libvirt.py:L1115–L1118` |
| `NodeDevice` | class | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L1121–L1155` |
| `NodeDevice.__init__` | method | (self, connection, xml=None) | public | not declared | 2/5 | `src/nova/tests/fixtures/libvirt.py:L1123–L1128` |
| `NodeDevice._parse_xml` | method | (self, xml) | private | not declared | 1/5 | `src/nova/tests/fixtures/libvirt.py:L1130–L1134` |
| `NodeDevice.attach` | method | (self) | public | not declared | 1/2 | `src/nova/tests/fixtures/libvirt.py:L1136–L1137` |
| `NodeDevice.detach` | method | (self) | public | not declared | 1/2 | `src/nova/tests/fixtures/libvirt.py:L1139–L1140` |
| `NodeDevice.reset` | method | (self) | public | not declared | 1/2 | `src/nova/tests/fixtures/libvirt.py:L1142–L1143` |
| `NodeDevice.XMLDesc` | method | (self, flags) | public | `self._xml` (src/nova/tests/fixtures/libvirt.py:L1146) | 1/2 | `src/nova/tests/fixtures/libvirt.py:L1145–L1146` |
| `NodeDevice.parent` | method | (self) | public | `self._parent` (src/nova/tests/fixtures/libvirt.py:L1149) | 1/2 | `src/nova/tests/fixtures/libvirt.py:L1148–L1149` |
| `NodeDevice.name` | method | (self) | public | `self._name` (src/nova/tests/fixtures/libvirt.py:L1152) | 1/2 | `src/nova/tests/fixtures/libvirt.py:L1151–L1152` |
| `NodeDevice.listCaps` | method | (self) | public | `[self.name().split('_')[0]]` (src/nova/tests/fixtures/libvirt.py:L1155) | 1/2 | `src/nova/tests/fixtures/libvirt.py:L1154–L1155` |
| `Domain` | class | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L1158–L1990` |
| `Domain.__init__` | method | (self, connection, xml, running=False, transient=False) | public | not declared | 4/11 | `src/nova/tests/fixtures/libvirt.py:L1159–L1170` |
| `Domain._parse_definition` | method | (self, xml) | private | `definition` (src/nova/tests/fixtures/libvirt.py:L1385) | 38/170 | `src/nova/tests/fixtures/libvirt.py:L1172–L1385` |
| `Domain.verify_hostdevs_interface_are_vfs` | method | (self) | public | not declared | 4/15 | `src/nova/tests/fixtures/libvirt.py:L1387–L1405` |
| `Domain.create` | method | (self) | public | not declared | 1/2 | `src/nova/tests/fixtures/libvirt.py:L1407–L1408` |
| `Domain.createWithFlags` | method | (self, flags) | public | not declared | 1/5 | `src/nova/tests/fixtures/libvirt.py:L1410–L1415` |
| `Domain.isActive` | method | (self) | public | `int(self._state == VIR_DOMAIN_RUNNING)` (src/nova/tests/fixtures/libvirt.py:L1418) | 1/2 | `src/nova/tests/fixtures/libvirt.py:L1417–L1418` |
| `Domain.undefine` | method | (self) | public | not declared | 1/2 | `src/nova/tests/fixtures/libvirt.py:L1420–L1421` |
| `Domain.isPersistent` | method | (self) | public | `True` (src/nova/tests/fixtures/libvirt.py:L1424) | 1/2 | `src/nova/tests/fixtures/libvirt.py:L1423–L1424` |
| `Domain.undefineFlags` | method | (self, flags) | public | not declared | 3/5 | `src/nova/tests/fixtures/libvirt.py:L1426–L1430` |
| `Domain.destroy` | method | (self) | public | not declared | 1/3 | `src/nova/tests/fixtures/libvirt.py:L1432–L1434` |
| `Domain.ID` | method | (self) | public | `self._id` (src/nova/tests/fixtures/libvirt.py:L1437) | 1/2 | `src/nova/tests/fixtures/libvirt.py:L1436–L1437` |
| `Domain.name` | method | (self) | public | `self._def['name']` (src/nova/tests/fixtures/libvirt.py:L1440) | 1/2 | `src/nova/tests/fixtures/libvirt.py:L1439–L1440` |
| `Domain.UUIDString` | method | (self) | public | `self._def['uuid']` (src/nova/tests/fixtures/libvirt.py:L1443) | 1/2 | `src/nova/tests/fixtures/libvirt.py:L1442–L1443` |
| `Domain.interfaceStats` | method | (self, device) | public | `[10000242400, 1234, 0, 2, 213412343233, 34214234, 23, 3]` (src/nova/tests/fixtures/libvirt.py:L1446) | 1/2 | `src/nova/tests/fixtures/libvirt.py:L1445–L1446` |
| `Domain.blockStats` | method | (self, device) | public | `[2, 10000242400, 234, 2343424234, 34]` (src/nova/tests/fixtures/libvirt.py:L1449) | 1/2 | `src/nova/tests/fixtures/libvirt.py:L1448–L1449` |
| `Domain.setTime` | method | (self, time=None, flags=0) | public | not declared | 1/2 | `src/nova/tests/fixtures/libvirt.py:L1451–L1452` |
| `Domain.suspend` | method | (self) | public | not declared | 1/2 | `src/nova/tests/fixtures/libvirt.py:L1454–L1455` |
| `Domain.shutdown` | method | (self) | public | not declared | 1/3 | `src/nova/tests/fixtures/libvirt.py:L1457–L1459` |
| `Domain.reset` | method | (self, flags) | public | not declared | 1/3 | `src/nova/tests/fixtures/libvirt.py:L1461–L1464` |
| `Domain.info` | method | (self) | public | `[self._state, int(self._def['memory']), int(self._def['memory']), self._def['vcpu'], 123456789]` (src/nova/tests/fixtures/libvirt.py:L1467) | 1/6 | `src/nova/tests/fixtures/libvirt.py:L1466–L1471` |
| `Domain.migrateToURI3` | method | (self, dconnuri, params, flags) | public | not declared | 1/6 | `src/nova/tests/fixtures/libvirt.py:L1473–L1478` |
| `Domain.migrateSetMaxDowntime` | method | (self, downtime) | public | not declared | 1/2 | `src/nova/tests/fixtures/libvirt.py:L1480–L1481` |
| `Domain.attachDevice` | method | (self, xml) | public | `result` (src/nova/tests/fixtures/libvirt.py:L1516) | 7/33 | `src/nova/tests/fixtures/libvirt.py:L1483–L1516` |
| `Domain.attachDeviceFlags` | method | (self, xml, flags) | public | not declared | 3/9 | `src/nova/tests/fixtures/libvirt.py:L1518–L1526` |
| `Domain.detachDevice` | method | (self, xml) | public | `attached_disk_info is not None` (src/nova/tests/fixtures/libvirt.py:L1542); `attached_nic_info is not None` (src/nova/tests/fixtures/libvirt.py:L1555); `attached_hostdev_info is not None` (src/nova/tests/fixtures/libvirt.py:L1574); `False` (src/nova/tests/fixtures/libvirt.py:L1582) | 16/43 | `src/nova/tests/fixtures/libvirt.py:L1528–L1582` |
| `Domain.detachDeviceFlags` | method | (self, xml, flags) | public | not declared | 1/2 | `src/nova/tests/fixtures/libvirt.py:L1584–L1585` |
| `Domain.setUserPassword` | method | (self, user, password, flags=0) | public | not declared | 1/2 | `src/nova/tests/fixtures/libvirt.py:L1587–L1588` |
| `Domain.XMLDesc` | method | (self, flags) | public | `'''<domain type='kvm'> <name>%(name)s</name> <uuid>%(uuid)s</uuid> <memory>%(memory)s</memory> <currentMemory>%(memory)s</currentMemory> <vcpu%(vcpuset)s>%(vcpu)s</vcpu> %(iothreads)s <os> <type arch=` (src/nova/tests/fixtures/libvirt.py:L1830) | 41/277 | `src/nova/tests/fixtures/libvirt.py:L1590–L1900` |
| `Domain.managedSave` | method | (self, flags) | public | not declared | 1/3 | `src/nova/tests/fixtures/libvirt.py:L1902–L1904` |
| `Domain.managedSaveRemove` | method | (self, flags) | public | not declared | 1/2 | `src/nova/tests/fixtures/libvirt.py:L1906–L1907` |
| `Domain.hasManagedSaveImage` | method | (self, flags) | public | `int(self._has_saved_state)` (src/nova/tests/fixtures/libvirt.py:L1910) | 1/2 | `src/nova/tests/fixtures/libvirt.py:L1909–L1910` |
| `Domain.resume` | method | (self) | public | not declared | 1/2 | `src/nova/tests/fixtures/libvirt.py:L1912–L1913` |
| `Domain.snapshotCreateXML` | method | (self, xml, flags) | public | `snapshot` (src/nova/tests/fixtures/libvirt.py:L1920) | 1/6 | `src/nova/tests/fixtures/libvirt.py:L1915–L1920` |
| `Domain.vcpus` | method | (self) | public | `vcpus` (src/nova/tests/fixtures/libvirt.py:L1927) | 2/6 | `src/nova/tests/fixtures/libvirt.py:L1922–L1927` |
| `Domain.memoryStats` | method | (self) | public | `{}` (src/nova/tests/fixtures/libvirt.py:L1930) | 1/2 | `src/nova/tests/fixtures/libvirt.py:L1929–L1930` |
| `Domain.maxMemory` | method | (self) | public | `self._def['memory']` (src/nova/tests/fixtures/libvirt.py:L1933) | 1/2 | `src/nova/tests/fixtures/libvirt.py:L1932–L1933` |
| `Domain.blockJobInfo` | method | (self, disk, flags) | public | `{}` (src/nova/tests/fixtures/libvirt.py:L1936) | 1/2 | `src/nova/tests/fixtures/libvirt.py:L1935–L1936` |
| `Domain.blockJobAbort` | method | (self, disk, flags) | public | not declared | 1/2 | `src/nova/tests/fixtures/libvirt.py:L1938–L1939` |
| `Domain.blockResize` | method | (self, disk, size, flags) | public | not declared | 1/2 | `src/nova/tests/fixtures/libvirt.py:L1941–L1942` |
| `Domain.blockRebase` | method | (self, disk, base, bandwidth=0, flags=0) | public | `0` (src/nova/tests/fixtures/libvirt.py:L1952) | 4/9 | `src/nova/tests/fixtures/libvirt.py:L1944–L1952` |
| `Domain.blockCopy` | method | (self, disk, base, flags=0) | public | `0` (src/nova/tests/fixtures/libvirt.py:L1955) | 1/2 | `src/nova/tests/fixtures/libvirt.py:L1954–L1955` |
| `Domain.blockCommit` | method | (self, disk, base, top, flags) | public | `0` (src/nova/tests/fixtures/libvirt.py:L1958) | 1/2 | `src/nova/tests/fixtures/libvirt.py:L1957–L1958` |
| `Domain.jobInfo` | method | (self) | public | `[0] * 12` (src/nova/tests/fixtures/libvirt.py:L1963) | 1/2 | `src/nova/tests/fixtures/libvirt.py:L1960–L1963` |
| `Domain.jobStats` | method | (self, flags=0) | public | `{'type': self._job_type}` (src/nova/tests/fixtures/libvirt.py:L1969) | 1/2 | `src/nova/tests/fixtures/libvirt.py:L1965–L1969` |
| `Domain.complete_job` | method | (self) | public | not declared | 1/2 | `src/nova/tests/fixtures/libvirt.py:L1971–L1972` |
| `Domain.fail_job` | method | (self) | public | not declared | 1/2 | `src/nova/tests/fixtures/libvirt.py:L1974–L1975` |
| `Domain.injectNMI` | method | (self, flags=0) | public | `0` (src/nova/tests/fixtures/libvirt.py:L1978) | 1/2 | `src/nova/tests/fixtures/libvirt.py:L1977–L1978` |
| `Domain.abortJob` | method | (self) | public | not declared | 1/2 | `src/nova/tests/fixtures/libvirt.py:L1980–L1981` |
| `Domain.fsFreeze` | method | (self) | public | not declared | 1/2 | `src/nova/tests/fixtures/libvirt.py:L1983–L1984` |
| `Domain.fsThaw` | method | (self) | public | not declared | 1/2 | `src/nova/tests/fixtures/libvirt.py:L1986–L1987` |
| `Domain.setMetadata` | method | (self, metadata_type, metadata, key, uri, flags=0) | public | not declared | 1/2 | `src/nova/tests/fixtures/libvirt.py:L1989–L1990` |
| `DomainSnapshot` | class | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L1993–L1999` |
| `DomainSnapshot.__init__` | method | (self, name, domain) | public | not declared | 1/3 | `src/nova/tests/fixtures/libvirt.py:L1994–L1996` |
| `DomainSnapshot.delete` | method | (self, flags) | public | not declared | 1/2 | `src/nova/tests/fixtures/libvirt.py:L1998–L1999` |
| `Secret` | class | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L2002–L2053` |
| `Secret.__init__` | method | (self, connection, xml) | public | not declared | 1/5 | `src/nova/tests/fixtures/libvirt.py:L2003–L2007` |
| `Secret._parse_xml` | method | (self, xml) | private | not declared | 4/12 | `src/nova/tests/fixtures/libvirt.py:L2009–L2020` |
| `Secret.setValue` | method | (self, value, flags=0) | public | `0` (src/nova/tests/fixtures/libvirt.py:L2024) | 1/3 | `src/nova/tests/fixtures/libvirt.py:L2022–L2024` |
| `Secret.value` | method | (self, flags=0) | public | `self._value` (src/nova/tests/fixtures/libvirt.py:L2042) | 3/15 | `src/nova/tests/fixtures/libvirt.py:L2026–L2042` |
| `Secret.undefine` | method | (self) | public | not declared | 1/2 | `src/nova/tests/fixtures/libvirt.py:L2044–L2045` |
| `Secret.UUIDString` | method | (self) | public | `self._uuid` (src/nova/tests/fixtures/libvirt.py:L2049) | 2/3 | `src/nova/tests/fixtures/libvirt.py:L2047–L2049` |
| `Secret.usageID` | method | (self) | public | `self._usage_id` (src/nova/tests/fixtures/libvirt.py:L2053) | 2/3 | `src/nova/tests/fixtures/libvirt.py:L2051–L2053` |
| `Connection` | class | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L2056–L2666` |
| `Connection.__init__` | method | (self, uri=None, readonly=False, version=FAKE_LIBVIRT_VERSION, hv_version=FAKE_QEMU_VERSION, hostname=None, host_info=None, pci_info=None, mdev_info=None, vdpa_info=None) | public | not declared | 10/42 | `src/nova/tests/fixtures/libvirt.py:L2057–L2106` |
| `Connection._add_nodedev` | method | (self, nodedev) | private | not declared | 1/2 | `src/nova/tests/fixtures/libvirt.py:L2108–L2109` |
| `Connection._remove_nodedev` | method | (self, nodedev) | private | not declared | 1/2 | `src/nova/tests/fixtures/libvirt.py:L2111–L2112` |
| `Connection._add_secret` | method | (self, secret) | private | not declared | 1/2 | `src/nova/tests/fixtures/libvirt.py:L2114–L2115` |
| `Connection._remove_secret` | method | (self, secret) | private | not declared | 1/2 | `src/nova/tests/fixtures/libvirt.py:L2117–L2118` |
| `Connection._mark_running` | method | (self, dom) | private | not declared | 1/4 | `src/nova/tests/fixtures/libvirt.py:L2120–L2123` |
| `Connection._mark_not_running` | method | (self, dom) | private | `` (src/nova/tests/fixtures/libvirt.py:L2135) | 4/9 | `src/nova/tests/fixtures/libvirt.py:L2125–L2135` |
| `Connection._undefine` | method | (self, dom) | private | not declared | 2/4 | `src/nova/tests/fixtures/libvirt.py:L2137–L2140` |
| `Connection.getInfo` | method | (self) | public | `[self.host_info.arch, self.host_info.kB_mem, self.host_info.cpus, self.host_info.cpu_mhz, self.host_info.cpu_nodes, self.host_info.cpu_sockets, self.host_info.cpu_cores, self.host_info.cpu_threads]` (src/nova/tests/fixtures/libvirt.py:L2143) | 1/9 | `src/nova/tests/fixtures/libvirt.py:L2142–L2150` |
| `Connection.lookupByUUIDString` | method | (self, uuid) | public | `vm` (src/nova/tests/fixtures/libvirt.py:L2155) | 3/9 | `src/nova/tests/fixtures/libvirt.py:L2152–L2160` |
| `Connection.listAllDomains` | method | (self, flags=None) | public | `vms` (src/nova/tests/fixtures/libvirt.py:L2171) | 6/10 | `src/nova/tests/fixtures/libvirt.py:L2162–L2171` |
| `Connection._emit_lifecycle` | method | (self, dom, event, detail) | private | `` (src/nova/tests/fixtures/libvirt.py:L2175) | 2/7 | `src/nova/tests/fixtures/libvirt.py:L2173–L2180` |
| `Connection.defineXML` | method | (self, xml) | public | `dom` (src/nova/tests/fixtures/libvirt.py:L2186) | 1/5 | `src/nova/tests/fixtures/libvirt.py:L2182–L2186` |
| `Connection.createXML` | method | (self, xml, flags) | public | `dom` (src/nova/tests/fixtures/libvirt.py:L2192) | 1/5 | `src/nova/tests/fixtures/libvirt.py:L2188–L2192` |
| `Connection.getType` | method | (self) | public | `'QEMU'` (src/nova/tests/fixtures/libvirt.py:L2196) | 2/3 | `src/nova/tests/fixtures/libvirt.py:L2194–L2196` |
| `Connection.getLibVersion` | method | (self) | public | `self.fakeLibVersion` (src/nova/tests/fixtures/libvirt.py:L2199) | 1/2 | `src/nova/tests/fixtures/libvirt.py:L2198–L2199` |
| `Connection.getVersion` | method | (self) | public | `self.fakeVersion` (src/nova/tests/fixtures/libvirt.py:L2202) | 1/2 | `src/nova/tests/fixtures/libvirt.py:L2201–L2202` |
| `Connection.getHostname` | method | (self) | public | `self.hostname` (src/nova/tests/fixtures/libvirt.py:L2205) | 1/2 | `src/nova/tests/fixtures/libvirt.py:L2204–L2205` |
| `Connection.domainEventRegisterAny` | method | (self, dom, eventid, callback, opaque) | public | not declared | 1/2 | `src/nova/tests/fixtures/libvirt.py:L2207–L2208` |
| `Connection.registerCloseCallback` | method | (self, cb, opaque) | public | not declared | 1/2 | `src/nova/tests/fixtures/libvirt.py:L2210–L2211` |
| `Connection.getCPUMap` | method | (self) | public | `(total_cpus, cpu_map, total_cpus)` (src/nova/tests/fixtures/libvirt.py:L2219) | 2/4 | `src/nova/tests/fixtures/libvirt.py:L2213–L2219` |
| `Connection.getDomainCapabilities` | method | (self, emulatorbin, arch, machine_type, virt_type, flags) | public | `xml` (src/nova/tests/fixtures/libvirt.py:L2236); `fake_libvirt_data.DOMCAPABILITIES_X86_64_TEMPLATE % \ {'devices': self._domain_capability_devices, 'tpm': self._domain_capability_tpm, 'features': self._domain_capability_features, 'mtype': aliases.ge` (src/nova/tests/fixtures/libvirt.py:L2240) | 5/22 | `src/nova/tests/fixtures/libvirt.py:L2221–L2247` |
| `Connection.getCPUModelNames` | method | (self, arch) | public | `mapping.get(arch, [])` (src/nova/tests/fixtures/libvirt.py:L2308) | 1/60 | `src/nova/tests/fixtures/libvirt.py:L2249–L2308` |
| `Connection._domain_capability_devices_default` | field | — | private | not declared | — | `src/nova/tests/fixtures/libvirt.py:L2310–L2362` |
| `Connection._domain_capability_tpm_supported` | field | — | private | not declared | — | `src/nova/tests/fixtures/libvirt.py:L2364–L2376` |
| `Connection._domain_capability_tpm_unsupported` | field | — | private | not declared | — | `src/nova/tests/fixtures/libvirt.py:L2378–L2380` |
| `Connection._domain_capability_tpm_with_no_emulator` | field | — | private | not declared | — | `src/nova/tests/fixtures/libvirt.py:L2382–L2393` |
| `Connection._domain_capability_tpm_with_tpm_versions` | field | — | private | not declared | — | `src/nova/tests/fixtures/libvirt.py:L2397–L2412` |
| `Connection._domain_capability_devices` | field | — | private | not declared | — | `src/nova/tests/fixtures/libvirt.py:L2416–L2416` |
| `Connection._domain_capability_tpm` | field | — | private | not declared | — | `src/nova/tests/fixtures/libvirt.py:L2420–L2420` |
| `Connection._domain_capability_features` | field | — | private | not declared | — | `src/nova/tests/fixtures/libvirt.py:L2424–L2426` |
| `Connection._domain_capability_features_with_SEV_base` | field | — | private | not declared | — | `src/nova/tests/fixtures/libvirt.py:L2432–L2440` |
| `Connection._domain_capability_features_with_SEV` | field | — | private | not declared | — | `src/nova/tests/fixtures/libvirt.py:L2442–L2443` |
| `Connection._domain_capability_features_with_SEV_unsupported` | field | — | private | not declared | — | `src/nova/tests/fixtures/libvirt.py:L2445–L2448` |
| `Connection._domain_capability_features_with_launch_security_SEV` | field | — | private | not declared | — | `src/nova/tests/fixtures/libvirt.py:L2454–L2460` |
| `Connection._domain_capability_features_with_launch_security_unsupported` | field | — | private | not declared | — | `src/nova/tests/fixtures/libvirt.py:L2462–L2467` |
| `Connection._domain_capability_features_with_launch_security_SEV_SNP` | field | — | private | not declared | — | `src/nova/tests/fixtures/libvirt.py:L2469–L2476` |
| `Connection._domain_capability_features_with_TDX` | field | — | private | not declared | — | `src/nova/tests/fixtures/libvirt.py:L2478–L2482` |
| `Connection._domain_capability_features_with_TDX_unsupported` | field | — | private | not declared | — | `src/nova/tests/fixtures/libvirt.py:L2484–L2488` |
| `Connection.getCapabilities` | method | (self) | public | `''.join(_capabilities) % { 'sockets': self.host_info.cpu_sockets, 'cores': self.host_info.cpu_cores, 'threads': self.host_info.cpu_threads, 'topology': numa_topology, }` (src/nova/tests/fixtures/libvirt.py:L2505) | 2/16 | `src/nova/tests/fixtures/libvirt.py:L2490–L2510` |
| `Connection.compareCPU` | method | (self, xml, flags) | public | `VIR_CPU_COMPARE_INCOMPATIBLE` (src/nova/tests/fixtures/libvirt.py:L2519); `VIR_CPU_COMPARE_INCOMPATIBLE` (src/nova/tests/fixtures/libvirt.py:L2532); `VIR_CPU_COMPARE_INCOMPATIBLE` (src/nova/tests/fixtures/libvirt.py:L2537); `VIR_CPU_COMPARE_IDENTICAL` (src/nova/tests/fixtures/libvirt.py:L2542) | 9/23 | `src/nova/tests/fixtures/libvirt.py:L2512–L2542` |
| `Connection.compareHypervisorCPU` | method | (self, emulator, arch, machine, virttype, xml, flags) | public | `self.compareCPU(xml, flags)` (src/nova/tests/fixtures/libvirt.py:L2548) | 1/5 | `src/nova/tests/fixtures/libvirt.py:L2544–L2548` |
| `Connection.getCPUStats` | method | (self, cpuNum, flag) | public | `{'kernel': 5664160000000, 'idle': 1592705190000000, 'user': 26728850000000, 'iowait': 6121490000000}` (src/nova/tests/fixtures/libvirt.py:L2552) | 2/12 | `src/nova/tests/fixtures/libvirt.py:L2550–L2561` |
| `Connection.device_lookup_by_name` | method | (self, dev_name) | public | `self.pci_info.get_device_by_name(dev_name)` (src/nova/tests/fixtures/libvirt.py:L2564) | 1/2 | `src/nova/tests/fixtures/libvirt.py:L2563–L2564` |
| `Connection.nodeDeviceLookupByName` | method | (self, name) | public | `self.mdev_info.get_device_by_name(name)` (src/nova/tests/fixtures/libvirt.py:L2579); `self.vdpa_info.get_device_by_name(name)` (src/nova/tests/fixtures/libvirt.py:L2582); `pci_dev` (src/nova/tests/fixtures/libvirt.py:L2586); `self._nodedevs[name]` (src/nova/tests/fixtures/libvirt.py:L2588) | 7/20 | `src/nova/tests/fixtures/libvirt.py:L2566–L2594` |
| `Connection.nodeDeviceCreateXML` | method | (self, xml, flags) | public | not declared | 1/2 | `src/nova/tests/fixtures/libvirt.py:L2596–L2597` |
| `Connection.nodeDeviceDefineXML` | method | (self, xml, flags) | public | not declared | 1/2 | `src/nova/tests/fixtures/libvirt.py:L2599–L2600` |
| `Connection.listDevices` | method | (self, cap, flags) | public | `self.pci_info.get_all_devices()` (src/nova/tests/fixtures/libvirt.py:L2604); `self.mdev_info.get_all_devices()` (src/nova/tests/fixtures/libvirt.py:L2606); `self.pci_info.get_all_mdev_capable_devices()` (src/nova/tests/fixtures/libvirt.py:L2608); `self.vdpa_info.get_all_devices()` (src/nova/tests/fixtures/libvirt.py:L2610) | 5/11 | `src/nova/tests/fixtures/libvirt.py:L2602–L2612` |
| `Connection.baselineCPU` | method | (self, cpu, flag) | public | `"""<cpu mode='custom' match='exact'> <model>Penryn</model> <vendor>Intel</vendor> <feature name='xtpr'/> <feature name='tm2'/> <feature name='est'/> <feature name='vmx'/> <feature name='ds_cpl'/> <fea` (src/nova/tests/fixtures/libvirt.py:L2616) | 1/19 | `src/nova/tests/fixtures/libvirt.py:L2614–L2633` |
| `Connection.listAllSecrets` | method | (self, flags) | public | `[secret for secret in self._secrets.values()]` (src/nova/tests/fixtures/libvirt.py:L2636) | 2/2 | `src/nova/tests/fixtures/libvirt.py:L2635–L2636` |
| `Connection.secretLookupByUsage` | method | (self, usage_type_obj, usage_id) | public | `secret` (src/nova/tests/fixtures/libvirt.py:L2643) | 3/4 | `src/nova/tests/fixtures/libvirt.py:L2638–L2643` |
| `Connection.secretDefineXML` | method | (self, xml) | public | `secret` (src/nova/tests/fixtures/libvirt.py:L2648) | 1/4 | `src/nova/tests/fixtures/libvirt.py:L2645–L2648` |
| `Connection.listAllDevices` | method | (self, flags) | public | `devices` (src/nova/tests/fixtures/libvirt.py:L2666) | 6/15 | `src/nova/tests/fixtures/libvirt.py:L2650–L2666` |
| `openAuth` | function | (uri, auth, flags=0) | exported | `Connection(uri, (flags == VIR_CONNECT_RO))` (src/nova/tests/fixtures/libvirt.py:L2680) | 4/8 | `src/nova/tests/fixtures/libvirt.py:L2669–L2680` |
| `virEventRunDefaultImpl` | function | — | exported | not declared | 1/2 | `src/nova/tests/fixtures/libvirt.py:L2683–L2684` |
| `virEventRegisterDefaultImpl` | function | — | exported | not declared | 2/4 | `src/nova/tests/fixtures/libvirt.py:L2687–L2690` |
| `registerErrorHandler` | function | (handler, ctxt) | exported | not declared | 1/2 | `src/nova/tests/fixtures/libvirt.py:L2693–L2694` |
| `make_libvirtError` | function | (error_class, msg, error_code=None, error_domain=None, error_message=None, error_level=None, str1=None, str2=None, str3=None, int1=None, int2=None) | exported | `exc` (src/nova/tests/fixtures/libvirt.py:L2712) | 1/8 | `src/nova/tests/fixtures/libvirt.py:L2697–L2712` |
| `virDomain` | variable | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L2715–L2715` |
| `virNodeDevice` | variable | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L2716–L2716` |
| `virConnect` | variable | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L2718–L2718` |
| `virSecret` | variable | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L2719–L2719` |
| `FakeHandler` | class | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L2724–L2726` |
| `FakeHandler.__init__` | method | (self) | public | not declared | 1/2 | `src/nova/tests/fixtures/libvirt.py:L2725–L2726` |
| `_EventAddHandleFunc` | variable | — | unexported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L2729–L2729` |
| `AmdSevFixture` | class | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L2732–L2753` |
| `AmdSevFixture.__init__` | method | (self, sev=False, sev_es=False, sev_snp=False) | public | not declared | 1/4 | `src/nova/tests/fixtures/libvirt.py:L2733–L2736` |
| `AmdSevFixture.setUp` | method | (self) | public | not declared | 1/6 | `src/nova/tests/fixtures/libvirt.py:L2738–L2753` |
| `AmdSevFixture.setUp._mock_kernel_supports_amd_sev` | function | (model='sev') | private | `{ 'sev': self.sev, 'sev-es': self.sev_es, 'sev-snp': self.sev_snp, }[model]` (src/nova/tests/fixtures/libvirt.py:L2743) | — | `src/nova/tests/fixtures/libvirt.py:L2741–L2749` |
| `LibvirtFixture` | class | — | exported | not declared | — | `src/nova/tests/fixtures/libvirt.py:L2756–L2863` |
| `LibvirtFixture.__init__` | method | (self, stub_os_vif=True, stub_amd_sev=True) | public | not declared | 1/5 | `src/nova/tests/fixtures/libvirt.py:L2760–L2764` |
| `LibvirtFixture.update_sriov_mac_address_mapping` | method | (self, pci_address_to_mac_map) | public | not declared | 1/2 | `src/nova/tests/fixtures/libvirt.py:L2766–L2767` |
| `LibvirtFixture.fake_get_mac_by_pci_address` | method | (self, pci_addr, pf_interface=False) | public | `res` (src/nova/tests/fixtures/libvirt.py:L2771) | 1/3 | `src/nova/tests/fixtures/libvirt.py:L2769–L2771` |
| `LibvirtFixture.setUp` | method | (self) | public | not declared | 4/56 | `src/nova/tests/fixtures/libvirt.py:L2773–L2863` |
| `FakePCIDevice.address` | property | — | public | not declared | — | `src/nova/tests/fixtures/libvirt.py:L510–L512` |
| `HostPCIDevicesInfo._calc_numa_node` | classmethod | — | private | not declared | — | `src/nova/tests/fixtures/libvirt.py:L664–L666` |

## Dependencies

- `import collections` (src/nova/tests/fixtures/libvirt.py:L15)
- `import os` (src/nova/tests/fixtures/libvirt.py:L16)
- `import sys` (src/nova/tests/fixtures/libvirt.py:L17)
- `import textwrap` (src/nova/tests/fixtures/libvirt.py:L18)
- `import time` (src/nova/tests/fixtures/libvirt.py:L19)
- `import fixtures` (src/nova/tests/fixtures/libvirt.py:L21)
- `lxml`: imports `etree` (src/nova/tests/fixtures/libvirt.py:L22)
- `oslo_log`: imports `log as logging` (src/nova/tests/fixtures/libvirt.py:L23)
- `oslo_utils.fixture`: imports `uuidsentinel as uuids` (src/nova/tests/fixtures/libvirt.py:L24)
- `oslo_utils`: imports `versionutils` (src/nova/tests/fixtures/libvirt.py:L25)
- `nova`: imports `conf` (src/nova/tests/fixtures/libvirt.py:L27)
- `nova.objects`: imports `fields as obj_fields` (src/nova/tests/fixtures/libvirt.py:L28)
- `nova.tests.fixtures`: imports `libvirt_data as fake_libvirt_data` (src/nova/tests/fixtures/libvirt.py:L29)
- `nova.virt.libvirt`: imports `config as vconfig` (src/nova/tests/fixtures/libvirt.py:L30)
- `nova.virt.libvirt`: imports `driver as libvirt_driver` (src/nova/tests/fixtures/libvirt.py:L31)
- `import nova.virt.libvirt.host` (src/nova/tests/fixtures/libvirt.py:L1037)
- `import os_vif` (src/nova/tests/fixtures/libvirt.py:L2862)

## Side Effects

- **process-spawn**: 'nova.privsep.linux_net.set_device_macaddr_and_vlan')).mock (src/nova/tests/fixtures/libvirt.py:L2810)
- **process-spawn**: 'nova.privsep.linux_net.set_device_macaddr')).mock (src/nova/tests/fixtures/libvirt.py:L2816)
- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/tests/fixtures/libvirt.py:L47)
- **global-mutation**: CONF = conf.CONF (src/nova/tests/fixtures/libvirt.py:L48)
- **global-mutation**: VIR_DOMAIN_NOSTATE = 0 (src/nova/tests/fixtures/libvirt.py:L51)
- **global-mutation**: VIR_DOMAIN_RUNNING = 1 (src/nova/tests/fixtures/libvirt.py:L52)
- **global-mutation**: VIR_DOMAIN_BLOCKED = 2 (src/nova/tests/fixtures/libvirt.py:L53)
- **global-mutation**: VIR_DOMAIN_PAUSED = 3 (src/nova/tests/fixtures/libvirt.py:L54)
- **global-mutation**: VIR_DOMAIN_SHUTDOWN = 4 (src/nova/tests/fixtures/libvirt.py:L55)
- **global-mutation**: VIR_DOMAIN_SHUTOFF = 5 (src/nova/tests/fixtures/libvirt.py:L56)
- **global-mutation**: VIR_DOMAIN_CRASHED = 6 (src/nova/tests/fixtures/libvirt.py:L57)
- **global-mutation**: VIR_DOMAIN_XML_SECURE = 1 (src/nova/tests/fixtures/libvirt.py:L60)
- **global-mutation**: VIR_DOMAIN_XML_INACTIVE = 2 (src/nova/tests/fixtures/libvirt.py:L61)
- **global-mutation**: VIR_DOMAIN_XML_UPDATE_CPU = 4 (src/nova/tests/fixtures/libvirt.py:L62)
- **global-mutation**: VIR_DOMAIN_XML_MIGRATABLE = 8 (src/nova/tests/fixtures/libvirt.py:L63)
- **global-mutation**: VIR_DOMAIN_BLOCK_COPY_SHALLOW = 1 (src/nova/tests/fixtures/libvirt.py:L65)
- **global-mutation**: VIR_DOMAIN_BLOCK_COPY_REUSE_EXT = 2 (src/nova/tests/fixtures/libvirt.py:L66)
- **global-mutation**: VIR_DOMAIN_BLOCK_COPY_TRANSIENT_JOB = 4 (src/nova/tests/fixtures/libvirt.py:L67)
- **global-mutation**: VIR_DOMAIN_BLOCK_REBASE_SHALLOW = 1 (src/nova/tests/fixtures/libvirt.py:L69)
- **global-mutation**: VIR_DOMAIN_BLOCK_REBASE_REUSE_EXT = 2 (src/nova/tests/fixtures/libvirt.py:L70)
- **global-mutation**: VIR_DOMAIN_BLOCK_REBASE_COPY = 8 (src/nova/tests/fixtures/libvirt.py:L71)
- **global-mutation**: VIR_DOMAIN_BLOCK_REBASE_RELATIVE = 16 (src/nova/tests/fixtures/libvirt.py:L72)
- **global-mutation**: VIR_DOMAIN_BLOCK_REBASE_COPY_DEV = 32 (src/nova/tests/fixtures/libvirt.py:L73)
- **global-mutation**: VIR_DOMAIN_BLOCK_RESIZE_BYTES = 1 (src/nova/tests/fixtures/libvirt.py:L76)
- **global-mutation**: VIR_DOMAIN_BLOCK_JOB_ABORT_ASYNC = 1 (src/nova/tests/fixtures/libvirt.py:L78)
- **global-mutation**: VIR_DOMAIN_BLOCK_JOB_ABORT_PIVOT = 2 (src/nova/tests/fixtures/libvirt.py:L79)
- **global-mutation**: VIR_DOMAIN_EVENT_ID_LIFECYCLE = 0 (src/nova/tests/fixtures/libvirt.py:L81)
- **global-mutation**: VIR_DOMAIN_EVENT_DEFINED = 0 (src/nova/tests/fixtures/libvirt.py:L83)
- **global-mutation**: VIR_DOMAIN_EVENT_UNDEFINED = 1 (src/nova/tests/fixtures/libvirt.py:L84)
- **global-mutation**: VIR_DOMAIN_EVENT_STARTED = 2 (src/nova/tests/fixtures/libvirt.py:L85)
- **global-mutation**: VIR_DOMAIN_EVENT_SUSPENDED = 3 (src/nova/tests/fixtures/libvirt.py:L86)
- **global-mutation**: VIR_DOMAIN_EVENT_RESUMED = 4 (src/nova/tests/fixtures/libvirt.py:L87)
- **global-mutation**: VIR_DOMAIN_EVENT_STOPPED = 5 (src/nova/tests/fixtures/libvirt.py:L88)
- **global-mutation**: VIR_DOMAIN_EVENT_SHUTDOWN = 6 (src/nova/tests/fixtures/libvirt.py:L89)
- **global-mutation**: VIR_DOMAIN_EVENT_PMSUSPENDED = 7 (src/nova/tests/fixtures/libvirt.py:L90)
- **global-mutation**: VIR_DOMAIN_EVENT_ID_DEVICE_REMOVED = 15 (src/nova/tests/fixtures/libvirt.py:L92)
- **global-mutation**: VIR_DOMAIN_EVENT_ID_DEVICE_REMOVAL_FAILED = 22 (src/nova/tests/fixtures/libvirt.py:L93)
- **global-mutation**: VIR_DOMAIN_EVENT_SUSPENDED_MIGRATED = 1 (src/nova/tests/fixtures/libvirt.py:L95)
- **global-mutation**: VIR_DOMAIN_EVENT_SUSPENDED_POSTCOPY = 7 (src/nova/tests/fixtures/libvirt.py:L96)
- **global-mutation**: VIR_DOMAIN_UNDEFINE_MANAGED_SAVE = 1 (src/nova/tests/fixtures/libvirt.py:L98)
- **global-mutation**: VIR_DOMAIN_UNDEFINE_NVRAM = 4 (src/nova/tests/fixtures/libvirt.py:L99)
- **global-mutation**: VIR_DOMAIN_UNDEFINE_KEEP_TPM = 64 (src/nova/tests/fixtures/libvirt.py:L100)
- **global-mutation**: VIR_DOMAIN_UNDEFINE_KEEP_NVRAM = 8 (src/nova/tests/fixtures/libvirt.py:L101)
- **global-mutation**: VIR_DOMAIN_AFFECT_CURRENT = 0 (src/nova/tests/fixtures/libvirt.py:L103)
- **global-mutation**: VIR_DOMAIN_AFFECT_LIVE = 1 (src/nova/tests/fixtures/libvirt.py:L104)
- **global-mutation**: VIR_DOMAIN_AFFECT_CONFIG = 2 (src/nova/tests/fixtures/libvirt.py:L105)
- **global-mutation**: VIR_CPU_COMPARE_ERROR = -1 (src/nova/tests/fixtures/libvirt.py:L107)
- **global-mutation**: VIR_CPU_COMPARE_INCOMPATIBLE = 0 (src/nova/tests/fixtures/libvirt.py:L108)
- **global-mutation**: VIR_CPU_COMPARE_IDENTICAL = 1 (src/nova/tests/fixtures/libvirt.py:L109)
- **global-mutation**: VIR_CPU_COMPARE_SUPERSET = 2 (src/nova/tests/fixtures/libvirt.py:L110)
- **global-mutation**: VIR_CRED_USERNAME = 1 (src/nova/tests/fixtures/libvirt.py:L112)
- **global-mutation**: VIR_CRED_AUTHNAME = 2 (src/nova/tests/fixtures/libvirt.py:L113)
- **global-mutation**: VIR_CRED_LANGUAGE = 3 (src/nova/tests/fixtures/libvirt.py:L114)
- **global-mutation**: VIR_CRED_CNONCE = 4 (src/nova/tests/fixtures/libvirt.py:L115)
- **global-mutation**: VIR_CRED_PASSPHRASE = 5 (src/nova/tests/fixtures/libvirt.py:L116)
- **global-mutation**: VIR_CRED_ECHOPROMPT = 6 (src/nova/tests/fixtures/libvirt.py:L117)
- **global-mutation**: VIR_CRED_NOECHOPROMPT = 7 (src/nova/tests/fixtures/libvirt.py:L118)
- **global-mutation**: VIR_CRED_REALM = 8 (src/nova/tests/fixtures/libvirt.py:L119)
- **global-mutation**: VIR_CRED_EXTERNAL = 9 (src/nova/tests/fixtures/libvirt.py:L120)
- **global-mutation**: VIR_MIGRATE_LIVE = 1 (src/nova/tests/fixtures/libvirt.py:L122)
- **global-mutation**: VIR_MIGRATE_PEER2PEER = 2 (src/nova/tests/fixtures/libvirt.py:L123)
- **global-mutation**: VIR_MIGRATE_TUNNELLED = 4 (src/nova/tests/fixtures/libvirt.py:L124)
- **global-mutation**: VIR_MIGRATE_PERSIST_DEST = 8 (src/nova/tests/fixtures/libvirt.py:L125)
- **global-mutation**: VIR_MIGRATE_UNDEFINE_SOURCE = 16 (src/nova/tests/fixtures/libvirt.py:L126)
- **global-mutation**: VIR_MIGRATE_NON_SHARED_INC = 128 (src/nova/tests/fixtures/libvirt.py:L127)
- **global-mutation**: VIR_MIGRATE_AUTO_CONVERGE = 8192 (src/nova/tests/fixtures/libvirt.py:L128)
- **global-mutation**: VIR_MIGRATE_PARALLEL = 131072 (src/nova/tests/fixtures/libvirt.py:L129)
- **global-mutation**: VIR_MIGRATE_PARAM_PARALLEL_CONNECTIONS = 'parallel.connections' (src/nova/tests/fixtures/libvirt.py:L130)
- **global-mutation**: VIR_MIGRATE_POSTCOPY = 32768 (src/nova/tests/fixtures/libvirt.py:L131)
- **global-mutation**: VIR_MIGRATE_TLS = 65536 (src/nova/tests/fixtures/libvirt.py:L132)
- **global-mutation**: VIR_NODE_CPU_STATS_ALL_CPUS = -1 (src/nova/tests/fixtures/libvirt.py:L134)
- **global-mutation**: VIR_DOMAIN_START_PAUSED = 1 (src/nova/tests/fixtures/libvirt.py:L136)
- **global-mutation**: VIR_FROM_QEMU = 100 (src/nova/tests/fixtures/libvirt.py:L142)
- **global-mutation**: VIR_FROM_DOMAIN = 200 (src/nova/tests/fixtures/libvirt.py:L143)
- **global-mutation**: VIR_FROM_SECRET = 300 (src/nova/tests/fixtures/libvirt.py:L144)
- **global-mutation**: VIR_FROM_NWFILTER = 330 (src/nova/tests/fixtures/libvirt.py:L145)
- **global-mutation**: VIR_FROM_REMOTE = 340 (src/nova/tests/fixtures/libvirt.py:L146)
- **global-mutation**: VIR_FROM_RPC = 345 (src/nova/tests/fixtures/libvirt.py:L147)
- **global-mutation**: VIR_FROM_NODEDEV = 666 (src/nova/tests/fixtures/libvirt.py:L148)
- **global-mutation**: VIR_ERR_INVALID_ARG = 8 (src/nova/tests/fixtures/libvirt.py:L150)
- **global-mutation**: VIR_ERR_NO_SUPPORT = 3 (src/nova/tests/fixtures/libvirt.py:L151)
- **global-mutation**: VIR_ERR_XML_ERROR = 27 (src/nova/tests/fixtures/libvirt.py:L152)
- **global-mutation**: VIR_ERR_XML_DETAIL = 350 (src/nova/tests/fixtures/libvirt.py:L153)
- **global-mutation**: VIR_ERR_NO_DOMAIN = 420 (src/nova/tests/fixtures/libvirt.py:L154)
- **global-mutation**: VIR_ERR_OPERATION_FAILED = 510 (src/nova/tests/fixtures/libvirt.py:L155)
- **global-mutation**: VIR_ERR_OPERATION_INVALID = 55 (src/nova/tests/fixtures/libvirt.py:L156)
- **global-mutation**: VIR_ERR_OPERATION_TIMEOUT = 68 (src/nova/tests/fixtures/libvirt.py:L157)
- **global-mutation**: VIR_ERR_NO_NWFILTER = 620 (src/nova/tests/fixtures/libvirt.py:L158)
- **global-mutation**: VIR_ERR_SYSTEM_ERROR = 900 (src/nova/tests/fixtures/libvirt.py:L159)
- **global-mutation**: VIR_ERR_INTERNAL_ERROR = 950 (src/nova/tests/fixtures/libvirt.py:L160)
- **global-mutation**: VIR_ERR_CONFIG_UNSUPPORTED = 951 (src/nova/tests/fixtures/libvirt.py:L161)
- **global-mutation**: VIR_ERR_NO_NODE_DEVICE = 667 (src/nova/tests/fixtures/libvirt.py:L162)
- **global-mutation**: VIR_ERR_INVALID_SECRET = 65 (src/nova/tests/fixtures/libvirt.py:L163)
- **global-mutation**: VIR_ERR_NO_SECRET = 66 (src/nova/tests/fixtures/libvirt.py:L164)
- **global-mutation**: VIR_ERR_AGENT_UNRESPONSIVE = 86 (src/nova/tests/fixtures/libvirt.py:L165)
- **global-mutation**: VIR_ERR_ARGUMENT_UNSUPPORTED = 74 (src/nova/tests/fixtures/libvirt.py:L166)
- **global-mutation**: VIR_ERR_OPERATION_UNSUPPORTED = 84 (src/nova/tests/fixtures/libvirt.py:L167)
- **global-mutation**: VIR_ERR_DEVICE_MISSING = 99 (src/nova/tests/fixtures/libvirt.py:L168)
- **global-mutation**: VIR_CONNECT_RO = 1 (src/nova/tests/fixtures/libvirt.py:L170)
- **global-mutation**: VIR_CONNECT_BASELINE_CPU_EXPAND_FEATURES = 1 (src/nova/tests/fixtures/libvirt.py:L173)
- **global-mutation**: VIR_DOMAIN_SNAPSHOT_CREATE_NO_METADATA = 4 (src/nova/tests/fixtures/libvirt.py:L176)
- **global-mutation**: VIR_DOMAIN_SNAPSHOT_CREATE_DISK_ONLY = 16 (src/nova/tests/fixtures/libvirt.py:L177)
- **global-mutation**: VIR_DOMAIN_SNAPSHOT_CREATE_REUSE_EXT = 32 (src/nova/tests/fixtures/libvirt.py:L178)
- **global-mutation**: VIR_DOMAIN_SNAPSHOT_CREATE_QUIESCE = 64 (src/nova/tests/fixtures/libvirt.py:L179)
- **global-mutation**: VIR_DOMAIN_BLOCK_COMMIT_RELATIVE = 4 (src/nova/tests/fixtures/libvirt.py:L182)
- **global-mutation**: VIR_CONNECT_LIST_DOMAINS_ACTIVE = 1 (src/nova/tests/fixtures/libvirt.py:L185)
- **global-mutation**: VIR_CONNECT_LIST_DOMAINS_INACTIVE = 2 (src/nova/tests/fixtures/libvirt.py:L186)
- **global-mutation**: VIR_CONNECT_LIST_NODE_DEVICES_CAP_PCI_DEV = 2 (src/nova/tests/fixtures/libvirt.py:L189)
- **global-mutation**: VIR_CONNECT_LIST_NODE_DEVICES_CAP_NET = 1 << 4 (src/nova/tests/fixtures/libvirt.py:L190)
- **global-mutation**: VIR_CONNECT_LIST_NODE_DEVICES_CAP_VDPA = 1 << 17 (src/nova/tests/fixtures/libvirt.py:L191)
- **global-mutation**: VIR_CONNECT_LIST_NODE_DEVICES_CAP_MDEV = 1 << 5 (src/nova/tests/fixtures/libvirt.py:L192)
- **global-mutation**: VIR_CONNECT_LIST_NODE_DEVICES_INACTIVE = 1 << 8 (src/nova/tests/fixtures/libvirt.py:L193)
- **global-mutation**: VIR_SECRET_USAGE_TYPE_NONE = 0 (src/nova/tests/fixtures/libvirt.py:L196)
- **global-mutation**: VIR_SECRET_USAGE_TYPE_VOLUME = 1 (src/nova/tests/fixtures/libvirt.py:L197)
- **global-mutation**: VIR_SECRET_USAGE_TYPE_CEPH = 2 (src/nova/tests/fixtures/libvirt.py:L198)
- **global-mutation**: VIR_SECRET_USAGE_TYPE_ISCSI = 3 (src/nova/tests/fixtures/libvirt.py:L199)
- **global-mutation**: VIR_SECRET_USAGE_TYPE_VTPM = 5 (src/nova/tests/fixtures/libvirt.py:L200)
- **global-mutation**: VIR_DOMAIN_METADATA_DESCRIPTION = 0 (src/nova/tests/fixtures/libvirt.py:L203)
- **global-mutation**: VIR_DOMAIN_METADATA_TITLE = 1 (src/nova/tests/fixtures/libvirt.py:L204)
- **global-mutation**: VIR_DOMAIN_METADATA_ELEMENT = 2 (src/nova/tests/fixtures/libvirt.py:L205)
- **global-mutation**: FAKE_LIBVIRT_VERSION = versionutils.convert_version_to_int( (src/nova/tests/fixtures/libvirt.py:L208)
- **global-mutation**: FAKE_QEMU_VERSION = versionutils.convert_version_to_int( (src/nova/tests/fixtures/libvirt.py:L211)
- **global-mutation**: PCI_VEND_ID = '8086' (src/nova/tests/fixtures/libvirt.py:L214)
- **global-mutation**: PCI_VEND_NAME = 'Intel Corporation' (src/nova/tests/fixtures/libvirt.py:L215)
- **global-mutation**: PCI_PROD_ID = '1533' (src/nova/tests/fixtures/libvirt.py:L217)
- **global-mutation**: PCI_PROD_NAME = 'I210 Gigabit Network Connection' (src/nova/tests/fixtures/libvirt.py:L218)
- **global-mutation**: PCI_DRIVER_NAME = 'igb' (src/nova/tests/fixtures/libvirt.py:L219)
- **global-mutation**: PF_PROD_ID = '1528' (src/nova/tests/fixtures/libvirt.py:L221)
- **global-mutation**: PF_PROD_NAME = 'Ethernet Controller 10-Gigabit X540-AT2' (src/nova/tests/fixtures/libvirt.py:L222)
- **global-mutation**: PF_DRIVER_NAME = 'ixgbe' (src/nova/tests/fixtures/libvirt.py:L223)
- **global-mutation**: PF_CAP_TYPE = 'virt_functions' (src/nova/tests/fixtures/libvirt.py:L224)
- **global-mutation**: VF_PROD_ID = '1515' (src/nova/tests/fixtures/libvirt.py:L226)
- **global-mutation**: VF_PROD_NAME = 'X540 Ethernet Controller Virtual Function' (src/nova/tests/fixtures/libvirt.py:L227)
- **global-mutation**: VF_DRIVER_NAME = 'ixgbevf' (src/nova/tests/fixtures/libvirt.py:L228)
- **global-mutation**: VF_CAP_TYPE = 'phys_function' (src/nova/tests/fixtures/libvirt.py:L229)
- **global-mutation**: MDEV_CAPABLE_VEND_ID = '10DE' (src/nova/tests/fixtures/libvirt.py:L231)
- **global-mutation**: MDEV_CAPABLE_VEND_NAME = 'Nvidia' (src/nova/tests/fixtures/libvirt.py:L232)
- **global-mutation**: MDEV_CAPABLE_PROD_ID = '0FFE' (src/nova/tests/fixtures/libvirt.py:L233)
- **global-mutation**: MDEV_CAPABLE_PROD_NAME = 'GRID M60-0B' (src/nova/tests/fixtures/libvirt.py:L234)
- **global-mutation**: MDEV_CAPABLE_DRIVER_NAME = 'nvidia' (src/nova/tests/fixtures/libvirt.py:L235)
- **global-mutation**: MDEV_CAPABLE_CAP_TYPE = 'mdev_types' (src/nova/tests/fixtures/libvirt.py:L236)
- **global-mutation**: NVIDIA_11_VGPU_TYPE = 'nvidia-11' (src/nova/tests/fixtures/libvirt.py:L238)
- **global-mutation**: NVIDIA_12_VGPU_TYPE = 'nvidia-12' (src/nova/tests/fixtures/libvirt.py:L239)
- **global-mutation**: MLX5_CORE_TYPE = 'mlx5_core' (src/nova/tests/fixtures/libvirt.py:L240)
- **global-mutation**: MDEVCAP_DEV1_PCI_ADDR = 'pci_0000_81_00_0' (src/nova/tests/fixtures/libvirt.py:L241)
- **global-mutation**: MDEVCAP_DEV2_PCI_ADDR = 'pci_0000_81_01_0' (src/nova/tests/fixtures/libvirt.py:L242)
- **global-mutation**: MDEVCAP_DEV3_PCI_ADDR = 'pci_0000_81_02_0' (src/nova/tests/fixtures/libvirt.py:L243)
- **global-mutation**: TOTAL_NUMA_NODES = 2 (src/nova/tests/fixtures/libvirt.py:L520)
- **global-mutation**: VIR_DOMAIN_JOB_NONE = 0 (src/nova/tests/fixtures/libvirt.py:L880)
- **global-mutation**: VIR_DOMAIN_JOB_BOUNDED = 1 (src/nova/tests/fixtures/libvirt.py:L881)
- **global-mutation**: VIR_DOMAIN_JOB_UNBOUNDED = 2 (src/nova/tests/fixtures/libvirt.py:L882)
- **global-mutation**: VIR_DOMAIN_JOB_COMPLETED = 3 (src/nova/tests/fixtures/libvirt.py:L883)
- **global-mutation**: VIR_DOMAIN_JOB_FAILED = 4 (src/nova/tests/fixtures/libvirt.py:L884)
- **global-mutation**: VIR_DOMAIN_JOB_CANCELLED = 5 (src/nova/tests/fixtures/libvirt.py:L885)

## Security Surface

- **sink** (`db-write`): self.pci_address_to_mac_map.update(pci_address_to_mac_map) (src/nova/tests/fixtures/libvirt.py:L2767)
- **privilege** (`privsep-entrypoint`): 'nova.privsep.linux_net.set_device_macaddr_and_vlan')).mock (src/nova/tests/fixtures/libvirt.py:L2810)
- **privilege** (`privsep-entrypoint`): 'nova.privsep.linux_net.set_device_macaddr')).mock (src/nova/tests/fixtures/libvirt.py:L2816)

