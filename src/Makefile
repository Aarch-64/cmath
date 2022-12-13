##
## Makefile
## cmath
##
## Created by Aarch-64 on 23/11/2022
## Last modification by Aarch-64 on 13/12/2022
## Copyright © 2022 Aarch-64. All rights reserved.
##

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
	@rm main.o cmath.o win.o lang.o logs.o cmd.o ../cmath 
	
run:
	@.././cmath
	
install:
	@cp ../cmath ../misc/ -r
	-sudo cp ../misc/cmath /usr/bin/ -r
	-sudo cp ../misc/cmath.desktop /usr/share/applications/ -r
	-sudo cp ../misc/linux.png /usr/share/icons/
