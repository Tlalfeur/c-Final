#include "Property.h"

Property::Property(std::string name, int price, int mortgagePrice, std::array<int, 6> rent, int color, int houseCost)
{
	this->setName(name);
}

Property::~Property()
{
}
