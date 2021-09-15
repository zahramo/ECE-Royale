#include <iostream>
#include <string>
#include "all.hpp"

class Game {
private:
	Player player1 , player2;
public:
	void add_player_card(int player_number, std::string card_name);
	void play();
};



