###########################################################################
 ## Program Filename: makefile
 ## Author: Sara Hashem
 ## Date: 4/19/2015
 ## Description: This is a makefile used to compile one program.
 ##########################################################################


# Source files
SRC1 = Dice.cpp
SRC2 = LoadedDice.cpp
SRC3 = main.cpp
SRCS = ${SRC1} ${SRC2} ${SRC3}


# Header files
HEADER1 = Dice.h
HEADER2 = LoadedDice.h
HEADERS = ${HEADER1} ${HEADER2}


# Object files
OBJ1 = Dice.o
OBJ2 = LoadedDice.o
OBJS = ${OBJ1} ${OBJ2}


# Executable
PROG = dice


all: ${PROG}


Dice.o: ${HEADER1} ${SRC1}
	g++ -std=c++0x ${SRC1} -c


LoadedDice.o: ${HEADER2} ${SRC2}
	g++ -std=c++0x ${SRC2} -c


dice: ${OBJS} ${SRC3}
	g++ -std=c++0x ${OBJS} ${SRC3} -o ${PROG}


clean:
	rm -f ${PROG} *.o *~
