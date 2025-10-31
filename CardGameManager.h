#include "idlib/precompiled.h"
#include "Card.h"
#include "Deck.h"
#pragma hdrstop
class CardGameManager {
public:

	CardGameManager();
	static Deck playerDeck;
	enum CardPoolEnum {
		NOTAREALCARD,
		HEALTHPAK,
		ALIEN,
		MARINE,
		ROCK,
		SWORDY,
		BADCARD
	};
	static Card cardPool[7];
	idStr testString;

};