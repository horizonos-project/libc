#ifndef _UNISTD_H
#define _UNISTD_H

int read(int fd, void *buf, unsigned int count);
int write(int fd, const void *buf, unsigned int count);
int open(const char *path, int flags);
int close(int fd);
int getpid(void);

void _exit(int status);
unsigned int brk(void *addr);

#endif
