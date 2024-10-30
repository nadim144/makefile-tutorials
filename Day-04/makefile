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