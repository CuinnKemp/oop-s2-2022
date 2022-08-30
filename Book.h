#ifndef Book_H
#define Book_H
#include <string>
// Class definition for a Panda
class Book
{
public:
Book();
Book(std::string bname, std::string bgenre, std::string bauthor, std::string bstatus);
std::string name;
std::string genre;
std::string author;
std::string status;
void printBookInfo();
~Book();
};
#endif //PANDA_H