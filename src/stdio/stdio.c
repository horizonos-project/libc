#include <stdio.h>
#include <string.h>
#include <unistd.h>

int puts(const char *s) {
	write(1, s, strlen(s));
	write(1, "\n", 1);
	return 0;
}

int putchar(int c) {
	char ch = (char)c;
	write(1, &ch, 1);
	return c;
}
