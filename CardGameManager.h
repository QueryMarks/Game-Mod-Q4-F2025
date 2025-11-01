#include "idlib/precompiled.h"
#include "Card.h"
#include "Deck.h"
#pragma hdrstop
class CardGameManager {
public:

	CardGameManager();
	static Deck playerDeck;
	static Deck playerCollection;
	int playerMoneys;
	int shopItems[3];
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
		SHEEPHANDS,
		GUNNER,
		COOLGUY,
		DOOMGUY,
		DOG,
		PIZZADELIVERY,
		FISH,
		BLUEEYESWHITEDRAGON

	};
	static Card cardPool[26];
	idStr testString;

};