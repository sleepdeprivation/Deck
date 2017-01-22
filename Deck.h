#include "PlayingCard.h"
#include <vector>
using namespace std;

#ifndef __DECK__
#define __DECK__

class Deck{

	private:
	

	vector<PlayingCard> cards = vector<PlayingCard>();

	int index = 0;	//what is the "top card" cards before this index are used
	
	public:

	//initialize, fill with 52 cards and shuffle
	Deck();
	
	//fill with 52 cards
	void fill52();
	
	//
	void shuffle();

	//Return the top card in the deck
	PlayingCard draw();
	
	string getHumanReadable(vector<PlayingCard> X);

	//Print all the cards in the deck
	void print();
	
	void printIntegers();
};

#endif
