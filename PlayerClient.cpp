#include "Card.h"
#include "Client.h"
#include "Player.h"
#include <string>
#include <iostream>
#include <stdlib.h>

enum {OFF, TOO_MANY, NOT_ENOUGH, GOOD, OVER};

int dealerConnect(int& IDno)
{
	// get id from Dealer
	// IDno = ????

//Temporary code	
//*****************************************************************************
	if(IDno < 1)
	{
		IDno = 1;
	}
	int status;
	std::cout << "Current status?" << std::endl;
	std::cin >> status;
	std::cin.ignore(256, '\n');
	std::cin.clear();
	status = GOOD;
//*****************************************************************************

	return status;
}

std::string Naming()
{
	std::string name;
	
	//get the name through gtkmm
	
//Temporary code	
//*****************************************************************************
	std::cout << "You must input additional namelons" << std::endl;
	std::cin >> name;
	std::cin.ignore(256, '\n');
	std::cin.clear();
//*****************************************************************************
	
	return name;
}

int retrieveData()
{
	//get data from query to 
//Temporary code	
//*****************************************************************************
	int status;
	std::cout << "Current status?" << std::endl;
	std::cin >> status;
	std::cin.ignore(256, '\n');
	std::cin.clear();
//*****************************************************************************	
	return status;
	
}

int getCard(Card& cards, int i)
{
//Temporary code	
//*****************************************************************************
	int val;
	int suit;
	
	std::cout << "enter your card" << std::endl;
	
		std::cout << "\nCard " << i << "Value: ";
		std::cin >> val;
		std::cin.ignore(256, '\n');
		std::cin.clear();
		cards.setcValue(val);
		std::cout << "\nCard " << i << "Suit: ";
		std::cin >> suit;
		std::cin.ignore(256, '\n');
		std::cin.clear();
		cards.setcSuit(suit);
//*****************************************************************************
	return 0;
}


int playLoop(int money)
{
	int invalid;
	int Turn = 0;
	Card cards[5];
	int pot;
	int bet;
	std::string choice;
	std::string suits[4] = {"Clubs", "Diamonds", "Hearts", "Spades"};
	int game = 0;
	for(int i = 0; i < 5; i++)
	{
		getCard(cards[i], i);
	}
	while(game != OVER)
	{
//Temporary code	
//*****************************************************************************

		invalid = 1;
		system("clear");
		std::cout << "Your Money: " << money;
		std::cout << "The pot: " << pot;
		for(int i = 0; i < 5; i++)
		{
			std::cout << " [" << cards[i].getcValue() << "/" << suits[cards[i].getcSuit()] << "] ";
		}
		
		switch(Turn) 
		{
			case 0 :
			std::cout << "It is not your turn";
			Turn = retrieveData();
			break;
			
			case 1 :
			std::cout << "It is your turn, do you want to raise, call, or fold? (r, c, f)" << std::endl;
			std::cin >> choice;
			std::cin.ignore(256, '\n');
			std::cin.clear();
			if(choice == "r" || choice == "raise")
			{
				while(invalid)
				{
					std::cout << "raise by what amount?";
					std::cin >> bet;
					std::cin.ignore(256, '\n');
					std::cin.clear();
					if(bet <= money)
					{
						money = money - bet;
						pot = pot + bet;
						invalid = 0;
					}
					else
					{
						std::cout << "You must be able to afford your bets" << std::endl;
					}
				}
			}
			Turn = retrieveData();
			break;
			case 2 :
			std::cout << "It is your turn, choose which cards to return" << std::endl;
			for(int j = 0; j < 5; j++)
			{
				std::cout << "Do you wish to remove Card " << j << "? (y/n)" << std::endl;
				std::cin >> choice;
				std::cin.ignore(256, '\n');
				std::cin.clear();
				if(choice == "y")
				{
					getCard(cards[j], j); 
				}
			}
			Turn = retrieveData();
			break;
			case 3 :
			std::cout << "You won!";
			game = OVER;
			break;
			case 4 :
			std::cout << "You Lost!";
			game = OVER;
			break;
			
			default :
			break;
			
		}	
	}
}

int main()
{
	std::string name;
	std::string choice = "p";
	int IDno = 0;
	int status;
	int money = -1;
	// connect to dealer
	status = dealerConnect(IDno);
	
	while(status == NOT_ENOUGH)
	{
		status = dealerConnect(IDno);
	}
	
	while(status == GOOD && choice != "q" && choice != "quit" && money != 0)
	{
//Temporary code	
//*****************************************************************************
		std::cout << "Do you wish to play, watch, or quit p, w, or q?" << std::endl;
		std::cin.ignore(256, '\n');
		std::cin.clear();
		std::cin >> choice;
		std::cin.ignore(256, '\n');
		std::cin.clear();
		if(choice == "p" || choice == "play")
		{
			name = Naming();
			playLoop(money);
		}
		else if(choice == "w" || choice == "watch")
		{
			// watchLoop;
		}
//*****************************************************************************
	}
	
	
	return 0;
}