#include "hw09.h"

void menu(int selection){

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
		default:
			break;
	}
}
