


# Standard variables
CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -Wall
CXXFLAGS += -pedantic-errors
CXXFLAGS += -g


# Source files
SRC1 = Character.cpp
SRC2 = Goblin.cpp
SRC3 = Barbarian.cpp
SRC4 = Reptile.cpp
SRC5 = Blue.cpp
SRC6 = Shadow.cpp
SRC7 = Queue.cpp
SRC8 = Stack.cpp
SRC9 = combat.cpp
SRC10 = main.cpp
SRCS = ${SRC1} ${SRC2} ${SRC3} ${SRC4} ${SRC5} ${SRC6} ${SRC7} ${SRC8} ${SRC9} ${SRC10}


# Header files
HEADER1 = Character.hpp
HEADER2 = Goblin.hpp
HEADER3 = Barbarian.hpp
HEADER4 = Reptile.hpp
HEADER5 = Blue.hpp
HEADER6 = Shadow.hpp
HEADER7 = Queue.hpp
HEADER8 = Stack.hpp
HEADER9 = combat.hpp
HEADERS = ${HEADER1} ${HEADER2} ${HEADER3} ${HEADER4} ${HEADER5} ${HEADER6} ${HEADER7} ${HEADER8} ${HEADER9}


# Object files
OBJ1 = Character.o
OBJ2 = Goblin.o
OBJ3 = Barbarian.o
OBJ4 = Reptile.o
OBJ5 = Blue.o
OBJ6 = Shadow.o
OBJ7 = Queue.o
OBJ8 = Stack.o
OBJ9 = combat.o
OBJS = ${OBJ1} ${OBJ2} ${OBJ3} ${OBJ4} ${OBJ5} ${OBJ6} ${OBJ7} ${OBJ8} ${OBJ9}


# Executable
PROG = rpg


all:
	${CXX} ${CXXFLAGS} ${SRCS} ${HEADERS} -o ${PROG}


Character.o: ${HEADER1} ${SRC1}
	${CXX} ${CXXFLAGS} ${SRC1} -c


Goblin.o: ${HEADER2} ${SRC2}
	${CXX} ${CXXFLAGS} ${SRC2} -c


Barbarian.o: ${HEADER3} ${SRC3}
	${CXX} ${CXXFLAGS} ${SRC3} -c


Reptile.o: ${HEADER4} ${SRC4}
	${CXX} ${CXXFLAGS} ${SRC4} -c


Blue.o: ${HEADER5} ${SRC5}
	${CXX} ${CXXFLAGS} ${SRC5} -c


Shadow.o: ${HEADER6} ${SRC6}
	${CXX} ${CXXFLAGS} ${SRC6} -c


Queue.o: ${HEADER7} ${SRC7}
	${CXX} ${CXXFLAGS} ${SRC7} -c


Stack.o: ${HEADER8} ${SRC8}
	${CXX} ${CXXFLAGS} ${SRC8} -c


combat.o: ${HEADER9} ${SRC9}
	${CXX} ${CXXFLAGS} ${SRC9} -c


rpg: ${OBJS} ${SRCS}
	${CXX} ${CXXFLAGS} ${OBJS} ${SRCS} -o ${PROG}


clean:
	rm -f ${PROG} *.o *~
