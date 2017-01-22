MKDIR_P = mkdir -p
OUT_DIR = bin
OBJ_DIR = object

all: directories PlayingCard Deck
	mkdir -p bin
	mkdir -p object
	g++ -std=c++11 DeckTest.cpp ${OBJ_DIR}/Deck.o ${OBJ_DIR}/PlayingCard.o -o ${OUT_DIR}/DeckTest
PlayingCard: directories
	g++ -std=c++11 -c PlayingCard.cpp -o ${OBJ_DIR}/PlayingCard.o
Deck: directories PlayingCard
	g++ -std=c++11 -c Deck.cpp -o ${OBJ_DIR}/Deck.o
directories: ${OUT_DIR}
${OUT_DIR}:
	${MKDIR_P} ${OUT_DIR}
	${MKDIR_P} ${OBJ_DIR}
clean:
	rm object/*
	rm bin/*
