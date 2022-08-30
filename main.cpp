#include "Book.h"
#include "Library.h"
#include <string>
using namespace std;

int main(){
    string libraryName = "Mitcham Library";
    Library Mitcham(libraryName);

    Mitcham.AddBook("Cook Book", "Cooking", "Jamie Oliver", "In");
    Mitcham.AddBook("Cook Book", "Cooking", "Jamie Oliver", "In");
    Mitcham.AddBook("Cook Book", "Cooking", "Jamie Oliver", "In");

    Mitcham.AddBook("History Book", "History", "Moon Men", "In");
    Mitcham.AddBook("History Book", "History", "Moon Men", "In");

    Mitcham.AddBook("Gamers Guide to Social Interaction", "Guide", "Discord", "Out");

    Mitcham.PrintBooks();

    Mitcham.BorrowBook("Cook Book");

    Mitcham.InfoBook("Cook Book");

    Mitcham.InfoBook("History Book");

    Mitcham.InfoBook("Gamers Guide to Social Interaction");

    Mitcham.ReturnBook("Gamers Guide to Social Interaction");
}