
# Here *.c fils are in src folder and .h anre in src/header

EXE_NAME = mainEX
SRC = ./src/

info:
	echo ${SRC}${EXE_NAME}

build: main.o pluse.o minus.o
	gcc -o ${EXE_NAME} main.o pluse.o minus.o
main.o: ${SRC}main.c ${SRC}/header/pluse.h ${SRC}header/minus.h
	gcc -c ${SRC}main.c ${SRC}/header/pluse.h ${SRC}header/minus.h
pluse.o: ${SRC}pluse.c
	gcc -c ${SRC}pluse.c
minus.o: ${SRC}minus.c
	gcc -c ${SRC}minus.c

clean:
	rm -rf *.o
	rm -f ${EXE_NAME}
	rm -f *.gch