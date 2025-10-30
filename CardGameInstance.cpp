#include "idlib/precompiled.h"


#pragma hdrstop


#include "Deck.h"
#include "Card.h"
#include "CardGameInstance.h"

CardGameInstance::CardGameInstance() {
	playerDeck = NULL;
	mainMenu = NULL;
	opponentDeck = new Deck();
	for (int i = 1; i < 20; i++) {
		opponentDeck->deckContents.Append(3);
	}
	//Uncomment below when opponent has been added
	//Opponent opponent;

	playerHand = idList<int>(0);
	opponentHand = idList<int>(0);
	playerBattler = NULL;
	opponentBattler = NULL;
}

CardGameInstance::CardGameInstance(Deck playerDeckGiven, idUserInterface* mainMenuGiven) {
	playerDeck = &playerDeckGiven.CloneDeck();
	mainMenu = mainMenuGiven;
	opponentDeck = new Deck();
	for (int i = 1; i < 20; i++) {
		opponentDeck->deckContents.Append(3);
	}
	playerBattler = NULL;
	opponentBattler = NULL;
}

void CardGameInstance::StartGame() {

	playerHand.Clear();
	opponentHand.Clear();
	playerDeck->ShuffleDeck();
	//opponentDeck->ShuffleDeck();
	if (playerDeck != NULL){
		for (int i = 0; i <= 4; i++) {
			int drawnCard = playerDeck->Draw();
			common->Printf("Drew card %d\n", drawnCard);
			playerHand.Append(drawnCard);
		}
	}
	else {
		common->Printf("Player deck is null.\n");
	}

	if (opponentDeck != NULL) {
		for (int i = 0; i <= 4; i++) {
			int drawnCard = playerDeck->Draw();
			common->Printf("Drew card %d\n", drawnCard);
			opponentHand.Append(drawnCard);
		}
	}
	else {
		common->Printf("Opponent deck is null.\n");
	}
	
}