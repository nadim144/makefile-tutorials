

build: OddEven.o
	gcc -o OddEvenExe OddEven.o
OddEven.o:OddEven.c
	gcc -c OddEven.c
clean:
	rm -rf *.o
	rm -f OddEvenExe