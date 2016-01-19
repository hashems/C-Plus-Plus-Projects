###########################################################################
 ## Program Filename: makefile
 ## Author: Sara Hashem
 ## Date: 4/30/2015
 ## Description: This is a makefile used to compile a program.
 ##########################################################################

# Standard variables
CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -Wall
CXXFLAGS += -pedantic-errors
CXXFLAGS += -g


# Source files
SRC1 = FileFilter.cpp
SRC2 = Copy.cpp
SRC3 = Encrypt.cpp
SRC4 = Upper.cpp
SRC5 = Group.cpp
SRC6 = main.cpp
SRCS = ${SRC1} ${SRC2} ${SRC3} ${SRC4} ${SRC5} ${SRC6}


# Header files
HEADER1 = FileFilter.h
HEADER2 = Copy.h
HEADER3 = Encrypt.h
HEADER4 = Upper.h
HEADER5 = Group.h
HEADERS = ${HEADER1} ${HEADER2} ${HEADER3} ${HEADER4} ${HEADER5}


# Object files
OBJ1 = FileFilter.o
OBJ2 = Copy.o
OBJ3 = Encrypt.o
OBJ4 = Upper.o
OBJ5 = Group.o
OBJS = ${OBJ1} ${OBJ2} ${OBJ3} ${OBJ4} ${OBJ5}


# Executable
PROG = filter


all:
	${CXX} ${CXXFLAGS} ${SRCS} ${HEADERS} -o ${PROG}


FileFilter.o: ${OBJ1} ${SRC1}
	${CXX} ${CXXFLAGS} ${SRC1} -c


Copy.o: ${OBJ2} ${SRC2}	
	${CXX} ${CXXFLAGS} ${SRC2} -c


Encrypt.o: ${OBJ3} ${SRC3}
	${CXX} ${CXXFLAGS} ${SRC3} -c


Upper.o: ${OBJ4} ${SRC4}
	${CXX} ${CXXFLAGS} ${SRC4} -c


Group.o: ${OBJ5} ${SRC5}
	${CXX} ${CXXFLAGS} ${SRC5} -c


filter: ${OBJS} ${SRCS}
	${CXX} ${CXXFLAGS} ${SRCS} -o filter


clean:
	rm -f ${PROG} *.o *~
