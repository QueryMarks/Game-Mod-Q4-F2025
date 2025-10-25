#include "idlib/precompiled.h"
#pragma hdrstop
#include "BattlerCard.h"

BattlerCard::BattlerCard() :
	atk(0),
	hp(0),
	maxHP(0),
	tributes(0),
	name("Cardio"),
	description("Hello Worldb?"){

}

BattlerCard::BattlerCard(idStr namex, idStr descriptionx, int atkx, int maxHPx, int tributesx) {
	name = namex;
	description = descriptionx;
	atk = atkx;
	maxHP = maxHPx;
	hp = maxHPx;
	tributes = tributesx;

}