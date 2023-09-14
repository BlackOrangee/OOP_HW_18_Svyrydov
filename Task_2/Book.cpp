#include "Book.h"

// Constructor implementation.
Book::Book(string bookName, int year, string name, string surname)
{
    // Initialize the bookName, year, and author attributes when a Book object is created.
    this->bookName = bookName;
    this->year = year;
    author = new Author(name, surname); // Create a new Author object with the provided name and surname.
}

// Setter method to update the book's name.
void Book::setBookName(string bookName)
{
    // Set the book's name to the provided value.
    this->bookName = bookName;
}

// Setter method to update the book's publication year.
void Book::setYear(int year)
{
    // Set the book's publication year to the provided value.
    this->year = year;
}

// Setter method to update the author's name.
void Book::setAuthorName(string name)
{
    // Set the author's name using the Author object's setter method.
    author->setName(name);
}

// Setter method to update the author's surname.
void Book::setAuthorSurname(string surname)
{
    // Set the author's surname using the Author object's setter method.
    author->setSurname(surname);
}

// Getter method to retrieve the book's name.
string Book::getBookName()
{
    // Return the book's name.
    return bookName;
}

// Getter method to retrieve the book's publication year.
int Book::getYear()
{
    // Return the book's publication year.
    return year;
}

// Getter method to retrieve the author's name.
string Book::getAuthorName()
{
    // Return the author's name using the Author object's getter method.
    return author->getName();
}

// Getter method to retrieve the author's surname.
string Book::getAuthorSurname()
{
    // Return the author's surname using the Author object's getter method.
    return author->getSurname();
}
