#ifndef CLIENT
#define CLIENT
#include <iostream>
#include <string>
class Client
{
	public:
	
		Client();
		int getIDno();
		std::string getName();
		void setName();
	private:
		int IDno;
		std::string Name;
		
};
#endif