#pragma once
#include "Book.h"
#include "Node.h"

class Library
{
private:
    Node* books; // A linked list of books stored in the library.

public:
    // Constructor to initialize a Library object with no books initially.
    Library();

    // Method to add a book to the library.
    void addBook(Book* book);

    // Method to delete a book from the library by providing the book's name and author's surname.
    void deleteBook(string bookName, string surname);

    // Method to search for a book in the library by providing the book's name and author's surname.
    // Returns a pointer to the book's node if found, or nullptr if not found.
    Node* searchBook(string bookName, string surname);

    // Method to display the books in the library along with their descriptions, names, years, and author information.
    void displayLibrary();
};

