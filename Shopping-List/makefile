###########################################################################
 ## Program Filename: makefile
 ## Author: Sara Hashem
 ## Date: 4/23/2015
 ## Description: This is a makefile used to compile one program.
 ##########################################################################

# Source files
SRC1 = Item.cpp
SRC2 = ClubItem.cpp
SRC3 = List.cpp
SRC4 = main.cpp
SRCS = ${SRC1} ${SRC2} ${SRC3} ${SRC4}


# Header files
HEADER1 = Item.h
HEADER2 = ClubItem.h
HEADER3 = List.h
HEADERS = ${HEADER1} ${HEADER2} ${HEADER3}


# Object files
OBJ1 = Item.o
OBJ2 = ClubItem.o
OBJ3 = List.o
OBJS = ${OBJ1} ${OBJ2} ${OBJ3}


# Executable
PROG = list


all: ${PROG}


Item.o: ${HEADER1} ${SRC1}
	g++ -std=c++0x ${SRC1} -c


ClubItem.o: ${HEADER2} ${SRC2}
	g++ -std=c++0x ${SRC2} -c


List.o: ${HEADER3} ${SRC3}
	g++ -std=c++0x ${SRC3} -c


list: ${OBJS} ${SRC4}
	g++ -std=c++0x ${OBJS} ${SRC4} -o ${PROG}


clean:
	rm -f ${PROG} *.o *~
