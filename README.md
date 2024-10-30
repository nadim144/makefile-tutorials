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
4. If you want to use a nonstandard name for your makefile, you can specify the makefile name with the ‘-f’ or ‘--file’ option.
The arguments ‘-f name’ or ‘--file=name’ tell make to read the file name as the makefile.


> Let's try to understand above all points. 
~~~

~~~
