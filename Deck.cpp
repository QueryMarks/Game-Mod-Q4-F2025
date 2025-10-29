#include "idlib/precompiled.h"


#pragma hdrstop


#include "Deck.h"


Deck::Deck() {
	deckContents.Append(3);

}

Deck::Deck(idList<int> deckContentsToAdd) {
	deckContents = deckContentsToAdd;
}

void Deck::SetDeck() {

	
}

void Deck::ShuffleDeck() {
	idRandom myRandom = idRandom();
	myRandom.SetSeed(time(0));
	
	for (int i = 0; i < deckContents.GetGranularity(); i++) {

		int r = i + (myRandom.RandomInt(deckContents.Size()) % (deckContents.GetGranularity() - i));

		int tempValue;

		tempValue = deckContents[r];
		deckContents[r] = deckContents[i];
		deckContents[i] = tempValue;
		common->Printf("r is %d\n", r);
		common->Printf("i is %d\n", i);
	}

}

