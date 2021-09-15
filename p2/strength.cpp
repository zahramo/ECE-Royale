#include "all.hpp"
#include <iostream>

bool Strength :: fight(Card* curCard)
{
	return !curCard->fight(this);
}

bool Strength :: fight(Strength*curCard)
{
	if (intelligence + agility > curCard->getIntelligence() + curCard->getAgility())
	{
		intelligence += 10;
		return true;
	}
	else
	{
		curCard->setIntelligence(curCard->getIntelligence() + 10);
		return false;
	}
}

bool Strength :: fight(Intelligence* curCard)
{
	if (agility > curCard->getAgility() )
	{
		strength += 10;
		return true;
	}
	else
	{
		curCard->setStrength(curCard->getStrength() + 10);
		return false;
	}
}

bool Strength :: fight(Agility* curCard)
{
	return !curCard->fight(this);
}