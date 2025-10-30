#ifndef CARD_HEADER
#define CARD_HEADER
#include "idlib/precompiled.h"
#pragma hdrstop
class Card {
public:

	Card();
	Card(idStr namex, idStr descriptionx, bool battlerx, int atkx, int maxHPx, int tributesx);
	idStr name;
	idStr description;
	bool battler;
	int hp;
	int maxHP;
	int atk;
	int tempAtk;
	int tributes;

	void Effect();
	Card CloneCard();


};

#endif