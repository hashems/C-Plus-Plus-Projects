###########################################################################
 ## Program Filename: makefile
 ## Author: Sara Hashem
 ## Date: 6/3/2015
 ## Description: This is a makefile used to compile one program.
 ##########################################################################

# Standard variables
CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -Wall
CXXFLAGS += -pedantic-errors
CXXFLAGS += -g


# Source files
SRC1 = functions.cpp
SRC2 = main.cpp
SRCS = ${SRC1} ${SRC2}


# Header file
HEADER = functions.hpp


# Object file
OBJ = functions.o


# Executable
PROG = ivr


all: ${OBJ} ${SRCS}
	${CXX} -O2 ${CXXFLAGS} ${SRCS} -o ${PROG}


functions.o: ${HEADER} ${SRC1}
	${CXX} ${CXXFLAGS} ${SRC1} -c


clean:
	rm -f ${PROG} *.o *~
