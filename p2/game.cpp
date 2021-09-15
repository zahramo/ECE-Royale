#include "game.hpp"

void Game :: add_player_card(int player_number, std::string card_name)
{
	if (player_number == 1)
	{
		player1.addCard(card_name);
	}
	else if (player_number == 2)
	{
		player2.addCard(card_name);
	}
}

void Game :: play()
{
	std::vector<Card*> cards1 = player1.getCards();
	std::vector<Card*> cards2 = player2.getCards();
	while (true)
	{
		if ((cards1.size() >= 1 && cards2.size() == 0) || (cards1.size() == 0 && cards2.size() >= 1))
			break;
		if (cards1[0]->fight(cards2[0]))
		{
			cards2.erase(cards2.begin());
		}
		else
		{
			cards1.erase(cards1.begin());
		}
	}
	if (cards1.size() >= 1)
	{
		std::cout << 1 << std::endl;
	}
	if (cards2.size() >= 1)
	{
		std::cout << 2 << std::endl;
	}
}