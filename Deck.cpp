#include "idlib/precompiled.h"


#pragma hdrstop


#include "Deck.h"


Deck::Deck() {

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

Deck Deck::CloneDeck() {
	Deck newDeck = Deck();
	for (int i = 0; i < deckContents.GetGranularity(); i++) {
		newDeck.deckContents.Append(deckContents[i]);
	}
	return newDeck;
}

int Deck::Draw() {
	int returnVal = deckContents[0];
	deckContents.RemoveIndex(0);
	return returnVal;
}

