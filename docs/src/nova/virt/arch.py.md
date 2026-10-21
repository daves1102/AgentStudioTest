# src/nova/virt/arch.py

## Overview

This file implements the `arch` module, defining 35 constants, 35 side effects.

Lines: total 65, code 43, comment 14, blank 8

## Defined Symbols

| name | kind | signature | visibility | returns | complexity | lines |
|---|---|---|---|---|---|---|
| `ALPHA` | constant | — | exported | not declared | — | `src/nova/virt/arch.py:L16–L16` |
| `ARMV6` | constant | — | exported | not declared | — | `src/nova/virt/arch.py:L17–L17` |
| `ARMV7` | constant | — | exported | not declared | — | `src/nova/virt/arch.py:L18–L18` |
| `ARMV7B` | constant | — | exported | not declared | — | `src/nova/virt/arch.py:L19–L19` |
| `AARCH64` | constant | — | exported | not declared | — | `src/nova/virt/arch.py:L21–L21` |
| `CRIS` | constant | — | exported | not declared | — | `src/nova/virt/arch.py:L22–L22` |
| `I686` | constant | — | exported | not declared | — | `src/nova/virt/arch.py:L23–L23` |
| `IA64` | constant | — | exported | not declared | — | `src/nova/virt/arch.py:L24–L24` |
| `LM32` | constant | — | exported | not declared | — | `src/nova/virt/arch.py:L25–L25` |
| `M68K` | constant | — | exported | not declared | — | `src/nova/virt/arch.py:L27–L27` |
| `MICROBLAZE` | constant | — | exported | not declared | — | `src/nova/virt/arch.py:L28–L28` |
| `MICROBLAZEEL` | constant | — | exported | not declared | — | `src/nova/virt/arch.py:L29–L29` |
| `MIPS` | constant | — | exported | not declared | — | `src/nova/virt/arch.py:L30–L30` |
| `MIPSEL` | constant | — | exported | not declared | — | `src/nova/virt/arch.py:L31–L31` |
| `MIPS64` | constant | — | exported | not declared | — | `src/nova/virt/arch.py:L33–L33` |
| `MIPS64EL` | constant | — | exported | not declared | — | `src/nova/virt/arch.py:L34–L34` |
| `OPENRISC` | constant | — | exported | not declared | — | `src/nova/virt/arch.py:L35–L35` |
| `PARISC` | constant | — | exported | not declared | — | `src/nova/virt/arch.py:L36–L36` |
| `PARISC64` | constant | — | exported | not declared | — | `src/nova/virt/arch.py:L37–L37` |
| `PPC` | constant | — | exported | not declared | — | `src/nova/virt/arch.py:L39–L39` |
| `PPCLE` | constant | — | exported | not declared | — | `src/nova/virt/arch.py:L40–L40` |
| `PPC64` | constant | — | exported | not declared | — | `src/nova/virt/arch.py:L41–L41` |
| `PPC64LE` | constant | — | exported | not declared | — | `src/nova/virt/arch.py:L42–L42` |
| `PPCEMB` | constant | — | exported | not declared | — | `src/nova/virt/arch.py:L43–L43` |
| `S390` | constant | — | exported | not declared | — | `src/nova/virt/arch.py:L45–L45` |
| `S390X` | constant | — | exported | not declared | — | `src/nova/virt/arch.py:L46–L46` |
| `SH4` | constant | — | exported | not declared | — | `src/nova/virt/arch.py:L47–L47` |
| `SH4EB` | constant | — | exported | not declared | — | `src/nova/virt/arch.py:L48–L48` |
| `SPARC` | constant | — | exported | not declared | — | `src/nova/virt/arch.py:L49–L49` |
| `SPARC64` | constant | — | exported | not declared | — | `src/nova/virt/arch.py:L51–L51` |
| `UNICORE32` | constant | — | exported | not declared | — | `src/nova/virt/arch.py:L52–L52` |
| `X86_64` | constant | — | exported | not declared | — | `src/nova/virt/arch.py:L53–L53` |
| `XTENSA` | constant | — | exported | not declared | — | `src/nova/virt/arch.py:L54–L54` |
| `XTENSAEB` | constant | — | exported | not declared | — | `src/nova/virt/arch.py:L55–L55` |
| `ALL` | constant | — | exported | not declared | — | `src/nova/virt/arch.py:L57–L65` |

