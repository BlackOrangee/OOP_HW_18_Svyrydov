#pragma once
#include "Book.h"

class Node
{
public:
    Book* book;     // Pointer to a Book object.
    Node* next;     // Pointer to the next node.
    Node* prev;     // Pointer to the previous node.

    // Constructor to create a Node with a given Book.
    Node(Book* book);

    // Constructor to create a Node with a given Book and a specified previous Node.
    Node(Node* prevNode, Book* book);
};

// Function to push a new Node containing a Book to the back of a doubly-linked list.
void push_back(Node*& head, Book* book);

// Function to remove a Node from a doubly-linked list.
void remove(Node*& nodeToRemove);
