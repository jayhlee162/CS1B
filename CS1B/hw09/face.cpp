#include "hw09.h"

void Deck::guessFace(){

	shuffleDeck();

	std::cout << "Guess the face";
	menu();
}
