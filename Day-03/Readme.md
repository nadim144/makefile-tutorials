# Day-03

‘#’ in a line of a makefile starts a comment.

> main.c
~~~
#include <stdio.h>
int main()
{
    int num = 0;
    printf("Enter any number within int rage: ");
    scanf("%d", &num);

    if(num % 2 == 0)
    {
        printf("%d is Even number ...\n", num);
    }
    else
    {
        printf("%d is Odd number ...\n", num);
    }
    return 0;
}
~~~


> GNUmakefile
~~~
# is use for comment in makefile
# This makefile is for the program file Odd and Even number. 
build: main.o
	gcc -o mainExe main.o
main.o: main.c
	gcc -c main.c
clean:
	rm -rf *.o
	rm -f mainExe
~~~

> Commands
~~~
mna@DESKTOP-194LI0R:~/dev/makefile-tutorials/Day-03$ make
gcc -c main.c
gcc -o mainExe main.o
mna@DESKTOP-194LI0R:~/dev/makefile-tutorials/Day-03$ make build
gcc -o mainExe main.o
mna@DESKTOP-194LI0R:~/dev/makefile-tutorials/Day-03$ make clean
rm -rf *.o
rm -f mainExe
~~~