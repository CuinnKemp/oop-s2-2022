#include <iostream>
#include "Book.h"
using namespace std;

Book::Book(){
    name = "?";
    genre = "?";
    author = "?";
    status = "?";
}
Book::Book(std::string bname, std::string bgenre, std::string bauthor, std::string bstatus){
    name = bname;
    genre = bgenre;
    author = bauthor;
    status = bstatus;
}
void Book::printBookInfo(){
    cout << "Book name: "<< name << "  Book genre: " << genre << "  Book author: " << author << "    Book status: " << status << endl; 
}
Book::~Book(){
}