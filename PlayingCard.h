#include <string>
using namespace std;
#ifndef __PLAYING_CARD__
#define __PLAYING_CARD__

/*
	Represents a playing card.


*/
class PlayingCard{

	private:

	int value;

	public:

	/*
		Value key:
		A = 1
		1-10 = 1-10
		0 = King
		11 = Jack
		12 = Queen
	*/
	PlayingCard(int v);

	//Applies / 13 to separate 52 cards into 4 classes (0, 1, 2, 3)
	//simply truncate the result to class [0, 51] into {0,1,2,3}
	int getSuit();

	//Applies % 13 to separate the 52 cards into 13 classes
	int getValue();


	//show the letter or number for human reading
	//assumes getSuit has already been applied
	string getHumanValue();

	//show the suit for human reading
	string getHumanSuit();
	
	string getHumanReadable();
	
	int getInteger();


};

#endif

