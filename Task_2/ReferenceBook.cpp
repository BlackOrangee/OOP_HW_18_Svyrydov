#include "ReferenceBook.h"

// Constructor initializes a ReferenceBook with specified attributes.
ReferenceBook::ReferenceBook(string section, string bookName, int year, string name, string surname)
    : Book(bookName, year, name, surname)
{
    this->section = section;
}

// Override of the getDescription function to provide the section of the reference book.
string ReferenceBook::getDescription()
{
    return section;
}

// Override of the setDescription function to set the section of the reference book.
void ReferenceBook::setDescription(string section)
{
    this->section = section;
}
