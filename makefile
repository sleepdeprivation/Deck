all: PlayingCard Deck
	g++ -std=c++11 DeckTest.cpp object/Deck.o object/PlayingCard.o -o bin/DeckTest
PlayingCard:
	g++ -std=c++11 -c PlayingCard.cpp -o object/PlayingCard.o
Deck: PlayingCard
	 g++ -std=c++11 -c Deck.cpp -o object/Deck.o
clean:
	rm object/*
	rm bin/*
