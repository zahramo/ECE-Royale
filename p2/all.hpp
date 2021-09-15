#ifndef ALL_H
#define ALL_H

#include <vector>
#include <string>
#include "define.hpp"

class Strength;
class Intelligence;
class Agility;

class Card {
private:
protected:
	int intelligence, agility, strength;
public:
	Card() {};
	virtual int getIntelligence();
	virtual int getAgility();
	virtual int getStrength();
	virtual bool fight(Card*) = 0;
	virtual bool fight(Strength*);
	virtual bool fight(Intelligence*);
	virtual bool fight(Agility*);
	virtual void setIntelligence(int);
	virtual void setAgility(int);
	virtual void setStrength(int);
};

class Strength : public Card {
public:
	bool fight(Card*);
	bool fight(Strength*);
	bool fight(Intelligence*);
	bool fight(Agility*);

};

class Agility : public Card {
public:
	bool fight(Card*);
	bool fight(Strength*);
	bool fight(Intelligence*);
	bool fight(Agility*);

};

class Intelligence : public Card {
public:
	bool fight(Card*);
	bool fight(Strength*);
	bool fight(Intelligence*);
	bool fight(Agility*);
};

class Dragon : public Strength {
public:
	Dragon();

};

class Giant : public Strength {
public:
	Giant();

};

class Archer : public Agility {
public:
	Archer();

};

class Goblin : public Agility {
public:
	Goblin();

};

class Witch : public Intelligence {
public:
	Witch();

};

class Ghost : public Intelligence {
public:
	Ghost();

};

class Player {
private:
	int name;
	std::vector<Card*> cards;
public:
	Player(int name_ = 0);
	void addCard(std::string cardName);
	int getName();
	std::vector<Card*>& getCards();
};

#endif