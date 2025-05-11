#include "hw09.h"

void Deck::menu(){
	
	int selection = 0;

        std::cout << "Want to play?\n";
        std::cout << "1. Guess the face of the card\n";
        std::cout << "2. Guess the suit of the card\n";
        std::cout << "3. Guess both the face and suit\n";
	std::cout << "4. End game\n";
        std::cin >> selection;	

	switch(selection) {
		case 1:
			guessFace();
			break;
		case 2:
			guessSuit();
			break;
		case 3:
			guessBoth();
			break;
		case 4:
			return;
			break;
		default:
			break;
	}
}
