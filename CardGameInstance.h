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
		Deck playerDeck;
		idUserInterface* mainMenu;
		Deck opponentDeck;
		//Uncomment below when opponent has been added
		//Opponent opponent;

		int cardGameState;

		idList<int> playerHand;
		idList<int> opponentHand;
		Card playerBattler;
		Card playerBoost;
		Card opponentBattler;
		Card opponentBoost;

		void StartGame();

		void PlayBattler(int handIndex, bool playerCard);

		void PlayBoost(int handIndex, bool playerBoost);

		void EndGame();
};
#endif