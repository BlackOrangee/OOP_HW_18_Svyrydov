#include "Author.h"

// Constructor implementation.
Author::Author(string name, string surname)
{
    // Initialize the name and surname attributes when an Author object is created.
    this->name = name;
    this->surname = surname;
}

// Setter method to update the author's name.
void Author::setName(string name)
{
    // Set the author's name to the provided value.
    this->name = name;
}

// Setter method to update the author's surname.
void Author::setSurname(string surname)
{
    // Set the author's surname to the provided value.
    this->surname = surname;
}

// Getter method to retrieve the author's name.
string Author::getName()
{
    // Return the author's name.
    return name;
}

// Getter method to retrieve the author's surname.
string Author::getSurname()
{
    // Return the author's surname.
    return surname;
}