#include "hw09.h"
#include <iostream>
#include <random>

void Deck::guessSuit(){

	std::string answer;
	std::string selectCard;
	//shuffle, then select a card (top card)
	shuffleDeck();
	selectCard = Cards.front();
	char suit = selectCard.back();

	std::cout << "THIS CARD IS CHOSEN: " << selectCard << std::endl;
	std::cout << "THIS IS THE SUIT: " << suit << std::endl;

	std::cout << "Guess the suit: ";
	std::cin >> answer;

	if (tolower(suit) == 'h'){
		if (answer == "Hearts" || answer == "hearts" || 
		    answer == "h" || answer == "H"){
		    std::cout << "Correct!\n";
		} else {
			std::cout << "Wrong, the suit is: Hearts\n";
		}
	}
	else if (tolower(suit) == 'd'){
		if (answer == "Diamond" || answer == "diamond" || 
		    answer == "D" || answer == "d"){
			std::cout << "Correct!\n";
		} else {
			std::cout << "Wrong, the suit is: Diamond\n";
		}
	}
	else if (tolower(suit) == 'c'){
		if (answer == "Clubs" || answer == "clubs" ||
		    answer == "C" || answer == "c" || answer == "Club" ||
		    answer == "club"){
			std::cout << "Correct!\n";
		} else {
			std::cout << "Wrong, the suit is: Clubs\n";
		}
	}
	else if (tolower(suit) == 's'){
		if (answer == "Spade" || answer == "spade" ||
		    answer == "S" || answer == "s"){
			std::cout << "Correct!\n";
		} else {
			std::cout << "Wrong, the suit is: Spade\n";
		}
	}

	menu();
}
