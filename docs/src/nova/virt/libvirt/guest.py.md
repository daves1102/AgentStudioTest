# src/nova/virt/libvirt/guest.py

## Overview

This file implements the `guest` module, defining 5 classs, 2 classmethods, 20 constants, 1 field, 57 methods, 4 propertys, 2 variables, 12 imports, 20 side effects.

Lines: total 991, code 734, comment 99, blank 158

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `libvirt` | variable | — | exported | not declared | — | `src/nova/virt/libvirt/guest.py:L48–L48` |
| `libvirtmod_qemu` | variable | — | exported | not declared | — | `src/nova/virt/libvirt/guest.py:L53–L53` |
| `LOG` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/guest.py:L56–L56` |
| `VIR_DOMAIN_NOSTATE` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/guest.py:L58–L58` |
| `VIR_DOMAIN_RUNNING` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/guest.py:L59–L59` |
| `VIR_DOMAIN_BLOCKED` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/guest.py:L60–L60` |
| `VIR_DOMAIN_PAUSED` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/guest.py:L61–L61` |
| `VIR_DOMAIN_SHUTDOWN` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/guest.py:L62–L62` |
| `VIR_DOMAIN_SHUTOFF` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/guest.py:L63–L63` |
| `VIR_DOMAIN_CRASHED` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/guest.py:L64–L64` |
| `VIR_DOMAIN_PMSUSPENDED` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/guest.py:L65–L65` |
| `LIBVIRT_POWER_STATE` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/guest.py:L67–L83` |
| `VIR_DOMAIN_BLOCK_JOB_TYPE_UNKNOWN` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/guest.py:L86–L86` |
| `VIR_DOMAIN_BLOCK_JOB_TYPE_PULL` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/guest.py:L87–L87` |
| `VIR_DOMAIN_BLOCK_JOB_TYPE_COPY` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/guest.py:L88–L88` |
| `VIR_DOMAIN_BLOCK_JOB_TYPE_COMMIT` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/guest.py:L89–L89` |
| `VIR_DOMAIN_BLOCK_JOB_TYPE_ACTIVE_COMMIT` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/guest.py:L90–L90` |
| `VIR_DOMAIN_BLOCK_JOB_TYPE_BACKUP` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/guest.py:L91–L91` |
| `VIR_DOMAIN_BLOCK_JOB_TYPE_LAST` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/guest.py:L92–L92` |
| `LIBVIRT_BLOCK_JOB_TYPE` | constant | — | exported | not declared | — | `src/nova/virt/libvirt/guest.py:L94–L102` |
| `Guest` | class | — | exported | not declared | — | `src/nova/virt/libvirt/guest.py:L105–L725` |
| `Guest.__init__` | method | (self, domain) | public | not declared | 1/2 | `src/nova/virt/libvirt/guest.py:L107–L108` |
| `Guest.__repr__` | method | (self) | public | `"<Guest %(id)d %(name)s %(uuid)s>" % { 'id': self.id, 'name': self.name, 'uuid': self.uuid }` (src/nova/virt/libvirt/guest.py:L111) | 1/6 | `src/nova/virt/libvirt/guest.py:L110–L115` |
| `Guest.id` | method | (self) | public | `self._domain.ID()` (src/nova/virt/libvirt/guest.py:L119) | 1/2 | `src/nova/virt/libvirt/guest.py:L118–L119` |
| `Guest.uuid` | method | (self) | public | `self._domain.UUIDString()` (src/nova/virt/libvirt/guest.py:L123) | 1/2 | `src/nova/virt/libvirt/guest.py:L122–L123` |
| `Guest.name` | method | (self) | public | `self._domain.name()` (src/nova/virt/libvirt/guest.py:L127) | 1/2 | `src/nova/virt/libvirt/guest.py:L126–L127` |
| `Guest._encoded_xml` | method | (self) | private | `encodeutils.safe_decode(self._domain.XMLDesc(0))` (src/nova/virt/libvirt/guest.py:L131) | 1/2 | `src/nova/virt/libvirt/guest.py:L130–L131` |
| `Guest.create` | method | (cls, xml, host) | public | `guest` (src/nova/virt/libvirt/guest.py:L150) | 3/10 | `src/nova/virt/libvirt/guest.py:L134–L150` |
| `Guest.launch` | method | (self, pause=False) | public | `self._domain.createWithFlags(flags)` (src/nova/virt/libvirt/guest.py:L159) | 4/8 | `src/nova/virt/libvirt/guest.py:L152–L163` |
| `Guest.poweroff` | method | (self) | public | not declared | 1/2 | `src/nova/virt/libvirt/guest.py:L165–L167` |
| `Guest.sync_guest_time` | method | (self) | public | not declared | 6/27 | `src/nova/virt/libvirt/guest.py:L169–L207` |
| `Guest.inject_nmi` | method | (self) | public | not declared | 1/2 | `src/nova/virt/libvirt/guest.py:L209–L211` |
| `Guest.resume` | method | (self) | public | not declared | 1/2 | `src/nova/virt/libvirt/guest.py:L213–L215` |
| `Guest.get_interfaces` | method | (self) | public | `[]` (src/nova/virt/libvirt/guest.py:L224); `interfaces` (src/nova/virt/libvirt/guest.py:L232) | 3/11 | `src/nova/virt/libvirt/guest.py:L217–L232` |
| `Guest.get_interface_by_cfg` | method | (self, cfg, from_persistent_config=False) | public | `None` (src/nova/virt/libvirt/guest.py:L256); `interface` (src/nova/virt/libvirt/guest.py:L269); `None` (src/nova/virt/libvirt/guest.py:L280) | 5/21 | `src/nova/virt/libvirt/guest.py:L234–L280` |
| `Guest.get_vcpus_info` | method | (self) | public | not declared | 2/5 | `src/nova/virt/libvirt/guest.py:L282–L290` |
| `Guest.delete_configuration` | method | (self, keep_vtpm=False, keep_nvram=False) | public | not declared | 7/21 | `src/nova/virt/libvirt/guest.py:L292–L331` |
| `Guest.has_persistent_configuration` | method | (self) | public | `self._domain.isPersistent()` (src/nova/virt/libvirt/guest.py:L335) | 1/2 | `src/nova/virt/libvirt/guest.py:L333–L335` |
| `Guest.attach_device` | method | (self, conf, persistent=False, live=False) | public | not declared | 5/6 | `src/nova/virt/libvirt/guest.py:L337–L352` |
| `Guest.set_metadata` | method | (self, metadata, persistent=False, live=False) | public | not declared | 5/8 | `src/nova/virt/libvirt/guest.py:L354–L374` |
| `Guest.get_config` | method | (self) | public | `config` (src/nova/virt/libvirt/guest.py:L383) | 1/4 | `src/nova/virt/libvirt/guest.py:L376–L383` |
| `Guest.get_disk` | method | (self, device, from_persistent_config=False) | public | `None` (src/nova/virt/libvirt/guest.py:L404); `conf` (src/nova/virt/libvirt/guest.py:L417); `None` (src/nova/virt/libvirt/guest.py:L419) | 5/20 | `src/nova/virt/libvirt/guest.py:L385–L419` |
| `Guest.get_all_disks` | method | (self) | public | `self.get_all_devices(vconfig.LibvirtConfigGuestDisk)` (src/nova/virt/libvirt/guest.py:L427) | 1/2 | `src/nova/virt/libvirt/guest.py:L421–L427` |
| `Guest.get_device_by_alias` | method | (self, devalias, devtype=None, from_persistent_config=False) | public | `dev` (src/nova/virt/libvirt/guest.py:L433) | 4/5 | `src/nova/virt/libvirt/guest.py:L429–L433` |
| `Guest.get_all_devices` | method | (self, devtype=None, from_persistent_config=False) | public | `[]` (src/nova/virt/libvirt/guest.py:L458); `devs` (src/nova/virt/libvirt/guest.py:L465) | 6/20 | `src/nova/virt/libvirt/guest.py:L435–L465` |
| `Guest.detach_device` | method | (self, conf, persistent=False, live=False) | public | not declared | 5/6 | `src/nova/virt/libvirt/guest.py:L467–L482` |
| `Guest.get_xml_desc` | method | (self, dump_inactive=False, dump_sensitive=False, dump_migratable=False) | public | `self._domain.XMLDesc(flags=flags)` (src/nova/virt/libvirt/guest.py:L497) | 7/6 | `src/nova/virt/libvirt/guest.py:L484–L497` |
| `Guest.save_memory_state` | method | (self) | public | not declared | 1/2 | `src/nova/virt/libvirt/guest.py:L499–L504` |
| `Guest.get_block_device` | method | (self, disk) | public | `BlockDevice(self, disk)` (src/nova/virt/libvirt/guest.py:L508) | 1/2 | `src/nova/virt/libvirt/guest.py:L506–L508` |
| `Guest.set_user_password` | method | (self, user, new_pass) | public | not declared | 1/2 | `src/nova/virt/libvirt/guest.py:L510–L512` |
| `Guest._get_domain_info` | method | (self) | private | `self._domain.info()` (src/nova/virt/libvirt/guest.py:L519) | 1/2 | `src/nova/virt/libvirt/guest.py:L514–L519` |
| `Guest.get_info` | method | (self, host) | public | `hardware.InstanceInfo( state=LIBVIRT_POWER_STATE[dom_info[0]], internal_id=self.id)` (src/nova/virt/libvirt/guest.py:L544) | 3/16 | `src/nova/virt/libvirt/guest.py:L521–L546` |
| `Guest.get_power_state` | method | (self, host) | public | `self.get_info(host).state` (src/nova/virt/libvirt/guest.py:L549) | 1/2 | `src/nova/virt/libvirt/guest.py:L548–L549` |
| `Guest.is_active` | method | (self) | public | `self._domain.isActive()` (src/nova/virt/libvirt/guest.py:L553) | 1/3 | `src/nova/virt/libvirt/guest.py:L551–L553` |
| `Guest.freeze_filesystems` | method | (self) | public | not declared | 1/2 | `src/nova/virt/libvirt/guest.py:L555–L557` |
| `Guest.thaw_filesystems` | method | (self) | public | not declared | 1/2 | `src/nova/virt/libvirt/guest.py:L559–L561` |
| `Guest.snapshot` | method | (self, conf, no_metadata=False, disk_only=False, reuse_ext=False, quiesce=False) | public | not declared | 9/11 | `src/nova/virt/libvirt/guest.py:L563–L583` |
| `Guest.shutdown` | method | (self) | public | not declared | 1/2 | `src/nova/virt/libvirt/guest.py:L585–L587` |
| `Guest.pause` | method | (self) | public | not declared | 1/2 | `src/nova/virt/libvirt/guest.py:L589–L598` |
| `Guest.migrate` | method | (self, destination, migrate_uri=None, migrate_disks=None, destination_xml=None, flags=0, bandwidth=0, parallel=0) | public | not declared | 7/19 | `src/nova/virt/libvirt/guest.py:L600–L663` |
| `Guest.abort_job` | method | (self) | public | not declared | 1/2 | `src/nova/virt/libvirt/guest.py:L665–L667` |
| `Guest.migrate_configure_max_downtime` | method | (self, mstime) | public | not declared | 1/2 | `src/nova/virt/libvirt/guest.py:L669–L674` |
| `Guest.migrate_start_postcopy` | method | (self) | public | not declared | 1/2 | `src/nova/virt/libvirt/guest.py:L676–L678` |
| `Guest.announce_self` | method | (self) | public | not declared | 1/3 | `src/nova/virt/libvirt/guest.py:L680–L682` |
| `Guest.get_job_info` | method | (self) | public | `JobInfo(**stats)` (src/nova/virt/libvirt/guest.py:L695); `JobInfo._get_job_stats_compat(self._domain)` (src/nova/virt/libvirt/guest.py:L702); `JobInfo(type=libvirt.VIR_DOMAIN_JOB_COMPLETED)` (src/nova/virt/libvirt/guest.py:L709); `JobInfo(type=libvirt.VIR_DOMAIN_JOB_NONE)` (src/nova/virt/libvirt/guest.py:L715); `JobInfo._get_job_stats_compat(self._domain)` (src/nova/virt/libvirt/guest.py:L723); `JobInfo._get_job_stats_compat(self._domain)` (src/nova/virt/libvirt/guest.py:L725) | 9/31 | `src/nova/virt/libvirt/guest.py:L684–L725` |
| `BlockDevice` | class | — | exported | not declared | — | `src/nova/virt/libvirt/guest.py:L728–L881` |
| `BlockDevice.REBASE_DEFAULT_BANDWIDTH` | constant | — | public | not declared | — | `src/nova/virt/libvirt/guest.py:L731–L731` |
| `BlockDevice.COMMIT_DEFAULT_BANDWIDTH` | constant | — | public | not declared | — | `src/nova/virt/libvirt/guest.py:L732–L732` |
| `BlockDevice.__init__` | method | (self, guest, disk) | public | not declared | 1/3 | `src/nova/virt/libvirt/guest.py:L734–L736` |
| `BlockDevice.abort_job` | method | (self, async_=False, pivot=False) | public | not declared | 5/4 | `src/nova/virt/libvirt/guest.py:L738–L751` |
| `BlockDevice.get_job_info` | method | (self) | public | `None` (src/nova/virt/libvirt/guest.py:L767); `BlockDeviceJobInfo( job=status['type'], bandwidth=status['bandwidth'], cur=status['cur'], end=status['end'])` (src/nova/virt/libvirt/guest.py:L769) | 2/9 | `src/nova/virt/libvirt/guest.py:L753–L773` |
| `BlockDevice.copy` | method | (self, dest_xml, shallow=False, reuse_ext=False, transient=False) | public | `self._guest._domain.blockCopy(self._disk, dest_xml, flags=flags)` (src/nova/virt/libvirt/guest.py:L789) | 7/5 | `src/nova/virt/libvirt/guest.py:L775–L789` |
| `BlockDevice.rebase` | method | (self, base, shallow=False, reuse_ext=False, copy=False, relative=False, copy_dev=False) | public | `self._guest._domain.blockRebase( self._disk, base, self.REBASE_DEFAULT_BANDWIDTH, flags=flags)` (src/nova/virt/libvirt/guest.py:L812) | 11/9 | `src/nova/virt/libvirt/guest.py:L791–L813` |
| `BlockDevice.commit` | method | (self, base, top, relative=False) | public | `self._guest._domain.blockCommit( self._disk, base, top, self.COMMIT_DEFAULT_BANDWIDTH, flags=flags)` (src/nova/virt/libvirt/guest.py:L824) | 3/4 | `src/nova/virt/libvirt/guest.py:L815–L825` |
| `BlockDevice.resize` | method | (self, size) | public | not declared | 1/3 | `src/nova/virt/libvirt/guest.py:L827–L835` |
| `BlockDevice.is_job_complete` | method | (self) | public | `True` (src/nova/virt/libvirt/guest.py:L861); `disk.mirror.ready == 'yes'` (src/nova/virt/libvirt/guest.py:L875); `False` (src/nova/virt/libvirt/guest.py:L877) | 5/14 | `src/nova/virt/libvirt/guest.py:L837–L877` |
| `BlockDevice.blockStats` | method | (self) | public | `self._guest._domain.blockStats(self._disk)` (src/nova/virt/libvirt/guest.py:L881) | 1/2 | `src/nova/virt/libvirt/guest.py:L879–L881` |
| `VCPUInfo` | class | — | exported | not declared | — | `src/nova/virt/libvirt/guest.py:L884–L897` |
| `VCPUInfo.__init__` | method | (self, id, cpu, state, time) | public | not declared | 1/5 | `src/nova/virt/libvirt/guest.py:L885–L897` |
| `BlockDeviceJobInfo` | class | — | exported | not declared | — | `src/nova/virt/libvirt/guest.py:L900–L913` |
| `BlockDeviceJobInfo.__init__` | method | (self, job, bandwidth, cur, end) | public | not declared | 1/5 | `src/nova/virt/libvirt/guest.py:L901–L913` |
| `JobInfo` | class | — | exported | not declared | — | `src/nova/virt/libvirt/guest.py:L916–L991` |
| `JobInfo._have_job_stats` | field | — | private | not declared | — | `src/nova/virt/libvirt/guest.py:L926–L926` |
| `JobInfo.__init__` | method | (self, **kwargs) | public | not declared | 1/26 | `src/nova/virt/libvirt/guest.py:L928–L954` |
| `JobInfo._get_job_stats_compat` | method | (cls, dom) | private | `cls(type=libvirt.VIR_DOMAIN_JOB_COMPLETED)` (src/nova/virt/libvirt/guest.py:L974); `cls( type=info[0], time_elapsed=info[1], time_remaining=info[2], data_total=info[3], data_processed=info[4], data_remaining=info[5], memory_total=info[6], memory_processed=info[7], memory_remaining=in` (src/nova/virt/libvirt/guest.py:L979) | 3/24 | `src/nova/virt/libvirt/guest.py:L957–L991` |
| `Guest.id` | property | — | public | not declared | — | `src/nova/virt/libvirt/guest.py:L117–L119` |
| `Guest.uuid` | property | — | public | not declared | — | `src/nova/virt/libvirt/guest.py:L121–L123` |
| `Guest.name` | property | — | public | not declared | — | `src/nova/virt/libvirt/guest.py:L125–L127` |
| `Guest._encoded_xml` | property | — | private | not declared | — | `src/nova/virt/libvirt/guest.py:L129–L131` |
| `Guest.create` | classmethod | — | public | not declared | — | `src/nova/virt/libvirt/guest.py:L133–L150` |
| `JobInfo._get_job_stats_compat` | classmethod | — | private | not declared | — | `src/nova/virt/libvirt/guest.py:L956–L991` |

## Dependencies

- `import time` (src/nova/virt/libvirt/guest.py:L30)
- `lxml`: imports `etree` (src/nova/virt/libvirt/guest.py:L32)
- `oslo_log`: imports `log as logging` (src/nova/virt/libvirt/guest.py:L33)
- `oslo_utils`: imports `encodeutils` (src/nova/virt/libvirt/guest.py:L34)
- `oslo_utils`: imports `excutils` (src/nova/virt/libvirt/guest.py:L35)
- `nova.compute`: imports `power_state` (src/nova/virt/libvirt/guest.py:L37)
- `nova`: imports `exception` (src/nova/virt/libvirt/guest.py:L38)
- `nova.i18n`: imports `_` (src/nova/virt/libvirt/guest.py:L39)
- `nova.virt`: imports `hardware` (src/nova/virt/libvirt/guest.py:L40)
- `nova.virt.libvirt`: imports `config as vconfig` (src/nova/virt/libvirt/guest.py:L41)
- `import libvirt` (src/nova/virt/libvirt/guest.py:L46)
- `import libvirtmod_qemu` (src/nova/virt/libvirt/guest.py:L51)

## Side Effects

- **global-mutation**: LOG = logging.getLogger(__name__) (src/nova/virt/libvirt/guest.py:L56)
- **global-mutation**: VIR_DOMAIN_NOSTATE = 0 (src/nova/virt/libvirt/guest.py:L58)
- **global-mutation**: VIR_DOMAIN_RUNNING = 1 (src/nova/virt/libvirt/guest.py:L59)
- **global-mutation**: VIR_DOMAIN_BLOCKED = 2 (src/nova/virt/libvirt/guest.py:L60)
- **global-mutation**: VIR_DOMAIN_PAUSED = 3 (src/nova/virt/libvirt/guest.py:L61)
- **global-mutation**: VIR_DOMAIN_SHUTDOWN = 4 (src/nova/virt/libvirt/guest.py:L62)
- **global-mutation**: VIR_DOMAIN_SHUTOFF = 5 (src/nova/virt/libvirt/guest.py:L63)
- **global-mutation**: VIR_DOMAIN_CRASHED = 6 (src/nova/virt/libvirt/guest.py:L64)
- **global-mutation**: VIR_DOMAIN_PMSUSPENDED = 7 (src/nova/virt/libvirt/guest.py:L65)
- **global-mutation**: LIBVIRT_POWER_STATE = { (src/nova/virt/libvirt/guest.py:L67)
- **global-mutation**: VIR_DOMAIN_BLOCK_JOB_TYPE_UNKNOWN = 0 (src/nova/virt/libvirt/guest.py:L86)
- **global-mutation**: VIR_DOMAIN_BLOCK_JOB_TYPE_PULL = 1 (src/nova/virt/libvirt/guest.py:L87)
- **global-mutation**: VIR_DOMAIN_BLOCK_JOB_TYPE_COPY = 2 (src/nova/virt/libvirt/guest.py:L88)
- **global-mutation**: VIR_DOMAIN_BLOCK_JOB_TYPE_COMMIT = 3 (src/nova/virt/libvirt/guest.py:L89)
- **global-mutation**: VIR_DOMAIN_BLOCK_JOB_TYPE_ACTIVE_COMMIT = 4 (src/nova/virt/libvirt/guest.py:L90)
- **global-mutation**: VIR_DOMAIN_BLOCK_JOB_TYPE_BACKUP = 5 (src/nova/virt/libvirt/guest.py:L91)
- **global-mutation**: VIR_DOMAIN_BLOCK_JOB_TYPE_LAST = 6 (src/nova/virt/libvirt/guest.py:L92)
- **global-mutation**: LIBVIRT_BLOCK_JOB_TYPE = { (src/nova/virt/libvirt/guest.py:L94)
- **global-mutation**: REBASE_DEFAULT_BANDWIDTH = 0  # in MiB/s - 0 unlimited (src/nova/virt/libvirt/guest.py:L731)
- **global-mutation**: COMMIT_DEFAULT_BANDWIDTH = 0  # in MiB/s - 0 unlimited (src/nova/virt/libvirt/guest.py:L732)

