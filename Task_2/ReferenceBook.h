#pragma once
#include "Book.h"

class ReferenceBook : public Book
{
private:
    string section; // Stores the section of the reference book.

public:
    // Constructor to create a ReferenceBook with specified attributes.
    ReferenceBook(string bookName, string authorName, int publicationYear, string authorSurname, string section);

    // Override of the getDescription function to provide a description of the reference book.
    string getDescription() override;

    // Override of the setDescription function to set the section of the reference book.
    void setDescription(string section) override;
};


