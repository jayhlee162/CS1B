#include <iostream>
#include <algorithm>
#include <vector>
#include <ctime>

class Deck{
	public:
		void printDeck() const;
		void shuffleDeck();
		void guessFace();
		void guessSuit();
		void guessBoth();
		void menu();
		
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
