# Variables in makefile

>Declare a variable like this:
~~~
var_name = value
~~~

>Call the variable in other place in makefile:
~~~
${var_name}
~~~

> main.c
~~~
#include <stdio.h>
int main()
{
    printf("Welcome to Day-04 of makefile ...\n");
    return 0;
}
~~~

> makefile
~~~
# Declare variable in makefile
SOURCE = main.c
OBJECT = main.o
EXECUTABLE = mainExe

# To print variable is correct define or not?
# info:
# 	echo ${SOURCE}
# 	echo ${OBJECT}
# 	echo ${EXECUTABLE}

build: ${OBJECT}
	gcc -o ${EXECUTABLE} ${OBJECT}
${OBJECT}: ${SOURCE}
	gcc -c ${SOURCE}
clean:
	rm -rf ${OBJECT}
	rm -f ${EXECUTABLE}
~~~

> Commands
~~~
mna@DESKTOP-194LI0R:~/dev/makefile-tutorials/Day-04$ make
gcc -c main.c
gcc -o mainExe main.o
mna@DESKTOP-194LI0R:~/dev/makefile-tutorials/Day-04$ make clean
rm -rf main.o
rm -f mainExe
~~~