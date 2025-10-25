
#include "idlib/precompiled.h"
#pragma hdrstop


#include "CardGameManager.h"
#include "Card.h"
#include "BattlerCard.h"

Card CardGameManager::cardPool[3] = {
	Card("Alien", "This is an aliens", true, 4, 2, 0),
	Card("Marine", "It's the military perhaps", true, 3, 3, 0),
	Card("Rock", "Rocks fall everyone dies", true, 1, 5, 0)
};

CardGameManager::CardGameManager() {
	
	testString = "pie";
};



