#include "Library.h"

// Constructor implementation.
Library::Library()
{
    // Initialize the books attribute as nullptr when a Library object is created.
    books = nullptr;
}

// Method to add a book to the library.
void Library::addBook(Book* book)
{
    // Append the provided book to the linked list of books in the library.
    push_back(books, book);
}

// Method to delete a book from the library by providing the book's name and author's surname.
void Library::deleteBook(string bookName, string surname)
{
    // Search for the book in the library.
    Node* book = searchBook(bookName, surname);

    // If the book is found, remove it from the library.
    if (book != nullptr)
    {
        remove(book);
    }
}

// Method to search for a book in the library by providing the book's name and author's surname.
Node* Library::searchBook(string bookName, string surname)
{
    // Iterate through the linked list of books in the library.
    for (Node* b = books; b != nullptr; b = b->next)
    {
        // Check if the book's name and author's surname match the provided values.
        if (b->book->getBookName() == bookName && b->book->getAuthorSurname() == surname)
        {
            // Return a pointer to the book's node if found.
            return b;
        }
    }

    // If the book is not found, return nullptr.
    return nullptr;
}

// Method to display the books in the library along with their descriptions, names, years, and author information.
void Library::displayLibrary()
{
    // Iterate through the linked list of books in the library.
    for (Node* b = books; b != nullptr; b = b->next)
    {
        // Print information about each book, including its description, name, year, author's name, and author's surname.
        cout << "\n" << b->book->getDescription()
            << " : " << b->book->getBookName()
            << " : " << b->book->getYear()
            << " : " << b->book->getAuthorName()
            << " " << b->book->getAuthorSurname();
    }
}
