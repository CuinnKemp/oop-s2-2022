#ifndef Library_H
#define Library_H
#include <string>
#include "Book.h"


class Library
{
public:
Library();
Library(std::string lname);
std::string name;
Book* books;
int totalBooks;
void PrintBooks();
void AddBook(std::string bname, std::string bgenre, std::string bauthor, std::string bstatus);
void BorrowBook(std::string bname);
void ReturnBook(std::string bname);
void InfoBook(std::string bname);
~Library();
};
#endif