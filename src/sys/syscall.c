#include <unistd.h>
#include <sys/syscall.h>

static inline int syscall0(int n) {
	int r;
	__asm__ volatile("int $0x80" : "=a"(r) : "a"(n));
	return r;
}

static inline int syscall1(int n, int a) {
	int r;
	__asm__ volatile("int $0x80" : "=a"(r) : "a"(n), "b"(a));
	return r;
}

static inline int syscall3(int n, int a, int b, int c) {
	int r;
	__asm__ volatile("int $0x80"
		: "=a"(r)
		: "a"(n), "b"(a), "c"(b), "d"(c));
	return r;
}

int read(int fd, void *buf, unsigned int count) {
	return syscall3(SYS_read, fd, (int)buf, count);
}

int write(int fd, const void *buf, unsigned int count) {
	return syscall3(SYS_write, fd, (int)buf, count);
}

int open(const char *path, int flags) {
	return syscall3(SYS_open, (int)path, flags, 0);
}

int close(int fd) {
	return syscall1(SYS_close, fd);
}

int getpid(void) {
	return syscall0(SYS_getpid);
}

unsigned int brk(void *addr) {
	return syscall1(SYS_brk, (int)addr);
}

void _exit(int status) {
	syscall1(SYS_exit, status);
	for (;;);
}
