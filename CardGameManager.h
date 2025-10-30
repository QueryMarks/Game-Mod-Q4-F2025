#include "idlib/precompiled.h"
#include "Card.h"
#include "Deck.h"
#pragma hdrstop
class CardGameManager {
public:

	CardGameManager();
	static Deck playerDeck;
	enum CardPoolEnum {
		HEALTHPAK,
		ALIEN,
		MARINE,
		ROCK,
		SWORDY,
		BADCARD
	};
	static Card cardPool[6];
	idStr testString;

};