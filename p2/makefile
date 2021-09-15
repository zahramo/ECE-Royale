CC = g++ -std=c++11

build : run

all: clean run

player.o: player.cpp
	${CC} -c player.cpp

game.o: game.cpp
	${CC} -c game.cpp

card.o: card.cpp
	${CC} -c card.cpp

agility.o: agility.cpp
	${CC} -c agility.cpp

intelligence.o: intelligence.cpp
	${CC} -c intelligence.cpp

strength.o: strength.cpp
	${CC} -c strength.cpp

archer.o: archer.cpp
	${CC} -c archer.cpp

dragon.o: dragon.cpp
	${CC} -c dragon.cpp

ghost.o: ghost.cpp
	${CC} -c ghost.cpp

giant.o: giant.cpp
	${CC} -c giant.cpp

goblin.o: goblin.cpp
	${CC} -c goblin.cpp

witch.o: witch.cpp
	${CC} -c witch.cpp

main.o: main.cpp
	${CC} -c main.cpp

run: player.o game.o card.o agility.o dragon.o intelligence.o strength.o archer.o goblin.o giant.o witch.o ghost.o main.o
	${CC} -g player.o game.o card.o agility.o dragon.o intelligence.o strength.o archer.o goblin.o giant.o witch.o ghost.o main.o

clean:
	rm -f *.o a.out