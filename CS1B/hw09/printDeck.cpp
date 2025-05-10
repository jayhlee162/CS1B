#include "hw09.h"

void Deck::printDeck() const {
        for (const std::string& card : Cards){
                std::cout << card << " ";
        }
}
