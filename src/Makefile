CC=clang
CLIBS=-lm -lncurses
CFLAGS=-Wall -Wextra -O2 -g -std=gnu99

OBJS= \
	cmath.o \
	main.o \
	win.o \
	lang.o \
	logs.o \
	cmd.o

default: all

all: main

main: $(OBJS)
	$(CC) $(CFLAGS) -o ../cmath $(OBJS) $(CLIBS)

clean:
	@rm main.o cmath.o window.o languages.o logs.o cmd.o ../cmath 
	
run:
	@.././cmath
	
install:
	@cp ../cmath ../misc/ -r
	-sudo cp ../misc/cmath /usr/bin/ -r
	-sudo cp ../misc/cmath.desktop /usr/share/applications/ -r
	-sudo cp ../misc/linux.png /usr/share/icons/
