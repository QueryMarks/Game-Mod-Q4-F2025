#include "idlib/precompiled.h"
#include "Card.h"
#include "Deck.h"
#pragma hdrstop
class CardGameManager {
public:

	CardGameManager();
	static Deck playerDeck;
	enum CardPoolEnum {
		ALIEN,
		MARINE,
		ROCK,
		SWORDY,
		BADCARD
	};
	static Card cardPool[5];
	idStr testString;

};