CC = g++ -std=c++11

build : run

all: clean run

node.o: node.cpp
	${CC} -c node.cpp

operand.o: operand.cpp
	${CC} -c operand.cpp

operatorNode.o: operatorNode.cpp
	${CC} -c operatorNode.cpp

notOperator.o: notOperator.cpp
	${CC} -c notOperator.cpp

addOperator.o: addOperator.cpp
	${CC} -c addOperator.cpp

midOperator.o: midOperator.cpp
	${CC} -c midOperator.cpp

multipleOperator.o: multipleOperator.cpp
	${CC} -c multipleOperator.cpp

tree.o: tree.cpp
	${CC} -c tree.cpp

main.o: main.cpp
	${CC} -c main.cpp

run: node.o operand.o operatorNode.o notOperator.o tree.o addOperator.o midOperator.o multipleOperator.o main.o
	${CC} node.o operand.o operatorNode.o notOperator.o tree.o addOperator.o midOperator.o multipleOperator.o main.o

clean:
	rm -f *.o a.out