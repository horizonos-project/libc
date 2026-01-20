# Horizon libc Makefile

CC ?= i686-elf-gcc
AR ?= i686-elf-ar
RANLIB ?= i686-elf-ranlib

CFLAGS = \
	-std=c89 \
	-ffreestanding \
	-fno-builtin \
	-fno-stack-protector \
	-fno-pic \
	-O2 \
	-Wall \
	-Wextra \
	-Wpedantic \
	-Iinclude

SRC = \
	src/crt0.c
	src/sys/syscall.c
	src/malloc/malloc.c
	src/string/string.c
	src/stdio/stdio.c
	src/errno.c

OBJ = $(SRC:.c=.o)

all: libc.a

libc.a: $(OBJ)
	$(AR) rcs $@ $(OBJ)
	$(RANLIB) $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

install: libc.a
	mkdir -p $(DESTDIR)/lib
	mkdir -p $(DESTDIR)/include
	cp libc.a $(DESTDIR)/lib/
	cp -r include/* $(DESTDIR)/include/

clean:
	rm -f $(OBJ) libc.a

.PHONY: all clean install