# Horizon libc

This repository contains the **boostrap C standard library** for **[HorizonOS](https://github.com/horizonos-project/horizon).**

This libc is intentionally:
 - **Minimal**
 - **Static-only**
 - **Single-process**
 - **Linux i386 ABI Compatible**

Its primary purpose is to:
 - **Run a native C compiler (tcc)**
 - **Enable HorizonOS to compile itself**
 - **Validate userspace syscall ABI**

This is not a replacement for other libc implementations and is temporary. This will likely be replaced with a more complete solution such as [musl](https://musl.libc.org/). When this is inevitably replaced, this libc will be made into a public archive for preservation purposes.

### What is Supported
 - Static ELF i386 Binaries
 - `read`,`write`,`open`,`close`
 - `brk`-based memory allocation
 - Minimal but functional `stdio`
 - `crt0` startup code

### What is NOT Supported
 - `fork`,`execve`
 - Signals
 - Threads/TLS
 - `mmap`
 - Dynamic linkage
 - Full `stdio`

## ABI Compatibility

This libc relies on the HorizonOS exposed ABI:
 - Linux i386 syscall numbers
 - `int 0x80` syscall entry
 - Args are in `ebx`,`ecx`,`edx`,`esi`,`edi`
 - Return value is in `eax`

The ABI is documented completely in the [HorizonOS](https://github.com/horizonos-project/horizon) upstream repository.

---

This library is licensed under the [GNU General Public License v3.0](./LICENSE) much like HorizonOS itself.
