CC = gcc
CFLAGS = -g -o
VPATH=src/
OBJS = helper.c 6_2.c
BUILD = build

${BUILD}/6_2: ${OBJS} 
	${CC} $? ${CFLAGS} $@

run:
	./build/6_2 $1

clean:
	rm -rf build/*

