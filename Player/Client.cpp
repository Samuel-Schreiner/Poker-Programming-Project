#include "Client.h"

// #include "Player.h"

Client::Client()
{
}

int Client::getIDno()
{
	return IDno;
}

std::string Client::getName()
{
	return Name;
}

void Client::setName(std::string newName)
{
	Name = newName;
}