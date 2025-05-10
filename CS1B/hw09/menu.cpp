#include "hw09.h"

void menu(Deck &passDeck){
	
	int selection = 0;

        std::cout << "Want to play?\n";
        std::cout << "1. Guess the face of the card\n";
        std::cout << "2. Guess the suit of the card\n";
        std::cout << "3. Guess both the face and suit\n";
        std::cin >> selection;

	switch(selection) {
		case 1:
			guessFace(passDeck);
			break;
		case 2:
			guessSuit(passDeck);
			break;
		case 3:
	//		guessBoth(passDeck);
			break;
		default:
			break;
	}
}
