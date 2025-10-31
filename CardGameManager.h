#include "idlib/precompiled.h"
#include "Card.h"
#include "Deck.h"
#pragma hdrstop
class CardGameManager {
public:

	CardGameManager();
	static Deck playerDeck;
	int playerMoneys;
	enum CardPoolEnum {
		NOTAREALCARD,
		HEALTHPAK,
		ALIEN,
		MARINE,
		ROCK,
		SWORDY,
		BADCARD,
		BONUSPAK,
		DRAWPARTY,
		BLOODBAATH,
		SHEEP,
		POWERCELL,
		SHIELDPAK,
		TELESWAP,
		ARMORBLAST,
		FLAG,
		FLAGBUSTER,
		WEAKENER,
		SHEEPHANDS
	};
	static Card cardPool[19];
	idStr testString;

};