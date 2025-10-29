
#include "idlib/precompiled.h"
#pragma hdrstop


#include "CardGameManager.h"
#include "Card.h"
#include "Deck.h"

Card CardGameManager::cardPool[5] = {
	Card("Alien", "This is an aliens", true, 4, 2, 0),
	Card("Marine", "It's the military perhaps", true, 3, 3, 0),
	Card("Rock", "Rocks fall everyone dies", true, 1, 5, 0),
	Card("Swordy", "Sometimes a sword is really cool in a science fiction setting ok", true, 5, 1, 0),
	Card("BadCard", "This card is awful! Why", true, 1, 1, 0)
};





Deck CardGameManager::playerDeck = Deck();

CardGameManager::CardGameManager() {
	
	testString = "pie";
	idList<int> deckContents = idList<int>(5);
	deckContents.Append(ALIEN);
	deckContents.Append(MARINE);
	deckContents.Append(ROCK);
	deckContents.Append(SWORDY);
	deckContents.Append(BADCARD);
	playerDeck.deckContents = deckContents;
};




