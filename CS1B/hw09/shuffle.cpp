#include "hw09.h"
#include <iostream>
#include <random>

void Deck::shuffleDeck(){
        std::default_random_engine random;

	//found on google, seeds random number generator in order for
        //shuffle to work after every run
	std::random_device rd;
	std::mt19937 seed(rd());
        std::shuffle(Cards.begin(), Cards.end(), seed);
}

