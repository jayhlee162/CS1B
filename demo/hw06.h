#include <iostream>

typedef struct BookList BookList;
typedef struct BookEntry BookEntry;
typedef struct BookData BookData;

struct BookList {
	int length;
	BookEntry *head;
	BookEntry *tail;
};

struct BookEntry {
	BookList *list;
	BookEntry *next;
	BookEntry *prev;
	BookData *book;
};

struct BookData {
	std::string isbn;
	std::string title;
	std::string author;
};

// function prototypes
void menu(BookList *list);
void populateList(BookList*& list);
void addRecord(BookList* list);
void deleteRecord(BookList*& list);
void displayRecord(const BookList *list);
void displayAll(BookList *list);
void saveExit(BookList *list);
