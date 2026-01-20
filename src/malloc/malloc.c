#include <stdlib.h>
#include <unistd.h>

static char *heap;
static char *heap_end;

void *malloc(unsigned int size) {
	char *ret;

	if (!heap) {
		heap = (char *)brk(0);
		heap_end = heap;
	}

	ret = heap_end;
	heap_end += size;

	if ((char *)brk(heap_end) != heap_end)
		return 0;

	return ret;
}

void free(void *ptr) {
	(void)ptr;
}

void exit(int status) {
	_exit(status);
}
