#include "Space.h"

using namespace std;

Space::Space()
{
}


Space::~Space()
{
}

std::string Space::getName()
{
	return this->name;
}

Player* Space::getOwner()
{
	return this->owner;
}

int Space::getSpaceType()
{
	return this->spaceType;
}

void Space::setName(std::string name)
{
	this->name = name;
}

void Space::setOwner(Player* newOwner)
{
	this->owner = newOwner;
}

void Space::setSpaceType(int type)
{
	this->spaceType = type;
}

bool Space::isOwned()
{
	if (this->owner == NULL)
	{
		cout << "null";
	}
}
