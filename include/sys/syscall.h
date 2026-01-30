#ifndef _SYS_SYSCALL_H
#define _SYS_SYSCALL_H

/**
 * Linux i386 syscalls consume 1->400
 */

/* proc / lifecycle */
#define SYS_exit        1
#define SYS_fork        2
#define SYS_read        3
#define SYS_write       4
#define SYS_open        5
#define SYS_close       6
#define SYS_waitpid     7
#define SYS_execve      11
#define SYS_time        13
#define SYS_lseek       19
#define SYS_getpid      20
#define SYS_alarm       27
#define SYS_brk         45

/* identity */
#define SYS_getuid      24
#define SYS_getgid      47
#define SYS_geteuid     49
#define SYS_getegid     50

/* File descriptor ops */
#define SYS_dup         41
#define SYS_pipe        42
#define SYS_dup2        63

/* File metadata */
#define SYS_stat        106
#define SYS_lstat       107
#define SYS_fstat       108

/* Waiting */
#define SYS_wait4       114

/* System info */
#define SYS_sysinfo     116
#define SYS_uname       122

/* Memory management */
#define SYS_munmap      91
#define SYS_mprotect    125
#define SYS_mmap2       192

/* Time */
#define SYS_gettimeofday 78
#define SYS_nanosleep    162


/* Directories */
#define SYS_getdents    141

/* Horizon-specific syscalls start here */
#define SYS_clear_vga    500

#endif
