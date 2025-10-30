#ifndef CARDGAMEINSTANCE_HEADER
#define CARDGAMEINSTANCE_HEADER
#include "idlib/precompiled.h"
#include "Card.h"
#include "Deck.h"
#pragma hdrstop


class CardGameInstance {
	public:
		CardGameInstance();
		CardGameInstance(Deck playerDeckGiven, idUserInterface* mainMenuGiven);
		enum CardGameState {
			DRAW,
			PLAYBATTLER,
			FLIPBATTLER,
			PLAYBOOST,
			FLIPBOOST,
			BATTLE
		};
		Deck* playerDeck;
		idUserInterface* mainMenu;
		Deck* opponentDeck;
		//Uncomment below when opponent has been added
		//Opponent opponent;

		idList<int> playerHand;
		idList<int> opponentHand;
		Card* playerBattler;
		Card* opponentBattler;

		void StartGame();
		void EndGame();
};
#endif