#pragma once
#include <string>
#include <iostream>


class Player;
class Space
{
public:
	Space();
	~Space();
	//getters/setters
	std::string getName();
	Player* getOwner();
	int getSpaceType();
	void setName(std::string name);
	void setOwner(Player * newOwner);
	void setOwner(Player& owner);
	void setSpaceType(int type);
	bool isOwned();

private:
	std::string name;
	Player* owner;
	int spaceType;
	enum types {PROPERTY, TAX, RAIL, UTIL, JAIL, NOTHING};
};

