# makefile-tutorials
I learn this from one of youtube chanel name as: [RADAS](https://www.youtube.com/watch?v=h5cHWrEfmRM&list=PLozP2uQO8z1TrtXZuWXg9yF9n2nQXlE7s)


## Preparing and running makefile.
>Before starting from scratch, Let's understand few points about makefile, slowly and gradually as move forward, I will keep adding further more important ponts.


1. To prepare and use make/makefile, you must write a file called the makefile that describes the relationships among files in your program and provides commands for updating each file.
2. By default, when we  run make command in terminal it will looks for the makefile, either of 3 names - "GNUmakefile", "makefile" and "Makefile".
To execute makefile rule, simple shell command: "make"
3. it is possible to give command line arguments with "make" command, to control which files/target should be compiled, or how.
By default, make starts with the first target define in makefile, make reads the makefile in the current directory and
begins by processing the first rule.
4. If you want to use a nonstandard name for your makefile, you can specify the makefile name with the -f or --file option.
The arguments -f name or --file=name tell make to read the file name as the makefile.


> Let's try to understand above all points. 
Before moving ahead, check make is install in you Linux machine or not?. In my case I am using WSL Ubuntu. To verify make - please open teminal and type. if anything apart from this as below image. - means make is not install. And you have to install make.


~~~
mna@DESKTOP-194LI0R:~$ make
make: *** No targets specified and no makefile found.  Stop.
~~~
>Install make utility, It ask password, please provide the password.
~~~
mna@DESKTOP-194LI0R:~$ sudo apt install make
[sudo] password for mna:
Reading package lists... Done
Building dependency tree... Done
Reading state information... Done
make is already the newest version (4.3-4.1build1).
make set to manually installed.
The following packages were automatically installed and are no longer required:
  htop libnl-3-200 libnl-genl-3-200
Use 'sudo apt autoremove' to remove them.
0 upgraded, 0 newly installed, 0 to remove and 0 not upgraded.
~~~

> ## Day 01
1. Go inside development folder in linux machine, I my case folder name is ""makefile-tutorials"": ex. - """mna@DESKTOP-194LI0R:~/dev/makefile-tutorials$"""
1. create two files name as: (1) main.c and (2) makefile or Makefile or GNUmakefile ***(Note: without any extension)***, I will all three name one by one.

>main.c
~~~
#include <stdio.h>
int main()
{
    printf("Hello makefile world!\n");
    return 0;
}
~~~
> makefile
~~~
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
~~~
Open terminal and go to the development folder for my case it is: "mna@DESKTOP-194LI0R:~/dev/makefile-tutorials$" and run make command. it will exetute first targrt.
~~~
mna@DESKTOP-194LI0R:~/dev/makefile-tutorials$ make
echo "Hello world!!"
Hello world!!
~~~
if I run make Where, it will execute respective target, By default make command run first target.
~~~
mna@DESKTOP-194LI0R:~/dev/makefile-tutorials$ make Where
echo "I am from Viatnaam!"
I am from Viatnaam!
~~~

As we have on c programm, code snipphet is mention above.let try to compile/build it. I will compile/build and generate executable in same folder name as main
~~~
mna@DESKTOP-194LI0R:~/dev/makefile-tutorials$ make main
gcc -c main.c
gcc -o main main.o
mna@DESKTOP-194LI0R:~/dev/makefile-tutorials$ ./main 
Hello makefile world!
~~~