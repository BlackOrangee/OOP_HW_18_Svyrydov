// Task 2.
// 
// Create a library management system using an object - oriented approach, utilizing aggregation, composition, and inheritance.
// Implement the following classes :
// 
// Class Author :
// Has fields for storing the author's first name and last name. 
// Has methods for setting and getting information about the author.
// 
// Class Book :
// Has fields for storing the book's title, publication year, and an object of type Author (use composition). 
// Has methods for setting and getting information about the book and its author.
// 
// Class Library :
// Has a field for storing a list of books(use aggregation).
// Has methods for addingand removing books from the library.
// Has a method for searching for a book by title.
// Has a method for displaying a list of all books in the library.
// 
// Class ReferenceBook(inherits from Book) :
// This class should extend the Book class by adding a "section" field(e.g., "Encyclopedia," "Dictionary").
// This class can have additional methods or functionality typically associated with reference books.
// 
// Class FictionBook(inherits from Book) :
// This class should extend the Book class by adding a "genre" field(e.g., "science fiction," "romance").
// This class can have additional methods or functionality typically associated with fiction books.
//

#include <iostream>
#include "Library.h"
#include "FictionBook.h"
#include "ReferenceBook.h"

using namespace std;

int main() {
    // Create a library
    Library library;

    // Add some books to the library
    library.addBook(new FictionBook("Science Fiction", "Dune", 1965, "Frank", "Herbert"));
    library.addBook(new FictionBook("Mystery", "The Da Vinci Code", 2003, "Dan", "Brown"));
    library.addBook(new ReferenceBook("Physics", "Physics for Scientists and Engineers", 2020, "Serway", "Jewett"));
    library.addBook(new FictionBook("Fantasy", "The Hobbit", 1937, "J.R.R.", "Tolkien"));

    // Display the library contents
    cout << "Library Contents:" << endl;
    library.displayLibrary();

    // Remove a book from the library
    cout << "\n\nRemoving book 'The Da Vinci Code' by Dan Brown..." << endl;
    library.deleteBook("The Da Vinci Code", "Brown");

    // Display the updated library contents
    cout << "\nUpdated Library Contents:" << endl;
    library.displayLibrary();
}