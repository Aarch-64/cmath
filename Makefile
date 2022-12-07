CC=clang
CLIBS=-lm -lncurses
CFLAGS=-Wall -Wextra -O2 -fno-stack-protector -std=gnu99

OBJS= \
	cmath.o \
	main.o \
	window.o \
	languages.o \
	logs.o \
	cmd.o

default: all

all: main

main: $(OBJS)
	$(CC) $(CFLAGS) -o cmath $(OBJS) $(CLIBS)

clean:
	@rm main.o cmath.o window.o languages.o logs.o cmd.o cmath goodies/cmath
	
run: 
	@./cmath

install:

	@cp cmath goodies/ -r
	-sudo cp goodies/cmath /usr/bin/ -r
	-sudo cp goodies/cmath.desktop /usr/share/applications/ -r
