
#include "idlib/precompiled.h"
#pragma hdrstop


#include "CardGameManager.h"
#include "Card.h"
#include "Deck.h"

Card CardGameManager::cardPool[26] = {
	Card("NOTAREALCARD", "NULL CARD DO NOT USE", false, 0, 0, 0,0),
	Card("Healthpak", "Restore all HP", false, 0, 0 ,0, Card().FULLHEAL),
	Card("Alien", "This is an aliens", true, 4, 2, 0,0),
	Card("Marine", "It's the military perhaps", true, 3, 3, 0,0),
	Card("Rock", "Rocks fall everyone dies", true, 1, 5, 0,0),
	Card("Swordy", idStr("That thing's sharp!"), true, 5, 1, 0,0),
	Card("BadCard", "This card is awful! Why", true, 1, 1, 0,0),
	Card("Bonuspak", "Draw 1", false, 0, 0, 0, Card().DRAW1),
	Card("DrawParty", "Both draw 2", false, 0, 0, 0, Card().BOTHDRAW2),
	Card("Bloodbaath", "Both become sheeps", false, 0, 0, 0, Card().BLOODBAATH),
	Card("Sheep", "baa baa baa", true, 1, 2, 0, 0),
	Card("Powercell", "Boost atk by 1", false, 0, 0, 0, Card().ATK1),
	Card("Shieldpak", "Boost HP by 2", false, 0, 0, 0, Card().HP2),
	Card("Teleswap", "Switch battler on each side", false, 0, 0, 0, Card().SWAPCARDS),
	Card("Armorblast", "Switch atk and hp", false, 0, 0, 0, Card().SWAPHPATK),
	Card("Flag", "Gain 1 point", false, 0, 0, 0, Card().GAINPOINT),
	Card("Flagbuster", "Remove 1pt from opp", false, 0, 0, 0, Card().REMOVEOPPONENTPOINT),
	Card("Weakener", "Lower opp atk by 1", false, 0, 0, 0, Card().REMOVEATK1),
	Card("Sheephands", "All hands become sheeps", false, 0, 0, 0, Card().SHEEPHANDS),
	Card("Gunner", "Pewpewpew", true, 2, 2, 0, 0),
	Card("Coolguy", "What a cool guy", true, 3, 2, 0, 0),
	Card("Doomguy", "do not sue me", true, 4, 4, 0, 0),
	Card("Dog", "it's dog. woof woof", true, 2, 3, 0, 0),
	Card("Pizza del.", "30 minutes or it's free!", true, 2, 1, 0, 0),
	Card("Fish", "Fish used splash!", true, 0, 2, 0, 0),
	Card("B.E.W.D", "wait a second", true, 3000, 2500, 0, 0)

};





Deck CardGameManager::playerDeck = Deck();
Deck CardGameManager::playerCollection = Deck();

CardGameManager::CardGameManager() {
	
	testString = "pie";
	idList<int> deckContents = idList<int>();
	deckContents.Append(HEALTHPAK);
	deckContents.Append(ALIEN);
	deckContents.Append(MARINE);
	deckContents.Append(ROCK);
	deckContents.Append(FLAGBUSTER);
	deckContents.Append(BONUSPAK);
	deckContents.Append(POWERCELL);
	deckContents.Append(SHIELDPAK);
	deckContents.Append(TELESWAP);
	deckContents.Append(WEAKENER);
	deckContents.Append(WEAKENER);
	deckContents.Append(DOG);
	deckContents.Append(FISH);
	deckContents.Append(GUNNER);
	deckContents.Append(GUNNER);
	deckContents.Append(PIZZADELIVERY);

	/*deckContents.Append(ROCK);
	deckContents.Append(SWORDY);
	deckContents.Append(BADCARD);*/
	playerDeck.deckContents = deckContents;
	playerMoneys = 100;
};




