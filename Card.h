#ifndef CARD_HEADER
#define CARD_HEADER
#include "idlib/precompiled.h"
#pragma hdrstop
class Card {
	public:

		Card();
		Card(idStr namex, idStr descriptionx, bool battlerx, int atkx, int maxHPx, int tributesx, int effectx);
		idStr name;
		idStr description;
		bool battler;
		int hp;
		int maxHP;
		int atk;
		int tempAtk;
		int tributes;
		int effect;
		enum CardEffect {
			NONE,
			DRAW1,
			BOTHDRAW2,
			BLOODBAATH,
			ATK1,
			HP2,
			FULLHEAL,
			SWAPCARDS,
			SWAPHPATK,
			GAINPOINT,
			REMOVEOPPONENTPOINT,
			REMOVEATK1,
			SHEEPHANDS
		};

		

		void Effect();
		Card CloneCard();
		void CopyCard(Card card);

	


};

#endif