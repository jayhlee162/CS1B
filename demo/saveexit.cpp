#include "hw06.h"
#include <fstream>

void saveExit(BookList* list){ 
  //appending: std::ofstream fout("booksdb.txt", std::ios::app);
  std::ofstream fout("booksdb.txt");
  BookEntry* loop = list->head;
  BookEntry* tmp = loop;
  while(loop) {
    if (fout){
         //        BookEntry* newEntry = list->tail;
      fout << loop->book->isbn << "\n";
      fout << loop->book->title << "\n";
      fout << loop->book->author << "\n";
      fout << "\n";
 
      std::cout << "Successfully saved record\n";
      loop = loop->next;
    } else {
      std::cout << "Failed to open file for writing\n"; 
    }
//    delete tmp (data & nav);
//    advance tmp
    tmp = loop;
  }
  fout.close();
}
