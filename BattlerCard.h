#include "idlib/precompiled.h"
#pragma hdrstop
#include "Card.h"

class BattlerCard:public Card{
public:

	BattlerCard();
	BattlerCard(idStr namex, idStr descriptionx, int atkx, int maxHPx, int tributesx);

	int hp;
	int maxHP;
	int atk;
	int tributes;
	idStr name;
	idStr description;
};