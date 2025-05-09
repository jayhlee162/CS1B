#include "hw06.h"

void addRecord(BookList* list){
	BookEntry* newEntry = new BookEntry;
        newEntry->book = new BookData;
	//prompts user to input new record
	std::cin.ignore();
        std::cout << "Enter book ISBN: ";  
        std::getline(std::cin, newEntry->book->isbn);
        std::cout << "Enter book title: ";
        std::getline(std::cin, newEntry->book->title);
        std::cout << "Enter author: ";
        std::getline(std::cin, newEntry->book->author);

	std::cout << "Book successfully added." << std::endl << std::endl;
	//checks if list is empty, and then adds it to end of list
	newEntry->next = nullptr;
	newEntry->prev = nullptr;

	if (list->head == nullptr) {
		list->head = newEntry;
		list->tail = newEntry;
	} else {
		list->tail->next = newEntry;
		newEntry->prev = list->tail;
	}
	list->tail = newEntry;

	displayAll(list);
	//populateList(list);
	//menu(list);

}
