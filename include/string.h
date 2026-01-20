#ifndef _STRING_H
#define _STRING_H

void *memcpy(void *dst, const void *src, unsigned int n);
void *memset(void *dst, int c, unsigned int n);
unsigned int strlen(const char *s);
int strcmp(const char *a, const char *b);

#endif
