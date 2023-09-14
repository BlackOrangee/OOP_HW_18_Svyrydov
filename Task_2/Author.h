#pragma once
#include <iostream>

using namespace std;

class Author
{
private:
	string name;        // Stores the author name.
	string surname;     // Stores the author surname.
public:
    // Constructor to initialize the Author object with a name and surname.
    Author(string name, string surname);

    // Setter method to update the author's name.
    void setName(string name);

    // Setter method to update the author's surname.
    void setSurname(string surname);

    // Getter method to retrieve the author's name.
    string getName();

    // Getter method to retrieve the author's surname.
    string getSurname();
};

