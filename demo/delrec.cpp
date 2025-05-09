#include "hw06.h"

void deleteRecord(BookList*& list){
	BookList *tmp;
	BookList *loop;
	BookEntry *current = list->head;
	int selection;
	std::cout << "Select which record you would like to delete\n";
	std::cin >> selection;
	displayAll(list);
	
	if (list->head == nulptr){
		return;
	} else {
		//if deleting the first node
		if (selection == 1){
			tmp = current;
			list->head = current->next;
			delete tmp;
		}
		//if deleting the last node (tail)
		//probably can't link int to pointer
		else if (selection == current->tail){
			tmp = current;
			list->tail = current->prev;
			delete tmp;
		}
		else {
		//if deleting from selection
			for (int i = 0; current != nullptr && i <= selection){
				//logic is to reconnect prev to next and
				//to delete current	
				if (i == selection){
				
				} else {
				}		
		}
	}
}
