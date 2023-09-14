#include "FictionBook.h"

// Constructor initializes a FictionBook with specified attributes.
FictionBook::FictionBook(string genre, string bookName, int year, string name, string surname)
    : Book(bookName, year, name, surname)
{
    this->genre = genre;
}

// Override of the getDescription function to provide the genre of the fiction book.
string FictionBook::getDescription()
{
    return genre;
}

// Override of the setDescription function to set the genre of the fiction book.
void FictionBook::setDescription(string genre)
{
    this->genre = genre;
}
