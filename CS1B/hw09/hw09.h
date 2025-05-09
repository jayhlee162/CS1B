#include <iostream>
#include <algorithm>
#include <vector>
#include <random>

class Deck{
	public:
		void printDeck() const;

		void shuffleDeck();
	private:
	//spades, clubs, diamonds, hearts
	std::vector <std::string> Cards = { "2H", "3H", "4H", "5H",
					    "6H", "7H", "8H", "9H",
				    	    "10H", "JH", "QH", "KH",
					    "2S", "3S", "4S", "5S", 
					    "6S", "7S", "8S", "9S",
					    "10S", "JS", "QS", "KS",
					    "2C", "3C", "4C", "5C",
				   	    "7C", "8C", "9C", "10C",
					    "JC", "QC", "KC", "2D",
					    "3D", "4D", "5D", "6D",
					    "7D", "8D",	"9D", "10D",
					    "JD", "QD", "KD", "AS",
					    "AC", "AD", "AH" };	    
};

void menu(Deck &passDeck);
void guessFace(Deck &passDeck);
void guessSuit(Deck &passDeck);
void guessBoth();

/*
void Deck::shuffleDeck(){
	std::default_random_engine random;
	std::shuffle(Cards.begin(), Cards.end(), random);
}

void Deck::printDeck() const {
	for (const std::string& card : Cards){
		std::cout << card << " ";
	}
}*/
