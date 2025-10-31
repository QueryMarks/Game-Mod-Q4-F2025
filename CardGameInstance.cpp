#include "idlib/precompiled.h"


#pragma hdrstop


#include "Deck.h"
#include "Card.h"
#include "CardGameInstance.h"
#include "CardGameManager.h"

CardGameInstance::CardGameInstance() {
	playerDeck = Deck();
	mainMenu = NULL;
	opponentDeck = Deck();
	for (int i = 0; i < 15; i++) {
		opponentDeck.deckContents.Append(6);
	}
	for (int i = 0; i < 5; i++) {
		opponentDeck.deckContents.Append(1);
	}
	//Uncomment below when opponent has been added
	//Opponent opponent;

	playerHand = idList<int>(0);
	opponentHand = idList<int>(0);
	playerBattler = Card();
	opponentBoost = Card();
	opponentBattler = Card();
	opponentBoost = Card();
	cardGameState = DRAW;
	playerPoints = 0;
	opponentPoints = 0;
}

CardGameInstance::CardGameInstance(Deck playerDeckGiven, idUserInterface* mainMenuGiven) {
	playerDeck = playerDeckGiven.CloneDeck();
	mainMenu = mainMenuGiven;
	opponentDeck = Deck();
	for (int i = 0; i < 15; i++) {
		opponentDeck.deckContents.Append(6);
	}
	for (int i = 0; i < 5; i++) {
		opponentDeck.deckContents.Append(1);
	}
	playerBattler = Card();
	playerBoost = Card();
	opponentBattler = Card();
	opponentBoost = Card();
	cardGameState = DRAW;
	playerPoints = 0;
	opponentPoints = 0;
}

void CardGameInstance::StartGame() {

	playerPoints = 0;
	opponentPoints = 0;
	playerHand.Clear();
	opponentHand.Clear();
	for (int i = 0; i < opponentDeck.deckContents.Num(); i++) {
		opponentDeck.deckContents.RemoveIndex(i);
	}
	for (int i = 0; i < 15; i++) {
		opponentDeck.deckContents.Append(6);
	}
	for (int i = 0; i < 5; i++) {
		opponentDeck.deckContents.Append(1);
	}
	playerBattler = Card();
	opponentBattler = Card();
	playerBoost = Card();
	opponentBoost = Card();

	playerDeck.ShuffleDeck();
	opponentDeck.ShuffleDeck();
	cardGameState = DRAW;
	if (true == true){
		common->Printf("Deck size: %d\n", playerDeck.deckContents.Num());
		if (playerDeck.deckContents.Num() >= 5) {
			for (int i = 0; i <= 4; i++) {
				int drawnCard = playerDeck.Draw();
				//common->Printf("Drew card %d\n", drawnCard);
				playerHand.Append(drawnCard);

			}
		}
		else {
			int deckSize = playerDeck.deckContents.Num();
			for (int i = 0; i < deckSize; i++) {
				int drawnCard = playerDeck.Draw();
				common->Printf("Drawing a card!");
				//common->Printf("Drew card %d\n", drawnCard);
				if (drawnCard != 0) {
					playerHand.Append(drawnCard);
				}
				

			}
		}
		
	}
	else {
		common->Printf("Player deck is null.\n");
	}

	if (true) {
		for (int i = 0; i <= 4; i++) {
			int drawnCard = opponentDeck.Draw();
			//common->Printf("Drew card %d\n", drawnCard);
			opponentHand.Append(drawnCard);
		}
	}
	else {
		common->Printf("Opponent deck is null.\n");
	}




	cardGameState = PLAYBATTLER;
}

void CardGameInstance::DrawForTurn() {
	common->Printf("Deck size: %d\n", playerDeck.deckContents.Num());
	if (playerDeck.deckContents.Num() >= 1) {
		int drawnCard = playerDeck.Draw();
		//common->Printf("Drew card %d\n", drawnCard);
		playerHand.Append(drawnCard);
	}
	if (opponentDeck.deckContents.Num() >= 1) {
		int drawnCard = opponentDeck.Draw();
		//common->Printf("Drew card %d\n", drawnCard);
		opponentHand.Append(drawnCard);
	}
}

//Return opponent's hand index that contains battler
int CardGameInstance::PlayBattler(int handIndex, bool player) {
	return -1;
}
int CardGameInstance::PlayBoost(int handIndex, bool player) {
	return -1;
}