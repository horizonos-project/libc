#ifndef _SYS_SYSCALL_H
#define _SYS_SYSCALL_H

/**
 * Linux i386 syscalls consume 1->199
 */

#define SYS_exit   1
#define SYS_read   3
#define SYS_write  4
#define SYS_open   5
#define SYS_close  6
#define SYS_getpid 20
#define SYS_brk    45

/**
 * HorizonOS specific syscalls consume 200+
 */

#define SYS_clear_vga 200

#endif
