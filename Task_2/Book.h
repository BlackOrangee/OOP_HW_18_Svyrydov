#pragma once
#include "Author.h"

class Book
{
private:
    string bookName;      // Stores the name of the book.
    int year;             // Stores the publication year of the book.
    Author* author;       // Represents the author of the book.

public:
    // Constructor to initialize a Book object with a book name, publication year, author's name, and author's surname.
    Book(string bookName, int year, string name, string surname);

    // Setter method to update the book's name.
    void setBookName(string bookName);

    // Setter method to update the book's publication year.
    void setYear(int year);

    // Setter method to update the author's name.
    void setAuthorName(string name);

    // Setter method to update the author's surname.
    void setAuthorSurname(string surname);

    // Getter method to retrieve the book's name.
    string getBookName();

    // Getter method to retrieve the book's publication year.
    int getYear();

    // Getter method to retrieve the author's name.
    string getAuthorName();

    // Getter method to retrieve the author's surname.
    string getAuthorSurname();

    // Abstract method to get the book's description (to be implemented by derived classes).
    virtual string getDescription() = 0;

    // Abstract method to set the book's description (to be implemented by derived classes).
    virtual void setDescription(string description) = 0;
};

