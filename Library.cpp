#include <iostream>
#include <string>
#include "Library.h"
#include "Book.h"
using namespace std;

Library::Library(){
    name = "?";
    totalBooks = 0;
    books = new Book[1];
}
Library::Library(std::string lname){
    name = lname;
    totalBooks = 0;
    books = new Book[1];
}

void Library::PrintBooks(){
    for (int i = 0; i < totalBooks; i++){
        cout << books[i].name << endl;
    }
}
void Library::AddBook(std::string bname, std::string bgenre, std::string bauthor, std::string bstatus){
    Book* holdbooks = new Book[totalBooks+1];
    totalBooks = totalBooks + 1;
    for (int i = 0; i < totalBooks-1; i++){
        holdbooks[i] = books[i];
    }
    Book nbook(bname, bgenre, bauthor, bstatus);
    holdbooks[totalBooks-1] = nbook;
    delete[] books;
    books = holdbooks;
}
void Library::BorrowBook(std::string bname){
    int bookNum = -1;
    for (int i = 0; i < totalBooks; i++){
        if (books[i].name == bname && books[i].status == "In"){bookNum = i;}
    }
    if (bookNum == -1){cout<<"This book is not in the library"<<endl; return;}

    books[bookNum].status = "Out";
    cout << books[bookNum].name << " has been borrowed." << endl;
}
void Library::ReturnBook(std::string bname){
    int bookNum = -1;
    for (int i = 0; i < totalBooks; i++){
        if (books[i].name == bname && books[i].status == "Out"){bookNum = i;}
    }
    if (bookNum == -1){cout<<"This book is already in the library"<<endl; return;}

    books[bookNum].status = "In";
    cout << books[bookNum].name << " has been returned." << endl;
}

void Library::InfoBook(std::string bname){
    int copies = 0;
    int bookNum = -1;
    for (int i = 0; i < totalBooks; i++){
        if (books[i].name == bname){copies++;bookNum = i;}
    }
    if (copies == 0){
        cout<<"There are no copies of "<< bname << " in the library."<<endl; return;
    }

    cout << "there are "<< copies << " of ";
    books[bookNum].printBookInfo();

}

Library::~Library(){
    delete[] books;
}