#include "hw09.h"

void Deck::shuffleDeck(){
        std::default_random_engine random;
        std::shuffle(Cards.begin(), Cards.end(), random);
}

