#include "hw09.h"

void Deck::guessFace(){

	std::string answer;

	shuffleDeck();

	std::string selectCard = Cards.front();
	selectCard.pop_back();
	std::string face = selectCard;

	//This tests for the answer
	//std::cout << "THIS IS THE FACE: " << face << std::endl;
	
	std::cout << "Guess the face value: ";
	std::cin >> answer;

	if (face == "J"){
		if (answer == "J" || answer == "j" ||
		    answer == "Jack" || answer == "jack"){
			std::cout << "Correct!\n";
		} else {
			std::cout << "Wrong, the face is: Jack\n";
		}
	}
	else if (face == "Q"){
		if (answer == "Q" || answer == "q" ||
		    answer == "Queen" || answer == "queen"){
			std::cout << "Correct!\n";
		} else {
			std::cout << "Wrong, the face is: Queen\n";
		}
	}
	else if (face == "K"){
		if (answer == "K" || answer == "k" ||
		    answer == "King" || answer == "king"){
			std::cout << "Correct!\n";
		} else {
			std::cout << "Wrong, the answer is: King\n";
		}
	}
	else if (face == "A"){
		if (answer == "A" || answer == "a" ||
		    answer == "Ace" || answer == "ace"){
			    std::cout << "Correct!\n";
		    } else {
			    std::cout << "Wrong, the answer is: Ace\n";
		    }
	}
	else {
		if (answer == face){
			std::cout << "Correct!\n";
		} else {
			std::cout << "Wrong, the answer is: " << face << std::endl;
		}
	}

	menu();
}
