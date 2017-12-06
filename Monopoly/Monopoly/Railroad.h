#pragma once
#include "Property.h"
class Railroad :
	public Property
{
public:
	Railroad();
	Railroad(int price, int mortgagePrice, int color, int houseCost);
	Railroad(int i);
	~Railroad();
	void chargePlayer(Player);

private:
	std::array<int, 4> rent = {25,50,100,200};
};

