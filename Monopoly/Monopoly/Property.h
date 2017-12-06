#pragma once
#include "Space.h"
#include <string>
#include <array>


class Player;
class Property :
	public Space
{
public:
	Property(std::string name, int price, int mortgagePrice, std::array<int,6> rent, int color, int houseCost);
	~Property();

	//getters setters
	int getPrice();
	int getMortgaePrice();
	int getHousesBuilt();
	int getColor();
	Player getOwner();
	int getHouseCost();
	void setHousesBuilt();
	void setOwner();
	//other methods
	void chargePlayer(Player);


private:
	int price;
	int mortgagePrice;
	std::array<int, 6> rent;
	int housesBuilt = 0;
	int color;
	enum colors {BROWN,LIGHT_BLUE,PINK,ORANGE,RED,YELLOW,GREEN,BLUE};
	int houseCost;
};

