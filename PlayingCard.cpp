#include <string>
#include <iostream>
#include "PlayingCard.h"
using namespace std;
/*
	Represents a playing card.

	Value key:
	A = 1
	1-10 = 1-10
	0 = King
	11 = Jack
	12 = Queen
*/

	PlayingCard::PlayingCard(int v){
		value = v;
	}

	//Applies / 13 to separate 52 cards into 4 classes (0, 1, 2, 3)
	//simply truncate the result to class [0, 51] into {0,1,2,3}
	int PlayingCard::getSuit(){
		return value/13;
	}

	//Applies % 13 to separate the 52 cards into 13 classes
	int PlayingCard::getValue(){
		return value%13;
	}


	//show the letter or number for human reading
	//assumes getSuit has already been applied
	string PlayingCard::getHumanValue(){
		switch(getValue()){
			case 1:
				return "Ace";
			case 0:
				return "King";
			case 11:
				return "Jack";
			case 12:
				return "Queen";
			case 10:
				return "10";
			default:
				char c = getValue() + '0';
				string r = "";
				r += c;
				return string(r);
		}
	}

	//show the suit for human reading
	string PlayingCard::getHumanSuit(){
		switch(getSuit()){
			case 0:
				return "heart";
			case 1:
				return "spade";
			case 2:
				return "diamond";
			case 3:
				return "club";
		}
	}

	string PlayingCard::getHumanReadable(){
		//string value = to_string(getValue(x));
		return string(
			getHumanValue()
			+ "\t of \t"
			+ getHumanSuit() + "s "
		);
	}
	
	int PlayingCard::getInteger(){
		return value;
	}



