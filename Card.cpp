
#include "idlib/precompiled.h"
#pragma hdrstop


#include "Card.h"


Card::Card() {
	name = "Blank";
	description = "This is a blank card";
	battler = true;
	atk = 0;
	tempAtk = 0;
	maxHP = 0;
	hp = maxHP;
	tributes = 0;

}
Card::Card(idStr namex, idStr descriptionx, bool battlerx, int atkx, int maxHPx, int tributesx) {
	
	name = namex;
	description = descriptionx;
	battler = battlerx,
	atk = atkx;
	tempAtk = atkx;
	maxHP = maxHPx;
	hp = maxHPx;
	tributes = tributesx;

}

void Card::Effect() {
	return;
}

Card Card::CloneCard() {
	Card clonedCard = Card(name, description, battler, atk, maxHP, tributes);
	return clonedCard;
}
idStr description = "pizza pie";