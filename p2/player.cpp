#include "all.hpp"
#include <iostream>

Player :: Player(int name_)
{
	name = name_;
}

void Player :: addCard(std::string cardName)
{

	Card* newCard;

	if (cardName == "giant")
	{
		newCard = new Giant();
	}
	else if (cardName == "dragon")
	{
		newCard = new Dragon();
	}
	else if (cardName == "archer")
	{
		newCard = new Archer();
	}
	else if (cardName == "goblin")
	{
		newCard = new Goblin();
	}
	else if (cardName == "witch")
	{
		newCard = new Witch();
	}
	else if (cardName == "ghost")
	{
		newCard = new Ghost();
	}
	cards.push_back(newCard);
}

int Player :: getName()
{
	return name;
}

std::vector<Card*>& Player::getCards()
{
	return cards;
}