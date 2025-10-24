#include "idlib/precompiled.h"
#pragma hdrstop
#include "Card.h"

class BattlerCard:public Card{
public:
	const int hp;
	const int maxHP;
	const int atk;
	const int tributes = 0;
};