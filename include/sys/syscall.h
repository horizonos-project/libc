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

/* filesystem / path (shell essentials) */
#define SYS_unlink      10
#define SYS_chdir       12
#define SYS_access      33
#define SYS_rename      38
#define SYS_mkdir       39
#define SYS_rmdir       40
#define SYS_getcwd      183

/* identity */
#define SYS_getuid      24
#define SYS_getgid      47
#define SYS_geteuid     49
#define SYS_getegid     50

/* File descriptor ops */
#define SYS_dup         41
#define SYS_pipe        42
#define SYS_dup2        63
#define SYS_fcntl       55
#define SYS_ioctl       54

/* Multiplexing (pick one; select is classic on i386) */
#define SYS_select      82
/* #define SYS_poll      168 */ /* optional alternative */

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

/* Signals (recommended modern RT set for shells) */
#define SYS_kill           37
#define SYS_rt_sigreturn   173
#define SYS_rt_sigaction   174
#define SYS_rt_sigprocmask 175

/* Job control / sessions (usable shell) */
#define SYS_setpgid     57
#define SYS_getpgrp     65
#define SYS_setsid      66
#define SYS_getsid      147  /* optional but very handy */
#define SYS_umask       60

/* Horizon-specific syscalls start here */
#define SYS_clear_vga    500

#endif
