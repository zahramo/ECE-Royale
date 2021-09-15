#include "all.hpp"
#include <iostream>

bool Intelligence :: fight(Card* curCard)
{
	return !curCard->fight(this);
}

bool Intelligence :: fight(Strength* curCard)
{
	return !curCard->fight(this);
}

bool Intelligence :: fight(Intelligence* curCard)
{
	if (intelligence - curCard->getIntelligence() >= 20 )
	{
		strength += 5;
		agility += 5;
		return true;
	}
	else if (intelligence - curCard->getIntelligence() <= -20)
	{
		curCard->setStrength(curCard->getStrength() + 5);
		curCard->setAgility(curCard->getAgility() + 5);
		return false;
	}
	if (agility + strength > curCard->getAgility() + curCard ->getStrength())
	{
		strength += 5;
		agility += 5;
		return true;
	}
	else
	{
		curCard->setStrength(curCard->getStrength() + 5);
		curCard->setAgility(curCard->getAgility() + 5);
		return false;
	}
}

bool Intelligence :: fight(Agility* curCard)
{
	return !curCard->fight(this);
}