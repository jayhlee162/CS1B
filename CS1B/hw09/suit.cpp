#include "hw09.h"

void guessSuit(Deck &passDeck){

	std::cout << "Guess Suit";
	passDeck.shuffleDeck();
	menu(passDeck);
}
