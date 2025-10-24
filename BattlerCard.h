#include "idlib/precompiled.h"
#pragma hdrstop
#include "Card.h"

class BattlerCard:public Card{
public:

	BattlerCard();

	int hp;
	int maxHP;
	int atk;
	int tributes;
	idStr name;
	idStr description;
};