#include <string.h>

void *memcpy(void *dst, const void *src, unsigned int n) {
	char *d = dst;
	const char *s = src;
	while (n--)
		*d++ = *s++;
	return dst;
}

void *memset(void *dst, int c, unsigned int n) {
	char *d = dst;
	while (n--)
		*d++ = (char)c;
	return dst;
}

unsigned int strlen(const char *s) {
	unsigned int n = 0;
	while (*s++)
		n++;
	return n;
}

int strcmp(const char *a, const char *b) {
	while (*a && (*a == *b)) {
		a++;
		b++;
	}
	return *(unsigned char *)a - *(unsigned char *)b;
}
