CC=clang
CLIBS=-lm -lncurses
CFLAGS=-Wall -O3 -march=x86-64 -mtune=generic -std=c99

OBJS= \
	cmath.o \
	main.o \
	window.o \
	languages.o \
	logs.o

default: all

all: main

main: $(OBJS)
	$(CC) $(CFLAGS) -o cmath $(OBJS) $(CLIBS)
	
clean:
	@rm main.o cmath.o window.o languages.o logs.o cmath 
	
run: 
	@./cmath


