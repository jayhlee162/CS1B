#include "hw06.h"

void menu(BookList *list){
	int selection = 0;
	std::cout << "Select from the following options:\n";
	std::cout << "1. Add a record\n";
	std::cout << "2. Delete a record\n";
	std::cout << "3. Display a record\n";
	std::cout << "4. Display all records\n";
	std::cout << "5. Save and exit\n";
	
	std::cout << "Enter your choice: ";
	std::cin >> selection;
	
	switch(selection) {
		case 1: 
			addRecord(list);
			break;
		case 2:
			deleteRecord(list);
			break;
		case 3:
		case 4:
			displayAll(list);
			menu(list);
			break;
		case 5:
			saveExit(list);
			break;
	}
}
