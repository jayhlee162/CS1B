#include "hw09.h"

void guessFace(Deck &passDeck){

	std::cout << "Guess Face";
	passDeck.printDeck();
	menu(passDeck);
}
