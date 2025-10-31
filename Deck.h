#ifndef DECK_HEADER
#define DECK_HEADER


#include "idlib/precompiled.h"

#pragma hdrstop
class Deck {
public:

	Deck();
	Deck(idList<int> deckContentsToAdd);
	idList<int> deckContents;
	
	void SetDeck();

	void ShuffleDeck();

	Deck CloneDeck();

	idList<int>* CloneDeckContents();

	int Draw();

};

#endif