#include <iostream>
#include <string>
class Client
{
	public:
	
		Client();
		int getIDno();
		int getName();
		void setName();
	private:
		int IDno;
		std::string Name;
		
};