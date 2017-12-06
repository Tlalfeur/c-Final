#pragma once
#include<vector>

class Space;
class Player
{
public:
	Player(std::string name, int money, int playerNum, char symbol);
	~Player();

	//getters setters
	int getMoney();
	int getNumProperties();
	int getRailsOwned();
	int getPlayerNum();
	int getCurPosition();
	int getTurnsInJail();
	void setMoney(int newMoney);
	void setNumProperties(int newOwnedNum);
	void setPosition(int newPosition);
	//method to modify propertiesOwned vector
	void addSpace(Space space);

private:
	std::string name;
	int money;
	int numProperties;
	std::vector<Space> propertiesList;
	int railsOwned;
	int playerNum;
	int curPosition;
	bool isJailed;
	int turnsInJail = 0;
	char symbol;
};
class Space;


