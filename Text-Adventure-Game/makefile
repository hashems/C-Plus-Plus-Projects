###########################################################################
 ## Program Filename: makefile
 ## Author: Sara Hashem
 ## Date: 6/8/2015
 ## Description: This is a makefile used to compile one program.
 ##########################################################################

# Standard variables
CXX = g++
CXXFLAGS = -std=c++0x


# Source files
SRC1 = Room.cpp
SRC2 = Room1.cpp
SRC3 = Room2.cpp
SRC4 = Room3.cpp
SRC5 = Hero.cpp
SRC6 = main.cpp
SRCS = ${SRC1} ${SRC2} ${SRC3} ${SRC4} ${SRC5} ${SRC6}


# Header files
HEADER1 = Room.hpp
HEADER2 = Room1.hpp
HEADER3 = Room2.hpp
HEADER4 = Room3.hpp
HEADER5 = Hero.hpp
HEADERS = ${HEADER1} ${HEADER2} ${HEADER3} ${HEADER4} ${HEADER5I}


# Object files
OBJ1 = Room.o
OBJ2 = Room1.o
OBJ3 = Room2.o
OBJ4 = Room3.o
OBJ5 = Hero.o
OBJS = ${OBJ1} ${OBJ2} ${OBJ3} ${OBJ4} ${OBJ5}


# Exectuable
PROG = zork


all: ${OBJS} ${SRCS}
	${CXX} ${CXXFLAGS} ${SRCS} -o ${PROG}


Room.o: ${HEADER1} ${SRC1}
	${CXX} ${CXXFLAGS} ${SRC1} -c


Room1.o: ${HEADER2} ${SRC2}
	${CXX} ${CXXFLAGS} ${SRC2} -c


Room2.o: ${HEADER3} ${SRC3}
	${CXX} ${CXXFLAGS} ${SRC3} -c


Room3.o: ${HEADER4} ${SRC4}
	${CXX} ${CXXFLAGS} ${SRC4} -c


Hero.o: ${HEADER5} ${SRC5}
	${CXX} ${CXXFLAGS} ${SRC5} -c


clean:
	rm -f ${PROG} *.o *~
