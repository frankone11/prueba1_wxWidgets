

.PHONY = all clear run

CXX:=g++
COMPILERFLAGS:=`wx-config --cxxflags` -std=c++17 -Wall
LINKERFLAGS:=`wx-config --libs` -no-pie

BIN:=prueba1
SRCS:=$(wildcard *.cpp)
OBJS:=$(SRCS:%.cpp=%.o)

all: ${BIN}

${BIN}: ${OBJS}
	${CXX} ${LINKERFLAGS} ${OBJS} -o $@

%.o:%.cpp
	${CXX} -c $< ${COMPILERFLAGS}

clean:
	@echo "Cleaning..."
	rm -rf *.o ${BIN}

run:
	@echo "Running application."
	./${BIN}