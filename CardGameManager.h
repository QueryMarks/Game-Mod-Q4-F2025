#include "idlib/precompiled.h"
#include "Card.h"
#pragma hdrstop
class CardGameManager {
public:

	CardGameManager();
	enum CardPoolEnum {
		ALIEN,
		MARINE,
		ROCK
	};
	static Card cardPool[3];
	idStr testString;

};