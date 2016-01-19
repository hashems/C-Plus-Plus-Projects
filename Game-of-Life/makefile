###########################################################################
 ## Filename: makefile
 ## Author: Sara Hashem
 ## Date: 4/10/2015
 ## Description: This is a makefile used to compile two programs.
 ##########################################################################

# Source files
SRC1 = Game.cpp
SRC2 = main.cpp


# Header file
HEADER = Game.h


# Object file
OBJ = Game.o


# Executable
PROG = game


all: ${PROG}


Game.o: ${HEADER} ${SRC1}
	g++ -std=c++0x ${SRC1} -c


game: ${OBJ} ${SRC2}
	g++ -std=c++0x ${OBJ} ${SRC2} -o ${PROG}


clean:
	rm -f ${PROG} *.o *~
