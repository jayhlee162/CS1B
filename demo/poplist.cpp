#include "hw06.h"
#include <fstream>

void populateList(BookList*& list){
	list = new BookList;
	list->length = 0;
	list->head = nullptr;
	list->tail = nullptr;

	std::string isbn, title, author, space;

	BookEntry *first = nullptr;
	BookEntry *loop = nullptr;
	BookEntry *tmp = nullptr;

	std::ifstream fin("booksdb.txt");
	
	//reading from file
	if (fin) {
		while(getline(fin, isbn) && getline(fin, title) 
			&& getline(fin, author) && getline(fin, space)){

			tmp = new BookEntry(list, nullptr, nullptr, nullptr);
			tmp->book = new BookData(isbn, title, author);

			if (list->head == nullptr){
				list->head = tmp;
			} else {
				loop->next = tmp;
				tmp->prev = loop;
			}

			list->tail = tmp;
			list->length++;
			loop = tmp;
		} 
	} else{
		std::cout << "Failed to open the file." << std::endl;
	}
	
	fin.close();	
}
