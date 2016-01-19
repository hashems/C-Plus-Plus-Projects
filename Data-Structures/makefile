###########################################################################
 ## Program Filename: makefile
 ## Author: Sara Hashem
 ## Date: 5/21/2015
 ## Description: This is a makefile used to compile two programs.
 ##########################################################################

# Standard variables
CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -Wall
CXXFLAGS += -pedantic-errors
CXXFLAGS += -g


# Source files
SRC1 = Stack.cpp
SRC2 = Queue.cpp
SRC3 = stacktest.cpp
SRC4 = queuetest.cpp
SRCS = ${SRC1} ${SRC2} ${SRC3} ${SRC4}


# Header files
HEADER1 = Stack.hpp
HEADER2 = Queue.hpp
HEADERS = ${HEADER1} ${HEADER2}


# Object files
OBJ1 = Stack.o
OBJ2 = Queue.o
OBJS = ${OBJ1} ${OBJ2}


# Executables
PROG1 = stack
PROG2 = queue
PROGS = ${PROG1} ${PROG2}


all: ${PROGS}


Stack.o: ${HEADER1} ${SRC1}
	${CXX} ${CXXFLAGS} ${SRC1} -c


Queue.o: ${HEADER2} ${SRC2}
	${CXX} ${CXXFLAGS} ${SRC2} -c


stack: ${OBJ1} ${SRC3}
	${CXX} ${CXXFLAGS} ${OBJ1} ${SRC3} -o ${PROG1}


queue: ${OBJ2} ${SRC4}
	${CXX} ${CXXFLAGS} ${OBJ2} ${SRC4} -o ${PROG2}


clean:
	rm -f ${PROGS} *.o *~
