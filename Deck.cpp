#include "idlib/precompiled.h"


#pragma hdrstop


#include "Deck.h"


Deck::Deck() {
	deckContents = idList<int>();
	
}

Deck::Deck(idList<int> deckContentsToAdd) {
	deckContents = deckContentsToAdd;
}

void Deck::SetDeck() {

	
}

void Deck::ShuffleDeck() {
	idRandom myRandom = idRandom();
	myRandom.SetSeed(time(0));
	
	for (int i = 0; i < deckContents.Num(); i++) {

		int r = myRandom.RandomInt(deckContents.Num()-1);
		common->Printf("Deck's current granularity is %d\n", deckContents.Num());
		common->Printf("Randomn int is %d\n", r);
		common->Printf("Deck value at r is %d\n", deckContents[r]);

		int tempValue = deckContents[r];
		deckContents.RemoveIndex(r);
		deckContents.Insert(deckContents[i], r);
		deckContents.RemoveIndex(i);
		deckContents.Insert(tempValue, i);
		common->Printf("r is %d\n", r);
		common->Printf("i is %d\n", i);
	}

}

Deck Deck::CloneDeck() {
	Deck newDeck = Deck();
	common->Printf("New deck's num is %d\n" + newDeck.deckContents.Num());
	for (int i = 0; i < deckContents.Num(); i++) {
		common->Printf("adding element %d\n", i);
		newDeck.deckContents.Append(deckContents[i]);
	}
	return newDeck;
}

idList<int>* Deck::CloneDeckContents() {
	idList<int>* newDeckContents = &idList<int>();
	for (int i = 0; i < deckContents.Num(); i++)
	{
		newDeckContents->Append(deckContents[i]);
	}
	return newDeckContents;
}

int Deck::Draw() {
	//common->Printf("Deck content being drawn is %d\n", deckContents[0]);
	int returnVal = deckContents[0];
	deckContents.RemoveIndex(0);
	return returnVal;	
}

