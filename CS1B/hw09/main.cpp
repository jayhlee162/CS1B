#include "hw09.h"

int main(){

	int selection = 0;

        std::cout << "Want to play?\n";
        std::cout << "1. Guess the face of the card\n";
        std::cout << "2. Guess the suit of the card\n";
        std::cout << "3. Guess both the face and suit\n";
        std::cin >> selection;

	menu(selection);
}