## Dependencies

None.

## Side Effects

- **global-mutation**: ALPHA = 'alpha' (src/nova/virt/arch.py:L16)
- **global-mutation**: ARMV6 = 'armv6' (src/nova/virt/arch.py:L17)
- **global-mutation**: ARMV7 = 'armv7l' (src/nova/virt/arch.py:L18)
- **global-mutation**: ARMV7B = 'armv7b' (src/nova/virt/arch.py:L19)
- **global-mutation**: AARCH64 = 'aarch64' (src/nova/virt/arch.py:L21)
- **global-mutation**: CRIS = 'cris' (src/nova/virt/arch.py:L22)
- **global-mutation**: I686 = 'i686' (src/nova/virt/arch.py:L23)
- **global-mutation**: IA64 = 'ia64' (src/nova/virt/arch.py:L24)
- **global-mutation**: LM32 = 'lm32' (src/nova/virt/arch.py:L25)
- **global-mutation**: M68K = 'm68k' (src/nova/virt/arch.py:L27)
- **global-mutation**: MICROBLAZE = 'microblaze' (src/nova/virt/arch.py:L28)
- **global-mutation**: MICROBLAZEEL = 'microblazeel' (src/nova/virt/arch.py:L29)
- **global-mutation**: MIPS = 'mips' (src/nova/virt/arch.py:L30)
- **global-mutation**: MIPSEL = 'mipsel' (src/nova/virt/arch.py:L31)
- **global-mutation**: MIPS64 = 'mips64' (src/nova/virt/arch.py:L33)
- **global-mutation**: MIPS64EL = 'mips64el' (src/nova/virt/arch.py:L34)
- **global-mutation**: OPENRISC = 'openrisc' (src/nova/virt/arch.py:L35)
- **global-mutation**: PARISC = 'parisc' (src/nova/virt/arch.py:L36)
- **global-mutation**: PARISC64 = 'parisc64' (src/nova/virt/arch.py:L37)
- **global-mutation**: PPC = 'ppc' (src/nova/virt/arch.py:L39)
- **global-mutation**: PPCLE = 'ppcle' (src/nova/virt/arch.py:L40)
- **global-mutation**: PPC64 = 'ppc64' (src/nova/virt/arch.py:L41)
- **global-mutation**: PPC64LE = 'ppc64le' (src/nova/virt/arch.py:L42)
- **global-mutation**: PPCEMB = 'ppcemb' (src/nova/virt/arch.py:L43)
- **global-mutation**: S390 = 's390' (src/nova/virt/arch.py:L45)
- **global-mutation**: S390X = 's390x' (src/nova/virt/arch.py:L46)
- **global-mutation**: SH4 = 'sh4' (src/nova/virt/arch.py:L47)
- **global-mutation**: SH4EB = 'sh4eb' (src/nova/virt/arch.py:L48)
- **global-mutation**: SPARC = 'sparc' (src/nova/virt/arch.py:L49)
- **global-mutation**: SPARC64 = 'sparc64' (src/nova/virt/arch.py:L51)
- **global-mutation**: UNICORE32 = 'unicore32' (src/nova/virt/arch.py:L52)
- **global-mutation**: X86_64 = 'x86_64' (src/nova/virt/arch.py:L53)
- **global-mutation**: XTENSA = 'xtensa' (src/nova/virt/arch.py:L54)
- **global-mutation**: XTENSAEB = 'xtensaeb' (src/nova/virt/arch.py:L55)
- **global-mutation**: ALL = ( (src/nova/virt/arch.py:L57)

