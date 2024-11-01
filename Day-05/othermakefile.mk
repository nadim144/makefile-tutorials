#Use of automatic variable

# Automatic avariables

# #Normal vriable declaration
# EXE_NAME = mainExe

# build: main.o pluse.o minus.o
# 	gcc -o ${EXE_NAME} main.o pluse.o minus.o
# main.o: main.c
# 	gcc -c main.c
# pluse.o: pluse.c pluse.h
# 	gcc -c pluse.c pluse.h
# minus.o: minus.c minus.h
# 	gcc -c minus.c minus.h
# clean:
# 	rm -rf *.o
# 	rm -f ${EXE_NAME}
# 	rm -rf *gch


#$?: The names of all the prerequisites that are newer than the target, with spaces between them.
#Exe Name
EXE_NAME = mainExe

build: main.o pluse.o minus.o
	gcc -o ${EXE_NAME} $?
main.o: main.c
	gcc -c $?
pluse.o: pluse.c pluse.h
	gcc -c $?
minus.o: minus.c minus.h
	gcc -c $?
clean:
	rm -rf *.o
	rm -f ${EXE_NAME}
	rm -rf *gch