#include "all.hpp"


bool Agility :: fight(Card* curCard)
{
	return !curCard->fight(this);
}

bool Agility :: fight(Strength* curCard)
{
	curCard->setAgility(curCard->getAgility() + 10);
	return false;
}

bool Agility :: fight(Intelligence* curCard)
{
	if (strength > curCard->getStrength())
	{
		intelligence += 10;
		agility += 10;
		return true;
	}
	else
	{
		curCard->setIntelligence(curCard->getIntelligence() + 10);
		curCard->setAgility(curCard->getAgility() + 10);
		return false;
	}
}

bool Agility :: fight(Agility* curCard)
{
	if (strength + intelligence > curCard->getStrength() + curCard->getIntelligence())
	{
		intelligence += 5;
		strength += 5;
		return true;
	}
	else
	{
		curCard->setIntelligence(curCard->getIntelligence() + 5);
		curCard->setStrength(curCard->getStrength() + 5);
		return false;
	}

}