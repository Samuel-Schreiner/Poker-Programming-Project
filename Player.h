#ifndef PLAYER
#define PLAYER
#include "Card.h"

class Player
{
	public:
		Player();
		Card getCards(); // via pass by reference
		void setCards();
		int getMoney();
		void setMoney();
		int getBet();
		void setBet();
		
	private:
		Card cards[5];
		int money = 100;
		int bet;
};
#endif