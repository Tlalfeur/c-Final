#include "Player.h"

using namespace std;

Player::Player(string name, int money, int playerNum, char symbol)
{
	this->name = name;
}


Player::~Player()
{
}

int Player::getMoney()
{
	return this->money;
}

int Player::getNumProperties()
{
	return this->numProperties;
}

int Player::getRailsOwned()
{
	return this->railsOwned;
}

int Player::getPlayerNum()
{
	return this->playerNum;
}

int Player::getCurPosition()
{
	return this->curPosition;
}

int Player::getTurnsInJail()
{
	return this->turnsInJail;
}

void Player::setMoney(int newMoney)
{
	this->money = newMoney;
}

void Player::setNumProperties(int newOwnedNum)
{
	this->numProperties = newOwnedNum;
}

void Player::setPosition(int newPosition)
{
	this->curPosition = newPosition;
}

void Player::addSpace(Space space)
{
	
}
