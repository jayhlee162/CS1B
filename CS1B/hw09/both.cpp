#include "hw09.h"

void Deck::guessBoth() {

	shuffleDeck();

	std::string selectCard = Cards.front();
	/* Card test
	std::cout << "THIS CARD IS CHOSEN: " << selectCard << std::endl;
	*/

	//Select suit
	char suit = selectCard.back();
	/*Suit test
	std::cout << "THIS IS THE SUIT: " << suit << std::endl;
	*/

	//Select face value
	selectCard.pop_back();
	std::string face = selectCard;
	/* Face test
	std::cout << "THIS IS THE FACE: " << face << std::endl;
	*/

	std::string faceAnswer;
	std::string suitAnswer;
	bool faceCheck = false;
	bool suitCheck = false;

	std::cout << "Guess face value: \n";
	std::cin >> faceAnswer;

	std::cout << "Guess suit: \n";
	std::cin >> suitAnswer;

	//Check face
	if (face == "J"){
                if (faceAnswer == "J" || faceAnswer == "j" ||
                    faceAnswer == "Jack" || faceAnswer == "jack"){
                        faceCheck = true;
                } else {
                        faceCheck = false; 
                }
        }
        else if (face == "Q"){
                if (faceAnswer == "Q" || faceAnswer == "q" ||
                    faceAnswer == "Queen" || faceAnswer == "queen"){
                        faceCheck = true;
                } else {
			faceCheck = false;
                }
        }
        else if (face == "K"){
                if (faceAnswer == "K" || faceAnswer == "k" ||
                    faceAnswer == "King" || faceAnswer == "king"){
                        faceCheck = true; 
                } else {
			faceCheck = false;
                }
        }
        else if (face == "A"){
                if (faceAnswer == "A" || faceAnswer == "a" ||
                    faceAnswer == "Ace" || faceAnswer == "ace"){
                        faceCheck = true;
                } else {
	                faceCheck = false;
                }
        }
        else {
                if (faceAnswer == face){
                        faceCheck = true;
                } else {
			faceCheck = false;
                }
        }

	//Check suit
	if (tolower(suit) == 'h'){
                if (suitAnswer == "Hearts" || suitAnswer == "hearts" ||
                    suitAnswer == "h" || suitAnswer == "H"){
                    	suitCheck = true;
                } else {
                        suitCheck = false;
                }
        }
        else if (tolower(suit) == 'd'){
                if (suitAnswer == "Diamond" || suitAnswer == "diamond" ||
                    suitAnswer == "D" || suitAnswer == "d"){
                        suitCheck = true;
                } else {
                        suitCheck = false;
		}
        }
        else if (tolower(suit) == 'c'){
                if (suitAnswer == "Clubs" || suitAnswer == "clubs" ||
                    suitAnswer == "C" || suitAnswer == "c" || 
		    suitAnswer == "Club" || suitAnswer == "club"){
                        suitCheck = true;
                } else {
			suitCheck = false;                      
		}
        }
        else if (tolower(suit) == 's'){
                if (suitAnswer == "Spade" || suitAnswer == "spade" ||
                    suitAnswer == "S" || suitAnswer == "s" ||
		    suitAnswer == "Spades" || suitAnswer == "spades"){
                        suitCheck = true;
                } else {
                        suitCheck = false; 
                }
        }
	
	//Win/lose condition
	if (faceCheck == true && suitCheck == true){
		std::cout << "Correct!\n";
	} else {
		std::cout << "Wrong, the card is: " << face << suit << std::endl;
	}

	menu();
}
