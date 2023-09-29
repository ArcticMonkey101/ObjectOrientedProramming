#include "List.h"
#include "Node.h"
#include <iostream>

// Constructor
List::List() : head(nullptr) {}

// Copy Constructor
List::List(const List& other) : head(nullptr) {
    Node* current = other.head;
    while (current != nullptr) {
        push_back(current->data);
        current = current->next;
    }
}

// Overload Assignment Operator
List& List::operator=(const List& other) {
    if (this == &other) {
        return *this; // Self-assignment, no need to copy
    }

    // Clear current list
    clear();

    // Copy elements from other list
    Node* current = other.head;
    while (current != nullptr) {
        push_back(current->data);
        current = current->next;
    }

    return *this;
}

// Destructor
List::~List() {
    clear();
}

// New element added to the end of the list
void List::push_back(int value) {
    Node* newNode = new Node(value);
    if (!head) {
        head = newNode;
    } else {
        Node* current = head;
        while (current->next) {
            current = current->next;
        }
        current->next = newNode;
    }
}

// Clear the list to free memory
void List::clear() {
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

// Display the list
void List::display() {
    Node* current = head;
    while (current) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

