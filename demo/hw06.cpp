#include "hw06.h"
#include <fstream>

int main() {

	BookList *list = nullptr;

	populateList(list); // void populateList (BookList&* list) { . . . }
	menu(list);
}
