###########################################################################
 ## Program Filename: makefile
 ## Author: Sara Hashem
 ## Date: 5/7/2015
 ## Description: This is a makefile user to compile three programs.
 ##########################################################################


# Standard variables
CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -Wall
CXXFLAGS += -pedantic-errors
CXXFLAGS += -g


# Source files
SRC1 = linear.cpp
SRC2 = sort.cpp
SRC3 = binary.cpp
SRCS = ${SRC1} ${SRC2} ${SRC3}


# Executables
PROG1 = linear
PROG2 = selectsort
PROG3 = binary
PROGS = ${PROG1} ${PROG2} ${PROG3}


all: ${PROGS}


linear: ${SRC1}
	${CXX} ${CXXFLAGS} ${SRC1} -o ${PROG1}


selectsort: ${SRC2}
	${CXX} ${CXXFLAGS} ${SRC2} -o ${PROG2}


binary: ${SRC3}
	${CXX} ${CXXFLAGS} ${SRC3} -o ${PROG3}


clean:
	rm -f ${PROGS} *~
