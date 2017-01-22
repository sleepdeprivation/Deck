#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include <string>
#include <fstream>
#include <iostream>
#include "PlayingCard.h"
#include "Deck.h"
using namespace std;


	//convenience functions for getting suit and value of a card

	Deck::Deck(){
		srand ( unsigned ( std::time(0) ) );
		fill52();
		shuffle();
	}

	void Deck::fill52(){
		for(int ii = 0; ii < 52; ii++){
			cards.push_back(PlayingCard(ii));
		}
	}

	void Deck::shuffle(){
		random_shuffle ( cards.begin(), cards.end() );
		index = 0;
	}

	string Deck::getHumanReadable(vector<PlayingCard> X){
		string retval = "";
		for(int ii = 0; ii < X.size(); ii++){
			retval += X[ii].getHumanReadable() + "\n";
		}
		return retval;
	}


	PlayingCard Deck::draw(){
		return cards[index++];
	}


	void Deck::print(){
		cout << getHumanReadable(cards);
	}
	
	void Deck::printIntegers(){
		for(int ii = 0 ; ii < cards.size(); ii++){
			cout << cards[ii].getInteger() << endl;
		}
	}


