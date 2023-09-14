#pragma once
#include "Book.h"
class FictionBook :
    public Book
{
private:
    string genre; // Store the genre of the fiction book.

public:
    // Constructor to initialize a FictionBook object.
    FictionBook(string genre, string bookName, int year, string name, string surname);

    // Override the base class function to get the description (genre) of the book.
    string getDescription() override;

    // Override the base class function to set the genre of the book.
    void setDescription(string genre) override;
};

