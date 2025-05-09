#include "hw06.h"
//showrecs.cpp

void displayAll(BookList *list){
	BookEntry* current = list->head;
	int index = 1;
	
	if (list->head == nullptr){
		std::cout << "Empty list" << std::endl;
		return;
	}

	//populateList(list);

	do {
		std::cout << index << std::endl;
		std::cout << "ISBN: " << current->book->isbn << std::endl;
		std::cout << "Title: " << current->book->title << std::endl;
		std::cout << "Author: " << current->book->author << std::endl;

		std::cout << std::endl;
		current = current->next;
		index++;
	} while (current != nullptr);

}
