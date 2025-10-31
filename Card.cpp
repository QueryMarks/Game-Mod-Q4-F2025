
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
	effect = NONE;

}
Card::Card(idStr namex, idStr descriptionx, bool battlerx, int atkx, int maxHPx, int tributesx, int effectx) {
	
	name = namex;
	description = descriptionx;
	battler = battlerx,
	atk = atkx;
	tempAtk = atkx;
	maxHP = maxHPx;
	hp = maxHPx;
	tributes = tributesx;
	effect = effectx;

}

void Card::Effect() {
	return;
}

Card Card::CloneCard() {
	Card clonedCard = Card(name, description, battler, atk, maxHP, tributes, effect);
	return clonedCard;
}
void Card::CopyCard(Card card) {
	name = card.name;
	description = card.description;
	battler = card.battler;
	atk = card.atk;
	tempAtk = card.tempAtk;
	hp = card.hp;
	maxHP = card.maxHP;
	tributes = card.tributes;
	effect = card.effect;
}
idStr description = "pizza pie";