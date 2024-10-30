helloworld:
	echo "Hello world!!"
Where:
	echo "I am from Viatnaam!"

main: main.o
	gcc -o main main.o
main.o: main.c
	gcc -c main.c

clean:
	rm -rf *.o
	rm -f main