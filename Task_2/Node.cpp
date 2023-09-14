#include "Node.h"

// Constructor to create a Node for a book.
Node::Node(Book* book)
{
    this->book = book;
    next = nullptr;
    prev = nullptr;
}

// Constructor to create a Node for a book with a previous Node.
Node::Node(Node* head, Book* book)
{
    this->book = book;
    next = nullptr;
    prev = head;
}

// Function to push a book Node to the back of the doubly-linked list.
void push_back(Node*& head, Book* book)
{
    // If the list is empty, create a new Node and set it as the head.
    if (head == nullptr)
    {
        head = new Node(book);
        return;
    }

    // Iterate to the last Node in the doubly-linked list.
    Node* slider = head;
    while (slider->next != nullptr)
    {
        slider = slider->next;
    }

    // Add a new Node with the provided book as the next Node.
    slider->next = new Node(slider, book);
}

// Function to remove a Node from the doubly-linked list.
void remove(Node*& head)
{
    // If the Node to remove is the head (first Node in the list).
    if (head->prev == nullptr)
    {
        head = head->next;
        if (head != nullptr)
        {
            head->prev = nullptr;
        }
        return;
    }

    // If the Node to remove is the last Node in the list.
    if (head->next == nullptr)
    {
        head = head->prev;
        if (head != nullptr)
        {
            head->next = nullptr;
        }
        return;
    }

    // For Nodes in the middle of the list.
    head->prev->next = head->next;
    head->next->prev = head->prev;
    head->next = nullptr;
    head->prev = nullptr;
}

